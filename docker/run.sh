#!/usr/bin/env bash
set -euo pipefail

repo=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd -P)
log_root="$repo/.st-local/docker"
mkdir -p "$log_root"

if [[ -f "$repo/.env" ]]; then
    set -a
    # shellcheck disable=SC1091
    source "$repo/.env"
    set +a
fi

export ST_HOST_UID=${ST_HOST_UID:-$(id -u)}
export ST_HOST_GID=${ST_HOST_GID:-$(id -g)}

# Resolve the daemon through the user's selected context, then isolate all
# registry authentication from the user's global Docker credential store.
# The standalone Compose binary remains usable with an alternate config dir,
# unlike a plugin installed only below ~/.docker/cli-plugins.
if [[ -z ${DOCKER_HOST:-} ]]; then
    docker_context=${ST_DOCKER_CONTEXT:-$(docker context show)}
    DOCKER_HOST=$(docker context inspect "$docker_context" \
        --format '{{(index .Endpoints "docker").Host}}')
    export DOCKER_HOST
fi

docker_config="$repo/.st-local/docker-cli"
buildx_path=$(docker info --format \
    '{{range .ClientInfo.Plugins}}{{if eq .Name "buildx"}}{{.Path}}{{end}}{{end}}')
[[ -n "$buildx_path" ]] || {
    echo "Docker buildx plugin is required" >&2
    exit 1
}
buildx_dir=$(dirname "$buildx_path")
if [[ "$buildx_dir" == *'"'* || "$buildx_dir" == *'\'* ]]; then
    echo "unsupported Docker plugin path: $buildx_dir" >&2
    exit 1
fi
mkdir -p "$docker_config"
printf '{\n  "auths": {},\n  "cliPluginsExtraDirs": ["%s"]\n}\n' \
    "$buildx_dir" > "$docker_config/config.json"
export DOCKER_CONFIG="$docker_config"

if command -v docker-compose >/dev/null 2>&1; then
    compose=(docker-compose)
else
    echo "docker-compose executable is required for credential-isolated runs" >&2
    exit 1
fi

cd "$repo"
if [[ ${1:-} == build-image ]]; then
    shift
    latest="$log_root/image-build.latest.log"
    previous="$log_root/image-build.previous.log"
    current="$log_root/.image-build.current.log"
    [[ ! -f "$latest" ]] || mv -f "$latest" "$previous"
    : > "$current"
    set +e
    "${compose[@]}" build "$@" ghidra 2>&1 | tee "$current"
    status=${PIPESTATUS[0]}
    set -e
    mv -f "$current" "$latest"
    exit "$status"
fi
exec "${compose[@]}" run --rm ghidra "$@"
