`timescale 1ns/1ps

`include "constants.svh"



module tb_pd2;



  localparam int DWIDTH = 32;

  localparam int AWIDTH = 32;



  // clk/rst

  logic clk = 0, rst = 1;

  always #5 clk = ~clk;

  initial begin repeat (2) @(posedge clk); rst = 0; end



  // DUTs

  logic [DWIDTH-1:0] insn_i, pc_i;



  // decode outputs

  logic [AWIDTH-1:0] pc_o;

  logic [DWIDTH-1:0] insn_o, imm_o;

  logic [6:0]        opcode_o, funct7_o;

  logic [4:0]        rd_o, rs1_o, rs2_o, shamt_o;

  logic [2:0]        funct3_o;



  decode #(.DWIDTH(DWIDTH), .AWIDTH(AWIDTH)) u_decode (

    .clk(clk), .rst(rst),

    .insn_i(insn_i), .pc_i(pc_i),

    .pc_o(pc_o), .insn_o(insn_o),

    .opcode_o(opcode_o), .rd_o(rd_o),

    .rs1_o(rs1_o), .rs2_o(rs2_o),

    .funct7_o(funct7_o), .funct3_o(funct3_o),

    .shamt_o(shamt_o), .imm_o(imm_o)

  );



  // control

  logic pcsel_o, immsel_o, regwren_o, rs1sel_o, rs2sel_o, memren_o, memwren_o;

  logic [1:0] wbsel_o;

  logic [3:0] alusel_o;



  control u_control (

    .insn_i   (insn_o),

    .opcode_i (opcode_o),

    .funct7_i (funct7_o),

    .funct3_i (funct3_o),

    .pcsel_o  (pcsel_o),

    .immsel_o (immsel_o),

    .regwren_o(regwren_o),

    .rs1sel_o (rs1sel_o),

    .rs2sel_o (rs2sel_o),

    .memren_o (memren_o),

    .memwren_o(memwren_o),

    .wbsel_o  (wbsel_o),

    .alusel_o (alusel_o)

  );



  // helpers

  int errors = 0;

  task expect_bit(string tag, bit got, bit exp);

    if (got !== exp) begin $display("FAIL %s got=%0b exp=%0b", tag, got, exp); errors++; end

    else $display("[OK] %s", tag);

  endtask

  task expect_eq(string tag, logic [31:0] got, logic [31:0] exp);

    if (got !== exp) begin $display("FAIL %s got=0x%08h exp=0x%08h", tag, got, exp); errors++; end

    else $display("[OK] %s = 0x%08h", tag, got);

  endtask



  // encoders

  function automatic [31:0] U(input [31:12] imm, input [4:0] rd, input [6:0] opc);

    return {imm, rd, opc};

  endfunction

  function automatic [31:0] I(input [11:0] imm, input [4:0] rs1,

                              input [2:0] f3, input [4:0] rd, input [6:0] opc);

    return {{20{imm[11]}}, imm, rs1, f3, rd, opc};

  endfunction

  function automatic [31:0] R(input [6:0] f7, input [4:0] rs2, rs1,

                              input [2:0] f3, input [4:0] rd, input [6:0] opc);

    return {f7, rs2, rs1, f3, rd, opc};

  endfunction

  function automatic [31:0] S(input [11:0] imm, input [4:0] rs2, rs1,

                              input [2:0] f3, input [6:0] opc);

    return {{20{imm[11]}}, imm[11:5], rs2, rs1, f3, imm[4:0], opc};

  endfunction

  function automatic [31:0] B(input [12:1] imm, input [4:0] rs2, rs1,

                              input [2:0] f3, input [6:0] opc);

    return {{19{imm[12]}}, imm[12], imm[10:5], rs2, rs1, f3, imm[4:1], imm[11], opc};

  endfunction



  typedef struct packed {

    string     name;

    logic[31:0] insn;

    // expected decode fields

    logic[6:0]  opc, f7;

    logic[2:0]  f3;

    logic[4:0]  rd, rs1, rs2, shamt;

    logic[31:0] imm;

    // key control bits to check (keep it light)

    bit regwren, immsel, memren, memwren;

    logic[1:0] wbsel;

    logic[3:0] alusel;

  } tv_t;



  tv_t V[$];



  initial begin

    //LUI x5, 0x12345000

    V.push_back('{"LUI",   U(20'h12345, 5'd5,  OPCODE_LUI),

                 OPCODE_LUI, 7'b0000000, 3'b000, 5'd5, 5'd0, 5'd0, 5'd0,

                 32'h12345_000, 1,1,0,0, WBSEL_IMM, ALU_OP_COPY_B});



    //AUIPC x6, 0x00012000

    V.push_back('{"AUIPC", U(20'h00012, 5'd6,  OPCODE_AUIPC),

                 OPCODE_AUIPC,7'b0000000,3'b000,5'd6,5'd0,5'd0,5'd0,

                 32'h00012_000, 1,1,0,0, WBSEL_ALU, ALU_OP_ADD});



    //ADDI x8, x9, -4

    V.push_back('{"ADDI",  I(12'hFFC, 5'd9, 3'b000, 5'd8, OPCODE_OP_IMM),

                 OPCODE_OP_IMM,7'b0000000,3'b000,5'd8,5'd9,5'd0,5'd28,

                 32'hFFFF_FFFC, 1,1,0,0, WBSEL_ALU, ALU_OP_ADD});



    // SRLI x12, x13, 3  (imm[31:25]=0000000, funct3=101)

    V.push_back('{"SRLI",  I({7'b0000000,5'd3}, 5'd13, 3'b101, 5'd12, OPCODE_OP_IMM),

                 OPCODE_OP_IMM,7'b0000000,3'b101,5'd12,5'd13,5'd0,5'd3,

                 32'd3, 1,1,0,0, WBSEL_ALU, ALU_OP_SRL});



    //SUB x14,x15,x16 (R-type, funct7=0100000)

    V.push_back('{"SUB",   R(7'b0100000,5'd16,5'd15,3'b000,5'd14,OPCODE_OP),

                 OPCODE_OP,7'b0100000,3'b000,5'd14,5'd15,5'd16,5'd16,

                 32'd0, 1,0,0,0, WBSEL_ALU, ALU_OP_SUB});



    //LW x10,16(x1)

    V.push_back('{"LW",    I(12'd16, 5'd1, 3'b010, 5'd10, OPCODE_LOAD),

                 OPCODE_LOAD,7'b0000000,3'b010,5'd10,5'd1,5'd0,5'd16,

                 32'd16, 1,1,1,0, WBSEL_MEM, ALU_OP_ADD});



    // SW x11,20(x1)

    V.push_back('{"SW",    S(12'd20, 5'd11,5'd1,3'b010,OPCODE_STORE),

                 OPCODE_STORE,7'b0000000,3'b010,5'd0,5'd1,5'd11,5'd20,

                 32'd20, 0,1,0,1, WBSEL_ALU, ALU_OP_ADD});



    //BEQ x3,x4,+8

    V.push_back('{"BEQ",   B(12'd4, 5'd4,5'd3,3'b000,OPCODE_BRANCH),

                 OPCODE_BRANCH,7'b0000000,3'b000,5'd0,5'd3,5'd4,5'd0,

                 32'd8, 0,1,0,0, WBSEL_ALU, ALU_OP_ADD});



    // ALR x1, x2, 12

    V.push_back('{"JALR",  I(12'd12, 5'd2, 3'b000, 5'd1, OPCODE_JALR),

                 OPCODE_JALR,7'b0000000,3'b000,5'd1,5'd2,5'd0,5'd12,

                 32'd12, 1,1,0,0, WBSEL_PC4, ALU_OP_ADD});

  end



  //one cycle per vector

  int i;

  initial begin

    pc_i = 32'h2000_0000;

    insn_i = INSN_NOP;



    @(negedge rst);

    foreach (V[i]) begin

      insn_i = V[i].insn;

      pc_i   = pc_i + 32'd4;



      @(posedge clk); 



      //decode checks

      expect_eq({V[i].name," opcode"}, {25'd0, opcode_o}, {25'd0, V[i].opc});

      expect_eq({V[i].name," funct3"}, {29'd0, funct3_o}, {29'd0, V[i].f3});

      expect_eq({V[i].name," funct7"}, {25'd0, funct7_o}, {25'd0, V[i].f7});

      expect_eq({V[i].name," rd"},     {27'd0, rd_o},     {27'd0, V[i].rd});

      expect_eq({V[i].name," rs1"},    {27'd0, rs1_o},    {27'd0, V[i].rs1});

      expect_eq({V[i].name," rs2"},    {27'd0, rs2_o},    {27'd0, V[i].rs2});

      expect_eq({V[i].name," shamt"},  {27'd0, shamt_o},  {27'd0, V[i].shamt});

      expect_eq({V[i].name," imm"},    imm_o,             V[i].imm);



      //control check

      expect_bit({V[i].name," regwren"}, regwren_o, V[i].regwren);

      expect_bit({V[i].name," immsel"},  immsel_o,  V[i].immsel);

      expect_bit({V[i].name," memren"},  memren_o,  V[i].memren);

      expect_bit({V[i].name," memwren"}, memwren_o, V[i].memwren);

      expect_bit({V[i].name," wbsel"},   wbsel_o == V[i].wbsel, 1'b1);

      expect_bit({V[i].name," alusel"},  alusel_o == V[i].alusel, 1'b1);

    end



    $display("\n=== SUMMARY ===");

    if (errors == 0) $display("All simple decode/control/imm tests PASSED");

    else             $display("%0d error(s)", errors);

    $finish;

  end



  //waves

  initial begin

    $dumpfile("tb_decode_simple.vcd");

    $dumpvars(0, tb_decode_simple);

  end



endmodule


