#!/usr/bin/env python3
"""Compile every generated translation unit and emit an address-stable audit.

The audit is deliberately local by default.  It never edits the generated
source tree or Ghidra, and it writes no wall-clock timestamps.  Diagnostics are
normalized back to the stable function address carried by the generator's
``#line`` directives so broad source-assembly failures can be ranked without
depending on build-system fail-fast behavior.
"""

from __future__ import annotations

import argparse
import concurrent.futures
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import time
from collections import Counter
from dataclasses import dataclass
from pathlib import Path
from typing import Any, Iterable, Sequence


SCHEMA = "st-source-compile-audit"
SCHEMA_VERSION = 3
REGRESSION_SCHEMA = "st-source-compile-regression-baseline"
REGRESSION_SCHEMA_VERSION = 1
GENERATED_MARKER = ".st-generated-source-tree.json"
DIAGNOSTIC_RE = re.compile(
    r"^(.*?):(\d+):(\d+): (fatal error|error|warning|note): (.*)$"
)
FUNCTION_PATH_RE = re.compile(
    r"(?:^|/)decomp/ST\.exe/functions/([0-9A-Fa-f]{8})/decomp\.c$"
)
OPTION_RE = re.compile(r"\s+(\[-W[^]]+\])$")


class AuditError(RuntimeError):
    pass


@dataclass(frozen=True)
class Diagnostic:
    translation_unit: str
    location: str
    line: int
    column: int
    severity: str
    kind: str
    message: str
    option: str = ""
    address: str = ""

    def as_json(self) -> dict[str, Any]:
        result: dict[str, Any] = {
            "translation_unit": self.translation_unit,
            "location": self.location,
            "line": self.line,
            "column": self.column,
            "severity": self.severity,
            "kind": self.kind,
            "message": self.message,
        }
        if self.option:
            result["option"] = self.option
        if self.address:
            result["address"] = self.address
        return result


@dataclass(frozen=True)
class CompileResult:
    translation_unit: str
    return_code: int
    diagnostics: tuple[Diagnostic, ...]


def stable_unaddressed_key(diagnostic: Diagnostic) -> str:
    """Identify one compiler family without depending on generated line numbers."""
    return "\t".join((
        diagnostic.translation_unit,
        diagnostic.kind,
        re.sub(r"\s+", " ", diagnostic.message).strip(),
    ))


def regression_snapshot(
    summary: dict[str, Any], results: Sequence[CompileResult]
) -> dict[str, Any]:
    errors = [
        diagnostic
        for result in results for diagnostic in result.diagnostics
        if diagnostic.severity == "error"
    ]
    error_limit = int(
        summary["configuration"]["error_limit_per_translation_unit"]
    )
    units: dict[str, dict[str, Any]] = {}
    for result in sorted(results, key=lambda item: item.translation_unit):
        result_errors = [
            item for item in result.diagnostics if item.severity == "error"
        ]
        reached_limit = any(
            item.kind == "diagnostic_limit" for item in result_errors
        ) or bool(error_limit and len(result_errors) >= error_limit)
        units[result.translation_unit] = {
            "passed": result.return_code == 0,
            "errors": len(result_errors),
            "reached_error_limit": reached_limit,
        }
    addressed = Counter(
        (item.address, item.kind) for item in errors if item.address
    )
    address_translation_units: dict[str, set[str]] = {}
    for item in errors:
        if item.address:
            address_translation_units.setdefault(item.address, set()).add(
                item.translation_unit
            )
    unaddressed = Counter(
        stable_unaddressed_key(item) for item in errors if not item.address
    )
    return {
        "schema": REGRESSION_SCHEMA,
        "schema_version": REGRESSION_SCHEMA_VERSION,
        "compiler": summary["compiler"],
        "configuration": summary["configuration"],
        "source_manifest_sha256": summary["source_manifest_sha256"],
        "input_manifest_sha256": summary["input_manifest_sha256"],
        "program_semantic_sha256": summary["program_semantic_sha256"],
        "translation_units": units,
        "address_error_families": [
            {"address": address, "kind": kind, "count": count}
            for (address, kind), count in sorted(addressed.items())
        ],
        "address_translation_units": [
            {"address": address, "translation_units": sorted(units)}
            for address, units in sorted(address_translation_units.items())
        ],
        "unaddressed_error_families": [
            {"key": key, "count": count}
            for key, count in sorted(unaddressed.items())
        ],
    }


