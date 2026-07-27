# Submarine Titans Ghidra recovery — LLM handoff

> The committed database checkpoint for this revision is `ghidra/ST.exe.gzf`; `proj/` is ignored local working state.

This file is a task-focused handoff for another LLM. It summarizes the long
conversation, current repository state, decisions, regressions, and unfinished
verification. It is not a substitute for reading the diffs and `AGENTS.md`.

## 1. User goal

The repository contains a Ghidra decompilation/recovery pipeline for the game
Submarine Titans. Ghidra exports its database as text files so LLMs can inspect
and refine the recovery without a local Ghidra installation.

The user wants:

1. General repository-wide recovery errors found and fixed.
2. Five high-value automation directions implemented, not merely proposed.
3. Manual type/entity input reduced as far as possible; prefer evidence-driven
   heuristics and generated, hash-owned artifacts.
4. Recovery passes driven to a fixed point from current state, with a generous
   finite cycle guard rather than the original three-pass limit.
5. Better recovery of undefined types, indirect calls, calling conventions,
   return widths, structure sizes, vtables, class layouts, and unclaimed code.
6. Strict export regression detection.
7. Automatic diagnostics and run history so the user does not have to copy
   Ghidra Console output into ad-hoc files.

The user is technically experienced, expects direct fixes, and is understandably
irritated by a sequence of basic Java compile errors introduced during this work.
Do not claim that code compiles unless it has actually compiled in Ghidra.

## 2. Authoritative repository and environment

- Authoritative repository: `<local-volume>/st`
- Access is through an SMB-mounted volume.
- Do not create a local repository copy.
- `/tmp` may be used for temporary checks or patch files.
- Do not create symbolic links. Use direct absolute paths.
- The local Codex machine has no Ghidra installation and no usable Ghidra
  classpath. The user runs Ghidra on another machine.
- Do not build or execute Ghidra scripts locally.
- Static checks are allowed, but they are not proof of Ghidra compilation.
- Do not stage or commit unless explicitly requested.
- Full `git status`/unrestricted `git diff` can hang on SMB. Targeted
  `git diff --check -- <files>` generally works.

The user previously created files named `export`, `error`, and `log.txt` manually
to relay Console output. Do not mistake those names for canonical exporter output.
The current request is to make that relay unnecessary.

## 3. Repository safety model

Read `AGENTS.md` before further changes. Important invariants already established:

- Analyzers are read-only.
- Appliers own explicit, narrow transactions.
- Manual, `USER_DEFINED`, `IMPORTED`, stale, or hash-diverged entities are
  preserved/reported rather than overwritten.
- Generated entities must carry script ownership markers and deterministic hashes.
- x86 MSVC ABI evidence matters:
  - incoming ECX use can prove a `thiscall` receiver;
  - `RET n` proves callee stack cleanup, not semantic parameter types;
  - lack of incoming ECX plus nonzero `RET n` can support a neutral `stdcall`;
  - narrow writes/uses do not by themselves prove a narrow return type.
- Packed/unaligned structures are intentional in this binary.
- Review/conflict/error rows are terminal for an automatic pass and must not be
  bulk-enabled.
- The decompiled corpus is output, not type-inference input. Do not delete
  `decomp/` to resolve database recovery failures.

## 4. Earlier pipeline decisions

The automation has been organized around five broad directions:

1. **Fixed-point state recovery**
   - Recovery proceeds from existing proposals/apply reports.
   - Bootstrap and structural guards were raised to 24 passes.
   - Deep propagation guard is 12 passes.
   - A nonconverged database cannot be exported.

2. **Class/vtable/ownership recovery**
   - Constructor stores, object factories, class layouts, vtable ownership,
     virtual methods, thunks, destructors, and hidden-this recovery feed each
     other through bounded loops.

3. **ABI/prototype/return recovery**
   - Calling conventions, return semantics, prototypes, callsite consistency,
     neutral indirect-call signatures, and generated-type lifecycle are
     propagated conservatively.

4. **Structure/pointer/global recovery**
   - Pointer shapes, nested pointees, packed records, arrays/matrices,
     discriminated payloads, global data, type families, and class fields are
     recovered from use evidence rather than address lists where possible.

