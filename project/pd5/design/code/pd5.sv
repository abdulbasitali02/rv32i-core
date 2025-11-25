/*
 * Module: pd5
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

 `include "constants.svh"

module pd5 #(
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
  logic [DWIDTH-1:0] imem_data;
  logic [AWIDTH-1:0] next_pc;
  logic stall_fetch;
  logic flush_fetch;

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
  
  //ID/EX stage

  logic [AWIDTH-1:0] idex_pc;
  logic [DWIDTH-1:0] idex_imm;
  logic [DWIDTH-1:0] idex_rs1_data;
  logic [DWIDTH-1:0] idex_rs2_data;
  logic [6:0] idex_opcode;
  logic [6:0] idex_funct7;
  logic [2:0] idex_funct3;
  logic [4:0] idex_shamt;
  logic [4:0] idex_rs1;
  logic [4:0] idex_rs2;
  logic [4:0] idex_rd;
  logic idex_pcsel;
  logic idex_regwren;
  logic idex_rs1sel;
  logic idex_rs2sel;
  logic idex_memren;
  logic idex_memwren;
  logic [1:0] idex_wbsel;
  logic [3:0] idex_alusel;

  //exectue stage

  logic [DWIDTH-1:0] ex_alu_res;
  logic ex_br_taken;

    logic branch_taken_ex;
  logic [DWIDTH-1:0] ex_op_a;
  logic [DWIDTH-1:0] ex_op_b;

  // EX/MEM pipeline registers
  logic [AWIDTH-1:0] exmem_pc;
  logic [DWIDTH-1:0] exmem_alu_res;
  logic [DWIDTH-1:0] exmem_rs2_data;
  logic [2:0] exmem_funct3;
  logic exmem_memren;
  logic exmem_memwren;
  logic exmem_regwren;
  logic [1:0] exmem_wbsel;
  logic [4:0] exmem_rd;
  logic exmem_branch_taken;
  logic [DWIDTH-1:0] exmem_imm;
  
  //memory
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

    //mem/wb stage
      // MEM/WB pipeline registers
  logic [AWIDTH-1:0] memwb_pc;
  logic [DWIDTH-1:0] memwb_alu_res;
  logic [DWIDTH-1:0] memwb_mem_data;
  logic [DWIDTH-1:0] memwb_imm;
  logic [1:0] memwb_wbsel;
  logic memwb_regwren;
  logic [4:0] memwb_rd;

  // Hazard and forwarding helpers
  logic load_hazard;
  logic [DWIDTH-1:0] wb_stage_data;
  logic [DWIDTH-1:0] exmem_forward_data;

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
        .stall_i(stall_fetch),
        .flush_i(flush_fetch),
        .pcsel_i(branch_taken_ex),
        .pc_branch_i(ex_alu_res[AWIDTH-1:0]),
        .next_pc_i(next_pc),
        .insn_mem_i(imem_data),
        .pc_o(if_pc),
        .insn_o(if_insn)
    );

    assign next_pc = if_pc + AWIDTH'(32'd4);

  // Decode stage
  decode #(
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH)
    ) u_decode (
        .clk(clk),
        .rst(reset),
        .stall_i(stall_fetch),
        .flush_i(flush_fetch),
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
        .rd_i(memwb_rd),
        .datawb_i(wb_data),
        .regwren_i(memwb_regwren),
        .rs1data_o(rf_rs1_data),
        .rs2data_o(rf_rs2_data)
    );

    // Hazard detection (load-use)
  assign load_hazard = idex_memren && (idex_rd != 5'd0) &&
                      ((id_rs1sel && (idex_rd == id_rs1)) ||
                       (id_rs2sel && (idex_rd == id_rs2)));

  assign stall_fetch = load_hazard;
  assign flush_fetch = branch_taken_ex;

  // ID/EX pipeline register with bubble insertion on hazards/flushes
  always_ff @(posedge clk) begin
    if (reset) begin
      idex_pc       <= AWIDTH'(IMEM_BASE_ADDR);
      idex_imm      <= '0;
      idex_rs1_data <= '0;
      idex_rs2_data <= '0;
      idex_opcode   <= '0;
      idex_funct7   <= '0;
      idex_funct3   <= '0;
      idex_shamt    <= '0;
      idex_rs1      <= '0;
      idex_rs2      <= '0;
      idex_rd       <= '0;
      idex_pcsel    <= 1'b0;
      idex_regwren  <= 1'b0;
      idex_rs1sel   <= 1'b0;
      idex_rs2sel   <= 1'b0;
      idex_memren   <= 1'b0;
      idex_memwren  <= 1'b0;
      idex_wbsel    <= WBSEL_ALU;
      idex_alusel   <= ALU_OP_ADD;
    end else if (flush_fetch) begin
      idex_pc       <= id_pc;
      idex_imm      <= '0;
      idex_rs1_data <= '0;
      idex_rs2_data <= '0;
      idex_opcode   <= OPCODE_OP;
      idex_funct7   <= '0;
      idex_funct3   <= '0;
      idex_shamt    <= '0;
      idex_rs1      <= '0;
      idex_rs2      <= '0;
      idex_rd       <= '0;
      idex_pcsel    <= 1'b0;
      idex_regwren  <= 1'b0;
      idex_rs1sel   <= 1'b0;
      idex_rs2sel   <= 1'b0;
      idex_memren   <= 1'b0;
      idex_memwren  <= 1'b0;
      idex_wbsel    <= WBSEL_ALU;
      idex_alusel   <= ALU_OP_ADD;
    end else if (load_hazard) begin
      idex_pc       <= id_pc;
      idex_imm      <= '0;
      idex_rs1_data <= '0;
      idex_rs2_data <= '0;
      idex_opcode   <= OPCODE_OP;
      idex_funct7   <= '0;
      idex_funct3   <= '0;
      idex_shamt    <= '0;
      idex_rs1      <= '0;
      idex_rs2      <= '0;
      idex_rd       <= '0;
      idex_pcsel    <= 1'b0;
      idex_regwren  <= 1'b0;
      idex_rs1sel   <= 1'b0;
      idex_rs2sel   <= 1'b0;
      idex_memren   <= 1'b0;
      idex_memwren  <= 1'b0;
      idex_wbsel    <= WBSEL_ALU;
      idex_alusel   <= ALU_OP_ADD;
    end else begin
      idex_pc       <= id_pc;
      idex_imm      <= id_imm;
      idex_rs1_data <= rf_rs1_data;
      idex_rs2_data <= rf_rs2_data;
      idex_opcode   <= id_opcode;
      idex_funct7   <= id_funct7;
      idex_funct3   <= id_funct3;
      idex_shamt    <= id_shamt;
      idex_rs1      <= id_rs1;
      idex_rs2      <= id_rs2;
      idex_rd       <= id_rd;
      idex_pcsel    <= id_pcsel;
      idex_regwren  <= id_regwren;
      idex_rs1sel   <= id_rs1sel;
      idex_rs2sel   <= id_rs2sel;
      idex_memren   <= id_memren;
      idex_memwren  <= id_memwren;
      idex_wbsel    <= id_wbsel;
      idex_alusel   <= id_alusel;
    end
  end

  // Writeback data for forwarding
  logic [AWIDTH-1:0] memwb_pc_plus4;
  assign memwb_pc_plus4 = memwb_pc + AWIDTH'(32'd4);
  always_comb begin
    unique case (memwb_wbsel)
      WBSEL_MEM: wb_data = memwb_mem_data;
      WBSEL_PC4: wb_data = DWIDTH'(memwb_pc_plus4);
      WBSEL_IMM: wb_data = memwb_imm;
      default:   wb_data = memwb_alu_res;
    endcase
  end

  assign exmem_forward_data = exmem_memren ? memwb_mem_data : exmem_alu_res;

  // Forwarding selection for execute stage
  always_comb begin
    ex_op_a = idex_rs1_data;
    ex_op_b = idex_rs2_data;

    if (memwb_regwren && (memwb_rd != 5'd0) && (memwb_rd == idex_rs1)) begin
      ex_op_a = wb_data;
    end else if (!exmem_memren && exmem_regwren && (exmem_rd != 5'd0) && (exmem_rd == idex_rs1)) begin
      ex_op_a = exmem_forward_data;
    end

    if (memwb_regwren && (memwb_rd != 5'd0) && (memwb_rd == idex_rs2)) begin
      ex_op_b = wb_data;
    end else if (!exmem_memren && exmem_regwren && (exmem_rd != 5'd0) && (exmem_rd == idex_rs2)) begin
      ex_op_b = exmem_forward_data;
    end
  end

  execute #(
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH)
    ) u_alu (
          .pc_i(idex_pc),
        .rs1_i(ex_op_a),
        .rs2_i(ex_op_b),
        .imm_i(idex_imm),
        .opcode_i(idex_opcode),
        .alusel_i(idex_alusel),
        .funct3_i(idex_funct3),
        .funct7_i(idex_funct7),
        .res_o(ex_alu_res),
        .brtaken_o(ex_br_taken)
    );

    assign branch_taken_ex = idex_pcsel & ex_br_taken;

  // EX/MEM pipeline register
  always_ff @(posedge clk) begin
    if (reset) begin
      exmem_pc        <= AWIDTH'(IMEM_BASE_ADDR);
      exmem_alu_res   <= '0;
      exmem_rs2_data  <= '0;
      exmem_funct3    <= '0;
      exmem_memren    <= 1'b0;
      exmem_memwren   <= 1'b0;
      exmem_regwren   <= 1'b0;
      exmem_wbsel     <= WBSEL_ALU;
      exmem_rd        <= '0;
      exmem_branch_taken <= 1'b0;
      exmem_imm       <= '0;
    end else begin
      exmem_pc        <= idex_pc;
      exmem_alu_res   <= ex_alu_res;
      exmem_rs2_data  <= ex_op_b;
      exmem_funct3    <= idex_funct3;
      exmem_memren    <= idex_memren;
      exmem_memwren   <= idex_memwren;
      exmem_regwren   <= idex_regwren;
      exmem_wbsel     <= idex_wbsel;
      exmem_rd        <= idex_rd;
      exmem_branch_taken <= branch_taken_ex;
      exmem_imm       <= idex_imm;
    end
  end

    assign byte_offset = exmem_alu_res[1:0];
    assign shift_amt = {byte_offset, 3'b000};
    always_comb begin
         store_data_masked = exmem_rs2_data;
        if (exmem_memwren) begin
            unique case (exmem_funct3)
                3'b000 : store_data_masked = {{(DWIDTH-8){1'b0}}, exmem_rs2_data[7:0]};
                3'b001 : store_data_masked = {{(DWIDTH-16){1'b0}}, exmem_rs2_data[15:0]};
                default : store_data_masked = exmem_rs2_data;
            endcase
        end
    end

    assign shifted_store_data = store_data_masked << shift_amt;
    assign shifted_load_data = dmem_rdata >> shift_amt;

    always_comb begin
        dmem_wstrb = '0;
       if (exmem_memwren) begin
            unique case (exmem_funct3)
                3'b000: dmem_wstrb = 4'b0001 << byte_offset; // SB
                3'b001: dmem_wstrb = byte_offset[1] ? 4'b1100 : 4'b0011;
                3'b010: dmem_wstrb = 4'b1111;
                default: dmem_wstrb = '0;
            endcase
        end
    end

    assign dmem_wdata = shifted_store_data;
    assign dmem_addr = exmem_alu_res[AWIDTH-1:0];
    assign dmem_read_en = exmem_memren;
    assign dmem_write_en = exmem_memwren;

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
        if (exmem_memren) begin
            unique case (exmem_funct3)
                3'b000: mem_stage_data = {{24{shifted_load_data[7]}}, shifted_load_data[7:0]}; // LB
                3'b001: mem_stage_data = {{16{shifted_load_data[15]}}, shifted_load_data[15:0]}; // LH
                3'b010: mem_stage_data = shifted_load_data; // LW
                3'b100: mem_stage_data = {24'b0, shifted_load_data[7:0]}; // LBU
                3'b101: mem_stage_data = {16'b0, shifted_load_data[15:0]}; // LHU
                default: mem_stage_data = shifted_load_data; // LW
            endcase
        end
    end

    // MEM/WB pipeline register
  always_ff @(posedge clk) begin
    if (reset) begin
      memwb_pc      <= AWIDTH'(IMEM_BASE_ADDR);
      memwb_alu_res <= '0;
      memwb_mem_data <= '0;
      memwb_imm     <= '0;
      memwb_wbsel   <= WBSEL_ALU;
      memwb_regwren <= 1'b0;
      memwb_rd      <= '0;
    end else begin
      memwb_pc      <= exmem_pc;
      memwb_alu_res <= exmem_alu_res;
      memwb_mem_data <= mem_stage_data;
      memwb_imm     <= exmem_imm;
      memwb_wbsel   <= exmem_wbsel;
      memwb_regwren <= exmem_regwren;
      memwb_rd      <= exmem_rd;
    end
  end

 // program termination logic
  logic is_program;
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

endmodule : pd5
