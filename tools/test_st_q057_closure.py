#!/usr/bin/env python3

import importlib.util
import unittest
from pathlib import Path


MODULE_PATH = Path(__file__).with_name("st_q057_closure.py")
SPEC = importlib.util.spec_from_file_location("st_q057_closure", MODULE_PATH)
assert SPEC and SPEC.loader
MODULE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(MODULE)


class Q057ClosureTests(unittest.TestCase):
    def test_machine_conflict_is_never_hidden_by_source_view(self) -> None:
        status, _ = MODULE.machine_row_status(
            {"status": "conflict", "selected_fix": "failed"},
            {"00401000:t1|00500000|0"},
        )
        self.assertEqual("conflict", status)

    def test_unattachable_proven_boundary_requires_exact_source_view(self) -> None:
        row = {
            "status": "review",
            "conflicting_value_domains": "pointer(/char) -> scalar(/uint)",
            "machine_definitions": "0064BF21:t1 call_argument operand=1 target=006ACF50",
            "reason": "exact call-boundary type is proven, but no same-width "
                      "transparent p-code path reattaches that argument",
        }
        status, _ = MODULE.machine_row_status(
            row, {"0064BF21:t1|006ACF50|1"}
        )
        self.assertEqual("neutralized", status)
        status, _ = MODULE.machine_row_status(row, set())
        self.assertEqual("conflict", status)

    def test_unrelated_anchor_cannot_close_machine_row(self) -> None:
        row = {
            "status": "review",
            "conflicting_value_domains": "pointer(/char) -> scalar(/uint)",
            "machine_definitions": "0064BF21:t1 call_argument operand=1 target=006ACF50",
            "reason": "exact call-boundary type is proven, but no same-width "
                      "transparent p-code path reattaches that argument",
        }
        status, _ = MODULE.machine_row_status(
            row, {"0064BF21:t1|006ACF50|2"}
        )
        self.assertEqual("conflict", status)

    def test_exact_machine_view_index_uses_detail_anchors(self) -> None:
        index = MODULE.exact_machine_view_index([{
            "address": "00401000",
            "kind": "exact_machine_lifetime_call_view",
            "detail": "anchors=00401010:t7,00401020:t9; target=00500000; operand=1",
        }, {
            "address": "00401000",
            "kind": "exact_pointer_boundary_cast",
            "detail": "anchors=00409999:t1",
        }])
        self.assertEqual(
            {
                "00401010:t7|00500000|1",
                "00401020:t9|00500000|1",
            },
            index["00401000"],
        )

    def test_ambiguous_review_remains_review(self) -> None:
        status, _ = MODULE.machine_row_status({
            "status": "review",
            "conflicting_value_domains": "pointer(/A) -> pointer(/B)",
            "machine_definitions": "00401000:t2 typed_copy operand=0 target=",
            "reason": "incompatible exact lifetime types",
        }, set())
        self.assertEqual("review", status)

    def test_machine_word_scalar_refinement_remains_review(self) -> None:
        status, _ = MODULE.machine_row_status({
            "status": "review",
            "conflicting_value_domains": "scalar(/undefined4) -> scalar(/ulong)",
            "machine_definitions": "00761992:t63 call_argument operand=1 target=00500000",
            "reason": "exact call-boundary type is proven, but no same-width "
                      "transparent p-code path reattaches that argument",
        }, set())
        self.assertEqual("review", status)


if __name__ == "__main__":
    unittest.main()
