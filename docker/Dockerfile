FROM ubuntu:24.04@sha256:561618e2c15bf2397621dd04f96926663a3b5616c189cf7e38db7e82f5c538ea

ARG DEBIAN_FRONTEND=noninteractive
ARG GHIDRA_VERSION=12.1.2
ARG GHIDRA_RELEASE_DATE=20260605
ARG GHIDRA_SHA256=b62e81a0390618466c019c60d8c2f796ced2509c4c1aea4a37644a77272cf99d

LABEL org.opencontainers.image.title="Submarine Titans Decompilation Environment"
LABEL org.opencontainers.image.description="Pinned Ghidra/JDK toolchain for analysis, export, and source audits"
LABEL org.opencontainers.image.source="https://github.com/prykin/st-decompilation"

RUN apt-get update && apt-get install -y --no-install-recommends \
        ca-certificates \
        clang \
        curl \
        file \
        fontconfig \
        g++-multilib \
        git \
        git-lfs \
        gosu \
        libfreetype6 \
        libxi6 \
        libxrender1 \
        libxtst6 \
        openjdk-21-jdk-headless \
        python3 \
        unzip \
        util-linux \
    && rm -rf /var/lib/apt/lists/*

RUN archive="/tmp/ghidra_${GHIDRA_VERSION}.zip" \
    && curl --fail --location --retry 5 --retry-all-errors \
        "https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_${GHIDRA_VERSION}_build/ghidra_${GHIDRA_VERSION}_PUBLIC_${GHIDRA_RELEASE_DATE}.zip" \
        --output "$archive" \
    && printf '%s  %s\n' "$GHIDRA_SHA256" "$archive" | sha256sum --check --strict \
    && unzip -q "$archive" -d /opt \
    && mv "/opt/ghidra_${GHIDRA_VERSION}_PUBLIC" /opt/ghidra \
    && rm "$archive"

ENV GHIDRA_HOME=/opt/ghidra
ENV JAVA_HOME=/usr/lib/jvm/java-21-openjdk-amd64
ENV PATH=/opt/ghidra/support:/usr/lib/jvm/java-21-openjdk-amd64/bin:${PATH}

COPY --chmod=0755 docker/container-entrypoint.sh /usr/local/bin/st-container-entrypoint
COPY --chmod=0755 docker/st-command.sh /usr/local/bin/st-command
COPY --chmod=0755 docker/build-scripts.sh /usr/local/bin/st-build-scripts

WORKDIR /workspace
ENTRYPOINT ["/usr/local/bin/st-container-entrypoint"]
CMD ["full-export"]