def compare_regression_snapshot(
    baseline: Mapping[str, Any], current: Mapping[str, Any]
) -> dict[str, Any]:
    if (baseline.get("schema") != REGRESSION_SCHEMA or
            int(baseline.get("schema_version", 0)) != REGRESSION_SCHEMA_VERSION):
        raise AuditError("unsupported compile-regression baseline schema")
    mismatches: list[str] = []
    if baseline.get("compiler") != current.get("compiler"):
        mismatches.append("compiler")
    if baseline.get("configuration") != current.get("configuration"):
        mismatches.append("configuration")
    if mismatches:
        raise AuditError(
            "compile-regression baseline is not comparable: " +
            ", ".join(mismatches)
        )

    regressions: list[dict[str, Any]] = []
    previous_units = baseline.get("translation_units", {})
    current_units = current.get("translation_units", {})
    for unit, previous in sorted(previous_units.items()):
        candidate = current_units.get(unit)
        if candidate is None:
            continue
        if bool(previous.get("passed")) and not bool(candidate.get("passed")):
            regressions.append({
                "kind": "previously_passing_translation_unit_failed",
                "translation_unit": unit,
            })
        if (not bool(previous.get("reached_error_limit")) and
                bool(candidate.get("reached_error_limit"))):
            regressions.append({
                "kind": "translation_unit_newly_reached_error_limit",
                "translation_unit": unit,
                "current_errors": int(candidate.get("errors", 0)),
            })

    def family_counts(
        value: Mapping[str, Any], field: str, key_fields: tuple[str, ...]
    ) -> dict[tuple[str, ...], int]:
        return {
            tuple(str(item.get(key, "")) for key in key_fields):
                int(item.get("count", 0))
            for item in value.get(field, ())
        }

    previous_addressed = family_counts(
        baseline, "address_error_families", ("address", "kind")
    )
    current_addressed = family_counts(
        current, "address_error_families", ("address", "kind")
    )
    # A translation unit which hit the compiler's diagnostic cap supplies only
    # a prefix of its error families.  Once a candidate brings that unit below
    # the cap, a family absent from the truncated prefix is not evidence of a
    # new regression.  Keep the stronger TU-level guards above, and compare
    # address families only for baselines whose diagnostics were complete.
    capped_baseline_units = {
        unit for unit, detail in previous_units.items()
        if bool(detail.get("reached_error_limit"))
    }
    address_units: dict[str, set[str]] = {}
    for result in current.get("address_translation_units", ()):  # v2+
        address_units[str(result.get("address", ""))] = set(
            map(str, result.get("translation_units", ()))
        )
    for (address, kind), count in sorted(current_addressed.items()):
        old = previous_addressed.get((address, kind), 0)
        if count > old:
            units = address_units.get(address, set())
            if units and units <= capped_baseline_units:
                continue
            regressions.append({
                "kind": "address_error_family_increased",
                "address": address,
                "diagnostic_kind": kind,
                "baseline_count": old,
                "current_count": count,
            })

    previous_unaddressed = family_counts(
        baseline, "unaddressed_error_families", ("key",)
    )
    current_unaddressed = family_counts(
        current, "unaddressed_error_families", ("key",)
    )
    for (key,), count in sorted(current_unaddressed.items()):
        old = previous_unaddressed.get((key,), 0)
        if count > old:
            regressions.append({
                "kind": "unaddressed_error_appeared",
                "family": key,
                "baseline_count": old,
                "current_count": count,
            })
    return {
        "schema": "st-source-compile-regression-report",
        "schema_version": 1,
        "status": "failed" if regressions else "passed",
        "baseline_source_manifest_sha256": baseline.get(
            "source_manifest_sha256", ""
        ),
        "current_source_manifest_sha256": current.get(
            "source_manifest_sha256", ""
        ),
        "regressions": regressions,
    }


def json_dump(value: Any) -> str:
    return json.dumps(value, ensure_ascii=False, indent=2, sort_keys=True) + "\n"


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def elapsed_text(seconds: float) -> str:
    total = max(0, int(seconds + 0.5))
    hours, remainder = divmod(total, 3600)
    minutes, seconds = divmod(remainder, 60)
    return f"{hours:02d}:{minutes:02d}:{seconds:02d}"