5. **Evidence, export, cleanup, and regression control**
   - Semantic state/evidence ledgers, content-addressed run history, bounded
     retention, export receipts, and a strict regression gate prevent silent
     degradation.

The user asked how portable this is to another game of the same era/compiler
without class names in debug strings. The portable portion is the x86/MSVC ABI,
RET/ECX/callsite, thunk, vtable-shape, constructor-store, pointer-shape, and
fixed-point/regression machinery. Semantic class ownership/naming anchors from
debug strings are game-specific and would be much weaker or absent.

## 5. Run history/logging conventions

Runs are staged in:

`recovery/ST.exe/runs/.current`

and archived as:

`recovery/ST.exe/runs/<overall-sha256>/`

No timestamp is used in the directory name. Only the three most recently
finalized runs are retained. `recovery/ST.exe/latest_run.txt` points to the
newest run.

The latest successful run visible during this handoff was:

`4e3c0ee2c36a0431be3001f4092c83dff0ed3b75bafb59b6705afe9dcbc3679f`

It predates the newest source edits and therefore does not validate them.

## 6. Latest export regression that motivated the current vtable work

The last examined regression report showed:

- typed vtable slots: `1088 -> 2366` (`+1278`)
- raw indirect calls: `2112 -> 2110` (`-2`)
- return-width artifacts: `1297 -> 1281` (`-16`)
- undefined residue: `+37` warning
- unresolved register inputs: `797 -> 821` (`+24`, hard error)

The exact unresolved-register delta was:

- `004899A0 STBoatC::GetDefenceTarget`: `+20`
- `00476CE0 STBoatC::Capture`: `+2`
- `0065BD70 AiEventClassTy::sub_0065BD70`: `+2`

## 7. Root cause of the unresolved-register regression

This was not primarily a bad array index. `STGameObjCVTable` is an exact
physical table with 53 slots / 212 bytes, while related derived tables in the
same hierarchy contain roughly 73–82 slots. Code reached through an
`STGameObjC *` dispatches at high offsets such as `0xF0`, `0x10C`, and `0x12C`.

When the class vptr uses the 53-slot physical type, Ghidra wraps those offsets as
expressions such as:

- `vtable[1].MoveStep`
- `vtable[1].vfunc_38`
- `vtable[1].vfunc_58`

It then borrows an unrelated low-slot function definition. That produced false
`unaff_EBX`, `unaff_ESI`, and `unaff_EDI` inputs and bad stack artifacts.

The chosen model is:

- keep the physical table exact;
- infer a separate polymorphic dispatch-interface structure;
- point the base class layout at the dispatch interface;
- never stretch the physical data object;
- type dispatch-tail slots only with conservative cross-table ABI consensus.

An offline check against the existing `vtable_proposals.tsv` selected only:

`STGameObjC: physical=53, dispatch=82, evidence_tables=19`

It did not propose dispatch types for every class.

## 8. Current dispatch heuristic

### `scripts/STIndirectCallAnalyzer.java`

The analyzer now:

- reads upstream `vtable_proposals.tsv`;
- finds active primary physical vtables;
- requires at least two longer recovered tables whose `slot_owners` contains the
  exact base owner;
- proposes a separate `<Owner>DispatchVTable`;
- uses the maximum recovered descendant extent;
- keeps the physical prefix separate;
- infers tail signatures only when:
  - at least two implementations provide ABI evidence;
  - at least half of the candidate tables agree;
  - no non-null evidence contradicts calling-convention mode or stack cleanup;
  - missing evidence abstains rather than automatically conflicting.

Generated modes include:

- `synthetic_dispatch_thiscall`
- `synthetic_dispatch_stdcall`

A `RET 0` implementation with no semantic ECX read can be modeled as a neutral
dispatch `thiscall` only through cross-table polymorphic-slot consensus.

Generated indirect slot types are revalidated. If their machine evidence no
longer holds, the analyzer can propose `revert_generated_slot`; manual types are
not reverted.

