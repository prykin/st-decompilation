# Submarine Titans Decompilation — repository guidance

## Purpose and source of truth

This repository recovers the original 32-bit MSVC/x86 Submarine Titans program
into readable, eventually buildable source. The live authoritative analysis is
the local Ghidra 12.1.2 project under ignored `proj/`; the committed database
checkpoint is the verified packed Program under `ghidra/`. `recovery/` and
`decomp/` are generated, reviewable projections of that state. Do not hand-edit
generated recovery or decompiler output to invent facts that belong in Ghidra
or a recovery script.

Original binaries are local under ignored `bin/` and must not be committed.

## Working model

- Use an ordinary Git/LFS checkout on a local filesystem. Synchronize through
  `origin`; do not inspect, edit, or run the project through a network mirror.
- The preferred reproducible runner is `docker/run.sh`. Its Compose image pins
  Ghidra 12.1.2 and JDK 21, mounts the working tree at `/workspace`, mounts
  `.git` read-only, and has no repository credentials. Hydrate `proj/` first
  when it is absent, then run `doctor`,
  `build-scripts`, and `headless-smoke` before the first mutating pipeline pass.
- Root `.env` is the ignored machine-local Compose profile; start from
  `.env.example`. `.st-local/` contains ignored outer logs, compiler output, and
  the credential-free Docker CLI directory. Neither path may be committed.
- A validated direct-host `.st-local/environment.conf` remains an optional
  fallback for GUI Ghidra. Never reuse it from another checkout or machine.
- `docker/run.sh snapshot` creates a hash-named packed `.gzf` without writing
  the source project; `snapshot-verify` reimports it into a temporary read-only
  project and requires the semantic Program fingerprint to match. Snapshots
  remain ignored under `.st-local/`; `snapshot-publish` requires a matching
  passed export receipt and updates `ghidra/ST.exe.gzf` only after a semantic
  Program change. A fresh checkout uses `project-hydrate` to create local
  `proj/` and never overlays one project database with another.
- `scripts/` contains Ghidra Java scripts, not a Gradle extension. Ghidra compiles
  them on demand with JDK 21.
- On a direct macOS checkout, hold a system sleep assertion for every long
  headless Ghidra run. Prefer the validated ignored
  `.st-local/run-recovery.sh`; otherwise wrap the exact headless command with
  `caffeinate -dims`. A busy Java process does not itself prevent idle sleep.
- Analyzers are read-only and write proposals to `recovery/ST.exe/`; appliers
  consume the exact proposal TSV and mutate Ghidra transactionally.
- Never bulk-enable `apply=0` or related review flags. Preserve `USER_DEFINED`,
  `IMPORTED`, stale baselines, edited generated types, and explicit conflicts.
- Run `STDecompExport` with the repository's `decomp/` directory only after the
  database is current. Per-function address is the stable identity; names are not.
- Treat the corpus as accepted only when `recovery/ST.exe/export_receipt.json`
  says `passed`. Export is whole-corpus transactional; `incomplete` means the
  exporter or gate stopped, and the retained `pre_export/` snapshot—not a hash
  update—is the next regression baseline.
- The corpus manifest binds `pseudocode_runtime.h` by SHA-256. Compatibility
  helper semantics are executable source input, not untracked presentation;
  changing them requires a fresh accepted export and regenerated source tree.
- `ST_PSEUDO[...]` comments and `pseudocode_idioms.jsonl` describe presentation
  gaps which Ghidra could not safely fold. They are exporter-owned and
  regenerated; do not treat them as recovered semantic facts.
- `decomp_quality_summary.json` and `decomp_quality_issues.jsonl` are the broad
  recursive quality audit. Use the stable function address and issue kind when
  selecting the next automation cluster; do not infer corpus quality from one
  large `decomp.c` example.
- `tools/st_source_tree.py` is the only writer for generated `src/ST.exe`.
  Run it only against a `passed` receipt; do not hand-edit its generated tree.
  Internal source identity is `st::fn_ADDRESS`, while recovered names and paths
  remain provenance. Treat `src/ST.exe/audit/` and compiler diagnostics as a
  review queue, never as permission to add arbitrary casts or zero-filled stubs.
- `compile_readiness_summary.json` and `compile_readiness_issues.jsonl` separate
  syntactic/runtime compatibility, missing source/declaration assembly, and
  semantic recovery debt. Compatibility helpers make exact pseudocode
  expressible; they are not evidence for a recovered field, class, or callback.
