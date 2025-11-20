/*
 * Module: pd4
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

 `include "constants.svh"

module pd4 #(
    parameter int AWIDTH = 32,
    parameter int DWIDTH = 32)(
    input logic clk,
    input logic reset
);

 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */

  localparam logic [AWIDTH-1:0] DMEM_BASE_ADDR = IMEM_BASE_ADDR;

  //fetch signals

  logic [AWIDTH-1:0] if_pc;
  logic [DWIDTH-1:0] if_insn;
  logic [AWIDTH-1:0] next_pc;
  logic [DWIDTH-1:0] imem_data;

  //decode signals
  logic [AWIDTH-1:0] id_pc;
  logic [DWIDTH-1:0] id_insn;
  logic [6:0] id_opcode;
  logic [4:0] id_rd;
  logic [4:0] id_rs1;
  logic [4:0] id_rs2;
  logic [6:0] id_funct7;
  logic [2:0] id_funct3;
  logic [4:0] id_shamt;
  logic [DWIDTH-1:0] id_imm;

  //control signals
  logic id_pcsel;
  logic id_immsel;
  logic id_regwren;
  logic id_rs1sel;
  logic id_rs2sel;
  logic id_memren;
  logic id_memwren;
  logic [1:0] id_wbsel;
  logic [3:0] id_alusel;

  //register file signals

  logic [4:0] rf_rs1_addr;
  logic [4:0] rf_rs2_addr;
  logic [DWIDTH-1:0] rf_rs1_data;
  logic [DWIDTH-1:0] rf_rs2_data;
  logic [DWIDTH-1:0] wb_data;
  
  //exectue stage

  logic [DWIDTH-1:0] ex_alu_res;
  logic ex_br_taken;

  // data memory interface signals
  
  logic [DWIDTH-1:0] dmem_addr;
  logic [DWIDTH-1:0] dmem_rdata;
  logic [DWIDTH-1:0] dmem_wdata;
  logic [DWIDTH/8-1:0] dmem_wstrb;
  logic dmem_read_en;
  logic dmem_write_en;
  logic dmem_rvalid;
  logic [DWIDTH-1:0] mem_stage_data;

  //auxiliary signals
  logic [1:0] byte_offset;
  logic [4:0] shift_amt;
  logic [DWIDTH-1:0] store_data_masked;
  logic [DWIDTH-1:0] shifted_store_data;
  logic [DWIDTH-1:0] shifted_load_data;
  logic branch_taken_actual;

  //imem read only 
  memory #(
    .AWIDTH(AWIDTH),
    .DWIDTH(DWIDTH),
    .IMEM_BASE_ADDR(IMEM_BASE_ADDR)
  ) u_mem (
        .clk(clk),
        .rst(reset),
        .addr_i(if_pc),
        .data_i('0),
        .write_strb_i('0),
        .read_en_i(1'b1),
        .write_en_i(1'b0),
        .data_o(imem_data),
        .data_vld_o()
  );

  fetch #(
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH),
        .RESET_PC(IMEM_BASE_ADDR)
  ) u_fetch (
        .clk(clk),
        .rst(reset),
        .pcsel_i(branch_taken_actual),
        .pc_branch_i(ex_alu_res[AWIDTH-1:0]),
        .next_pc_i(next_pc),
        .insn_mem_i(imem_data),
        .pc_o(if_pc),
        .insn_o(if_insn)
    );

    decode #(
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH)
    ) u_decode (
        .clk(clk),
        .rst(reset),
        .insn_i(if_insn),
        .pc_i(if_pc),
        .pc_o(id_pc),
        .insn_o(id_insn),
        .opcode_o(id_opcode),
        .rd_o(id_rd),
        .rs1_o(id_rs1),
        .rs2_o(id_rs2),
        .funct7_o(id_funct7),
        .funct3_o(id_funct3),
        .shamt_o(id_shamt),
        .imm_o(id_imm)
  );

    control #(
        .DWIDTH(DWIDTH)
    ) u_control (
        .insn_i(id_insn),
        .opcode_i(id_opcode),
        .funct7_i(id_funct7),
        .funct3_i(id_funct3),
        .pcsel_o(id_pcsel),
        .immsel_o(id_immsel),
        .regwren_o(id_regwren),
        .rs1sel_o(id_rs1sel),
        .rs2sel_o(id_rs2sel),
        .memren_o(id_memren),
        .memwren_o(id_memwren),
        .wbsel_o(id_wbsel),
        .alusel_o(id_alusel)
  );

    assign rf_rs1_addr = id_rs1sel ? id_rs1 : 5'd0;
    assign rf_rs2_addr = id_rs2sel ? id_rs2 : 5'd0;
  
    register_file #(
        .DWIDTH(DWIDTH)
    ) register_file_0 (
        .clk(clk),
        .rst(reset),
        .rs1_i(rf_rs1_addr),
        .rs2_i(rf_rs2_addr),
        .rd_i(id_rd),
        .datawb_i(wb_data),
        .regwren_i(id_regwren),
        .rs1data_o(rf_rs1_data),
        .rs2data_o(rf_rs2_data)
    );

    alu #(
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH)
    ) u_alu (
        .pc_i(id_pc),
        .rs1_i(rf_rs1_data),
        .rs2_i(rf_rs2_data),
        .imm_i(id_imm),
        .opcode_i(id_opcode),
        .alusel_i(id_alusel),
        .funct3_i(id_funct3),
        .funct7_i(id_funct7),
        .res_o(ex_alu_res),
        .brtaken_o(ex_br_taken)
    );

    assign byte_offset = ex_alu_res[1:0];
    assign shift_amt = {byte_offset, 3'b000};
    always_comb begin
        store_data_masked = rf_rs2_data;
        if (id_memwren) begin
            unique case (id_funct3)
                3'b000 : store_data_masked = {{(DWIDTH-8){1'b0}}, rf_rs2_data[7:0]};
                3'b001 : store_data_masked = {{(DWIDTH-16){1'b0}}, rf_rs2_data[15:0]};
                default : store_data_masked = rf_rs2_data;
            endcase
        end
    end

    assign shifted_store_data = store_data_masked << shift_amt;
    assign shifted_load_data = dmem_rdata >> shift_amt;

    always_comb begin
        dmem_wstrb = '0;
        if (id_memwren) begin
            unique case (id_funct3)
                3'b000: dmem_wstrb = 4'b0001 << byte_offset; // SB
                3'b001: dmem_wstrb = byte_offset[1] ? 4'b1100 : 4'b0011; 
                3'b010: dmem_wstrb = 4'b1111; 
                default: dmem_wstrb = '0;
            endcase
        end
    end

    assign dmem_wdata = shifted_store_data;
    assign dmem_addr = ex_alu_res[AWIDTH-1:0];
    assign dmem_read_en = id_memren;
    assign dmem_write_en = id_memwren;

    memory #(
        .AWIDTH(AWIDTH),
        .DWIDTH(DWIDTH),
        .IMEM_BASE_ADDR(DMEM_BASE_ADDR)
    ) u_dmem (
        .clk(clk),
        .rst(reset),
        .addr_i(dmem_addr),
        .data_i(dmem_wdata),
        .write_strb_i(dmem_wstrb),
        .read_en_i(dmem_read_en),
        .write_en_i(dmem_write_en),
        .data_o(dmem_rdata),
        .data_vld_o(dmem_rvalid)
    ) ;

    always_comb begin
        mem_stage_data = dmem_rdata;
        if (id_memren) begin
            unique case (id_funct3)
                3'b000: mem_stage_data = {{24{shifted_load_data[7]}}, shifted_load_data[7:0]}; // LB
                3'b001: mem_stage_data = {{16{shifted_load_data[15]}}, shifted_load_data[15:0]}; // LH
                3'b010: mem_stage_data = shifted_load_data; // LW
                3'b100: mem_stage_data = {24'b0, shifted_load_data[7:0]}; // LBU
                3'b101: mem_stage_data = {16'b0, shifted_load_data[15:0]}; // LHU
                default: mem_stage_data = shifted_load_data; // LW
            endcase
        end
    end

    assign branch_taken_actual = id_pcsel & ex_br_taken;

    writeback #(
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH)
    ) u_writeback (
        .pc_i(id_pc),
        .alu_res_i(ex_alu_res),
        .memory_data_i(mem_stage_data),
        .imm_i(id_imm),
        .wbsel_i(id_wbsel),
        .brtaken_i(branch_taken_actual),
        .writeback_data_o(wb_data),
        .next_pc_o(next_pc)
    );



// program termination logic
logic is_program;
/*always_ff @(posedge clk) begin
    if (data_out == 32'h00000073) $finish;  // directly terminate if see ecall
    if (data_out == 32'h00008067) is_program = 1;  // if see ret instruction, it is simple program test
    // [TODO] Change register_file_0.registers[2] to the appropriate x2 register based on your module instantiations...
    if (is_program && (register_file_0.registers[2] == 32'h01000000 + `MEM_DEPTH)) $finish;
end
*/

always_ff @(posedge clk) begin
        if (reset) begin
            is_program <= 1'b0;
        end else begin
            if (if_insn == 32'h00000073) begin // ecall
                $finish;
            end
            if (if_insn == 32'h00008067) begin // ret instruction
                is_program <= 1'b1;
            end
            if (is_program && (register_file_0.registers[2] == IMEM_BASE_ADDR + `MEM_DEPTH)) begin
                $finish;
            end
        end
    end

endmodule : pd4
