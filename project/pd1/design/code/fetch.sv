/*
 * Module: fetch
 *
 * Description: Fetch stage
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 *
 * Outputs:
 * 1) AWIDTH wide program counter pc_o
 * 2) DWIDTH wide instruction output insn_o
 */

module fetch #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32,
    parameter int BASEADDR=32'h01000000
    )(
	// inputs
	input logic clk,
	input logic rst,
	// outputs	
	output logic [AWIDTH - 1:0] pc_o,
    output logic [DWIDTH - 1:0] insn_o
);
    /*
     * Process definitions to be filled by
     * student below...
     */

    // PC register
    logic [AWIDTH-1:0] pc_q;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            pc_q <= BASEADDR;
        end else begin
            pc_q <= pc_q + 32'd4;
        end
    end

    // Output assignments
    assign pc_o = {pc_q[AWIDTH-1:2], 2'b00}; // Ensure word alignment
    assign insn_o = '0; // Instruction comes from memory in pd1
endmodule : fetch
				
