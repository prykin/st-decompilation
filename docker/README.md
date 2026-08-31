# Decompilation environment with Docker Compose

This directory provides a pinned, disposable Ghidra 12.1.2 environment. The
repository remains the working volume and the Ghidra project remains
authoritative. The image contains JDK 21, Python, Git LFS, Clang, and the
official Ghidra release verified against its published SHA-256.

The official Ghidra archive contains Linux x86-64 native components. Compose
therefore defaults to `linux/amd64`; Docker Desktop emulates that platform on an
ARM Mac. Override `ST_DOCKER_PLATFORM` only when the selected Ghidra archive has
matching native components.

## Initial setup

Clone the repository with Git LFS and materialize the project database:

```sh
git lfs install --local
git lfs pull
./docker/run.sh build-image
./docker/run.sh project-hydrate
./docker/run.sh doctor
./docker/run.sh build-scripts
./docker/run.sh headless-smoke
```

`project-hydrate` refuses an unmaterialized LFS checkpoint or an existing local
project; `doctor` refuses an incomplete project and a Ghidra lock.
`headless-smoke` opens the hydrated local `ST.exe` through `analyzeHeadless` in
read-only/no-analysis mode and then closes it without running recovery. The container
mounts `.git` read-only and never commits, pulls, or pushes. Git synchronization
is always performed by the host checkout.

`docker/run.sh` resolves the daemon socket from the selected host Docker context
(`colima` on the current machine), then runs the standalone Compose client with
a generated auth-free config under ignored `.st-local/`. The config exposes the
host's installed `buildx` plugin by its discovered absolute directory but carries
no credential helper or registry login. Consequently these project commands do
not invoke the host's `osxkeychain` helper; base-image downloads are anonymous.
Nothing from this machine-local config is tracked. Set
`ST_DOCKER_CONTEXT` or `DOCKER_HOST` when another machine should use a context
other than its currently selected one.

The command wrapper reads the Ghidra owner from `proj/st.rep/project.prp` and
passes it as Java's `user.name`. File ownership remains the invoking host's
UID/GID, so a project created by a differently named user remains usable without
hard-coding that account into the image. `ST_GHIDRA_OWNER` is available only as
an explicit override for a nonstandard project layout.

`./docker/run.sh indirect-callsite-audit` reruns the expensive critical
callsite analyzer against the project in read-only mode. It is a diagnostic
confirmation command, not part of the normal setup sequence; its latest two
logs follow the same `.st-local/docker/` rotation policy.

## Portable Program snapshots

```sh
./docker/run.sh snapshot
./docker/run.sh snapshot-verify
./docker/run.sh snapshot-publish
```

`snapshot` opens the current program with `-readOnly -noanalysis`, computes the
same semantic Program fingerprint used by the recovery evidence ledger, and
uses Ghidra's `DomainFile.packFile` API to create
`.st-local/snapshots/ST.exe.<semantic-sha256>.gzf`. It hashes the project before
and after the operation and fails if any source-project byte changed. Repeating
the command at the same semantic state replaces the same hash-named file. The
script pins the otherwise volatile ZIP/DOS and packed-header times, normalizes
structurally identified database revision/change-record times, replaces
database-owner records (including prefix-compressed copies) with fixed-width
neutral values, and redacts absolute workstation paths. It rebuilds the entry
CRC and compressed sizes, then fails closed if the Ghidra envelope or metadata
framing changes.
Repeating a pack of the same saved Program is therefore byte-for-byte
deterministic. After a semantic change, only the current and previous snapshots
are retained.

`snapshot-verify` checks the packed-file hash and size, imports the snapshot
into a temporary read-only Ghidra project, recomputes the semantic fingerprint,
and requires an exact match. The temporary project is removed and the tracked
source project is again verified byte-for-byte. An explicit hash-named snapshot
may be checked with `snapshot-verify PATH`; without a path the current local
snapshot is used. Snapshot files and their latest/previous metadata are ignored
machine-local recovery artifacts unless a separately reviewed publication
workflow promotes one into Git LFS.

The redacted fixed-width import path inside a hydrated Program is not executable
identity: its apparent basename can be only a suffix of the replacement token.
Committed `decomp/*/program.json` therefore records the stable Ghidra Program
name as `executable_path`; the export regression gate enforces that invariant.