- `call_relations.jsonl` is the address-authoritative call identity: keep the
  direct entry, thunk chain, and resolved target together, especially for
  overloads. `coverage_summary.json`/`unclaimed_ranges.jsonl` are the source of
  truth for executable bytes which Ghidra has not assigned to any function.
- Treat `manual_type_conflicts.tsv` as a review queue, not an apply list. Strong
  contradictory evidence makes a protected type suspicious, but never licenses
  silently replacing `USER_DEFINED`/`IMPORTED` work.
- Do not emit wall-clock start/end timestamps into committed corpus, recovery,
  or handoff artifacts. Elapsed durations are diagnostic and may be retained.

## Important technical constraints

- Respect 32-bit MSVC ABI details: `__thiscall` uses ECX, `RET n` proves callee
  cleanup/argument bytes, `_setjmp3` has two fixed args plus varargs, and narrow
  source values do not prove a narrow EAX ABI return.
- A truncated callee-cleaned prototype may be expanded only from the callee:
  unanimous nonzero `RET n`, complete pre-write reads of the newly exposed
  incoming EBP range, and an independently typed machine-width anchor such as
  an x87 `double ptr` slot. Caller pseudocode is downstream evidence and must
  not be used to prove the missing arity.
- A narrow `AL`/`AX` return requires the same exact low-accumulator definition
  on every callee return path plus complete caller CFG coverage in which every
  path consumes only that width or explicitly kills `EAX`. Export may replace
  Ghidra's `value._0_N_ = call()` spelling only when the rendered callee name is
  unambiguous and its concrete database return width exactly matches `N`.
- Packed/unaligned fields and overlapping unions are intentional. Never align or
  merge them merely to improve decompiler spelling.
- A packed byte lookup table immediately after a dword jump table must not become
  an extra code target. Install a finite switch override only when consecutive
  table words match the complete existing computed-jump reference set, every
  target is an instruction in the containing function, the first rejected word
  is non-executable and independently read as bytes, and a fresh decompile
  reports jump-table truncation. Preserve foreign/manual overrides.
- Integer promotion in comparisons does not invalidate a proven narrow storage
  width. Treat competing same-width scalar signedness on an already generated
  field as review-only; automatically clearing it can make Ghidra oscillate
  between the concrete scalar and `undefined` on successive decompiles.
- A full-width scalar field remains full-width when every competing contained
  view is a narrower scalar at the same low offset. A low-word consumer proves
  a cast/view, not a short field; only an independently complete equal-width
  partition may replace the transport scalar.
- Export may spell an exact little-endian low-byte/low-word read of such a
  proven wider scalar as a value cast, but never rewrite the corresponding
  lvalue store into an assignment to a cast. The outer integer promotion may
  be omitted only when ordinary C++ promotion is exactly equivalent.
- A compiler-reused incoming stack slot may change value domain after an exact
  out-parameter call. Keep the original ABI parameter at entry, but kill its
  prior value after a full-pointee write proven on every callee return path and
  allow the post-write scalar lifetime to flow to later calls. Do not infer the
  output type from caller pseudocode alone.
- Exporter `stack_slot_reuse` evidence requires an incoming EBP slot which is
  read before one later full-width overwrite. The new value must trace through
  transparent `MOV`/`MOVSX`/`MOVZX` operations either to a different incoming
  parameter or to an independently defined full register; arithmetic, `LEA`,
  and registers used only to address a memory operand do not carry argument
  identity. Text may introduce `auto param_N_after_write` only at the first
  exact assignment when it dominates every later use in one lexical block, no
  label can cross it, and the old spelling is unused outside that block.
- When that post-write lifetime is independently scalar but Ghidra retains
  arithmetic scaled by the dead entry pointee, export may collapse only a
  complete `&alias[index].field_OFFSET +/- constant` expression using the exact
  installed pointee extent. Partial address expressions and mixed pointer/scalar
  lifetimes remain explicit.
- A generated scalar class field may become an anonymous state enum from exact
  immediate writes plus comparisons. Comparison evidence includes only direct
  `CMP field,imm`, a bounded load/compare def-use, or a contiguous
  `MOV field -> DEC/SUB positive-imm -> JZ/JNZ` equality chain. Register-backed
  writes require a bounded exact constant definition (`MOV`, self-`XOR/SUB`,
  `AND 0`, or `OR -1`); calls and ambiguous redefinitions cancel the proof.
