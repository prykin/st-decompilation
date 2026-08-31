#!/usr/bin/env python3

import importlib.util
import tempfile
import unittest
from pathlib import Path


MODULE_PATH = Path(__file__).with_name("st_q059_closure.py")
SPEC = importlib.util.spec_from_file_location("st_q059_closure", MODULE_PATH)
assert SPEC and SPEC.loader
MODULE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(MODULE)


class Q059ClosureTests(unittest.TestCase):
    def test_runtime_darray_stride_wins(self) -> None:
        kind, _ = MODULE.raw_offset_classification(
            ["p = (int *)(array->elementSize * index + (int)array->data);"]
        )
        self.assertEqual(kind, "dynamic_darray_or_runtime_stride")

    def test_misaligned_wide_access_is_packed(self) -> None:
        kind, _ = MODULE.raw_offset_classification(
            ["value = *(undefined4 *)(param_1 + 0x21);"]
        )
        self.assertEqual(kind, "packed_unaligned_or_union_view")

    def test_indexed_stride_is_pointer_walk(self) -> None:
        kind, _ = MODULE.raw_offset_classification(
            ["value = *(int *)(param_1 + iVar3 * 0x10 + 0xc);"]
        )
        self.assertEqual(kind, "array_or_pointer_walk")

    def test_plain_aligned_offset_is_not_promoted_without_evidence(self) -> None:
        kind, _ = MODULE.raw_offset_classification(
            ["return *(undefined4 *)(param_1 + 0x24);"]
        )
        self.assertEqual(kind, "insufficient_independent_evidence")

    def test_owner_from_class_pointee_is_stable(self) -> None:
        owner, provenance = MODULE.owner_from_type_path(
            "/SubmarineTitans/Recovered/ClassPointees/AnonPointee_AiFltClassTy_0223"
        )
        self.assertEqual(owner, "AiFltClassTy+0x0223")
        self.assertEqual(provenance, "class_field_pointee")

    def test_issue_id_ignores_whitespace(self) -> None:
        first = MODULE.stable_issue_id("00401000", "raw", "a + b")
        second = MODULE.stable_issue_id("00401000", "raw", "a   +\n b")
        self.assertEqual(first, second)

    def test_quality_preview_cap_does_not_drop_occurrences(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            body = root / "functions/00401000/decomp.c"
            body.parent.mkdir(parents=True)
            body.write_text("one\ntwo\nthree\n", encoding="utf-8")
            rows = MODULE.issue_occurrence_excerpts(root, {
                "source_file": "functions/00401000/decomp.c",
                "occurrences": 3,
                "lines": [1, 2, 3],
                "excerpts": ["one"],
            })
            self.assertEqual(rows, [(1, "one"), (2, "two"), (3, "three")])


if __name__ == "__main__":
    unittest.main()