def classify(message: str) -> str:
    checks = (
        ("missing_record_member", "no member named"),
        ("scalar_subscript", "subscripted value is not an array"),
        ("non_callable_value", "is not a function or function pointer"),
        ("non_callable_value", "called object type"),
        ("pointer_indirection", "indirection requires pointer operand"),
        ("pointer_indirection", "does not allow indirection on operand"),
        ("undeclared_identifier", "use of undeclared identifier"),
        ("call_argument_type", "cannot initialize a parameter of type"),
        ("return_type", "cannot initialize return object of type"),
        ("assignment_type", "assigning to"),
        ("assignment_type", "incompatible pointer to integer conversion"),
        ("assignment_type", "incompatible integer to pointer conversion"),
        ("invalid_operands", "invalid operands to binary expression"),
        ("invalid_cast", "cannot cast from type"),
        ("call_arity", "too many arguments to function call"),
        ("call_arity", "too few arguments to function call"),
        ("call_arity", "no matching function for call"),
        ("macro_arity", "function-like macro invocation"),
        ("diagnostic_limit", "too many errors emitted"),
        ("syntax", "expected expression"),
        ("syntax", "expected ';'"),
        ("syntax", "expected ')'"),
    )
    lowered = message.lower()
    for kind, needle in checks:
        if needle in lowered:
            return kind
    return "other"


