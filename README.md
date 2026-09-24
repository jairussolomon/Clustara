# Clustara

RTL CI/CD with a Kubernetes regression farm, built on PicoRV32.

Verification runs on every code change, and large regression suites fan
out across parallel pods so feedback stays fast.

**Status: Phase 1.** One test running locally. No CI and no Kubernetes
yet, on purpose.

## Layout

```
rtl/tb_top.v          PicoRV32 plus memory and a character output port
tb/                   cocotb testbench and its Makefile
sw/                   builds each test into its own hex image
scripts/              serial regression runner
docker/               Phase 2 image, draft
third_party/picorv32  upstream submodule, pinned
```

## Host setup

Ubuntu or Debian:

```bash
sudo apt update
sudo apt install -y build-essential git python3 python3-pip python3-venv \
    autoconf flex bison help2man libfl-dev zlib1g-dev perl \
    gcc-riscv64-unknown-elf
```

Verilator from the distro is often too old for cocotb. Build a pinned
release:

```bash
git clone --depth 1 --branch v5.030 https://github.com/verilator/verilator
cd verilator && autoconf && ./configure && make -j"$(nproc)" && sudo make install
```

Python deps in a virtualenv:

```bash
python3 -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt
```

## Get the submodule

```bash
git submodule add https://github.com/YosysHQ/picorv32.git third_party/picorv32
cd third_party/picorv32 && git checkout ef203c2b0a3fb793280f5114941416c425c5b461 && cd -
git add third_party/picorv32 && git commit -m "pin picorv32"
```

## Run

```bash
make sw                    # build all 45 test hex images
make test TEST_NAME=add    # run one test
make regression            # run all of them serially
make lint                  # lint our own RTL
```

Logs land in `results/`. A failing test leaves `results/<name>.log`.

## Phases

0. tools and decisions, see `DECISIONS.md` (done)
1. one test passing locally (here)
2. Docker image
3. CI with no Kubernetes
4. local kind cluster
5. bucket split and Indexed Job fan out
6. CI submits the Job and gates the PR
7. scaling graph, wall clock against pod count
