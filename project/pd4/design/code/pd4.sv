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


  //exectue stage

  // data memory interface signals


  //auxiliary signals


  //imem read only 

  




// program termination logic
reg is_program = 0;
always_ff @(posedge clk) begin
    if (data_out == 32'h00000073) $finish;  // directly terminate if see ecall
    if (data_out == 32'h00008067) is_program = 1;  // if see ret instruction, it is simple program test
    // [TODO] Change register_file_0.registers[2] to the appropriate x2 register based on your module instantiations...
    if (is_program && (register_file_0.registers[2] == 32'h01000000 + `MEM_DEPTH)) $finish;
end

endmodule : pd4
