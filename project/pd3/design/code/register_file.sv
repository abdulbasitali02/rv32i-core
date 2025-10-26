/*
 * Module: register_file
 *
 * Description: Branch control logic. Only sets the branch control bits based on the
 * branch instruction
 *
 *NOTES:
 * 1) The register file is a 32-entry by 32-bit register file.
 * 2) Register x0 is hardwired to 0.
 * 3) The stack pointer (x2) is initialized to the top of the stack.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal rst
 * 3) 5-bit rs1 address rs1_i
 * 4) 5-bit rs2 address rs2_i
 * 5) 5-bit rd address rd_i
 * 6) DWIDTH-wide data writeback datawb_i
 * 7) register write enable regwren_i
 * Outputs:
 * 1) 32-bit rs1 data rs1data_o
 * 2) 32-bit rs2 data rs2data_o
 */

`include "constants.svh"

 module register_file #(
     parameter int DWIDTH=32
 )(
     // inputs
     input logic clk,
     input logic rst,
     input logic [4:0] rs1_i,
     input logic [4:0] rs2_i,
     input logic [4:0] rd_i,
     input logic [DWIDTH-1:0] datawb_i,
     input logic regwren_i,
     // outputs
     output logic [DWIDTH-1:0] rs1data_o,
     output logic [DWIDTH-1:0] rs2data_o
 );

    /*
     * Process definitions to be filled by
     * student below...
     */

     logic [DWIDTH-1:0] registers [0:31];

     //SYNCHRONOUS write with RESET initialization of stack pointer
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < 32; i++) begin
                registers[i] <= ZERO;
            end
            registers[5'd2] <= STACK_POINTER_INIT; // initialize stack pointer (x2)
        end else begin
            registers[5'd0] <= ZERO; // x0 is always zero
            if (regwren_i && (rd_i != 5'd0)) begin
                registers[rd_i] <= datawb_i;
            end

        end

        //combinational read ports
        assign rs1data_o = (rs1_i != 5'd0) ? ZERO : registers[rs1_i];
        assign rs2data_o = (rs2_i != 5'd0) ? ZERO : registers[rs2_i];


endmodule : register_file
