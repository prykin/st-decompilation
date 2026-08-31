#!/usr/bin/env bash
set -euo pipefail

repo=${ST_REPO:-/workspace}
project_root=${ST_PROJECT_ROOT:-$repo/proj}
project_name=${ST_PROJECT_NAME:-st}
program=${ST_PROGRAM:-ST.exe}
canonical_root=${ST_CANONICAL_ROOT:-$repo/ghidra}
ghidra_home=${GHIDRA_HOME:-/opt/ghidra}
headless="$ghidra_home/support/analyzeHeadless"
log_root="$repo/.st-local/docker"

export HOME=${HOME:-/home/st}
project_properties="$project_root/$project_name.rep/project.prp"
ghidra_owner=${ST_GHIDRA_OWNER:-}
if [[ -z "$ghidra_owner" && -f "$project_properties" ]]; then
    ghidra_owner=$(sed -n \
        's/.*<STATE NAME="OWNER" TYPE="string" VALUE="\([^"]*\)".*/\1/p' \
        "$project_properties" | head -n 1)
fi
ghidra_owner=${ghidra_owner:-$(id -un)}
if [[ ! "$ghidra_owner" =~ ^[A-Za-z0-9._-]+$ ]]; then
    echo "ST Docker environment rejected: unsupported Ghidra project owner '$ghidra_owner'" >&2
    exit 1
fi
export JAVA_TOOL_OPTIONS="-Duser.home=$HOME -Duser.name=$ghidra_owner -Xmx${ST_JAVA_HEAP:-6g}"
umask 022

fail() {
    echo "ST Docker environment rejected: $*" >&2
    exit 1
}

require_repository() {
    [[ -d "$repo/scripts" ]] || fail "missing $repo/scripts"
    [[ -f "$repo/scripts/STRecoveryLauncher.java" ]] ||
        fail "missing STRecoveryLauncher.java"
    [[ -d "$repo/recovery" ]] || fail "missing $repo/recovery"
    [[ -d "$repo/decomp" ]] || fail "missing $repo/decomp"
    [[ -x "$headless" ]] || fail "missing $headless"
    mkdir -p "$log_root"
}

require_project() {
    require_repository
    [[ -f "$project_root/$project_name.gpr" ]] ||
        fail "missing project $project_root/$project_name.gpr"
    [[ -d "$project_root/$project_name.rep" ]] ||
        fail "missing project database $project_root/$project_name.rep"
    if ! find "$project_root/$project_name.rep" -type f -name '*.gbf' \
            -size +1048576c -print -quit | grep -q .; then
        fail "project database has no materialized large GBF; run git lfs pull"
    fi
    local project_lock
    project_lock=$(find "$project_root" -type f \
        \( -name '*.lock' -o -name '*.lock~' \) -print -quit)
    [[ -z "$project_lock" ]] ||
        fail "Ghidra project is already locked: $project_lock"
}

run_logged() {
    local name=$1
    shift
    mkdir -p "$log_root"
    local latest="$log_root/$name.latest.log"
    local previous="$log_root/$name.previous.log"
    local current="$log_root/.$name.current.log"
    local heartbeat_interval=${ST_HEARTBEAT_INTERVAL_SECONDS:-30}
    [[ "$heartbeat_interval" =~ ^[1-9][0-9]*$ ]] ||
        fail "ST_HEARTBEAT_INTERVAL_SECONDS must be a positive integer"
    [[ ! -f "$latest" ]] || mv -f "$latest" "$previous"
    : > "$current"

    # This background writer is deliberately outside the command-to-tee
    # pipeline: liveness is visible in the terminal without polluting the
    # retained latest/previous diagnostic logs.
    (
        local elapsed=0 hours minutes seconds
        while sleep "$heartbeat_interval"; do
            elapsed=$((elapsed + heartbeat_interval))
            hours=$((elapsed / 3600))
            minutes=$(((elapsed % 3600) / 60))
            seconds=$((elapsed % 60))
            printf 'heartbeat command=%s elapsed=%02d:%02d:%02d process=alive\n' \
                "$name" "$hours" "$minutes" "$seconds"
        done
    ) &
    local heartbeat_pid=$!

    set +e
    "$@" 2>&1 | tee "$current"
    local status=${PIPESTATUS[0]}
    kill "$heartbeat_pid" 2>/dev/null || true
    wait "$heartbeat_pid" 2>/dev/null || true
    set -e
    mv -f "$current" "$latest"
    return "$status"
}

