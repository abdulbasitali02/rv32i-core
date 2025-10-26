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
endmodule : pd3
