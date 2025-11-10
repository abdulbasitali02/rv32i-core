`timescale 1ns/1ps
`include "constants.svh"

module tb_pd4;

  localparam int DWIDTH = 32;
  localparam int AWIDTH = 32;
  localparam int BYTES  = (DWIDTH/8);

  // clock / reset
  logic clk = 0;
  logic rst = 1;
  always #5 clk = ~clk;
  initial begin
    repeat (2) @(posedge clk);
    rst = 0;
  end

//memory
  logic [AWIDTH-1:0] mem_addr;
  logic [DWIDTH-1:0] mem_wdata;
  logic [BYTES-1:0]  mem_wstrb;
  logic              mem_rd, mem_wr;
  logic [DWIDTH-1:0] mem_rdata;
  logic              mem_rvld;

  memory #(
    .AWIDTH(AWIDTH),
    .DWIDTH(DWIDTH),
    .IMEM_BASE_ADDR(32'h0100_0000)
  ) u_mem (
    .clk(clk), .rst(rst),
    .addr_i(mem_addr), .data_i(mem_wdata),
    .write_strb_i(mem_wstrb), .read_en_i(mem_rd), .write_en_i(mem_wr),
    .data_o(mem_rdata), .data_vld_o(mem_rvld)
  );
//writeback
  logic [AWIDTH-1:0] wb_pc;
  logic [DWIDTH-1:0] wb_alu_res, wb_mem_data, wb_imm;
  logic [1:0]        wb_sel;
  logic              wb_brtaken;
  logic [DWIDTH-1:0] wb_writeback_data;
  logic [AWIDTH-1:0] wb_next_pc;

  writeback #(.DWIDTH(DWIDTH), .AWIDTH(AWIDTH)) u_wb (
    .pc_i(wb_pc),
    .alu_res_i(wb_alu_res),
    .memory_data_i(wb_mem_data),
    .imm_i(wb_imm),
    .wbsel_i(wb_sel),
    .brtaken_i(wb_brtaken),
    .writeback_data_o(wb_writeback_data),
    .next_pc_o(wb_next_pc)
  );

  // helpers
  int errors = 0;

  task expect_eq(string tag, logic [31:0] got, logic [31:0] exp);
    if (got !== exp) begin
      $display("FAIL %s: got=0x%08h exp=0x%08h", tag, got, exp);
      errors++;
    end else begin
      $display("[OK]  %s = 0x%08h", tag, got);
    end
  endtask

  task expect_bit(string tag, bit got, bit exp);
    if (got !== exp) begin
      $display("FAIL %s: got=%0b exp=%0b", tag, got, exp);
      errors++;
    end else begin
      $display("[OK]  %s = %0b", tag, got);
    end
  endtask

  // memory helpers
  task mem_write_word(input logic [AWIDTH-1:0] addr, input logic [DWIDTH-1:0] data);
    mem_addr  = addr;
    mem_wdata = data;
    mem_wstrb = {BYTES{1'b1}}; // all bytes
    mem_wr    = 1;
    mem_rd    = 0;
    @(posedge clk);
    mem_wr = 0;
    #0;
  endtask

  task mem_write_partial(input logic [AWIDTH-1:0] addr, input logic [DWIDTH-1:0] data, input logic [BYTES-1:0] strb);
    mem_addr  = addr;
    mem_wdata = data;
    mem_wstrb = strb;
    mem_wr    = 1;
    mem_rd    = 0;
    @(posedge clk);
    mem_wr = 0;
    #0;
  endtask

  task mem_read(input logic [AWIDTH-1:0] addr, output logic [DWIDTH-1:0] data, output logic vld);
    mem_addr = addr;
    mem_rd   = 1;
    mem_wr   = 0;
    #0; // combinational read
    data = mem_rdata;
    vld  = mem_rvld;
    mem_rd = 0;
  endtask

  // stim
  initial begin
    // wait until out of reset
    @(negedge rst);

    // base addresses
    logic [AWIDTH-1:0] base = 32'h0100_0000; // matches IMEM_BASE_ADDR param
    logic [DWIDTH-1:0] rd;
    bit                v;

    $display("\n--- MEMORY: aligned full-word write/read ---");
    mem_write_word(base + 0, 32'hDEAD_BEEF);
    mem_read(base + 0, rd, v);
    expect_bit("mem data_vld after aligned read", v, 1'b1);
    expect_eq("mem readback aligned", rd, 32'hDEAD_BEEF);

    $display("\n--- MEMORY: partial byte write using strobes ---");
    // set word at base+4 to 0xAAAAAAAA, then overwrite LSB byte with 0x55 (strobe 0001)
    mem_write_word(base + 4, 32'hAAAAAAAA);
    mem_write_partial(base + 4, 32'h00000055, 4'b0001); // only byte 0
    mem_read(base + 4, rd, v);
    expect_eq("mem partial write result", rd, 32'hAAAA_AA55); // LSB changed

    $display("\n--- MEMORY: writes with different strobes ---");
    // overwrite only the MSB (byte 3) with 0xFF
    mem_write_partial(base + 4, 32'hFF000000, 4'b1000);
    mem_read(base + 4, rd, v);
    expect_eq("mem partial write msb", rd, 32'hFFAA_AA55);

    $display("\n--- MEMORY: out-of-bounds read/write behaviour ---");
    // OOB read below base
    mem_read(base - 32'h10, rd, v);
    expect_bit("mem OOB read vld (below base)", v, 1'b0);
    expect_eq("mem OOB read returns 0", rd, 32'h0);

    // OOB write (ignored) above memory
    mem_write_word(base + `MEM_DEPTH + 32'h8, 32'h12345678);
    mem_read(base + `MEM_DEPTH + 32'h8, rd, v);
    expect_bit("mem OOB write then read vld", v, 1'b0);
    expect_eq("mem OOB read after ignored write", rd, 32'h0);

    // small additional in-range check: 
    mem_write_word(base + 8, 32'h11223344);
    mem_write_partial(base + 8, 32'h00FF0000, 4'b0100); // change byte 2
    mem_read(base + 8, rd, v);
    expect_eq("mem partial middle-byte", rd, 32'h11FF3344);

    // Writeback checks
    $display("\n--- WRITEBACK: WBSEL_ALU (ALU result) ---");
    wb_pc = 32'h2000_0000; wb_alu_res = 32'hCAFEBABE; wb_mem_data = 32'h0; wb_imm = 32'h1111_0000;
    wb_sel = WBSEL_ALU; wb_brtaken = 1'b0;
    #0; expect_eq("wb writeback ALU", wb_writeback_data, 32'hCAFEBABE);
    expect_eq("wb next_pc (not taken)", wb_next_pc, wb_pc + 32'd4);

    $display("\n--- WRITEBACK: WBSEL_MEM (memory data) ---");
    wb_sel = WBSEL_MEM; #0;
    expect_eq("wb writeback MEM", wb_writeback_data, wb_mem_data);

    $display("\n--- WRITEBACK: WBSEL_PC4 (pc+4) ---");
    wb_sel = WBSEL_PC4; #0;
    expect_eq("wb writeback PC4", wb_writeback_data, wb_pc + 32'd4);

    $display("\n--- WRITEBACK: WBSEL_IMM (imm) -");
    wb_sel = WBSEL_IMM; #0;
    expect_eq("wb writeback IMM", wb_writeback_data, wb_imm);

    $display("\n-- WRITEBACK: branch taken next_pc uses alu_res -");
    wb_brtaken = 1'b1; wb_sel = WBSEL_ALU; wb_alu_res = 32'h3000_0000; #0;
    expect_eq("wb next_pc when branch taken", wb_next_pc, 32'h3000_0000);

    $display("\n- Combined: memory -> writeback (load) -");
    // Write a known word into memory
    mem_write_word(base + 0x100, 32'h0A0B0C0D);
    mem_read(base + 0x100, rd, v);
    expect_bit("combined mem read vld", v, 1'b1);
    // feed into writeback 
    wb_mem_data = rd; wb_pc = 32'h4000_0000; wb_brtaken = 1'b0; wb_sel = WBSEL_MEM;
    #0; expect_eq("combined writeback from mem", wb_writeback_data, 32'h0A0B0C0D);

    // Summary
    $display("\n=== SUMMARY ===");
    if (errors == 0) $display("tb_pd4 memory + writeback tests PASSED");
    else             $display("%0d error(s)", errors);

    $finish;
  end

  initial begin
    $dumpfile("tb_pd4.vcd");
    $dumpvars(0, tb_pd4);
  end

endmodule
