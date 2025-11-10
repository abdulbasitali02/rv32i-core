integer __trace_fd;
initial begin
  __trace_fd = $fopen(`TRACE_FILE, "w");
end
always @(negedge clock) begin
  if(reset == 0) begin
  // F stage trace dump
  $fwrite(__trace_fd, "[F] %x %x\n",
    dut.core.`PROBE_F_PC,
    dut.core.`PROBE_F_INSN);
  $fflush(__trace_fd);

  // D stage trace dump
  $fwrite(__trace_fd, "[D] %x %x %x %x %x %x %x %x %x\n",
    dut.core.`PROBE_D_PC,
    dut.core.`PROBE_D_OPCODE,
    dut.core.`PROBE_D_RD,
    dut.core.`PROBE_D_RS1,
    dut.core.`PROBE_D_RS2,
    dut.core.`PROBE_D_FUNCT3,
    dut.core.`PROBE_D_FUNCT7,
    dut.core.`PROBE_D_IMM,
    dut.core.`PROBE_D_SHAMT);
  $fflush(__trace_fd);

  // R stage trace dump
  $fwrite(__trace_fd, "[R] %x %x %x %x\n",
    dut.core.`PROBE_R_READ_RS1,
    dut.core.`PROBE_R_READ_RS2,
    dut.core.`PROBE_R_READ_RS1_DATA,
    dut.core.`PROBE_R_READ_RS2_DATA);
  $fflush(__trace_fd);

  // E stage trace dump
  $fwrite(__trace_fd, "[E] %x %x %x\n",
    dut.core.`PROBE_E_PC,
    dut.core.`PROBE_E_ALU_RES,
    dut.core.`PROBE_E_BR_TAKEN);
  $fflush(__trace_fd);

  // M stage trace dump
  $fwrite(__trace_fd, "[M] %x %x %x %x\n",
    dut.core.`PROBE_M_PC,
    dut.core.`PROBE_M_ADDRESS,
    dut.core.`PROBE_M_SIZE_ENCODED,
    dut.core.`PROBE_M_DATA);
  $fflush(__trace_fd);

  // W stage trace dump
  $fwrite(__trace_fd, "[W] %x %x %x %x\n",
    dut.core.`PROBE_W_PC,
    dut.core.`PROBE_W_ENABLE,
    dut.core.`PROBE_W_DESTINATION,
    dut.core.`PROBE_W_DATA);
  $fflush(__trace_fd);

  end
end