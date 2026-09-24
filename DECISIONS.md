# Phase 0 decisions

Recorded so later phases do not quietly change the ground under them.

## Design under test

Plain PicoRV32 first, pulled in as a git submodule pinned to one commit.
The ML-KEM SoC is swapped in only after Phase 6 works. Debugging crypto
RTL and Kubernetes at the same time is how this project dies.

## Regression suite

The 45 assembly tests in `picorv32/tests`. Each one exercises a single
instruction or instruction group.

**Important change from upstream.** PicoRV32 links all 45 tests into one
`firmware.hex` that runs them back to back. One binary cannot be split
across pods, so Clustara builds each test as its own ELF and hex using
the stub in `sw/start_single.S`. That gives 45 independent test cases,
which is what the Phase 5 fan out needs.

## How a test reports its result

The test programs write characters to MMIO address `0x10000000`.

* pass: prints `OK` then jumps to `<test>_ret`, where our stub runs `ebreak`
* fail: prints `ERROR` then runs `ebreak` itself

Both paths end with the core asserting `trap`, so `trap` alone is not a
result. The cocotb testbench decides from the printed text.

## Toolchain

| Tool | Choice | Why |
| --- | --- | --- |
| Simulator | Verilator, built from a pinned release | Ubuntu package is usually too old for cocotb |
| Test framework | cocotb 1.9.2 | cocotb 2.x changed the API, we move after the pipeline is green |
| Lint | Verible, prebuilt binaries | no build needed |
| RISC-V compiler | `gcc-riscv64-unknown-elf` from Ubuntu | bare metal tests only, no need to build a toolchain |
| Base image | Ubuntu 24.04 | matches the CI runner |

The compiler was missing from the original plan. The tests are assembly
sources, so they must be compiled to hex before the simulator can load
them.

Build flags: `-mabi=ilp32 -march=rv32im`. The `mul`, `div` and `rem`
tests need the M extension, so `tb_top.v` instantiates PicoRV32 with
`ENABLE_MUL=1` and `ENABLE_DIV=1`. Without this those tests fail.

## Lint scope

Verible runs on `rtl/*.v` only. `third_party/picorv32` is upstream
Verilog 2005 that we do not own, and linting it would fail the build on
day one for reasons we cannot fix.

## Repo and hosting

One public repo under the NoETHERXLabs org. Public keeps GitHub Actions
minutes and GHCR storage free, which Phases 2 and 3 depend on. Cadence
tools stay entirely out of the repo and the image, since license servers
cannot legally be baked into a public container.

## Open items

* CI to cluster path in Phase 6: self hosted runner on the same machine
  as kind. Decided in principle, set up in Phase 6.
* Pod counts for the Phase 7 scaling graph depend on the host core count.
