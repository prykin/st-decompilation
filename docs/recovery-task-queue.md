# Recovery task queue

This queue is ordered by dependency and risk. It deliberately starts from the
last accepted repository state rather than from a rejected Ghidra Program.
Generated `recovery/` or `decomp/` output is evidence, not an implementation
surface.

## Historical safety rollback baseline

- Commit: `39097bd736` (`Infer callback fields and exact inline aggregates`).
- Program semantic hash: `27b2e1eb234982f047ed62f60bc77e1a7bde68397a9bbe5e0b2e1686a4b2fed8`.
- Corpus manifest: `0a9c405fb2858d7ddd0391cf876f8bc621dcccaeedbe32d91951e5beeb4e8628`.
- Export receipt: `passed`, with 10,392 internal functions, 5,712 bodies,
  2,409 typed recovered-vtable slots, zero failed bodies, zero hard regressions,
  and zero warnings.

The post-baseline candidate is rejected. It must not be used as a Program,
proposal, corpus, or regression baseline. Its additional
`TLOBaseTyDispatchVTable` replaced the physical class vptr type and produced
lost stack arguments, false narrow returns, `extraout_*`, and `in_stack_*`
artifacts.

## P0 — restore and protect the baseline

### Q-000 Restore the accepted repository and Ghidra Program

- Close Ghidra and verify that no process holds the project.
- Restore tracked project, scripts, recovery output, corpus, and documentation
  to `39097bd736`.
- Remove or quarantine untracked files belonging to the rejected experiment.
- Open the restored project and verify the Program semantic hash before running
  an applier.
- Exit criterion: the working corpus has the accepted `passed` receipt and only
  intentionally authored queue/test changes differ from the baseline.

### Q-001 Add a small ABI regression fixture set

Status: implemented in `STAbiRegressionGate` with data-driven rules and exact
reviewed transitions. Two Ghidra runs compiled all 81 scripts and exposed a
false raw-versus-normalized artifact comparison on an unchanged accepted
Program. Token metrics now use an automatically generated raw fixture baseline
bound to the accepted manifest, fresh Program semantic fingerprint, policy
hash, and decompiler profile. Confirmed by completed run
`d395e3ebb9d434e2851255a8381c90e69559f2bd78545b9b13cb13d600c4ef90`:
all ABI phases and the broad export gate passed, the raw baseline was verified,
and the Program semantic hash remained at the accepted value.

Before reintroducing an ABI-mutating heuristic, compare the following bodies
against the accepted corpus by stable address:

| Address | Required invariant |
| --- | --- |
| `00497E00` | no duplicated/foreign receiver and no new `extraout_ECX` |
| `0047C050` | slot `F8` retains its full-word return; no `CONCAT31` growth |
| `0041F3B0` | slots `0C` and `7C` do not acquire guessed narrow returns |
| `004B8C80` | virtual calls retain their final explicit stack argument |
| `004E0830` | virtual calls do not turn arguments into `in_stack_*` inputs |
| `004952E0` | protected boolean CFG return is not widened from provenance alone |
| `005F0A30` | no `unaff_*`, `in_stack_*`, or return-width growth |
| `005EF470` | uncertain virtual ownership remains review-only |
| `005EF7A0` | protected return ABI is not rewritten from a generic family vote |

The broad export gate remains authoritative; these fixtures provide an earlier,
cheaper failure.

### Q-002 Isolate risky Program mutations

Status: superseded for the current SMB-only workflow. Do not create or maintain
a local project copy. Source-bundle pinning, analyzer/applier separation, ABI
barriers, run archives, and transactional corpus export provide the automated
isolation available in this environment. A new risky ABI heuristic must remain
proposal-only until those gates cover it; the pipeline must stop before later
broad consumers when a barrier fails.

- Keep candidate recovery/corpus output separate until its export gate passes.
- Promote the candidate only after the semantic diff and per-address fixture
  diff are reviewed.

## P1 — remove the demonstrated ABI hazards

### Q-010 Keep dispatch interfaces out of class vptr fields

Status: implemented and runtime-confirmed by accepted run `c67bb0...`. New
dispatch interfaces and their tail signatures are emitted as `apply=0` audit rows.
`STIndirectCallApplier` refuses old `create_dispatch_vtable`, synthetic-dispatch
slot, and obsolete hard-coded `create_base_vtable` proposals even if an old TSV
still says `apply=1`. The accepted historical `STGameObjCDispatchVTable` is not
automatically removed: replacing it requires a separately gated migration that
preserves the useful tail-call evidence without changing the physical class
vptr ABI. All ABI barriers and the broad export gate passed, the Program semantic
hash stayed unchanged, and all accepted typed physical vtable slots remained
intact.

- A class vptr must continue to point to a physical vtable type.
- A synthetic union/dispatch view may be emitted as audit metadata, but must not
  replace the physical vptr or its slot `FunctionDefinition`s in Ghidra.
- Do not infer a common slot ABI merely from equal offsets in derived tables.
  Require compatible physical target ABIs and preserve the concrete receiver.
- Add an applier-side refusal so an old proposal cannot install a dispatch view.

### Q-011 Make return repair evidence-only

