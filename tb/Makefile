# Clustara: cocotb plus Verilator run for one test hex.
#
# Usage from the repo root:
#   make -C tb TEST_NAME=add
#
# The Verilator build is shared across tests through SIM_BUILD, so only
# the first run pays the compile cost. Later runs just change +hex=.

SIM           ?= verilator
TOPLEVEL_LANG ?= verilog

ROOT          := $(shell cd .. && pwd)
PICORV32_DIR  ?= $(ROOT)/third_party/picorv32

TEST_NAME     ?= add
HEX           ?= $(ROOT)/sw/build/$(TEST_NAME).hex

VERILOG_SOURCES := $(ROOT)/rtl/tb_top.v $(PICORV32_DIR)/picorv32.v

TOPLEVEL := tb_top
MODULE   := test_picorv32

# Shared build directory so all tests reuse one compiled simulator.
SIM_BUILD ?= $(ROOT)/sim_build

# picorv32.v is older Verilog and raises style warnings we do not own.
EXTRA_ARGS += -Wno-fatal

PLUSARGS += +hex=$(HEX)

# Passed through to the Python testbench for logging and error messages.
export TEST_NAME
export HEX

COCOTB_RESULTS_FILE ?= $(ROOT)/results/$(TEST_NAME).xml

$(shell mkdir -p $(ROOT)/results)

include $(shell cocotb-config --makefiles)/Makefile.sim
