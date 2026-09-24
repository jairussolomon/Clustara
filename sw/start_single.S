/*
 * Clustara: start stub for a single test binary.
 *
 * The upstream PicoRV32 flow links all 45 tests into one firmware image.
 * That cannot be split across pods, so here each test is built into its
 * own binary with this stub in front of it.
 *
 * The test name is passed in at build time:
 *   -DTEST_FUNC_NAME=add  -DTEST_FUNC_RET=add_ret
 *
 * A passing test jumps to TEST_FUNC_RET, where we execute ebreak so the
 * core asserts trap and the simulation ends. A failing test executes its
 * own ebreak inside RVTEST_FAIL, so it ends the same way.
 */

	.section .text
	.global _start

_start:
	/* The test programs assume the register file starts at zero, so
	   clear it the same way upstream start.S does. */
	addi  x1, zero, 0
	addi  x2, zero, 0
	addi  x3, zero, 0
	addi  x4, zero, 0
	addi  x5, zero, 0
	addi  x6, zero, 0
	addi  x7, zero, 0
	addi  x8, zero, 0
	addi  x9, zero, 0
	addi x10, zero, 0
	addi x11, zero, 0
	addi x12, zero, 0
	addi x13, zero, 0
	addi x14, zero, 0
	addi x15, zero, 0
	addi x16, zero, 0
	addi x17, zero, 0
	addi x18, zero, 0
	addi x19, zero, 0
	addi x20, zero, 0
	addi x21, zero, 0
	addi x22, zero, 0
	addi x23, zero, 0
	addi x24, zero, 0
	addi x25, zero, 0
	addi x26, zero, 0
	addi x27, zero, 0
	addi x28, zero, 0
	addi x29, zero, 0
	addi x30, zero, 0
	addi x31, zero, 0

	/* stack pointer at 96 KB, matching single.lds */
	lui  sp, (96*1024)>>12

	/* run the one test this binary was built for */
	jal  zero, TEST_FUNC_NAME

	/* the test jumps here when it passes */
	.global TEST_FUNC_RET
TEST_FUNC_RET:
	ebreak

	/* should never be reached */
halt_loop:
	jal zero, halt_loop
