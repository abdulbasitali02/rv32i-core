/*
 * Module: branch_control
 *
 * Description: Branch control logic. Only sets the branch control bits based on the
 * branch instruction
 *
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD3 -----------
 */

 module branch_control #(
    parameter int DWIDTH=32
)(
    // inputs
    input logic [6:0] opcode_i,
    input logic [2:0] funct3_i,
    input logic [DWIDTH-1:0] rs1_i,
    input logic [DWIDTH-1:0] rs2_i,
    // outputs
    output logic breq_o,
    output logic brlt_o
);
    `include "constants.svh"

    /*
     * Process definitions to be filled by
     * student below...
     */

    logic signed [DWIDTH-1:0] rs1_signed;
    logic signed [DWIDTH-1:0] rs2_signed;

    assign rs1_signed = rs1_i;
    assign rs2_signed = rs2_i;

    always_comb begin

        //default branch values
        breq_o = 1'b0;
        brlt_o = 1'b0;

        if (opcode_i == OPCODE_BRANCH) begin
            breq_o = (rs1_i == rs2_i);

            unique case (funct3_i)
                3'b110, 3'b111: begin
                    brlt_o = rs1_i < rs2_i; //unsigned comparison for BLT and BGE
                end
                default: begin
                    brlt_o = (rs1_signed < rs2_signed); //unsigned comparison for others
                end
            endcase
        end
    end

endmodule : branch_control