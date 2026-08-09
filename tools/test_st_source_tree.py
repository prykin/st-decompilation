#!/usr/bin/env python3
"""Focused regression tests for deterministic source-tree assembly views."""

from __future__ import annotations

import re
import unittest
from pathlib import Path

from st_source_tree import (
    ADDRESS_CODED_GLOBAL_RE,
    ADDRESS_TAKEN_LABEL_RE,
    ADDRESS_CODED_FUNCTION_RE,
    QUALIFIED_ADDRESS_SYMBOL_RE,
    SourceTreeGenerator,
    TypeEmitter,
    call_argument_count,
    global_alias_for_token,
    rewrite_address_taken_globals,
)


def primitive(path: str, name: str, length: int) -> dict:
    return {
        "path": path,
        "name": name,
        "class": "BuiltInDataType",
        "length": length,
        "detail": {},
    }


def pointer(path: str, target: str) -> dict:
    return {
        "path": path,
        "name": path.rsplit("/", 1)[-1],
        "class": "PointerDB",
        "length": 4,
        "detail": {"points_to": target},
    }


def component(
    ordinal: int, offset: int, length: int, field_name: str, type_path: str
) -> dict:
    return {
        "ordinal": ordinal,
        "offset": offset,
        "length": length,
        "field_name": field_name,
        "type": type_path,
        "comment": "",
    }


