`timescale 1ns/1ps
import constants_pkg::*;            // ADD/SUB/AND/OR, aluSel_e
`include "probes.svh"               // uses the probe macro names

module pd0_tb;
  localparam int DWIDTH = 32;

  // DUT
  logic clk = 0, reset = 1;
  pd0 #(.DWIDTH(DWIDTH)) dut (.clk(clk), .reset(reset));

  // 100 MHz clock
  always #5 clk = ~clk;

  // --- Simple reset ---
  initial begin
    repeat (2) @(posedge clk);
    reset <= 0;
  end

  // ---------- ALU TESTS (combinational) ----------
  function automatic logic [DWIDTH-1:0]
  alu_model(input aluSel_e s, input logic [DWIDTH-1:0] a, b);
    case (s)
      ADD: return a + b;
      SUB: return a - b;
      AND: return a & b;
      OR : return a | b;
      default: return '0;
    endcase
  endfunction

  task automatic alu_check(input aluSel_e s, input logic [DWIDTH-1:0] a, b);
    logic [DWIDTH-1:0] exp = alu_model(s, a, b);
    // drive probes (combinational, no need to wait for clock)
    assign `ALU_SEL = s;
    assign `ALU_OP1 = a;
    assign `ALU_OP2 = b;
    #1;  // settle
    assert(`ALU_RES === exp)
      else $fatal(1, "ALU mismatch: sel=%0d a=%0h b=%0h got=%0h exp=%0h", s, a, b, `ALU_RES, exp);
    deassign `ALU_SEL;
    deassign `ALU_OP1;
    deassign `ALU_OP2;
  endtask

  // ---------- REG TESTS (sync reset + write enable) ----------
  task automatic reg_write(input logic [DWIDTH-1:0] val);
    assign `REG_WE  = 1'b1;
    assign `REG_IN  = val;
    @(posedge clk);
    deassign `REG_WE;
    deassign `REG_IN;
    // check on same edge (registered)
    assert(`REG_OUT === val)
      else $fatal(1, "REG write failed: got=%0h exp=%0h", `REG_OUT, val);
  endtask

  task automatic reg_hold(input logic [DWIDTH-1:0] next_in);
    assign `REG_WE  = 1'b0;   // hold
    assign `REG_IN  = next_in;
    @(posedge clk);
    deassign `REG_WE;
    deassign `REG_IN;
    // output must be unchanged
  endtask

  // ---------- PIPELINE TESTS (add then sub; 2-cycle latency) ----------
  typedef struct packed { logic [DWIDTH-1:0] exp; int delay; } exp_t;
  exp_t q[$];

  task automatic pipe_apply(input logic [DWIDTH-1:0] a, b);
    // Drive on negedge so inputs are stable at next posedge
    @(negedge clk);
    assign `TSP_OP1 = a;
    assign `TSP_OP2 = b;
    // For (a+b)-a the expected result is b, available after 2 posedges
    q.push_back('{exp: b, delay: 2});
    // keep driving for one full cycle, then release
    @(posedge clk);
    deassign `TSP_OP1;
    deassign `TSP_OP2;
  endtask

  // Decrement expected delays and check when zero
  always @(posedge clk) if (!reset) begin
    foreach (q[i]) q[i].delay--;
    if (q.size() && q[0].delay == 0) begin
      exp_t head = q.pop_front();
      assert(`TSP_RES === head.exp)
        else $fatal(1, "PIPE mismatch: got=%0h exp=%0h @%0t", `TSP_RES, head.exp, $time);
    end
  end

  // ---------- Test sequence ----------
  initial begin
    // Wait for reset to drop
    @(negedge reset);

    // ALU
    alu_check(ADD, 32'h0000_0005, 32'h0000_0003);
    alu_check(SUB, 32'h0000_0005, 32'h0000_0003);
    alu_check(AND, 32'hAAAA_AAAA, 32'h0F0F_0F0F);
    alu_check(OR , 32'h5555_5555, 32'h0F0F_0F0F);
    repeat (10) alu_check(aluSel_e'($urandom_range(0,3)), $urandom, $urandom);

    // REG
    reg_write(32'hDEAD_BEEF);
    reg_hold (32'h1234_5678);
    assert(`REG_OUT === 32'hDEAD_BEEF) else $fatal(1, "REG hold failed");
    // reset should clear on clock edge
    reset <= 1; @(posedge clk); reset <= 0;
    assert(`REG_OUT === '0) else $fatal(1, "REG sync reset failed");

    // PIPELINE
    pipe_apply(32'h0000_0001, 32'h0000_0002);
    pipe_apply(32'h0000_0010, 32'h0000_0020);
    pipe_apply(32'hFFFF_FFFF, 32'h0000_0001);
    repeat (6) @(posedge clk);  // let it drain

    $display("pd0_tb: PASS");
    $finish;
  end

  // Optional dump (helpful with Verilator/GTKWave)
  initial begin
    $dumpfile("pd0_tb.vcd");
    $dumpvars(0, pd0_tb);
  end
endmodule
