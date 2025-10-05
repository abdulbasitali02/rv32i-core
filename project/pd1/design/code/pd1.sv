/*
 * Module: pd1
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

module pd1 #(
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
	
    // imemory signals
    logic [DWIDTH - 1:0] addr_i;
    logic [DWIDTH - 1:0] data_i;
    logic write_en;
    logic read_en;
       
    // Fetch signals
    logic [DWIDTH - 1:0] f_pc;
    logic [DWIDTH - 1:0] f_insn;
       
    memory #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASE_ADDR(32'h01000000)
       ) memory1 (
        .clk(clk),
        .rst(reset),
        .addr_i(f_pc),
        .data_i(data_i),
        .read_en_i(read_en),
        .write_en_i(write_en),
        .data_o(f_insn)
   );
 
    assign read_en = 1'b1;
    assign write_en = 1'b0;

    // Fetch
    fetch #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASEADDR(32'h01000000)
    ) fetch1 (
        .clk(clk),
        .rst(reset),
        .pc_o(f_pc),            
        .insn_o(f_insn)         
    );

endmodule : pd1
