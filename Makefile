# Clustara: top level entry points.
#
#   make sw                  build all 45 test hex images
#   make test TEST_NAME=add  run one test
#   make regression          run every test serially
#   make lint                lint our own RTL with Verible
#   make clean

TEST_NAME ?= add

.PHONY: all sw test regression lint clean

all: sw

sw:
	$(MAKE) -C sw

test: sw
	$(MAKE) -C tb TEST_NAME=$(TEST_NAME)

regression: sw
	./scripts/run_regression.sh

# Only our own RTL is linted. third_party/picorv32 is upstream code we do
# not own and it does not follow these style rules.
lint:
	verible-verilog-lint --rules_config .rules.verible_lint rtl/*.v

clean:
	$(MAKE) -C sw clean
	rm -rf sim_build results
