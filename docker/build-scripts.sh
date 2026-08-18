#!/usr/bin/env bash
set -euo pipefail

repo=${ST_REPO:-/workspace}
ghidra_home=${GHIDRA_HOME:-/opt/ghidra}

mapfile -d '' jars < <(find "$ghidra_home" -type f -name '*.jar' -print0 | sort -z)
mapfile -d '' sources < <(find "$repo/scripts" -maxdepth 1 -type f \
    -name 'ST[A-Za-z0-9_]*.java' -print0 | sort -z)

if (( ${#jars[@]} == 0 )); then
    echo "No Ghidra jars found under $ghidra_home" >&2
    exit 1
fi
if (( ${#sources[@]} == 0 )); then
    echo "No ST Java scripts found under $repo/scripts" >&2
    exit 1
fi

classpath=$(IFS=:; echo "${jars[*]}")
build_root=$(mktemp -d /tmp/st-script-build.XXXXXX)
trap 'rm -rf -- "$build_root"' EXIT

echo "Compiling ${#sources[@]} scripts with $(javac -version 2>&1)"
echo "Ghidra home: $ghidra_home"
javac -encoding UTF-8 -source 21 -target 21 \
    -classpath "$classpath" -d "$build_root/classes" "${sources[@]}"
echo "Script compilation passed: ${#sources[@]} sources"