with_project_lock() {
    require_project
    exec 9>"$log_root/project-writer.lock"
    flock -n 9 || fail "another Docker recovery process owns the project writer lock"
    "$@"
}

with_project_read_lock() {
    require_project
    exec 9>"$log_root/project-writer.lock"
    flock -s -n 9 || fail "a Docker recovery writer owns the project lock"
    "$@"
}

project_tree_sha256() {
    (
        cd "$project_root"
        find "$project_name.gpr" "$project_name.rep" -type f -print0 |
            sort -z | xargs -0 sha256sum
    ) | sha256sum | awk '{print $1}'
}

snapshot_field() {
    local metadata=$1
    local field=$2
    awk -F '\t' -v wanted="$field" '$1 == wanted { print $2; found = 1; exit }
        END { if (!found) exit 1 }' "$metadata"
}

validate_sha256() {
    [[ $1 =~ ^[0-9a-f]{64}$ ]] || fail "invalid SHA-256 '$1'"
}

write_snapshot_metadata() {
    local destination=$1
    local semantic=$2
    local packed_sha=$3
    local packed_size=$4
    local normalization=$5
    local packed_file=$6
    local accepted_manifest=${7:-}
    local directory temporary
    directory=$(dirname "$destination")
    temporary="$directory/.$(basename "$destination").tmp"
    {
        printf 'schema_version\t%s\n' 1
        printf 'program\t%s\n' "$program"
        printf 'semantic_sha256\t%s\n' "$semantic"
        printf 'packed_sha256\t%s\n' "$packed_sha"
        printf 'packed_size\t%s\n' "$packed_size"
        printf 'packed_normalization\t%s\n' "$normalization"
        printf 'packed_file\t%s\n' "$packed_file"
        [[ -z "$accepted_manifest" ]] ||
            printf 'accepted_manifest_sha256\t%s\n' "$accepted_manifest"
    } > "$temporary"
    mv -f "$temporary" "$destination"
}

snapshot_program() {
    local snapshot_root="$repo/.st-local/snapshots"
    local metadata="$snapshot_root/$program.snapshot.tsv"
    local previous_metadata="$snapshot_root/$program.snapshot.previous.tsv"
    local temporary_root old_metadata source_before source_after
    mkdir -p "$snapshot_root"
    temporary_root=$(mktemp -d "$repo/.st-local/snapshot-create.XXXXXX")
    old_metadata="$temporary_root/previous-current.tsv"
    [[ ! -f "$metadata" ]] || cp -f "$metadata" "$old_metadata"
    source_before=$(project_tree_sha256)

    local snapshot_options=()
    case ${ST_SNAPSHOT_ALLOW_MISSING_PACKED_TIME:-0} in
        0) ;;
        1) snapshot_options+=(allow-missing-packed-header-time) ;;
        *) fail "ST_SNAPSHOT_ALLOW_MISSING_PACKED_TIME must be 0 or 1" ;;
    esac

    set +e
    "$headless" "$project_root" "$project_name" \
        -process "$program" -noanalysis -readOnly \
        -scriptPath "$repo/scripts" \
        -postScript STEvidenceLedger.java fingerprint "$temporary_root/fingerprint" \
        -postScript STPackedSnapshot.java "$temporary_root/output" \
            "$temporary_root/fingerprint/$program/program_semantic.sha256" \
            "${snapshot_options[@]}"
    local status=$?
    set -e
    source_after=$(project_tree_sha256)
    if [[ "$source_before" != "$source_after" ]]; then
        rm -rf -- "$temporary_root"
        fail "source Ghidra project changed during read-only snapshot: "\