- A machine-word `MOV` may cover several adjacent packed scalar members. Split
  that transport span only when every equal narrow subspan is independently
  accessed at the exact narrow width; preserve partial-register provenance only
  at that same width, and use an exact `MOVSX`/`MOVZX` consumer to recover
  signedness. An existing concrete wide member still wins.
- A foreign class type appearing in a named method may be contamination from a
  weak method-owner vote. Audit the callee's full direct-caller coverage before
  extending the foreign layout; shared helpers must retain neutral receivers.
- Named `GetMessage` methods share the recovered `STMessage *` envelope. Its
  three argument slots are ID-dependent unions, not three globally fixed types.
- A runtime `DArrayTy::elementSize` stride cannot become a static C array type.
  Use a per-owner-field descriptor specialization whose `data` member points at
  the recovered element record; keep the runtime stride in the pseudocode.
- A library loader returning heterogeneous serialized records must retain a
  neutral `byte *` ABI. Recover a separate payload view at each consumer; do not
  propagate one consumer's structure back into the loader return.
- A library-static helper or address-installed callback may inherit source
  ownership only between its nearest exact source anchors when both anchors
  name the same normalized file and every direct caller plus every executable
  DATA-reference owner stays inside that closed interval or independently
  belongs to the same library. The DATA-reference exception requires an exact
  instruction reference from a containing function; arbitrary tables are not
  owners. Never grow library ownership through an unrestricted call graph;
  application callbacks and source-boundary crossings remain outside.
- Source-file provenance and library-module ownership are distinct. An exact
  `MOV [memory], imm32` callback target at the boundary of two different source
  files may inherit only the common library module when the nearest exact source
  anchors around the callback agree on library/namespace and every direct caller
  plus executable non-flow reference owner is independently bounded by its own
  nearest exact anchors for that same module or already has the same independent
  library classification. Never attach either source basename to the callback
  from this weaker module-only proof.
- Missing callback entries may be created automatically only from an exact x86
  `MOV [memory], imm32` function-address store to a standalone disassembled
  instruction entry or a complete `RET`/`RET n` stub. Reject fallthrough targets
  and do not infer an owner or semantic prototype merely from the store.
- Decompiler `T * + n` arithmetic is measured in pointee elements unless an
  explicit integer cast proves byte arithmetic. Derive the current rendered
  pointee width before recording a field offset; newly exposed scaled geometry
  is review-only unless a closed single-call consumer-local view independently
  satisfies the normal application constraints.
- `Owner::sub_ADDRESS` is an automation-owned structural placeholder: method
  ownership is proven, but no original semantic method name has been recovered.
- A fixed class-member array may be installed only from a proven bound or exact
  pointer-walk extent; run `STClassArrayAnalyzer` before the class-layout pair.
- Typed vtable function pointers retain an explicit receiver in Ghidra's own C
  output. `STDecompExport` folds only the exact duplicated-receiver form
  `(*obj->vtable->slot)(obj, ...)` into C++ member-call sugar
  `obj->slot(...)`; adjusted, cast, missing, and secondary-base receivers stay
  explicit for review.
- Compiler optimization can merge several SSA lifetimes into one Listing local;
  avoid persistent whole-local typing when evidence shows mixed scalar/pointer
  roles. `STLocalLifetimeAnalyzer/Applier` may split distinct decompiler merge
  groups or type a single raw-undefined group only from an address-stable exact
  typed-call/copy anchor. It may also carry a hash-intact recursive-node member
  through an exact field load/store/address or same-size decompiler cast. A
  same-typed group is isolated only when its type chain ends at that recovered
  recursive node and heterogeneous siblings otherwise poison its rendering. A
  fresh decompile must reattach the database local to that same anchor before
  `applied` is reported; inseparable `Node *`/`Node **` groups remain conflicts.
- A persistent method-local pointer may recover the exact auto-`this` type only
  when the function is `__thiscall`, its value traces to that unadjusted receiver
  through same-size neutral `COPY`/`CAST`/`INDIRECT`/unanimous `MULTIEQUAL`
  p-code, and a downstream exact named member exists in the owner layout but not
  in the current shorter pointee view. Synthetic SSA values, adjusted receivers,
  ambiguous origins, and aliases which do not reattach after a fresh decompile
  remain conflicts. This repairs compiler SEH/setjmp receiver spills; it is not
  evidence for promoting a neutral shared helper to a class.
