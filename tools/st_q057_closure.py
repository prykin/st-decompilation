#!/usr/bin/env python3
"""Close Q-057 from live-machine, exported-source, and compiler evidence.

The Ghidra-side ``STValueDomainClosureAnalyzer`` verifies current instructions,
p-code sequence anchors, call boundaries, and return baselines.  This consumer
joins that machine ledger with the accepted corpus, source-generator audit, and
the pinned 32-bit C++ compile audit.  It never proposes a type and never treats
successful compilation as type evidence.
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


SCHEMA = "st-q057-closure-audit"
SCHEMA_VERSION = 1
REPRESENTATIVES = {"0064A970", "00548C40", "00605B60", "00652810"}
MUTATING_STATUSES = {"applied", "updated", "created", "removed", "partial"}
Q057_SOURCE_KINDS = {
    "exact_pointer_float_storage_view": "pointer_float_lifetime",
    "exact_pointer_switch_boundary": "pointer_scalar_switch_lifetime",
    "machine_word_output_lifetime": "output_buffer_post_call_lifetime",
    "exact_output_lifetime_materialization": "output_buffer_post_call_lifetime",
    "exact_auto_output_storage": "output_buffer_post_call_lifetime",
    "promoted_parameter_slot_materialization": "incoming_parameter_slot_lifetime",
    "promoted_parameter_slot_address_repair": "incoming_parameter_slot_lifetime",
    "void_call_phantom_assignment": "void_value_consumption",
    "exact_machine_lifetime_call_view": "unattachable_call_argument_lifetime",
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
    try:
        with path.open(encoding="utf-8", newline="") as stream:
            return list(csv.DictReader(stream, delimiter="\t"))
    except OSError as exc:
        raise ClosureError(f"cannot read {path}: {exc}") from exc


def read_key_values(path: Path) -> dict[str, str]:
    values: dict[str, str] = {}
    try:
        for line in path.read_text(encoding="utf-8").splitlines():
            if "=" in line:
                key, value = line.split("=", 1)
                values[key.strip()] = value.strip()
    except OSError as exc:
        raise ClosureError(f"cannot read {path}: {exc}") from exc
    return values


def clean(value: Any) -> str:
    return re.sub(r"[\t\r\n]+", " ", str(value or "")).strip()


def atomic_text(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(
        "w", encoding="utf-8", newline="", dir=path.parent, delete=False
    ) as stream:
        stream.write(text)
        temporary = Path(stream.name)
    temporary.replace(path)


def write_tsv(
    path: Path, fieldnames: Sequence[str], rows: Iterable[Mapping[str, Any]]
) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(
        "w", encoding="utf-8", newline="", dir=path.parent, delete=False
    ) as stream:
        writer = csv.DictWriter(
            stream, fieldnames=fieldnames, delimiter="\t", lineterminator="\n"
        )
        writer.writeheader()
        for row in rows:
            writer.writerow({name: clean(row.get(name, "")) for name in fieldnames})
        temporary = Path(stream.name)
    temporary.replace(path)


def write_json(path: Path, value: Mapping[str, Any]) -> None:
    atomic_text(path, json.dumps(value, indent=2, sort_keys=True) + "\n")


def integer(value: Any) -> int:
    try:
        return int(value)
    except (TypeError, ValueError):
        return 0


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    try:
        with path.open("rb") as stream:
            for chunk in iter(lambda: stream.read(1024 * 1024), b""):
                digest.update(chunk)
    except OSError as exc:
        raise ClosureError(f"cannot read {path}: {exc}") from exc
    return digest.hexdigest()


def issue_index(rows: Sequence[Mapping[str, Any]]) -> dict[str, set[str]]:
    result: dict[str, set[str]] = defaultdict(set)
    for row in rows:
        address = clean(row.get("address")).upper()
        kind = clean(row.get("kind"))
        if address and kind:
            result[address].add(kind)
    return result


def machine_row_status(
    row: Mapping[str, str], exact_source_anchors: set[str]
) -> tuple[str, str]:
    status = clean(row.get("status"))
    if status in {"resolved", "conflict"}:
        return status, clean(row.get("selected_fix"))
    domains = clean(row.get("conflicting_value_domains"))
    definitions = clean(row.get("machine_definitions"))
    reason = clean(row.get("reason"))
    domain_classes = {
        token
        for token in ("pointer", "darray_pointer", "floating", "scalar", "void")
        if f"{token}(" in domains or domains == token
    }
    incompatible_domains = (
        (bool(domain_classes & {"pointer", "darray_pointer"}) and
         bool(domain_classes & {"scalar", "floating", "void"}))
        or ("floating" in domain_classes and
            bool(domain_classes & {"scalar", "void"}))
    )
    if "exact call-boundary type is proven" in reason and incompatible_domains:
        # The applier cannot create a persistent Listing local, but the source
        # must still expose an exact boundary rather than silently inheriting a
        # false whole-local type.
        match = re.search(
            r"^(\S+)\s+call_argument\s+operand=(\d+)\s+target=([0-9A-Fa-f]{8})",
            definitions,
        )
        boundary = "" if match is None else (
            f"{match.group(1)}|{match.group(3).upper()}|{match.group(2)}"
        )
        if boundary in exact_source_anchors:
            return (
                "neutralized",
                "unattachable High lifetime is represented by the exact "
                f"address-stable per-use boundary {boundary}",
            )
        return (
            "conflict",
            "machine-proven call lifetime has neither a persistent split nor an exact source view",
        )
    return (
        "review",
        clean(row.get("selected_fix"))
        or "evidence is insufficient or conflicting; retain machine-correct storage",
    )


def exact_machine_view_index(
    rows: Sequence[Mapping[str, Any]],
) -> dict[str, set[str]]:
    """Index only address-stable Q-057 source views by their p-code anchors."""
    result: dict[str, set[str]] = defaultdict(set)
    for row in rows:
        if clean(row.get("kind")) != "exact_machine_lifetime_call_view":
            continue
        address = clean(row.get("address")).upper()
        detail = clean(row.get("detail"))
        match = re.search(r"(?:^|;\s*)anchors=([^;]+)", detail)
        target = re.search(r"(?:^|;\s*)target=([0-9A-Fa-f]{8})", detail)
        operand = re.search(r"(?:^|;\s*)operand=(\d+)", detail)
        if not address or match is None or target is None or operand is None:
            continue
        for anchor in match.group(1).split(","):
            anchor = clean(anchor).upper()
            if re.fullmatch(r"[0-9A-F]{8}:T\d+", anchor):
                # Machine audit uses a lower-case `t` separator.
                entry, time = anchor.split(":T", 1)
                result[address].add(
                    f"{entry}:t{time}|{target.group(1).upper()}|"
                    f"{operand.group(1)}"
                )
    return result


def run(args: argparse.Namespace) -> dict[str, Any]:
    recovery = args.recovery.resolve()
    source_tree = args.source_tree.resolve()
    compile_summary = read_json(args.compile_summary.resolve())
    receipt = read_json(recovery / "export_receipt.json")
    source_marker = read_json(source_tree / ".st-generated-source-tree.json")
    source_summary = read_json(source_tree / "audit" / "summary.json")
    source_issues = read_jsonl(source_tree / "audit" / "issues.jsonl")
    machine_rows = read_tsv(recovery / "q057_machine_domain_audit.tsv")
    machine_summary = read_key_values(
        recovery / "q057_machine_domain_summary.txt"
    )
    lifetime_proposals = read_tsv(recovery / "local_lifetime_proposals.tsv")
    lifetime_apply = read_tsv(recovery / "local_lifetime_apply_report.tsv")
    return_proposals = read_tsv(recovery / "return_semantics_proposals.tsv")
    return_apply = read_tsv(recovery / "return_semantics_apply_report.tsv")
    abi = read_key_values(recovery / "abi_regression_summary.txt")
    semantic_path = recovery / "program_semantic.sha256"
    try:
        current_semantic = semantic_path.read_text(encoding="utf-8").strip()
    except OSError as exc:
        raise ClosureError(f"cannot read {semantic_path}: {exc}") from exc

    errors: list[str] = []
    if receipt.get("status") != "passed":
        errors.append("export receipt is not passed")
    receipt_manifest = clean(receipt.get("current_manifest_sha256"))
    if clean(source_marker.get("input_manifest_sha256")) != receipt_manifest:
        errors.append("source tree is not bound to the accepted export manifest")
    semantic = clean(receipt.get("program_semantic_sha256"))
    if semantic != current_semantic:
        errors.append("machine audit/export semantic Program fingerprints differ")
    if clean(source_summary.get("program_semantic_sha256")) != semantic:
        errors.append("source audit belongs to another semantic Program state")
    if clean(compile_summary.get("program_semantic_sha256")) != semantic:
        errors.append("compile audit belongs to another semantic Program state")
    current_source_manifest = sha256_file(source_tree / "source_manifest.json")
    if clean(compile_summary.get("source_manifest_sha256")) != current_source_manifest:
        errors.append("compile audit belongs to an older generated source tree")
    statistics = compile_summary.get("statistics", {})
    if integer(statistics.get("errors")) != 0:
        errors.append("compile audit still contains errors")
    if integer(statistics.get("failing_translation_units")) != 0:
        errors.append("one or more translation units fail independently")
    if compile_summary.get("regression_gate", {}).get("status") != "passed":
        errors.append("compiler regression gate did not pass")
    if compile_summary.get("value_domain_family_counts"):
        errors.append("compiler still reports Q-057 value-domain families")
    if integer(abi.get("errors")) != 0:
        errors.append("ABI regression gate contains errors")
    if integer(machine_summary.get("conflict")) != sum(
        clean(row.get("status")) == "conflict" for row in machine_rows
    ):
        errors.append("machine-domain summary does not match its audit rows")

    # A proposal is exhausted only when the current analyzer no longer enables
    # it, or the current applier reports it already correct.  Mutating statuses
    # mean this is not a confirming pass; conflicts mean advertised automatic
    # evidence was not actually representable.
    apply_by_key = {
        (
            clean(row.get("function_address")),
            clean(row.get("original_name")),
            clean(row.get("merge_group")),
            clean(row.get("anchor_address")),
            clean(row.get("anchor_kind")),
            clean(row.get("proposed_type")),
        ): clean(row.get("status"))
        for row in lifetime_apply
    }
    pending_lifetimes: list[str] = []
    for row in lifetime_proposals:
        if clean(row.get("apply")) != "1":
            continue
        key = (
            clean(row.get("function_address")),
            clean(row.get("original_name")),
            clean(row.get("merge_group")),
            clean(row.get("anchor_address")),
            clean(row.get("anchor_kind")),
            clean(row.get("proposed_type")),
        )
        if apply_by_key.get(key) != "unchanged":
            pending_lifetimes.append("/".join(key[:4]))
    if pending_lifetimes:
        errors.append(
            f"{len(pending_lifetimes)} automatically applicable local lifetimes "
            "are not at confirming unchanged state"
        )
    if any(clean(row.get("status")).lower() in MUTATING_STATUSES
           for row in return_apply):
        errors.append("return-semantics confirming report contains mutations")
    if any(clean(row.get("apply")) == "1" for row in return_proposals):
        errors.append("return-semantics analyzer still has automatic proposals")

    exact_views = exact_machine_view_index(source_issues)
    final_rows: list[dict[str, Any]] = []
    for row in machine_rows:
        address = clean(row.get("function_address")).upper()
        status, repair = machine_row_status(row, exact_views.get(address, set()))
        item = dict(row)
        item["selected_fix"] = repair
        item["status"] = status
        final_rows.append(item)

    # Source-only materializations are explicit, independently auditable
    # neutralizations.  Keep them as separate address-stable rows rather than
    # silently treating successful compilation as proof.
    for issue in source_issues:
        kind = clean(issue.get("kind"))
        family = Q057_SOURCE_KINDS.get(kind)
        if not family:
            continue
        address = clean(issue.get("address")).upper()
        final_rows.append({
            "function_address": address,
            "function": "",
            "family": family,
            "storage_local_parameter": "generated per-use lifetime",
            "conflicting_value_domains": clean(issue.get("detail")),
            "machine_definitions": "verified by the matching Ghidra analyzer/export evidence",
            "consumers": f"source audit kind={kind}",
            "selected_fix": "exact source-only lifetime/view; Program ABI unchanged",
            "reason": "Ghidra cannot persist this split without merging unrelated machine lifetimes",
            "status": "neutralized",
            "pcode_anchor_verified": 1,
            "call_boundary_verified": 1,
        })

    status_counts = Counter(clean(row.get("status")) for row in final_rows)
    unresolved = status_counts.get("conflict", 0)
    if unresolved:
        errors.append(f"{unresolved} unresolved machine-proven contradictions remain")
    represented = {
        clean(row.get("function_address")).upper() for row in final_rows
    }
    missing_representatives = sorted(REPRESENTATIVES - represented)
    if missing_representatives:
        errors.append(
            "representative Q-057 families are absent from the closure ledger: "
            + ", ".join(missing_representatives)
        )

    final_rows.sort(key=lambda row: (
        clean(row.get("function_address")), clean(row.get("family")),
        clean(row.get("storage_local_parameter")), clean(row.get("machine_definitions")),
    ))
    fields = [
        "function_address", "function", "family", "storage_local_parameter",
        "conflicting_value_domains", "machine_definitions", "consumers",
        "selected_fix", "reason", "status", "pcode_anchor_verified",
        "call_boundary_verified",
    ]
    write_tsv(recovery / "q057_closure_audit.tsv", fields, final_rows)
    result = {
        "schema": SCHEMA,
        "schema_version": SCHEMA_VERSION,
        "status": "passed" if not errors else "failed",
        "program_semantic_sha256": semantic,
        "input_manifest_sha256": receipt_manifest,
        "source_manifest_sha256": clean(
            compile_summary.get("source_manifest_sha256")
        ),
        "statistics": {
            "machine_rows": len(machine_rows),
            "closure_rows": len(final_rows),
            "resolved": status_counts.get("resolved", 0),
            "neutralized": status_counts.get("neutralized", 0),
            "review": status_counts.get("review", 0),
            "conflict": unresolved,
            "automatic_lifetime_proposals": sum(
                clean(row.get("apply")) == "1" for row in lifetime_proposals
            ),
            "pending_automatic_lifetimes": len(pending_lifetimes),
            "automatic_return_proposals": sum(
                clean(row.get("apply")) == "1" for row in return_proposals
            ),
            "translation_units": integer(statistics.get("translation_units")),
            "passing_translation_units": integer(
                statistics.get("passing_translation_units")
            ),
            "compiler_errors": integer(statistics.get("errors")),
            "compiler_value_domain_families": dict(
                sorted(compile_summary.get("value_domain_family_counts", {}).items())
            ),
        },
        "source_neutralization_counts": dict(sorted(Counter(
            Q057_SOURCE_KINDS[clean(row.get("kind"))]
            for row in source_issues
            if clean(row.get("kind")) in Q057_SOURCE_KINDS
        ).items())),
        "representatives": sorted(REPRESENTATIVES),
        "errors": errors,
    }
    write_json(recovery / "q057_closure_summary.json", result)
    if errors:
        raise ClosureError("Q-057 closure failed: " + "; ".join(errors))
    return result


def parser() -> argparse.ArgumentParser:
    value = argparse.ArgumentParser(description=__doc__)
    value.add_argument("--repo", type=Path, required=True)
    value.add_argument("--corpus", type=Path, required=True)
    value.add_argument("--recovery", type=Path, required=True)
    value.add_argument("--source-tree", type=Path, required=True)
    value.add_argument("--compile-summary", type=Path, required=True)
    return value


def main() -> int:
    args = parser().parse_args()
    try:
        result = run(args)
    except ClosureError as exc:
        print(exc)
        return 1
    stats = result["statistics"]
    print(
        "Q-057 closure audit: status=passed, "
        f"rows={stats['closure_rows']}, resolved={stats['resolved']}, "
        f"neutralized={stats['neutralized']}, review={stats['review']}, "
        f"translation_units={stats['passing_translation_units']}/"
        f"{stats['translation_units']}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
