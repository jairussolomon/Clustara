// Clustara: testbench top for PicoRV32 regression runs.
//
// Wraps the PicoRV32 core with a simple word addressed memory and one
// memory mapped character output port. The program is loaded from a hex
// file given on the command line as +hex=<path>.
//
// The riscv-tests style programs in picorv32/tests write characters to
// 0x10000000. A passing test prints "OK\n". A failing test prints
// "ERROR\n" and then executes ebreak, which makes the core assert trap.
// Both endings therefore finish with trap, and cocotb decides pass or
// fail from the characters that were printed.

`timescale 1 ns / 1 ps

module tb_top #(
	// 32768 words = 128 KB. The linker script uses 96 KB for code and
	// data and leaves the rest for the stack.
	parameter integer MEM_WORDS = 32768
) (
	input  wire        clk,
	input  wire        resetn,
	output wire        trap,

	// one character strobe, watched by the cocotb testbench
	output reg         out_valid,
	output reg  [7:0]  out_char
);

	// ------------------------------------------------------------------
	// core interface
	// ------------------------------------------------------------------
	wire        mem_valid;
	wire        mem_instr;
	reg         mem_ready;
	wire [31:0] mem_addr;
	wire [31:0] mem_wdata;
	wire [ 3:0] mem_wstrb;
	reg  [31:0] mem_rdata;

	// ------------------------------------------------------------------
	// memory and program load
	// ------------------------------------------------------------------
	reg [31:0] memory [0:MEM_WORDS-1];

	reg [1023:0] hexfile;
	integer i;

	initial begin
		for (i = 0; i < MEM_WORDS; i = i + 1)
			memory[i] = 32'h0000_0000;

		if ($value$plusargs("hex=%s", hexfile)) begin
			$readmemh(hexfile, memory);
		end else begin
			$display("tb_top: no +hex=<file> given, memory is empty");
			$finish;
		end
	end

	// ------------------------------------------------------------------
	// bus: single cycle memory, one character output port
	// ------------------------------------------------------------------
	localparam [31:0] OUT_ADDR = 32'h1000_0000;

	always @(posedge clk) begin
		out_valid <= 1'b0;
		mem_ready <= 1'b0;

		if (!resetn) begin
			mem_ready <= 1'b0;
			out_valid <= 1'b0;
		end else if (mem_valid && !mem_ready) begin
			mem_ready <= 1'b1;

			if (mem_addr < (4 * MEM_WORDS)) begin
				mem_rdata <= memory[mem_addr >> 2];
				if (mem_wstrb[0]) memory[mem_addr >> 2][ 7: 0] <= mem_wdata[ 7: 0];
				if (mem_wstrb[1]) memory[mem_addr >> 2][15: 8] <= mem_wdata[15: 8];
				if (mem_wstrb[2]) memory[mem_addr >> 2][23:16] <= mem_wdata[23:16];
				if (mem_wstrb[3]) memory[mem_addr >> 2][31:24] <= mem_wdata[31:24];
			end else if (mem_addr == OUT_ADDR) begin
				mem_rdata <= 32'h0000_0000;
				if (mem_wstrb != 4'b0000) begin
					out_char  <= mem_wdata[7:0];
					out_valid <= 1'b1;
				end
			end else begin
				// unmapped address, still acknowledge so the core does
				// not hang. cocotb will time out if this goes wrong.
				mem_rdata <= 32'h0000_0000;
			end
		end
	end

	// ------------------------------------------------------------------
	// core
	// ------------------------------------------------------------------
	// ENABLE_MUL and ENABLE_DIV are required because the test programs
	// are built for rv32im and the mul, div and rem tests use them.
	picorv32 #(
		.ENABLE_MUL   (1),
		.ENABLE_DIV   (1),
		.ENABLE_IRQ   (0),
		.PROGADDR_RESET(32'h0000_0000),
		.STACKADDR    (32'h0001_8000)
	) cpu (
		.clk       (clk      ),
		.resetn    (resetn   ),
		.trap      (trap     ),
		.mem_valid (mem_valid),
		.mem_instr (mem_instr),
		.mem_ready (mem_ready),
		.mem_addr  (mem_addr ),
		.mem_wdata (mem_wdata),
		.mem_wstrb (mem_wstrb),
		.mem_rdata (mem_rdata)
	);

endmodule