"$source_before -> $source_after"
    fi
    if (( status != 0 )); then
        rm -rf -- "$temporary_root"
        return "$status"
    fi

    local generated_metadata="$temporary_root/output/$program.snapshot.tsv"
    [[ -f "$generated_metadata" ]] || {
        rm -rf -- "$temporary_root"
        fail "snapshot script did not produce metadata"
    }
    local current_file old_file previous_file candidate basename
    current_file=$(snapshot_field "$generated_metadata" packed_file)
    [[ "$current_file" == "$(basename "$current_file")" ]] ||
        fail "snapshot metadata contains a non-local packed_file"
    [[ -f "$temporary_root/output/$current_file" ]] ||
        fail "generated snapshot metadata points at missing $current_file"
    mv -f "$temporary_root/output/$current_file" "$snapshot_root/$current_file"
    mv -f "$generated_metadata" "$metadata"
    old_file=""
    [[ ! -f "$old_metadata" ]] || old_file=$(snapshot_field "$old_metadata" packed_file)
    if [[ -n "$old_file" && "$old_file" != "$current_file" ]]; then
        [[ "$old_file" == "$(basename "$old_file")" ]] ||
            fail "previous snapshot metadata contains a non-local packed_file"
        previous_file=""
        [[ ! -f "$previous_metadata" ]] ||
            previous_file=$(snapshot_field "$previous_metadata" packed_file)
        cp -f "$old_metadata" "$previous_metadata"
        if [[ -n "$previous_file" && "$previous_file" != "$old_file" &&
                "$previous_file" != "$current_file" ]]; then
            rm -f -- "$snapshot_root/$previous_file"
        fi
    fi
    previous_file=""
    [[ ! -f "$previous_metadata" ]] ||
        previous_file=$(snapshot_field "$previous_metadata" packed_file)
    for candidate in "$snapshot_root/$program."*.gzf; do
        [[ -e "$candidate" ]] || continue
        basename=$(basename "$candidate")
        if [[ "$basename" != "$current_file" && "$basename" != "$previous_file" ]]; then
            rm -f -- "$candidate"
        fi
    done
    rm -rf -- "$temporary_root"

    echo "snapshot=$snapshot_root/$current_file"
    echo "semantic_sha256=$(snapshot_field "$metadata" semantic_sha256)"
    echo "packed_sha256=$(snapshot_field "$metadata" packed_sha256)"
    echo "packed_size=$(snapshot_field "$metadata" packed_size)"
    echo "source_project_sha256=$source_after"
}

