`timescale 1ns/1ps

`include "constants.svh"

module tb_pd3;

  localparam int DWIDTH = 32;
  localparam int AWIDTH = 32;

  //Clock & Reset

  logic clk = 0, rst = 1;
  always #5 clk = ~clk;          // 100 MHz
  initial begin
    repeat (2) @(posedge clk);
    rst = 0;
  end

  // ALU

  logic [AWIDTH-1:0] pc_i;
  logic [DWIDTH-1:0] rs1_i, rs2_i, imm_i;
  logic [6:0]        opcode_i, funct7_i;
  logic [2:0]        funct3_i;
  logic [3:0]        alusel_i;
  logic [DWIDTH-1:0] res_o;
  logic brtaken_o;

  alu #(.DWIDTH(DWIDTH), .AWIDTH(AWIDTH)) u_alu (

    .pc_i(pc_i), .rs1_i(rs1_i), .rs2_i(rs2_i), .imm_i(imm_i),

    .opcode_i(opcode_i), .alusel_i(alusel_i),

    .funct3_i(funct3_i), .funct7_i(funct7_i),

    .res_o(res_o), .brtaken_o(brtaken_o)

  );

  //register_file 

  logic [4:0] rs1_addr, rs2_addr, rd_addr;
  logic [DWIDTH-1:0] datawb_i, rs1data_o, rs2data_o;
  logic regwren_i;
  register_file #(.DWIDTH(DWIDTH)) u_rf (

    .clk(clk), .rst(rst),

    .rs1_i(rs1_addr), .rs2_i(rs2_addr),

    .rd_i(rd_addr), .datawb_i(datawb_i), .regwren_i(regwren_i),

    .rs1data_o(rs1data_o), .rs2data_o(rs2data_o)

  );

  int errors = 0;

  task expect(string tag, logic [31:0] got, logic [31:0] exp);

    if (got !== exp) begin

      $display("FAIL %s: got=0x%08h exp=0x%08h", tag, got, exp);

      errors++;

    end else

      $display("[OK]  %s = 0x%08h", tag, got);

  endtask

  task expectb(string tag, bit got, bit exp);

    if (got !== exp) begin

      $display("FAIL %s: got=%0b exp=%0b", tag, got, exp);

      errors++;

    end else

      $display("[OK]  %s", tag);

  endtask

  task drive_alu(

    input [31:0] pc, input [31:0] r1, input [31:0] r2, input [31:0] imm,

    input [6:0]  opc, input [3:0] aluop, input [2:0] f3, input [6:0] f7

  );

    pc_i = pc; rs1_i = r1; rs2_i = r2; imm_i = imm;

    opcode_i = opc; alusel_i = aluop; funct3_i = f3; funct7_i = f7;

    #0; // comb settle

  endtask

