/*
 * Module: decode
 *
 * Description: Decode stage
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 * 3) 32-bit instruction insn_i
 * 4) program counter pc_i
 * Outputs:
 * 1) AWIDTH wide program counter pc_o
 * 2) DWIDTH wide instruction output insn_o
 * 3) 7-bit wide opcode_o
 * 4) 5-bit wide destination register ID rd_o
 * 5) 5-bit wide source 1 register ID rs1_o
 * 6) 5-bit wide source 2 register ID rs2_o
 * 7) 7-bit wide funct7 funct7_o
 * 8) 3-bit wide funct3 funct3_o
 * 9) 32-bit wide immediate imm_o
 * 10) 5-bit wide shift amount shamt_o
 */

`include "constants.svh"

module decode #(
    parameter int DWIDTH = 32,
    parameter int AWIDTH = 32
)(
    // inputs
    input  logic                 clk,
    input  logic                 rst,
    input  logic [DWIDTH-1:0]    insn_i,
    input  logic [AWIDTH-1:0]    pc_i,

    // outputs
    output logic [AWIDTH-1:0]    pc_o,
    output logic [DWIDTH-1:0]    insn_o,
    output logic [6:0]           opcode_o,
    output logic [4:0]           rd_o,
    output logic [4:0]           rs1_o,
    output logic [4:0]           rs2_o,
    output logic [6:0]           funct7_o,
    output logic [2:0]           funct3_o,
    output logic [4:0]           shamt_o,
    output logic [DWIDTH-1:0]    imm_o
);

    // Basic field extraction 
    assign pc_o     = pc_i;
    assign insn_o   = insn_i;

    assign opcode_o = insn_i[6:0];
    assign rd_o     = insn_i[11:7];
    assign funct3_o = insn_i[14:12];
    assign rs1_o    = insn_i[19:15];
    assign rs2_o    = insn_i[24:20];
    assign shamt_o  = insn_i[24:20];
    assign funct7_o = insn_i[31:25];

    // Immediate generation based on instruction type
    igen #(
        .DWIDTH(DWIDTH)
    ) u_igen (
        .insn_i   (insn_i),
        .imm_o    (imm_o),
        .opcode_i (opcode_o)
    );

endmodule : decode

