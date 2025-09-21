/*
 * Module: alu
 *
 * Description: A simple ALU module that does addition, subtraction,
 * logical or and logical and operation. The operations are
 * combinational circuits.
 *
 * Inputs:
 * 1) DWIDTH-wide input op1_i
 * 2) DWIDTH-wide input op2_i
 * 3) 2-bit selection signal sel_i
 * (refer constants_pkg.sv for the selection signals)
 *
 * Outputs:
 * 1) DWIDTH-wide result res_o
 * 2) 1-bit signal that is asserted if result is zero zero_o
 * 3) 1-bit signal that is asserted if result is negative neg_o
 */

// Declare the enumerations in a package
import constants_pkg::*;

module alu #(
    parameter int DWIDTH = 8)(
        input logic [1:0] sel_i,
        input logic [DWIDTH-1:0] op1_i,
        input logic [DWIDTH-1:0] op2_i,
        output logic [DWIDTH-1:0] res_o,
        output logic zero_o,
        output logic neg_o
    );

    /*
     * Process definitions to be filled by
     * student below...
     */

	always_comb begin
		res_o = '0;

		unique case (sel_i)
			ADD: res_o = op1_i + op2_i;
			SUB: res_o = op1_i - op2_i;
			OR : res_o = op1_i | op2_i;
			AND: res_o = op1_i & op2_i;
			default: res_o = '0;
		endcase
			/*Flags:
			Zero flag: result equals to 0
			Negative flag: most significatn bit of the result (2s complement)
			*/
			zero_o = (res_o == '0);
			neg_o  = res_o[DWIDTH-1];
	end


endmodule: alu
