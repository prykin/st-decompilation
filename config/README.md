# ABI regression policy

`STAbiRegressionGate` is a generic engine which is read-only with respect to the
Ghidra Program. Stable image-specific sentinels are data in this directory so
the gate can grow without accumulating address branches in Java.

## Sentinel rules

`abi-regression-rules.tsv` has one row per stable function-address canary:

- `enabled` is `1` or `0`; disabling a rule is a reviewed policy change, not an
  automatic response to a failure.
- `rule_id` is a durable report identity.
- `function_address` is the eight-digit Program address used to find the
  accepted and current function.
- `checks` accepts `boundary` and `identity`, separated by semicolons.
  `boundary` compares calling convention, explicit/auto parameter count,
  parameter types, return ABI, varargs, and noreturn state. `identity` also pins
  the accepted qualified function name.
- `metrics` contains semicolon-separated `token:<literal>` counters. A current
  raw decompile may reduce but may not increase any counter relative to the
  accepted raw-fixture baseline.
- The current fixture decompile must use the same `DecompInterface` output
  profile as `STDecompExport`, including syntax-tree generation. Otherwise
  HighFunction live-in materialization can create representation-only token
  deltas against an unchanged Program.
- `rationale` records the machine/decompiler failure the rule protects.

Add a sentinel only after a real regression demonstrates that the function is
a useful ABI canary. Do not copy expected signatures or counts into this file;
the accepted receipt-selected corpus remains the baseline.

## Raw fixture baseline

`recovery/<program>/abi_fixture_baseline.tsv` is generated, never hand-authored.
It stores raw token counts and body hashes keyed by rule/address/metric and is
bound to the accepted corpus manifest, Program semantic hash, rule-bundle hash,
and decompiler profile. This deliberately avoids comparing a fresh raw
decompile with exporter-normalized `decomp.c`.

The gate may initialize or replace this file only at startup or immediately
after an accepted export, and only when a freshly computed Program semantic
fingerprint exactly equals the `passed` receipt. A missing/stale baseline under
any other Program state is a hard configuration error. The accepted-refresh
phase updates it after the broad export regression gate passes.

## Reviewed transitions

`abi-regression-transitions.tsv` is normally empty. When a deliberate ABI
improvement fails the gate, review the machine evidence and copy the exact
`subject`, `baseline_sha256`, and `candidate_sha256` from
`abi_regression_report.tsv`. A transition matches only that one subject and
that exact descriptor pair.

Never add wildcard subjects, auto-update fingerprints, or waive a new physical
class-vptr to synthetic-dispatch substitution. Once the candidate becomes the
accepted corpus, remove its transition; the gate reports stale unused entries
as warnings. Each pipeline run archives an exact copy of both TSV policy files
under its ignored `runs/<hash>/policy/` directory.
