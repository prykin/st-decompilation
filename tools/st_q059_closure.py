#!/usr/bin/env python3
"""Materialize the deterministic Q-059 residual review queues.

This is a read-only consumer of one accepted corpus and its analyzer reports.
It does not infer new semantic types.  Its job is to prove that the automatic
aggregate frontier is empty and to give every legitimate residual a stable,
reviewable identity and an explicit reason for remaining unresolved.
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
import tempfile
from collections import Counter, defaultdict
from pathlib import Path
from typing import Any, Iterable, Mapping, Sequence


SCHEMA = "st-q059-closure-audit"
SCHEMA_VERSION = 1
ANON_RE = re.compile(
    r"\b(?:AnonShape|AnonNested|AnonPointee)_[A-Za-z0-9_]+"
)
GENERIC_FUNCTION_RE = re.compile(
    r"(?:^|::)(?:FUN|sub|thunk_FUN)_[0-9A-Fa-f]{8}$"
)
GENERIC_GLOBAL_RE = re.compile(
    r"^(?:DAT|PTR|UNK|BYTE|WORD|DWORD|QWORD|SHORT|INT|UINT|FLOAT|DOUBLE)_"
)
GENERIC_FIELD_RE = re.compile(r"^(?:field|value)_(?:0x)?[0-9A-Fa-f]+$")
MUTATING_STATUSES = {
    "applied", "updated", "created", "renamed", "removed", "partial"
}


class ClosureError(RuntimeError):
    pass


def read_json(path: Path) -> Any:
    try:
        return json.loads(path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError) as exc:
        raise ClosureError(f"cannot read {path}: {exc}") from exc


def read_jsonl(path: Path) -> list[dict[str, Any]]:
    rows: list[dict[str, Any]] = []
    try:
        with path.open(encoding="utf-8") as stream:
            for line_number, line in enumerate(stream, 1):
                if not line.strip():
                    continue
                try:
                    value = json.loads(line)
                except json.JSONDecodeError as exc:
                    raise ClosureError(
                        f"invalid JSONL at {path}:{line_number}: {exc}"
                    ) from exc
                if isinstance(value, dict):
                    rows.append(value)
    except OSError as exc:
        raise ClosureError(f"cannot read {path}: {exc}") from exc
    return rows


def read_tsv(path: Path) -> list[dict[str, str]]:
    if not path.exists():
        return []
    try:
        with path.open(encoding="utf-8", newline="") as stream:
            return list(csv.DictReader(stream, delimiter="\t"))
    except OSError as exc:
        raise ClosureError(f"cannot read {path}: {exc}") from exc


def atomic_text(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(
        "w", encoding="utf-8", newline="", dir=path.parent, delete=False
    ) as stream:
        stream.write(text)
        temporary = Path(stream.name)
    temporary.replace(path)


def write_json(path: Path, value: Mapping[str, Any]) -> None:
    atomic_text(path, json.dumps(value, indent=2, sort_keys=True) + "\n")


def clean_cell(value: Any) -> str:
    if value is None:
        return ""
    if isinstance(value, (list, tuple)):
        value = " | ".join(str(item) for item in value)
    return re.sub(r"[\t\r\n]+", " ", str(value)).strip()


def write_tsv(path: Path, fieldnames: Sequence[str], rows: Iterable[Mapping[str, Any]]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(
        "w", encoding="utf-8", newline="", dir=path.parent, delete=False
    ) as stream:
        writer = csv.DictWriter(
            stream, fieldnames=fieldnames, delimiter="\t", lineterminator="\n"
        )
        writer.writeheader()
        for row in rows:
            writer.writerow({name: clean_cell(row.get(name, "")) for name in fieldnames})
        temporary = Path(stream.name)
    temporary.replace(path)


def stable_issue_id(address: str, kind: str, excerpt: str) -> str:
    canonical = re.sub(r"\s+", " ", excerpt).strip()
    digest = hashlib.sha256(canonical.encode("utf-8")).hexdigest()[:12]
    return f"{address}/{kind}/{digest}"


def issue_occurrence_excerpts(corpus: Path, issue: Mapping[str, Any]) -> list[tuple[int | str, str]]:
    """Return one current source excerpt for every recorded occurrence.

    Quality JSON deliberately caps verbose excerpts, but retains every line
    number.  Read those exact lines from the accepted per-function body so the
    closure queue accounts for all occurrences rather than only the preview.
    """
    lines = list(issue.get("lines", []))
    previews = [str(value) for value in issue.get("excerpts", [])]
    source_lines: list[str] = []
    source_file = corpus / str(issue.get("source_file", ""))
    if source_file.is_file():
        source_lines = source_file.read_text(encoding="utf-8", errors="replace").splitlines()
    count = int(issue.get("occurrences", len(lines) or len(previews)))
    result: list[tuple[int | str, str]] = []
    for index in range(count):
        line_number: int | str = lines[index] if index < len(lines) else ""
        excerpt = ""
        if isinstance(line_number, int) and 1 <= line_number <= len(source_lines):
            excerpt = source_lines[line_number - 1].strip()
        if not excerpt and index < len(previews):
            excerpt = previews[index]
        if not excerpt and previews:
            excerpt = previews[-1]
        result.append((line_number, excerpt))
    return result


def parse_integer(text: str) -> int | None:
    try:
        return int(text, 0)
    except ValueError:
        return None


def raw_offset_classification(excerpts: Sequence[str]) -> tuple[str, str]:
    text = " ".join(excerpts)
    lower = text.lower()
    if any(token in text for token in ("DArrayTy", "DArrayAt", "elementSize", "->data")):
        return (
            "dynamic_darray_or_runtime_stride",
            "the address depends on a runtime container stride; a static field or C array would misstate the ABI",
        )
    widths = {"undefined1": 1, "byte": 1, "char": 1, "undefined2": 2,
              "short": 2, "ushort": 2, "undefined4": 4, "int": 4,
              "uint": 4, "float": 4, "double": 8}
    for type_name, offset_text in re.findall(
        r"\*\s*\(\s*([A-Za-z0-9_]+)\s*\*\s*\).*?\+\s*(0x[0-9a-fA-F]+|[0-9]+)",
        text,
    ):
        width = widths.get(type_name)
        offset = parse_integer(offset_text)
        if width and offset is not None and offset % width:
            return (
                "packed_unaligned_or_union_view",
                "the exact access is misaligned for its width; preserve the packed/unaligned per-use view until a complete union partition is proven",
            )
    if ("STPiece<" in text or "packed" in lower or "unaligned" in lower or
            re.search(r"\+\s*(?:1|2|3)\s*\)", text)):
        return (
            "packed_unaligned_or_union_view",
            "the expression is a contained or unaligned storage view, not independent evidence for replacing the enclosing field",
        )
    if (re.search(r"\b(?:byte|char|undefined1)\s*\*", text) and
            (" + " in text or " - " in text or "memcpy" in text or "memmove" in text)):
        return (
            "intentional_byte_cursor",
            "the value is traversed as byte storage; semantic element identity is not independently proven",
        )
    index_name = r"(?:iVar|uVar|param|local)_?[0-9A-Za-z]+"
    if (re.search(r"\[[^\]]+\]", text) or
            re.search(rf"\b{index_name}\s*\*", text) or
            re.search(rf"\+\s*{index_name}", text)):
        return (
            "array_or_pointer_walk",
            "indexed or induction-variable addressing proves a walk, but not one fixed member or a unique public element type",
        )
    return (
        "insufficient_independent_evidence",
        "a fixed offset is visible, but no unique owner, complete compatible layout, and independent typed boundary jointly prove a field",
    )


def owner_from_type_path(path: str) -> tuple[str, str]:
    leaf = path.rsplit("/", 1)[-1]
    match = re.match(r"AnonPointee_(.+)_([0-9A-Fa-f]{4})$", leaf)
    if match:
        return f"{match.group(1)}+0x{match.group(2)}", "class_field_pointee"
    match = re.search(r"_([0-9A-Fa-f]{8})(?:_|$)", leaf)
    if match:
        return match.group(1).upper(), "function_local_or_parameter_shape"
    if "HiddenThis" in path:
        return leaf, "hidden_this_receiver_shape"
    return leaf, "generated_anonymous_layout"


def anon_reason(
    row: Mapping[str, str], family_reasons: Sequence[str], named_reasons: Sequence[str]
) -> str:
    evidence = [value for value in (*family_reasons, *named_reasons) if value]
    if evidence:
        return "; ".join(sorted(set(evidence)))
    status = row.get("match_status", "")
    category = row.get("category", "")
    if status == "no_named_layout_match":
        return "no independently proven named layout has complete compatible geometry"
    if "ambiguous" in status or int(row.get("compatible_named_candidates", "0") or 0) > 1:
        return "multiple geometry-compatible named layouts exist; geometry cannot select identity"
    if category == "class_pointee":
        return "the layout is owned by one class field and has no exact cross-boundary identity proof"
    return "no exact producer/consumer flow and unique semantic anchor satisfy the strict merge policy"


def proposal_enabled(rows: Sequence[Mapping[str, str]]) -> int:
    return sum(row.get("apply", "").strip() == "1" for row in rows)


def apply_mutations(rows: Sequence[Mapping[str, str]]) -> int:
    return sum(row.get("status", "").strip().lower() in MUTATING_STATUSES for row in rows)


def make_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, required=True)
    parser.add_argument("--corpus", type=Path, required=True)
    parser.add_argument("--recovery", type=Path, required=True)
    parser.add_argument("--source-tree", type=Path, required=True)
    parser.add_argument("--compile-summary", type=Path, required=True)
    return parser


def run(args: argparse.Namespace) -> dict[str, Any]:
    corpus = args.corpus.resolve()
    recovery = args.recovery.resolve()
    source_tree = args.source_tree.resolve()
    receipt = read_json(recovery / "export_receipt.json")
    source_marker = read_json(source_tree / ".st-generated-source-tree.json")
    compile_summary = read_json(args.compile_summary.resolve())
    if receipt.get("status") != "passed":
        raise ClosureError("Q-059 audit requires a passed export receipt")
    manifest = receipt.get("current_manifest_sha256")
    program = receipt.get("program_semantic_sha256")
    if source_marker.get("input_manifest_sha256") != manifest:
        raise ClosureError("generated source tree is stale relative to the accepted corpus")
    if compile_summary.get("input_manifest_sha256") != manifest:
        raise ClosureError("compile audit is stale relative to the accepted corpus")
    if compile_summary.get("program_semantic_sha256") != program:
        raise ClosureError("compile audit Program fingerprint does not match the accepted corpus")
    compile_stats = compile_summary.get("statistics", {})
    if int(compile_stats.get("errors", -1)) != 0:
        raise ClosureError("Q-059 audit requires a zero-error full compile audit")
    if compile_summary.get("regression_gate", {}).get("status") != "passed":
        raise ClosureError("compile regression gate did not pass")

    quality = read_jsonl(corpus / "decomp_quality_issues.jsonl")
    raw_rows: list[dict[str, Any]] = []
    for issue in quality:
        if issue.get("kind") != "raw_pointer_offset":
            continue
        occurrences = issue_occurrence_excerpts(corpus, issue)
        duplicate_ids: Counter[str] = Counter()
        for ordinal, (line_number, excerpt) in enumerate(occurrences, 1):
            classification, reason = raw_offset_classification([excerpt])
            base_id = stable_issue_id(
                issue["function_address"], "raw_pointer_offset", excerpt
            )
            duplicate_ids[base_id] += 1
            raw_rows.append({
                "issue_id": f"{base_id}/{duplicate_ids[base_id]}",
                "function_address": issue["function_address"],
                "function_name": issue.get("function_name", ""),
                "occurrence": ordinal,
                "decompiler_line": line_number,
                "classification": classification,
                "reason": reason,
                "compiler_blocker": 0,
                "abi_blocker": 0,
                "excerpt": excerpt,
            })
    raw_rows.sort(key=lambda row: (row["function_address"], row["issue_id"]))
    write_tsv(
        recovery / "q059_raw_pointer_offset_review.tsv",
        ("issue_id", "function_address", "function_name", "occurrence",
         "decompiler_line", "classification", "reason", "compiler_blocker",
         "abi_blocker", "excerpt"),
        raw_rows,
    )

    type_rows = read_jsonl(corpus / "types.jsonl")
    type_by_leaf = defaultdict(list)
    for row in type_rows:
        type_by_leaf[str(row.get("name", ""))].append(row)
    anon_audit = read_tsv(recovery / "anonymous_type_audit.tsv")
    family_reason_by_type: dict[str, list[str]] = defaultdict(list)
    for row in read_tsv(recovery / "type_family_groups.tsv"):
        if row.get("apply") == "1":
            continue
        reason = row.get("evidence", "")
        for key in ("canonical_type", "member_type"):
            if row.get(key):
                family_reason_by_type[row[key]].append(reason)
    named_reason_by_type: dict[str, list[str]] = defaultdict(list)
    for row in read_tsv(recovery / "anon_named_type_matches.tsv"):
        if row.get("apply") == "1":
            continue
        if row.get("anonymous_type"):
            named_reason_by_type[row["anonymous_type"]].append(row.get("evidence", ""))
    quality_uses: dict[str, set[str]] = defaultdict(set)
    for issue in quality:
        if issue.get("kind") != "anonymous_shape_type":
            continue
        for excerpt in issue.get("excerpts", []):
            for leaf in ANON_RE.findall(str(excerpt)):
                quality_uses[leaf].add(str(issue.get("function_address", "")))
    anon_rows: list[dict[str, Any]] = []
    seen_paths: set[str] = set()
    for row in anon_audit:
        path = row.get("anonymous_type", "")
        if not path or path in seen_paths:
            continue
        seen_paths.add(path)
        leaf = path.rsplit("/", 1)[-1]
        owner, provenance = owner_from_type_path(path)
        anon_rows.append({
            "type_path": path,
            "type_name": leaf,
            "owner": owner,
            "provenance": provenance,
            "length": row.get("length", ""),
            "defined_components": row.get("defined_components", ""),
            "usage_functions": ",".join(sorted(quality_uses.get(leaf, set()))),
            "merge_apply": 0,
            "rejection_reason": anon_reason(
                row, family_reason_by_type.get(path, ()), named_reason_by_type.get(path, ())
            ),
        })
    # Include any rendered anonymous type missing from the analyzer audit so the
    # queue is complete even if a future exporter gains a new anonymous family.
    for leaf, addresses in sorted(quality_uses.items()):
        candidates = type_by_leaf.get(leaf, [])
        paths = [str(item.get("path", leaf)) for item in candidates] or [leaf]
        for path in paths:
            if path in seen_paths:
                continue
            seen_paths.add(path)
            owner, provenance = owner_from_type_path(path)
            anon_rows.append({
                "type_path": path,
                "type_name": leaf,
                "owner": owner,
                "provenance": provenance,
                "length": candidates[0].get("length", "") if candidates else "",
                "defined_components": "",
                "usage_functions": ",".join(sorted(addresses)),
                "merge_apply": 0,
                "rejection_reason": "rendered anonymous identity is not covered by an exact safe merge proposal",
            })
    anon_rows.sort(key=lambda row: row["type_path"])
    write_tsv(
        recovery / "q059_anonymous_shape_review.tsv",
        ("type_path", "type_name", "owner", "provenance", "length",
         "defined_components", "usage_functions", "merge_apply", "rejection_reason"),
        anon_rows,
    )

    identity_rows: list[dict[str, Any]] = []
    functions = read_json(corpus / "functions.json")
    for function in functions:
        qualified = str(function.get("qualified_name", function.get("name", "")))
        if not GENERIC_FUNCTION_RE.search(qualified):
            continue
        identity_rows.append({
            "entity_kind": "function", "stable_identity": function.get("address", ""),
            "name": qualified, "owner": function.get("namespace", ""),
            "storage": function.get("signature", ""),
            "reason": "no exact debug string, source anchor, physical owner, or caller-family evidence proves an original semantic name",
        })
    for global_row in read_jsonl(corpus / "globals.jsonl"):
        name = str(global_row.get("name", ""))
        if not GENERIC_GLOBAL_RE.match(name):
            continue
        identity_rows.append({
            "entity_kind": "global", "stable_identity": global_row.get("address", ""),
            "name": name, "owner": "Global", "storage": global_row.get("type", ""),
            "reason": "machine storage role is known only at the recorded width or pointer boundary; no unique semantic owner/name is proven",
        })
    for type_row in type_rows:
        path = str(type_row.get("path", ""))
        for component in type_row.get("detail", {}).get("components", []):
            name = str(component.get("field_name", ""))
            if not GENERIC_FIELD_RE.match(name):
                continue
            offset = int(component.get("offset", 0))
            identity_rows.append({
                "entity_kind": "field", "stable_identity": f"{path}+0x{offset:X}",
                "name": name, "owner": path, "storage": component.get("type", ""),
                "reason": "offset and storage geometry are recovered, but no independent semantic producer/accessor anchor proves a field name",
            })
    identity_rows.sort(key=lambda row: (row["entity_kind"], row["stable_identity"]))
    write_tsv(
        recovery / "q059_generic_identity_review.tsv",
        ("entity_kind", "stable_identity", "name", "owner", "storage", "reason"),
        identity_rows,
    )

    proposal_reasons = {
        row.get("entry_address", ""): row.get("reason", "")
        for row in read_tsv(recovery / "unclaimed_code_proposals.tsv")
        if row.get("entry_address")
    }
    unclaimed_rows: list[dict[str, Any]] = []
    for row in read_jsonl(corpus / "unclaimed_ranges.jsonl"):
        non_padding = int(row.get("non_padding_bytes", 0))
        if non_padding <= 0 and row.get("classification") not in {"orphan_code", "unknown_nonpadding"}:
            continue
        start = str(row.get("start", ""))
        classification = str(row.get("classification", "unknown"))
        reason = proposal_reasons.get(start, "")
        if not reason:
            if classification == "orphan_code":
                reason = "isolated instruction lacks agreeing inbound control-flow and function-boundary evidence"
            elif classification == "unknown_nonpadding":
                reason = "non-padding bytes lack a complete referenced entry, prologue/epilogue, SEH, or closed stub proof"
            else:
                reason = "executable-range bytes remain data/padding/overlap or lack sufficient independent function-entry evidence"
        unclaimed_rows.append({
            "start": start, "end": row.get("end", ""), "length": row.get("length", ""),
            "classification": classification, "base_kind": row.get("base_kind", ""),
            "non_padding_bytes": non_padding,
            "inbound_call_refs": row.get("valid_relative_call_count", 0),
            "raw_pointer_refs": row.get("raw_inbound_pointer_count", 0),
            "create_apply": 0, "rejection_reason": reason,
        })
    unclaimed_rows.sort(key=lambda row: row["start"])
    write_tsv(
        recovery / "q059_unclaimed_review.tsv",
        ("start", "end", "length", "classification", "base_kind",
         "non_padding_bytes", "inbound_call_refs", "raw_pointer_refs",
         "create_apply", "rejection_reason"),
        unclaimed_rows,
    )

    frontier_files = (
        "pointer_shape_target_proposals.tsv", "pointer_shape_type_proposals.tsv",
        "type_family_proposals.tsv",
    )
    enabled_frontier = {
        name: proposal_enabled(read_tsv(recovery / name)) for name in frontier_files
    }
    confirmation_reports = (
        "pointer_shape_apply_report.tsv", "class_layout_apply_report.tsv",
        "global_aggregate_apply_report.tsv", "global_record_apply_report.tsv",
        "allocation_record_apply_report.tsv", "darray_element_apply_report.tsv",
        "type_family_apply_report.tsv",
    )
    mutating_rows = {
        name: apply_mutations(read_tsv(recovery / name)) for name in confirmation_reports
    }
    blockers = sum(int(row["compiler_blocker"]) or int(row["abi_blocker"]) for row in raw_rows)
    summary = {
        "schema": SCHEMA,
        "schema_version": SCHEMA_VERSION,
        "status": "passed" if not any(enabled_frontier.values()) and not any(mutating_rows.values()) and blockers == 0 else "failed",
        "program_semantic_sha256": program,
        "input_manifest_sha256": manifest,
        "source_manifest_sha256": compile_summary.get("source_manifest_sha256"),
        "compile": {
            "translation_units": int(compile_stats.get("translation_units", 0)),
            "passing_translation_units": int(compile_stats.get("passing_translation_units", 0)),
            "failing_translation_units": int(compile_stats.get("failing_translation_units", 0)),
            "errors": int(compile_stats.get("errors", 0)),
            "regression_gate": compile_summary.get("regression_gate", {}).get("status"),
        },
        "automatic_frontier": {
            "enabled_safe_proposals": enabled_frontier,
            "confirming_apply_mutations": mutating_rows,
        },
        "residuals": {
            "raw_pointer_offset_functions": len({row["function_address"] for row in raw_rows}),
            "raw_pointer_offset_occurrences": len(raw_rows),
            "raw_pointer_offset_classifications": dict(sorted(Counter(row["classification"] for row in raw_rows).items())),
            "raw_pointer_offset_compile_or_abi_blockers": blockers,
            "anonymous_shapes": len(anon_rows),
            "anonymous_shape_merge_candidates": sum(int(row["merge_apply"]) for row in anon_rows),
            "generic_identities": len(identity_rows),
            "meaningful_unclaimed_ranges": len(unclaimed_rows),
            "meaningful_unclaimed_bytes": sum(int(row["non_padding_bytes"]) for row in unclaimed_rows),
        },
        "policy": {
            "geometry_only_merge": "forbidden",
            "manual_or_imported_replacement": "forbidden",
            "source_generator_type_invention": "forbidden",
        },
    }
    write_json(recovery / "q059_closure_summary.json", summary)
    if summary["status"] != "passed":
        raise ClosureError(
            "Q-059 closure audit failed: safe frontier or confirming mutations remain"
        )
    return summary


def main() -> int:
    try:
        summary = run(make_parser().parse_args())
    except ClosureError as exc:
        print(f"Q-059 closure audit failed: {exc}", file=__import__("sys").stderr)
        return 1
    residuals = summary["residuals"]
    compile_stats = summary["compile"]
    print(
        "Q-059 closure audit passed: "
        f"TUs={compile_stats['passing_translation_units']}/{compile_stats['translation_units']}, "
        f"raw_offsets={residuals['raw_pointer_offset_occurrences']}, "
        f"anonymous_shapes={residuals['anonymous_shapes']}, "
        f"unclaimed_ranges={residuals['meaningful_unclaimed_ranges']}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