class SourceTreeTypeEmitterTests(unittest.TestCase):
    def records(self) -> list[dict]:
        records = [
            primitive("/int", "int", 4),
            primitive("/undefined", "undefined", 1),
            pointer("/Owner *", "/Owner"),
            pointer("/Child *", "/Child"),
            pointer("/OwnerVTable *", "/OwnerVTable"),
            pointer("/Owner_method *", "/Owner_method"),
            {
                "path": "/Owner_method",
                "name": "Owner_method",
                "class": "FunctionDefinitionDB",
                "length": 1,
                "detail": {
                    "return_type": "/int",
                    "calling_convention": "__thiscall",
                    "varargs": False,
                    "arguments": [
                        {"name": "this", "type": "/Owner *"},
                        {"name": "value", "type": "/int"},
                    ],
                },
            },
            {
                "path": "/OwnerVTable",
                "name": "OwnerVTable",
                "class": "StructureDB",
                "length": 4,
                "detail": {
                    "components": [
                        component(0, 0, 4, "method", "/Owner_method *")
                    ]
                },
            },
            {
                "path": "/Child",
                "name": "Child",
                "class": "StructureDB",
                "length": 4,
                "detail": {
                    "components": [
                        component(index, index, 1, "", "/undefined")
                        for index in range(4)
                    ]
                },
            },
            {
                "path": "/Owner",
                "name": "Owner",
                "class": "StructureDB",
                "length": 8,
                "detail": {
                    "components": [
                        component(0, 0, 4, "vtable", "/OwnerVTable *"),
                        component(1, 4, 4, "child", "/Child *"),
                    ]
                },
            },
        ]
        return records

    def test_exact_nested_and_indexed_gap_views(self) -> None:
        emitter = TypeEmitter(self.records(), [])
        emitter.observe_field_accesses(
            "Owner *owner; owner->child->field_0x1; "
            "Child values[2]; values[1].field_0x2;"
        )
        header = emitter.emit()
        self.assertIn("undefined1 field_0x1;", header)
        self.assertIn("undefined1 field_0x2;", header)
        self.assertNotIn("undefined1 field_0x0;", header)
        self.assertEqual(emitter.materialized_gap_fields, 2)

    def test_receiver_exact_non_virtual_member_wrapper(self) -> None:
        emitter = TypeEmitter(self.records(), [])
        header = emitter.emit()
        self.assertIn("int method(int value);", header)
        self.assertIn("inline int Owner::method(int value)", header)
        self.assertIn("return (vtable->method)(this, value);", header)
        self.assertNotIn("virtual int method", header)

    def test_proven_thiscall_owner_receives_source_member_declaration(self) -> None:
        issues = []
        emitter = TypeEmitter(self.records(), issues)
        emitter.prepare_source_member_wrappers([{
            "address": "00102030",
            "name": "Update",
            "qualified_name": "Owner::Update",
            "namespace": "Owner",
            "signature": "int __thiscall Update(Owner * this, int value)",
            "calling_convention": "__thiscall",
            "external": False,
            "thunk": False,
            "tags": [],
            "parameters": [
                {"name": "this", "type": "Owner *"},
                {"name": "value", "type": "int"},
            ],
        }])
        header = emitter.emit()
        self.assertIn("int Update(int value);", header)
        wrappers = emitter.source_member_wrappers_by_record_path["/Owner"]
        self.assertEqual(len(wrappers), 1)
        self.assertEqual(wrappers[0].address, "00102030")
        self.assertFalse(issues)

    def test_source_member_uses_exported_body_boundary(self) -> None:
        emitter = TypeEmitter(self.records(), [])
        function = {
            "address": "00102040",
            "name": "Load",
            "qualified_name": "Owner::Load",
            "namespace": "Owner",
            "signature": "undefined __thiscall Load(Owner * this, undefined4 value)",
            "calling_convention": "__thiscall",
            "external": False,
            "thunk": False,
            "tags": [],
            "parameters": [
                {"name": "this", "type": "Owner *"},
                {"name": "value", "type": "undefined4"},
            ],
        }
        emitter.prepare_source_member_wrappers(
            [function],
            {"00102040": "void __thiscall fn_00102040(Owner *st_this, int *value)"},
        )
        wrapper = emitter.source_member_wrappers_by_record_path["/Owner"][0]
        self.assertEqual(wrapper.return_type, "void")
        self.assertEqual(wrapper.parameters, ("int *value",))
        self.assertEqual(wrapper.argument_names, ("value",))

    def test_image_object_rename_preserves_same_named_type_uses(self) -> None:
        source = (
            "Table *local; *(Table **)target = &Table; "
            "STField<Table *>(owner, 4) = &Table.field;"
        )
        rewritten, count = rewrite_address_taken_globals(
            source, {"Table": "st_global_00102030"}
        )
        self.assertEqual(count, 2)
        self.assertIn("Table *local", rewritten)
        self.assertIn("*(Table **)target", rewritten)
        self.assertIn("STField<Table *>", rewritten)
        self.assertIn("&st_global_00102030;", rewritten)
        self.assertIn("&st_global_00102030.field", rewritten)

    def test_exact_display_array_declaration_is_not_scalarized(self) -> None:
        records = self.records()
        records.append({
            "path": "/int[5]",
            "name": "int[5]",
            "display_name": "int[5]",
            "class": "ArrayDB",
            "length": 20,
            "detail": {
                "element_type": "/int",
                "element_count": 5,
                "element_length": 4,
            },
        })
        emitter = TypeEmitter(records, [])
        self.assertEqual(
            emitter.display_declaration("int[5]", "g_offsets"),
            "int g_offsets[5]",
        )

    def test_address_coded_function_survives_qualified_line_wrap(self) -> None:
        spelling = "SubmarineTitans::Recovered::\n  sub_00102030"
        match = ADDRESS_CODED_FUNCTION_RE.search(spelling)
        self.assertIsNotNone(match)
        self.assertEqual(
            re.sub(r"\s+", "", match.group(0)),
            "SubmarineTitans::Recovered::sub_00102030",
        )

    def test_stale_qualifier_is_removed_after_address_rewrite(self) -> None:
        spelling = (
            "SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::\n"
            "    st::fn_00660180(param_1)"
        )
        actual, count = QUALIFIED_ADDRESS_SYMBOL_RE.subn(
            lambda match: match.group(1), spelling
        )
        self.assertEqual(count, 1)
        self.assertEqual(actual, "st::fn_00660180(param_1)")

    def test_invalid_ghidra_global_spelling_gets_stable_address_alias(self) -> None:
        source = "pcVar = &CHAR___007c3b5c;"
        match = ADDRESS_CODED_GLOBAL_RE.search(source)
        self.assertIsNotNone(match)
        item = {"address": "007C3B5C", "name": "CHAR_ _007c3b5c"}
        self.assertEqual(
            global_alias_for_token(match.group("name"), match.group("address"), item),
            "st_global_007C3B5C",
        )
        self.assertIsNone(global_alias_for_token(
            "DAT_007C3B5C", "007C3B5C",
            {"address": "007C3B5C", "name": "DAT_007C3B5C"},
        ))

    def test_only_address_taken_external_label_matches(self) -> None:
        source = "handler = &LAB_0072d964; goto LAB_0072d964;"
        matches = list(ADDRESS_TAKEN_LABEL_RE.finditer(source))
        self.assertEqual(len(matches), 1)
        self.assertEqual(matches[0].group(2).upper(), "0072D964")

    def test_tagged_synthetic_lifetime_is_declared_from_exact_rhs(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        body = (
            "void fn() {\n"
            "  /* ST_PSEUDO[stack_slot_reuse]: exact */\n"
            "  _param_3 = value * 2;\n"
            "  _param_3 = _param_3 - 1;\n"
            "}\n"
        )
        actual = generator._materialize_tagged_lifetimes("00102030", body)
        self.assertIn("auto _param_3 = value * 2;", actual)
        self.assertEqual(generator.stats["tagged_lifetime_materializations"], 1)

    def test_tagged_lifetime_crossing_switch_label_stays_audit_only(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        body = (
            "void fn(int tag) {\n"
            "  switch (tag) {\n"
            "  case 1:\n"
            "    /* ST_PSEUDO[stack_slot_reuse]: exact */\n"
            "    _local_8 = tag;\n"
            "  case 2:\n"
            "    use(_local_8);\n"
            "  }\n"
            "}\n"
        )
        actual = generator._materialize_tagged_lifetimes("00102030", body)
        self.assertNotIn("auto _local_8", actual)

    def test_overload_is_resolved_only_by_unique_exported_arity(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.function_by_address = {
            "00102030": {"parameters": [{}, {}]},
            "00102040": {"parameters": [{}, {}, {}, {}, {}]},
        }
        body = "PushTV(player, 0); PushTV(player, 0, 0, player, value);"
        actual, count, unresolved = generator._rewrite_ambiguous_calls(
            body, {"PushTV": {"00102030", "00102040"}}
        )
        self.assertEqual(count, 2)
        self.assertFalse(unresolved)
        self.assertEqual(
            actual,
            "st::fn_00102030(player, 0); "
            "st::fn_00102040(player, 0, 0, player, value);",
        )

    def test_call_arity_ignores_nested_and_template_commas(self) -> None:
        masked = "call(STPiece<3, 1>(value), nested(a, b), last)"
        open_paren = masked.index("(")
        self.assertEqual(call_argument_count(masked, open_paren), (3, len(masked) - 1))


if __name__ == "__main__":
    unittest.main()
