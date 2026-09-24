/*
 * Clustara: linker script for a single test binary.
 * Based on the PicoRV32 firmware/sections.lds.
 *
 * The core resets to address 0, so the start stub must be placed first.
 * Length is 96 KB, leaving the rest of the 128 KB memory for the stack.
 */

MEMORY {
	mem : ORIGIN = 0x00000000, LENGTH = 0x00018000
}

SECTIONS {
	.memory : {
		. = 0x000000;
		*start.o(.text);
		*(.text);
		*(*);
		end = .;
		. = ALIGN(4);
	} > mem
}