- When that receiver SSA attachment is unstable, an entry-block
  `MOV [stack-local], ECX` before any call, branch, or ECX definition is an exact
  alternative spill anchor. Never anchor receiver history to a later unrelated
  call result. Output from the retired symbol-less anchor may be migrated only
  for a non-stack full-EAX local when the exact call's trusted return ABI agrees
  with an earlier same-address script marker; remove only the erroneous receiver
  marker and require fresh-decompile reattachment.
- A decompiler-only nominal type is not an independent `typed_copy` lifetime
  anchor. For ordinary types the copied value must originate at an exact typed
  parameter, global, return, or call boundary; a local-to-local or symbol-less
  copy may anchor itself only when the complete type chain ends at the same
  hash-intact generated recursive node. Split merge groups receive deterministic
  collision-free database names and must survive a fresh decompile at the same
  machine anchor.
- Ghidra `Instruction.getOpObjects()` may report the base register embedded in
  a memory operand such as `[EBX+0x10]`. Machine dataflow must treat an operand
  as a register definition/copy only when the complete rendered operand is one
  standalone register; a memory destination never defines its base register.
  Nested-pointer recovery still requires the loaded word to be reused as a
  later memory base before promoting the owner field.
- Reapplying an equivalent pointer-shape type must not rewrite an existing
  script-owned provenance comment merely because analyzer wording changed.
  Exact accepted-snapshot repair may restore comment/source metadata explicitly;
  ordinary confirming passes are semantically idempotent.
- Non-leaf `void` is valid only when every direct-call CFG path kills EAX before
  an explicit read; an unresolved path is `unknown`, not ignored. A bare caller
  `RET` proves forwarding only when that caller already has a protected non-void
  return ABI—generic return types must not recursively validate each other.
- A non-negative count return may be recovered with one closed caller-use gate
  when the callee CFG is independently complete: every reachable RET follows an
  exact full-EAX zero definition, the only later accumulator definitions are
  `INC EAX`, and at least one reachable return path includes an increment. This
  proves a `uint` count ABI, not the semantic type of the output buffer.
- A generic wrapper may recover a pointer return across a void-looking helper
  only from a closed machine chain: a trusted pointer producer defines full EAX,
  the exact live EAX is pushed into one pointer parameter, the helper returns
  that same parameter in full EAX on every RET, and every wrapper RET retains the
  producer's pointer ABI while at least two external callers consume it.  This
  proves the wrapper return; it does not change the helper's source-level return.
- ABI-mutating work must pass `STAbiRegressionGate` before broad structural
  consumers run. Keep durable sentinels in `config/abi-regression-rules.tsv`,
  never in Java. A deliberate ABI change may use only an exact reviewed
  baseline/candidate fingerprint transition; never auto-update, wildcard, or
  globally disable the accepted baseline.
- `RecoveredRecord_<Owner>_<Address>` is a deterministic generated identity for
  one complete one-owner pointer shape. It is not an asserted original type name
  and never licenses geometry-only merging.
- A source-derived type family requires one script-owned shape, one unambiguous
  recovered source basename, exact interprocedural flow into the first explicit
  parameter, at least three such flows spanning two callees, and at least two
  semantically named functions. Layout or basename equality alone is never
  sufficient; basename collisions remain review-only.
- An allocation-backed packed record view belongs to its producer/consumer, not
  to the neutral allocator. Automatic application requires one returned allocation
  root, an exact machine fixed-copy span from one source parameter, non-overlapping
  fields inside that span, and unchanged non-manual ABI baselines.
- A non-vtable function-pointer field is automatic only when one exact generated
  structure member has both a stored function-address family with a unanimous
  imported or independently recovered ABI and an indirect call loaded from that
  same member. Bare `USER_DEFINED` source is not independent ABI provenance.
  Scan and prove exact stores before decompiling broad call-only candidates; a
  call without a stored target is not a callback-field proposal.
