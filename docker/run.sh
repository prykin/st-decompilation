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
background_name=st-decompilation-background
if [[ ${1:-} == background-start ]]; then
    shift
    (( $# > 0 )) || {
        echo "background-start requires one st-command and optional arguments" >&2
        exit 1
    }
    if docker inspect "$background_name" >/dev/null 2>&1; then
        echo "background container already exists: $background_name" >&2
        echo "inspect it with: docker/run.sh background-status" >&2
        exit 1
    fi
    # Use the workspace copy so detached jobs run the exact checked-out wrapper
    # without requiring an image rebuild.  Retain the stopped container until
    # explicit cleanup so its exit status and complete terminal log survive a
    # desktop or tool-session interruption.
    "${compose[@]}" run --detach --name "$background_name" ghidra \
        shell /workspace/docker/st-command.sh "$@"
    exit 0
fi
if [[ ${1:-} == background-status ]]; then
    shift
    (( $# == 0 )) || {
        echo "background-status accepts no additional arguments" >&2
        exit 1
    }
    docker inspect "$background_name" \
        --format 'name={{.Name}} status={{.State.Status}} running={{.State.Running}} exit_code={{.State.ExitCode}}'
    exit 0
fi
if [[ ${1:-} == background-logs ]]; then
    shift
    (( $# <= 1 )) || {
        echo "background-logs accepts an optional line count" >&2
        exit 1
    }
    lines=${1:-120}
    [[ "$lines" =~ ^[1-9][0-9]*$ ]] || {
        echo "background-logs line count must be a positive integer" >&2
        exit 1
    }
    docker logs --tail "$lines" "$background_name"
    exit 0
fi
if [[ ${1:-} == background-clean ]]; then
    shift
    (( $# == 0 )) || {
        echo "background-clean accepts no additional arguments" >&2
        exit 1
    }
    state=$(docker inspect "$background_name" --format '{{.State.Status}}')
    [[ "$state" != running ]] || {
        echo "refusing to remove running background container $background_name" >&2
        exit 1
    }
    docker rm "$background_name"
    exit 0
fi
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
# Keep every repository command tied to the checked-out command wrapper.  The
# image may legitimately predate a newly added internal recovery mode, while
# /workspace/docker/st-command.sh is always the current source.  An explicit
# shell remains passed to the image entry point unchanged.
case ${1:-} in
    core|deep|abi-refresh|callable-refresh|call-result-refresh|corpus-export|full|export|full-export|build-scripts|source-tree|compile-audit|compile-audit-baseline|source-audit|q057-audit|q059-audit|import|doctor|version|headless-smoke|indirect-callsite-audit|run-script|snapshot|snapshot-verify|snapshot-publish|project-hydrate)
        exec "${compose[@]}" run --rm ghidra \
            shell /workspace/docker/st-command.sh "$@"
        ;;
esac
exec "${compose[@]}" run --rm ghidra "$@"
