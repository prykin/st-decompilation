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
    OPAQUE_IMAGE_TOKEN_RE,
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
    def test_malformed_referenced_string_name_uses_exact_address_literal(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.string_by_address = {
            "007ABA78": {"value": '"STBoatC::ReleaseLoad data.lload<=0"'}
        }
        body = "check(s_STBoatC__ReleaseLoad_data_lload<_007aba78);"
        actual = generator._rewrite_referenced_string_literals(
            {"referenced_strings": ["007ABA78 broken = literal"]}, body
        )
        self.assertEqual(
            actual, 'check("STBoatC::ReleaseLoad data.lload<=0");'
        )

    def test_invalid_referenced_global_name_uses_exact_address_alias(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        record = {
            "address": "007C94CC", "name": "CHAR_>_007c94cc", "type": "char"
        }
        generator.global_by_address = {"007C94CC": record}
        actual = generator._rewrite_referenced_invalid_globals(
            {"referenced_globals": ["007C94CC CHAR_>_007c94cc = '>'"]},
            "char *value = &CHAR_>_007c94cc;",
        )
        self.assertEqual(actual, "char *value = &st_global_007C94CC;")
        self.assertIs(generator.global_alias_records["st_global_007C94CC"], record)

    def test_only_image_range_opaque_tokens_are_candidates(self) -> None:
        self.assertEqual(
            OPAQUE_IMAGE_TOKEN_RE.search("uRam00807440").group("address"),
            "00807440",
        )
        self.assertEqual(
            OPAQUE_IMAGE_TOKEN_RE.search("uRam00000004").group("address"),
            "00000004",
        )

    def test_address_coded_callee_accepts_linebreak_before_scope_operator(self) -> None:
        match = ADDRESS_CODED_FUNCTION_RE.search(
            "Owner::Nested\n    ::sub_00402020(receiver)"
        )
        self.assertIsNotNone(match)
        self.assertEqual(
            re.sub(r"\s+", "", match.group(0)),
            "Owner::Nested::sub_00402020",
        )

    def test_address_coded_member_wrapper_is_not_a_direct_call(self) -> None:
        self.assertIsNone(
            ADDRESS_CODED_FUNCTION_RE.search(
                "receiver->sub_00402020(argument)"
            )
        )

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
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        declared = generator._declared_types({"parameters": []}, body)
        self.assertEqual(declared["payload"], "byte *")
        self.assertEqual(declared["words"], "short *")

    def test_line_wrapped_multiplication_is_not_a_declaration(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        declared = generator._declared_types(
            {"parameters": []},
            "void f() {\n  uint local_34;\n  value = left +\n"
            "          local_34 * local_34;\n}\n",
        )
        self.assertEqual(declared["local_34"], "uint")

    def test_cpp_cast_auto_pointer_is_available_to_field_walker(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [{
            "path": "/Owner", "name": "Owner", "display_name": "Owner",
            "class": "StructureDB", "length": 4,
            "detail": {"components": []},
        }, pointer("/Owner *", "/Owner")]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        declared = generator._declared_types(
            {"parameters": []},
            "void f(int *storage) {\n"
            "  auto cursor = reinterpret_cast<Owner *>(storage);\n"
            "  use(cursor->value);\n}\n",
        )
        self.assertEqual(declared["cursor"], "Owner *")

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

    def test_split_qualified_address_prefix_keeps_callsite_comment(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        body = (
            "Owner::Nested::\n"
            "/* ST_CALLSITE[00401010]: exact direct call */\n"
            "st::fn_00402020(receiver);"
        )
        self.assertEqual(
            generator._readability_metrics(body).get(
                "dangling_qualified_address_prefix"
            ),
            1,
        )
        actual = generator._repair_split_qualified_address_symbols(
            "00403030", body
        )
        self.assertNotIn("Owner", actual)
        self.assertNotIn("Nested", actual)
        self.assertIn("ST_CALLSITE[00401010]", actual)
        self.assertIn("st::fn_00402020(receiver)", actual)
        self.assertNotIn(
            "dangling_qualified_address_prefix",
            generator._readability_metrics(actual),
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

    def test_thunk_declaration_uses_exact_target_abi_and_weak_external_fallback(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        target = {
            "address": "00102040", "name": "target",
            "qualified_name": "target",
            "signature": "int __stdcall target(int value)",
            "parameters": [{"name": "value", "type": "int"}],
            "parameter_count": 1, "library": False,
            "body_exported": True, "thunk": False,
        }
        thunk = {
            "address": "00102030", "name": "thunk_target",
            "qualified_name": "thunk_target",
            "signature": "undefined thunk_target(void)",
            "parameters": [], "parameter_count": 0, "library": False,
            "body_exported": False, "thunk": True,
            "thunk_target": "00102040 target",
        }
        imported = {
            "address": "00102050", "name": "Imported",
            "qualified_name": "DLL::Imported",
            "signature": "undefined Imported(void)",
            "parameters": [], "parameter_count": 0, "library": False,
            "body_exported": False, "thunk": True,
            "thunk_target": "EXTERNAL:00000010 Imported",
        }
        generator.functions = [thunk, target, imported]
        generator.function_by_address = {
            item["address"]: item for item in generator.functions
        }
        header = generator._emit_function_declarations()
        self.assertIn("int __stdcall fn_00102030(int value);", header)
        self.assertIn("undefined4 fn_00102050(...);", header)


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

    def test_variadic_physical_vtable_slot_forwards_every_use_site_family(self) -> None:
        records = self.records()
        function = next(
            item for item in records if item["path"] == "/Owner_method"
        )
        function["detail"]["varargs"] = True

        emitter = TypeEmitter(records, [])
        header = emitter.emit()

        self.assertIn("template <typename... Args>", header)
        self.assertIn(
            "int method(int value, Args... st_varargs);", header
        )
        self.assertIn(
            "inline int Owner::method(int value, Args... st_varargs)", header
        )
        self.assertIn(
            "(vtable->method)(this, value, st_varargs...)", header
        )
        wrapper = emitter.member_wrappers_by_record_path["/Owner"][0]
        self.assertTrue(wrapper.variadic)

    def test_source_walker_materializes_nested_inline_array_gap_view(self) -> None:
        records = self.records() + [{
            "path": "/Child[2]",
            "name": "Child[2]",
            "display_name": "Child[2]",
            "class": "ArrayDB",
            "length": 8,
            "detail": {
                "element_type": "/Child",
                "element_count": 2,
                "element_length": 4,
            },
        }]
        owner = next(item for item in records if item["path"] == "/Owner")
        owner["length"] = 16
        owner["detail"]["components"].append(
            component(2, 8, 8, "children", "/Child[2]")
        )
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator._observe_exact_nested_gap_fields(
            {"parameters": [{"name": "owner", "type": "Owner *"}]},
            "owner->children[index].field_0x3 = 1;",
        )
        header = generator.type_emitter.emit()
        self.assertIn("undefined1 field_0x3;", header)
        self.assertEqual(generator.stats["nested_gap_field_observations"], 1)

    def test_source_walker_materializes_parenthesized_subobject_gap_view(self) -> None:
        records = self.records()
        owner = next(item for item in records if item["path"] == "/Owner")
        owner["detail"]["components"][1] = component(
            1, 4, 4, "child", "/Child"
        )
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator._observe_exact_nested_gap_fields(
            {"parameters": [{"name": "owner", "type": "Owner *"}]},
            "*(uint *)&(owner->child).field_0x3 = 1;",
        )
        header = generator.type_emitter.emit()
        self.assertIn("undefined1 field_0x3;", header)

    def test_exact_name_rewrite_accepts_zero_padded_offset_spelling(self) -> None:
        records = self.records()
        child = next(item for item in records if item["path"] == "/Child")
        child["detail"]["components"][0]["field_name"] = "element"
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        actual = generator._repair_exact_field_names(
            "00102030",
            {"parameters": [{"name": "child", "type": "Child *"}]},
            "value = child->field_0000;",
        )
        self.assertEqual(actual, "value = child->element;")

    def test_auto_pointer_cast_is_an_exact_declared_type(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        actual = generator._declared_types(
            {"parameters": []},
            "auto cursor = (Child *)0x5;\nuse(cursor);",
        )
        self.assertEqual(actual["cursor"], "Child *")

    def test_member_walk_falls_back_to_unique_record_without_pointer_db(self) -> None:
        records = [
            primitive("/int", "int", 4),
            {
                "path": "/Detached",
                "name": "Detached",
                "class": "StructureDB",
                "length": 4,
                "detail": {
                    "components": [component(0, 0, 4, "value", "/int")]
                },
            },
        ]
        emitter = TypeEmitter(records, [])
        self.assertEqual(
            emitter.display_member_type(
                "Detached *", "value", True, allow_name_fallback=True
            ),
            "int",
        )
        self.assertIsNone(
            emitter.display_member_type("Detached *", "value", True)
        )

    def test_source_walker_materializes_explicit_cast_receiver_gap(self) -> None:
        records = [
            primitive("/undefined", "undefined", 1),
            {
                "path": "/Detached",
                "name": "Detached",
                "class": "StructureDB",
                "length": 12,
                "detail": {
                    "components": [
                        component(index, index, 1, "", "/undefined")
                        for index in range(12)
                    ]
                },
            },
        ]
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator._observe_exact_nested_gap_fields(
            {"parameters": []},
            "value = *(uint *)&((Detached *)((int)raw + 4))->field_0x8;",
        )
        header = generator.type_emitter.emit()
        self.assertIn("undefined1 field_0x8;", header)
        self.assertEqual(
            generator.stats["cast_receiver_gap_field_observations"], 1
        )

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

    def test_pointer_typed_grid_coordinate_uses_machine_word_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        function = {
            "parameters": [
                {"name": "grid", "type": "Grid *"},
                {"name": "reused", "type": "short *"},
            ]
        }
        body = (
            "void fn(Grid *grid, short *reused) {\n"
            "  use(STGridAt3D(*grid, reused, 2, 3));\n"
            "}\n"
        )
        actual = generator._repair_grid_index_boundaries(
            "00102030", function, body
        )
        self.assertIn(
            "STGridAt3D(*grid, "
            "st::machine_word_boundary_cast<int>(reused), 2, 3)",
            actual,
        )
        self.assertEqual(generator.stats["grid_index_word_boundaries"], 1)

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

    def test_exact_callsite_restores_omitted_thiscall_receiver(self) -> None:
        records = self.records()
        records.append(primitive("/void", "void", 1))
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
                "mode=dispatch; signature=__thiscall;/void;pointer:/Owner"
            ],
        }
        body = (
            "void f(Owner *owner) {\n"
            "  /* ST_CALLSITE[00400010]: exact machine call */\n"
            "  (*owner->vtable[1].method)();\n}"
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn("owner->vfunc_8();", rewritten)
        self.assertNotIn("(*owner->vtable", rewritten)

    def test_folded_vfunc_spelling_registers_exact_member_wrapper(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        function = {
            "address": "00400000",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "comments": [
                "00400010 [eol] [STIndirectCallsiteApplier] exact slot 0x8; "
                "mode=dispatch; signature=__thiscall;/int;pointer:/Owner"
            ],
        }
        body = "int f(Owner *owner) { return owner->vfunc_8(); }"
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertEqual(rewritten, body)
        declarations = generator.type_emitter.emit()
        self.assertIn("int vfunc_8();", declarations)
        self.assertIn("(vtable[2].method)(this)", declarations)

    def test_folded_wrapper_is_reused_for_alternate_raw_slot_spelling(self) -> None:
        records = self.records()
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
                "mode=dispatch; signature=__thiscall;/int;pointer:/Owner",
                "00400020 [eol] [STIndirectCallsiteApplier] exact slot 0x8; "
                "mode=dispatch; signature=__thiscall;/int;pointer:/Owner",
            ],
        }
        body = (
            "int f(Owner *owner) {\n"
            "  int value = owner->vfunc_8();\n"
            "  /* ST_CALLSITE[00400020]: exact machine call */\n"
            "  return value + (*owner->vtable[1].method)(owner);\n}"
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn("return value + owner->vfunc_8();", rewritten)
        self.assertNotIn("exact_indirect_callee", rewritten)

    def test_exact_callsite_uses_independent_receiver_wrapper_at_boundary(self) -> None:
        records = self.records()
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        self.assertEqual(
            generator.type_emitter.register_exact_indirect_member_wrapper(
                receiver_display="Child *",
                slot=8,
                return_type="int",
                function_pointer_type="int (__thiscall *)(Child *)",
                parameter_types=("Child *",),
                callee_expression="vtable_slot_8",
            ),
            "vfunc_8",
        )
        function = {
            "address": "00400000",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "comments": [
                "00400010 [eol] [STIndirectCallsiteApplier] exact slot 0x8; "
                "mode=dispatch; signature=__thiscall;/int;pointer:/Child"
            ],
        }
        body = (
            "int f(Owner *owner) {\n"
            "  /* ST_CALLSITE[00400010]: exact machine call */\n"
            "  return (*owner->vtable[1].method)(owner);\n}"
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn(
            "st::pointer_boundary_cast<Child *>(owner)->vfunc_8()",
            rewritten,
        )
        self.assertNotIn("exact_indirect_callee", rewritten)

    def test_machine_callsite_slot_overrides_stale_rendered_vtable_geometry(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        self.assertEqual(
            generator.type_emitter.register_exact_indirect_member_wrapper(
                receiver_display="Owner *",
                slot=8,
                return_type="int",
                function_pointer_type="int (__thiscall *)(Owner *)",
                parameter_types=("Owner *",),
                callee_expression="vtable_slot_8",
            ),
            "vfunc_8",
        )
        generator.machine_callsite_slots["00400000"] = {"00400010": 8}
        function = {
            "address": "00400000",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "comments": [],
        }
        body = (
            "int f(Owner *owner) {\n"
            "  /* ST_CALLSITE[00400010]: CALL dword ptr [EAX + 0x8] */\n"
            "  return (*owner->vtable[1].method)(owner);\n}"
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn("return owner->vfunc_8();", rewritten)

    def test_machine_callsite_registers_bounded_generic_member_fallback(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        generator.machine_callsite_slots["00400000"] = {"00400010": 8}
        function = {
            "address": "00400000",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "comments": [],
        }
        body = (
            "int f(Owner *owner) {\n"
            "  /* ST_CALLSITE[00400010]: CALL dword ptr [EAX + 0x8] */\n"
            "  return (*owner->vtable[1].method)(owner, 7);\n}"
        )
        generator._repair_exact_indirect_calls(
            "00400000", function, body, register_only=True,
            register_machine_fallback=True,
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn("return owner->vfunc_8(7);", rewritten)
        header = generator.type_emitter.emit()
        self.assertIn("undefined4 vfunc_8(undefined4 arg_1);", header)
        self.assertIn(
            "reinterpret_cast<undefined4 (__thiscall *)(Owner *, undefined4)>",
            header,
        )

    def test_statement_only_void_pointer_slot_uses_structural_call_view(self) -> None:
        records = self.records() + [
            primitive("/void", "void", 1),
            pointer("/void *", "/void"),
        ]
        table = next(item for item in records if item["path"] == "/OwnerVTable")
        table["detail"]["components"][0]["type"] = "/void *"
        table["detail"]["components"][0]["field_name"] = "slot_00"
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator.machine_callsite_slots["00400000"] = {"00400010": 0}
        function = {
            "address": "00400000",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "comments": [],
        }
        body = (
            "void f(Owner *owner) {\n"
            "  /* ST_CALLSITE[00400010]: CALL dword ptr [EAX] */\n"
            "  (*owner->vtable->slot_00)();\n}"
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn(
            "STStructuralVirtualCall<void>(owner, 0x0);", rewritten
        )

    def test_exact_machine_word_member_call_transports_pointer_argument(self) -> None:
        records = self.records() + [{
            "path": "/undefined4",
            "name": "undefined4",
            "class": "Undefined4DataType",
            "length": 4,
            "detail": {},
        }]
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        function = {
            "address": "00400000",
            "parameters": [
                {"name": "owner", "type": "Owner *"},
                {"name": "child", "type": "Child *"},
            ],
            "comments": [
                "00400010 [eol] [STIndirectCallsiteApplier] exact slot 0x8; "
                "mode=machine-word; signature=__thiscall;/undefined4;"
                "pointer:/Owner;/undefined4"
            ],
        }
        body = (
            "undefined4 f(Owner *owner, Child *child) {\n"
            "  /* ST_CALLSITE[00400010]: CALL dword ptr [EAX + 8] */\n"
            "  return owner->slot_08(child);\n}"
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn(
            "owner->vfunc_8("
            "st::machine_word_boundary_cast<undefined4>(child))",
            rewritten,
        )
        self.assertEqual(
            generator.stats["exact_indirect_argument_boundaries"], 1
        )
        self.assertTrue(any(
            issue.kind == "exact_indirect_argument_boundary"
            for issue in generator.issues
        ))

    def test_machine_callsite_reuses_stronger_physical_member_wrapper(self) -> None:
        records = self.records()
        vtable = next(item for item in records if item["path"] == "/OwnerVTable")
        vtable["detail"]["components"][0]["field_name"] = "vfunc_0"
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator.machine_callsite_slots["00400000"] = {"00400010": 0}
        function = {
            "address": "00400000",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "comments": [],
        }
        body = (
            "int f(Owner *owner) {\n"
            "  /* ST_CALLSITE[00400010]: CALL dword ptr [EAX] */\n"
            "  return (*owner->vtable->vfunc_0)(owner, 7);\n}"
        )
        rewritten = generator._repair_exact_indirect_calls(
            "00400000", function, body
        )
        self.assertIn("return owner->vfunc_0(7);", rewritten)
        self.assertNotIn("(*owner->vtable", rewritten)
        header = generator.type_emitter.emit()
        self.assertIn("int vfunc_0(int value);", header)
        self.assertNotIn("undefined4 vfunc_0", header)

    def test_folded_physical_member_uses_exact_word_boundary(self) -> None:
        records = self.records()
        records.append({
            "path": "/undefined4", "name": "undefined4",
            "class": "Undefined4DataType", "length": 4, "detail": {},
        })
        function_type = next(
            item for item in records if item["path"] == "/Owner_method"
        )
        function_type["detail"]["arguments"][1]["type"] = "/undefined4"
        table = next(item for item in records if item["path"] == "/OwnerVTable")
        table["detail"]["components"][0]["field_name"] = "slot_00"
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        function = {
            "parameters": [
                {"name": "owner", "type": "Owner *"},
                {"name": "child", "type": "Child *"},
            ]
        }

        rewritten = generator._repair_physical_member_call_boundaries(
            "00400000", function,
            "int f(Owner *owner, Child *child) { "
            "return owner->slot_00(child); }",
        )

        self.assertIn(
            "owner->slot_00(st::machine_word_boundary_cast<undefined4>(child))",
            rewritten,
        )
        self.assertEqual(
            generator.stats["physical_member_argument_boundaries"], 1
        )

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

    def test_readability_regression_is_address_exact_and_blocking(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.previous_readability_by_address = {
            "00102030": {"generic_undefined_declaration": 1},
            "00102040": {"generic_undefined_declaration": 4},
        }
        generator.readability_by_address = {
            "00102030": {"generic_undefined_declaration": 2},
            "00102040": {"generic_undefined_declaration": 0},
        }
        with self.assertRaisesRegex(
            GenerationError,
            r"00102030:generic_undefined_declaration 1->2",
        ):
            generator._require_nonincreasing_source_readability()

    def test_readability_allows_one_receiver_cast_per_removed_stale_call(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.previous_readability_by_address = {
            "00102030": {"stale_address_member_call": 1}
        }
        generator.readability_by_address = {
            "00102030": {"pointer_boundary_cast": 1}
        }
        generator._require_nonincreasing_source_readability()
        generator.readability_by_address["00102030"]["pointer_boundary_cast"] = 2
        with self.assertRaises(GenerationError):
            generator._require_nonincreasing_source_readability()

    def test_readability_allows_receiver_cast_for_removed_raw_vtable_call(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.previous_readability_by_address = {
            "00102030": {"raw_duplicated_vtable_call": 1}
        }
        generator.readability_by_address = {
            "00102030": {"pointer_boundary_cast": 1}
        }
        generator._require_nonincreasing_source_readability()
        generator.readability_by_address["00102030"]["pointer_boundary_cast"] = 2
        with self.assertRaises(GenerationError):
            generator._require_nonincreasing_source_readability()

    def test_readability_allows_exact_callable_boundary_exchange(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.previous_readability_by_address = {
            "00102030": {"generic_undefined_declaration": 1},
            "00102040": {"pointer_boundary_cast": 2},
        }
        generator.readability_by_address = {
            "00102030": {},
            "00102040": {"pointer_boundary_cast": 3},
        }
        generator.neutral_callable_boundary_casts["00102040"] = 1
        generator._require_nonincreasing_source_readability()

        # An exact callable boundary cannot subsidize an unrelated second cast.
        generator.readability_by_address["00102040"]["pointer_boundary_cast"] = 4
        with self.assertRaises(GenerationError):
            generator._require_nonincreasing_source_readability()

        # Nor may the boundary move without a corresponding declaration gain.
        generator.readability_by_address["00102030"] = {
            "generic_undefined_declaration": 1
        }
        generator.readability_by_address["00102040"] = {
            "pointer_boundary_cast": 3
        }
        with self.assertRaises(GenerationError):
            generator._require_nonincreasing_source_readability()

    def test_readability_allows_one_exact_call_result_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.previous_readability_by_address = {
            "00102040": {"pointer_boundary_cast": 2},
        }
        generator.readability_by_address = {
            "00102040": {"pointer_boundary_cast": 3},
        }
        generator.exact_call_result_boundary_casts["00102040"] = 1
        generator._require_nonincreasing_source_readability()

        generator.readability_by_address["00102040"]["pointer_boundary_cast"] = 4
        with self.assertRaises(GenerationError):
            generator._require_nonincreasing_source_readability()

    def test_readability_allows_pointer_cast_for_materialized_narrow_slot(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.previous_readability_by_address = {"00102040": {}}
        generator.readability_by_address = {
            "00102040": {"pointer_boundary_cast": 1},
        }
        generator.promoted_slot_boundary_casts["00102040"] = 1
        generator._require_nonincreasing_source_readability()

        generator.readability_by_address["00102040"]["pointer_boundary_cast"] = 2
        with self.assertRaises(GenerationError):
            generator._require_nonincreasing_source_readability()

    def test_readability_allows_normalizing_existing_pointer_view_cast(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.previous_readability_by_address = {"00102040": {}}
        generator.readability_by_address = {
            "00102040": {"pointer_boundary_cast": 1},
        }
        generator.exact_existing_pointer_view_casts["00102040"] = 1
        generator._require_nonincreasing_source_readability()

        generator.readability_by_address["00102040"]["pointer_boundary_cast"] = 2
        with self.assertRaises(GenerationError):
            generator._require_nonincreasing_source_readability()

    def test_readability_metrics_ignore_comments_but_count_failures(self) -> None:
        metrics = SourceTreeGenerator._readability_metrics(
            "/* undefined4 ******ignored; */\n"
            "undefined4 ******ppppppuVar1;\n"
            "/* ST_PSEUDO[roundtrip_call_presentation_failure]: exact */\n"
        )
        self.assertEqual(metrics["generic_pointer_tower"], 1)
        self.assertEqual(metrics["presentation_failure"], 1)
        self.assertEqual(
            SourceTreeGenerator._readability_metrics(
                "int f(Owner *x) { return (*x->vtable[1].slot)(x); }"
            )["raw_duplicated_vtable_call"],
            1,
        )
        self.assertNotIn(
            "raw_duplicated_vtable_call",
            SourceTreeGenerator._readability_metrics(
                "int f(Base *x) { return (*x->vtable->slot)((Child *)x); }"
            ),
        )

    def test_generic_declaration_metric_is_independent_of_parameter_wrapping(self) -> None:
        one_line = (
            "void f(int first, undefined *left, int middle, "
            "undefined *right);\n"
        )
        wrapped = (
            "void f(int first, undefined *left, int middle,\n"
            "       undefined *right);\n"
        )
        self.assertEqual(
            SourceTreeGenerator._readability_metrics(one_line),
            SourceTreeGenerator._readability_metrics(wrapped),
        )
        self.assertEqual(
            SourceTreeGenerator._readability_metrics(one_line)
                ["generic_undefined_declaration"],
            2,
        )

    def test_readability_does_not_join_code_across_callsite_comment(self) -> None:
        body = (
            "int f(Owner *x) {\n"
            "  int value = (*x->vtable->first)(other);\n"
            "  /* ST_CALLSITE[00102030]: CALL dword ptr [EAX + 8] */\n"
            "  return (*x->vtable->second)(x);\n"
            "}\n"
        )
        metrics = SourceTreeGenerator._readability_metrics(body)
        self.assertEqual(metrics["raw_duplicated_vtable_call"], 1)

        false_join = body.replace(
            "return (*x->vtable->second)(x);",
            "return second_value;",
        )
        self.assertNotIn(
            "raw_duplicated_vtable_call",
            SourceTreeGenerator._readability_metrics(false_join),
        )

    def test_direct_leaf_rewrite_does_not_capture_member_dispatch(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("."), Path("receipt.json")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        target = {
            "address": "00401000",
            "name": "method",
            "qualified_name": "Owner::method",
            "calling_convention": "__thiscall",
            "parameters": [
                {"name": "this", "type": "Owner *"},
                {"name": "value", "type": "int"},
            ],
            "return_type": "int",
        }
        function = {
            "address": "00402000",
            "name": "caller",
            "qualified_name": "caller",
            "calling_convention": "__cdecl",
            "parameters": [{"name": "owner", "type": "Owner *"}],
            "return_type": "int",
            "callees": ["00401000 Owner::method"],
            "referenced_globals": [],
        }
        generator.functions = [function, target]
        generator.function_by_address = {
            item["address"]: item for item in generator.functions
        }
        body = (
            "int caller(Owner *owner) {\n"
            "  int direct = Owner::method(owner, 1);\n"
            "  return owner->method(2) + direct;\n"
            "}\n"
        )
        rewritten = generator._transform_body(function, body)
        self.assertIn("st::fn_00401000(owner, 1)", rewritten)
        self.assertIn("owner->method(2)", rewritten)
        self.assertNotIn("owner->st::fn_00401000", rewritten)

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

    def test_machine_word_arithmetic_retains_scalar_pointer_boundary(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter([], [])
        source = generator._boundary_expression(
            "offset + delta", {"offset": "uint", "delta": "short"}
        )
        self.assertIsNotNone(source)
        self.assertEqual(source.kind, "generic_word")
        self.assertEqual(
            generator._boundary_replacement(
                "byte *", source, "offset + delta"
            ),
            (
                "st::pointer_boundary_cast<byte *>(offset + delta)",
                "uint -> byte *",
            ),
        )
        legacy_pointer = generator._boundary_expression(
            "STPointerBoundaryCast<uint *>(producer())", {}
        )
        self.assertIsNotNone(legacy_pointer)
        self.assertEqual(legacy_pointer.display_type, "uint *")
        wrapped_pointer = generator._boundary_expression(
            "((byte *)offset + delta)",
            {"offset": "uint", "delta": "short"},
        )
        self.assertIsNotNone(wrapped_pointer)
        self.assertTrue(wrapped_pointer.kind.endswith("_pointer"))
        pointer_arithmetic = generator._boundary_expression(
            "cursor + delta", {"cursor": "byte *", "delta": "short"}
        )
        self.assertIsNotNone(pointer_arithmetic)
        self.assertFalse(pointer_arithmetic.address_storage)
        self.assertEqual(
            generator._boundary_replacement(
                "uint", wrapped_pointer, "((byte *)offset + delta)"
            ),
            (
                "st::machine_word_boundary_cast<uint>(((byte *)offset + delta))",
                "byte * -> uint",
            ),
        )

    def test_body_pointer_refines_only_generic_metadata_parameter(self) -> None:
        function = {
            "address": "00102030",
            "parameters": [
                {"name": "param_1", "type": "undefined4"},
                {"name": "param_2", "type": "int"},
            ],
        }
        body = (
            "void st::fn_00102030(Owner *param_1, int *param_2)\n\n"
            "{\n  return;\n}\n"
        )
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        declared = generator._declared_types(function, body)
        self.assertEqual(declared["param_1"], "Owner *")
        self.assertEqual(declared["param_2"], "int")

    def test_member_pointer_arithmetic_uses_member_not_owner_type(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(self.records(), [])
        generator.global_display_types = {}
        source = generator._boundary_expression(
            "owner->child + index", {"owner": "Owner *", "index": "int"}
        )
        self.assertIsNotNone(source)
        self.assertEqual(source.display_type, "Child *")
        self.assertEqual(source.kind, "concrete_pointer")
        self.assertIsNone(
            generator._boundary_replacement(
                "Child *", source, "owner->child + index"
            )
        )

    def test_member_array_arithmetic_decays_to_element_pointer(self) -> None:
        records = self.records() + [
            {
                "path": "/uint", "name": "uint",
                "class": "UnsignedIntegerDataType", "length": 4, "detail": {},
            },
            pointer("/uint *", "/uint"),
            {
                "path": "/uint[2]", "name": "uint[2]", "class": "ArrayDB",
                "length": 8,
                "detail": {
                    "element_type": "/uint", "element_count": 2,
                    "element_length": 4,
                },
            },
            {
                "path": "/ArrayOwner", "name": "ArrayOwner",
                "class": "StructureDB", "length": 8,
                "detail": {"components": [
                    component(0, 0, 8, "values", "/uint[2]")
                ]},
            },
            pointer("/ArrayOwner *", "/ArrayOwner"),
        ]
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(records, [])
        generator.global_display_types = {}
        source = generator._boundary_expression(
            "owner->values + index", {"owner": "ArrayOwner *"}
        )
        self.assertIsNotNone(source)
        self.assertEqual(source.display_type, "uint *")
        self.assertEqual(source.kind, "concrete_pointer")
        grouped = generator._boundary_expression(
            "(owner->values + 1) + index", {"owner": "ArrayOwner *"}
        )
        self.assertIsNotNone(grouped)
        self.assertEqual(grouped.display_type, "uint *")

    def test_exact_call_result_marker_recovers_source_view(self) -> None:
        records = self.records() + [
            {
                "path": "/ExactView",
                "name": "ExactView",
                "class": "StructureDB",
                "length": 4,
                "detail": {"components": []},
            },
            pointer("/ExactView *", "/ExactView"),
        ]
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(records, [])
        body = (
            "/* ST_CALLSITE[00102010]: CALL 0x00103000; "
            "direct=00103000 Producer; [STCallResultViewApplier] "
            "presentation_only; exact direct-call result=pointer:/ExactView; "
            "source view only */\n"
            "value = st::fn_00103000(arg);"
        )
        start = body.index("st::fn_")
        end = body.index(";", start)
        self.assertEqual(
            generator._exact_call_result_view(body, start, end),
            "ExactView *",
        )

    def test_runtime_scalar_alias_pointers_need_no_boundary_cast(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter([], [])
        self.assertTrue(
            generator.type_emitter.display_cpp_equivalent("uint *", "dword *")
        )
        self.assertTrue(
            generator.type_emitter.display_cpp_equivalent(
                "undefined4 *", "uint *"
            )
        )
        self.assertFalse(
            generator.type_emitter.display_cpp_equivalent(
                "undefined4 *", "DWORD *"
            )
        )
        self.assertIsNone(
            generator._boundary_replacement(
                "uint *", BoundaryValue("dword *", "concrete_pointer"),
                "&descriptor.flags",
            )
        )
        self.assertFalse(
            generator.type_emitter.display_cpp_equivalent("uint *", "short *")
        )

    def test_equal_width_integer_pointer_uses_storage_boundary(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter([], [])
        self.assertEqual(
            generator._boundary_replacement(
                "int *", BoundaryValue("uint *", "concrete_pointer"), "cursor"
            ),
            (
                "reinterpret_cast<int *>(cursor)",
                "equal-width integer storage uint * -> int *",
            ),
        )
        self.assertEqual(
            generator._boundary_replacement(
                "byte", BoundaryValue("byte *", "concrete_pointer"),
                "value",
            ),
            (
                "static_cast<byte>(st::machine_word_boundary_cast<uint>(value))",
                "pointer word byte * -> narrow byte",
            ),
        )
        self.assertEqual(
            generator._boundary_replacement(
                "undefined1", BoundaryValue("byte *", "concrete_pointer"),
                "value",
            ),
            (
                "(undefined1)(st::machine_word_boundary_cast<uint>(value))",
                "pointer word byte * -> narrow undefined1",
            ),
        )
        self.assertEqual(
            generator._boundary_replacement(
                "byte *", BoundaryValue("undefined1", "scalar"),
                "value",
            ),
            (
                "reinterpret_cast<byte *>(static_cast<uintptr_t>(value))",
                "integer address word undefined1 -> byte *",
            ),
        )
        self.assertEqual(
            generator._boundary_replacement(
                "Owner *", BoundaryValue("Child *", "concrete_pointer"),
                "child",
            ),
            (
                "reinterpret_cast<Owner *>(child)",
                "object storage view Child * -> Owner *",
            ),
        )
        self.assertEqual(
            generator._boundary_replacement(
                "undefined4 *",
                BoundaryValue("DWORD *", "concrete_pointer", True),
                "&value",
            ),
            (
                "(undefined4 *)&value",
                "exact storage address DWORD * -> undefined4 *",
            ),
        )

    def test_ghidra_byte_and_undefined_pointer_alias_widths(self) -> None:
        records = self.records() + [
            primitive("/byte", "byte", 1),
            primitive("/undefined1", "undefined1", 1),
            primitive("/char", "char", 1),
            pointer("/byte *", "/byte"),
            pointer("/undefined1 *", "/undefined1"),
            pointer("/char *", "/char"),
        ]
        records[-6]["class"] = "ByteDataType"
        records[-5]["class"] = "Undefined1DataType"
        records[-4]["class"] = "CharDataType"
        emitter = TypeEmitter(records, [])
        self.assertEqual(emitter.display_integer_pointer_width("byte *"), 1)
        self.assertEqual(emitter.display_integer_pointer_width("undefined1 *"), 1)
        self.assertEqual(emitter.display_integer_pointer_width("char *"), 1)

    def test_void_alias_uses_ordinary_object_pointer_conversion(self) -> None:
        records = self.records() + [
            primitive("/void", "void", 1),
            pointer("/void *", "/void"),
            {
                "path": "/LPVOID",
                "name": "LPVOID",
                "display_name": "LPVOID",
                "class": "TypedefDB",
                "length": 4,
                "detail": {"base_type": "/void *"},
            },
        ]
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(records, [])
        self.assertTrue(generator.type_emitter.display_is_void_pointer("LPVOID"))
        self.assertIsNone(
            generator._boundary_replacement(
                "LPVOID", BoundaryValue("Owner *", "concrete_pointer"), "owner"
            )
        )
        self.assertEqual(
            generator._boundary_replacement(
                "Owner *", BoundaryValue("LPVOID", "generic_pointer"), "storage"
            ),
            (
                "static_cast<Owner *>(storage)",
                "void storage pointer -> Owner *",
            ),
        )
        self.assertEqual(
            generator._boundary_replacement(
                "undefined4 *", BoundaryValue("LPVOID", "generic_pointer"),
                "storage",
            ),
            (
                "(undefined4 *)storage",
                "void storage pointer -> undefined4 *",
            ),
        )

    def test_exact_storage_address_uses_plain_neutral_pointer_cast(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter([], [])
        self.assertEqual(
            generator._boundary_replacement(
                "uint *",
                BoundaryValue(
                    "address of unresolved field", "generic_pointer", True
                ),
                "&record.field_0008",
            ),
            (
                "(uint *)&record.field_0008",
                "exact storage address address of unresolved field -> uint *",
            ),
        )

    def test_existing_pointer_cast_is_retargeted_without_helper(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter([], [])
        self.assertEqual(
            generator._boundary_replacement(
                "byte *", BoundaryValue("uint *", "concrete_pointer"),
                "(uint *)cursor",
            ),
            (
                "(byte *)cursor",
                "retarget explicit pointer cast uint * -> byte *",
            ),
        )

    def test_equivalent_outer_pointer_cast_uses_explicit_cpp_view(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(self.records(), [])
        self.assertEqual(
            generator._equivalent_outer_pointer_cast(
                "Owner *", "(Owner *)child", {"child": "Child *"}
            ),
            (
                "reinterpret_cast<Owner *>(child)",
                "explicit pointer view Child * -> Owner *",
            ),
        )
        self.assertIsNone(generator._equivalent_outer_pointer_cast(
            "Owner *", "(Owner *)index", {"index": "int"}
        ))

    def test_equivalent_outer_pointer_cast_preserves_const_removal_boundary(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(self.records(), [])
        self.assertEqual(
            generator._equivalent_outer_pointer_cast(
                "byte *", '(byte *)"payload"', {}
            ),
            (
                'st::pointer_boundary_cast<byte *>("payload")',
                "explicit pointer view const char * -> byte *",
            ),
        )

    def test_grid_object_pointer_view_keeps_exact_pointer_domain(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter(self.records(), [])
        self.assertEqual(
            generator._equivalent_outer_pointer_cast(
                "Owner *",
                "(Owner *)STGridAt3D(grid, x, y, z).objects[0]",
                {},
            ),
            (
                "reinterpret_cast<Owner *>(STGridAt3D(grid, x, y, z).objects[0])",
                "explicit pointer view STWorldObject * -> Owner *",
            ),
        )

    def test_exact_generic_call_result_keeps_established_storage_cast(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        generator.function_by_address = {
            "00103000": {
                "address": "00103000",
                "signature": "void * __stdcall Producer(uint size)",
                "calling_convention": "__stdcall",
                "parameters": [{"name": "size", "type": "uint"}],
                "varargs": False,
            }
        }
        function = {"address": "00102030", "parameters": []}
        body = (
            "void fn() {\n"
            "  undefined4 *local;\n"
            "  /* ST_CALLSITE[00102038]: CALL 0x00103000; "
            "direct=00103000 Producer; [STCallResultViewApplier] "
            "presentation_only; exact direct-call result=pointer:/undefined4; "
            "source view only */\n"
            "  local = st::fn_00103000(8);\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn("local = (undefined4 *)st::fn_00103000(8);", actual)
        self.assertNotIn("static_cast<undefined4 *>", actual)

    def test_default_external_return_uses_full_eax_for_exact_pointer_view(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = self.records()
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator.function_by_address = {
            "00103000": {
                "address": "00103000",
                "name": "Producer",
                "signature": "undefined __cdecl Producer(uint size)",
                "parameters": [{"name": "size", "type": "uint"}],
                "body_exported": False,
            }
        }
        generator.body_declarations = {}
        function = {"address": "00102030", "parameters": []}
        body = (
            "void fn() {\n"
            "  Owner *value;\n"
            "  /* ST_CALLSITE[00102038]: CALL 0x00103000; "
            "direct=00103000 Producer; [STCallResultViewApplier] "
            "presentation_only; exact direct-call result=pointer:/Owner; "
            "source view only */\n"
            "  value = st::fn_00103000(8);\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn(
            "value = st::pointer_boundary_cast<Owner *>("
            "st::fn_00103000(8));",
            actual,
        )
        self.assertEqual(
            generator._function_result_type(generator.function_by_address["00103000"]),
            "undefined4",
        )

    def test_exact_void_call_result_uses_instruction_local_callee_view(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = self.records() + [primitive("/uint", "uint", 4)]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator.function_by_address = {
            "00103000": {
                "address": "00103000",
                "name": "Producer",
                "signature": "void __stdcall Producer(uint size)",
                "parameters": [{"name": "size", "type": "uint"}],
                "body_exported": True,
            }
        }
        generator.body_declarations = {
            "00103000": "void __stdcall fn_00103000(uint size)"
        }
        function = {"address": "00102030", "parameters": []}
        body = (
            "void fn() {\n"
            "  Owner *value;\n"
            "  /* ST_CALLSITE[00102038]: CALL 0x00103000; "
            "direct=00103000 Producer; [STCallResultViewApplier] "
            "readability_validated; exact direct-call result=pointer:/Owner; "
            "signature=__stdcall;pointer:/Owner;/uint */\n"
            "  value = st::fn_00103000(8);\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn(
            "value = st::exact_call_result_callee<"
            "Owner * (__stdcall *)(uint)>(&st::fn_00103000)(8);",
            actual,
        )

    def test_phantom_assignment_from_shared_void_call_is_discarded(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        generator.function_by_address = {
            "00103000": {
                "address": "00103000",
                "signature": "void __stdcall Release(int *value)",
                "parameters": [{"name": "value", "type": "int *"}],
                "body_exported": True,
            }
        }
        generator.body_declarations = {
            "00103000": "void __stdcall fn_00103000(int *value)"
        }
        actual = generator._repair_void_call_assignments(
            "00102030", {"parameters": []},
            "void fn(int *slot) {\n"
            "  undefined4 *result = nullptr;\n"
            "  result = (undefined4 *)st::fn_00103000(slot);\n}\n",
        )
        self.assertIn("  st::fn_00103000(slot);", actual)
        self.assertNotIn("result = (undefined4 *)", actual)

    def test_exact_storage_address_uses_ordinary_generic_pointer_cast(self) -> None:
        generator = SourceTreeGenerator.__new__(SourceTreeGenerator)
        generator.type_emitter = TypeEmitter([], [])
        self.assertEqual(
            generator._boundary_replacement(
                "undefined4 *",
                BoundaryValue("OwnerVTable **", "concrete_pointer", True),
                "&owner->vtable",
            ),
            (
                "(undefined4 *)&owner->vtable",
                "exact storage address OwnerVTable ** -> undefined4 *",
            ),
        )

    def test_generated_callback_aliases_compare_by_exact_function_abi(self) -> None:
        records = self.records() + [
            pointer("/callback_a *", "/callback_a"),
            pointer("/callback_b *", "/callback_b"),
        ]
        for name in ("callback_a", "callback_b"):
            records.append({
                "path": "/" + name,
                "name": name,
                "class": "FunctionDefinitionDB",
                "length": 1,
                "detail": {
                    "return_type": "/int",
                    "calling_convention": "__cdecl",
                    "varargs": False,
                    "arguments": [{"name": "value", "type": "/int"}],
                },
            })
        emitter = TypeEmitter(records, [])
        self.assertTrue(
            emitter.display_cpp_equivalent("callback_a *", "callback_b *")
        )

    def test_unanimous_callback_uses_type_one_neutral_local_once(self) -> None:
        records = self.records() + [
            pointer("/callback_a *", "/callback_a"),
            pointer("/callback_b *", "/callback_b"),
        ]
        for name in ("callback_a", "callback_b"):
            records.append({
                "path": "/" + name,
                "name": name,
                "class": "FunctionDefinitionDB",
                "length": 1,
                "detail": {
                    "return_type": "/int",
                    "calling_convention": "__cdecl",
                    "varargs": False,
                    "arguments": [{"name": "value", "type": "/int"}],
                },
            })
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator.function_by_address = {
            "00401000": {
                "address": "00401000",
                "parameters": [{"name": "callback", "type": "callback_a *"}],
                "varargs": False,
            },
            "00402000": {
                "address": "00402000",
                "parameters": [{"name": "callback", "type": "callback_b *"}],
                "varargs": False,
            },
        }
        function = {"address": "00403000", "parameters": []}
        body = (
            "void fn_00403000() {\n"
            "  code *callback;\n"
            "  st::fn_00401000(callback);\n"
            "  st::fn_00402000(callback);\n"
            "}\n"
        )
        actual = generator._materialize_callable_local_families(
            "00403000", function, body
        )
        declaration = re.search(
            r"(?m)^\s*(STFnType_callback_a_[0-9a-f]+ \*)\s*callback;", actual
        )
        self.assertIsNotNone(declaration)
        self.assertNotIn("code *callback;", actual)
        self.assertTrue(generator.type_emitter.display_cpp_equivalent(
            declaration.group(1), "callback_b *"
        ))
        self.assertEqual(
            generator.stats["callable_local_family_materializations"], 1
        )

    def test_mixed_callback_local_splits_only_closed_case_lifetimes(self) -> None:
        records = self.records() + [
            pointer("/callback_a *", "/callback_a"),
            pointer("/callback_b *", "/callback_b"),
        ]
        for name, argument in (("callback_a", "/int"), ("callback_b", "/Child *")):
            records.append({
                "path": "/" + name,
                "name": name,
                "class": "FunctionDefinitionDB",
                "length": 1,
                "detail": {
                    "return_type": "/int",
                    "calling_convention": "__cdecl",
                    "varargs": False,
                    "arguments": [{"name": "value", "type": argument}],
                },
            })
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator.function_by_address = {
            "00401000": {
                "address": "00401000",
                "signature": "void use_a(callback_a * callback)",
                "calling_convention": "__cdecl",
                "parameters": [{"name": "callback", "type": "callback_a *"}],
                "varargs": False,
            },
            "00402000": {
                "address": "00402000",
                "signature": "void use_b(callback_b * callback)",
                "calling_convention": "__cdecl",
                "parameters": [{"name": "callback", "type": "callback_b *"}],
                "varargs": False,
            },
            "00403000": {
                "address": "00403000",
                "signature": "int __cdecl target_a(int value)",
                "calling_convention": "__cdecl",
                "parameters": [{"name": "value", "type": "int"}],
                "varargs": False,
            },
            "00404000": {
                "address": "00404000",
                "signature": "int __cdecl target_b(Child * value)",
                "calling_convention": "__cdecl",
                "parameters": [{"name": "value", "type": "Child *"}],
                "varargs": False,
            },
        }
        function = {"address": "00405000", "parameters": []}
        body = (
            "void fn_00405000(int selector) {\n"
            "  code *callback;\n"
            "  switch (selector) {\n"
            "  case 1:\n"
            "    callback = st::fn_00403000;\n"
            "    st::fn_00401000(callback);\n"
            "    break;\n"
            "  case 2:\n"
            "    callback = st::fn_00404000;\n"
            "    st::fn_00402000(callback);\n"
            "    break;\n"
            "  }\n"
            "}\n"
        )
        actual = generator._materialize_callable_local_families(
            "00405000", function, body
        )
        self.assertIn("code *callback;", actual)
        self.assertEqual(len(re.findall(
            r"\bcallback_callback_[0-9a-f]{8}\b", actual
        )), 6)
        self.assertNotIn("fn_00401000(callback)", actual)
        self.assertNotIn("fn_00402000(callback)", actual)
        self.assertNotIn("callback = st::fn_", actual)

    def test_machine_proven_neutral_callable_role_rewrites_only_parameter(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        function = {
            "address": "00102030",
            "parameters": [
                {"name": "this", "type": "Owner *"},
                {"name": "callback", "type": "undefined *"},
                {"name": "payload", "type": "undefined *"},
            ],
            "varargs": False,
        }
        generator.neutral_callable_parameters["00102030"].add(1)
        body = (
            "void __thiscall Owner::run(Owner *this, undefined *callback, "
            "undefined *payload) {\n"
            "  (*(code *)callback)(payload);\n}\n"
        )
        actual = generator._rewrite_neutral_callable_parameter_declarations(
            "00102030", function, body
        )
        self.assertIn("code *callback", actual)
        self.assertIn("undefined *payload", actual)
        self.assertEqual(
            generator._function_parameter_spec(function),
            (("Owner *", "code *", "undefined *"), False),
        )

    def test_transparent_thunk_uses_target_metadata_not_body_presentation(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        thunk = {
            "address": "00102030", "thunk": True,
            "thunk_target": "00102040 Owner::run",
            "signature": "undefined4 thunk_run(StaleReceiver * this)",
            "parameters": [{"name": "this", "type": "StaleReceiver *"}],
            "varargs": False,
        }
        target = {
            "address": "00102040", "thunk": False,
            "signature": "Owner * __thiscall run(Owner * this, int value)",
            "parameters": [
                {"name": "this", "type": "Owner *"},
                {"name": "value", "type": "int"},
            ],
            "varargs": False,
        }
        generator.function_by_address = {
            "00102030": thunk, "00102040": target,
        }
        generator.body_declarations["00102040"] = (
            "DifferentView * fn_00102040(DifferentView * st_this)"
        )
        self.assertEqual(
            generator._function_parameter_spec(thunk),
            (("Owner *", "int"), False),
        )
        self.assertEqual(generator._function_result_type(thunk), "Owner *")

    def test_raw_offset_resolves_to_existing_exact_member(self) -> None:
        emitter = TypeEmitter(self.records(), [])
        self.assertEqual(
            emitter.display_member_name_at_offset("Owner *", 4, True),
            "child",
        )
        self.assertIsNone(
            emitter.display_member_name_at_offset("Owner *", 3, True)
        )

    def test_generated_anonymous_view_accepts_equal_exact_record(self) -> None:
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

    def test_stale_hidden_receiver_type_path_migrates_by_exact_address(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [{
            "path": "/Recovered/HiddenThis/RecoveredReceiver_0064A970",
            "name": "RecoveredReceiver_0064A970",
            "display_name": "RecoveredReceiver_0064A970",
            "class": "StructureDB",
            "length": 8,
            "detail": {"components": []},
        }]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        self.assertEqual(
            generator._serialized_type_expression(
                "pointer:/Recovered/HiddenThis/AnonReceiver_0064A970"
            ),
            "RecoveredReceiver_0064A970 *",
        )

    def test_pointer_word_comparison_and_switch_use_exact_machine_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        body = (
            "void fn() {\n"
            "  byte *cursor;\n"
            "  uint word;\n"
            "  if (cursor == word) use();\n"
            "  if (*cursor <= word) use();\n"
            "  switch (cursor) { default: break; }\n"
            "}\n"
        )
        actual = generator._repair_exact_storage_comparisons(
            "00102030", {"parameters": []}, body
        )
        self.assertIn(
            "st::machine_word_boundary_cast<uint>(cursor) == word", actual
        )
        self.assertIn(
            "switch (st::machine_word_boundary_cast<uint>(cursor))", actual
        )
        self.assertIn("if (*cursor <= word)", actual)
        self.assertEqual(
            generator.stats["exact_storage_comparison_boundaries"], 1
        )
        self.assertEqual(generator.stats["exact_pointer_switch_boundaries"], 1)

    def test_parenthesized_stack_address_comparison_uses_machine_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        body = (
            "void fn() {\n"
            "  alignas(4) byte st_stack_frame[128];\n"
            "  if ((st_stack_frame + 96) != &DAT_0000000c) use();\n"
            "}\n"
        )
        actual = generator._repair_exact_storage_comparisons(
            "00102030", {"parameters": []}, body
        )
        self.assertIn(
            "st::machine_word_boundary_cast<uint>((st_stack_frame + 96)) != "
            "st::machine_word_boundary_cast<uint>(&DAT_0000000c)",
            actual,
        )

    def test_casted_dereference_comparison_keeps_complete_operand(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        body = (
            "void fn(int *cursor, uint *word) {\n"
            "  if (cursor < (uint)*word) use();\n"
            "  if ((char *)0x9 == word) use();\n"
            "}\n"
        )
        actual = generator._repair_exact_storage_comparisons(
            "00102030",
            {"parameters": [
                {"name": "cursor", "type": "int *"},
                {"name": "word", "type": "uint *"},
            ]},
            body,
        )
        self.assertIn(
            "st::machine_word_boundary_cast<uint>(cursor) < (uint)*word",
            actual,
        )
        self.assertIn(
            "st::machine_word_boundary_cast<uint>((char *)0x9) == "
            "st::machine_word_boundary_cast<uint>(word)",
            actual,
        )

    def test_pointer_plus_word_comparison_uses_complete_machine_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        body = (
            "void fn() {\n"
            "  byte *cursor;\n"
            "  int delta;\n"
            "  if (cursor + delta < (byte *)0x2) use();\n"
            "}\n"
        )
        actual = generator._repair_exact_storage_comparisons(
            "00102030", {"parameters": []}, body
        )
        self.assertIn(
            "st::machine_word_boundary_cast<uint>(cursor + delta) < "
            "st::machine_word_boundary_cast<uint>((byte *)0x2)",
            actual,
        )

    def test_pointer_float_storage_reuse_uses_bit_view(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        body = (
            "void fn(int *word, float value) {\n"
            "  value = (float)word;\n"
            "  word = (int *)value;\n"
            "}\n"
        )
        actual = generator._repair_pointer_float_storage_views(
            "00102030",
            {"parameters": [
                {"name": "word", "type": "int *"},
                {"name": "value", "type": "float"},
            ]},
            body,
        )
        self.assertIn("value = st::storage_bit_cast<float>(word);", actual)
        self.assertIn(
            "word = st::storage_bit_cast<int *>(value);",
            actual,
        )

    def test_pointer_float_storage_view_does_not_split_member_call(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        body = (
            "float fn(Owner *owner) {\n"
            "  return (float)owner->method(7);\n"
            "}\n"
        )
        actual = generator._repair_pointer_float_storage_views(
            "00102030",
            {"parameters": [{"name": "owner", "type": "Owner *"}]},
            body,
        )
        self.assertEqual(actual, body)

    def test_float_expression_and_low_word_piece_recover_pointer_storage(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        body = (
            "void fn(Owner *owner, float delta, undefined4 aggregate) {\n"
            "  owner = (Owner *)(delta + delta);\n"
            "  owner = (Owner *)STPiece<0,4>(aggregate);\n"
            "}\n"
        )
        actual = generator._repair_pointer_float_storage_views(
            "00102030",
            {"parameters": [
                {"name": "owner", "type": "Owner *"},
                {"name": "delta", "type": "float"},
                {"name": "aggregate", "type": "undefined4"},
            ]},
            body,
        )
        self.assertIn(
            "owner = st::storage_bit_cast<Owner *>("
            "static_cast<float>(delta + delta));",
            actual,
        )
        self.assertIn(
            "owner = reinterpret_cast<Owner *>(static_cast<uintptr_t>("
            "static_cast<uint32_t>(STPiece<0,4>(aggregate))));",
            actual,
        )

    def test_pointer_boundary_assignment_scan_does_not_consume_null_comparison(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), generator.issues)
        function = {
            "address": "00102030",
            "parameters": [{"name": "owner", "type": "Owner *"}],
        }
        body = (
            "void fn(Owner *owner) {\n"
            "  if ((consume(7),\n"
            "       owner != nullptr)) use(owner);\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn("owner != nullptr", actual)
        self.assertNotIn("machine_word_boundary_cast", actual)
        self.assertNotIn("static_cast<", actual)

    def test_unresolved_global_array_assignment_keeps_machine_word_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        function = {
            "address": "00102030",
            "parameters": [{"name": "value", "type": "uint *"}],
        }
        body = (
            "void fn(uint *value) {\n"
            "  (&DAT_00103040)[7] = value;\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn(
            "(&DAT_00103040)[7] = "
            "st::machine_word_boundary_cast<undefined4>(value);",
            actual,
        )

    def test_known_pointer_global_array_assignment_keeps_pointer_type(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        generator.global_display_types["PTR_00103040"] = "char *"
        function = {
            "address": "00102030",
            "parameters": [{"name": "value", "type": "char *"}],
        }
        body = (
            "void fn(char *value) {\n"
            "  (&PTR_00103040)[7] = value;\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertEqual(body, actual)

    def test_unresolved_global_callback_uses_exact_word_view(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        generator.global_display_types["DAT_00103040"] = "undefined4"
        actual = generator._repair_raw_global_pointer_uses(
            "00102030", {}, "void fn() { (*DAT_00103040)(7); }\n"
        )
        self.assertIn(
            "(*st::storage_bit_cast<code *>(DAT_00103040))(7)", actual
        )

    def test_cancelled_unary_negation_does_not_become_decrement(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        actual = generator._repair_cancelled_unary_negation(
            "00102030", "float fn() { return --(left * right); }\n"
        )
        self.assertIn("return (left * right);", actual)

    def test_four_byte_record_literal_uses_storage_bit_cast(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [{
            "path": "/WordRecord",
            "name": "WordRecord",
            "display_name": "WordRecord",
            "class": "StructureDB",
            "length": 4,
            "detail": {"components": [component(
                0, 0, 4, "word", "/undefined4"
            )]},
        }]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        actual = generator._repair_exact_storage_casts(
            "00102030", {}, "void fn() { auto value = (WordRecord)0x1234; }\n"
        )
        self.assertIn(
            "st::storage_bit_cast<WordRecord>(static_cast<uint32_t>(0x1234))",
            actual,
        )

    def test_grouped_four_byte_record_to_scalar_uses_storage_bit_cast(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [
            primitive("/undefined1", "undefined1", 1),
            primitive("/undefined4", "undefined4", 4),
            {
                "path": "/PackedWord",
                "name": "PackedWord",
                "display_name": "PackedWord",
                "class": "StructureDB",
                "length": 4,
                "detail": {"components": [
                    component(0, 0, 1, "lo", "/undefined1"),
                    component(1, 1, 1, "hi", "/undefined1"),
                    component(2, 2, 2, "tail", "/undefined2"),
                ]},
            },
        ]
        records[1]["class"] = "Undefined4DataType"
        generator.type_emitter = TypeEmitter(records, generator.issues)
        actual = generator._repair_exact_storage_casts(
            "00102030", {"parameters": []},
            "void fn() {\n  PackedWord packed;\n"
            "  auto value = (uint32_t)(packed);\n}\n",
        )
        self.assertIn(
            "value = st::storage_bit_cast<uint32_t>(packed);", actual
        )

    def test_grouped_storage_cast_does_not_detach_postfix_member_chain(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [{
            "path": "/PackedWord",
            "name": "PackedWord",
            "display_name": "PackedWord",
            "class": "StructureDB",
            "length": 4,
            "detail": {"components": []},
        }]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        body = (
            "void fn() {\n  PackedWord packed;\n"
            "  auto value = (uint)(packed).words.low;\n}\n"
        )
        actual = generator._repair_exact_storage_casts(
            "00102030", {"parameters": []}, body
        )
        self.assertIn("value = (uint)(packed).words.low;", actual)
        self.assertNotIn("storage_bit_cast<uint>(packed).words", actual)

    def test_grouped_wider_record_to_scalar_uses_exact_low_piece(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [
            primitive("/undefined1", "undefined1", 1),
            primitive("/undefined2", "undefined2", 2),
            {
                "path": "/PackedSix",
                "name": "PackedSix",
                "display_name": "PackedSix",
                "class": "StructureDB",
                "length": 6,
                "detail": {"components": [
                    component(0, 0, 1, "", "/undefined1"),
                    component(1, 1, 1, "", "/undefined1"),
                    component(2, 2, 1, "", "/undefined1"),
                    component(3, 3, 1, "", "/undefined1"),
                    component(4, 4, 2, "tail", "/undefined2"),
                ]},
            },
        ]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        actual = generator._repair_exact_storage_casts(
            "00102030", {"parameters": []},
            "void fn() {\n  PackedSix packed;\n"
            "  auto value = (uint32_t)(packed);\n}\n",
        )
        self.assertIn(
            "value = static_cast<uint32_t>(STPiece<0,4>(packed));", actual
        )

    def test_unnamed_record_field_address_uses_exact_byte_offset(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [{
            "path": "/Owner",
            "name": "Owner",
            "display_name": "Owner",
            "class": "StructureDB",
            "length": 32,
            "detail": {"components": [component(
                0, 0, 4, "head", "/undefined4"
            )]},
        }, pointer("/Owner *", "/Owner")]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        actual = generator._repair_missing_field_addresses(
            "00102030", {
                "parameters": [{"name": "owner", "type": "Owner *"}]
            },
            "void fn(Owner *owner) {\n"
            "  owner = (Owner *)&owner->field_0x10;\n}\n",
        )
        self.assertIn(
            "reinterpret_cast<Owner *>("
            "reinterpret_cast<byte *>(owner) + 0x10)", actual
        )

    def test_four_byte_byte_array_with_scalar_lifetime_is_scalarized(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        body = (
            "void fn() {\n"
            "  byte local_24[4];\n"
            "  local_24 = (undefined1 [4])(4 - value);\n"
            "  consume((Owner *)local_24, (short)local_24);\n"
            "}\n"
        )
        actual = generator._repair_scalarized_word_arrays(
            "00102030", {"parameters": []}, body
        )
        self.assertIn("uint local_24;", actual)
        self.assertIn("local_24 = (4 - value);", actual)
        self.assertIn("consume((Owner *)&local_24, (short)local_24);", actual)

    def test_partitioned_four_byte_record_assigns_as_exact_storage_word(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [
            primitive("/undefined1", "undefined1", 1),
            primitive("/short", "short", 2),
            primitive("/undefined4", "undefined4", 4),
            {
                "path": "/PackedWord",
                "name": "PackedWord",
                "display_name": "PackedWord",
                "class": "StructureDB",
                "length": 4,
                "detail": {"components": [
                    component(0, 0, 1, "lo", "/undefined1"),
                    component(1, 1, 1, "hi", "/undefined1"),
                    component(2, 2, 2, "tail", "/short"),
                ]},
            },
        ]
        records[2]["class"] = "Undefined4DataType"
        generator.type_emitter = TypeEmitter(records, generator.issues)
        function = {"address": "00102030", "parameters": []}
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function,
            "void fn() {\n  undefined4 word;\n  PackedWord packed;\n"
            "  word = packed;\n}\n",
        )
        self.assertIn(
            "word = st::storage_bit_cast<undefined4>(packed);", actual
        )

    def test_nested_member_assignment_keeps_machine_word_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        records = [
            {
                "path": "/Owner",
                "name": "Owner",
                "display_name": "Owner",
                "class": "StructureDB",
                "length": 4,
                "detail": {"components": [component(
                    0, 0, 4, "word", "/undefined4"
                )]},
            },
            pointer("/Owner *", "/Owner"),
        ]
        generator.type_emitter = TypeEmitter(records, generator.issues)
        function = {
            "address": "00102030",
            "parameters": [
                {"name": "owner", "type": "Owner *"},
                {"name": "value", "type": "uint *"},
            ],
        }
        body = (
            "void fn(Owner *owner, uint *value) {\n"
            "  if ((owner->word = value, owner != nullptr)) use();\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn(
            "owner->word = st::machine_word_boundary_cast<undefined4>(value)",
            actual,
        )
        self.assertIn("owner != nullptr", actual)

    def test_multiline_casted_lvalue_keeps_its_declared_pointee(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        function = {
            "address": "00102030",
            "parameters": [{"name": "index", "type": "int"}],
        }
        body = (
            "void fn(int index) {\n"
            "  uint local;\n"
            "  byte storage[32];\n"
            "  *(uint **)((int)storage +\n"
            "             index * 4 + 8) = &local;\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn("index * 4 + 8) = &local;", actual)
        self.assertNotIn("machine_word_boundary_cast", actual)

    def test_masked_string_initializer_retains_literal_boundary(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        function = {
            "address": "00102030",
            "parameters": [
                {"name": "text", "type": "char *"},
                {"name": "index", "type": "uint"},
            ],
        }
        body = (
            "void fn(char *text, uint index) {\n"
            "  text = \"entry\" + index;\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn(
            'text = st::mutable_c_string("entry" + index);', actual
        )

    def test_explicit_stfield_pointer_assignment_uses_declared_view(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter([], generator.issues)
        function = {
            "address": "00102030",
            "parameters": [
                {"name": "owner", "type": "void *"},
                {"name": "bytes", "type": "byte *"},
            ],
        }
        body = (
            "void fn(void *owner, byte *bytes) {\n"
            "  STField<undefined4 *>(owner,0x20) = bytes;\n"
            "}\n"
        )
        actual = generator._repair_exact_pointer_boundaries(
            "00102030", function, body
        )
        self.assertIn(
            "STField<undefined4 *>(owner,0x20) = "
            "reinterpret_cast<undefined4 *>(bytes);",
            actual,
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

    def test_stale_line_wrapped_qualifier_allows_space_before_scope(self) -> None:
        spelling = (
            "SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970\n"
            "    ::st::fn_004016B8(receiver)"
        )
        actual, count = QUALIFIED_ADDRESS_SYMBOL_RE.subn(
            lambda match: match.group(1), spelling
        )
        self.assertEqual(count, 1)
        self.assertEqual(actual, "st::fn_004016B8(receiver)")

    def test_stale_address_member_call_restores_explicit_this_argument(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), [])
        generator.function_by_address = {
            "00102030": {
                "address": "00102030",
                "calling_convention": "__thiscall",
                "parameters": [
                    {"name": "this", "type": "Owner *"},
                    {"name": "value", "type": "int"},
                ],
                "varargs": False,
            }
        }
        actual = generator._repair_stale_address_member_calls(
            "00400000",
            {"parameters": [{"name": "owner", "type": "Owner *"}]},
            "result = owner->st::fn_00102030(value);",
        )
        self.assertEqual(actual, "result = st::fn_00102030(owner,value);")
        self.assertEqual(generator.stats["stale_address_member_call_repairs"], 1)

    def test_exact_thiscall_receiver_transport_does_not_assert_inheritance(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), [])
        actual = generator._exact_receiver_transport_replacement(
            "Owner *", BoundaryValue("Child *", "concrete_pointer"), "child"
        )
        self.assertEqual(
            actual,
            (
                "st::pointer_boundary_cast<Owner *>(child)",
                "exact direct __thiscall ECX transport Child * -> Owner *",
            ),
        )

    def test_machine_word_nullptr_becomes_zero_but_pointer_null_stays(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        generator.type_emitter = TypeEmitter(self.records(), [])
        body = (
            "void fn(undefined4 word, Owner *owner) {\n"
            "  if (word != nullptr) word = nullptr;\n"
            "  if (owner != nullptr) use(owner);\n"
            "}\n"
        )
        actual = generator._repair_machine_word_null_literals(
            "00102030",
            {"parameters": [
                {"name": "word", "type": "undefined4"},
                {"name": "owner", "type": "Owner *"},
            ]},
            body,
        )
        self.assertIn("if (word != 0) word = 0;", actual)
        self.assertIn("if (owner != nullptr)", actual)

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

    def test_qualified_ghidra_global_leaf_gets_stable_address_alias(self) -> None:
        item = {
            "address": "0044D1D0",
            "name": "switchD_0044d04b::switchdataD_0044d1d0",
        }
        self.assertEqual(
            "st_global_0044D1D0",
            global_alias_for_token(
                "switchdataD_0044d1d0", "0044D1D0", item
            ),
        )

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

    def test_unscoped_concat_piece_gets_exact_function_storage(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        body = (
            "void fn() {\n"
            "  if (condition) {\n"
            "    _local_2c = CONCAT22(high, low);\n"
            "  }\n"
            "  use(_local_2c);\n"
            "}\n"
        )
        actual = generator._materialize_unscoped_synthetic_words(
            "00102030", {"parameters": []}, body
        )
        self.assertIn("uint32_t _local_2c;", actual)
        self.assertIn("_local_2c = CONCAT22(high, low);", actual)

    def test_unscoped_concat_piece_removes_unsafe_auto_redeclaration(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        body = (
            "void fn() {\n"
            "  if (condition) goto done;\n"
            "  auto _local_10 = CONCAT31(high, low);\n"
            "done:\n"
            "  use(_local_10);\n"
            "}\n"
        )
        actual = generator._materialize_unscoped_synthetic_words(
            "00102030", {"parameters": []}, body
        )
        self.assertIn("uint32_t _local_10;", actual)
        self.assertIn("_local_10 = CONCAT31(high, low);", actual)
        self.assertNotIn("auto _local_10", actual)

    def test_exporter_scalar_split_is_hoisted_without_retyping(self) -> None:
        generator = SourceTreeGenerator(
            Path("."), Path("."), Path("out"), Path("receipt")
        )
        body = (
            "void fn() {\n"
            "  if (condition) {\n"
            "    int scalar_pointer = value * 4; "
            "/* split integer lifetime from pointer-typed SSA storage */\n"
            "  }\n"
            "  use(scalar_pointer);\n"
            "}\n"
        )
        actual = generator._materialize_unscoped_synthetic_words(
            "00102030", {"parameters": []}, body
        )
        self.assertIn("int scalar_pointer;", actual)
        self.assertIn("scalar_pointer = value * 4;", actual)
        self.assertNotIn("int scalar_pointer = value", actual)

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

    def test_narrow_parameter_output_uses_materialized_machine_word_slot(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {
            "parameters": [{
                "name": "param_1", "type": "char", "length": 1,
                "storage": "Stack[0x4]:1",
            }],
        }
        body = (
            "int fn(char param_1) {\n"
            "  output((int *)&param_1);\n"
            "  return consume(_param_1);\n"
            "}\n"
        )
        actual = generator._materialize_promoted_parameter_slots(
            "00102030", function, body
        )
        self.assertIn("int _param_1 = static_cast<int>(param_1);", actual)
        self.assertIn("output(&_param_1);", actual)
        self.assertNotIn("(int *)&param_1", actual)
        self.assertEqual(
            generator.stats["promoted_parameter_slot_address_repairs"], 1
        )

    def test_semantically_named_narrow_parameter_gets_machine_word_slot(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {
            "parameters": [{
                "name": "objectId", "type": "char", "length": 1,
                "storage": "Stack[0x4]:1",
            }],
        }
        actual = generator._materialize_promoted_parameter_slots(
            "00102030", function,
            "int fn(char objectId) { return _objectId; }\n",
        )
        self.assertIn(
            "int _objectId = static_cast<int>(objectId);", actual
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

    def test_split_lifetime_owns_synthetic_parameter_before_promotion(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {
            "parameters": [{
                "name": "param_1", "type": "short", "length": 2,
                "storage": "Stack[0x4]:2",
            }],
        }
        body = "int fn(short param_1) {\n  auto _param_1 = 5;\n  return _param_1;\n}\n"
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

    def test_label_is_not_mistaken_for_synthetic_slot_declaration(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        function = {
            "parameters": [{
                "name": "param_1", "type": "short", "length": 2,
                "storage": "Stack[0x4]:2",
            }],
        }
        body = (
            "int fn(short param_1) {\n"
            "LAB_00102040:\n"
            "  _param_1 = (int)param_1;\n"
            "  return _param_1;\n"
            "}\n"
        )
        actual = generator._materialize_promoted_parameter_slots(
            "00102030", function, body
        )
        self.assertIn("int _param_1 = static_cast<int>(param_1);", actual)

    def test_stack_split_auto_uses_unanimous_exact_output_word(self) -> None:
        records = [
            primitive("/undefined4", "undefined4", 4),
            pointer("/undefined4 *", "/undefined4"),
        ]
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.type_emitter = TypeEmitter(records, generator.issues)
        generator.function_by_address = {
            "00102040": {
                "address": "00102040",
                "parameters": [{"name": "output", "type": "undefined4 *"}],
            }
        }
        body = (
            "void fn() {\n"
            "  auto value_after_write = 0; /* compiler stack-slot lifetime split */\n"
            "  st::fn_00102040(&value_after_write);\n"
            "  use(value_after_write);\n"
            "}\n"
        )
        actual = generator._refine_exact_auto_output_storage(
            "00102030", {"parameters": []}, body
        )
        self.assertIn("uint32_t value_after_write = 0;", actual)

    def test_exact_address_coded_global_is_declared_without_reference_list(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        record = {
            "address": "0044D1D4", "name": "PTR_caseD_3_0044d1d4",
            "type": "undefined4 *",
        }
        generator.global_by_address = {"0044D1D4": record}
        names = generator._used_global_names(
            {"referenced_globals": []},
            "void fn() { use(PTR_caseD_3_0044d1d4); }",
        )
        self.assertIn("PTR_caseD_3_0044d1d4", names)

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

    def test_neutral_utility_output_materializes_full_machine_word(self) -> None:
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
            "parameters": [{
                "name": "objectId", "type": "char", "length": 1,
                "storage": "Stack[0x4]:1",
            }],
        }
        body = (
            "int fn(char objectId) {\n"
            "  st::fn_00102030(array,index,&objectId);\n"
            "  return _objectId;\n"
            "}\n"
        )
        actual = generator._materialize_machine_word_output_lifetimes(
            "00102020", function, body
        )
        self.assertIn("uint32_t _objectId;", actual)
        self.assertIn("st::fn_00102030(array,index,&_objectId);", actual)

    def test_callable_value_uses_unique_address_stable_thunk(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.function_by_address = {
            "00102030": {"thunk": True, "thunk_target": "00102040 target"},
            "00102040": {"thunk": False, "thunk_target": ""},
        }
        generator.callable_addresses_by_spelling["Callback"].update(
            {"00102030", "00102040"}
        )
        actual = generator._repair_callable_symbol_values(
            "00102010", "void fn() { handler = Callback; }"
        )
        self.assertIn("handler = st::fn_00102030;", actual)

    def test_unique_ordinary_call_is_not_rewritten_without_call_relation(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.function_by_address = {"00102030": {}}
        generator.callable_addresses_by_spelling["NamedCall"].add("00102030")
        body = "void fn() { NamedCall(value); }"
        self.assertEqual(
            body, generator._repair_callable_symbol_values("00102010", body)
        )

    def test_sanitized_callable_call_uses_address_stable_symbol(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.function_by_address = {"00102030": {}}
        generator.callable_addresses_by_spelling["FID_conflict__remove"].add(
            "00102030"
        )
        generator.sanitized_callable_spellings.add("FID_conflict__remove")
        actual = generator._repair_callable_symbol_values(
            "00102010", "void fn() { FID_conflict__remove(value); }"
        )
        self.assertIn("st::fn_00102030(value)", actual)

    def test_constructor_spelling_does_not_replace_record_declaration(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.type_emitter = TypeEmitter([{
            "path": "/Owner", "name": "Owner", "class": "StructureDB",
            "length": 4, "detail": {"components": []},
        }], [])
        generator.function_by_address = {"00102030": {}}
        generator.callable_addresses_by_spelling["Owner"].add("00102030")
        body = "void fn(Owner *owner) { Owner *copy = owner; }"
        self.assertEqual(
            body, generator._repair_callable_symbol_values("00102010", body)
        )

    def test_message_arg_cast_selects_storage_facet(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.type_emitter = TypeEmitter([], [])
        function = {
            "parameters": [
                {"name": "owner", "type": "Owner *"},
                {"name": "value", "type": "int"},
            ]
        }
        actual = generator._repair_message_arg_facets(
            "00102020", function,
            "arg0 = (STMessageArg)owner; arg1 = (STMessageArg)value;",
        )
        self.assertIn("st::message_arg_pointer(owner)", actual)
        self.assertIn("st::message_arg_i32(static_cast<int32_t>(value))", actual)

    def test_address_stable_function_value_uses_dedicated_boundary(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.type_emitter = TypeEmitter([], [])
        replacement = generator._boundary_replacement(
            "char *",
            BoundaryValue("function address", "concrete_pointer", True),
            "st::fn_00102030",
        )
        self.assertIsNotNone(replacement)
        self.assertIn("function_address_boundary_cast", replacement[0])

    def test_opaque_high_storage_becomes_explicit_audit_local(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.type_emitter = TypeEmitter([], [])
        actual = generator._materialize_opaque_decompiler_storage(
            "00102020", {"parameters": []},
            "void fn() { fRam00000021 = 1.0; use(fRam00000021); }",
        )
        self.assertIn("float st_unresolved_fRam00000021{};", actual)
        self.assertNotIn(" use(fRam00000021)", actual)

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

    def test_equal_arity_overload_is_resolved_by_exact_direct_callsite(self) -> None:
        generator = SourceTreeGenerator(Path("."), Path("."), Path("out"), Path("receipt"))
        generator.function_by_address = {
            "00102030": {"parameters": [{}, {}]},
            "00102040": {"parameters": [{}, {}]},
        }
        generator.relations_by_caller["00102020"] = [{
            "call_site": "00102024",
            "direct": "00102040 Owner::PushTV",
        }]
        body = (
            "/* ST_CALLSITE[00102024]: CALL 00102040; direct=00102040 Owner::PushTV */\n"
            "Owner::PushTV(player, value);"
        )
        actual, count, unresolved = generator._rewrite_ambiguous_calls(
            body,
            {"Owner::PushTV": {"00102030", "00102040"}},
            address="00102020",
        )
        self.assertEqual(count, 1)
        self.assertFalse(unresolved)
        self.assertIn("st::fn_00102040(player, value)", actual)

    def test_call_arity_ignores_nested_and_template_commas(self) -> None:
        masked = "call(STPiece<3, 1>(value), nested(a, b), last)"
        open_paren = masked.index("(")
        self.assertEqual(call_argument_count(masked, open_paren), (3, len(masked) - 1))


if __name__ == "__main__":
    unittest.main()