- A callback stack parameter is automatic only from the complete machine chain:
  every observed direct callsite passes an exact function address or null into
  the same parameter, the callee calls through that parameter with one argument
  count, and at least two exact target sites agree on a machine-derived ABI.
  A cdecl count additionally requires matching caller cleanup at every indirect
  site. Preserve manual/imported signatures and concrete parameter types; never
  copy semantic argument types from an untrusted target signature.
- A polymorphic dispatch interface is audit metadata only. It must not replace
  a physical class vptr or mutate synthetic tail slots; stale proposal files
  requesting those operations are refused by the applier.
- A weak or generic target Listing signature must not erase a stronger
  receiver-aware generated function-pointer ABI already installed in a physical
  vtable slot. Recover the deterministic generated slot family or leave the
  proposed downgrade disabled.
- A use-site-only indirect-call override is a last-resort ABI view, not physical
  slot evidence. Retain exact physical-dispatch consensus, but if one function
  would need more than 32 machine-fallback overrides, suppress that whole dense
  fallback family and remove earlier script-owned members of it; per-call
  overrides at that density perturb High SSA/liveness more than they recover.
- Apply that density limit to the fallback overrides which remain after
  same-pass physical-slot promotion, not to every already typed dispatch in the
  containing function. A raw uniquely owned physical slot may use one-function
  fixed-arity consensus only when at least eight exact unadjusted calls agree;
  remove the now-redundant per-call fallbacks for that slot in the same proposal.
- A generic pointer parameter inside a named `__thiscall` method may receive an
  address-local primary-owner vtable view only when exact CFG origin reaches the
  parameter, a standalone-register comparison relates it to the unadjusted
  receiver, and at least eight compatible calls span two physical owner slots.
  Only slots present in the owner's proven primary vtable may be rendered this
  way. Keep the Listing parameter neutral; extension slots and adjusted
  receivers remain explicit.
- A persistent generated callable-receiver record requires one dense exact
  parameter-origin family, unanimous non-void slot ABIs, independent receiver
  extent, no reuse of the parameter storage, and no unresolved incoming
  callee-saved argument. It is a structural call view, not evidence for a
  semantic class, physical vptr, inheritance relation, or globally shared ABI.
- Generated vtable types which name the same exact physical table address are
  aliases, not independent ABI evidence. A unanimous independently recovered
  slot ABI on one such alias must be retained by every generated alias at that
  offset; conflicting indirect-call families cancel the transfer. Never select
  a slot ABI by datatype-path or proposal-file order.
- A class's offset-zero vptr uses its proven primary physical vtable. A secondary
  `OwnerVTable_at_OFFSET` may type only that exact secondary subobject offset and
  must never win by proposal-file order.
- A neutral helper receiver may be promoted to a common class only from exact
  call-boundary propagation across at least two independently named caller
  families plus unique physical-vtable slot-family agreement and sufficient
  object extent. Geometry or one caller family is review-only.
- An incoming EBP context is a custom x86 ABI parameter only when EBP is
  dereferenced before definition, every current explicit ECX/EDX parameter is a
  generic word, and neither register has semantic incoming use. A non-void
  return additionally requires complete caller-use and full-EAX definition
  evidence; unresolved paths stay unknown.
- A bulk zero span proves an extent, not an array element type. Install a fixed
  inline array only when independent indexed-stride evidence agrees; install a
  nested by-value member only for an exact complete typed copy into an
  automation-owned range.
- A fixed stack output array requires more than one pointer-shaped local. The
  last explicit scalar-pointer parameter of one non-varargs callee must receive
  the same exact EBP-relative root at least twice, the returned count must be
  tested, and at least two consumers must walk that root by the scalar width
  while decrementing the saved count. Derive capacity only from contiguous
  generic Listing locals up to the next distinct stack object; preserve every
  manual/imported overlap.
- A writable global word may publish a runtime-sized record array without being
  an image-backed array itself. Recover its pointee only from one unique affine
  stride, non-overlapping exact-width members, repeated read/write use across
  functions, and record-aligned pointer advances. A global which is itself a
  repeated SIB table base, or a cursor advanced by a sub-record delta, remains
  neutral. Dynamic `alloca` backing proves no static element count.
- A writable global word is a runtime bit-string pointer when its exact loaded
  value is the memory base of repeated x86 `BT`/`BTS`/`BTR`/`BTC` instructions
  in at least two functions. Represent that storage neutrally as `byte *`; the
  instruction's dword access unit does not make the source pointee a dword.
