"""Clustara: cocotb testbench for one PicoRV32 regression test.

The hex image is selected by the HEX environment variable and passed to
the simulator as +hex=<path> by the Makefile. This module only drives the
clock and reset, collects the characters the program prints and decides
pass or fail.

A passing riscv-tests program prints "OK" and then executes ebreak.
A failing one prints "ERROR" and then executes ebreak. Either way the
core asserts trap, so trap alone is not a result, the printed text is.
"""

import os

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge

CLOCK_PERIOD_NS = 10
RESET_CYCLES = 100

# Generous ceiling. The longest of these tests finishes well inside this.
MAX_CYCLES = int(os.environ.get("MAX_CYCLES", "200000"))


@cocotb.test()
async def run_single_test(dut):
    test_name = os.environ.get("TEST_NAME", "unknown")
    hex_path = os.environ.get("HEX", "unknown")

    dut._log.info("running test %s from %s", test_name, hex_path)

    cocotb.start_soon(Clock(dut.clk, CLOCK_PERIOD_NS, units="ns").start())

    dut.resetn.value = 0
    await ClockCycles(dut.clk, RESET_CYCLES)
    dut.resetn.value = 1

    printed = []
    trapped = False
    cycles = 0

    while cycles < MAX_CYCLES:
        await RisingEdge(dut.clk)
        cycles += 1

        if dut.out_valid.value == 1:
            printed.append(chr(int(dut.out_char.value) & 0xFF))

        if dut.resetn.value == 1 and dut.trap.value == 1:
            trapped = True
            break

    output = "".join(printed)
    dut._log.info("test %s output: %r (cycles=%d)", test_name, output, cycles)

    if not trapped:
        raise AssertionError(
            "test %s did not finish within %d cycles, output so far: %r"
            % (test_name, MAX_CYCLES, output)
        )

    if "ERROR" in output:
        raise AssertionError(
            "test %s reported a failure, output: %r" % (test_name, output)
        )

    if "OK" not in output:
        raise AssertionError(
            "test %s trapped without printing OK, output: %r" % (test_name, output)
        )

    dut._log.info("test %s passed in %d cycles", test_name, cycles)