Important recent compile fixes:

- the accidentally missing helper `enabled(...)` was replaced with the explicit
  local helper `flagEnabled(...)`;
- the overly generic helper `text(...)` was renamed to `safeText(...)`;
- all calls and declarations currently match in this file.

### `scripts/STIndirectCallApplier.java`

The applier now:

- handles `create_dispatch_vtable`;
- creates script-owned `<Owner>DispatchVTable`;
- copies the exact physical prefix;
- fills an unresolved tail with `void *`;
- only grows the generated dispatch shape;
- hash-protects the generated type;
- changes the owner vptr to the dispatch structure;
- leaves physical vtable data/type length untouched;
- applies neutral dispatch `thiscall`/`stdcall` definitions;
- generates stable dispatch function-definition names by structure+offset;
- can revert only script-generated indirect definitions after evidence loss;
- refreshes the dispatch prefix from later physical-vtable refinements while
  preserving independently recovered tail slots.

### `scripts/STClassLayoutAnalyzer.java`

`readVtableTypes(...)` prefers an existing script-owned
`<Owner>DispatchVTable` over the short physical table, preventing later class
layout passes from restoring the `vtable[1]` problem.

Important compile fix:

- an invalid borrowed helper call at the former line 1718:
  `text(dispatch.getDescription())`
  was replaced with:
  `dispatch.getDescription() != null &&
   dispatch.getDescription().contains(...)`

There are currently no `text(...)` calls in this file.

### `scripts/STExportRegressionGate.java`

The gate now:

- counts `DispatchVTable` structures separately;
- writes `dispatch_vtable_count` into the receipt;
- treats disappearance of a previously exported dispatch type as an error;
- allows only one narrow migration exception:
  - when the baseline has zero dispatch interfaces and the current export has
    at least one;
  - only growth in `raw_indirect_call` becomes a `stage_transition` warning;
  - all other blocking metrics remain strict;
  - later exports restore the normal non-increasing hard gate.

The rationale is that removing wrapped `vtable[1]` aliases can honestly expose
unresolved tail calls on the first migration export.

## 9. Logging work and its corrected limitation

### New `scripts/STRecoveryLauncher.java`

This file is currently new/untracked.

The normal menu entry now points to:

`Tools -> Submarine Titans -> Run Recovery Pipeline`

The direct pipeline entry was moved to:

`Tools -> Submarine Titans -> Advanced -> Run Recovery Pipeline Directly`

The launcher writes:

`recovery/ST.exe/pipeline_bootstrap.log`

and then calls `STRecoveryPipeline`.

### `scripts/STRecoveryPipeline.java`

The pipeline now has:

- a provider-load preflight over repository `ST*.java` files;
- `build_manifest.tsv`;
- individual `build/*.log` files with source SHA-256 and diagnostics;
- per-step directories containing:
  - `stdout.log`
  - `stderr.log`
  - `step.json`
  - `exception.txt` on failure;
- full top-level `exception.txt`;
- build counts in `run.json`;
- source hashes/build statuses included in the overall run hash;
- `Throwable` handling so serious step failures are archived before rethrow.

Critical correction: the user pointed out that Ghidra Script Manager refresh
compiles the entire source bundle before any repository Java script can run.
Therefore neither `STRecoveryLauncher` nor `STRecoveryPipeline` can capture a
compile failure that occurs during **Refresh Script Manager**. The internal
stage is correctly described now as a provider **load** preflight, not a
guaranteed refresh-build logger.

To capture refresh-time compilation automatically, an external wrapper or
Ghidra host/application logging configuration is required on the machine that
actually runs Ghidra. The local Codex machine has only SMB access and does not
know that host's OS, Ghidra installation path, or launch command. Do not pretend
the Java launcher solves this boundary.

## 10. Compile-error history from the latest edits

Two basic missing-helper mistakes occurred:

1. `STIndirectCallAnalyzer` called `enabled(...)` without declaring it.
2. `STClassLayoutAnalyzer` called `text(...)`, a helper that existed in another
   class but not this one.

Both have been fixed in source. These mistakes are why the user asked for a
complete handoff and should make the next reviewer distrust purely lexical
checks.