`snapshot-publish` first rebuilds the local snapshot from the current expanded
project, repeats the full round-trip verification, requires a passed export
receipt with the same semantic Program fingerprint, and publishes the checkpoint
as `ghidra/ST.exe.gzf` plus portable metadata. It leaves the tracked GZF
byte-for-byte untouched only when semantic hash, packed hash, size, and current
normalization all match. A normalization upgrade replaces a legacy pack even
when its Program semantic hash is unchanged. An exporter-only manifest change
updates only the small metadata TSV.

The expanded project is local working state and is not required in Git. On a
fresh checkout, materialize it from the canonical packed checkpoint before
running `doctor`:

```sh
git lfs pull
./docker/run.sh project-hydrate
./docker/run.sh doctor
```

`project-hydrate` refuses to overwrite an existing `proj/st.gpr` or
`proj/st.rep`, verifies the LFS object's SHA-256 and size, imports it through
Ghidra's GZF loader, and requires the restored semantic fingerprint to match.
Publish only after a meaningful Program change and an accepted export; ordinary
script, documentation, and exporter-only commits do not repack the database.

## Recovery commands

```sh
./docker/run.sh core
./docker/run.sh deep
./docker/run.sh full
./docker/run.sh export
./docker/run.sh full-export
```

Each command is the corresponding `STRecoveryLauncher` mode. The wrapper passes
the host UID/GID, while the container drops root before opening the project. An
advisory lock under ignored `.st-local/docker/` prevents two Compose writers.
Ghidra's own project locks remain authoritative: close every GUI or other
headless writer before running a recovery command.

For a multi-hour pass which must survive a Codex or terminal session ending,
put the container under the Docker daemon rather than a shell background job:

```sh
./docker/run.sh background-start full-export
./docker/run.sh background-status
./docker/run.sh background-logs 120
./docker/run.sh background-clean
```

Only one fixed-name background container is allowed. It is retained after exit
so the exit code and complete log remain inspectable; `background-clean`
refuses to remove a running container. The normal project-writer lock still
prevents another mutating pipeline from starting.

For a bounded analyzer/applier experiment, run one repository script without
path dialogs while retaining the same project lock and outer log discipline:

```sh
./docker/run.sh run-script STHiddenThisAnalyzer.java /workspace/recovery
./docker/run.sh run-script STHiddenThisApplier.java /workspace/recovery/ST.exe/hidden_this_proposals.tsv
```

The script name is restricted to a basename present under `scripts/`; arguments
are passed verbatim after it. The normal pipeline remains authoritative for a
complete accepted recovery/export pass.

The image build and every non-interactive container command retain only their
latest and previous outer console logs under `.st-local/docker/`. Recovery logs
are named
`.st-local/docker/recovery-MODE.latest.log` and `.previous.log`. Detailed build,
provider, step, exception, and run logs continue to be owned by the recovery
pipeline under `recovery/ST.exe` and its ignored run archive.

## Generated C++ audit

```sh
./docker/run.sh source-tree
./docker/run.sh compile-audit
./docker/run.sh compile-audit-baseline
./docker/run.sh source-audit
./docker/run.sh q059-audit
```

`source-audit` regenerates `src/ST.exe` from a passed receipt and then compiles
all translation units with the container's pinned Linux Clang environment. Its
ignored results live under `.st-local/source-compile-audit-docker/ST.exe`.
`compile-audit` checks the tracked Docker baseline and never changes it.
`compile-audit-baseline` is the explicit reviewed promotion command; it refuses
to update when the regression gate fails. Do not compare these counts with a
host compiler run: compiler identity, ILP32 flags, language mode, and diagnostic
limit are part of the baseline contract.

After a zero-error `source-audit`, `q059-audit` verifies that the accepted
receipt, generated tree, compile result, and Program fingerprint describe the
same state. It then materializes deterministic review queues for every residual
raw pointer offset, anonymous shape, generic identity, and meaningful unclaimed
executable range under `recovery/ST.exe/`. It fails when an automatically safe
pointer/type-family proposal or a confirming aggregate mutation remains. The
audit classifies debt; it never changes Ghidra or invents a source type.

## Importing from an original executable

The tracked packed checkpoint already contains `ST.exe`, so ordinary recovery
does not require `bin/ST.exe`. `./docker/run.sh import` exists only for a new project: it
requires a legally obtained `bin/ST.exe` and refuses to overwrite any existing
`proj/st.gpr` or `proj/st.rep`.

Optional overrides may be placed in an untracked root `.env`; start from
`.env.example`. No GitHub credential belongs in `.env` or the container.
