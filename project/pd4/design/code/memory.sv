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

localparam int BYTES_PER_WORD   = (DWIDTH > 0) ? (DWIDTH / 8) : 0;
localparam int MEM_BYTES        = (`MEM_DEPTH > 0) ? `MEM_DEPTH : 1;
localparam int MAX_VALID_OFFSET = (BYTES_PER_WORD > 0 && MEM_BYTES >= BYTES_PER_WORD) ? (MEM_BYTES - BYTES_PER_WORD) : 0;


logic [DWIDTH-1:0] temp_memory [0:(`LINE_COUNT > 0) ? `LINE_COUNT - 1 : 0];
logic [7:0]         main_memory [0:MEM_BYTES-1];
logic [AWIDTH-1:0]  addr_offset;
logic               read_valid;
logic               write_valid;
logic               read_en_prev;
logic               last_oob_read_valid;
logic [AWIDTH-1:0]  last_oob_read_addr;

assign addr_offset = to_offset(addr_i);
assign read_valid  = read_en_i && addr_in_range(addr_i);
assign write_valid = write_en_i && addr_in_range(addr_i);

function automatic logic addr_in_range(input logic [AWIDTH-1:0] addr);
    logic [AWIDTH-1:0] offset;
    addr_in_range = 1'b0;

    if (BYTES_PER_WORD == 0) begin
        return addr_in_range;
    end

    if ($isunknown(addr)) begin
        return addr_in_range;
    end

    if (addr >= IMEM_BASE_ADDR) begin
        offset = addr - IMEM_BASE_ADDR;
        if (offset <= AWIDTH'(MAX_VALID_OFFSET)) begin
            addr_in_range = 1'b1;
        end
    end
endfunction 

function automatic logic [AWIDTH-1:0] to_offset(input logic [AWIDTH-1:0] addr);
    if (addr >= IMEM_BASE_ADDR) begin
        to_offset = addr - IMEM_BASE_ADDR;
    end else begin
        to_offset = '0;
    end
endfunction


initial begin
    for (int i = 0; i < MEM_BYTES; i++) begin
        main_memory[i] = 8'h00;
    end
    if (`LINE_COUNT > 0) begin
        $readmemh(`MEM_PATH, temp_memory);
        for (int i = 0; i < `LINE_COUNT; i++) begin
            for (int b = 0; b < BYTES_PER_WORD; b++) begin
                int index = i * BYTES_PER_WORD + b;
                if (index < MEM_BYTES) begin
                    main_memory[index] = temp_memory[i][8*b +: 8];
                end
            end
        end
        $display("IMEMORY: Loaded %0d 32-bit words from %s", `LINE_COUNT, `MEM_PATH);
    end
end

always_comb begin
    data_o = '0;
    data_vld_o = read_valid;

    if (read_valid) begin
        for (int b = 0; b < BYTES_PER_WORD; b++) begin
            data_o[8*b +: 8] = main_memory[addr_offset + b];
        end
    end
    `ifndef SYNTHESIS
        else if(read_en_i) begin
            $warning("MEMORY: Read from OOOB Address 0x%08h returns 0", addr_i);
        end
    `endif
end

always_ff @(posedge clk) begin
    if (write_valid) begin
        for (int b = 0; b < BYTES_PER_WORD; b++) begin
            if (write_strb_i[b]) begin
                main_memory[addr_offset + b] <= data_i[8*b +: 8];
            end
        end

        `ifndef SYNTHESIS
        $display("MEMORY: Wrote 0x%08h to Address 0x%08h", data_i, addr_i);
        `endif
             end

    `ifndef SYNTHESIS
    if (write_en_i && !write_valid) begin
        $warning("MEMORY: Write to OOOB Address 0x%08h ignored", addr_i);
    end
    `endif
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        read_en_prev        <= 1'b0;
        last_oob_read_valid <= 1'b0;
        last_oob_read_addr  <= '0;
    end else begin
        if (read_en_i && !read_valid) begin
            if (!last_oob_read_valid || (addr_i != last_oob_read_addr) || !read_en_prev) begin
                `ifndef SYNTHESIS
                $warning("MEMORY: Read from OOOB Address 0x%08h returns 0", addr_i);
                `endif
            end
            last_oob_read_valid <= 1'b1;
            last_oob_read_addr  <= addr_i;
        end else if (!read_en_i || read_valid) begin
            last_oob_read_valid <= 1'b0;
        end
        read_en_prev <= read_en_i;
    end
end

endmodule : memory