An audit of added unqualified calls was performed after the second failure:

- `STClassLayoutAnalyzer` now uses only its existing `leaf(...)` helper in the
  added block;
- remaining added `text(...)` calls are in `STIndirectCallApplier`, where a
  local `private static String text(String)` exists;
- `STIndirectCallAnalyzer` uses locally declared `safeText(...)` and
  `flagEnabled(...)`.

## 11. Static verification performed

The following were run successfully on the SMB source:

- a custom lexical brace/string/comment balance check for:
  - `STClassLayoutAnalyzer.java`
  - `STIndirectCallAnalyzer.java`
  - `STIndirectCallApplier.java`
  - `STExportRegressionGate.java`
  - `STRecoveryPipeline.java`
  - `STRecoveryLauncher.java`
- targeted `git diff --check` on the changed files;
- targeted searches for missing `text/enabled` helper calls;
- an offline heuristic scope check selecting only `STGameObjC` for dispatch
  widening.

These checks do **not** prove compilation against Ghidra. No current Ghidra run
has compiled or exercised the newest edits.

## 12. Known risks and unresolved questions

1. **Refresh-time compilation remains unverified.**
   The immediate next action is Refresh Script Manager on the Ghidra host.

2. **Runtime behavior is unverified.**
   After refresh succeeds, run the logged standard pipeline, preferably a full
   analysis before export.

3. **Expected first dispatch migration behavior.**
   Raw indirect calls may rise and should be only a one-time warning. The
   unresolved-register metric must not rise; ideally the known `+24` disappears.

4. **Generated-slot rollback versus export erasure gate.**
   A future intentional `revert_generated_slot` can remove a previously exported
   function-pointer type. The current per-slot erasure gate may classify that as
   a hard regression unless the final proposal/report still explains the
   cleanup. This was identified but not fully redesigned.

5. **Preflight build granularity.**
   Modern Ghidra compiles Java scripts as a source bundle. Calling
   `getScriptInstance` per file may validate/load cached classes but does not
   necessarily correspond to an independent compilation unit for each log.

6. **SMB Git performance.**
   Full worktree scans can hang. Use targeted commands and do not infer a clean
   worktree from the known file list.

## 13. Files changed by this conversation

Known tracked changes:

- `README.md`
- `docs/ghidra-workflow.md`
- `docs/structure-recovery-gaps.md`
- `scripts/STClassLayoutAnalyzer.java`
- `scripts/STExportRegressionGate.java`
- `scripts/STIndirectCallAnalyzer.java`
- `scripts/STIndirectCallApplier.java`
- `scripts/STRecoveryPipeline.java`

Known new/untracked file:

- `scripts/STRecoveryLauncher.java`

There may be unrelated user changes elsewhere. Preserve them.

## 14. Recommended next sequence

1. Read `AGENTS.md`.
2. Inspect the targeted diffs listed above.
3. On the Ghidra host, Refresh Script Manager.
4. If refresh reports another compiler error, fix all errors from the complete
   Console/application log rather than iterating one symbol at a time.
5. After a successful refresh, run the standard logged recovery pipeline.
6. Read:
   - `recovery/ST.exe/pipeline_bootstrap.log`
   - `recovery/ST.exe/latest_run.txt`
   - newest run `build_manifest.tsv`
   - newest run `pipeline.log`
   - failing step's `stderr.log`/`exception.txt`
7. Run full analysis and export.
8. Check that:
   - `STGameObjCDispatchVTable` exists with 82 slots;
   - physical `STGameObjCVTable` remains 53 slots;
   - high calls no longer decompile as misleading `vtable[1]` aliases;
   - `unresolved_register_input` returns from 821 to at most the prior 797;
   - the first raw-indirect increase, if any, is only a migration warning;
   - the next export restores strict raw-indirect gating.

## 15. Suggested commit title

If all of the above compiles and passes a real Ghidra run:

`recovery: separate physical vtables from dispatch interfaces`

If logging is committed separately:

`pipeline: retain provider and per-step recovery diagnostics`
