/*
 * Module: pd2
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

 `include "constants.svh"

module pd2 #(
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

//fetch signals
logic [AWIDTH-1:0] if_pc;
logic [DWIDTH-1:0] if_insn;

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

//control signals (future signals as well)
logic id_pcsel;
logic id_immsel;
logic id_regwren;
logic id_rs1sel;
logic id_rs2sel;
logic id_memren;
logic id_memwren;
logic [1:0] id_wbsel;
logic [3:0] id_alusel;

//imem interface
logic [AWIDTH-1:0] imem_addr;
logic [DWIDTH-1:0] imem_rdata;
logic [DWIDTH-1:0] imem_wdata;
logic imem_read_en;
logic imem_write_en;

//fetch stage

fetch #(
    .DWIDTH(DWIDTH),
    .AWIDTH(AWIDTH),
    .IMEM_BASE_ADDR(IMEM_BASE_ADDR),
) u_fetch (
    .clk(clk),
    .rst(reset),
    .pc_o(if_pc),
    .insn_o() //provided by memory
);

//imem instantiation (read only for PD2)

assign imem_addr = if_pc;
assign imem_read_en = 1'b1;
assign imem_write_en = 1'b0;
assign imem_wdata = '0; // not used

memory #(
    .AWIDTH(AWIDTH),
    .DWIDTH(DWIDTH),
    .IMEM_BASE_ADDR(IMEM_BASE_ADDR)
) u_imem (
    .clk(clk),
    .rst(reset),
    .addr_i(imem_addr),
    .wdata_i(imem_wdata),
    .read_en_i(imem_read_en),
    .write_en_i(imem_write_en),
    .data_o(imem_rdata)
);

assign if_insn = imem_rdata;


//decode stage

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

//control path

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


endmodule : pd2
