/*
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD1 -----------
 * Module: memory
 *
 * Description: Byte-addressable memory implementation. Supports both read and write.
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 * 3) AWIDTH address addr_i
 * 4) DWIDTH data to write data_i
 * 5) read enable signal read_en_i
 * 6) write enable signal write_en_i
 *
 * Outputs:
 * 1) DWIDTH data output data_o
 * 2) data out valid signal data_vld_o
 */

module memory #(
  // parameters
  parameter int AWIDTH = 32,
  parameter int DWIDTH = 32,
  parameter logic [31:0] IMEM_BASE_ADDR = 32'h01000000
) (
  // inputs
  input logic clk,
  input logic rst,
  input logic [AWIDTH-1:0] addr_i, 
  input logic [DWIDTH-1:0] data_i,
  input logic [DWIDTH/8-1:0] write_strb_i,
  input logic read_en_i,
  input logic write_en_i,
  // outputs
  output logic [DWIDTH-1:0] data_o,
  output logic data_vld_o
);

localparam int BYTES_PER_WORD = DWIDTH / 8;
localparam int MEM_BYTES = (BYTES_PER_WORD > 0) ? (`LINE_COUNT * BYTES_PER_WORD) : 0;

logic [DWIDTH-1:0] temp_memory [0:`LINE_COUNT - 1];
logic [7:0] main_memory [0:(MEM_BYTES > 0 ? MEM_BYTES : 1) - 1];  
logic [AWIDTH-1:0] address;

assign address = addr_i - IMEM_BASE_ADDR;

initial begin
    for (int i = 0; i < MEM_BYTES; i++) begin
        main_memory[i] = 8'h00;
    end
    if (`LINE_COUNT > 0) begin
        $readmemh(`MEM_PATH, temp_memory);
        for (int i = 0; i < `LINE_COUNT; i++) begin
            for (int b = 0; b < BYTES_PER_WORD; b++) begin
                main_memory[i * BYTES_PER_WORD + b] = temp_memory[i][8*b +: 8];
            end
        end
        $display("IMEMORY: Loaded %0d 32-bit words from %s", `LINE_COUNT, `MEM_PATH);
    end
end

always_comb begin
    data_o = '0; 
    data_vld_o = 1'b0; 

    if (read_en_i) begin
        data_vld_o = 1'b1;
        if ($isunknown(addr_i)) begin
            data_o = '0;
        end else if ((addr_i >= IMEM_BASE_ADDR) &&
                    (addr_i + AWIDTH'(BYTES_PER_WORD-1) < IMEM_BASE_ADDR + AWIDTH'(MEM_BYTES))) begin
                        for (int b = 0; b < BYTES_PER_WORD; b++) begin
                            data_o[8*b +: 8] = main_memory[address + b];
                        end
        end else begin
            data_o = 32'hDEAD_BEEF;
            $display("MEMORY READ ERROR: Address %h out of bounds", addr_i, address);
        end
    end
end

always_ff @(posedge clk) begin
    if (write_en_i) begin
        if ((addr_i >= IMEM_BASE_ADDR) && (addr_i < IMEM_BASE_ADDR + AWIDTH'(MEM_BYTES))) begin
            for (int b = 0; b < BYTES_PER_WORD; b++) begin
                if (write_strb_i[b]) begin
                    main_memory[address + b] <= data_i[8*b +: 8];
                end
            end
            $display("MEMORY WRITE: Wrote 0x%08h to 0x%08h", data_i, addr_i), write_strb_i;
        end else begin
            $display("MEMORY WRITE ERROR: Address %h out of bounds", addr_i);
        end
    end
end
endmodule : memory