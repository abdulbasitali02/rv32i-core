/*
 * Module: pd3
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

`include "constants.svh"

module pd3 #(
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

  //fetch stage signals

  logic [AWIDTH-1:0] if_pc;
  logic [DWIDTH-1:0] if_insn;

  //decode stage signals

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

  //register file signals/interface

  logic rf_wren;
  logic [4:0] rf_rd_addr;
  logic [4:0] rf_rs1_addr;
  logic [4:0] rf_rs2_addr;
  logic [DWIDTH-1:0] rf_rs1_data;
  logic [DWIDTH-1:0] rf_rs2_data;
  logic [DWIDTH-1:0] rf_wb_data;

  //execute stage signals/interface
  logic [AWIDTH-1:0] ex_alu_res;
  logic ex_brtaken;

  //imem interface
  logic [AWIDTH-1:0] imem_addr;
  logic [DWIDTH-1:0] imem_rdata;
  logic [DWIDTH-1:0] imem_wdata;
  logic imem_read_en;
  logic imem_write_en;

  //data memory interface
  logic [AWIDTH-1:0] dmem_addr;
  logic [DWIDTH-1:0] dmem_rdata;
  logic [DWIDTH-1:0] dmem_wdata;
  logic dmem_read_en;
  logic dmem_write_en;
  logic [AWIDTH-1:0] dmem_offset;

  logic [AWIDTH-1:0] id_pc_plus4_aw;
  logic [DWIDTH-1:0] id_pc_plus4_dw;

  localparam DMEM_WORDS = (`LINE_COUNT > 0 ) ? `LINE_COUNT : 1;
  localparam int DMEM_ADDR_BITS = (DMEM_WORDS > 1) ? $clog2(DMEM_WORDS) : 1;
  localparam logic [AWIDTH-1:0] DMEM_BASE_ADDR = IMEM_BASE_ADDR;
  logic [DMEM_ADDR_BITS-1:0] dmem_index;

  //fetch stage

  assign branch_target = ex_alu_res[AWIDTH-1:0];
    assign pcsel_taken   = id_pcsel & ex_br_taken;

    fetch #(
        .DWIDTH(DWIDTH),
        .AWIDTH(AWIDTH),
        .RESET_PC(IMEM_BASE_ADDR)
    ) u_fetch (
        .clk(clk),
        .rst(reset),
        .pcsel_i(pcsel_taken),
        .pc_branch_i(branch_target),
        .pc_o(if_pc),
        .insn_o()
    );

    assign imem_addr      = if_pc;
    assign imem_read_en   = 1'b1;
    assign imem_write_en  = 1'b0;
    assign imem_wdata     = '0;

    memory #(
        .AWIDTH(AWIDTH),
        .DWIDTH(DWIDTH),
        .IMEM_BASE_ADDR(IMEM_BASE_ADDR)
    ) u_imem (
        .clk(clk),
        .rst(reset),
        .addr_i(imem_addr),
        .data_i(imem_wdata),
        .read_en_i(imem_read_en),
        .write_en_i(imem_write_en),
        .data_o(imem_rdata)
    );

    assign if_insn = imem_rdata;

    // ---------------------------------------------------------------------
    // Decode stage
    // ---------------------------------------------------------------------
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

    //register file
    assign rf_wren     = id_regwren;
    assign rf_rd_addr  = id_rd;
    assign rf_rs1_addr = id_rs1sel ? id_rs1 : 5'd0;
    assign rf_rs2_addr = id_rs2sel ? id_rs2 : 5'd0;

    register_file #(
        .DWIDTH(DWIDTH)
    ) u_register_file (
        .clk(clk),
        .rst(reset),
        .rs1_i(rf_rs1_addr),
        .rs2_i(rf_rs2_addr),
        .rd_i(rf_rd_addr),
        .datawb_i(wb_data),
        .regwren_i(rf_wren),
        .rs1data_o(rf_rs1_data),
        .rs2data_o(rf_rs2_data)
    );

    assign dmem_index    = ex_alu_res[DMEM_ADDR_BITS+1:2];
    assign dmem_offset   = AWIDTH'(dmem_index) << 2;
    assign dmem_addr     = DMEM_BASE_ADDR + dmem_offset;
    assign dmem_wdata    = rf_rs2_data;
    assign dmem_read_en  = id_memren;
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
        .read_en_i(dmem_read_en),
        .write_en_i(dmem_write_en),
        .data_o(dmem_rdata)
    );

    //execute stage 
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

    assign id_pc_plus4_aw = id_pc + AWIDTH'(32'd4);
    assign id_pc_plus4_dw = DWIDTH'(id_pc_plus4_aw);

    always_comb begin
        wb_data = ex_alu_res;
        unique case (id_wbsel)
            WBSEL_ALU: wb_data = ex_alu_res;
            WBSEL_MEM: wb_data = dmem_rdata;
            WBSEL_PC4: wb_data = id_pc_plus4_dw;
            WBSEL_IMM: wb_data = id_imm;
            default:   wb_data = ex_alu_res;
        endcase
    end



endmodule : pd3
