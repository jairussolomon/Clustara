# Clustara verification image.
#
# DRAFT for Phase 2. Do not build this until Phase 1 passes on the host,
# otherwise you debug the image and the testbench at the same time.
#
# Both the CI runner and every Kubernetes pod pull this same image, so it
# is the thing that makes a regression result reproducible.

FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

# Pinned Verilator release. The Ubuntu package is usually too old for
# current cocotb, so it is built from source.
ARG VERILATOR_VERSION=v5.030

RUN apt-get update && apt-get install -y --no-install-recommends \
	build-essential \
	git \
	make \
	python3 \
	python3-pip \
	python3-dev \
	python3-venv \
	ca-certificates \
	curl \
	unzip \
	autoconf \
	flex \
	bison \
	help2man \
	libfl2 \
	libfl-dev \
	zlib1g-dev \
	perl \
	gcc-riscv64-unknown-elf \
	&& rm -rf /var/lib/apt/lists/*

# Verilator
RUN git clone --depth 1 --branch ${VERILATOR_VERSION} \
		https://github.com/verilator/verilator /tmp/verilator \
	&& cd /tmp/verilator \
	&& autoconf \
	&& ./configure \
	&& make -j"$(nproc)" \
	&& make install \
	&& rm -rf /tmp/verilator

# Verible, prebuilt release binaries
ARG VERIBLE_VERSION=v0.0-3946-g851d3ff4
RUN curl -fsSL -o /tmp/verible.tar.gz \
		"https://github.com/chipsalliance/verible/releases/download/${VERIBLE_VERSION}/verible-${VERIBLE_VERSION}-linux-static-x86_64.tar.gz" \
	&& mkdir -p /opt/verible \
	&& tar -xzf /tmp/verible.tar.gz -C /opt/verible --strip-components=1 \
	&& rm /tmp/verible.tar.gz
ENV PATH="/opt/verible/bin:${PATH}"

# Python deps
COPY requirements.txt /tmp/requirements.txt
RUN pip3 install --no-cache-dir --break-system-packages -r /tmp/requirements.txt

WORKDIR /work

CMD ["/bin/bash"]
