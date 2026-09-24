# Clustara: build every PicoRV32 test as its own standalone hex image.
#
# Upstream links all 45 tests into one firmware.hex. We need one binary
# per test so that Phase 5 can hand different tests to different pods.

RISCV_PREFIX  ?= riscv64-unknown-elf-
PICORV32_DIR  ?= ../third_party/picorv32
TESTS_DIR     := $(PICORV32_DIR)/tests
BUILD         := build

# 8192 words = 32 KB of hex. The tests are far smaller than this.
HEX_WORDS     ?= 8192

ARCH_FLAGS    := -mabi=ilp32 -march=rv32im

TEST_SRCS  := $(wildcard $(TESTS_DIR)/*.S)
TEST_NAMES := $(sort $(basename $(notdir $(TEST_SRCS))))

# Set EXCLUDE on the command line to skip a test that will not build.
EXCLUDE    ?=
TEST_NAMES := $(filter-out $(EXCLUDE),$(TEST_NAMES))

HEXS := $(addprefix $(BUILD)/,$(addsuffix .hex,$(TEST_NAMES)))

.PHONY: all list clean
all: $(HEXS)

list:
	@for t in $(TEST_NAMES); do echo $$t; done

$(BUILD):
	mkdir -p $(BUILD)

# ----------------------------------------------------------------------
# One set of rules per test. The start stub is compiled separately for
# each test because the test name is baked in as a macro.
# ----------------------------------------------------------------------
define TEST_RULES

$(BUILD)/$(1)_start.o: start_single.S | $(BUILD)
	$$(RISCV_PREFIX)gcc -c $$(ARCH_FLAGS) -o $$@ \
		-DTEST_FUNC_NAME=$(1) -DTEST_FUNC_RET=$(1)_ret $$<

$(BUILD)/$(1)_test.o: $$(TESTS_DIR)/$(1).S | $(BUILD)
	$$(RISCV_PREFIX)gcc -c $$(ARCH_FLAGS) -o $$@ \
		-DTEST_FUNC_NAME=$(1) -DTEST_FUNC_TXT='"$(1)"' -DTEST_FUNC_RET=$(1)_ret \
		-I $$(TESTS_DIR) $$<

$(BUILD)/$(1).elf: $(BUILD)/$(1)_start.o $(BUILD)/$(1)_test.o single.lds
	$$(RISCV_PREFIX)gcc $$(ARCH_FLAGS) -Os -ffreestanding -nostdlib -o $$@ \
		-Wl,--build-id=none,-Bstatic,-T,single.lds,--strip-debug \
		$(BUILD)/$(1)_start.o $(BUILD)/$(1)_test.o -lgcc

$(BUILD)/$(1).bin: $(BUILD)/$(1).elf
	$$(RISCV_PREFIX)objcopy -O binary $$< $$@

$(BUILD)/$(1).hex: $(BUILD)/$(1).bin
	python3 $$(PICORV32_DIR)/firmware/makehex.py $$< $$(HEX_WORDS) > $$@

endef

$(foreach t,$(TEST_NAMES),$(eval $(call TEST_RULES,$(t))))

clean:
	rm -rf $(BUILD)