Status: implemented. The current repair-only pass has no pending mutation;
non-leaf void and forwarding decisions use whole-CFG caller/return evidence,
and boolean source domains remain review-only unless ABI width is independently
proven.

- Never migrate a protected `bool`/narrow return to `undefined4` because an old
  script comment says that propagation was unsafe.
- Require whole-CFG EAX evidence for non-leaf `void`, forwarding, or width
  changes. Unresolved paths remain unknown.
- Same-width signedness disagreement on generated fields is review-only; it
  must not oscillate through `undefined`.

### Q-012 Separate virtual-method ownership, name, and ABI

Status: implemented conservatively. The virtual-method and method-owner reports
keep all automatic name/owner/convention changes disabled at the accepted
checkpoint, while shared and multi-owner targets remain explicit review rows.
Physical slot typing does not by itself rename or re-home the target function.

- A recovered physical vtable slot may prove hidden ECX without proving a class
  name or semantic method name.
- Ownerless/shared targets stay neutral and review-only unless every physical
  caller agrees on receiver adjustment and stack cleanup.
- No automatic class ownership for a target which leaves incoming EAX/ECX
  semantics unresolved in its own body.

## P2 — reintroduce infrastructure independently

Status: all six infrastructure items are present in the current pipeline. Their
runtime evidence is retained per run. Accepted run `c67bb0...` reused 12
persistent and five current-epoch analyzer results and completed in 235.773
seconds. The callback-field machine prefilter reduced that analyzer from
166.613 seconds to 2.300 seconds by skipping 1,138 call-only decompiles.

Each item starts from the accepted source, compiles all scripts against Ghidra
12.1.2/JDK 21 into a temporary output directory, and gets its own narrow runtime
validation. Do not land them as one source bundle.

1. Source-bundle hash pinning while the pipeline is running.
2. Whole-corpus transactional export and `incomplete` receipt handling.
3. Stable body-analysis cache identity.
4. Pipeline elapsed-time display without wall-clock timestamps in artifacts.
5. ABI/global barrier scheduling which prevents broad decompilers from running
   in an already-obsolete Program epoch.
6. Analyzer idempotence checks: `changed=0` must not advance the semantic or
   volatile modification counters.

Any repeated expensive analyzer with no relevant upstream mutation is a
scheduler defect. A step-count increase over the accepted pipeline must identify
the exact mutator which required it.

## P3 — reintroduce semantic recovery one layer at a time

These candidates remain useful, but none is allowed to carry state from the
rejected Program.

1. Strong typed forwarding from an unsized Ghidra return placeholder, with a
   protected caller boundary and full wrapper CFG proof.
2. Receiver-unused physical vtable targets as hidden-ECX calls, with `RET n`
   counting only explicit stack bytes.
3. DArray creation with a neutral callback field; do not specialize the utility
   ABI from one consumer.
4. Concrete `T **` loads rooted in one proven generated global record.
5. Allocation-backed consumer-local packed records with an exact fixed-copy
   span; allocator returns remain neutral.
6. Recursive linked pointee and nested-structure inference from matching
   nonzero geometry at root and recursive depths.
7. Export-only presentation rules (`nullptr`, exact binary32 literals, closed
   cursor idioms, x87 survivor spelling), each proven bit- or address-exact.
8. Function-pointer stack parameters from complete exact direct-callsite
   coverage plus a same-parameter indirect call, with at least two target sites,
   unanimous machine ABI, and cdecl caller-cleanup proof. Source is implemented;
   runtime compile/yield/regression validation is pending.

For every item: analyzer-only proposal review, one applier pass, one confirming
pass, fixture diff, then broad regression gate. A failed item is reverted as a
unit before testing the next one.

## P4 — remaining broad recovery clusters

The accepted corpus contains the following concrete debt:

| Issue | Occurrences | Functions | Next evidence source |
| --- | ---: | ---: | --- |
| `undefined_type` | 16,448 | 3,596 | definitions, consumers, ABI-width families |
| `raw_pointer_offset` | 2,840 | 1,130 | cross-function pointer families and complete records |
| `raw_indirect_call` | 2,100 | 831 | stored callback targets and physical vtable slots |
| `packed_or_unaligned_piece` | 1,493 | 292 | exact packed members or explicit unaligned helpers |
| `return_width_artifact` | 1,077 | 146 | whole-CFG EAX and caller-consumer evidence |
| `unresolved_register_input` | 766 | 183 | boundary ABI, SEH/setjmp, and true live-ins |
| `dynamic_array_indexing` | 318 | 185 | per-owner DArray element descriptors |

Generic field/data names are a later semantic-naming layer. They must not drive
layout or ABI changes merely because their raw occurrence counts are larger.

## Definition of done for one queue item

- No embedded ST image address or hand-authored type/name allow-list in the
  heuristic.
- Analyzer proposal explains machine/decompiler evidence and conflicts.
- Applier preserves manual/imported/stale baselines and is transactionally
  idempotent.
- All Java scripts compile together against Ghidra 12.1.2/JDK 21 outside
  `scripts/`.
- A fresh decompile confirms the database effect; exporter rewriting is not
  accepted as proof of a recovered semantic type.
- `git diff --check` passes and `export_receipt.json` is `passed` with no hard
  regression.
