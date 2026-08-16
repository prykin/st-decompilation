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
    BoundaryValue,
    GenerationError,
    QUALIFIED_ADDRESS_SYMBOL_RE,
    SourceTreeGenerator,
    TypeEmitter,
    call_argument_count,
    call_argument_spans,
    code_mask,
    exact_exref_global_rewrites,
    global_alias_for_token,
    rewrite_address_taken_globals,
    rewrite_exact_identifiers,
    statement_expression_end,
)


class SourceTreeCallParsingTests(unittest.TestCase):
    def test_unique_exref_uses_exact_referenced_pointer_global(self) -> None:
        replacements = exact_exref_global_rewrites([
            "0085C118 PTR_sizeHelp_0085c118 = 0045d28c",
            "00858DF8 g_currentExceptionFrame = 00000000",
        ])
        self.assertEqual(
            replacements,
            {"sizeHelp_exref": "PTR_sizeHelp_0085c118"},
        )
        rewritten, count = rewrite_exact_identifiers(
            "if (*(int *)sizeHelp_exref != 0) return sizeHelp_exref;",
            replacements,
        )
        self.assertEqual(count, 2)
        self.assertNotIn("sizeHelp_exref", rewritten)
        self.assertIn("PTR_sizeHelp_0085c118", rewritten)

    def test_ambiguous_exref_is_not_rewritten(self) -> None:
        replacements = exact_exref_global_rewrites([
            "0085C118 PTR_sizeHelp_0085c118 = 0045d28c",
            "0085C120 PTR_sizeHelp_0085c120 = 0045d290",
        ])
        self.assertNotIn("sizeHelp_exref", replacements)

    def test_argument_spans_preserve_nested_expressions(self) -> None:
        text = "fn(one, nested(two, three), value[index + 1])"
        parsed = call_argument_spans(text, text.index("("))
        self.assertIsNotNone(parsed)
        spans, close = parsed
        self.assertEqual([text[start:end] for start, end in spans], [
            "one", "nested(two, three)", "value[index + 1]",
        ])
        self.assertEqual(close, len(text) - 1)
        self.assertEqual(call_argument_count(text, text.index("(")), (3, close))

    def test_argument_spans_use_unmasked_literals_for_geometry(self) -> None:
        source = "fn(first, '-', \"text\", last)"
        masked = code_mask(source)
        parsed = call_argument_spans(masked, masked.index("("), source)
        self.assertIsNotNone(parsed)
        spans, _ = parsed
        self.assertEqual([source[start:end] for start, end in spans], [
            "first", "'-'", '"text"', "last",
        ])

    def test_return_statement_does_not_overwrite_local_pointer_type(self) -> None:
        body = (
            "void f() {\n  byte *payload;\n  short *words;\n"
            "  payload = allocate();\n  return payload;\n}\n"
        )
        declared = SourceTreeGenerator._declared_types(
            {"parameters": []}, body
        )
        self.assertEqual(declared["payload"], "byte *")
        self.assertEqual(declared["words"], "short *")

    def test_external_signature_parameter_types_are_exact(self) -> None:
        self.assertEqual(
            SourceTreeGenerator._signature_parameter_types(
                "void __thiscall ~Owner(Owner * this, char * text)"
            ),
            ("Owner *", "char *"),
        )

    def test_variadic_signature_keeps_fixed_parameter_boundary(self) -> None:
        self.assertEqual(
            SourceTreeGenerator._signature_parameter_spec(
                "int __cdecl format(char * buffer, char * text, ...)"
            ),
            (("char *", "char *"), True),
        )

    def test_inline_assignment_expression_stops_at_comma(self) -> None:
        text = "if ((value = nested(one, two), value != nullptr)) {"
        start = text.index("=", text.index("value")) + 1
        end = statement_expression_end(text, start)
        self.assertEqual(text[start:end].strip(), "nested(one, two)")

    def test_inline_assignment_pattern_rejects_casted_dereference(self) -> None:
        pattern = re.compile(
            r"(?<![A-Za-z0-9_*&.>\])])(?P<lhs>[A-Za-z_][A-Za-z0-9_]*)"
            r"[ \t]*=[ \t]*(?!=)"
        )
        self.assertIsNone(pattern.search("*(undefined4 *)destination = source;"))
        self.assertEqual(
            pattern.search("if ((destination = source) != 0)").group("lhs"),
            "destination",
        )

    def test_library_declaration_marks_excluded_implementation(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        generator.functions = [{
            "address": "0075FEE0",
            "name": "FUN_0075fee0",
            "qualified_name": "Library::DKW::JPG::FUN_0075fee0",
            "signature": (
                "void __stdcall FUN_0075fee0(int param_1, int param_2)"
            ),
            "parameters": [],
            "library": True,
            "body_exported": False,
        }]
        header = generator._emit_function_declarations()
        self.assertIn(
            "// 0075FEE0 Library::DKW::JPG::FUN_0075fee0 "
            "[statically linked library; implementation excluded]",
            header,
        )
        self.assertIn(
            "void __stdcall fn_0075FEE0(int param_1, int param_2);",
            header,
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
            pointer("/int *", "/int"),
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

    def test_commuted_byte_subscript_restores_pointer_index_order(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        function = {
            "parameters": [{"name": "stream", "type": "char *"}],
        }
        body = (
            "void fn(char *stream) {\n"
            "  undefined4 offset;\n"
            "  if (offset[(int)stream] != 4) use();\n"
            "}\n"
        )
        actual = generator._repair_commuted_byte_subscripts(
            "00102030", function, body
        )
        self.assertIn(
            "stream[st::machine_word_boundary_cast<uint>(offset)]", actual
        )
        self.assertEqual(generator.stats["commuted_byte_subscript_repairs"], 1)

    def test_commuted_nonbyte_pointer_subscript_is_preserved(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        function = {
            "parameters": [{"name": "words", "type": "int *"}],
        }
        body = (
            "void fn(int *words) {\n"
            "  undefined4 offset;\n"
            "  use(offset[(int)words]);\n"
            "}\n"
        )
        self.assertEqual(
            generator._repair_commuted_byte_subscripts(
                "00102030", function, body
            ),
            body,
        )

    def test_exact_callsite_declaration_unwraps_wrapped_vtable_slot(self) -> None:
        records = self.records()
        # Make the physical record eight bytes so [1].method denotes slot 8.
        table = next(item for item in records if item["path"] == "/OwnerVTable")
        table["length"] = 8
        table["detail"]["components"].append(
            component(1, 4, 4, "padding", "/int")
        )
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        function = {
            "address": "00400000",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "comments": [
                "00400010 [eol] [STIndirectCallsiteApplier] exact slot 0x8; "
                "mode=dispatch; signature=__thiscall;/int;pointer:/Owner"
            ],
        }
        body = "int f(Owner *owner) { return (*owner->vtable[1].method)(owner); }"
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn("owner->vfunc_8()", rewritten)
        declarations = generator.type_emitter.emit()
        self.assertIn("int vfunc_8();", declarations)
        self.assertIn("inline int Owner::vfunc_8()", declarations)
        self.assertIn(
            "reinterpret_cast<int (__thiscall *)(Owner *)>"
            "(vtable[1].method)(this)",
            declarations,
        )
        self.assertEqual(generator.stats["exact_indirect_call_declarations"], 1)
        self.assertEqual(generator.stats["exact_indirect_member_calls"], 1)

    def test_duplicated_receiver_exact_cast_is_a_hard_regression(self) -> None:
        degraded = (
            "int f(STGameObjC *object) { return "
            "(*st::exact_indirect_callee<undefined4 (__thiscall *)"
            "(STGameObjC *)>(object->vtable[1].vfunc_24))(object); }"
        )
        with self.assertRaises(GenerationError):
            SourceTreeGenerator._reject_degraded_duplicated_receiver_calls(
                "0065DA50", degraded
            )

        adjusted = degraded.replace(")(object);", ")(object + 1);")
        SourceTreeGenerator._reject_degraded_duplicated_receiver_calls(
            "0065DA50", adjusted
        )

    def test_semantic_anchor_wins_same_leaf_name_collision(self) -> None:
        records = self.records() + [
            {
                "path": "/SubmarineTitans/Recovered/Owner",
                "name": "Owner",
                "class": "StructureDB",
                "length": 4,
                "description": "legacy recovered view",
                "detail": {"components": [
                    component(0, 0, 4, "unknown_00", "/int")
                ]},
            }
        ]
        for record in records:
            if record["path"] == "/Owner":
                record["description"] = "[ST_SEMANTIC_ANCHOR] canonical identity"
        issues = []
        emitter = TypeEmitter(records, issues)
        self.assertEqual(
            emitter.canonical_path["/SubmarineTitans/Recovered/Owner"],
            "/Owner",
        )
        self.assertIn("/SubmarineTitans/Recovered/Owner", emitter.skipped_paths)
        self.assertTrue(any(issue.kind == "type_name_collision" for issue in issues))

    def test_byte_pointer_is_a_neutral_storage_view(self) -> None:
        records = self.records() + [
            primitive("/byte", "byte", 1),
            pointer("/byte *", "/byte"),
        ]
        emitter = TypeEmitter(records, [])
        self.assertEqual(emitter.display_pointer_kind("byte *"), "generic")
        self.assertEqual(
            emitter.display_member_type("Child", "field1_0x1", False),
            "undefined",
        )
        self.assertEqual(
            emitter.display_member_type("Child", "field_0x2", False),
            "undefined",
        )

    def test_exact_member_graph_recovers_nested_pointer_display(self) -> None:
        records = self.records() + [
            primitive("/void", "void", 1),
            pointer("/void *", "/void"),
            {
                "path": "/Payload",
                "name": "Payload",
                "display_name": "Payload",
                "class": "UnionDB",
                "length": 4,
                "detail": {"components": [
                    component(0, 0, 4, "ptr", "/void *")
                ]},
            },
            {
                "path": "/Envelope",
                "name": "Envelope",
                "display_name": "Envelope",
                "class": "StructureDB",
                "length": 4,
                "detail": {"components": [
                    component(0, 0, 4, "payload", "/Payload")
                ]},
            },
            pointer("/Envelope *", "/Envelope"),
        ]
        emitter = TypeEmitter(records, [])
        self.assertEqual(
            emitter.display_member_type("Envelope *", "payload", True),
            "Payload",
        )
        self.assertEqual(
            emitter.display_member_type("Payload", "ptr", False), "void *"
        )
        self.assertEqual(emitter.display_pointer_kind("code *"), "generic")

    def test_receiver_exact_non_virtual_member_wrapper(self) -> None:
        emitter = TypeEmitter(self.records(), [])
        method_pointer = emitter.type_name("/Owner_method *")
        self.assertEqual(emitter.display_type_expression(method_pointer), method_pointer)
        self.assertEqual(
            emitter.display_function_parameters(method_pointer),
            ("Owner *", "int"),
        )
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
        self.assertEqual(emitter.display_array_decay_type("int[5]"), "int *")

    def test_offset_zero_member_is_an_exact_pointer_boundary(self) -> None:
        records = self.records() + [
            {
                "path": "/OutputRecord",
                "name": "OutputRecord",
                "class": "StructureDB",
                "length": 8,
                "detail": {"components": [
                    component(0, 0, 4, "count", "/int"),
                    component(1, 4, 4, "value", "/int"),
                ]},
            },
            pointer("/OutputRecord *", "/OutputRecord"),
        ]
        emitter = TypeEmitter(records, [])
        self.assertEqual(
            emitter.display_zero_member_for_pointer_conversion(
                "OutputRecord *", "int *"
            ),
            "count",
        )

    def test_exact_four_byte_typedef_is_machine_word_scalar(self) -> None:
        records = self.records()
        next(item for item in records if item["path"] == "/int")["class"] = (
            "IntegerDataType"
        )
        records += [
            {
                "path": "/uint", "name": "uint",
                "class": "UnsignedIntegerDataType", "length": 4, "detail": {},
            },
            {
                "path": "/api/HANDLE32",
                "name": "HANDLE32",
                "display_name": "HANDLE32",
                "class": "TypedefDB",
                "length": 4,
                "detail": {"base_type": "/uint"},
            },
        ]
        emitter = TypeEmitter(records, [])
        self.assertTrue(emitter.display_machine_word_scalar("int"))
        self.assertTrue(emitter.display_machine_word_scalar("HANDLE32"))
        self.assertFalse(emitter.display_machine_word_scalar("Owner *"))

    def test_null_pointer_to_machine_word_uses_plain_zero(self) -> None:
        records = self.records() + [
            primitive("/undefined4", "undefined4", 4),
        ]
        records[-1]["class"] = "Undefined4DataType"
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(records, [])
        self.assertEqual(
            generator._boundary_replacement(
                "undefined4", BoundaryValue("nullptr", "null_pointer"), "nullptr"
            ),
            ("0", "nullptr -> zero word"),
        )

    def test_raw_offset_resolves_to_existing_exact_member(self) -> None:
        emitter = TypeEmitter(self.records(), [])
        self.assertEqual(
            emitter.display_member_name_at_offset("Owner *", 4, True),
            "child",
        )
        self.assertIsNone(
            emitter.display_member_name_at_offset("Owner *", 3, True)
        )

    def test_generated_anonymous_view_accepts_richer_exact_record(self) -> None:
        records = self.records()
        next(item for item in records if item["path"] == "/int")["class"] = (
            "IntegerDataType"
        )
        records += [
            {
                "path": "/undefined4", "name": "undefined4",
                "class": "Undefined4DataType", "length": 4, "detail": {},
            },
            {
                "path": "/Recovered/Element",
                "name": "Element",
                "display_name": "Element",
                "class": "StructureDB",
                "length": 8,
                "description": "[STDArrayElementApplier] generated",
                "detail": {"components": [
                    component(0, 0, 4, "value", "/int"),
                    component(1, 4, 4, "child", "/Child *"),
                ]},
            },
            {
                "path": "/Recovered/PointerShapes/AnonShape_00102030_ABCD",
                "name": "AnonShape_00102030_ABCD",
                "display_name": "AnonShape_00102030_ABCD",
                "class": "StructureDB",
                "length": 8,
                "description": "[STPointerShapeApplier] generated",
                "detail": {"components": [
                    component(0, 0, 4, "field_0000", "/undefined4"),
                    component(1, 4, 4, "field_0004", "/Owner *"),
                ]},
            },
            pointer("/Element *", "/Recovered/Element"),
            pointer(
                "/AnonView *",
                "/Recovered/PointerShapes/AnonShape_00102030_ABCD",
            ),
        ]
        emitter = TypeEmitter(records, [])
        self.assertTrue(emitter.display_generated_record_view_compatible(
            "Element *", "AnonView *"
        ))
        self.assertFalse(emitter.display_generated_record_view_compatible(
            "AnonView *", "Element *"
        ))

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

    def test_untagged_synthetic_lifetime_first_assignment_is_exact(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        body = (
            "void fn(short param_1) {\n"
            "  _param_1 = (Node *)(uint)(ushort)param_1;\n"
            "  if (_param_1 != nullptr) use(_param_1);\n"
            "}\n"
        )
        actual = generator._materialize_tagged_lifetimes("00102030", body)
        self.assertIn("auto _param_1 = (Node *)(uint)(ushort)param_1;", actual)
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

    def test_read_first_narrow_parameter_gets_machine_word_slot(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {
            "parameters": [{
                "name": "param_1", "type": "short", "length": 2,
                "storage": "Stack[0x4]:2",
            }],
        }
        body = (
            "int fn(short param_1) {\n"
            "  if (_param_1 < 0x19b) return _param_1;\n"
            "  return 0;\n"
            "}\n"
        )
        actual = generator._materialize_promoted_parameter_slots(
            "00102030", function, body
        )
        self.assertIn(
            "int _param_1 = static_cast<int>(param_1);", actual
        )
        self.assertEqual(
            generator.stats["promoted_parameter_slot_materializations"], 1
        )

    def test_full_width_parameter_does_not_get_synthetic_slot(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {
            "parameters": [{
                "name": "param_1", "type": "int", "length": 4,
                "storage": "Stack[0x4]:4",
            }],
        }
        body = "int fn(int param_1) { return _param_1; }\n"
        self.assertEqual(
            generator._materialize_promoted_parameter_slots(
                "00102030", function, body
            ),
            body,
        )

    def test_unsigned_short_parameter_promotes_to_signed_int_slot(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {
            "parameters": [{
                "name": "param_1", "type": "ushort", "length": 2,
                "storage": "Stack[0x4]:2",
            }],
        }
        body = "int fn(ushort param_1) { return _param_1; }\n"
        actual = generator._materialize_promoted_parameter_slots(
            "00102030", function, body
        )
        self.assertIn("int _param_1 = static_cast<int>(param_1);", actual)
        self.assertNotIn("uint _param_1", actual)

    def test_raw_stack_addresses_share_exact_relative_arena(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {"stack_frame_size": 0x20}
        body = (
            "void fn() {\n"
            "  use(&stack0xfffffff0);\n"
            "  copy(&stack0xffffffe0,&stack0xfffffff0);\n"
            "}\n"
        )
        actual = generator._materialize_raw_stack_arena(
            "00102030", function, body
        )
        self.assertIn("alignas(4) byte st_stack_frame[36];", actual)
        self.assertIn("use((st_stack_frame + 16));", actual)
        self.assertIn("copy((st_stack_frame + 0),(st_stack_frame + 16));", actual)
        self.assertNotIn("stack0x", actual)
        self.assertEqual(generator.stats["raw_stack_address_materializations"], 3)

    def test_exact_utility_output_splits_dead_stack_parameter_lifetime(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.type_emitter = TypeEmitter([], [])
        generator.function_by_address = {
            "00102030": {
                "address": "00102030",
                "tags": ["RECOVERED_UTILITY_SEMANTICS"],
                "parameters": [
                    {"name": "array", "type": "DArrayTy *"},
                    {"name": "index", "type": "uint"},
                    {"name": "outElement", "type": "void *"},
                ],
                "signature": (
                    "int __fastcall DArrayGetElement(DArrayTy * array, "
                    "uint index, void * outElement)"
                ),
            },
            "00102040": {
                "address": "00102040",
                "tags": [],
                "parameters": [
                    {"name": "this", "type": "STGroupBoatC *"},
                    {"name": "mode", "type": "char"},
                ],
                "signature": (
                    "void __thiscall UseBoat(STGroupBoatC * this, char mode)"
                ),
            },
        }
        function = {
            "address": "00102020",
            "signature": "void __stdcall owner(char param_1)",
            "parameters": [{"name": "param_1", "type": "char"}],
        }
        body = (
            "void st::fn_00102020(char param_1) {\n"
            "  if (ready) {\n"
            "    st::fn_00102030(array,index,&param_1);\n"
            "    if (_param_1 != nullptr) {\n"
            "      st::fn_00102040(_param_1,1);\n"
            "    }\n"
            "  }\n"
            "}\n"
        )
        actual = generator._materialize_exact_output_lifetimes(
            "00102020", function, body
        )
        self.assertIn("STGroupBoatC * _param_1 = nullptr;", actual)
        self.assertIn("st::fn_00102030(array,index,&_param_1);", actual)
        self.assertEqual(
            generator.stats["exact_output_lifetime_materializations"], 1
        )

    def test_exact_utility_output_uses_concrete_function_return_type(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.type_emitter = TypeEmitter([], [])
        generator.function_by_address = {
            "00102030": {
                "address": "00102030",
                "tags": ["RECOVERED_UTILITY_SEMANTICS"],
                "parameters": [
                    {"name": "array", "type": "DArrayTy *"},
                    {"name": "index", "type": "uint"},
                    {"name": "outElement", "type": "void *"},
                ],
            },
        }
        function = {
            "address": "00102020",
            "signature": "STGroupBoatC * __stdcall owner(char param_1)",
            "parameters": [{"name": "param_1", "type": "char"}],
        }
        body = (
            "STGroupBoatC * st::fn_00102020(char param_1) {\n"
            "  st::fn_00102030(array,index,&param_1);\n"
            "  return _param_1;\n"
            "}\n"
        )
        actual = generator._materialize_exact_output_lifetimes(
            "00102020", function, body
        )
        self.assertIn("STGroupBoatC * _param_1 = nullptr;", actual)
        self.assertIn("st::fn_00102030(array,index,&_param_1);", actual)

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
