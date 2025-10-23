/*
 * Good practice to define constants and refer to them in the
 * design files. An example of some constants are provided to you
 * as a starting point
 *
 */
`ifndef CONSTANTS_SVH_
`define CONSTANTS_SVH_

parameter logic [31:0] ZERO = 32'd0;
parameter logic [31:0] INSN_NOP = 32'h00000013; 
parameter logic [31:0] IMEM_BASE_ADDR = 32'h01000000;


// RISC-V 32I opcode mapping

parameter logic [6:0] OPCODE_OP = 7'b0110011;      // R-type ops
parameter logic [6:0] OPCODE_OP_IMM = 7'b0010011; // immediate ALU ops
parameter logic [6:0] OPCODE_LOAD = 7'b0000011;   // Load Instructions
parameter logic [6:0] OPCODE_STORE = 7'b0100011;  // Store Instructions
parameter logic [6:0] OPCODE_BRANCH = 7'b1100011; // Branch Instructions
parameter logic [6:0] OPCODE_JALR = 7'b1100111;   // JALR Instructions
parameter logic [6:0] OPCODE_JAL = 7'b1101111;    // JAL Instructions
parameter logic [6:0] OPCODE_LUI = 7'b0110111;    // LUI Instructions
parameter logic [6:0] OPCODE_AUIPC = 7'b0010111;  // add upper immediate to PC
parameter logic [6:0] OPCODE_SYSTEM = 7'b1110011; // system instructions
parameter logic [6:0] OPCODE_MISC_MEM = 7'b0001111; // fence/other memory if any

// funct3 mapping

parameter logic [2:0] FUNCT3_ADD_SUB = 3'b000; // ADD/SUB
parameter logic [2:0] FUNCT3_SLL = 3'b001; // SLL
parameter logic [2:0] FUNCT3_SLT = 3'b010; // SLT
parameter logic [2:0] FUNCT3_SLTU = 3'b011; // SLTU
parameter logic [2:0] FUNCT3_XOR = 3'b100; // XOR
parameter logic [2:0] FUNCT3_SR = 3'b101; // SRL/SRA
parameter logic [2:0] FUNCT3_OR = 3'b110; // OR
parameter logic [2:0] FUNCT3_AND = 3'b111; // AND

// ALU operation encoding for control path
parameter logic [3:0] ALU_OP_ADD = 4'd0;
parameter logic [3:0] ALU_OP_SUB = 4'd1;
parameter logic [3:0] ALU_OP_SLL = 4'd2;
parameter logic [3:0] ALU_OP_SLT = 4'd3;
parameter logic [3:0] ALU_OP_SLTU = 4'd4;
parameter logic [3:0] ALU_OP_XOR = 4'd5;
parameter logic [3:0] ALU_OP_SRL = 4'd6;
parameter logic [3:0] ALU_OP_SRA = 4'd7;
parameter logic [3:0] ALU_OP_OR = 4'd8;
parameter logic [3:0] ALU_OP_AND = 4'd9;
parameter logic [3:0] ALU_OP_COPY_B = 4'd10; // pass B input to output (for LUI, AUIPC)

//Writeback select encoding
parameter logic [1:0] WBSEL_ALU = 2'd0; // Write back ALU result
parameter logic [1:0] WBSEL_MEM = 2'd1; // Write back Memory load data
parameter logic [1:0] WBSEL_PC4 = 2'd2; // PC + 4 (for JAL, JALR)
parameter logic [1:0] WBSEL_IMM = 2'd3; // Write back immediate (for LUI, AUIPC)

// Additional funct7 encodings
parameter logic [6:0] FUNCT7_DEFAULT = 7'b0000000; // default
parameter logic [6:0] FUNCT7_SUB_SRA = 7'b0100000; // SUB and SRA


`endif