class CompileAudit:
    def __init__(
        self,
        source_tree: Path,
        output: Path,
        compiler: str,
        jobs: int,
        error_limit: int,
        include_warnings: bool,
    ):
        self.source_tree = source_tree
        self.output = output
        self.compiler = compiler
        self.jobs = jobs
        self.error_limit = error_limit
        self.include_warnings = include_warnings
        self.source_manifest_path = source_tree / "source_manifest.json"
        self.source_manifest: dict[str, Any] = {}
        self.compiler_version = ""

    def validate(self) -> list[Path]:
        marker = self.source_tree / GENERATED_MARKER
        if not marker.is_file() or not self.source_manifest_path.is_file():
            raise AuditError(f"not a generated source tree: {self.source_tree}")
        self.source_manifest = json.loads(
            self.source_manifest_path.read_text(encoding="utf-8")
        )
        for item in self.source_manifest.get("files", ()):
            path = self.source_tree / item["path"]
            if not path.is_file():
                raise AuditError(f"generated file is missing: {path}")
            actual = sha256_file(path)
            if actual != item["sha256"]:
                raise AuditError(
                    f"generated file hash mismatch: {path}; "
                    f"manifest={item['sha256']}, actual={actual}"
                )
        units = sorted((self.source_tree / "source").rglob("*.cpp"))
        if not units:
            raise AuditError(f"no translation units under {self.source_tree / 'source'}")
        compiler_path = shutil.which(self.compiler)
        if compiler_path is None:
            raise AuditError(f"compiler not found: {self.compiler}")
        self.compiler = compiler_path
        version = subprocess.run(
            [self.compiler, "--version"],
            check=False,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
        )
        self.compiler_version = (version.stdout.splitlines() or [""])[0].strip()
        return units

    def command(self, unit: Path) -> list[str]:
        return [
            self.compiler,
            # The recovered ABI is 32-bit MSVC/x86.  Syntax-checking it with the
            # 64-bit host data model manufactures pointer-to-int truncation
            # diagnostics and hides the actual recovery queue.
            "-m32",
            # Keep glibc's time_t ABI compatible with the recovered 64-bit
            # MSVC scalar without changing the generated game type.
            "-D_TIME_BITS=64",
            "-D_FILE_OFFSET_BITS=64",
            "-std=c++17",
            "-fms-extensions",
            "-fsyntax-only",
            f"-ferror-limit={self.error_limit}",
            "-fdiagnostics-color=never",
            "-fno-caret-diagnostics",
            "-Wno-writable-strings",
            "-I",
            str(self.source_tree / "include"),
            str(unit),
        ]

    def normalize_location(self, location: str) -> str:
        result = location.replace("\\", "/")
        source_text = str(self.source_tree).replace("\\", "/")
        if result.startswith(source_text + "/"):
            return result[len(source_text) + 1:]
        return result

    def compile_one(self, unit: Path) -> CompileResult:
        relative = unit.relative_to(self.source_tree).as_posix()
        process = subprocess.run(
            self.command(unit),
            check=False,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
        )
        diagnostics: list[Diagnostic] = []
        for line in process.stdout.splitlines():
            match = DIAGNOSTIC_RE.match(line)
            if not match:
                continue
            location, raw_line, raw_column, severity, message = match.groups()
            if severity == "note":
                continue
            if severity == "warning" and not self.include_warnings:
                continue
            option = ""
            option_match = OPTION_RE.search(message)
            if option_match:
                option = option_match.group(1)
                message = message[:option_match.start()]
            normalized_location = self.normalize_location(location)
            address_match = FUNCTION_PATH_RE.search(normalized_location)
            diagnostics.append(Diagnostic(
                translation_unit=relative,
                location=normalized_location,
                line=int(raw_line),
                column=int(raw_column),
                severity="error" if severity == "fatal error" else severity,
                kind=classify(message),
                message=message,
                option=option,
                address=address_match.group(1).upper() if address_match else "",
            ))
        if process.returncode and not any(
            item.severity == "error" for item in diagnostics
        ):
            diagnostics.append(Diagnostic(
                translation_unit=relative,
                location=relative,
                line=0,
                column=0,
                severity="error",
                kind="compiler_driver_failure",
                message=f"compiler exited with status {process.returncode}",
            ))
        return CompileResult(relative, process.returncode, tuple(diagnostics))

    def run(
        self, baseline: Mapping[str, Any] | None = None
    ) -> tuple[dict[str, Any], dict[str, Any], dict[str, Any]]:
        units = self.validate()
        with concurrent.futures.ThreadPoolExecutor(max_workers=self.jobs) as pool:
            results = list(pool.map(self.compile_one, units))
        diagnostics = sorted(
            (item for result in results for item in result.diagnostics),
            key=lambda item: (
                item.severity, item.kind, item.address, item.location, item.line,
                item.column, item.translation_unit, item.message,
            ),
        )
        failed = sum(result.return_code != 0 for result in results)
        errors = [item for item in diagnostics if item.severity == "error"]
        warnings = [item for item in diagnostics if item.severity == "warning"]
        kind_counts = Counter(item.kind for item in errors)
        addressed_errors = sum(bool(item.address) for item in errors)
        summary = {
            "schema": SCHEMA,
            "schema_version": SCHEMA_VERSION,
            "source_manifest_sha256": sha256_file(self.source_manifest_path),
            "input_manifest_sha256": self.source_manifest.get(
                "input_manifest_sha256", ""
            ),
            "program_semantic_sha256": self.source_manifest.get(
                "program_semantic_sha256", ""
            ),
            "compiler": self.compiler_version,
            "configuration": {
                "target_data_model": "ilp32",
                "pointer_width_bits": 32,
                "language": "c++17",
                "ms_extensions": True,
                "error_limit_per_translation_unit": self.error_limit,
                "warnings_included": self.include_warnings,
            },
            "statistics": {
                "translation_units": len(results),
                "passing_translation_units": len(results) - failed,
                "failing_translation_units": failed,
                "errors": len(errors),
                "addressed_errors": addressed_errors,
                "unaddressed_errors": len(errors) - addressed_errors,
                "warnings": len(warnings),
            },
            "error_kind_counts": dict(sorted(kind_counts.items())),
        }
        snapshot = regression_snapshot(summary, results)
        regression = (
            compare_regression_snapshot(baseline, snapshot)
            if baseline is not None else {
                "schema": "st-source-compile-regression-report",
                "schema_version": 1,
                "status": "not_configured",
                "baseline_source_manifest_sha256": "",
                "current_source_manifest_sha256": snapshot[
                    "source_manifest_sha256"
                ],
                "regressions": [],
            }
        )
        summary["regression_gate"] = {
            "status": regression["status"],
            "regressions": len(regression["regressions"]),
        }
        self.write(summary, diagnostics, snapshot, regression)
        return summary, snapshot, regression

    def write(
        self,
        summary: dict[str, Any],
        diagnostics: Iterable[Diagnostic],
        snapshot: Mapping[str, Any],
        regression: Mapping[str, Any],
    ) -> None:
        self.output.parent.mkdir(parents=True, exist_ok=True)
        staging = self.output.parent / f".{self.output.name}.staging-{os.getpid()}"
        if staging.exists():
            shutil.rmtree(staging)
        staging.mkdir()
        try:
            (staging / "summary.json").write_text(
                json_dump(summary), encoding="utf-8"
            )
            (staging / "issues.jsonl").write_text(
                "".join(
                    json.dumps(item.as_json(), ensure_ascii=False, sort_keys=True)
                    + "\n"
                    for item in diagnostics
                ),
                encoding="utf-8",
            )
            (staging / "regression_snapshot.json").write_text(
                json_dump(snapshot), encoding="utf-8"
            )
            (staging / "regression_report.json").write_text(
                json_dump(regression), encoding="utf-8"
            )
            if self.output.exists():
                shutil.rmtree(self.output)
            os.replace(staging, self.output)
        except Exception:
            if staging.exists():
                shutil.rmtree(staging)
            raise


