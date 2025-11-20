/*
 * Module: alu
 *
 * Description: ALU implementation for execute stage.
 *
 * Inputs:
 * 1) 32-bit PC pc_i
 * 2) 32-bit rs1 data rs1_i
 * 3) 32-bit rs2 data rs2_i
 * 4) 3-bit funct3 funct3_i
 * 5) 7-bit funct7 funct7_i

 // additional inputs:
 // 32-bit immediate imm_i
 // 7-bit opcode opcode_i
 // 4-bit ALU select alusel_i
 // 3 bit funct3 funct3_i
 // 7 bit funct7 funct7_i

 *
 * Outputs:
 * 1) 32-bit result of ALU res_o
 * 2) 1-bit branch taken signal brtaken_o
 */


module alu #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32
)(
    input logic [AWIDTH-1:0] pc_i,
    input logic [DWIDTH-1:0] rs1_i,
    input logic [DWIDTH-1:0] rs2_i,
    input logic [DWIDTH-1:0] imm_i,
    input logic [6:0] opcode_i,
    input logic [3:0] alusel_i,
    input logic [2:0] funct3_i,
    input logic [6:0] funct7_i,
    output logic [DWIDTH-1:0] res_o,
    output logic brtaken_o
);
    `include "constants.svh"

    /*
     * Process definitions to be filled by
     * student below...
     */

    logic [DWIDTH-1:0] operand_a;
    logic [DWIDTH-1:0] operand_b;
    logic [DWIDTH-1:0] result;
    logic [4:0] shamt;
    logic breq;
    logic brlt;

    //selecting operand based on instruction type

    always_comb begin

        operand_a = rs1_i;
        operand_b = rs2_i;

        unique case (opcode_i)
            OPCODE_LUI: begin
                operand_a = ZERO;
                operand_b = imm_i;
            end
            OPCODE_AUIPC: begin
                operand_a = pc_i;
                operand_b = imm_i;
            end
            OPCODE_JAL: begin
                operand_a = pc_i;
                operand_b = imm_i;
            end
            OPCODE_JALR: begin
                operand_a = rs1_i;
                operand_b = imm_i;
            end
            OPCODE_LOAD,
            OPCODE_OP_IMM: begin
                operand_a = rs1_i;
                operand_b = imm_i;
            end

			OPCODE_STORE: begin
				operand_a = ZERO;
				operand_b = imm_i;
			end

            OPCODE_BRANCH: begin
                operand_a = pc_i;
                operand_b = imm_i;
            end

            default: begin
                operand_a = rs1_i;
                operand_b = rs2_i;
            end
        endcase
    end

    assign shamt = operand_b[4:0];

    //alu op based on alusel_i

    always_comb begin
        result = ZERO;

        unique case (alusel_i)
        ALU_OP_ADD: result = operand_a + operand_b;
        ALU_OP_SUB: result = operand_a - operand_b;
        ALU_OP_SLL: result = operand_a << shamt;
        ALU_OP_SLT: result = ($signed(operand_a) < $signed(operand_b)) ? 32'd1 : 32'd0;
        ALU_OP_SLTU: result = (operand_a < operand_b) ? 32'd1 : 32'd0;
        ALU_OP_XOR: result = operand_a ^ operand_b;
        ALU_OP_SRL: result = operand_a >> shamt;
        ALU_OP_SRA: result = $signed(operand_a) >>> shamt;
        ALU_OP_OR: result = operand_a | operand_b;
        ALU_OP_AND: result = operand_a & operand_b;
        ALU_OP_COPY_B: result = operand_b;
        default: result = operand_a + operand_b; // default to ADD
    endcase

        if (opcode_i == OPCODE_JALR) begin
            result = (result & ~32'd1); // ensure LSB is 0 for JALR
        end
    end

    assign res_o = result;

    //branch compare logic for branch taken signal

    branch_control #(
        .DWIDTH(DWIDTH)
    ) u_branch_control (
        .opcode_i(opcode_i),
        .funct3_i(funct3_i),
        .rs1_i(rs1_i),
        .rs2_i(rs2_i),
        .breq_o(breq),
        .brlt_o(brlt)
    );

    always_comb begin
        brtaken_o = 1'b0;

        unique case (opcode_i)
            OPCODE_BRANCH: begin
                unique case (funct3_i)
                    3'b000: brtaken_o = breq; // BEQ
                    3'b001: brtaken_o = ~breq; // BNE
                    3'b100: brtaken_o = brlt;  // BLT
                    3'b101: brtaken_o = ~brlt; // BGE
                    3'b110: brtaken_o = brlt;  // BLTU but unsigned handled in branch_control.sv
                    3'b111: brtaken_o = ~brlt; // BGEU but unsigned handled in branch_control.sv

                    default: brtaken_o = 1'b0;
                endcase
            end

            OPCODE_JAL,
            OPCODE_JALR: begin
                brtaken_o = 1'b1;
            end

            default: begin
                brtaken_o = 1'b0;
            end
        endcase
    end

endmodule : alu
