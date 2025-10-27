/*
 * Module: fetch
 *
 * Description: Fetch stage
 *
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD1 -----------
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 *
 * Outputs:
 * 1) AWIDTH wide program counter pc_o
 * 2) DWIDTH wide instruction output insn_o
 */

 `include "constants.svh"

module fetch #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32,
    parameter logic [AWIDTH-1:0] RESET_PC = AWIDTH'(IMEM_BASE_ADDR)
    )(
	// inputs
	input logic clk,
	input logic rst,
    input logic pcsel_i,
    input logic [AWIDTH - 1:0] pc_branch_i,
	// outputs	
	output logic [AWIDTH - 1:0] pc_o,
    output logic [DWIDTH - 1:0] insn_o
);
    /*
     * Process definitions to be filled by
     * student below...
     */
    
    logic [AWIDTH - 1:0] pc_d;
    logic [AWIDTH - 1:0] pc_q;

    always_comb begin
        pc_d = pc_q + AWIDTH'(32'd4); // default pc increment
        if (pcsel_i) begin
            pc_d = pc_branch_i; // branch target address
        end
    end
    // PC register
    always_ff @(posedge clk) begin
        if (rst) begin
            pc_q <= RESET_PC;
        end else begin
            pc_q <= pc_d;
        end
    end

    assign pc_o = pc_q;
    assign insn_o = '0;

endmodule : fetch