def parse_args(argv: Sequence[str]) -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source-tree", help="generated source tree")
    parser.add_argument("--output", help="audit output directory")
    parser.add_argument("--compiler", default="clang++", help="C++ compiler")
    parser.add_argument(
        "--jobs", type=int, default=min(8, os.cpu_count() or 1),
        help="parallel compiler processes",
    )
    parser.add_argument(
        "--error-limit", type=int, default=64,
        help="maximum errors recorded per translation unit (0 is unlimited)",
    )
    parser.add_argument(
        "--include-warnings", action="store_true",
        help="retain warnings in issues.jsonl",
    )
    parser.add_argument(
        "--baseline",
        help="tracked deterministic compile-regression baseline",
    )
    parser.add_argument(
        "--no-regression-gate", action="store_true",
        help="do not load or compare the configured regression baseline",
    )
    parser.add_argument(
        "--update-baseline", action="store_true",
        help="replace the baseline with this passed/not-configured snapshot",
    )
    return parser.parse_args(argv)


def main(argv: Sequence[str] = ()) -> int:
    arguments = parse_args(argv or sys.argv[1:])
    start = time.monotonic()
    try:
        repo = Path(__file__).resolve().parent.parent
        source_tree = (
            Path(arguments.source_tree).resolve()
            if arguments.source_tree else repo / "src" / "ST.exe"
        )
        output = (
            Path(arguments.output).resolve()
            if arguments.output
            else repo / ".st-local" / "source-compile-audit" / source_tree.name
        )
        if arguments.jobs < 1:
            raise AuditError("--jobs must be positive")
        if arguments.error_limit < 0:
            raise AuditError("--error-limit must be non-negative")
        baseline_path = (
            Path(arguments.baseline).resolve()
            if arguments.baseline else
            repo / "config" / "source-compile-regression-baseline.json"
        )
        baseline: Mapping[str, Any] | None = None
        if not arguments.no_regression_gate and baseline_path.is_file():
            baseline = json.loads(baseline_path.read_text(encoding="utf-8"))
        audit = CompileAudit(
            source_tree=source_tree,
            output=output,
            compiler=arguments.compiler,
            jobs=arguments.jobs,
            error_limit=arguments.error_limit,
            include_warnings=arguments.include_warnings,
        )
        summary, snapshot, regression = audit.run(baseline)
        statistics = summary["statistics"]
        print(
            "Compile audit: "
            f"{statistics['passing_translation_units']}/"
            f"{statistics['translation_units']} translation units pass; "
            f"{statistics['errors']} errors; report={output}"
        )
        print(
            "Compile regression gate: "
            f"{regression['status']}; "
            f"regressions={len(regression['regressions'])}"
        )
        if arguments.update_baseline:
            if regression["status"] == "failed":
                raise AuditError(
                    "refusing to update a failed compile-regression baseline"
                )
            baseline_path.parent.mkdir(parents=True, exist_ok=True)
            baseline_path.write_text(json_dump(snapshot), encoding="utf-8")
            print(f"Compile regression baseline updated: {baseline_path}")
        print(f"Total compile-audit time: {elapsed_text(time.monotonic() - start)}")
        return 1 if regression["status"] == "failed" else 0
    except (AuditError, OSError, subprocess.SubprocessError, ValueError) as error:
        print(f"error: {error}", file=sys.stderr)
        print(f"Total compile-audit time: {elapsed_text(time.monotonic() - start)}")
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