verify_snapshot() {
    local snapshot_root="$repo/.st-local/snapshots"
    local metadata="$snapshot_root/$program.snapshot.tsv"
    local snapshot expected_semantic expected_packed expected_size
    if (( $# == 0 )); then
        [[ -f "$metadata" ]] || fail "missing snapshot metadata; run snapshot first"
        local packed_file
        packed_file=$(snapshot_field "$metadata" packed_file)
        [[ "$packed_file" == "$(basename "$packed_file")" ]] ||
            fail "snapshot metadata contains a non-local packed_file"
        snapshot="$snapshot_root/$packed_file"
        expected_semantic=$(snapshot_field "$metadata" semantic_sha256)
        expected_packed=$(snapshot_field "$metadata" packed_sha256)
        expected_size=$(snapshot_field "$metadata" packed_size)
    else
        snapshot=$1
        [[ "$snapshot" = /* ]] || snapshot="$repo/$snapshot"
        [[ -f "$snapshot" ]] || fail "missing packed snapshot $snapshot"
        local filename=${snapshot##*/}
        if [[ "$filename" =~ \.([0-9a-f]{64})\.gzf$ ]]; then
            expected_semantic=${BASH_REMATCH[1]}
        else
            fail "explicit snapshot filename must end in .<semantic-sha256>.gzf"
        fi
        expected_packed=$(sha256sum "$snapshot" | awk '{print $1}')
        expected_size=$(stat -c '%s' "$snapshot")
    fi
    validate_sha256 "$expected_semantic"
    validate_sha256 "$expected_packed"
    [[ "$expected_size" =~ ^[0-9]+$ ]] || fail "invalid packed snapshot size"
    [[ -f "$snapshot" ]] || fail "missing packed snapshot $snapshot"

    local actual_packed actual_size source_before source_after temporary_root
    actual_packed=$(sha256sum "$snapshot" | awk '{print $1}')
    actual_size=$(stat -c '%s' "$snapshot")
    [[ "$actual_packed" == "$expected_packed" ]] ||
        fail "packed snapshot SHA-256 mismatch: $expected_packed != $actual_packed"
    [[ "$actual_size" == "$expected_size" ]] ||
        fail "packed snapshot size mismatch: $expected_size != $actual_size"

    source_before=$(project_tree_sha256)
    # ProjectLocator rejects any project path component beginning with '.'.
    # Use the container's disposable /tmp instead of the ignored .st-local tree.
    temporary_root=$(mktemp -d /tmp/st-snapshot-verify.XXXXXX)
    mkdir -p "$temporary_root/project"
    set +e
    "$headless" "$temporary_root/project" verify \
        -import "$snapshot" -noanalysis -readOnly \
        -scriptPath "$repo/scripts" \
        -postScript STEvidenceLedger.java fingerprint "$temporary_root/fingerprint"
    local status=$?
    set -e
    source_after=$(project_tree_sha256)
    if [[ "$source_before" != "$source_after" ]]; then
        rm -rf -- "$temporary_root"
        fail "source Ghidra project changed during snapshot verification: "\
"$source_before -> $source_after"
    fi
    if (( status != 0 )); then
        rm -rf -- "$temporary_root"
        return "$status"
    fi

    local restored_semantic_file="$temporary_root/fingerprint/$program/program_semantic.sha256"
    [[ -f "$restored_semantic_file" ]] || {
        rm -rf -- "$temporary_root"
        fail "restored snapshot did not produce a semantic fingerprint"
    }
    local restored_semantic
    restored_semantic=$(tr -d '[:space:]' < "$restored_semantic_file")
    rm -rf -- "$temporary_root"
    validate_sha256 "$restored_semantic"
    [[ "$restored_semantic" == "$expected_semantic" ]] ||
        fail "restored semantic SHA-256 mismatch: "\
"$expected_semantic != $restored_semantic"

    echo "snapshot_verify=passed"
    echo "snapshot=$snapshot"
    echo "semantic_sha256=$restored_semantic"
    echo "packed_sha256=$actual_packed"
    echo "packed_size=$actual_size"
    echo "source_project_sha256=$source_after"
}

publish_snapshot() {
    # Always refresh from the current local project. A previously verified
    # snapshot may be stale after a later GUI or recovery mutation.
    snapshot_program
    local snapshot_root="$repo/.st-local/snapshots"
    local metadata="$snapshot_root/$program.snapshot.tsv"
    [[ -f "$metadata" ]] || fail "snapshot refresh did not produce metadata"

    # A published checkpoint must round-trip and correspond to the accepted
    # text corpus. Repeat verification so publish cannot bless an unchecked file.
    verify_snapshot

    local packed_file snapshot semantic packed_sha packed_size normalization
    packed_file=$(snapshot_field "$metadata" packed_file)
    [[ "$packed_file" == "$(basename "$packed_file")" ]] ||
        fail "snapshot metadata contains a non-local packed_file"
    snapshot="$snapshot_root/$packed_file"
    semantic=$(snapshot_field "$metadata" semantic_sha256)
    packed_sha=$(snapshot_field "$metadata" packed_sha256)
    packed_size=$(snapshot_field "$metadata" packed_size)
    normalization=$(snapshot_field "$metadata" packed_normalization)
    [[ "$normalization" == "zip-dos-time-1980-01-01+private-metadata-v5" ]] ||
        fail "unsupported packed snapshot normalization '$normalization'"

    local receipt="$repo/recovery/$program/export_receipt.json"
    [[ -f "$receipt" ]] || fail "missing accepted export receipt $receipt"
    local receipt_values receipt_status receipt_semantic receipt_manifest
    receipt_values=$(python3 - "$receipt" <<'PY'
import json
import sys

with open(sys.argv[1], encoding="utf-8") as stream:
    receipt = json.load(stream)
print(receipt.get("status", ""))
print(receipt.get("program_semantic_sha256", ""))
print(receipt.get("current_manifest_sha256", ""))
PY
)
    receipt_status=$(sed -n '1p' <<<"$receipt_values")
    receipt_semantic=$(sed -n '2p' <<<"$receipt_values")
    receipt_manifest=$(sed -n '3p' <<<"$receipt_values")
    [[ "$receipt_status" == "passed" ]] ||
        fail "export receipt is not passed: $receipt_status"
    [[ "$receipt_semantic" == "$semantic" ]] ||
        fail "snapshot semantic SHA-256 does not match accepted export: "\
"$semantic != $receipt_semantic"
    validate_sha256 "$receipt_manifest"

    local canonical_metadata="$canonical_root/$program.snapshot.tsv"
    local canonical_snapshot="$canonical_root/$program.gzf"
    if [[ -f "$canonical_metadata" ]]; then
        local canonical_semantic
        canonical_semantic=""
        canonical_semantic=$(snapshot_field "$canonical_metadata" semantic_sha256 2>/dev/null || true)
        if [[ "$canonical_semantic" == "$semantic" &&
                -f "$canonical_snapshot" ]]; then
            local canonical_packed canonical_size canonical_actual canonical_normalization
            local canonical_manifest
            canonical_packed=$(snapshot_field "$canonical_metadata" packed_sha256)
            canonical_size=$(snapshot_field "$canonical_metadata" packed_size)
            canonical_normalization=$(snapshot_field "$canonical_metadata" packed_normalization)
            canonical_manifest=$(snapshot_field "$canonical_metadata" \
                accepted_manifest_sha256 2>/dev/null || true)
            validate_sha256 "$canonical_packed"
            [[ "$canonical_normalization" == "zip-dos-time-1980-01-01" ||
                    "$canonical_normalization" == "zip-dos-time-1980-01-01+private-metadata-v3" ||
                    "$canonical_normalization" == "zip-dos-time-1980-01-01+private-metadata-v4" ||
                    "$canonical_normalization" == "zip-dos-time-1980-01-01+private-metadata-v5" ]] ||
                fail "unsupported canonical snapshot normalization"
            canonical_actual=$(sha256sum "$canonical_snapshot" | awk '{print $1}')
            [[ "$canonical_actual" == "$canonical_packed" ]] ||
                fail "canonical snapshot SHA-256 mismatch"
            [[ "$(stat -c '%s' "$canonical_snapshot")" == "$canonical_size" ]] ||
                fail "canonical snapshot size mismatch"
            if [[ "$canonical_normalization" == "$normalization" &&
                    "$canonical_packed" == "$packed_sha" &&
                    "$canonical_size" == "$packed_size" ]]; then
                if [[ "$canonical_manifest" != "$receipt_manifest" ]]; then
                    write_snapshot_metadata "$canonical_metadata" "$semantic" \
                        "$canonical_packed" "$canonical_size" \
                        "$canonical_normalization" "$program.gzf" "$receipt_manifest"
                    echo "snapshot_publish=metadata-updated"
                else
                    echo "snapshot_publish=unchanged"
                fi
                echo "semantic_sha256=$semantic"
                echo "canonical_snapshot=$canonical_snapshot"
                return
            fi
        fi
    fi

    mkdir -p "$canonical_root"
    local snapshot_temporary="$canonical_root/.$program.gzf.tmp"
    cp -f "$snapshot" "$snapshot_temporary"
    [[ "$(sha256sum "$snapshot_temporary" | awk '{print $1}')" == "$packed_sha" ]] ||
        fail "canonical snapshot copy failed SHA-256 verification"
    mv -f "$snapshot_temporary" "$canonical_snapshot"
    write_snapshot_metadata "$canonical_metadata" "$semantic" "$packed_sha" \
        "$packed_size" "$normalization" "$program.gzf" "$receipt_manifest"

    echo "snapshot_publish=updated"
    echo "canonical_snapshot=$canonical_snapshot"
    echo "semantic_sha256=$semantic"
    echo "packed_sha256=$packed_sha"
    echo "accepted_manifest_sha256=$receipt_manifest"
}

hydrate_project() {
    require_repository
    local metadata="$canonical_root/$program.snapshot.tsv"
    local packed_file semantic packed_sha packed_size snapshot
    if (( $# == 1 )); then
        snapshot=$1
        [[ "$snapshot" = /* ]] || snapshot="$repo/$snapshot"
        [[ -f "$snapshot" ]] || fail "missing explicit packed snapshot $snapshot"
        local filename=${snapshot##*/}
        semantic=${filename#"$program."}
        semantic=${semantic%.gzf}
        [[ "$filename" == "$program.$semantic.gzf" ]] ||
            fail "explicit snapshot filename must be $program.<semantic-sha256>.gzf"
        validate_sha256 "$semantic"
        packed_sha=$(sha256sum "$snapshot" | awk '{print $1}')
        packed_size=$(stat -c '%s' "$snapshot")
    else
        [[ -f "$metadata" ]] || fail "missing canonical snapshot metadata $metadata"
        packed_file=$(snapshot_field "$metadata" packed_file)
        [[ "$packed_file" == "$(basename "$packed_file")" ]] ||
            fail "canonical metadata contains a non-local packed_file"
        snapshot="$canonical_root/$packed_file"
        semantic=$(snapshot_field "$metadata" semantic_sha256)
        packed_sha=$(snapshot_field "$metadata" packed_sha256)
        packed_size=$(snapshot_field "$metadata" packed_size)
    fi
    validate_sha256 "$semantic"
    validate_sha256 "$packed_sha"
    [[ -f "$snapshot" ]] || fail "missing canonical packed snapshot $snapshot"
    if (( $(stat -c '%s' "$snapshot") < 1024 )) && grep -q \
            '^version https://git-lfs.github.com/spec/v1$' "$snapshot"; then
        fail "canonical snapshot is an LFS pointer; run git lfs pull"
    fi
    [[ "$(sha256sum "$snapshot" | awk '{print $1}')" == "$packed_sha" ]] ||
        fail "canonical packed snapshot SHA-256 mismatch"
    [[ "$(stat -c '%s' "$snapshot")" == "$packed_size" ]] ||
        fail "canonical packed snapshot size mismatch"

    if [[ -e "$project_root/$project_name.gpr" ||
            -e "$project_root/$project_name.rep" ]]; then
        fail "refusing to hydrate over existing local project $project_root/$project_name"
    fi
    mkdir -p "$project_root"
    local staging_name="$project_name-hydrate"
    if [[ -e "$project_root/$staging_name.gpr" ||
            -e "$project_root/$staging_name.rep" ]]; then
        fail "stale hydration staging project exists: $project_root/$staging_name"
    fi
    local temporary_root
    temporary_root=$(mktemp -d /tmp/st-project-hydrate.XXXXXX)
    local import_snapshot="$snapshot"
    if [[ "${snapshot##*/}" != "$program.gzf" ]]; then
        import_snapshot="$temporary_root/$program.gzf"
        cp -f "$snapshot" "$import_snapshot"
        [[ "$(sha256sum "$import_snapshot" | awk '{print $1}')" == "$packed_sha" ]] || {
            rm -rf -- "$temporary_root"
            fail "explicit hydration snapshot copy failed SHA-256 verification"
        }
    fi
    set +e
    "$headless" "$project_root" "$staging_name" \
        -import "$import_snapshot" -noanalysis \
        -scriptPath "$repo/scripts" \
        -postScript STEvidenceLedger.java fingerprint "$temporary_root/fingerprint"
    local status=$?
    set -e
    if (( status != 0 )); then
        rm -rf -- "$temporary_root"
        return "$status"
    fi

    local restored_semantic_file="$temporary_root/fingerprint/$program/program_semantic.sha256"
    [[ -f "$restored_semantic_file" ]] || {
        rm -rf -- "$temporary_root"
        fail "hydrated project did not produce a semantic fingerprint"
    }
    local restored_semantic
    restored_semantic=$(tr -d '[:space:]' < "$restored_semantic_file")
    rm -rf -- "$temporary_root"
    [[ "$restored_semantic" == "$semantic" ]] ||
        fail "hydrated semantic SHA-256 mismatch: $semantic != $restored_semantic"

    [[ -f "$project_root/$staging_name.gpr" &&
        -d "$project_root/$staging_name.rep" ]] ||
        fail "Ghidra did not materialize the hydration staging project"
    mv "$project_root/$staging_name.rep" "$project_root/$project_name.rep"
    mv "$project_root/$staging_name.gpr" "$project_root/$project_name.gpr"

    echo "project_hydrate=passed"
    echo "project=$project_root/$project_name.gpr"
    echo "semantic_sha256=$restored_semantic"
    echo "packed_sha256=$packed_sha"
}

run_recovery() {
    local mode=$1
    local run_mode=$mode
    echo "Submarine Titans decompilation environment"
    echo "repository=$repo"
    echo "project=$project_root/$project_name.gpr"
    echo "program=$program"
    echo "mode=$mode"
    echo "ghidra=$ghidra_home"
    java -version
    local status bootstrap_staging restart_sentinel restart_count
    bootstrap_staging="$repo/recovery/$program/pipeline_bootstrap.log.tmp"
    restart_sentinel="$repo/.st-local/restart-after-call-result-cleanup"
    restart_count=0
    while true; do
        rm -f -- "$restart_sentinel"
        set +e
        "$headless" "$project_root" "$project_name" \
            -process "$program" -noanalysis \
            -scriptPath "$repo/scripts" \
            -postScript STRecoveryLauncher.java "$run_mode"
        status=$?
        set -e
        if [[ -f "$restart_sentinel" ]]; then
            restart_count=$((restart_count + 1))
            rm -f -- "$restart_sentinel" "$bootstrap_staging"
            (( restart_count <= 8 )) ||
                fail "call-result cleanup did not converge after 8 fresh Ghidra processes"
            echo "Restarting Ghidra after committed call-result override cleanup ($restart_count/8)"
            # Cleanup has already committed every earlier phase.  Replaying a
            # full/deep/export ABI pass can cost hours and needlessly perturb
            # the proposal frontier.  Resume only the direct-call-view fixed
            # point in the fresh process.
            run_mode=call-result-refresh
            continue
        fi
        (( status == 0 )) || return "$status"
        [[ ! -f "$bootstrap_staging" ]] ||
            fail "Ghidra reported a script failure; inspect $bootstrap_staging and the retained run logs"
        if [[ "$run_mode" == call-result-refresh &&
                ( "$mode" == export || "$mode" == full-export ) ]]; then
            # ABI state is now fixed and gated.  Export the already-recorded
            # Program without replaying the broad ABI analyzers a third time.
            run_mode=corpus-export
            continue
        fi
        break
    done
}

import_program() {
    require_repository
    local binary="$repo/bin/$program"
    [[ -f "$binary" ]] || fail "missing original binary $binary"
    if [[ -e "$project_root/$project_name.gpr" || \
          -e "$project_root/$project_name.rep" ]]; then
        fail "refusing to import over existing project $project_name"
    fi
    mkdir -p "$project_root"
    "$headless" "$project_root" "$project_name" \
        -import "$binary" -scriptPath "$repo/scripts"
}

generate_source() {
    require_repository
    python3 "$repo/tools/st_source_tree.py" \
        --repo "$repo" \
        --corpus "$repo/decomp/ST.exe" \
        --receipt "$repo/recovery/ST.exe/export_receipt.json" \
        --output "$repo/src/ST.exe"
}

compile_source() {
    require_repository
    local -a baseline_args=()
    if [[ "${1:-}" == "update-baseline" ]]; then
        baseline_args+=(--update-baseline)
    fi
    python3 "$repo/tools/st_compile_audit.py" \
        --source-tree "$repo/src/ST.exe" \
        --output "$repo/.st-local/source-compile-audit-docker/ST.exe" \
        --compiler clang++ \
        --jobs "${ST_COMPILE_JOBS:-4}" \
        --error-limit 64 \
        --baseline "$repo/config/source-compile-regression-baseline.json" \
        "${baseline_args[@]}"
}

audit_q059() {
    require_repository
    python3 "$repo/tools/st_q059_closure.py" \
        --repo "$repo" \
        --corpus "$repo/decomp/ST.exe" \
        --recovery "$repo/recovery/ST.exe" \
        --source-tree "$repo/src/ST.exe" \
        --compile-summary "$repo/.st-local/source-compile-audit-docker/ST.exe/summary.json"
}

doctor() {
    require_project
    echo "repository=$repo"
    echo "project=$project_root/$project_name.gpr"
    echo "program=$program"
    grep -E '^(application\.name|application\.version|application\.release\.name)=' \
        "$ghidra_home/Ghidra/application.properties" || true
    java -version
    javac -version
    clang++ --version | sed -n '1p'
    python3 --version
    git lfs version
    echo "scripts=$(find "$repo/scripts" -maxdepth 1 -type f -name 'ST*.java' | wc -l)"
    echo "doctor=passed"
}

headless_smoke() {
    require_project
    "$headless" "$project_root" "$project_name" \
        -process "$program" -noanalysis -readOnly
}

indirect_callsite_audit() {
    require_project
    "$headless" "$project_root" "$project_name" \
        -process "$program" -noanalysis -readOnly \
        -scriptPath "$repo/scripts" \
        -postScript STIndirectCallsiteAnalyzer.java "$repo/recovery"
}

run_script() {
    require_project
    local script=${1:-}
    shift || true
    [[ "$script" =~ ^ST[A-Za-z0-9_]+\.java$ ]] ||
        fail "run-script requires one repository ST*.java basename"
    [[ -f "$repo/scripts/$script" ]] || fail "missing script $repo/scripts/$script"
    local diagnostic status
    diagnostic=$(mktemp "$log_root/run-script-diagnostic.XXXXXX")
    set +e
    "$headless" "$project_root" "$project_name" \
        -process "$program" -noanalysis \
        -scriptPath "$repo/scripts" \
        -postScript "$script" "$@" 2>&1 | tee "$diagnostic"
    status=${PIPESTATUS[0]}
    set -e
    if (( status == 0 )) && grep -Eq \
            'REPORT SCRIPT ERROR:|> Error running script:' "$diagnostic"; then
        status=1
    fi
    rm -f -- "$diagnostic"
    return "$status"
}

command=${1:-full-export}
shift || true

case "$command" in
    core|deep|abi-refresh|callable-refresh|call-result-refresh|corpus-export|full|export|full-export)
        (( $# == 0 )) || fail "$command accepts no additional arguments"
        with_project_lock run_logged "recovery-$command" run_recovery "$command"
        ;;
    build-scripts)
        (( $# == 0 )) || fail "build-scripts accepts no additional arguments"
        require_repository
        run_logged script-build /usr/local/bin/st-build-scripts
        ;;
    source-tree)
        (( $# == 0 )) || fail "source-tree accepts no additional arguments"
        run_logged source-tree generate_source
        ;;
    compile-audit)
        (( $# == 0 )) || fail "compile-audit accepts no additional arguments"
        run_logged compile-audit compile_source
        ;;
    compile-audit-baseline)
        (( $# == 0 )) || fail "compile-audit-baseline accepts no additional arguments"
        run_logged compile-audit compile_source update-baseline
        ;;
    source-audit)
        (( $# == 0 )) || fail "source-audit accepts no additional arguments"
        run_logged source-tree generate_source
        run_logged compile-audit compile_source
        ;;
    q059-audit)
        (( $# == 0 )) || fail "q059-audit accepts no additional arguments"
        run_logged q059-audit audit_q059
        ;;
    import)
        (( $# == 0 )) || fail "import accepts no additional arguments"
        require_repository
        exec 9>"$log_root/project-writer.lock"
        flock -n 9 || fail "another Docker process owns the project writer lock"
        run_logged import import_program
        ;;
    doctor|version)
        (( $# == 0 )) || fail "$command accepts no additional arguments"
        run_logged doctor doctor
        ;;
    headless-smoke)
        (( $# == 0 )) || fail "headless-smoke accepts no additional arguments"
        with_project_read_lock run_logged headless-smoke headless_smoke
        ;;
    indirect-callsite-audit)
        (( $# == 0 )) || fail "indirect-callsite-audit accepts no additional arguments"
        with_project_read_lock run_logged indirect-callsite-audit indirect_callsite_audit
        ;;
    run-script)
        (( $# >= 1 )) || fail "run-script requires STScript.java and optional arguments"
        script_name=${1%.java}
        with_project_lock run_logged "script-$script_name" run_script "$@"
        ;;
    snapshot)
        (( $# == 0 )) || fail "snapshot accepts no additional arguments"
        with_project_read_lock run_logged snapshot snapshot_program
        ;;
    snapshot-verify)
        (( $# <= 1 )) || fail "snapshot-verify accepts at most one snapshot path"
        with_project_read_lock run_logged snapshot-verify verify_snapshot "$@"
        ;;
    snapshot-publish)
        (( $# == 0 )) || fail "snapshot-publish accepts no additional arguments"
        with_project_read_lock run_logged snapshot-publish publish_snapshot
        ;;
    project-hydrate)
        (( $# <= 1 )) || fail "project-hydrate accepts at most one snapshot path"
        require_repository
        exec 9>"$log_root/project-writer.lock"
        flock -n 9 || fail "another Docker process owns the project writer lock"
        run_logged project-hydrate hydrate_project "$@"
        ;;
    shell)
        exec /bin/bash "$@"
        ;;
    *)
        fail "unknown command '$command'; expected core, deep, abi-refresh, callable-refresh, "\
"call-result-refresh, corpus-export, full, export, full-export, build-scripts, run-script, "\
"source-tree, compile-audit, compile-audit-baseline, source-audit, q059-audit, import, doctor, "\
"headless-smoke, indirect-callsite-audit, snapshot, snapshot-verify, snapshot-publish, "\
"project-hydrate, or shell"
        ;;
esac
