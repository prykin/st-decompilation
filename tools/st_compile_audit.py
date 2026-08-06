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
SCHEMA_VERSION = 1
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

    def run(self) -> dict[str, Any]:
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
        self.write(summary, diagnostics)
        return summary

    def write(
        self, summary: dict[str, Any], diagnostics: Iterable[Diagnostic]
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
        audit = CompileAudit(
            source_tree=source_tree,
            output=output,
            compiler=arguments.compiler,
            jobs=arguments.jobs,
            error_limit=arguments.error_limit,
            include_warnings=arguments.include_warnings,
        )
        summary = audit.run()
        statistics = summary["statistics"]
        print(
            "Compile audit: "
            f"{statistics['passing_translation_units']}/"
            f"{statistics['translation_units']} translation units pass; "
            f"{statistics['errors']} errors; report={output}"
        )
        print(f"Total compile-audit time: {elapsed_text(time.monotonic() - start)}")
        return 0
    except (AuditError, OSError, subprocess.SubprocessError, ValueError) as error:
        print(f"error: {error}", file=sys.stderr)
        print(f"Total compile-audit time: {elapsed_text(time.monotonic() - start)}")
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