- A synthetic writable global may become neutral `void *` when its exact loaded
  value is dereferenced at least three times across two functions, or is the
  receiver of at least three calls spanning two callers and two distinct
  `__thiscall` callees. This proves only pointer role. A concrete `T *` requires
  either an all-predecessor CFG proof that an unadjusted named method receiver is
  stored into that global, or a trusted concrete-pointer function whose every
  return path yields that same global or null. Calls kill volatile receiver
  provenance, CFG joins intersect it, and manual/imported data remains protected.
- Exact dereference width may refine a script-owned neutral `void *` global to
  `undefinedN *` only while the loaded global value itself is the dereference
  base.  If the address of that labelled word is used with a nonzero displacement
  or index to cross neighboring global storage, retain the neutral anchor until
  the enclosing aggregate is recovered; the adjacent accesses do not prove that
  word's pointee width.
- Readability regression is address-stable for generic `undefinedN` declarations,
  not for every explicit boundary cast.  A newly declared generic local,
  parameter, return, or pointer tower is a hard regression; one cast introduced
  at a typed producer/consumer boundary may be accepted when declarations and
  the whole-corpus undefined count do not worsen.
- A new pointer cast wrapped directly around a function call is an address-stable
  readability regression. Compare its canonical logical expression rather
  than one rendered line: Ghidra may move the cast and callee across line breaks
  or insert `ST_CALLSITE` comments without changing the code. Repair the return
  ABI or install an exact use-site call override from machine evidence; do not
  make a once-readable call depend on a source-generator boundary cast.
- Neutral pointer-role evidence must never replace an existing pointer whose
  pointee has a known storage width.  For migration of a script-owned `void *`,
  unanimous exact-width machine dereferences across at least three sites and two
  functions may restore only the generic `undefinedN *` storage view; that is a
  readability repair, not a semantic element-type claim.
- When Ghidra retains a byte induction variable over an already proven
  structure pointer, export `*(T *)((int)&base->member + byteOffset)` as the
  exact `STObjectAtByteOffset(base, byteOffset).member` view only when the cast
  width matches that named component. Do not invent `base[index]` until every
  definition proves that the offset is an exact multiple of the record size.
- Exporter `STField<T>(word, offset)` projection requires a declared local
  machine-word scalar. Parameters and unresolved `unaff_*`/`in_*`/`extraout_*`
  ABI registers remain raw. Do not partially convert the left side of a
  compound assignment when another independent raw address domain is present;
  migrate bodies cached by the older broader rule back through the same guard.
- An exact machine-word field copy may transfer an independently observed
  contained subfield width to the corresponding byte offset at the other end.
  Stage transfers from one snapshot and carry geometry only—never signedness or
  semantic type. A complete equal-width partition may replace the transport
  word in an automation-owned layout; partial overlaps remain union/review debt.
- A factory may anchor a constructor only when one concrete returned class has
  an exact matching allocation extent, the unadjusted allocation result reaches
  ECX, and the factory exits through one terminal direct-JMP/thunk chain to the
  candidate. A conflicting high-confidence vtable owner cancels the anchor.
- A generated global-record word may become `T *` only when the same exact
  member has both a store from a locally typed `T *` and a read/consumer cast as
  that unique `T *`. This paired evidence outranks a decompiler `(int)` storage
  cast; either half by itself does not.
- A recursive linked-node type is identified by one exact hash-owned owner field,
  not by layout similarity. Automatic application requires repeated self-link
  traversal and at least two non-conflicting generated partial views at that
  same root; COM/table chains, concrete roots, and single-view geometry remain
  review-only.
- Export fingerprints must include only composite members actually rendered by
  the cached body. A generated layout change must invalidate functions which
  spell the changed field, but unrelated additions elsewhere in that structure
  must not invalidate every user.
- An optional function/callee call-fixup contributes to the export fingerprint
  only when non-empty. The exact historical empty-padded digest may be accepted
  solely as an equivalent cache migration and must be rewritten to the sparse
  canonical digest without recompiling an unrelated body.
- Recognize MSVC x86 `__alloca_probe` only from its complete page-probe, ESP
  adjustment, saved-register, and return-address machine contract. Attach
  Ghidra's built-in `alloca_probe` call-fixup and include it in the semantic
  Program ledger; a name or address match alone is insufficient.
