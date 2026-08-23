import unittest
from pathlib import Path

from st_compile_audit import (
    CompileAudit,
    CompileResult,
    Diagnostic,
    SCHEMA_VERSION,
    compare_regression_snapshot,
    regression_snapshot,
)


class CompileAuditCommandTests(unittest.TestCase):
    def test_recovered_x86_source_uses_ilp32_data_model(self):
        audit = CompileAudit(
            source_tree=Path("/tmp/source-tree"),
            output=Path("/tmp/audit"),
            compiler="/usr/bin/clang++",
            jobs=1,
            error_limit=64,
            include_warnings=False,
        )

        command = audit.command(Path("/tmp/source-tree/source/unit.cpp"))

        self.assertEqual(3, SCHEMA_VERSION)
        self.assertIn("-m32", command)
        self.assertIn("-std=c++17", command)
        self.assertIn("-D_TIME_BITS=64", command)
        self.assertIn("-D_FILE_OFFSET_BITS=64", command)
        self.assertLess(command.index("-m32"), command.index("-fsyntax-only"))


class CompileRegressionTests(unittest.TestCase):
    @staticmethod
    def summary():
        return {
            "compiler": "clang version 18.1.3",
            "configuration": {
                "target_data_model": "ilp32",
                "pointer_width_bits": 32,
                "language": "c++17",
                "ms_extensions": True,
                "error_limit_per_translation_unit": 2,
                "warnings_included": False,
            },
            "source_manifest_sha256": "manifest",
            "input_manifest_sha256": "input",
            "program_semantic_sha256": "program",
        }

    @staticmethod
    def diagnostic(unit, kind, address="", message="problem"):
        return Diagnostic(
            translation_unit=unit,
            location=(
                f"decomp/ST.exe/functions/{address}/decomp.c"
                if address else unit
            ),
            line=10,
            column=2,
            severity="error",
            kind=kind,
            message=message,
            address=address,
        )

    def test_gate_rejects_address_family_growth_and_new_unaddressed_error(self):
        unit = "source/unit.cpp"
        baseline = regression_snapshot(self.summary(), [CompileResult(
            unit, 1, (self.diagnostic(unit, "call_arity", "00102030"),)
        )])
        current = regression_snapshot(self.summary(), [CompileResult(
            unit, 1, (
                self.diagnostic(unit, "call_arity", "00102030"),
                self.diagnostic(unit, "call_arity", "00102030"),
                self.diagnostic(unit, "undeclared_identifier", message="missing x"),
            )
        )])

        report = compare_regression_snapshot(baseline, current)

        self.assertEqual("failed", report["status"])
        kinds = {item["kind"] for item in report["regressions"]}
        self.assertIn("address_error_family_increased", kinds)
        self.assertIn("unaddressed_error_appeared", kinds)
        self.assertIn("translation_unit_newly_reached_error_limit", kinds)

    def test_gate_rejects_previously_passing_unit_and_accepts_improvement(self):
        unit = "source/unit.cpp"
        baseline = regression_snapshot(
            self.summary(), [CompileResult(unit, 0, ())]
        )
        failed = regression_snapshot(self.summary(), [CompileResult(
            unit, 1, (self.diagnostic(unit, "other", "00102030"),)
        )])
        improved = regression_snapshot(
            self.summary(), [CompileResult(unit, 0, ())]
        )

        self.assertEqual(
            "failed", compare_regression_snapshot(baseline, failed)["status"]
        )
        self.assertEqual(
            "passed", compare_regression_snapshot(baseline, improved)["status"]
        )

    def test_truncated_baseline_does_not_invent_new_address_families(self):
        unit = "source/large.cpp"
        baseline = regression_snapshot(self.summary(), [CompileResult(
            unit, 1, (
                self.diagnostic(unit, "old_family", "00102030"),
                self.diagnostic(unit, "diagnostic_limit", "00102030"),
            )
        )])
        current = regression_snapshot(self.summary(), [CompileResult(
            unit, 1, (self.diagnostic(unit, "exposed_family", "00102030"),)
        )])

        report = compare_regression_snapshot(baseline, current)

        self.assertEqual("passed", report["status"])


if __name__ == "__main__":
    unittest.main()