// Stimulus

  initial begin

    // defaults

    pc_i=32'h1000_0000; rs1_i=0; rs2_i=0; imm_i=0;

    opcode_i=7'h00; alusel_i=0; funct3_i=0; funct7_i=0;



    // === Register file quick checks ===

    @(negedge rst);

    // x0 must read as 0; writes to x0 are ignored

    rs1_addr=5'd0; rs2_addr=5'd0; rd_addr=5'd0; datawb_i=32'hDEAD_BEEF; regwren_i=1'b1;

    @(posedge clk);

    regwren_i=1'b0; #0;

    expect("RF x0 hardwired zero", rs1data_o, 32'h0000_0000);

    // write x5 and read back

    rd_addr=5'd5; datawb_i=32'hA5A5_5A5A; regwren_i=1'b1; @(posedge clk);

    regwren_i=1'b0; rs1_addr=5'd5; #0;

    $display("[INFO] RF x5 readback = 0x%08h", rs1data_o);



    // show SP init (x2)

    rs1_addr=5'd2; #0; $display("[INFO] RF x2 (SP) after reset = 0x%08h", rs1data_o);

    // ADDI: rs1 + imm

    drive_alu(32'h0, 32'd10, 32'd0, 32'd5, OPCODE_OP_IMM, ALU_OP_ADD, 3'b000, 7'h00);

    expect("ALU ADDI", res_o, 32'd15);

    expectb("ALU ADDI brtaken=0", brtaken_o, 1'b0);


    // SUB: rs1 - rs2

    drive_alu(32'h0, 32'd20, 32'd6, 32'd0, OPCODE_OP, ALU_OP_SUB, 3'b000, FUNCT7_SUB_SRA);

    expect("ALU SUB", res_o, 32'd14);

    // SRLI: r1 >> 3 (logical)

    drive_alu(32'h0, 32'hF000_0000, {27'd0,5'd3}, 32'd0, OPCODE_OP_IMM, ALU_OP_SRL, 3'b101, 7'h00);

    expect("ALU SRLI", res_o, 32'h1E000_000);

    // SRA: r1 >>> 4 (arith)

    drive_alu(32'h0, 32'hF000_0000, 32'd4, 32'd0, OPCODE_OP, ALU_OP_SRA, 3'b101, FUNCT7_SUB_SRA);

    expect("ALU SRA", res_o, 32'hFF00_0000);

    // SLT signed: (-1) < 1 -> 1

    drive_alu(32'h0, 32'hFFFF_FFFF, 32'h0000_0001, 0, OPCODE_OP, ALU_OP_SLT, 3'b010, 7'h00);

    expect("ALU SLT (signed)", res_o, 32'd1);

    // SLTU unsigned: 0xFFFF_FFFF < 1 -> 0

    drive_alu(32'h0, 32'hFFFF_FFFF, 32'h0000_0001, 0, OPCODE_OP, ALU_OP_SLTU, 3'b011, 7'h00);

    expect("ALU SLTU (unsigned)", res_o, 32'd0);

    // LUI: copy imm

    drive_alu(32'h0, 0,0, 32'h1234_5000, OPCODE_LUI, ALU_OP_COPY_B, 3'b000, 7'h00);

    expect("ALU LUI", res_o, 32'h1234_5000);

    // AUIPC: pc + imm

    drive_alu(32'h2000_0000, 0,0, 32'h0001_0000, OPCODE_AUIPC, ALU_OP_ADD, 3'b000, 7'h00);

    expect("ALU AUIPC", res_o, 32'h2001_0000);

    // JALR: (rs1+imm)&~1, brtaken=1

    drive_alu(32'h0, 32'h1000_0001, 0, 32'd5, OPCODE_JALR, ALU_OP_ADD, 3'b000, 7'h00);

    expect("ALU JALR target (lsb clear)", res_o, (32'h1000_0001 + 32'd5) & ~32'd1);

    expectb("ALU JALR brtaken=1", brtaken_o, 1'b1);

    // === Branch behavior via ALU’s branch_control ===

    // BEQ true: rs1==rs2

    drive_alu(32'h0, 32'd9, 32'd9, 0, OPCODE_BRANCH, ALU_OP_ADD, 3'b000, 7'h00);

    expectb("BR BEQ true", brtaken_o, 1'b1);

    // BNE true: rs1!=rs2

    drive_alu(32'h0, 32'd9, 32'd7, 0, OPCODE_BRANCH, ALU_OP_ADD, 3'b001, 7'h00);

    expectb("BR BNE true", brtaken_o, 1'b1);

    // BLT signed true: (-1) < (1)

    drive_alu(32'h0, 32'hFFFF_FFFF, 32'h0000_0001, 0, OPCODE_BRANCH, ALU_OP_ADD, 3'b100, 7'h00);

    expectb("BR BLT signed true", brtaken_o, 1'b1);

    // BGE signed true: (5) >= (-1)

    drive_alu(32'h0, 32'd5, 32'hFFFF_FFFE, 0, OPCODE_BRANCH, ALU_OP_ADD, 3'b101, 7'h00);

    expectb("BR BGE signed true", brtaken_o, 1'b1);

    // BLTU true: (1) < (0xFFFF_FFFF)

    drive_alu(32'h0, 32'd1, 32'hFFFF_FFFF, 0, OPCODE_BRANCH, ALU_OP_ADD, 3'b110, 7'h00);

    expectb("BR BLTU true", brtaken_o, 1'b1);

    // BGEU true: (0xFFFF_FFFF) >= 1

    drive_alu(32'h0, 32'hFFFF_FFFF, 32'd1, 0, OPCODE_BRANCH, ALU_OP_ADD, 3'b111, 7'h00);

    expectb("BR BGEU true", brtaken_o, 1'b1);


    $display("\n=== SUMMARY ===");

    if (errors == 0) $display("PD3 execute/branch/RF tests PASSED ✅");

    else             $display("%0d error(s) ❌", errors);

    $finish;

  end

  initial begin

    $dumpfile("tb_pd3.vcd");

    $dumpvars(0, tb_pd3);

  end

endmodule


