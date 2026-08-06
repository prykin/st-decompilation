#!/usr/bin/env python3
"""Focused regression tests for deterministic source-tree assembly views."""

from __future__ import annotations

import unittest

from st_source_tree import TypeEmitter, rewrite_address_taken_globals


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


if __name__ == "__main__":
    unittest.main()