- A fixed EBP-relative `REP STOS` span is a real storage extent, but overlapping
  lexical lifetimes cannot all become Ghidra Listing locals. Install a byte
  array only into completely unclaimed stack storage; otherwise retain the
  overlap in `stack_object_proposals.tsv` and give an exact raw zero root only a
  deterministic exporter-owned byte-storage spelling. Dynamic `alloca` and SEH
  frame slots remain distinct audit classes.
- Export may fold the complete MSVC signed grid-index division idiom to
  `STBiasedDiv16(value, 201|200)` only when both sign branches are present and
  algebraically identical apart from the exact negative bias. The helper keeps
  the original narrow quotient and subtracts one for every negative source;
  this is deliberately not ordinary floor division at exact negative multiples.
- Export may fold byte-addressed packed-bit test/set/clear, MSVC's exact signed
  divide-by-four bias, and 16.16 rounding only when the repeated operands are
  textually identical and the complete mask/shift form matches. These helpers
  preserve 32-bit wrap, signed truncation, and bit numbering; they do not assert
  a semantic game type. An XOR which reverses bit numbering remains explicit.
- Hash generated class layouts only after Ghidra installs the final
  `StructureDB`; hashing the transient `StructureDataType` can make Ghidra's own
  canonicalization look like a manual edit. A legacy hash-diverged generated
  class may receive only a surgical exact-field overlay where the installed
  field still matches its recorded script baseline. Preserve every unrelated
  component, preflight every proposed datatype, and never use an overlay hash
  to rebaseline or rebuild the whole structure.
- Same-leaf semantic-anchor and recovered structure duplicates may be reconciled
  only when their complete lengths and defined-component geometry match and
  every differing storage type is a compatible generic/concrete pointer view.
  A disagreeing semantic field name is retained only when it follows
  mechanically from the selected concrete pointee type or has current applier
  provenance; otherwise keep the member offset-only. Category preference is
  never recovery evidence.
- Source-tree member syntax must not make the host compiler authoritative for
  recovered object layout. A receiver-aware physical-vtable slot may receive a
  non-virtual forwarding member wrapper over the explicit `vtable` field;
  a uniquely owned non-virtual `__thiscall` may receive a forwarding member
  wrapper to its address-stable `st::fn_ADDRESS` implementation. Never
  synthesize C++ `virtual`/inheritance until base layout and ABI are
  independently proven. Constructors, destructors, ambiguous overloads, and
  field-name collisions remain audit rows. Materialize an unnamed
  `field_0xOFFSET` view only for an exact statically typed path/offset use
  already present in the corpus.
- When a per-call override proves one receiver-aware physical-vtable slot but
  the shared field declaration cannot be widened safely, the source tree may
  emit a non-virtual forwarding wrapper for that exact owner/slot ABI. An exact
  duplicated-receiver call must never degrade from readable member syntax to an
  `exact_indirect_callee<...>(...)(receiver, ...)` expression; generation fails
  instead.
- A neutral machine-word parameter in such an exact wrapper may receive a
  pointer only through `machine_word_boundary_cast` emitted at that exact
  callsite. This records the 32-bit x86 transport without weakening the wrapper
  prototype or treating the cast as semantic pointer-type evidence.
- Compiler audits are local evidence. Normalize them by function address, keep
  machine/compiler output under ignored `.st-local/` by default, and compare
  runs with the same per-TU error limit. A compiler diagnostic is a recovery
  queue item, not permission to add arbitrary casts, stubs, or semantic types.

## Validation and hygiene

- Follow `docs/ghidra-workflow.md`; stop iterative passes only when enabled
  repair/apply counts reach zero or the remaining rows are explicitly review-only.
- Compile changed scripts against the installed Ghidra 12.1.2 jars and JDK 21.
  Put `.class` output in a temporary directory, never in `scripts/`.
- Run `git diff --check` and inspect generated summaries/apply reports. Do not
  discard unrelated dirty Ghidra database or corpus changes.
- Close Ghidra before copying or headless-processing its project. Do not run a
  second writer against an open project.

See `README.md`, `docs/ghidra-workflow.md`,
`docs/structure-recovery-gaps.md`, and `docs/pseudocode-normalization.md` for the
full workflow and current safety boundaries. Follow
`docs/recovery-task-queue.md` for the ordered post-baseline recovery work.
