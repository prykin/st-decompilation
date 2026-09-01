#!/usr/bin/env python3
"""Build a deterministic C++ source projection from an accepted ST corpus.

The Ghidra database remains authoritative.  This tool consumes only the
accepted text corpus, never opens the project, and never invents a class owner
or a semantic type.  Address-stable free functions form the extraction ABI;
the recovered Ghidra names are retained as provenance.
"""

from __future__ import annotations

import argparse
import csv
import functools
import hashlib
import json
import os
import re
import shutil
import sys
from collections import Counter, defaultdict
from dataclasses import dataclass
from pathlib import Path, PureWindowsPath
from typing import Any, Iterable, Iterator, Mapping, Sequence


GENERATOR_SCHEMA = "st-source-tree"
GENERATOR_VERSION = 1
MARKER = ".st-generated-source-tree.json"
SOURCE_FILE_RE = re.compile(
    r"[A-Za-z]:\\[^\s\[]+?\.(?:cpp|c)\b", re.IGNORECASE
)
IDENTIFIER_RE = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
ADDRESS_NAME_RE = re.compile(r"\b_?(?:DAT|PTR)_[0-9A-Fa-f]{8}\b")
ADDRESS_CODED_GLOBAL_RE = re.compile(
    r"\b(?P<name>[A-Za-z_][A-Za-z0-9_]*_(?P<address>[0-9A-Fa-f]{8}))\b"
)
OPAQUE_IMAGE_TOKEN_RE = re.compile(
    r"(?<![A-Za-z0-9_])"
    r"(?P<name>(?:_?UNK_|[A-Za-z]?Ram(?:0x)?|ram0x)"
    r"(?P<address>[0-9A-Fa-f]{8}))"
    r"(?![A-Za-z0-9_])"
)
LOCAL_LABEL_RE = re.compile(r"(?m)^\s*(LAB_[0-9A-Fa-f]{8})\s*:")
ADDRESS_TAKEN_LABEL_RE = re.compile(r"&\s*(LAB_([0-9A-Fa-f]{8}))\b")
ADDRESS_CODED_FUNCTION_RE = re.compile(
    # An address-coded leaf after ``->``/``.`` is a generated member wrapper,
    # not proof of a direct free-function call.  Replacing it with
    # ``st::fn_ADDRESS`` can expose a different recovered owner, force a cast,
    # and make an already readable virtual/member call worse.
    r"(?<![A-Za-z0-9_.>])"
    r"(?:(?:[A-Za-z_][A-Za-z0-9_]*)\s*::\s*)*"
    r"(?:(?:thunk_)?FUN|sub)_[0-9A-Fa-f]{8}"
    r"(?![A-Za-z0-9_])"
)
QUALIFIED_ADDRESS_SYMBOL_RE = re.compile(
    r"(?<![A-Za-z0-9_])"
    r"(?:(?:[A-Za-z_][A-Za-z0-9_]*)\s*::\s*)+"
    r"(st::fn_[0-9A-Fa-f]{8})"
    r"(?![A-Za-z0-9_])"
)
QUALIFIED_GENERATED_GLOBAL_RE = re.compile(
    r"(?<![A-Za-z0-9_])"
    r"(?:(?:[A-Za-z_][A-Za-z0-9_]*)\s*::\s*)+"
    r"(st_(?:global|image|string)_[0-9A-F]{8})"
    r"(?![A-Za-z0-9_])"
)
OPAQUE_DECOMPILER_STORAGE_RE = re.compile(
    r"(?<![A-Za-z0-9_])(?P<name>"
    r"(?:[A-Za-z]*Ram(?:0x)?[0-9A-Fa-f]{8}|"
    r"register0x[0-9A-Fa-f]{8}|unique0x[0-9A-Fa-f]+))"
    r"(?![A-Za-z0-9_])"
)
DEGRADED_DUPLICATED_RECEIVER_CALL_RE = re.compile(
    r"\(\*\s*st::exact_indirect_callee<[^;\n]+?>\(\s*"
    r"(?P<receiver>[A-Za-z_][A-Za-z0-9_]*)->vtable"
    r"[^;\n]*?\)\s*\)\s*\(\s*(?P=receiver)\s*(?:,|\))"
)
BROKEN_PIECE_TEMPLATE_SPLICE_RE = re.compile(
    r"\bST(?:Literal)?Piece\s*<[^>\r\n]+>\s*"
    r"st::machine_word_boundary_cast\s*<"
)
RAW_DUPLICATED_VTABLE_CALL_RE = re.compile(
    r"\(\s*\*\s*(?P<receiver>[A-Za-z_][A-Za-z0-9_]*)->vtable"
    r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*"
    r"\s*\)\s*\(\s*(?P=receiver)\s*(?:,|\))"
)
STALE_ADDRESS_MEMBER_CALL_RE = re.compile(
    r"(?<![A-Za-z0-9_])"
    r"(?P<receiver>[A-Za-z_][A-Za-z0-9_]*"
    r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)"
    r"\s*->\s*(?P<callee>st::fn_(?P<address>[0-9A-F]{8}))\s*\("
)
READABILITY_METRIC_KINDS = frozenset({
    "exact_indirect_callee",
    "raw_code_indirect_call",
    "raw_duplicated_vtable_call",
    "generic_pointer_tower",
    "generic_undefined_declaration",
    "unaff_or_extraout",
    "undefined_static_cast",
    "presentation_failure",
    "stale_address_member_call",
    "dangling_qualified_address_prefix",
    "machine_word_nullptr",
    "pointer_boundary_cast",
    "raw_machine_field_projection",
    "raw_pointer_field_projection",
    "opaque_decompiler_storage",
})
EXACT_INDIRECT_CALLSITE_RE = re.compile(
    r"\[STIndirectCallsiteApplier\]\s+exact slot 0x"
    r"(?P<slot>[0-9A-Fa-f]+);\s+"
    r"(?:mode=(?P<mode>[A-Za-z0-9_-]+);\s+)?"
    r"signature=(?P<signature>[^\]\r\n]+)"
)
EXACT_CALLSITE_MARKER_RE = re.compile(
    r"ST_CALLSITE\[(?P<address>[0-9A-Fa-f]{8,16})\]"
)
RESERVED = {
    "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand",
    "bitor", "bool", "break", "case", "catch", "char", "char16_t",
    "char32_t", "class", "compl", "concept", "const", "consteval",
    "constexpr", "constinit", "const_cast", "continue", "co_await",
    "co_return", "co_yield", "decltype", "default", "delete", "do",
    "double", "dynamic_cast", "else", "enum", "explicit", "export",
    "extern", "false", "float", "for", "friend", "goto", "if", "inline",
    "int", "long", "mutable", "namespace", "new", "noexcept", "not",
    "not_eq", "nullptr", "operator", "or", "or_eq", "private", "protected",
    "public", "register", "reinterpret_cast", "requires", "return", "short",
    "signed", "sizeof", "static", "static_assert", "static_cast", "struct",
    "switch", "template", "this", "thread_local", "throw", "true", "try",
    "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual",
    "void", "volatile", "wchar_t", "while", "xor", "xor_eq",
}
STANDARD_TYPE_NAMES = {
    "size_t", "ptrdiff_t", "intptr_t", "uintptr_t", "int8_t", "uint8_t",
    "int16_t", "uint16_t", "int32_t", "uint32_t", "int64_t", "uint64_t",
    "wchar_t", "max_align_t",
}
DECLARATION_NON_TYPES = {
    "auto", "break", "case", "continue", "delete", "do", "else", "for", "goto",
    "if", "new", "return", "sizeof", "switch", "throw", "while",
}


class GenerationError(RuntimeError):
    pass


@dataclass(frozen=True)
class Issue:
    kind: str
    detail: str
    address: str = ""
    source_file: str = ""

    def as_json(self) -> dict[str, str]:
        result = {"kind": self.kind, "detail": self.detail}
        if self.address:
            result["address"] = self.address
        if self.source_file:
            result["source_file"] = self.source_file
        return result


@dataclass(frozen=True)
class BoundaryValue:
    display_type: str
    kind: str
    address_storage: bool = False
    storage_member: str = ""


@dataclass(frozen=True)
class MemberWrapper:
    owner_path: str
    owner_name: str
    member_name: str
    return_type: str
    parameter_types: tuple[str, ...]
    parameters: tuple[str, ...]
    argument_names: tuple[str, ...]
    variadic: bool = False


@dataclass(frozen=True)
class ExactIndirectMemberWrapper:
    owner_path: str
    owner_name: str
    member_name: str
    return_type: str
    function_pointer_type: str
    parameter_types: tuple[str, ...]
    parameters: tuple[str, ...]
    argument_names: tuple[str, ...]
    callee_expression: str


@dataclass(frozen=True)
class SourceMemberWrapper:
    owner_path: str
    owner_name: str
    member_name: str
    address: str
    return_type: str
    parameter_types: tuple[str, ...]
    parameters: tuple[str, ...]
    argument_names: tuple[str, ...]


def json_dump(value: Any) -> str:
    return json.dumps(value, ensure_ascii=False, indent=2, sort_keys=True) + "\n"


def read_json(path: Path) -> Any:
    with path.open("r", encoding="utf-8") as stream:
        return json.load(stream)


def read_jsonl(path: Path) -> list[dict[str, Any]]:
    result: list[dict[str, Any]] = []
    with path.open("r", encoding="utf-8") as stream:
        for number, line in enumerate(stream, 1):
            if not line.strip():
                continue
            try:
                result.append(json.loads(line))
            except json.JSONDecodeError as error:
                raise GenerationError(f"{path}:{number}: {error}") from error
    return result


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def safe_identifier(value: str, prefix: str = "st") -> str:
    clean = re.sub(r"[^A-Za-z0-9_]", "_", value)
    if not clean or clean[0].isdigit():
        clean = f"{prefix}_{clean}"
    if clean in RESERVED:
        clean = f"{prefix}_{clean}"
    return clean


def global_alias_for_token(
    token: str, address: str, item: Mapping[str, Any]
) -> str | None:
    """Return an address-stable alias only for Ghidra's escaped invalid name."""
    actual = str(item["name"])
    if IDENTIFIER_RE.fullmatch(actual):
        return None
    rendered = safe_identifier(actual, "global")
    qualified_leaf = actual.rsplit("::", 1)[-1]
    if token not in {rendered, "_" + rendered, qualified_leaf}:
        return None
    return f"st_global_{address.upper()}"


def split_address_label(value: str) -> tuple[str, str]:
    address, separator, label = value.partition(" ")
    return address.upper(), label if separator else ""


def function_symbol(address: str) -> str:
    return f"st::fn_{address.upper()}"


def external_local_name(address: str) -> str:
    suffix = re.sub(r"[^A-Za-z0-9_]", "_", address.upper().split(":", 1)[-1])
    return f"external_{suffix}"


def address_symbol(address: str) -> str:
    normalized = address.upper()
    if normalized.startswith("EXTERNAL:"):
        return "st::" + external_local_name(normalized)
    return function_symbol(normalized)


def call_argument_count(
    masked: str, open_paren: int, source: str | None = None
) -> tuple[int, int] | None:
    """Return (arity, closing-paren offset) for one masked C++ call."""
    parsed = call_argument_spans(masked, open_paren, source)
    if parsed is None:
        return None
    spans, closing = parsed
    return len(spans), closing


def call_argument_spans(
    masked: str, open_paren: int, source: str | None = None
) -> tuple[list[tuple[int, int]], int] | None:
    """Return top-level argument spans and the closing parenthesis.

    ``masked`` must retain the original source geometry.  Leading and trailing
    whitespace is excluded from each span so a caller can insert one exact
    boundary expression without reformatting the surrounding decompilation.
    """
    if source is None:
        source = masked
    if len(source) != len(masked):
        return None
    if open_paren >= len(masked) or masked[open_paren] != "(":
        return None
    parens = brackets = braces = angles = 0
    spans: list[tuple[int, int]] = []
    argument_start = open_paren + 1
    index = open_paren + 1
    while index < len(masked):
        value = masked[index]
        if value == "(" : parens += 1
        elif value == ")":
            if parens == 0:
                start = argument_start
                end = index
                while start < end and source[start].isspace():
                    start += 1
                while end > start and source[end - 1].isspace():
                    end -= 1
                if start < end:
                    spans.append((start, end))
                elif spans:
                    return None
                return spans, index
            parens -= 1
        elif value == "[": brackets += 1
        elif value == "]" and brackets > 0: brackets -= 1
        elif value == "{": braces += 1
        elif value == "}" and braces > 0: braces -= 1
        elif value == "<" and parens == brackets == braces == 0:
            previous = masked[index - 1] if index > 0 else ""
            following = masked[index + 1] if index + 1 < len(masked) else ""
            if (previous.isalnum() or previous in "_>") and following not in "<=":
                angles += 1
        elif value == ">" and angles > 0 and parens == brackets == braces == 0:
            angles -= 1
        elif value == "," and parens == brackets == braces == angles == 0:
            start = argument_start
            end = index
            while start < end and source[start].isspace():
                start += 1
            while end > start and source[end - 1].isspace():
                end -= 1
            if start >= end:
                return None
            spans.append((start, end))
            argument_start = index + 1
            index += 1
            continue
        index += 1
    return None


def statement_expression_end(masked: str, start: int) -> int | None:
    """Return the first top-level semicolon after an expression start."""
    parens = brackets = braces = 0
    for index in range(start, len(masked)):
        value = masked[index]
        if value == "(": parens += 1
        elif value == ")":
            if parens == 0: return index
            parens -= 1
        elif value == "[": brackets += 1
        elif value == "]":
            if brackets == 0: return None
            brackets -= 1
        elif value == "{": braces += 1
        elif value == "}":
            if braces == 0: return None
            braces -= 1
        elif value == ";" and parens == brackets == braces == 0:
            return index
        elif value == "," and parens == brackets == braces == 0:
            return index
    return None


def relative_include(path: str) -> str:
    return path.replace("\\", "/")


def code_segments(text: str) -> Iterator[tuple[bool, str]]:
    """Yield (is_code, text) while preserving comments and literals exactly."""
    start = 0
    index = 0
    state = "code"
    quote = ""
    while index < len(text):
        char = text[index]
        pair = text[index:index + 2]
        if state == "code":
            if pair == "//" or pair == "/*":
                if start < index:
                    yield True, text[start:index]
                start = index
                state = "line_comment" if pair == "//" else "block_comment"
                index += 2
                continue
            if char in {'"', "'"}:
                if start < index:
                    yield True, text[start:index]
                start = index
                quote = char
                state = "literal"
        elif state == "line_comment":
            if char == "\n":
                yield False, text[start:index + 1]
                start = index + 1
                state = "code"
        elif state == "block_comment":
            if pair == "*/":
                index += 2
                yield False, text[start:index]
                start = index
                state = "code"
                continue
        elif state == "literal":
            if char == "\\":
                index += 2
                continue
            if char == quote:
                yield False, text[start:index + 1]
                start = index + 1
                state = "code"
        index += 1
    if start < len(text):
        yield state == "code", text[start:]


def transform_code(text: str, transform: Any) -> str:
    return "".join(transform(piece) if is_code else piece
                   for is_code, piece in code_segments(text))


def code_only(text: str) -> str:
    return "".join(piece for is_code, piece in code_segments(text) if is_code)


def code_mask(text: str) -> str:
    """Preserve line/column geometry while blanking comments and literals."""
    return "".join(
        piece if is_code else re.sub(r"[^\r\n]", " ", piece)
        for is_code, piece in code_segments(text)
    )


def rewrite_address_taken_globals(
    text: str, replacements: Mapping[str, str]
) -> tuple[str, int]:
    if not replacements:
        return text, 0
    pattern = re.compile(
        r"&\s*("
        + "|".join(
            re.escape(item) for item in sorted(replacements, key=len, reverse=True)
        )
        + r")\b"
    )
    return pattern.subn(
        lambda match: "&" + replacements[match.group(1)],
        text,
    )


def exact_exref_global_rewrites(
    referenced_globals: Iterable[Any],
) -> dict[str, str]:
    """Resolve Ghidra's undeclared ``name_exref`` through one exact IAT datum.

    The decompiler sometimes renders the external-location alias instead of the
    Listing symbol for the image word which holds it.  ``referenced_globals`` is
    address-authoritative, so a unique ``PTR_name_ADDRESS`` in that same function
    can restore the declaration without guessing an import prototype or creating
    a fake source global.  Ambiguous and escaped names deliberately stay alone.
    """
    candidates: dict[str, set[str]] = defaultdict(set)
    for item in referenced_globals:
        match = re.match(
            r"^[0-9A-Fa-f]+\s+"
            r"(?P<global>PTR_(?P<stem>[A-Za-z_][A-Za-z0-9_]*)_"
            r"[0-9A-Fa-f]{8})(?:\s+=|$)",
            str(item),
        )
        if match is None:
            continue
        candidates[match.group("stem") + "_exref"].add(match.group("global"))
    return {
        alias: next(iter(globals_))
        for alias, globals_ in candidates.items()
        if len(globals_) == 1
    }


def rewrite_exact_identifiers(
    text: str, replacements: Mapping[str, str]
) -> tuple[str, int]:
    if not replacements:
        return text, 0
    pattern = re.compile(
        r"\b(?:"
        + "|".join(
            re.escape(item) for item in sorted(replacements, key=len, reverse=True)
        )
        + r")\b"
    )
    return pattern.subn(lambda match: replacements[match.group(0)], text)


class TypeEmitter:
    """Render exact exported data-type paths as one dependency-ordered header."""

    RECORD_KINDS = {"StructureDB", "UnionDB"}

    def __init__(self, records: Sequence[dict[str, Any]], issues: list[Issue]):
        self.records = list(records)
        self.by_path = {record["path"]: record for record in self.records}
        self.issues = issues
        self.public_name: dict[str, str] = {}
        self.canonical_path: dict[str, str] = {}
        self.fn_name: dict[str, str] = {}
        self.skipped_paths: set[str] = set()
        self.reported_missing_paths: set[str] = set()
        self.required_gap_fields: dict[str, set[int]] = defaultdict(set)
        self.global_record_paths_by_name: dict[str, set[str]] = defaultdict(set)
        self.materialized_gap_fields = 0
        self._prepare_names()
        self.paths_by_display_name: dict[str, set[str]] = defaultdict(set)
        for record in self.records:
            for spelling in {
                str(record.get("display_name") or ""),
                str(record.get("name") or ""),
            }:
                if spelling:
                    self.paths_by_display_name[spelling].add(str(record["path"]))
        # Generated declarations use canonicalized ``type_name`` spellings,
        # which are not always the Listing display name (notably function
        # definitions).  Keep the reverse map address/path authoritative.
        for record in self.records:
            self.paths_by_display_name[self.type_name(str(record["path"]))].add(
                str(record["path"])
            )
        self.record_paths_by_name: dict[str, set[str]] = defaultdict(set)
        for record in self.records:
            if record["class"] not in self.RECORD_KINDS:
                continue
            path = str(record["path"])
            canonical = self.canonical_path.get(path, path)
            self.record_paths_by_name[self.type_name(path)].add(canonical)
        self.pointer_fields_by_record_path: dict[str, dict[str, str]] = (
            defaultdict(dict)
        )
        self._prepare_pointer_fields()
        self.member_wrappers_by_record_path: dict[str, list[MemberWrapper]] = (
            defaultdict(list)
        )
        self._prepare_member_wrappers()
        self.exact_indirect_member_wrappers_by_record_path: dict[
            str, list[ExactIndirectMemberWrapper]
        ] = defaultdict(list)
        self.exact_indirect_member_wrapper_conflicts: set[tuple[str, str]] = set()
        self.source_member_wrappers_by_record_path: dict[
            str, list[SourceMemberWrapper]
        ] = defaultdict(list)

    def register_global_types(
        self,
        globals_: Sequence[Mapping[str, Any]],
        collision_names: Mapping[str, str],
    ) -> None:
        for item in globals_:
            display_name = str(item.get("type") or "")
            targets: set[str] = set()
            for path in self.paths_by_display_name.get(display_name, ()):
                targets.update(self._record_storage_targets(path, set()))
            if len(targets) != 1:
                continue
            name = str(item.get("name") or "")
            if not name:
                continue
            self.global_record_paths_by_name[name].update(targets)
            collision = collision_names.get(name)
            if collision:
                self.global_record_paths_by_name[collision].update(targets)

    def _record_storage_targets(self, path: str, seen: set[str]) -> set[str]:
        if path in seen:
            return set()
        seen = set(seen)
        seen.add(path)
        record = self.by_path.get(path)
        if record is None:
            return set()
        kind = str(record["class"])
        if kind in self.RECORD_KINDS:
            return {self.canonical_path.get(path, path)}
        if kind == "ArrayDB":
            return self._record_storage_targets(
                str(record["detail"]["element_type"]), seen
            )
        if kind == "PointerDB":
            return self._record_storage_targets(
                str(record["detail"]["points_to"]), seen
            )
        if kind == "TypedefDB":
            return self._record_storage_targets(
                str(record["detail"]["base_type"]), seen
            )
        return set()

    def _prepare_pointer_fields(self) -> None:
        for record in self.records:
            if record["class"] != "StructureDB":
                continue
            owner_path = self.canonical_path.get(
                str(record["path"]), str(record["path"])
            )
            for component in record["detail"]["components"]:
                field_name = str(component.get("field_name") or "")
                if not field_name:
                    continue
                field_type = self.by_path.get(str(component.get("type") or ""))
                if field_type is None or field_type["class"] != "PointerDB":
                    continue
                target_path = str(field_type["detail"]["points_to"])
                target = self.by_path.get(target_path)
                if target is None or target["class"] != "StructureDB":
                    continue
                self.pointer_fields_by_record_path[owner_path][field_name] = (
                    self.canonical_path.get(target_path, target_path)
                )

    def _prepare_member_wrappers(self) -> None:
        for record in self.records:
            if record["class"] != "StructureDB":
                continue
            record_path = self.canonical_path.get(
                str(record["path"]), str(record["path"])
            )
            for component in record["detail"]["components"]:
                if component.get("field_name") != "vtable":
                    continue
                pointer = self.by_path.get(str(component.get("type") or ""))
                if pointer is None or pointer["class"] != "PointerDB":
                    continue
                table_path = str(pointer["detail"]["points_to"])
                table = self.by_path.get(table_path)
                if table is None or table["class"] != "StructureDB":
                    continue
                existing_fields = {
                    str(item["field_name"])
                    for item in record["detail"]["components"]
                    if item.get("field_name")
                }
                for slot in table["detail"]["components"]:
                    member_name = str(slot.get("field_name") or "")
                    if (not IDENTIFIER_RE.fullmatch(member_name) or
                            member_name in RESERVED or member_name in existing_fields):
                        continue
                    slot_pointer = self.by_path.get(str(slot.get("type") or ""))
                    if slot_pointer is None or slot_pointer["class"] != "PointerDB":
                        continue
                    function = self.by_path.get(
                        str(slot_pointer["detail"]["points_to"])
                    )
                    if function is None or function["class"] != "FunctionDefinitionDB":
                        continue
                    detail = function["detail"]
                    arguments = list(detail.get("arguments", ()))
                    if not arguments:
                        continue
                    receiver = self.by_path.get(str(arguments[0].get("type") or ""))
                    if receiver is None or receiver["class"] != "PointerDB":
                        continue
                    receiver_path = self.canonical_path.get(
                        str(receiver["detail"]["points_to"]),
                        str(receiver["detail"]["points_to"]),
                    )
                    if receiver_path != record_path:
                        continue
                    parameters: list[str] = []
                    parameter_types: list[str] = []
                    argument_names: list[str] = []
                    for index, argument in enumerate(arguments[1:], 1):
                        argument_name = safe_identifier(
                            str(argument.get("name") or f"arg_{index}"), "arg"
                        )
                        parameter_types.append(
                            self.type_name(str(argument["type"]))
                        )
                        parameters.append(
                            self.declaration(str(argument["type"]), argument_name)
                        )
                        argument_names.append(argument_name)
                    self.member_wrappers_by_record_path[record_path].append(
                        MemberWrapper(
                            owner_path=record_path,
                            owner_name=self.type_name(record_path),
                            member_name=member_name,
                            return_type=self.type_name(str(detail["return_type"])),
                            parameter_types=tuple(parameter_types),
                            parameters=tuple(parameters),
                            argument_names=tuple(argument_names),
                            variadic=bool(detail.get("varargs")),
                        )
                    )

    def register_exact_indirect_member_wrapper(
        self,
        receiver_display: str,
        slot: int,
        return_type: str,
        function_pointer_type: str,
        parameter_types: tuple[str, ...],
        callee_expression: str,
    ) -> str | None:
        """Expose one exact duplicated-receiver override as member-call sugar.

        A call override beyond the current physical vtable record can make
        Ghidra spell slot F8 as ``vtable[1].vfunc_24``.  That arithmetic is a
        declaration limitation, not source semantics.  Keep it inside one
        generated non-virtual forwarding wrapper and preserve readable
        ``object->vfunc_F8(...)`` at every exact duplicated-receiver callsite.
        """
        owner_name = self.display_pointee_type(receiver_display)
        if owner_name is None:
            return None
        paths = self.record_paths_by_name.get(owner_name, set())
        if len(paths) != 1:
            return None
        owner_path = next(iter(paths))
        owner = self.by_path.get(owner_path)
        if owner is None or owner["class"] != "StructureDB":
            return None
        receiver_key = self._display_type_key(receiver_display)
        if not parameter_types or self._display_type_key(
                parameter_types[0]) != receiver_key:
            return None
        member_name = f"vfunc_{slot:X}"
        explicit_types = tuple(parameter_types[1:])
        return_key = self._display_type_key(return_type)

        for wrapper in self.member_wrappers_by_record_path.get(owner_path, ()):
            if wrapper.member_name != member_name:
                continue
            if (self._display_type_key(wrapper.return_type) == return_key and
                    (tuple(map(self._display_type_key, wrapper.parameter_types)) ==
                     tuple(map(self._display_type_key, explicit_types)) or
                     (wrapper.variadic and
                      tuple(map(self._display_type_key, explicit_types[:len(
                          wrapper.parameter_types)])) ==
                      tuple(map(self._display_type_key,
                                wrapper.parameter_types))))):
                return member_name
            return None

        data_fields = {
            str(component.get("field_name") or "")
            for component in owner["detail"]["components"]
        }
        if member_name in data_fields:
            return None
        existing = self.exact_indirect_member_wrappers_by_record_path[owner_path]
        for wrapper in existing:
            if wrapper.member_name != member_name:
                continue
            if (self._display_type_key(wrapper.return_type) == return_key and
                    tuple(map(self._display_type_key, wrapper.parameter_types)) ==
                    tuple(map(self._display_type_key, explicit_types)) and
                    wrapper.callee_expression == callee_expression):
                return member_name
            self.issues.append(Issue(
                "exact_indirect_member_wrapper_conflict",
                f"{owner_name}::{member_name}: conflicting callsite ABI or storage",
            ))
            self.exact_indirect_member_wrapper_conflicts.add(
                (owner_path, member_name)
            )
            return None

        parameters: list[str] = []
        argument_names: list[str] = []
        for index, display in enumerate(explicit_types, 1):
            name = f"arg_{index}"
            parameters.append(f"{display} {name}")
            argument_names.append(name)
        existing.append(ExactIndirectMemberWrapper(
            owner_path=owner_path,
            owner_name=owner_name,
            member_name=member_name,
            return_type=return_type,
            function_pointer_type=function_pointer_type,
            parameter_types=explicit_types,
            parameters=tuple(parameters),
            argument_names=tuple(argument_names),
            callee_expression=callee_expression,
        ))
        return member_name

    def physical_vtable_callee_expression(
        self, receiver_display: str, slot: int
    ) -> str | None:
        """Spell one exact byte slot through the exported physical vtable.

        Derived dispatch slots can lie beyond the first physical table record.
        Ghidra then renders, for example, byte slot ``0xF8`` of a ``0xD4``
        table as ``vtable[1].vfunc_24``.  Reconstruct that expression only from
        the owner's offset-zero vptr, the table's exact length, and one named
        component at the remainder; never manufacture a synthetic tail member.
        """
        owner_paths = self._display_record_paths(
            receiver_display, True, allow_name_fallback=True
        )
        if len(owner_paths) != 1:
            return None
        owner = self.by_path.get(next(iter(owner_paths)))
        if owner is None or owner["class"] != "StructureDB":
            return None
        vptrs = [
            item for item in owner["detail"].get("components", ())
            if int(item.get("offset", -1)) == 0 and
            str(item.get("field_name") or "") == "vtable"
        ]
        if len(vptrs) != 1:
            return None
        pointer = self.by_path.get(str(vptrs[0].get("type") or ""))
        if pointer is None or pointer["class"] != "PointerDB":
            return None
        table_path = self._unwrap_typedef_path(
            str(pointer["detail"].get("points_to") or ""), set()
        )
        table = self.by_path.get(table_path or "")
        if table is None or table["class"] != "StructureDB":
            return None
        table_length = int(table.get("length", 0))
        if table_length <= 0 or slot < 0:
            return None
        table_index, remainder = divmod(slot, table_length)
        members = [
            str(item.get("field_name") or "")
            for item in table["detail"].get("components", ())
            if int(item.get("offset", -1)) == remainder and
            IDENTIFIER_RE.fullmatch(str(item.get("field_name") or ""))
        ]
        if len(set(members)) != 1:
            return None
        access = "vtable" if table_index == 0 else f"vtable[{table_index}]"
        return access + ("->" if table_index == 0 else ".") + members[0]

    def exact_indirect_member_wrapper(
        self,
        receiver_display: str,
        slot: int,
        explicit_argument_count: int,
    ) -> str | None:
        """Reuse one already proven physical owner/slot ABI without order bias.

        The wrapper is keyed by the unique concrete receiver record and exact byte
        slot.  An arity mismatch or any independently observed ABI/storage conflict
        cancels reuse; declaration order is never evidence.
        """
        owner_name = self.display_pointee_type(receiver_display)
        if owner_name is None:
            return None
        paths = self.record_paths_by_name.get(owner_name, set())
        if len(paths) != 1:
            return None
        owner_path = next(iter(paths))
        member_name = f"vfunc_{slot:X}"
        if (owner_path, member_name) in self.exact_indirect_member_wrapper_conflicts:
            return None
        # A receiver-aware function-pointer member recovered on the physical
        # vtable is stronger evidence than a use-site override or a generic
        # machine-word fallback.  Fresh decompilation may unfold the same slot
        # back into ``(*object->vtable->slot)(object, ...)``; reuse the already
        # proven wrapper by exact owner/slot/arity instead of degrading it.
        physical = [
            wrapper
            for wrapper in self.member_wrappers_by_record_path.get(owner_path, ())
            if wrapper.member_name == member_name
            and (len(wrapper.parameter_types) == explicit_argument_count or
                 (wrapper.variadic and
                  len(wrapper.parameter_types) <= explicit_argument_count))
        ]
        if len(physical) == 1:
            return member_name
        if physical:
            return None
        candidates = [
            wrapper
            for wrapper in self.exact_indirect_member_wrappers_by_record_path.get(
                owner_path, ()
            )
            if wrapper.member_name == member_name
            and len(wrapper.parameter_types) == explicit_argument_count
        ]
        return member_name if len(candidates) == 1 else None

    def physical_member_wrapper(
        self,
        receiver_display: str,
        member_name: str,
        explicit_argument_count: int,
    ) -> MemberWrapper | None:
        """Return one exact physical wrapper already present on the owner.

        Export can fold a duplicated receiver before source assembly sees the
        call.  The call then no longer contains an indirect function-pointer
        expression, but its generated non-virtual member still has the exact
        physical slot ABI.  Resolve that ABI only through one unique concrete
        receiver record and matching arity; never select by record order.
        """
        owner_name = self.display_pointee_type(receiver_display)
        if owner_name is None:
            return None
        paths = self.record_paths_by_name.get(owner_name, set())
        if len(paths) != 1:
            return None
        owner_path = next(iter(paths))
        candidates = [
            wrapper
            for wrapper in self.member_wrappers_by_record_path.get(owner_path, ())
            if wrapper.member_name == member_name and (
                len(wrapper.parameter_types) == explicit_argument_count or
                (wrapper.variadic and
                 len(wrapper.parameter_types) <= explicit_argument_count)
            )
        ]
        return candidates[0] if len(candidates) == 1 else None

    @staticmethod
    def _display_type_key(type_text: str) -> str:
        return re.sub(r"\s+", "", type_text.replace("const ", ""))

    @staticmethod
    def cpp_type_key(type_text: str) -> str:
        """Return the host-C++ identity of the repository's scalar aliases.

        Ghidra deliberately keeps storage-oriented names such as ``dword`` and
        ``undefined4`` distinct from semantic ``uint``.  In
        ``pseudocode_runtime.h`` they are nevertheless aliases of the same
        fixed-width C++ type.  A source-boundary cast between those spellings
        is therefore not merely noisy: it can turn one reused stack buffer into
        dozens of apparent pointer reinterpretations.  Keep pointee depth and
        constness, and collapse only aliases whose equality is executable in
        the generated runtime header.
        """
        compact = re.sub(r"\s+", "", type_text)
        stars = ""
        while compact.endswith("*"):
            stars += "*"
            compact = compact[:-1]
        const = ""
        if compact.startswith("const"):
            const = "const"
            compact = compact[len("const"):]
        aliases = {
            "undefined": "uint8_t",
            "undefined1": "uint8_t",
            "byte": "uint8_t",
            "uchar": "uint8_t",
            "uint8_t": "uint8_t",
            "undefined2": "uint16_t",
            "ushort": "uint16_t",
            "uint16_t": "uint16_t",
            "undefined4": "uint32_t",
            "uint": "uint32_t",
            "ulong": "unsigned_long",
            "dword": "uint32_t",
            "DWORD": "unsigned_long",
            "UINT": "uint32_t",
            "size_t": "uint32_t",
            "uint32_t": "uint32_t",
            "undefined8": "uint64_t",
            "ulonglong": "uint64_t",
            "uint64_t": "uint64_t",
            "longlong": "int64_t",
            "int64_t": "int64_t",
        }
        return const + aliases.get(compact, compact) + stars

    def display_cpp_equivalent(self, left: str, right: str) -> bool:
        """Whether two display spellings denote exactly one emitted C++ type."""
        if self.cpp_type_key(left) == self.cpp_type_key(right):
            return True
        left_signature = self.display_function_signature(left)
        return left_signature is not None and \
            left_signature == self.display_function_signature(right)

    @staticmethod
    def _signature_return_type(
        function: Mapping[str, Any], body_declaration: str | None = None
    ) -> str | None:
        if body_declaration:
            marker = " __thiscall "
            compact = re.sub(r"\s+", " ", body_declaration).strip()
            if marker in compact:
                result = compact.split(marker, 1)[0].strip()
                if result.startswith("noreturn "):
                    result = result[len("noreturn "):].strip()
                if result:
                    return result
        signature = str(function.get("signature") or "")
        marker = " __thiscall "
        if marker not in signature:
            return None
        result = signature.split(marker, 1)[0].strip()
        if result.startswith("noreturn "):
            result = result[len("noreturn "):].strip()
        return result or None

    @staticmethod
    def _body_parameters(
        body_declaration: str, address: str
    ) -> list[str] | None:
        compact = re.sub(r"\s+", " ", body_declaration).strip()
        symbol = f"fn_{address}"
        symbol_at = compact.find(symbol)
        if symbol_at < 0:
            return None
        start = compact.find("(", symbol_at + len(symbol))
        if start < 0:
            return None
        depth = 0
        end = -1
        for index in range(start, len(compact)):
            char = compact[index]
            if char == "(":
                depth += 1
            elif char == ")":
                depth -= 1
                if depth == 0:
                    end = index
                    break
        if end < 0:
            return None
        payload = compact[start + 1:end].strip()
        if not payload or payload == "void":
            return []
        result: list[str] = []
        item_start = 0
        paren = bracket = angle = 0
        for index, char in enumerate(payload):
            if char == "(":
                paren += 1
            elif char == ")":
                paren -= 1
            elif char == "[":
                bracket += 1
            elif char == "]":
                bracket -= 1
            elif char == "<":
                angle += 1
            elif char == ">" and angle:
                angle -= 1
            elif char == "," and paren == 0 and bracket == 0 and angle == 0:
                result.append(payload[item_start:index].strip())
                item_start = index + 1
        result.append(payload[item_start:].strip())
        return result

    @staticmethod
    def _declaration_name(declaration: str) -> tuple[str, tuple[int, int]] | None:
        function_pointer = re.search(
            r"\(\s*(?:__[A-Za-z0-9_]+\s+)?\*\s*"
            r"([A-Za-z_][A-Za-z0-9_]*)\s*\)",
            declaration,
        )
        if function_pointer:
            return function_pointer.group(1), function_pointer.span(1)
        array = re.search(
            r"\b([A-Za-z_][A-Za-z0-9_]*)\s*(?:\[[^\]]*\]\s*)+$",
            declaration,
        )
        if array:
            return array.group(1), array.span(1)
        plain = re.search(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*$", declaration)
        if plain:
            return plain.group(1), plain.span(1)
        return None

    def prepare_source_member_wrappers(
        self,
        functions: Sequence[Mapping[str, Any]],
        body_declarations: Mapping[str, str] | None = None,
    ) -> None:
        """Expose proven non-virtual ``__thiscall`` owners as C++ methods.

        The address-stable ``st::fn_ADDRESS`` function remains the implementation
        identity.  These wrappers are a source-assembly view over an already
        recovered receiver boundary; they never create inheritance, a host vptr,
        or a new semantic owner.
        """
        candidates: dict[
            tuple[str, str, tuple[str, ...]], list[SourceMemberWrapper]
        ] = defaultdict(list)
        data_fields: dict[str, set[str]] = defaultdict(set)
        for record in self.records:
            if record["class"] != "StructureDB":
                continue
            path = self.canonical_path.get(str(record["path"]), str(record["path"]))
            data_fields[path].update(
                str(component.get("field_name") or "")
                for component in record["detail"]["components"]
                if component.get("field_name")
            )

        for function in functions:
            if (function.get("calling_convention") != "__thiscall" or
                    function.get("external") or function.get("thunk")):
                continue
            namespace = str(function.get("namespace") or "")
            if not namespace or namespace == "Global":
                continue
            owner_name = namespace.rsplit("::", 1)[-1]
            owner_paths = self.record_paths_by_name.get(owner_name, set())
            if len(owner_paths) != 1:
                self.issues.append(Issue(
                    "source_member_owner_ambiguous",
                    f"{function.get('address', '')} {namespace}: "
                    f"{len(owner_paths)} matching record paths",
                    str(function.get("address") or "").upper(),
                ))
                continue
            owner_path = next(iter(owner_paths))
            owner_record = self.by_path.get(owner_path)
            if owner_record is None or owner_record["class"] != "StructureDB":
                continue
            method_name = str(function.get("name") or "")
            if not IDENTIFIER_RE.fullmatch(method_name) or method_name in RESERVED:
                continue
            if method_name.lstrip("~") == owner_name:
                self.issues.append(Issue(
                    "source_member_lifetime_deferred",
                    f"{function.get('address', '')} {namespace}::{method_name}",
                    str(function.get("address") or "").upper(),
                ))
                continue
            if method_name in data_fields[owner_path]:
                self.issues.append(Issue(
                    "source_member_field_collision",
                    f"{function.get('address', '')} {namespace}::{method_name}",
                    str(function.get("address") or "").upper(),
                ))
                continue
            if "RECOVERED_VIRTUAL_METHOD" in function.get("tags", ()):
                continue
            parameters = list(function.get("parameters") or ())
            if not parameters:
                continue
            receiver_type = self._display_type_key(str(parameters[0].get("type") or ""))
            expected_receiver = self._display_type_key(owner_name + " *")
            if receiver_type != expected_receiver:
                self.issues.append(Issue(
                    "source_member_receiver_mismatch",
                    f"{function.get('address', '')} {namespace}::{method_name}: "
                    f"receiver={parameters[0].get('type')!r}",
                    str(function.get("address") or "").upper(),
                ))
                continue
            address = str(function["address"]).upper()
            return_type = self._signature_return_type(
                function,
                (body_declarations or {}).get(address),
            )
            if return_type is None:
                continue
            parameter_types: list[str] = []
            declarations: list[str] = []
            argument_names: list[str] = []
            exact_parameters = None
            parameter_parse_failed = False
            body_declaration = (body_declarations or {}).get(address)
            if body_declaration:
                exact_parameters = self._body_parameters(body_declaration, address)
            if exact_parameters:
                for declaration in exact_parameters[1:]:
                    named = self._declaration_name(declaration)
                    if named is None:
                        parameter_parse_failed = True
                        break
                    name, span = named
                    type_text = declaration[:span[0]] + declaration[span[1]:]
                    parameter_types.append(self._display_type_key(type_text))
                    declarations.append(declaration)
                    argument_names.append(name)
            else:
                for index, parameter in enumerate(parameters[1:], 1):
                    type_text = str(parameter.get("type") or "undefined4")
                    name = safe_identifier(
                        str(parameter.get("name") or f"param_{index}"), "param"
                    )
                    parameter_types.append(self._display_type_key(type_text))
                    declarations.append(f"{type_text} {name}")
                    argument_names.append(name)
            if parameter_parse_failed or len(declarations) != len(argument_names):
                continue
            wrapper = SourceMemberWrapper(
                owner_path=owner_path,
                owner_name=owner_name,
                member_name=method_name,
                address=address,
                return_type=return_type,
                parameter_types=tuple(parameter_types),
                parameters=tuple(declarations),
                argument_names=tuple(argument_names),
            )
            candidates[(owner_path, method_name, wrapper.parameter_types)].append(
                wrapper
            )

        virtual_names = {
            (path, wrapper.member_name)
            for path, wrappers in self.member_wrappers_by_record_path.items()
            for wrapper in wrappers
        }
        for key, wrappers in sorted(candidates.items()):
            if (key[0], key[1]) in virtual_names:
                continue
            if len(wrappers) != 1:
                addresses = ", ".join(item.address for item in wrappers)
                self.issues.append(Issue(
                    "source_member_overload_conflict",
                    f"{wrappers[0].owner_name}::{wrappers[0].member_name}: {addresses}",
                ))
                continue
            wrapper = wrappers[0]
            self.source_member_wrappers_by_record_path[wrapper.owner_path].append(
                wrapper
            )

    def _static_record_variables(self, body: str) -> dict[str, set[str]]:
        variables: dict[str, set[str]] = defaultdict(set)
        for name, paths in self.global_record_paths_by_name.items():
            variables[name].update(paths)
        pointer_declaration = re.compile(
            r"\b([A-Za-z_][A-Za-z0-9_]*)\s+(?:const\s+)?\*+\s*"
            r"(?:const\s+)?([A-Za-z_][A-Za-z0-9_]*)\b"
        )
        for match in pointer_declaration.finditer(body):
            type_name, variable = match.groups()
            variables[variable].update(self.record_paths_by_name.get(type_name, ()))
        value_declaration = re.compile(
            r"\b([A-Za-z_][A-Za-z0-9_]*)\s+"
            r"([A-Za-z_][A-Za-z0-9_]*)"
            r"(?:\s*\[[^;\]\n]+\])?\s*(?=[,;)={])"
        )
        for match in value_declaration.finditer(body):
            type_name, variable = match.groups()
            variables[variable].update(self.record_paths_by_name.get(type_name, ()))
        return variables

    def observe_field_accesses(self, body: str) -> None:
        """Retain exact anonymous-byte members which exported code names.

        Ghidra may render an access through a typed pointer as
        ``value->field_0x1af`` even though the exported structure still contains
        one unnamed byte at that offset.  Coalescing every unnamed byte into a
        storage array then loses a declaration which the body legitimately
        references.  Recover only the path/offset pairs whose receiver has an
        explicit static pointer type in the same body.  This is source assembly,
        not a semantic field-type inference: the materialized view stays one
        exact byte.
        """
        variables = self._static_record_variables(body)

        for match in re.finditer(
            r"\b([A-Za-z_][A-Za-z0-9_]*)->field_0x([0-9A-Fa-f]+)", body
        ):
            variable, raw_offset = match.groups()
            paths = variables.get(variable, ())
            if len(paths) != 1:
                continue
            self.required_gap_fields[next(iter(paths))].add(int(raw_offset, 16))
        for match in re.finditer(
            r"\b([A-Za-z_][A-Za-z0-9_]*)"
            r"((?:->[A-Za-z_][A-Za-z0-9_]*)+)->"
            r"field_0x([0-9A-Fa-f]+)", body
        ):
            variable, raw_chain, raw_offset = match.groups()
            paths = variables.get(variable, ())
            if len(paths) != 1:
                continue
            path = next(iter(paths))
            resolved = True
            for field_name in raw_chain.split("->")[1:]:
                target = self.pointer_fields_by_record_path.get(path, {}).get(
                    field_name
                )
                if target is None:
                    resolved = False
                    break
                path = target
            if resolved:
                self.required_gap_fields[path].add(int(raw_offset, 16))
        for match in re.finditer(
            r"\b([A-Za-z_][A-Za-z0-9_]*)\s*"
            r"(?:\[[^\]\n]+\])?\.field_0x([0-9A-Fa-f]+)", body
        ):
            variable, raw_offset = match.groups()
            paths = variables.get(variable, ())
            if len(paths) != 1:
                continue
            self.required_gap_fields[next(iter(paths))].add(int(raw_offset, 16))

    def require_exact_gap_field(
        self, display_name: str, offset: int, pointer_access: bool
    ) -> bool:
        """Materialize one exact unnamed byte reached through a typed expression.

        ``observe_field_accesses`` intentionally has a small declaration parser.
        The source assembler has a stronger exact expression walker which can
        resolve indexed inline arrays and nested by-value members.  This method
        accepts that already resolved display type, but still requires one
        unique physical record and one exact unnamed one-byte component.  A
        containing wide member or a missing component is not a field-recovery
        licence and remains compiler/audit debt.
        """
        targets: set[str] = set()
        for current in self._display_record_paths(
                display_name, pointer_access, allow_name_fallback=True):
            record = self.by_path.get(current)
            if record is None or record["class"] != "StructureDB":
                continue
            candidates = [
                item for item in record["detail"].get("components", ())
                if int(item.get("offset", -1)) == offset
            ]
            if len(candidates) != 1:
                continue
            component = candidates[0]
            if (component.get("field_name") or
                    int(component.get("length", 0)) != 1 or
                    component.get("type") not in {"/undefined", "/-BAD-", ""}):
                continue
            targets.add(current)
        if len(targets) != 1:
            return False
        self.required_gap_fields[next(iter(targets))].add(offset)
        return True

    def _prepare_names(self) -> None:
        named: dict[str, list[dict[str, Any]]] = defaultdict(list)
        for record in self.records:
            if record["class"] == "FunctionDefinitionDB":
                digest = hashlib.sha256(record["path"].encode()).hexdigest()[:8]
                self.fn_name[record["path"]] = (
                    f"STFnType_{safe_identifier(record['name'])}_{digest}"
                )
                continue
            if record["class"] in {"PointerDB", "ArrayDB"}:
                continue
            named[record["name"]].append(record)

        for name, candidates in named.items():
            if name in STANDARD_TYPE_NAMES:
                for record in candidates:
                    self.public_name[record["path"]] = name
                    self.skipped_paths.add(record["path"])
                continue
            chosen = max(candidates, key=self._canonical_score)
            c_name = safe_identifier(name, "STType")
            for record in candidates:
                self.public_name[record["path"]] = c_name
                self.canonical_path[record["path"]] = chosen["path"]
                if record is not chosen:
                    self.skipped_paths.add(record["path"])
            if len(candidates) > 1:
                detail = ", ".join(record["path"] for record in candidates)
                self.issues.append(Issue(
                    "type_name_collision",
                    f"{name}: selected {chosen['path']}; aliases {detail}",
                ))

    @staticmethod
    def _canonical_score(record: Mapping[str, Any]) -> tuple[int, int, int, int, str]:
        path = str(record["path"])
        kind = str(record["class"])
        description = str(record.get("description") or "")
        return (
            200 if "[ST_SEMANTIC_ANCHOR]" in description else 0,
            100 if "/SubmarineTitans/Recovered/" in path else 0,
            20 if kind in {"StructureDB", "UnionDB", "EnumDB", "TypedefDB"} else 0,
            5 if kind == "TypedefDB" else 0,
            path,
        )

    def type_name(self, path: str) -> str:
        if path == "/undefined":
            return "undefined"
        if path in {"", "/-BAD-"}:
            if path not in self.reported_missing_paths:
                self.reported_missing_paths.add(path)
                self.issues.append(Issue("missing_type_path", path or "<empty>"))
            return "undefined"
        record = self.by_path.get(path)
        if record is None:
            bitfield = re.fullmatch(r"/dword:(\d+)", path)
            if bitfield:
                return "uint32_t"
            leaf = path.rsplit("/", 1)[-1]
            if leaf.endswith(" *32"):
                return f"{safe_identifier(leaf[:-3].strip())} *"
            if leaf.endswith(" *"):
                return f"{safe_identifier(leaf[:-2].strip())} *"
            if path not in self.reported_missing_paths:
                self.reported_missing_paths.add(path)
                self.issues.append(Issue("missing_type_path", path))
            return safe_identifier(leaf or "undefined4", "STMissingType")
        kind = record["class"]
        if kind == "PointerDB":
            return self.type_name(record["detail"]["points_to"]) + " *"
        if kind == "ArrayDB":
            detail = record["detail"]
            return f"{self.type_name(detail['element_type'])}[{detail['element_count']}]"
        if kind == "FunctionDefinitionDB":
            return self.fn_name[path]
        if kind in self.public_name:
            return self.public_name[path]
        return self._primitive_name(record)

    @staticmethod
    def _primitive_name(record: Mapping[str, Any]) -> str:
        path = str(record["path"])
        mapping = {
            "/bool": "bool", "/byte": "byte", "/char": "char",
            "/double": "double", "/dword": "dword", "/float": "float",
            "/float10": "float10", "/int": "int", "/long": "int32_t",
            "/longlong": "longlong", "/short": "short", "/uchar": "uchar",
            "/uint": "uint", "/ulong": "ulong", "/ulonglong": "ulonglong",
            "/undefined1": "undefined1", "/undefined2": "undefined2",
            "/undefined4": "undefined4", "/undefined5": "undefined5",
            "/undefined6": "undefined6", "/undefined8": "undefined8",
            "/ushort": "ushort", "/void": "void", "/wchar16": "wchar16",
            "/wchar_t": "wchar_t", "/word": "word",
            "/ImageBaseOffset32": "ImageBaseOffset32",
        }
        return mapping.get(path, safe_identifier(str(record["name"]), "STLeaf"))

    def declaration(self, path: str, name: str) -> str:
        record = self.by_path.get(path)
        if record is None:
            bitfield = re.fullmatch(r"/dword:(\d+)", path)
            if bitfield:
                return f"uint32_t {name} : {bitfield.group(1)}"
            return f"{self.type_name(path)} {name}"
        kind = record["class"]
        if kind == "PointerDB":
            target = record["detail"]["points_to"]
            target_record = self.by_path.get(target)
            inner = f"*{name}"
            if target_record and target_record["class"] in {"ArrayDB", "FunctionDefinitionDB"}:
                inner = f"(*{name})"
            return self.declaration(target, inner)
        if kind == "ArrayDB":
            detail = record["detail"]
            return self.declaration(
                detail["element_type"], f"{name}[{detail['element_count']}]"
            )
        if kind == "FunctionDefinitionDB":
            detail = record["detail"]
            arguments = []
            for index, argument in enumerate(detail["arguments"]):
                arg_name = safe_identifier(argument.get("name") or f"arg_{index}")
                arguments.append(self.declaration(argument["type"], arg_name))
            if detail.get("varargs"):
                arguments.append("...")
            if not arguments:
                arguments.append("void")
            convention = detail.get("calling_convention") or ""
            convention = "" if convention == "unknown" else convention
            result = self.type_name(detail["return_type"])
            middle = " ".join(part for part in (convention, name) if part)
            return f"{result} {middle}({', '.join(arguments)})"
        return f"{self.type_name(path)} {name}"

    @functools.lru_cache(maxsize=None)
    def display_declaration(self, display_name: str, name: str) -> str | None:
        """Resolve an exported Listing display type back to its exact type path.

        globals.jsonl intentionally carries Ghidra's display spelling rather
        than an internal datatype path.  Pointer and array spellings are still
        authoritative when every matching exported datatype renders the same C++
        declarator.  Requiring declarator agreement avoids selecting one of two
        semantically different same-named records by proposal or export order.
        """
        candidates = self.paths_by_display_name.get(display_name, set())
        declarations = {self.declaration(path, name) for path in candidates}
        if len(declarations) == 1:
            return next(iter(declarations))
        return None

    @functools.lru_cache(maxsize=None)
    def display_type_expression(self, display_name: str) -> str | None:
        """Render an unambiguous Listing display type as a C++ type-id.

        Function pointers and arrays need an abstract declarator and are not
        valid template arguments after merely removing an identifier, so this
        intentionally accepts only ordinary scalar/pointer spellings.
        """
        marker = "st_boundary_value"
        declaration = self.display_declaration(display_name, marker)
        if declaration is None:
            compact = re.sub(r"\s+", " ", display_name).strip()
            if re.fullmatch(
                r"(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*(?:\s*\*+)?",
                compact,
            ):
                return compact
            return None
        if re.search(
                rf"\(\s*(?:__[A-Za-z0-9_]+\s+)?\*\s*{marker}\s*\)",
                declaration):
            aliases: set[str] = set()
            for path in self.paths_by_display_name.get(display_name, ()):
                current = self._unwrap_typedef_path(path, set())
                record = self.by_path.get(current) if current else None
                if record is None or record["class"] != "PointerDB":
                    continue
                target = self.by_path.get(str(record["detail"]["points_to"]))
                if target is not None and target["class"] == "FunctionDefinitionDB":
                    aliases.add(self.type_name(path))
            return next(iter(aliases)) if len(aliases) == 1 else None
        if "[" in declaration or "]" in declaration:
            return None
        if not re.search(rf"\b{marker}\b", declaration):
            return None
        result = re.sub(rf"\b{marker}\b", "", declaration).strip()
        return re.sub(r"\s+", " ", result)

    @functools.lru_cache(maxsize=None)
    def display_pointer_kind(self, display_name: str) -> str | None:
        """Return ``generic`` or ``concrete`` for an exact pointer display.

        A typedef is followed to its storage type.  All same-spelled exported
        candidates must agree; name collisions otherwise remain unresolved.
        ``void`` and Ghidra ``undefinedN`` pointees are neutral byte/word views,
        not recovered semantic object types.
        """
        candidates = self.paths_by_display_name.get(display_name, set())
        kinds = {
            kind for path in candidates
            if (kind := self._pointer_kind(path, set())) is not None
        }
        if len(kinds) == 1:
            return next(iter(kinds))
        compact = re.sub(r"\s+", "", display_name)
        fallback = re.fullmatch(
            r"(?:const)?(void|code|byte|uchar|uint1|undefined(?:1|2|3|4|5|6|8)?)\*+", compact
        )
        if fallback:
            return "generic"
        if re.fullmatch(
            r"(?:const)?[A-Za-z_][A-Za-z0-9_:]*\*+", compact
        ):
            return "concrete"
        return None

    @functools.lru_cache(maxsize=None)
    def display_is_void_pointer(self, display_name: str) -> bool:
        """Whether a display spelling resolves exactly to ``void *``.

        Win32 aliases such as ``LPVOID`` do not contain a literal star, but the emitted
        typedef still has ordinary C++ object-pointer conversion rules.  Follow the exported
        datatype graph instead of making every such assignment use a project helper.
        """
        candidates = self.paths_by_display_name.get(display_name, set())
        results: set[bool] = set()
        for path in candidates:
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is None or record["class"] != "PointerDB":
                results.add(False)
                continue
            pointee = self._unwrap_typedef_path(
                str(record["detail"]["points_to"]), set()
            )
            results.add(pointee == "/void")
        if len(results) == 1:
            return next(iter(results))
        return re.sub(r"\s+", "", display_name) in {"void*", "constvoid*"}

    def display_is_neutral_storage_pointer(self, display_name: str) -> bool:
        """Whether a pointer is an exact byte/word storage view.

        This deliberately excludes signed semantic scalars and every structure pointer.  It is
        used only when the expression is independently known to be an address of storage.
        """
        pointee = self.display_pointee_type(display_name)
        if pointee is None:
            return False
        key = self.cpp_type_key(pointee)
        return key in {
            "uint8_t", "uint16_t", "uint32_t", "uint64_t",
            "unsigned_long", "char",
        }

    @functools.lru_cache(maxsize=None)
    def display_integer_pointer_width(self, display_name: str) -> int | None:
        """Return an exact primitive-integer pointee width.

        Equal-width signed/unsigned and Win32 alias pointers are storage views
        of the same x86 bytes but remain distinct C++ pointer types.  Records,
        enums, floats, void and function pointers are deliberately excluded.
        """
        pointee = self.display_pointee_type(display_name)
        if pointee is None:
            return None
        # Prefer the emitted C++ identity.  Ghidra's concrete byte/word classes
        # are named ByteDataType/ShortDataType rather than IntegerDataType, but
        # they still emit the same exact primitive storage types as byte,
        # undefined1, WORD, and their Win32 typedefs.
        key = self.cpp_type_key(pointee)
        widths = {
            "uint8_t": 1, "int8_t": 1, "char": 1,
            "uint16_t": 2, "int16_t": 2, "short": 2,
            "uint32_t": 4, "int32_t": 4, "int": 4,
            "unsigned_long": 4, "long": 4,
            "size_t": 4,
            "uint64_t": 8, "int64_t": 8,
        }
        if key in widths:
            return widths[key]
        candidates = self.paths_by_display_name.get(pointee, set())
        if candidates:
            widths: set[int] = set()
            for path in candidates:
                current = self._unwrap_typedef_path(path, set())
                record = self.by_path.get(current) if current else None
                if record is None:
                    return None
                kind = str(record.get("class") or "")
                if not (kind.endswith("IntegerDataType") or
                        kind.startswith("Undefined")):
                    return None
                width = int(record.get("length", -1))
                if width <= 0:
                    return None
                widths.add(width)
            return next(iter(widths)) if len(widths) == 1 else None
        return widths.get(key)

    @functools.lru_cache(maxsize=None)
    def display_integer_scalar_width(self, display_name: str) -> int | None:
        """Return the exact emitted primitive-integer width, if any."""
        key = self.cpp_type_key(display_name)
        return {
            "uint8_t": 1, "int8_t": 1, "char": 1,
            "uint16_t": 2, "int16_t": 2, "short": 2,
            "uint32_t": 4, "int32_t": 4, "int": 4,
            "unsigned_long": 4, "long": 4, "size_t": 4,
            "uint64_t": 8, "int64_t": 8,
        }.get(key)

    @functools.lru_cache(maxsize=None)
    def display_pointee_type(self, display_name: str) -> str | None:
        """Return the unanimous pointee type for one exported display name."""
        results: set[str] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is None or record["class"] != "PointerDB":
                continue
            results.add(self.type_name(str(record["detail"]["points_to"])))
        if len(results) == 1:
            return next(iter(results))
        compact = re.sub(r"\s+", " ", display_name).strip()
        fallback = re.fullmatch(r"(.+?)\s*\*", compact)
        return fallback.group(1).strip() if fallback else None

    @functools.lru_cache(maxsize=None)
    def display_element_type(self, display_name: str) -> str | None:
        """Return an exact array element (or pointer pointee) display type."""
        results: set[str] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is None:
                continue
            if record["class"] == "ArrayDB":
                results.add(self.type_name(str(record["detail"]["element_type"])))
            elif record["class"] == "PointerDB":
                results.add(self.type_name(str(record["detail"]["points_to"])))
        if len(results) == 1:
            return next(iter(results))
        compact = re.sub(r"\s+", " ", display_name).strip()
        array = re.fullmatch(r"(.+?)\s*\[[^]]+\]", compact)
        if array:
            return array.group(1).strip()
        return self.display_pointee_type(display_name)

    @functools.lru_cache(maxsize=None)
    def display_array_decay_type(self, display_name: str) -> str | None:
        """Return the exact pointer type produced by C array-to-pointer decay.

        This deliberately accepts arrays only.  ``display_element_type`` also
        follows pointers and therefore cannot be used to decide whether a value
        expression denotes an array object whose C++ boundary type is ``T *``.
        """
        elements: set[str] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is None or record["class"] != "ArrayDB":
                continue
            elements.add(self.type_name(str(record["detail"]["element_type"])))
        if len(elements) == 1:
            return next(iter(elements)) + " *"
        compact = re.sub(r"\s+", " ", display_name).strip()
        array = re.fullmatch(r"(.+?)\s*\[[^]]+\]", compact)
        return array.group(1).strip() + " *" if array else None

    @functools.lru_cache(maxsize=None)
    def display_zero_member_for_pointer_conversion(
        self, source_display: str, target_display: str
    ) -> str | None:
        """Find an exact named offset-zero view matching a pointer target.

        A generated record passed where ``T *`` is expected often denotes its
        first storage member (for example an output count).  This is not a
        reinterpretation when the exported graph proves one unique source
        record, one unique target pointee, and an exactly matching component at
        offset zero.  Returning the member name lets the source projection use
        ``&value->member`` and preserve both object identities.
        """
        source_records: set[str] = set()
        for path in self.paths_by_display_name.get(source_display, ()):
            current = self._unwrap_typedef_path(path, set())
            pointer = self.by_path.get(current) if current else None
            if pointer is None or pointer["class"] != "PointerDB":
                continue
            pointee = self._unwrap_typedef_path(
                str(pointer["detail"]["points_to"]), set()
            )
            record = self.by_path.get(pointee) if pointee else None
            if record is not None and record["class"] in self.RECORD_KINDS:
                source_records.add(self.canonical_path.get(pointee, pointee))
        target_pointees: set[str] = set()
        for path in self.paths_by_display_name.get(target_display, ()):
            current = self._unwrap_typedef_path(path, set())
            pointer = self.by_path.get(current) if current else None
            if pointer is None or pointer["class"] != "PointerDB":
                continue
            pointee = self._unwrap_typedef_path(
                str(pointer["detail"]["points_to"]), set()
            )
            if pointee:
                target_pointees.add(self.canonical_path.get(pointee, pointee))
        if len(source_records) != 1 or len(target_pointees) != 1:
            return None
        record_path = next(iter(source_records))
        target_path = next(iter(target_pointees))
        record = self.by_path.get(record_path)
        target = self.by_path.get(target_path)
        if record is None or target is None:
            return None
        target_length = int(target.get("length", -1))
        matches: set[str] = set()
        for item in record["detail"].get("components", ()):
            member_path = self._unwrap_typedef_path(str(item.get("type") or ""), set())
            member_path = self.canonical_path.get(member_path, member_path)
            name = str(item.get("field_name") or "")
            if (int(item.get("offset", -1)) == 0 and
                    int(item.get("length", -1)) == target_length and
                    member_path == target_path and IDENTIFIER_RE.fullmatch(name)):
                matches.add(name)
        return next(iter(matches)) if len(matches) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_member_type(
        self, display_name: str, field_name: str, pointer_access: bool,
        allow_name_fallback: bool = False,
    ) -> str | None:
        """Resolve a named member through the exact exported record graph.

        This follows typedefs and, for ``->`` only, one pointer edge.  Duplicate
        datatype paths are harmless only when every viable record yields the
        same rendered member type.
        """
        results: set[str] = set()
        for current in self._display_record_paths(
                display_name, pointer_access, allow_name_fallback):
            record = self.by_path.get(current)
            if record is None or record["class"] not in self.RECORD_KINDS:
                continue
            matches = []
            raw_gap = re.fullmatch(
                r"field_(?:0x)?([0-9A-Fa-f]+)", field_name
            )
            for item in record["detail"].get("components", ()):
                actual = str(item.get("field_name") or "")
                synthesized = (
                    f"field{item['ordinal']}_0x{int(item['offset']):x}"
                    if not actual else actual
                )
                if field_name == synthesized or (
                    raw_gap is not None and
                    int(item["offset"]) == int(raw_gap.group(1), 16)
                ):
                    matches.append(item)
            if len(matches) == 1:
                results.add(self.type_name(str(matches[0]["type"])))
        return next(iter(results)) if len(results) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_member_offset(
        self, display_name: str, field_name: str, pointer_access: bool
    ) -> int | None:
        """Return one exact byte offset for a named exported member."""
        offsets: set[int] = set()
        viable = 0
        for current in self._display_record_paths(display_name, pointer_access):
            record = self.by_path.get(current)
            if record is None or record["class"] not in self.RECORD_KINDS:
                continue
            viable += 1
            matches = [
                item for item in record["detail"].get("components", ())
                if str(item.get("field_name") or "") == field_name
            ]
            if len(matches) != 1:
                return None
            offsets.add(int(matches[0]["offset"]))
        return next(iter(offsets)) if viable > 0 and len(offsets) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_storage_length(self, display_name: str) -> int | None:
        """Return the unanimous exact storage width of one display type."""
        lengths: set[int] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is not None:
                length = int(record.get("length", -1))
                if length >= 0:
                    lengths.add(length)
        return next(iter(lengths)) if len(lengths) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_record_length(self, display_name: str) -> int | None:
        """Return one unanimous by-value record length, otherwise ``None``."""
        lengths: set[int] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is not None and record["class"] in self.RECORD_KINDS:
                lengths.add(int(record.get("length", -1)))
        return next(iter(lengths)) if len(lengths) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_machine_word_member(self, display_name: str) -> str | None:
        """Return one exact offset-zero 32-bit scalar storage view."""
        views: set[tuple[int, str]] = set()
        priorities = {
            "/undefined4": 0, "/dword": 1, "/uint": 2, "/ulong": 3,
            "/WinDef.h/DWORD": 4,
        }
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if (record is None or record["class"] not in self.RECORD_KINDS or
                    int(record.get("length", -1)) != 4):
                continue
            for item in record["detail"].get("components", ()):
                field_name = str(item.get("field_name") or "")
                type_path = str(item.get("type") or "")
                if (field_name and int(item["offset"]) == 0 and
                        int(item["length"]) == 4 and type_path in priorities):
                    views.add((priorities[type_path], field_name))
        if not views:
            return None
        best = min(priority for priority, _ in views)
        names = {name for priority, name in views if priority == best}
        return next(iter(names)) if len(names) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_machine_word_scalar(self, display_name: str) -> bool:
        """Whether an exact display type is a 32-bit integral storage word.

        The generated tree is compiled by a 64-bit host compiler, while every
        recovered ABI value belongs to the 32-bit image.  Pointer-to-word
        conversions therefore need an explicit compatibility boundary not only
        for Ghidra's ``undefined4`` spelling, but also for exact four-byte
        integer typedefs such as ``HRESULT`` and ``DWORD``.  Records, arrays,
        pointers, floats and host-width guesses are deliberately excluded.
        """
        candidates = self.paths_by_display_name.get(display_name, set())
        if candidates:
            results = {
                self._machine_word_scalar_path(path, set())
                for path in candidates
            }
            return results == {True}
        compact = re.sub(r"\s+", "", display_name)
        return compact in {
            "int", "uint", "dword", "long", "ulong", "undefined4",
            "int32_t", "uint32_t",
        }

    def _machine_word_scalar_path(self, path: str, seen: set[str]) -> bool:
        if path in seen:
            return False
        seen = set(seen)
        seen.add(path)
        record = self.by_path.get(path)
        if record is None or int(record.get("length", -1)) != 4:
            return False
        kind = str(record.get("class") or "")
        if kind == "TypedefDB":
            return self._machine_word_scalar_path(
                str(record.get("detail", {}).get("base_type") or ""), seen
            )
        return kind.endswith("IntegerDataType") or kind in {
            "EnumDB", "Undefined4DataType",
        }

    @functools.lru_cache(maxsize=None)
    def display_member_name_at_offset(
        self, display_name: str, offset: int, pointer_access: bool
    ) -> str | None:
        """Resolve a raw ``field_0xN`` spelling to one exact existing member."""
        names: set[str] = set()
        viable = 0
        for current in self._display_record_paths(display_name, pointer_access):
            record = self.by_path.get(current)
            if record is None or record["class"] not in self.RECORD_KINDS:
                continue
            viable += 1
            matches = [
                item for item in record["detail"].get("components", ())
                if int(item.get("offset", -1)) == offset
            ]
            if len(matches) != 1:
                return None
            item = matches[0]
            name = str(item.get("field_name") or "")
            # Unnamed undefined components are emitted as aggregate padding,
            # not as individually addressable C++ members.  Keep the raw
            # spelling so observe_field_accesses() can materialize its exact
            # view instead of inventing a declaration which the header omits.
            if not name or not IDENTIFIER_RE.fullmatch(name):
                return None
            names.add(name)
        return next(iter(names)) if viable > 0 and len(names) == 1 else None

    @functools.lru_cache(maxsize=None)
    def _display_record_paths(
        self, display_name: str, pointer_access: bool,
        allow_name_fallback: bool = False,
    ) -> frozenset[str]:
        """Resolve one display spelling to its exact physical record paths.

        Ghidra exports every concrete record, but it does not necessarily emit
        a standalone PointerDB for every ``Owner *`` spelling present in a
        function signature.  Follow exported PointerDB/typedef paths first.  A
        missing pointer record may fall back only to one unique generated C++
        record name; this recovers declaration assembly, not ownership or
        layout evidence.
        """
        results: set[str] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if pointer_access:
                if record is None or record["class"] != "PointerDB":
                    continue
                current = self._unwrap_typedef_path(
                    str(record["detail"]["points_to"]), set()
                )
                record = self.by_path.get(current) if current else None
            if record is None or record["class"] not in self.RECORD_KINDS:
                continue
            results.add(self.canonical_path.get(str(current), str(current)))
        if results or not allow_name_fallback:
            return frozenset(results)

        record_name = (
            self.display_pointee_type(display_name)
            if pointer_access else re.sub(r"\s+", " ", display_name).strip()
        )
        if not record_name:
            return frozenset()
        candidates = self.record_paths_by_name.get(record_name, set())
        return frozenset(candidates) if len(candidates) == 1 else frozenset()

    @functools.lru_cache(maxsize=None)
    def display_generated_record_view_compatible(
        self, source_display: str, target_display: str
    ) -> bool:
        """Prove an exact generated record pointer can use an anonymous view.

        This does not merge datatype identities.  It only permits an audited
        C++ boundary cast when the callee's script-owned anonymous pointer shape
        is a byte-for-byte subset of another script-owned record of the same
        extent.  The physical source record remains authoritative.
        """
        source_paths = self._display_record_pointer_paths(source_display)
        target_paths = self._display_record_pointer_paths(target_display)
        if len(source_paths) != 1 or len(target_paths) != 1:
            return False
        source_path = next(iter(source_paths))
        target_path = next(iter(target_paths))
        if source_path == target_path:
            return False
        source = self.by_path.get(source_path)
        target = self.by_path.get(target_path)
        if source is None or target is None:
            return False
        target_description = str(target.get("description") or "")
        source_description = str(source.get("description") or "")
        if ("[STPointerShapeApplier]" not in target_description or
                "AnonShape_" not in str(target.get("name") or "") or
                not source_description.startswith("[ST")):
            return False
        if int(source.get("length", -1)) != int(target.get("length", -2)):
            return False
        source_components = {
            (int(item.get("offset", -1)), int(item.get("length", -1))): item
            for item in source["detail"].get("components", ())
        }
        constraints = 0
        for item in target["detail"].get("components", ()):
            target_type = str(item.get("type") or "")
            if target_type in {"", "/undefined"}:
                continue
            constraints += 1
            key = (int(item.get("offset", -1)), int(item.get("length", -1)))
            other = source_components.get(key)
            if other is None or not self._storage_view_compatible(
                    str(other.get("type") or ""), target_type, key[1]):
                return False
        return constraints >= 2

    def _display_record_pointer_paths(self, display_name: str) -> set[str]:
        result: set[str] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            pointer = self.by_path.get(current) if current else None
            if pointer is None or pointer["class"] != "PointerDB":
                continue
            pointee = self._unwrap_typedef_path(
                str(pointer["detail"]["points_to"]), set()
            )
            record = self.by_path.get(pointee) if pointee else None
            if record is not None and record["class"] in self.RECORD_KINDS:
                result.add(self.canonical_path.get(pointee, pointee))
        return result

    def _storage_view_compatible(
        self, source_path: str, target_path: str, length: int
    ) -> bool:
        source = self._unwrap_typedef_path(source_path, set())
        target = self._unwrap_typedef_path(target_path, set())
        if self.canonical_path.get(source, source) == self.canonical_path.get(target, target):
            return True
        source_record = self.by_path.get(source) if source else None
        target_record = self.by_path.get(target) if target else None
        if source_record is None or target_record is None:
            return False
        if (int(source_record.get("length", -1)) != length or
                int(target_record.get("length", -1)) != length):
            return False
        if source_record["class"] == "PointerDB" and target_record["class"] == "PointerDB":
            return length == 4
        if (str(target_record["class"]).startswith("Undefined") and
                target_record["class"] != "UndefinedDataType" and
                source_record["class"] not in self.RECORD_KINDS and
                source_record["class"] not in {
                    "PointerDB", "ArrayDB", "FunctionDefinitionDB",
                }):
            return True
        scalar = lambda record: (
            str(record["class"]).endswith("IntegerDataType") or
            record["class"] in {"EnumDB", "Undefined1DataType", "Undefined2DataType",
                                "Undefined4DataType", "Undefined8DataType"}
        )
        return scalar(source_record) and scalar(target_record)

    @functools.lru_cache(maxsize=None)
    def display_function_parameters(
        self, display_name: str
    ) -> tuple[str, ...] | None:
        """Return the exact arguments of one rendered function-pointer type."""
        signatures: set[tuple[str, ...]] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is not None and record["class"] == "PointerDB":
                current = self._unwrap_typedef_path(
                    str(record["detail"]["points_to"]), set()
                )
                record = self.by_path.get(current) if current else None
            if record is None or record["class"] != "FunctionDefinitionDB":
                continue
            signatures.add(tuple(
                self.type_name(str(argument["type"]))
                for argument in record["detail"].get("arguments", ())
            ))
        return next(iter(signatures)) if len(signatures) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_function_signature(
        self, display_name: str
    ) -> tuple[str, str, tuple[str, ...], bool] | None:
        """Return one exact emitted C++ function-pointer signature.

        Generated callback definitions at different datatype paths are aliases
        of one C++ function type when convention, result, fixed arguments and
        varargs agree.  Treating those aliases as unrelated creates a cast at
        every callsite even though the compiler sees the same type.
        """
        signatures: set[tuple[str, str, tuple[str, ...], bool]] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is not None and record["class"] == "PointerDB":
                current = self._unwrap_typedef_path(
                    str(record["detail"]["points_to"]), set()
                )
                record = self.by_path.get(current) if current else None
            if record is None or record["class"] != "FunctionDefinitionDB":
                continue
            detail = record["detail"]
            convention = str(detail.get("calling_convention") or "")
            convention = "" if convention == "unknown" else convention
            signatures.add((
                convention,
                self.cpp_type_key(self.type_name(str(detail["return_type"]))),
                tuple(
                    self.cpp_type_key(self.type_name(str(argument["type"])))
                    for argument in detail.get("arguments", ())
                ),
                bool(detail.get("varargs")),
            ))
        return next(iter(signatures)) if len(signatures) == 1 else None

    @functools.lru_cache(maxsize=None)
    def display_function_machine_signature(
        self, display_name: str
    ) -> tuple[str, int, tuple[int, ...], bool] | None:
        """Return the exact x86 storage ABI of a function-pointer display.

        Signedness and semantic pointee names are deliberately absent here:
        they matter to C++ type identity, but not to matching an address-stored
        callback with the lexical family which consumes one machine word per
        argument.  Convention, arity, varargs and every storage width still
        have to agree exactly.
        """
        signatures: set[tuple[str, int, tuple[int, ...], bool]] = set()
        for path in self.paths_by_display_name.get(display_name, ()):
            current = self._unwrap_typedef_path(path, set())
            record = self.by_path.get(current) if current else None
            if record is not None and record["class"] == "PointerDB":
                current = self._unwrap_typedef_path(
                    str(record["detail"]["points_to"]), set()
                )
                record = self.by_path.get(current) if current else None
            if record is None or record["class"] != "FunctionDefinitionDB":
                continue
            detail = record["detail"]
            convention = str(detail.get("calling_convention") or "")
            convention = "" if convention == "unknown" else convention
            return_width = self._path_storage_length(
                str(detail.get("return_type") or "")
            )
            argument_widths = tuple(
                self._path_storage_length(str(argument.get("type") or ""))
                for argument in detail.get("arguments", ())
            )
            if return_width is None or any(
                    width is None for width in argument_widths):
                continue
            signatures.add((
                convention,
                return_width,
                tuple(int(width) for width in argument_widths),
                bool(detail.get("varargs")),
            ))
        return next(iter(signatures)) if len(signatures) == 1 else None

    def _path_storage_length(self, path: str) -> int | None:
        current = self._unwrap_typedef_path(path, set())
        record = self.by_path.get(current) if current else None
        if record is None:
            return None
        if str(record.get("path") or "") == "/void":
            return 0
        length = int(record.get("length", -1))
        return length if length >= 0 else None

    def _unwrap_typedef_path(self, path: str, seen: set[str]) -> str | None:
        while path not in seen:
            seen.add(path)
            record = self.by_path.get(path)
            if record is None or record["class"] != "TypedefDB":
                return path
            path = str(record["detail"]["base_type"])
        return None

    def _pointer_kind(self, path: str, seen: set[str]) -> str | None:
        if path in seen:
            return None
        seen = set(seen)
        seen.add(path)
        record = self.by_path.get(path)
        if record is None:
            return None
        if record["class"] == "TypedefDB":
            return self._pointer_kind(str(record["detail"]["base_type"]), seen)
        if record["class"] != "PointerDB":
            return None
        target_path = str(record["detail"]["points_to"])
        target = self.by_path.get(target_path)
        while target is not None and target["class"] == "TypedefDB":
            target_path = str(target["detail"]["base_type"])
            target = self.by_path.get(target_path)
        leaf = target_path.rsplit("/", 1)[-1]
        if not leaf or leaf in {
                "-BAD-", "void", "code", "byte", "uchar", "uint1"
        } or re.fullmatch(
                r"undefined(?:1|2|3|4|5|6|8)?", leaf):
            return "generic"
        return "concrete"

    def _record_dependencies(self, path: str) -> set[str]:
        record = self.by_path[path]
        dependencies: set[str] = set()
        references: list[str]
        if record["class"] in self.RECORD_KINDS:
            references = [item["type"] for item in record["detail"]["components"]]
        elif record["class"] == "TypedefDB":
            references = [record["detail"]["base_type"]]
        else:
            return dependencies
        for reference in references:
            dependencies.update(self._complete_dependencies(reference, set()))
        dependencies.discard(path)
        canonical = self.canonical_path.get(path, path)
        dependencies.discard(canonical)
        return {self.canonical_path.get(item, item) for item in dependencies}

    def _complete_dependencies(self, path: str, seen: set[str]) -> set[str]:
        if path in seen:
            return set()
        seen = set(seen)
        seen.add(path)
        record = self.by_path.get(path)
        if record is None:
            return set()
        kind = record["class"]
        if kind in {"PointerDB", "FunctionDefinitionDB"}:
            return set()
        if kind == "ArrayDB":
            return self._complete_dependencies(record["detail"]["element_type"], seen)
        if kind == "TypedefDB":
            result = {self.canonical_path.get(path, path)}
            result.update(self._complete_dependencies(record["detail"]["base_type"], seen))
            return result
        if kind in self.RECORD_KINDS:
            return {self.canonical_path.get(path, path)}
        return set()

    def _ordered_definitions(self) -> list[str]:
        nodes = []
        for record in self.records:
            path = record["path"]
            if path in self.skipped_paths:
                continue
            if record["class"] in self.RECORD_KINDS:
                nodes.append(path)
        node_set = set(nodes)
        dependencies = {
            node: self._record_dependencies(node) & node_set for node in nodes
        }
        reverse: dict[str, set[str]] = defaultdict(set)
        indegree = {node: len(values) for node, values in dependencies.items()}
        for node, values in dependencies.items():
            for value in values:
                reverse[value].add(node)
        ready = sorted(node for node, degree in indegree.items() if degree == 0)
        result: list[str] = []
        while ready:
            node = ready.pop(0)
            result.append(node)
            for consumer in sorted(reverse.get(node, ())):
                indegree[consumer] -= 1
                if indegree[consumer] == 0:
                    ready.append(consumer)
                    ready.sort()
        if len(result) != len(nodes):
            remaining = sorted(node for node in nodes if node not in result)
            raise GenerationError(
                "by-value type dependency cycle: " + ", ".join(remaining[:20])
            )
        return result

    def _alias_dependencies(self, path: str, seen: set[str]) -> set[str]:
        if path in seen:
            return set()
        seen = set(seen)
        seen.add(path)
        record = self.by_path.get(path)
        if record is None:
            return set()
        kind = record["class"]
        if kind == "TypedefDB":
            return {self.canonical_path.get(path, path)}
        if kind == "FunctionDefinitionDB":
            return {path}
        if kind == "PointerDB":
            return self._alias_dependencies(record["detail"]["points_to"], seen)
        if kind == "ArrayDB":
            return self._alias_dependencies(record["detail"]["element_type"], seen)
        return set()

    def _ordered_aliases(self) -> list[str]:
        nodes = []
        for record in self.records:
            path = record["path"]
            if record["class"] == "FunctionDefinitionDB":
                nodes.append(path)
            elif record["class"] == "TypedefDB" and path not in self.skipped_paths:
                nodes.append(path)
        node_set = set(nodes)
        dependencies: dict[str, set[str]] = {}
        for path in nodes:
            record = self.by_path[path]
            if record["class"] == "TypedefDB":
                references = [record["detail"]["base_type"]]
            else:
                detail = record["detail"]
                references = [detail["return_type"]]
                references.extend(argument["type"] for argument in detail["arguments"])
            values: set[str] = set()
            for reference in references:
                values.update(self._alias_dependencies(reference, set()))
            values.discard(path)
            dependencies[path] = values & node_set
        reverse: dict[str, set[str]] = defaultdict(set)
        indegree = {node: len(values) for node, values in dependencies.items()}
        for node, values in dependencies.items():
            for value in values:
                reverse[value].add(node)
        ready = sorted(node for node, degree in indegree.items() if degree == 0)
        result: list[str] = []
        while ready:
            node = ready.pop(0)
            result.append(node)
            for consumer in sorted(reverse.get(node, ())):
                indegree[consumer] -= 1
                if indegree[consumer] == 0:
                    ready.append(consumer)
                    ready.sort()
        if len(result) != len(nodes):
            remaining = sorted(node for node in nodes if node not in result)
            raise GenerationError(
                "typedef/function-type dependency cycle: " + ", ".join(remaining[:20])
            )
        return result

    def emit(self) -> str:
        lines = [
            "#pragma once",
            "",
            "#include <ctime>",
            "#include \"st/pseudocode_runtime.hpp\"",
            "",
            "// Exact-width leaf spellings absent from the exporter runtime.",
            "using uchar = uint8_t;",
            "using word = uint16_t;",
            "using dword = uint32_t;",
            "using pointer = uintptr_t;",
            "using undefined5 = STUnsignedBytes<5>;",
            "using wchar16 = char16_t;",
            "using ImageBaseOffset32 = uint32_t;",
            "using string = byte;",
            "using unicode = wchar16;",
            "using TerminatedCString = char;",
            "using IconResource = byte;",
            "using GroupIconResource = byte;",
            "using IMAGE_RICH_HEADER = byte;",
            "",
        ]

        emitted_names: set[str] = set()
        for record in self.records:
            path = record["path"]
            if path in self.skipped_paths or record["class"] not in self.RECORD_KINDS:
                continue
            name = self.type_name(path)
            if name in emitted_names:
                continue
            keyword = "struct" if record["class"] == "StructureDB" else "union"
            lines.append(f"{keyword} {name};")
            emitted_names.add(name)
        lines.append("")

        for record in self.records:
            if record["class"] != "EnumDB" or record["path"] in self.skipped_paths:
                continue
            width = int(record.get("length", 4))
            values = [int(item["value"]) for item in record["detail"]["values"]]
            signed = any(value < 0 for value in values)
            base = {
                (1, False): "uint8_t", (1, True): "int8_t",
                (2, False): "uint16_t", (2, True): "int16_t",
                (4, False): "uint32_t", (4, True): "int32_t",
                (8, False): "uint64_t", (8, True): "int64_t",
            }.get((width, signed), "int32_t")
            lines.append(f"using {self.type_name(record['path'])} = {base};")
        lines.append("")

        enum_values: dict[str, int] = {}
        for record in self.records:
            if record["class"] != "EnumDB":
                continue
            for item in record["detail"]["values"]:
                enum_values.setdefault(item["name"], int(item["value"]))
        for name in sorted(enum_values):
            lines.append(f"inline constexpr auto {name} = {enum_values[name]};")
        lines.append("")

        # Typedefs and exported callback signatures form one small dependency
        # graph (for example UINT -> TIMECALLBACK -> LPTIMECALLBACK).
        for path in self._ordered_aliases():
            record = self.by_path[path]
            if record["class"] == "TypedefDB":
                name = self.type_name(path)
                if name not in STANDARD_TYPE_NAMES:
                    lines.append(
                        f"using {name} = {self.type_name(record['detail']['base_type'])};"
                    )
                continue
            detail = record["detail"]
            arguments = []
            for index, argument in enumerate(detail["arguments"]):
                arg_name = safe_identifier(argument.get("name") or f"arg_{index}")
                arguments.append(self.declaration(argument["type"], arg_name))
            if detail.get("varargs"):
                arguments.append("...")
            if not arguments:
                arguments.append("void")
            convention = detail.get("calling_convention") or ""
            convention = "" if convention == "unknown" else convention
            result = self.type_name(detail["return_type"])
            middle = " ".join(part for part in (result, convention) if part)
            lines.append(f"using {self.fn_name[path]} = {middle}({', '.join(arguments)});")
        non_function_names = {
            record["name"] for record in self.records
            if record["class"] != "FunctionDefinitionDB"
        }
        for record in self.records:
            if record["class"] != "FunctionDefinitionDB":
                continue
            name = str(record["name"])
            if IDENTIFIER_RE.fullmatch(name) and name not in non_function_names:
                lines.append(f"using {name} = {self.fn_name[record['path']]};")
        lines.extend(["", "#pragma pack(push, 1)", ""])

        definition_order = self._ordered_definitions()
        for path in definition_order:
            record = self.by_path[path]
            lines.extend(self._emit_record(record))
        lines.extend(["#pragma pack(pop)", ""])
        for path in definition_order:
            for wrapper in self.member_wrappers_by_record_path.get(path, ()):
                parameters = list(wrapper.parameters)
                if wrapper.variadic:
                    parameters.append("Args... st_varargs")
                    lines.append("template <typename... Args>")
                lines.append(
                    f"inline {wrapper.return_type} {wrapper.owner_name}::"
                    f"{wrapper.member_name}({', '.join(parameters)}) {{"
                )
                arguments = list(("this", *wrapper.argument_names))
                if wrapper.variadic:
                    arguments.append("st_varargs...")
                call = f"(vtable->{wrapper.member_name})({', '.join(arguments)})"
                if wrapper.return_type == "void":
                    lines.append(f"    {call};")
                else:
                    lines.append(f"    return {call};")
                lines.extend(["}", ""])
            for wrapper in self.exact_indirect_member_wrappers_by_record_path.get(
                    path, ()):
                parameters = ", ".join(wrapper.parameters)
                lines.append(
                    f"inline {wrapper.return_type} {wrapper.owner_name}::"
                    f"{wrapper.member_name}({parameters}) {{"
                )
                arguments = ", ".join(("this", *wrapper.argument_names))
                call = (
                    f"reinterpret_cast<{wrapper.function_pointer_type}>("
                    f"{wrapper.callee_expression})({arguments})"
                )
                if wrapper.return_type == "void":
                    lines.append(f"    {call};")
                else:
                    lines.append(f"    return {call};")
                lines.extend(["}", ""])
        return "\n".join(lines)

    def _emit_record(self, record: Mapping[str, Any]) -> list[str]:
        keyword = "struct" if record["class"] == "StructureDB" else "union"
        name = self.type_name(str(record["path"]))
        if name == "tm":
            self.issues.append(Issue("host_type_reused", "skipped exported struct tm"))
            return []
        lines = [f"{keyword} {name} {{"]
        offset = 0
        field_counts: Counter[str] = Counter()
        components = list(record["detail"]["components"])
        record_path = self.canonical_path.get(str(record["path"]), str(record["path"]))
        required_gap_fields = self.required_gap_fields.get(record_path, set())
        index = 0
        while index < len(components):
            component = components[index]
            component_offset = int(component["offset"])
            component_length = int(component["length"])
            if (keyword == "struct" and not component.get("field_name") and
                    component.get("type") in {"/undefined", "/-BAD-", ""}):
                if component_offset in required_gap_fields:
                    if component_offset > offset:
                        lines.append(
                            f"    byte _pad_{offset:04X}[{component_offset - offset}];"
                        )
                    lines.append(
                        f"    undefined1 field_0x{component_offset:x}; "
                        "// exact unnamed-byte view referenced by exported code"
                    )
                    if component_length > 1:
                        lines.append(
                            f"    byte _unknown_{component_offset + 1:04X}"
                            f"[{component_length - 1}];"
                        )
                    offset = max(offset, component_offset + component_length)
                    self.materialized_gap_fields += 1
                    index += 1
                    continue
                end = component_offset + component_length
                next_index = index + 1
                while next_index < len(components):
                    candidate = components[next_index]
                    if (candidate.get("field_name") or
                            candidate.get("type") not in {"/undefined", "/-BAD-", ""} or
                            int(candidate["offset"]) != end or
                            int(candidate["offset"]) in required_gap_fields):
                        break
                    end += int(candidate["length"])
                    next_index += 1
                if component_offset > offset:
                    lines.append(
                        f"    byte _pad_{offset:04X}[{component_offset - offset}];"
                    )
                lines.append(
                    f"    byte _unknown_{component_offset:04X}[{end - component_offset}];"
                )
                offset = max(offset, end)
                index = next_index
                continue
            if keyword == "struct" and component_offset > offset:
                gap = component_offset - offset
                lines.append(f"    byte _pad_{offset:04X}[{gap}];")
            raw_name = component.get("field_name") or (
                f"field{component['ordinal']}_0x{component_offset:x}"
            )
            array_suffix = ""
            array_match = re.fullmatch(r"(.+?)(\[[0-9]+\])", raw_name)
            if array_match:
                raw_name, array_suffix = array_match.groups()
            field_name = safe_identifier(raw_name, "field")
            field_counts[field_name] += 1
            if field_counts[field_name] > 1:
                original = field_name
                field_name = f"{field_name}_dup{field_counts[original]}"
                self.issues.append(Issue(
                    "duplicate_field_name",
                    f"{record['path']}:{original} renamed to {field_name}",
                ))
            try:
                declaration = self.declaration(
                    component["type"], field_name + array_suffix
                )
            except Exception as error:  # retain exact storage when declarator fails
                declaration = f"byte {field_name}[{component_length}]"
                self.issues.append(Issue(
                    "field_declaration_fallback",
                    f"{record['path']}+0x{component_offset:x}: {error}",
                ))
            comment = str(component.get("comment") or "").replace("*/", "* /")
            comment = " | ".join(part.strip() for part in comment.splitlines() if part.strip())
            suffix = f" // {comment}" if comment else ""
            lines.append(f"    {declaration};{suffix}")
            if keyword == "struct":
                offset = max(offset, component_offset + component_length)
            index += 1
        length = int(record.get("length", 0))
        if not record["detail"]["components"] and length > 0:
            lines.append(f"    byte _storage[{length}];")
        elif keyword == "struct" and length > offset:
            lines.append(f"    byte _pad_{offset:04X}[{length - offset}];")
        for wrapper in self.member_wrappers_by_record_path.get(record_path, ()):
            if wrapper.variadic:
                lines.append("    template <typename... Args>")
            parameters = list(wrapper.parameters)
            if wrapper.variadic:
                parameters.append("Args... st_varargs")
            lines.append(
                f"    {wrapper.return_type} {wrapper.member_name}"
                f"({', '.join(parameters)});"
            )
        for wrapper in self.exact_indirect_member_wrappers_by_record_path.get(
                record_path, ()):
            lines.append(
                f"    {wrapper.return_type} {wrapper.member_name}"
                f"({', '.join(wrapper.parameters)});"
            )
        for wrapper in self.source_member_wrappers_by_record_path.get(record_path, ()):
            lines.append(
                f"    {wrapper.return_type} {wrapper.member_name}"
                f"({', '.join(wrapper.parameters)});"
            )
        lines.extend(["};", ""])
        return lines


class SourceTreeGenerator:
    def __init__(self, repo: Path, corpus: Path, output: Path, receipt: Path):
        self.repo = repo
        self.corpus = corpus
        self.output = output
        self.receipt_path = receipt
        self.issues: list[Issue] = []
        self.stats: Counter[str] = Counter()
        self.functions: list[dict[str, Any]] = []
        self.function_by_address: dict[str, dict[str, Any]] = {}
        self.globals: list[dict[str, Any]] = []
        self.global_by_address: dict[str, dict[str, Any]] = {}
        self.strings: list[dict[str, Any]] = []
        self.string_by_address: dict[str, dict[str, Any]] = {}
        self.image_address_min = 0
        self.image_address_max = 0
        self.global_alias_records: dict[str, dict[str, Any]] = {}
        self.types: list[dict[str, Any]] = []
        self.imports: list[dict[str, Any]] = []
        self.import_spellings: set[str] = set()
        self.call_relations: list[dict[str, Any]] = []
        self.relations_by_caller: dict[str, list[dict[str, Any]]] = defaultdict(list)
        self.external_signatures: dict[str, set[str]] = defaultdict(set)
        self.external_parameter_types: dict[str, tuple[str, ...]] = {}
        self.external_variadic: set[str] = set()
        self.callable_addresses_by_spelling: dict[str, set[str]] = defaultdict(set)
        self.sanitized_callable_spellings: set[str] = set()
        self.callable_symbol_resolution_cache: dict[str, str | None] = {}
        self.global_type_collisions: dict[str, str] = {}
        self.global_display_types: dict[str, str] = {}
        self.body_declarations: dict[str, str] = {}
        self.neutral_callable_parameters: dict[str, set[int]] = defaultdict(set)
        self.neutral_callable_boundary_casts: Counter[str] = Counter()
        self.exact_call_result_boundary_casts: Counter[str] = Counter()
        self.exact_address_storage_boundary_casts: Counter[str] = Counter()
        self.exact_existing_pointer_view_casts: Counter[str] = Counter()
        self.promoted_slot_boundary_casts: Counter[str] = Counter()
        self.machine_callsite_slots: dict[str, dict[str, int]] = {}
        self.local_lifetime_call_views: dict[str, list[dict[str, str]]] = (
            defaultdict(list)
        )
        self.previous_readability_by_address: dict[str, dict[str, int]] = {}
        self.readability_by_address: dict[str, dict[str, int]] = {}
        self.receipt: dict[str, Any] = {}
        self.type_emitter: TypeEmitter | None = None
        self.input_hashes: dict[str, str] = {}
        self.generator_sha256 = sha256_file(Path(__file__).resolve())

    def load(self) -> None:
        required = [
            self.corpus / "manifest.json", self.corpus / "functions.json",
            self.corpus / "types.jsonl", self.corpus / "globals.jsonl",
            self.corpus / "strings.jsonl", self.corpus / "imports.json",
            self.corpus / "pseudocode_runtime.h",
            self.corpus / "call_relations.jsonl",
            self.receipt_path,
            self.receipt_path.parent / "local_lifetime_proposals.tsv",
        ]
        missing = [str(path) for path in required if not path.is_file()]
        if missing:
            raise GenerationError("missing inputs: " + ", ".join(missing))
        self.receipt = read_json(self.receipt_path)
        if self.receipt.get("status") != "passed":
            raise GenerationError(
                f"corpus receipt is {self.receipt.get('status')!r}, expected 'passed'"
            )
        actual_manifest = sha256_file(self.corpus / "manifest.json")
        expected_manifest = self.receipt.get("current_manifest_sha256")
        if actual_manifest != expected_manifest:
            raise GenerationError(
                f"manifest hash mismatch: receipt={expected_manifest}, actual={actual_manifest}"
            )
        for name in (
            "manifest.json", "functions.json", "types.jsonl", "globals.jsonl",
            "strings.jsonl", "imports.json", "call_relations.jsonl",
            "pseudocode_runtime.h",
        ):
            self.input_hashes[name] = sha256_file(self.corpus / name)
        lifetime_path = self.receipt_path.parent / "local_lifetime_proposals.tsv"
        self.input_hashes["recovery/local_lifetime_proposals.tsv"] = sha256_file(
            lifetime_path
        )
        with lifetime_path.open(encoding="utf-8", newline="") as stream:
            for row in csv.DictReader(stream, delimiter="\t"):
                if (
                    str(row.get("apply") or "") != "0"
                    or str(row.get("anchor_kind") or "") != "call_argument"
                    or "exact call-boundary type is proven" not in str(
                        row.get("reason") or ""
                    )
                    or "no same-width transparent p-code path" not in str(
                        row.get("reason") or ""
                    )
                ):
                    continue
                current = str(row.get("expected_current_type") or "")
                proposed = str(row.get("proposed_type") or "")
                def domain(specification: str) -> str:
                    if specification.startswith("pointer:"):
                        return "pointer"
                    if specification in {"/float", "/double", "/float10"}:
                        return "floating"
                    if specification == "/void":
                        return "void"
                    return "scalar"
                current_domain = domain(current)
                proposed_domain = domain(proposed)
                if current_domain == proposed_domain or not (
                    {current_domain, proposed_domain} &
                    {"pointer", "floating", "void"}
                ):
                    continue
                address = str(row.get("function_address") or "").upper()
                if not (
                    re.fullmatch(r"[0-9A-F]{8}", address)
                    and IDENTIFIER_RE.fullmatch(
                        str(row.get("original_name") or "")
                    )
                ):
                    continue
                raw_anchors = str(row.get("supporting_anchors") or "")
                expanded: list[dict[str, str]] = []
                for token in raw_anchors.split(","):
                    parts = token.strip().split(":", 5)
                    if len(parts) != 6:
                        continue
                    anchor, raw_time, kind, raw_operand, target, resolved = parts
                    if not (
                        re.fullmatch(r"[0-9A-Fa-f]{8}", anchor)
                        and raw_time.startswith("t")
                        and raw_time[1:].isdigit()
                        and kind == "call_argument"
                        and raw_operand.isdigit()
                        and re.fullmatch(r"[0-9A-Fa-f]{8}", target)
                    ):
                        continue
                    item = dict(row)
                    item.update({
                        "anchor_address": anchor.upper(),
                        "anchor_time": raw_time[1:],
                        "anchor_kind": kind,
                        "anchor_operand": raw_operand,
                        "direct_target_address": target.upper(),
                        "resolved_target_address": resolved.upper(),
                    })
                    expanded.append(item)
                if not expanded:
                    anchor = str(row.get("anchor_address") or "").upper()
                    target = str(row.get("direct_target_address") or "").upper()
                    if not (
                        re.fullmatch(r"[0-9A-F]{8}", anchor)
                        and re.fullmatch(r"[0-9A-F]{8}", target)
                        and str(row.get("anchor_operand") or "").isdigit()
                    ):
                        continue
                    expanded.append(dict(row))
                self.local_lifetime_call_views[address].extend(expanded)
        self.functions = read_json(self.corpus / "functions.json")
        self.function_by_address = {
            function["address"].upper(): function for function in self.functions
        }
        for function in self.functions:
            address = str(function["address"]).upper()
            for spelling in {
                str(function.get("qualified_name") or ""),
                str(function.get("name") or ""),
            }:
                if spelling:
                    self.callable_addresses_by_spelling[spelling].add(address)
                    for alias in {
                        spelling.replace("@", "_"),
                        safe_identifier(spelling, "function"),
                    }:
                        self.callable_addresses_by_spelling[alias].add(address)
                        if alias != spelling:
                            self.sanitized_callable_spellings.add(alias)
        self.types = read_jsonl(self.corpus / "types.jsonl")
        self.globals = read_jsonl(self.corpus / "globals.jsonl")
        self.global_by_address = {
            str(item["address"]).upper(): item for item in self.globals
        }
        self.strings = read_jsonl(self.corpus / "strings.jsonl")
        self.string_by_address = {
            str(item["address"]).upper(): item for item in self.strings
        }
        image_addresses = [
            int(str(item["address"]), 16)
            for item in (*self.globals, *self.strings, *self.functions)
            if re.fullmatch(r"[0-9A-Fa-f]{8}", str(item.get("address") or ""))
        ]
        if image_addresses:
            self.image_address_min = min(image_addresses)
            self.image_address_max = max(image_addresses)
        self.imports = read_json(self.corpus / "imports.json")
        self.import_spellings = {
            safe_identifier(str(item["name"]).replace("@", "_"), "import")
            for item in self.imports
        }
        self.call_relations = read_jsonl(self.corpus / "call_relations.jsonl")
        for relation in self.call_relations:
            caller_address, _ = split_address_label(str(relation["caller"]))
            self.relations_by_caller[caller_address].append(relation)
            direct_address, _ = split_address_label(str(relation["direct"]))
            if direct_address.startswith("EXTERNAL:"):
                self.external_signatures[direct_address].add(
                    str(relation.get("resolved_signature") or "")
                )
        bodies = sum(bool(function.get("body_exported")) for function in self.functions)
        if bodies != int(self.receipt.get("body_function_count", -1)):
            raise GenerationError(
                f"body count mismatch: receipt={self.receipt.get('body_function_count')}, "
                f"functions.json={bodies}"
            )
        self.type_emitter = TypeEmitter(self.types, self.issues)
        for external_address, signatures in self.external_signatures.items():
            parsed = {
                specification for signature in signatures
                if signature and (
                    specification := self._signature_parameter_spec(signature)
                ) is not None
            }
            if len(parsed) == 1:
                local_name = external_local_name(external_address)
                parameters, variadic = next(iter(parsed))
                self.external_parameter_types[local_name] = parameters
                if variadic:
                    self.external_variadic.add(local_name)
        globals_by_name: dict[str, list[dict[str, Any]]] = defaultdict(list)
        for item in self.globals:
            globals_by_name[str(item["name"])].append(item)
        for name, items in globals_by_name.items():
            if (len(items) != 1 or
                    name not in self.type_emitter.record_paths_by_name or
                    not IDENTIFIER_RE.fullmatch(name)):
                continue
            address = str(items[0]["address"]).upper()
            self.global_type_collisions[name] = f"st_global_{address}"
            self.global_alias_records[f"st_global_{address}"] = items[0]
            self.global_display_types[f"st_global_{address}"] = str(
                items[0].get("type") or ""
            )
        for item in self.globals:
            name = str(item["name"])
            address = str(item["address"]).upper()
            display_type = str(item.get("type") or "")
            if name and display_type:
                self.global_display_types[name] = display_type
                rendered_name = safe_identifier(name, "global")
                self.global_display_types[rendered_name] = display_type
                self.global_display_types["_" + rendered_name] = display_type
            rendered = safe_identifier(name, "global")
            if not IDENTIFIER_RE.fullmatch(name) and rendered.upper().endswith(address):
                self.global_alias_records[f"st_global_{address}"] = item
                self.global_display_types[f"st_global_{address}"] = display_type
        self.type_emitter.register_global_types(
            self.globals, self.global_type_collisions
        )
        self.stats["exported_function_records"] = len(self.functions)
        self.stats["exported_type_records"] = len(self.types)
        self.stats["external_call_identities"] = len(self.external_signatures)

    def generate(self) -> None:
        self.load()
        self.previous_readability_by_address = (
            self._previous_source_readability_by_address()
        )
        self._prune_stale_staging()
        staging = self.output.parent / f".{self.output.name}.source-staging-{os.getpid()}"
        if staging.exists():
            shutil.rmtree(staging)
        staging.mkdir(parents=True)
        try:
            self._write_tree(staging)
            self._write_manifest(staging)
            self._promote(staging)
        except Exception:
            if staging.exists():
                shutil.rmtree(staging)
            raise

    def _prune_stale_staging(self) -> None:
        self.output.parent.mkdir(parents=True, exist_ok=True)
        prefixes = (
            f".{self.output.name}.source-staging-",
            f".{self.output.name}.source-previous-",
        )
        for candidate in self.output.parent.iterdir():
            if not candidate.is_dir() or not candidate.name.startswith(prefixes):
                continue
            # The exact sibling prefix is generator-owned; never follow a symlink.
            if candidate.is_symlink():
                raise GenerationError(f"refusing to remove staging symlink {candidate}")
            shutil.rmtree(candidate)

    def _write_tree(self, root: Path) -> None:
        include = root / "include" / "st"
        include.mkdir(parents=True)
        runtime = (self.corpus / "pseudocode_runtime.h").read_text(encoding="utf-8")
        (include / "pseudocode_runtime.hpp").write_text(runtime, encoding="utf-8")

        groups: dict[
            Path, list[tuple[dict[str, Any], str, int]]
        ] = defaultdict(list)
        used_globals: set[str] = set()
        used_imports: set[str] = set()
        assert self.type_emitter is not None
        # The compact function index intentionally lags cached bodies when only
        # a referenced prototype changed.  Preload declarations from every
        # accepted body before transforming any caller, so source-boundary
        # decisions are order-independent and use the exact declaration which
        # will later be emitted into recovered_functions.hpp.
        self._preload_neutral_callable_parameter_roles()
        self._preload_body_declarations()
        # Exact use-site overrides are address-local evidence, but a proven
        # concrete receiver plus physical byte slot identifies one shared ABI.
        # Register every such wrapper before transforming any body so an early
        # address cannot miss evidence discovered at a later address.
        self._preload_exact_indirect_member_wrappers()
        for function in self.functions:
            if not function.get("body_exported"):
                continue
            address = function["address"].upper()
            body_path = self.corpus / "functions" / address / "decomp.c"
            if not body_path.is_file():
                raise GenerationError(f"missing exported body {body_path}")
            body = body_path.read_text(encoding="utf-8")
            include_match = re.match(r"^#include[^\n]*\n+", body)
            body_line_origin = (
                include_match.group(0).count("\n") + 1 if include_match else 1
            )
            transformed = self._transform_body(function, body)
            transformed_code = code_only(transformed)
            self.readability_by_address[address] = self._readability_metrics(
                transformed
            )
            self.type_emitter.observe_field_accesses(transformed_code)
            self._observe_exact_nested_gap_fields(function, transformed_code)
            self.body_declarations[address] = self._body_declaration(address, transformed_code)
            group = self._source_group(function)
            groups[group].append((function, transformed, body_line_origin))
            used_globals.update(
                self._used_global_names(function, transformed_code)
            )
            used_imports.update(self._used_import_names(transformed_code))

        self._require_nonincreasing_source_readability()

        self.type_emitter.prepare_source_member_wrappers(
            self.functions, self.body_declarations
        )

        (include / "recovered_types.hpp").write_text(
            self.type_emitter.emit(), encoding="utf-8"
        )
        self.stats["materialized_gap_field_views"] = (
            self.type_emitter.materialized_gap_fields
        )
        self.stats["generated_virtual_member_wrappers"] = sum(
            len(items)
            for items in self.type_emitter.member_wrappers_by_record_path.values()
        )
        self.stats["generated_exact_indirect_member_wrappers"] = sum(
            len(items)
            for items in self.type_emitter
                .exact_indirect_member_wrappers_by_record_path.values()
        )
        self.stats["generated_source_member_wrappers"] = sum(
            len(items)
            for items in self.type_emitter.source_member_wrappers_by_record_path.values()
        )

        (include / "recovered_globals.hpp").write_text(
            self._emit_globals(used_globals), encoding="utf-8"
        )
        (include / "recovered_imports.hpp").write_text(
            self._emit_imports(used_imports), encoding="utf-8"
        )
        (include / "recovered_functions.hpp").write_text(
            self._emit_function_declarations(), encoding="utf-8"
        )
        (include / "generated.hpp").write_text(
            "#pragma once\n\n"
            "#include \"st/recovered_types.hpp\"\n"
            "#include \"st/recovered_globals.hpp\"\n"
            "#include \"st/recovered_imports.hpp\"\n"
            "#include \"st/recovered_functions.hpp\"\n\n"
            "// Ghidra exposes the x86 ECX receiver as an explicit parameter.\n"
            "// The token macro keeps that ABI parameter source-compatible with C++.\n"
            "#define this st_this\n\n"
            "namespace st {\n"
            "// Exact C-to-C++ compatibility boundary.  Ghidra emits neutral C\n"
            "// pointer views where the address-stable callee prototype already\n"
            "// proves the concrete pointee type.  This changes no image bits.\n"
            "template <typename Target, typename Source>\n"
            "inline Target pointer_boundary_cast(Source value) noexcept {\n"
            "    static_assert(std::is_pointer_v<Target>);\n"
            "    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source>);\n"
            "    if constexpr (std::is_pointer_v<Source>) {\n"
            "        using TargetPointee = std::remove_pointer_t<Target>;\n"
            "        using SourcePointee = std::remove_pointer_t<Source>;\n"
            "        if constexpr (std::is_same_v<\n"
            "                std::remove_const_t<TargetPointee>,\n"
            "                std::remove_const_t<SourcePointee>>)\n"
            "            return const_cast<Target>(value);\n"
            "        else if constexpr (std::is_const_v<SourcePointee> &&\n"
            "                           !std::is_const_v<TargetPointee>) {\n"
            "            using MutableSource = std::add_pointer_t<\n"
            "                std::remove_const_t<SourcePointee>>;\n"
            "            return reinterpret_cast<Target>(\n"
            "                const_cast<MutableSource>(value));\n"
            "        }\n"
            "        else\n"
            "            return reinterpret_cast<Target>(value);\n"
            "    }\n"
            "    else\n"
            "        return reinterpret_cast<Target>(static_cast<uintptr_t>(value));\n"
            "}\n"
            "template <typename Target, typename Source>\n"
            "inline Target machine_word_boundary_cast(Source value) noexcept {\n"
            "    static_assert(std::is_integral_v<Target>);\n"
            "    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source> || "
            "std::is_null_pointer_v<Source>);\n"
            "    if constexpr (std::is_null_pointer_v<Source>)\n"
            "        return static_cast<Target>(0);\n"
            "    else if constexpr (std::is_pointer_v<Source>)\n"
            "        return static_cast<Target>(reinterpret_cast<uintptr_t>(value));\n"
            "    else\n"
            "        return static_cast<Target>(value);\n"
            "}\n"
            "template <typename Target, typename Source>\n"
            "inline Target storage_bit_cast(const Source &value) noexcept {\n"
            "    static_assert(sizeof(Target) == sizeof(Source));\n"
            "    static_assert(std::is_trivially_copyable_v<Target>);\n"
            "    static_assert(std::is_trivially_copyable_v<Source>);\n"
            "    Target result{};\n"
            "    ::memcpy(&result, &value, sizeof(result));\n"
            "    return result;\n"
            "}\n"
            "template <typename Target, typename Source>\n"
            "inline Target function_address_boundary_cast(Source value) noexcept {\n"
            "    static_assert(std::is_pointer_v<Target>);\n"
            "    static_assert(std::is_pointer_v<Source>);\n"
            "    return reinterpret_cast<Target>(value);\n"
            "}\n"
            "inline char *mutable_c_string(const char *value) noexcept {\n"
            "    return const_cast<char *>(value);\n"
            "}\n"
            "inline STMessageArg message_arg_u32(uint32_t value) noexcept {\n"
            "    STMessageArg result{};\n"
            "    result.u32 = value;\n"
            "    return result;\n"
            "}\n"
            "inline STMessageArg message_arg_i32(int32_t value) noexcept {\n"
            "    STMessageArg result{};\n"
            "    result.i32 = value;\n"
            "    return result;\n"
            "}\n"
            "template <typename T>\n"
            "inline STMessageArg message_arg_pointer(T *value) noexcept {\n"
            "    STMessageArg result{};\n"
            "    result.ptr = const_cast<void *>(static_cast<const void *>(value));\n"
            "    return result;\n"
            "}\n"
            "// Ghidra p-code exposes CPUID result tuples through a synthetic\n"
            "// pointer-returning intrinsic.  The source port must provide it.\n"
            "int *pcode_cpuid_info(uint leaf);\n"
            "// Exact per-instruction HighFunction call override exported from\n"
            "// Ghidra.  The physical vtable member can retain a shorter/base\n"
            "// declaration while this boundary exposes the proven call ABI.\n"
            "template <typename Target, typename Source>\n"
            "inline Target exact_indirect_callee(Source value) noexcept {\n"
            "    static_assert(std::is_pointer_v<Target>);\n"
            "    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source>);\n"
            "    if constexpr (std::is_pointer_v<Source>)\n"
            "        return reinterpret_cast<Target>(value);\n"
            "    else\n"
            "        return reinterpret_cast<Target>(static_cast<uintptr_t>(value));\n"
            "}\n"
            "// Exact direct-call result override for a physical declaration\n"
            "// whose shared return remains void.  The selected function type\n"
            "// comes from the address-local machine callsite marker.\n"
            "template <typename Target, typename Source>\n"
            "inline Target exact_call_result_callee(Source value) noexcept {\n"
            "    static_assert(std::is_pointer_v<Target>);\n"
            "    static_assert(std::is_pointer_v<Source>);\n"
            "    return reinterpret_cast<Target>(value);\n"
            "}\n"
            "}\n",
            encoding="utf-8",
        )

        source_files: list[Path] = []
        for relative, entries in sorted(groups.items(), key=lambda item: str(item[0])):
            target = root / relative
            target.parent.mkdir(parents=True, exist_ok=True)
            chunks = [
                '#include "st/generated.hpp"\n',
                f"// Generated translation unit: {relative_include(str(relative))}\n\n",
            ]
            for function, body, body_line_origin in sorted(
                entries, key=lambda item: item[0]["address"]
            ):
                address = function["address"].upper()
                # Decompiler line wrapping can leave indentation after a cast
                # whose operand starts on the following line.  Trailing space
                # has no storage or ABI meaning and makes the generated tree
                # fail repository hygiene checks, so normalize it only at the
                # final presentation boundary.
                clean_body = "\n".join(
                    line.rstrip() for line in body.rstrip().splitlines()
                )
                chunks.append(
                    f"// {address} {function['qualified_name']}\n"
                    f"#line {body_line_origin} "
                    f"\"decomp/ST.exe/functions/{address}/decomp.c\"\n"
                    f"{clean_body}\n\n"
                )
            target.write_text(
                "".join(chunks).rstrip() + "\n", encoding="utf-8"
            )
            source_files.append(relative)
        self.stats["translation_units"] = len(source_files)
        self.stats["body_functions"] = sum(len(items) for items in groups.values())
        self.stats["declared_globals"] = len(used_globals)
        self.stats["declared_imports"] = len(used_imports)

        (root / "CMakeLists.txt").write_text(
            self._emit_cmake(source_files), encoding="utf-8"
        )
        (root / "README.generated.md").write_text(
            self._emit_readme(), encoding="utf-8"
        )
        audit = root / "audit"
        audit.mkdir()
        ordered_issues = sorted(
            self.issues,
            key=lambda issue: (issue.kind, issue.address, issue.source_file, issue.detail),
        )
        (audit / "issues.jsonl").write_text(
            "".join(json.dumps(issue.as_json(), ensure_ascii=False, sort_keys=True) + "\n"
                    for issue in ordered_issues),
            encoding="utf-8",
        )
        issue_counts = Counter(issue.kind for issue in ordered_issues)
        summary = {
            "schema": "st-source-generation-summary",
            "schema_version": GENERATOR_VERSION,
            "input_manifest_sha256": self.receipt["current_manifest_sha256"],
            "program_semantic_sha256": self.receipt["program_semantic_sha256"],
            "generator_sha256": self.generator_sha256,
            "input_files": dict(sorted(self.input_hashes.items())),
            "statistics": dict(sorted(self.stats.items())),
            "issue_counts": dict(sorted(issue_counts.items())),
        }
        (audit / "summary.json").write_text(json_dump(summary), encoding="utf-8")
        readability_totals: Counter[str] = Counter()
        for metrics in self.readability_by_address.values():
            readability_totals.update(metrics)
        readability = {
            "schema": "st-source-readability",
            "schema_version": 3,
            "policy": "per-address-nonincreasing",
            "metric_kinds": sorted(READABILITY_METRIC_KINDS),
            "totals": dict(sorted(readability_totals.items())),
            "by_address": {
                address: dict(sorted(metrics.items()))
                for address, metrics in sorted(self.readability_by_address.items())
                if metrics
            },
        }
        (audit / "readability.json").write_text(
            json_dump(readability), encoding="utf-8"
        )

    @staticmethod
    def _readability_metrics(body: str) -> dict[str, int]:
        """Count source spellings whose growth is always a readability loss."""
        # Preserve every non-code span as whitespace.  Removing comments and
        # literals by concatenation can manufacture tokens across an exporter
        # marker boundary, e.g. the tail of one expression plus the beginning
        # of the call after ``ST_CALLSITE``.  A readability gate must inspect
        # spellings which actually exist in the generated source.
        code = code_mask(body)
        metrics = {
            "exact_indirect_callee": len(re.findall(
                r"\bst::exact_indirect_callee\s*<", code
            )),
            "raw_code_indirect_call": len(re.findall(
                r"\(\s*\*{1,2}\s*\(\s*code\s*\*+", code
            )),
            "raw_duplicated_vtable_call": len(
                RAW_DUPLICATED_VTABLE_CALL_RE.findall(code)
            ),
            "generic_pointer_tower": len(re.findall(
                r"\b(?:undefined(?:1|2|3|4|5|6|8)?|void|code)\s*\*{3,}"
                r"\s*[A-Za-z_][A-Za-z0-9_]*", code
            )),
            # Count declarations by token boundary rather than rendered line.
            # Ghidra is free to wrap a long parameter list before any one
            # parameter; a line-anchored expression made that harmless layout
            # change look like a newly introduced generic type.
            "generic_undefined_declaration": len(re.findall(
                r"\bundefined(?:1|2|3|4|5|6|8)?\s+\*{0,2}\s*"
                r"[A-Za-z_][A-Za-z0-9_]*\s*(?=[;=,\[\)])", code
            )),
            "unaff_or_extraout": len(set(re.findall(
                r"\b(?:unaff|extraout)_[A-Za-z0-9_]+\b", code
            ))),
            "undefined_static_cast": len(re.findall(
                r"\bstatic_cast\s*<\s*undefined", code
            )),
            "presentation_failure": len(re.findall(
                r"ST_PSEUDO\[[^]\r\n]*failure[^]\r\n]*\]", body
            )),
            "stale_address_member_call": len(
                STALE_ADDRESS_MEMBER_CALL_RE.findall(code)
            ),
            "dangling_qualified_address_prefix": len(
                QUALIFIED_ADDRESS_SYMBOL_RE.findall(code)
            ),
            "machine_word_nullptr": len(re.findall(
                r"\b(?:undefined4|int|uint|dword|long|ulong)\s+"
                r"[A-Za-z_][A-Za-z0-9_]*[^;\n]*(?:==|!=|=)\s*nullptr",
                code,
            )),
            "pointer_boundary_cast": len(re.findall(
                r"\bst::pointer_boundary_cast\s*<", code
            )) + len(re.findall(
                r"\bst::exact_call_result_callee\s*<", code
            )) + len(re.findall(
                r"\(\s*[A-Za-z_][A-Za-z0-9_:<> ]*\s*\*+\s*\)\s*"
                r"(?:st::fn_[0-9A-F]{8}|(?:[A-Za-z_][A-Za-z0-9_]*::)*"
                r"[A-Za-z_][A-Za-z0-9_]*)\s*\(",
                code,
            )),
            "raw_machine_field_projection": len(re.findall(
                r"\bSTField\s*<", code
            )),
            "raw_pointer_field_projection": len(re.findall(
                r"\*\s*\(\s*[A-Za-z_][A-Za-z0-9_:<> ]*\s*\*{1,}\s*\)"
                r"\s*&?\s*(?:\([^\n;]+\)\s*)?[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)field_(?:0x)?[0-9A-Fa-f]+)?",
                code,
            )),
            "opaque_decompiler_storage": len(
                OPAQUE_DECOMPILER_STORAGE_RE.findall(code)
            ),
        }
        return {kind: count for kind, count in metrics.items() if count}

    @classmethod
    def _readability_from_source_tree(
        cls, root: Path
    ) -> dict[str, dict[str, int]]:
        result: dict[str, dict[str, int]] = {}
        source = root / "source"
        if not source.is_dir():
            return result
        marker = re.compile(r"(?m)^// (?P<address>[0-9A-F]{8})\s+[^\n]*\n")
        for path in sorted(source.rglob("*.cpp")):
            text = path.read_text(encoding="utf-8")
            matches = list(marker.finditer(text))
            for index, match in enumerate(matches):
                end = matches[index + 1].start() if index + 1 < len(matches) else len(text)
                result[match.group("address")] = cls._readability_metrics(
                    text[match.end():end]
                )
        return result

    def _previous_source_readability_by_address(
        self,
    ) -> dict[str, dict[str, int]]:
        report = self.output / "audit" / "readability.json"
        if report.is_file():
            value = read_json(report)
            if (value.get("schema") == "st-source-readability" and
                    int(value.get("schema_version", 0)) == 3 and
                    set(value.get("metric_kinds") or ()) ==
                    READABILITY_METRIC_KINDS and
                    isinstance(value.get("by_address"), dict)):
                return {
                    str(address).upper(): {
                        str(kind): int(count)
                        for kind, count in metrics.items()
                        if int(count) > 0
                    }
                    for address, metrics in value["by_address"].items()
                    if isinstance(metrics, dict)
                }
        # First run, and the first run after adding any new metric, still has a
        # real previous tree.  Scan it under the current policy rather than
        # granting one unprotected baseline generation or treating a formerly
        # untracked metric as historical zero.
        return self._readability_from_source_tree(self.output)

    def _require_nonincreasing_source_readability(self) -> None:
        previous_generic = sum(
            int(metrics.get("generic_undefined_declaration", 0))
            for metrics in self.previous_readability_by_address.values()
        )
        current_generic = sum(
            int(metrics.get("generic_undefined_declaration", 0))
            for metrics in self.readability_by_address.values()
        )
        callable_cast_demand: dict[str, int] = {}
        for address, current in self.readability_by_address.items():
            previous = self.previous_readability_by_address.get(address)
            if previous is None:
                continue
            increase = max(
                0,
                int(current.get("pointer_boundary_cast", 0)) -
                int(previous.get("pointer_boundary_cast", 0)),
            )
            if increase and increase <= self.neutral_callable_boundary_casts[address]:
                callable_cast_demand[address] = increase
        # A callee-side generic pointer which is machine-proven callable can be
        # rendered as neutral ``code *``.  That necessarily moves one explicit
        # boundary into callers which still transport the value as generic data.
        # Accept the trade only as one closed corpus-wide exchange: every new
        # cast must be an exact direct-call argument into such a parameter, and
        # the aggregate cast increase may not exceed the aggregate reduction in
        # generic declarations.  Unrelated casts cannot spend this budget.
        callable_cast_budget = max(0, previous_generic - current_generic)
        callable_cast_exchange_valid = (
            sum(callable_cast_demand.values()) <= callable_cast_budget
        )
        regressions: list[str] = []
        for address, current in sorted(self.readability_by_address.items()):
            previous = self.previous_readability_by_address.get(address)
            if previous is None:
                continue
            for kind in sorted(set(previous) | set(current)):
                before = int(previous.get(kind, 0))
                after = int(current.get(kind, 0))
                # STField is an exact compile-time projection used while a
                # scalar/pointer lifetime is still unresolved.  Its presence is
                # useful debt accounting, but it can legitimately increase when
                # an unbuildable raw dereference becomes expressible.  Use its
                # reduction as a local budget for a new explicit pointer
                # boundary, without treating the projection itself as a hard
                # readability regression.
                if kind == "raw_machine_field_projection":
                    continue
                if kind == "raw_pointer_field_projection":
                    continue
                allowed_after = before
                if kind == "pointer_boundary_cast":
                    # One explicit boundary cast may replace one invalid stale
                    # member call in the same function.  This makes the exact
                    # __thiscall receiver visible without allowing unrelated
                    # casts or cross-function compensation.
                    allowed_after += max(
                        0,
                        int(previous.get("stale_address_member_call", 0)) -
                        int(current.get("stale_address_member_call", 0)),
                    )
                    allowed_after += max(
                        0,
                        int(previous.get("raw_duplicated_vtable_call", 0)) -
                        int(current.get("raw_duplicated_vtable_call", 0)),
                    )
                    allowed_after += max(
                        0,
                        int(previous.get("raw_machine_field_projection", 0)) -
                        int(current.get("raw_machine_field_projection", 0)),
                    )
                    allowed_after += max(
                        0,
                        int(previous.get("raw_pointer_field_projection", 0)) -
                        int(current.get("raw_pointer_field_projection", 0)),
                    )
                    allowed_after += self.exact_call_result_boundary_casts.get(
                        address, 0
                    )
                    allowed_after += self.exact_address_storage_boundary_casts.get(
                        address, 0
                    )
                    allowed_after += self.exact_existing_pointer_view_casts.get(
                        address, 0
                    )
                    allowed_after += self.promoted_slot_boundary_casts.get(
                        address, 0
                    )
                    if callable_cast_exchange_valid:
                        allowed_after += callable_cast_demand.get(address, 0)
                if after > allowed_after:
                    regressions.append(
                        f"{address}:{kind} {before}->{after}"
                    )
        if regressions:
            sample = ", ".join(regressions[:20])
            remainder = len(regressions) - min(len(regressions), 20)
            if remainder:
                sample += f", ... (+{remainder})"
            raise GenerationError(
                "source readability regression; existing functions use a "
                f"per-address nonincreasing policy: {sample}"
            )

    def _source_group(self, function: Mapping[str, Any]) -> Path:
        comments = " ".join(str(item) for item in function.get("comments", ()))
        match = SOURCE_FILE_RE.search(comments)
        if match:
            raw = match.group(0).strip()
            windows = PureWindowsPath(raw)
            parts = [part for part in windows.parts if part not in {windows.anchor, "__titans"}]
            safe_parts = [safe_identifier(part.rsplit(".", 1)[0], "path") for part in parts[:-1]]
            filename = parts[-1] if parts else f"{function['address']}.cpp"
            stem = safe_identifier(Path(filename).stem, "source")
            self.stats["functions_with_recovered_source"] += 1
            return Path("source", "original", *safe_parts, stem + ".cpp")
        namespace = str(function.get("namespace") or "Global")
        self.stats["functions_without_recovered_source"] += 1
        if namespace == "Global":
            return Path("source", "recovered", "by_address", function["address"][:4] + ".cpp")
        owner = safe_identifier(namespace.replace("::", "__"), "owner")
        return Path("source", "recovered", "by_owner", owner + ".cpp")

    @staticmethod
    def _own_definition_pattern(function: Mapping[str, Any]) -> re.Pattern[str]:
        candidates = [
            str(function["qualified_name"]),
            safe_identifier(str(function["qualified_name"]), "function"),
            str(function["name"]),
            safe_identifier(str(function["name"]), "function"),
        ]
        spellings = list(dict.fromkeys(candidates))
        return re.compile(
            r"(?<![A-Za-z0-9_])(?:"
            + "|".join(re.escape(item) for item in spellings)
            + r")(?=\s*\()"
        )

    def _preload_body_declarations(self) -> None:
        """Read every body declaration before transforming cross-function calls.

        Per-function cached C is the declaration ultimately compiled by the
        generated tree.  Resolving it up front prevents function-address order
        from making an older functions.json prototype override that body.
        """
        for function in self.functions:
            if not function.get("body_exported"):
                continue
            address = str(function["address"]).upper()
            path = self.corpus / "functions" / address / "decomp.c"
            if not path.is_file():
                raise GenerationError(f"missing exported body {path}")
            body = re.sub(
                r"^#include[^\n]*\n+", "", path.read_text(encoding="utf-8"), count=1
            )
            body = self._rewrite_neutral_callable_parameter_declarations(
                address, function, body
            )
            pattern = self._own_definition_pattern(function)
            replaced = False

            def replace(piece: str) -> str:
                nonlocal replaced
                if replaced:
                    return piece
                result, count = pattern.subn(function_symbol(address), piece, count=1)
                replaced = count == 1
                return result

            rewritten = code_only(transform_code(body, replace))
            if not replaced:
                raise GenerationError(
                    f"could not preload definition for {address} "
                    f"{function['qualified_name']!r}"
                )
            self.body_declarations[address] = self._body_declaration(address, rewritten)

    @staticmethod
    def _generic_callable_storage_type(display: str) -> bool:
        compact = re.sub(r"\s+", "", display)
        return compact in {
            "void*", "code*", "byte*", "uchar*", "undefined*",
            "undefined1*", "undefined2*", "undefined3*", "undefined4*",
            "undefined5*", "undefined6*", "undefined8*",
        }

    def _preload_neutral_callable_parameter_roles(self) -> None:
        """Recover a source-level callable role without inventing its ABI.

        A generic data pointer which is the exact operand of a machine-marked
        indirect CALL is at least executable storage.  When target ABI
        consensus is insufficient for a Ghidra FunctionDefinition, retaining
        ``undefined *`` in the generated declaration creates data/function
        pointer casts at every caller.  ``code *`` records only the proven role;
        it deliberately remains variadic and does not claim an argument or
        return type.
        """
        for function in self.functions:
            if not function.get("body_exported"):
                continue
            address = str(function["address"]).upper()
            path = self.corpus / "functions" / address / "decomp.c"
            body = path.read_text(encoding="utf-8")
            masked = code_mask(body)
            markers = [
                (match.start(), match.end())
                for match in EXACT_CALLSITE_MARKER_RE.finditer(body)
            ]
            if not markers:
                continue
            for ordinal, parameter in enumerate(function.get("parameters", ())):
                name = str(parameter.get("name") or "")
                if (not IDENTIFIER_RE.fullmatch(name) or
                        not self._generic_callable_storage_type(
                            str(parameter.get("type") or ""))):
                    continue
                call = re.compile(
                    r"\(\s*\*\s*\(\s*code\s*\*\s*\)\s*" +
                    re.escape(name) + r"\s*\)\s*\("
                )
                for use in call.finditer(masked):
                    marker = next((item for item in reversed(markers)
                        if item[1] <= use.start() and
                        use.start() - item[1] <= 4096 and
                        ";" not in masked[item[1]:use.start()]), None)
                    if marker is None:
                        continue
                    self.neutral_callable_parameters[address].add(ordinal)
                    break

        # A callable callee-side role is useful at a source boundary only when
        # every exact direct caller already supplies executable storage (or
        # null).  Otherwise changing the declaration merely moves an unresolved
        # data/function collision into every caller as a new cast.  Validate the
        # full address-authoritative direct-call set before propagating thunks.
        for address, roles in list(self.neutral_callable_parameters.items()):
            function = self.function_by_address.get(address)
            if function is None:
                del self.neutral_callable_parameters[address]
                continue
            retained = {
                ordinal for ordinal in roles
                if self._neutral_callable_role_has_compatible_callers(
                    address, ordinal
                )
            }
            if retained:
                self.neutral_callable_parameters[address] = retained
            else:
                del self.neutral_callable_parameters[address]

        # Thunks preserve the exact argument word at the same ordinal.  Carry
        # only the neutral callable role through that address-stable chain; a
        # concrete FunctionDefinition still comes exclusively from the Ghidra
        # analyzer/applier pair.
        changed = True
        while changed:
            changed = False
            for function in self.functions:
                if not function.get("thunk"):
                    continue
                address = str(function["address"]).upper()
                target, _ = split_address_label(str(function.get("thunk_target") or ""))
                roles = self.neutral_callable_parameters.get(target)
                if not roles:
                    continue
                parameters = tuple(function.get("parameters", ()))
                for ordinal in roles:
                    if (ordinal >= len(parameters) or
                            not self._generic_callable_storage_type(
                                str(parameters[ordinal].get("type") or ""))):
                        continue
                    if ordinal not in self.neutral_callable_parameters[address]:
                        self.neutral_callable_parameters[address].add(ordinal)
                        changed = True
        self.stats["neutral_callable_parameter_roles"] = sum(
            len(items) for items in self.neutral_callable_parameters.values()
        )

    def _neutral_callable_role_has_compatible_callers(
        self, target_address: str, ordinal: int
    ) -> bool:
        relations = [
            relation for relation in self.call_relations
            if split_address_label(str(
                relation.get("resolved_target") or relation.get("direct") or ""
            ))[0] == target_address
        ]
        if not relations:
            return False
        body_cache: dict[str, tuple[str, str, Mapping[str, str]]] = {}
        for relation in relations:
            caller_address, _ = split_address_label(str(relation.get("caller") or ""))
            caller = self.function_by_address.get(caller_address)
            if caller is None or not caller.get("body_exported"):
                return False
            cached = body_cache.get(caller_address)
            if cached is None:
                path = self.corpus / "functions" / caller_address / "decomp.c"
                body = path.read_text(encoding="utf-8")
                cached = (body, code_mask(body), self._declared_types(caller, body))
                body_cache[caller_address] = cached
            body, masked, declared = cached
            site = str(relation.get("call_site") or "").split(" ", 1)[0].upper()
            marker = re.search(
                rf"ST_CALLSITE\[{re.escape(site)}\]", body
            )
            if marker is None:
                return False
            open_paren = masked.find("(", marker.end())
            semicolon = masked.find(";", marker.end())
            if open_paren < 0 or (semicolon >= 0 and open_paren > semicolon):
                return False
            parsed = call_argument_spans(masked, open_paren, body)
            if parsed is None:
                return False
            spans, _ = parsed
            if ordinal >= len(spans):
                return False
            start, end = spans[ordinal]
            expression = body[start:end].strip()
            if expression in {"0", "nullptr"}:
                continue
            if re.match(r"^\(\s*code\s*\*\s*\)", expression):
                continue
            if re.fullmatch(
                r"&?(?:(?:[A-Za-z_][A-Za-z0-9_]*)::)*"
                r"(?:thunk_)?FUN_[0-9A-Fa-f]{8}", expression
            ):
                continue
            name = re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", expression)
            if name is None or not self._generic_callable_storage_type(
                    declared.get(name.group(0), "")):
                return False
        return True

    def _rewrite_neutral_callable_parameter_declarations(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        roles = self.neutral_callable_parameters.get(address.upper())
        if not roles:
            return body
        opening = code_mask(body).find("{")
        head_end = len(body) if opening < 0 else opening
        head = body[:head_end]
        for ordinal in sorted(roles):
            parameters = tuple(function.get("parameters", ()))
            if ordinal >= len(parameters):
                continue
            name = str(parameters[ordinal].get("name") or "")
            if not IDENTIFIER_RE.fullmatch(name):
                continue
            pattern = re.compile(
                r"\b(?:void|code|byte|uchar|undefined(?:1|2|3|4|5|6|8)?)"
                r"\s*\*\s*" + re.escape(name) + r"\b"
            )
            head, _ = pattern.subn(f"code *{name}", head, count=1)
        return head + body[head_end:]

    def _preload_exact_indirect_member_wrappers(self) -> None:
        """Register every exact owner/physical-slot wrapper before body rewriting.

        Function address order must not decide whether a duplicated-receiver call is
        readable.  This pass consumes only exported per-call override ABIs and the
        current concrete receiver declaration; later calls may reuse the result only
        through the conflict-aware owner/slot lookup.
        """
        bodies: list[tuple[str, Mapping[str, Any], str]] = []
        for function in self.functions:
            if not function.get("body_exported"):
                continue
            address = str(function["address"]).upper()
            path = self.corpus / "functions" / address / "decomp.c"
            if not path.is_file():
                raise GenerationError(f"missing exported body {path}")
            bodies.append((address, function, path.read_text(encoding="utf-8")))
        # Strong per-instruction and physical-table ABIs always register first.
        # Machine-word source fallbacks may then reuse them, but can never win
        # merely because their function sorted earlier by address.
        for address, function, body in bodies:
            self._repair_exact_indirect_calls(
                address, function, body, register_only=True
            )
        for address, function, body in bodies:
            self._repair_exact_indirect_calls(
                address, function, body, register_only=True,
                register_machine_fallback=True,
            )

    def _transform_body(self, function: Mapping[str, Any], body: str) -> str:
        body = re.sub(r"^#include[^\n]*\n+", "", body, count=1)
        body = self._rewrite_neutral_callable_parameter_declarations(
            str(function["address"]).upper(), function, body
        )
        body = self._rewrite_referenced_string_literals(function, body)
        body = self._rewrite_referenced_invalid_globals(function, body)
        local_labels = set(LOCAL_LABEL_RE.findall(code_only(body)))
        address = str(function["address"]).upper()
        own_pattern = self._own_definition_pattern(function)
        definition_rewritten = False
        replacements: dict[str, set[str]] = defaultdict(set)
        for callee in function.get("callees", ()):
            callee_address, label = split_address_label(str(callee))
            target = self.function_by_address.get(callee_address)
            if target is None:
                if callee_address.startswith("EXTERNAL:") and label:
                    parts = label.split("::")
                    for index in range(len(parts)):
                        replacements["::".join(parts[index:])].add(callee_address)
                continue
            qualified = str(target["qualified_name"])
            name = str(target["name"])
            replacements[qualified].add(callee_address)
            terminal_owner = qualified.rsplit("::", 1)[0].rsplit("::", 1)[-1] if "::" in qualified else ""
            if name != terminal_owner:
                replacements[name].add(callee_address)
            if label:
                replacements[label].add(callee_address)

        resolved: dict[str, str] = {}
        ambiguous: dict[str, set[str]] = {}
        for spelling, addresses in replacements.items():
            if len(addresses) == 1:
                resolved[spelling] = address_symbol(next(iter(addresses)))
            else:
                ambiguous[spelling] = addresses

        ordered = sorted(resolved, key=len, reverse=True)
        call_pattern = (
            re.compile(
                # A bare callee spelling proves a direct call only when it is
                # not the leaf of ``object->method``, ``object.method`` or a
                # longer qualified name.  One function may directly call
                # ``PanelTy::GetMessage`` and independently dispatch another
                # receiver's virtual ``GetMessage``; rewriting both leaves to
                # the direct target corrupts the latter receiver and ABI.
                r"(?<![A-Za-z0-9_.>:])(?:"
                + "|".join(re.escape(item) for item in ordered)
                + r")(?=\s*\()"
            )
            if ordered else None
        )

        global_rewrites: dict[str, str] = {}
        for item in function.get("referenced_globals", ()):
            match = re.match(r"^[^ ]+ (.+?)(?: =|$)", str(item))
            if not match:
                continue
            name = match.group(1)
            replacement = self.global_type_collisions.get(name)
            if replacement:
                global_rewrites[name] = replacement
        exref_rewrites = exact_exref_global_rewrites(
            function.get("referenced_globals", ())
        )
        def replace(piece: str) -> str:
            nonlocal definition_rewritten
            result = piece
            if exref_rewrites:
                result, count = rewrite_exact_identifiers(result, exref_rewrites)
                self.stats["exact_exref_global_rewrites"] += count
            if global_rewrites:
                result, count = rewrite_address_taken_globals(
                    result, global_rewrites
                )
                self.stats["global_type_collision_rewrites"] += count
            address_global_rewrites = 0
            def replace_address_coded_global(match: re.Match[str]) -> str:
                nonlocal address_global_rewrites
                address = match.group("address").upper()
                item = self.global_by_address.get(address)
                if item is None and address in self.string_by_address:
                    address_global_rewrites += 1
                    return "st_string_" + address
                if item is None:
                    return match.group(0)
                token = match.group("name")
                alias = global_alias_for_token(token, address, item)
                if alias is None:
                    return match.group(0)
                self.global_alias_records[alias] = item
                address_global_rewrites += 1
                return alias
            result = ADDRESS_CODED_GLOBAL_RE.sub(
                replace_address_coded_global, result
            )
            self.stats["address_coded_global_rewrites"] += address_global_rewrites
            opaque_image_rewrites = 0
            def replace_opaque_image_token(match: re.Match[str]) -> str:
                nonlocal opaque_image_rewrites
                address = int(match.group("address"), 16)
                if not (self.image_address_min <= address <= self.image_address_max):
                    return match.group(0)
                opaque_image_rewrites += 1
                return "st_image_" + match.group("address").upper()
            result = OPAQUE_IMAGE_TOKEN_RE.sub(
                replace_opaque_image_token, result
            )
            self.stats["opaque_image_token_rewrites"] += opaque_image_rewrites
            external_label_rewrites = 0
            def replace_external_label(match: re.Match[str]) -> str:
                nonlocal external_label_rewrites
                label = match.group(1)
                if label in local_labels:
                    return match.group(0)
                external_label_rewrites += 1
                return "&st_image_" + match.group(2).upper()
            result = ADDRESS_TAKEN_LABEL_RE.sub(replace_external_label, result)
            self.stats["external_label_address_rewrites"] += external_label_rewrites
            if not definition_rewritten:
                result, count = own_pattern.subn(
                    function_symbol(address), result, count=1
                )
                if count:
                    definition_rewritten = True
                    self.stats["function_definition_rewrites"] += 1
            if call_pattern is not None:
                result, count = call_pattern.subn(
                    lambda match: resolved[match.group(0)], result
                )
                self.stats["direct_call_or_definition_rewrites"] += count
            address_coded_rewrites = 0
            def replace_address_coded_function(match: re.Match[str]) -> str:
                nonlocal address_coded_rewrites
                spelling = re.sub(r"\s+", "", match.group(0))
                addresses = self.callable_addresses_by_spelling.get(spelling, set())
                # A recovered owner can make the rendered qualifier stale while
                # a thunk wrapper retains the target's FUN_ADDRESS leaf.  The
                # encoded entry address is authoritative even when that owner or
                # the optional `thunk_` prefix differs from the current symbol.
                encoded = re.search(r"([0-9A-Fa-f]{8})$", spelling)
                if encoded is not None:
                    exact = encoded.group(1).upper()
                    if exact in self.function_by_address:
                        addresses = {exact}
                if len(addresses) != 1:
                    return match.group(0)
                address_coded_rewrites += 1
                return function_symbol(next(iter(addresses)))
            result = ADDRESS_CODED_FUNCTION_RE.sub(
                replace_address_coded_function, result
            )
            self.stats["address_coded_function_rewrites"] += address_coded_rewrites
            return result

        transformed = transform_code(body, replace)
        transformed, arity_resolved, unresolved = self._rewrite_ambiguous_calls(
            transformed, ambiguous, address=address
        )
        self.stats["arity_resolved_direct_calls"] += arity_resolved
        for spelling, addresses in unresolved.items():
            self.issues.append(Issue(
                "ambiguous_direct_call",
                f"{spelling}: {', '.join(sorted(addresses))}",
                address,
            ))
            self.stats["ambiguous_direct_calls"] += 1
        # A direct-call spelling can be line-wrapped immediately after its
        # recovered owner.  The first replacement pass may then see only the
        # leaf and produce the mechanically impossible `Owner::st::fn_ADDRESS`.
        # Once the address-stable symbol exists, the preceding qualifier is
        # stale by definition: generated implementations live in namespace st.
        transformed, count = QUALIFIED_ADDRESS_SYMBOL_RE.subn(
            lambda match: match.group(1), transformed
        )
        self.stats["qualified_address_symbol_repairs"] += count
        transformed, count = QUALIFIED_GENERATED_GLOBAL_RE.subn(
            lambda match: match.group(1), transformed
        )
        self.stats["qualified_generated_global_repairs"] += count
        transformed = self._repair_split_qualified_address_symbols(
            address, transformed
        )
        transformed = self._repair_callable_symbol_values(address, transformed)
        transformed = self._repair_pcode_intrinsics(address, transformed)
        transformed = self._repair_stale_address_member_calls(
            address, function, transformed
        )
        transformed = self._materialize_callable_local_families(
            address, function, transformed
        )
        transformed = self._materialize_tagged_lifetimes(address, transformed)
        transformed = self._refine_exact_auto_output_storage(
            address, function, transformed
        )
        transformed = self._materialize_exact_output_lifetimes(
            address, function, transformed
        )
        transformed = self._materialize_machine_word_output_lifetimes(
            address, function, transformed
        )
        transformed = self._materialize_promoted_parameter_slots(
            address, function, transformed
        )
        transformed = self._materialize_unscoped_synthetic_words(
            address, function, transformed
        )
        transformed = self._materialize_raw_stack_arena(
            address, function, transformed
        )
        transformed = self._repair_raw_global_pointer_uses(
            address, function, transformed
        )
        transformed = self._repair_exact_field_names(address, function, transformed)
        transformed = self._repair_missing_field_addresses(
            address, function, transformed
        )
        transformed = self._repair_exact_indirect_calls(
            address, function, transformed
        )
        transformed = self._repair_physical_member_call_boundaries(
            address, function, transformed
        )
        transformed = self._repair_commuted_byte_subscripts(
            address, function, transformed
        )
        transformed = self._repair_grid_index_boundaries(
            address, function, transformed
        )
        transformed = self._repair_message_arg_facets(
            address, function, transformed
        )
        transformed = self._repair_message_arg_pointer_views(
            address, function, transformed
        )
        transformed = self._repair_pointer_float_storage_views(
            address, function, transformed
        )
        transformed = self._repair_cancelled_unary_negation(
            address, transformed
        )
        transformed = self._repair_exact_storage_casts(
            address, function, transformed
        )
        transformed = self._materialize_opaque_decompiler_storage(
            address, function, transformed
        )
        transformed = self._repair_scalarized_word_arrays(
            address, function, transformed
        )
        transformed = self._repair_scalarized_record_indices(
            address, function, transformed
        )
        transformed = self._repair_exact_machine_lifetime_call_views(
            address, function, transformed
        )
        transformed = self._repair_exact_pointer_boundaries(
            address, function, transformed
        )
        transformed = self._repair_void_call_assignments(
            address, function, transformed
        )
        transformed = self._repair_exact_return_boundaries(
            address, function, transformed
        )
        transformed = self._repair_exact_storage_comparisons(
            address, function, transformed
        )
        transformed = self._repair_machine_word_null_literals(
            address, function, transformed
        )
        self._reject_degraded_duplicated_receiver_calls(address, transformed)
        self._reject_broken_piece_template_splice(address, transformed)
        if not definition_rewritten:
            self.issues.append(Issue(
                "definition_not_rewritten",
                f"could not find {function['qualified_name']!r} in exported definition",
                address,
            ))
        return transformed

    def _repair_split_qualified_address_symbols(
        self, address: str, body: str
    ) -> str:
        """Remove a stale qualifier split from ``st::fn_ADDRESS`` by a comment.

        The exporter places an exact ``ST_CALLSITE`` comment immediately before
        a direct callee.  If Ghidra line-wrapped a recovered qualified name
        between namespace components, the ordinary token rewrite sees the leaf
        and can leave ``Owner:: /* comment */ st::fn_ADDRESS`` behind.  Masking
        comments exposes that impossible C++ token sequence.  Blank only the
        qualifier tokens at their exact offsets so the evidence comment and
        line geometry remain intact.
        """
        masked = code_mask(body)
        characters = list(body)
        repairs = 0
        for match in QUALIFIED_ADDRESS_SYMBOL_RE.finditer(masked):
            prefix_start = match.start()
            prefix_end = match.start(1)
            changed = False
            for token in re.finditer(
                    r"[A-Za-z_][A-Za-z0-9_]*|::",
                    masked[prefix_start:prefix_end]):
                start = prefix_start + token.start()
                end = prefix_start + token.end()
                for index in range(start, end):
                    characters[index] = " "
                changed = True
            if changed:
                repairs += 1
        if repairs:
            self.issues.append(Issue(
                "split_qualified_address_symbol_repair",
                f"removed {repairs} stale qualifier prefix(es) across exact callsite comments",
                address,
            ))
            self.stats["split_qualified_address_symbol_repairs"] += repairs
        return "".join(characters)

    def _rewrite_referenced_string_literals(
        self, function: Mapping[str, Any], body: str
    ) -> str:
        """Replace one malformed Ghidra string symbol by its exact image bytes.

        Symbol names derived from strings may contain ``<``, ``>``, brackets,
        or backslashes.  Ghidra prints those bytes inside the identifier and C++
        consequently parses operators plus several undeclared names.  The
        function's exported reference list supplies the exact address and the
        central string index supplies the already escaped literal.  No name or
        text search participates in the decision.
        """
        addresses: set[str] = set()
        for item in function.get("referenced_strings", ()):
            match = re.match(r"^([0-9A-Fa-f]{8})\b", str(item))
            if match and match.group(1).upper() in self.string_by_address:
                addresses.add(match.group(1).upper())
        if not addresses:
            return body

        replacements = 0
        def replace(piece: str) -> str:
            nonlocal replacements
            result = piece
            for address in sorted(addresses):
                literal = str(self.string_by_address[address].get("value") or "")
                if not (literal.startswith('"') and literal.endswith('"')):
                    continue
                pattern = re.compile(
                    r"(?<![A-Za-z0-9_])s_[^\s(),;=&|+*]*_" +
                    re.escape(address) + r"(?![A-Za-z0-9_])",
                    re.IGNORECASE,
                )
                result, count = pattern.subn(
                    lambda _match, value=literal: value, result
                )
                replacements += count
            return result

        rewritten = transform_code(body, replace)
        self.stats["referenced_string_literal_rewrites"] += replacements
        return rewritten

    def _rewrite_referenced_invalid_globals(
        self, function: Mapping[str, Any], body: str
    ) -> str:
        """Give an invalid rendered data label one exact address-stable alias."""
        candidates: dict[str, dict[str, Any]] = {}
        for reference in function.get("referenced_globals", ()):
            match = re.match(r"^([0-9A-Fa-f]{8})\b", str(reference))
            if not match:
                continue
            address = match.group(1).upper()
            item = self.global_by_address.get(address)
            if item is None or IDENTIFIER_RE.fullmatch(str(item.get("name") or "")):
                continue
            candidates[address] = item
        if not candidates:
            return body

        replacements = 0
        def replace(piece: str) -> str:
            nonlocal replacements
            result = piece
            for address, item in sorted(candidates.items()):
                pattern = re.compile(
                    r"(?<![A-Za-z0-9_])[A-Za-z_][^\s(),;=&|+*]*_" +
                    re.escape(address) + r"(?![A-Za-z0-9_])",
                    re.IGNORECASE,
                )
                alias = "st_global_" + address
                result, count = pattern.subn(alias, result)
                if count:
                    self.global_alias_records[alias] = item
                    replacements += count
            return result

        rewritten = transform_code(body, replace)
        self.stats["invalid_global_label_rewrites"] += replacements
        return rewritten

    def _repair_stale_address_member_calls(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Restore the explicit receiver of an address-stable free ABI call.

        Address-authoritative direct-call rewriting can replace a recovered
        method leaf while retaining Ghidra's member-call receiver.  Generated
        implementations deliberately live as free ``st::fn_ADDRESS`` symbols,
        so ``receiver->st::fn_ADDRESS(args)`` is invalid and obscures the real
        x86 ABI.  Move the exact receiver into argument zero only for an
        exported ``__thiscall`` target whose full fixed arity agrees.
        """
        masked = code_mask(body)
        declared_types = self._declared_types(function, body)
        edits: list[tuple[int, int, str, str]] = []
        for match in STALE_ADDRESS_MEMBER_CALL_RE.finditer(masked):
            target = self.function_by_address.get(match.group("address"))
            if target is None or target.get("calling_convention") != "__thiscall":
                continue
            parameter_types, variadic = self._function_parameter_spec(target)
            if not parameter_types:
                continue
            opening = masked.rfind("(", match.start(), match.end())
            parsed = call_argument_spans(masked, opening, body)
            if parsed is None:
                continue
            spans, closing = parsed
            if ((not variadic and len(spans) + 1 != len(parameter_types)) or
                    (variadic and len(spans) + 1 < len(parameter_types))):
                continue
            receiver = body[match.start("receiver"):match.end("receiver")]
            receiver_expression = receiver
            source = self._boundary_expression(receiver, declared_types)
            if source is not None:
                converted = self._exact_receiver_transport_replacement(
                    parameter_types[0], source, receiver
                )
                if converted is not None:
                    receiver_expression = converted[0]
            arguments = [receiver_expression]
            arguments.extend(body[start:end] for start, end in spans)
            replacement = (
                body[match.start("callee"):match.end("callee")] +
                "(" + ",".join(arguments) + ")"
            )
            edits.append((
                match.start(), closing + 1, replacement,
                f"{receiver}->{match.group('callee')} -> explicit this argument",
            ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "stale_address_member_call_repair", detail, address
            ))
        self.stats["stale_address_member_call_repairs"] += len(edits)
        return body

    def _repair_machine_word_null_literals(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Spell a null literal as integer zero at an exact scalar boundary.

        Ghidra's C printer can retain ``(T *)0`` presentation after the High
        variable has converged to a 32-bit transport scalar.  The exporter then
        normalizes the literal to ``nullptr``, which is intentionally not
        implicitly convertible to C++ integers.  Replace only the literal next
        to a datatype-graph-proven machine word (or an exporter fallback
        ``_DAT_ADDRESS`` word); real pointer comparisons remain untouched.
        """
        assert self.type_emitter is not None
        declared_types = self._declared_types(function, body)

        def is_word(expression: str) -> bool:
            compact = expression.strip()
            display = self._simple_expression_display(compact, declared_types)
            if display and self.type_emitter.display_machine_word_scalar(display):
                return True
            # Overlapping symbols prefixed `_DAT_` are absent from the central
            # global index and emitted as the generator's exact generic word
            # fallback.  PTR/image-address spellings are deliberately excluded.
            return re.fullmatch(r"_DAT_[0-9A-Fa-f]{8}", compact) is not None

        expression = (
            r"[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*"
        )
        patterns = (
            re.compile(
                rf"(?P<expr>{expression})\s*(?:==|!=)\s*(?P<null>nullptr)"
            ),
            re.compile(
                rf"(?P<null>nullptr)\s*(?:==|!=)\s*(?P<expr>{expression})"
            ),
            re.compile(
                rf"(?<![A-Za-z0-9_])(?P<expr>{expression})\s*=(?!=)\s*"
                rf"(?P<null>nullptr)\s*;"
            ),
        )
        masked = code_mask(body)
        edits: list[tuple[int, int, str, str]] = []
        claimed: set[tuple[int, int]] = set()
        for pattern in patterns:
            for match in pattern.finditer(masked):
                span = match.span("null")
                if span in claimed:
                    continue
                value = body[match.start("expr"):match.end("expr")]
                if not is_word(value):
                    continue
                edits.append((span[0], span[1], "0", value.strip()))
                claimed.add(span)
        for start, end, replacement, value in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "machine_word_null_literal", f"{value}: nullptr -> integer zero",
                address,
            ))
        self.stats["machine_word_null_literal_repairs"] += len(edits)
        return body

    @staticmethod
    def _reject_degraded_duplicated_receiver_calls(
        address: str, body: str
    ) -> None:
        """Never replace an exact member call with duplicated-receiver ABI noise."""
        match = DEGRADED_DUPLICATED_RECEIVER_CALL_RE.search(code_only(body))
        if match is None:
            return
        raise GenerationError(
            f"{address}: exact indirect declaration degraded an unadjusted "
            f"duplicated receiver {match.group('receiver')!r}; generate a "
            "non-virtual member wrapper instead"
        )

    @staticmethod
    def _reject_broken_piece_template_splice(address: str, body: str) -> None:
        """Reject a comparison rewrite accidentally inserted into template syntax."""
        if BROKEN_PIECE_TEMPLATE_SPLICE_RE.search(code_only(body)) is None:
            return
        raise GenerationError(
            f"{address}: storage-boundary rewrite split an STPiece template "
            "from its argument"
        )

    @staticmethod
    def _signature_result_type(function: Mapping[str, Any]) -> str | None:
        signature = re.sub(
            r"\s+", " ", str(function.get("signature") or "")
        ).strip()
        signature = re.sub(r"^noreturn\s+", "", signature)
        match = re.match(
            r"^(?P<result>.+?)\s+(?:__(?:thiscall|stdcall|cdecl|fastcall)\s+)?"
            r"(?:(?:[A-Za-z_][A-Za-z0-9_]*)::)*~?[A-Za-z_][A-Za-z0-9_@]*\s*\(",
            signature,
        )
        return match.group("result").strip() if match else None

    @staticmethod
    def _signature_parameter_types(signature: str) -> tuple[str, ...] | None:
        """Extract display types from one unambiguous exported signature."""
        parsed = SourceTreeGenerator._signature_parameter_spec(signature)
        return None if parsed is None else parsed[0]

    @staticmethod
    def _signature_parameter_spec(
        signature: str,
    ) -> tuple[tuple[str, ...], bool] | None:
        """Extract fixed parameter types and the variadic bit from a signature."""
        compact = re.sub(r"\s+", " ", signature).strip()
        name = re.search(r"~?[A-Za-z_][A-Za-z0-9_@]*\s*(?=\()", compact)
        if name is None:
            return None
        marker = "fn_00000000"
        rewritten = compact[:name.start()] + marker + compact[name.end():]
        declarations = TypeEmitter._body_parameters(rewritten, "00000000")
        if declarations is None:
            return None
        variadic = bool(declarations and declarations[-1].strip() == "...")
        if any(item.strip() == "..." for item in declarations[:-1]):
            return None
        result: list[str] = []
        for declaration in declarations[:-1] if variadic else declarations:
            named = TypeEmitter._declaration_name(declaration)
            if named is None:
                return None
            _, span = named
            type_text = (declaration[:span[0]] + declaration[span[1]:]).strip()
            if not type_text:
                return None
            result.append(re.sub(r"\s+", " ", type_text))
        return tuple(result), variadic

    def _function_parameter_spec(
        self, function: Mapping[str, Any]
    ) -> tuple[tuple[str, ...], bool]:
        address = str(function["address"]).upper()
        declaration = self.body_declarations.get(address)
        if declaration:
            parsed = self._signature_parameter_spec(declaration)
            if parsed is not None:
                parameters, variadic = parsed
                roles = self.neutral_callable_parameters.get(address, set())
                if roles:
                    parameters = tuple(
                        "code *" if index in roles else display
                        for index, display in enumerate(parameters)
                    )
                return parameters, variadic
        function = self._thunk_signature_owner(function)
        parameters, variadic = (
            tuple(str(item.get("type") or "") for item in function.get("parameters", ())),
            bool(function.get("varargs")),
        )
        roles = self.neutral_callable_parameters.get(address, set())
        if roles:
            parameters = tuple(
                "code *" if index in roles else display
                for index, display in enumerate(parameters)
            )
        return parameters, variadic

    def _thunk_signature_owner(
        self, function: Mapping[str, Any]
    ) -> Mapping[str, Any]:
        """Return the final metadata ABI owner of a transparent thunk.

        This intentionally does not consult the target's rendered body
        declaration: that declaration may contain address-local presentation
        types which are stronger than the physical thunk ABI.  The exported
        target metadata is the same layer used for the thunk declaration.
        """
        current = function
        seen: set[str] = set()
        while current.get("thunk"):
            address = str(current.get("address") or "").upper()
            if not address or address in seen:
                break
            seen.add(address)
            target_match = re.match(
                r"([0-9A-Fa-f]{8})\b",
                str(current.get("thunk_target") or ""),
            )
            if target_match is None:
                break
            target = self.function_by_address.get(target_match.group(1).upper())
            if target is None:
                break
            current = target
        return current

    def _declared_types(
        self, function: Mapping[str, Any], body: str
    ) -> dict[str, str]:
        result: dict[str, str] = {}
        for parameter in function.get("parameters", ()):
            name = str(parameter.get("name") or "")
            display = str(parameter.get("type") or "")
            if name and display:
                result[name] = display
        # Export presentation can refine a generic Listing word to an exact
        # pointer without mutating the Program ABI (for example a proven local
        # receiver boundary).  Use that body declaration only to type the same
        # named parameter while assembling C++; never replace a concrete scalar,
        # pointer, imported declaration, or parameter name from metadata.
        address = str(function.get("address") or "").upper()
        brace = body.find("{")
        body_parameters = None if not address or brace < 0 else \
            TypeEmitter._body_parameters(body[:brace], address)
        if body_parameters is not None:
            for item in body_parameters:
                named = TypeEmitter._declaration_name(item)
                if named is None:
                    continue
                name, span = named
                display = re.sub(
                    r"\s+", " ", (item[:span[0]] + item[span[1]:]).strip()
                )
                if (result.get(name) in {"undefined4", "undefined"} and
                        "*" in display):
                    result[name] = display
        masked = code_mask(body)
        declaration = re.compile(
            r"(?m)^[ \t]*(?:alignas\s*\([^\n)]*\)\s*)?"
            r"(?P<base>(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*)"
            r"[ \t]+(?P<stars>\*+)?[ \t]*(?P<name>[A-Za-z_][A-Za-z0-9_]*)"
            r"(?P<array>[ \t]*\[[^\]\n]+\])?[ \t]*(?:;|=)"
        )
        for match in declaration.finditer(masked):
            base = match.group("base")
            name = match.group("name")
            if base in DECLARATION_NON_TYPES or base == name:
                continue
            stars = match.group("stars") or ""
            candidate = base + (" " + stars if stars else "")
            # Line-wrapped arithmetic such as ``local_34 * local_34;``
            # is lexically indistinguishable from a declaration unless the
            # leading token is validated against the exported type graph.
            # Accept only actual source types; otherwise a scalar expression
            # can poison every later boundary decision in the function.
            if self.type_emitter is not None and \
                    self.type_emitter.display_type_expression(candidate) is None:
                continue
            # An array identifier decays to its element pointer at a call or
            # assignment boundary.  Pointer-to-array cases retain an explicit
            # '&' and are handled as address-storage evidence below.
            if match.group("array"):
                stars += "*"
            result[name] = base + (" " + stars if stars else "")
        # Exporter-owned lifetime splits deliberately use ``auto`` so they do
        # not restate an ABI parameter type.  When the initializer starts with
        # one exact ordinary pointer cast, C++ itself fixes that local's type;
        # retain the same fact for the datatype-graph walker.  Expressions,
        # arithmetic and non-pointer casts remain outside this small parser.
        auto_pointer = re.compile(
            r"(?m)^[ \t]*auto[ \t]+(?P<name>[A-Za-z_][A-Za-z0-9_]*)"
            r"[ \t]*=[ \t]*\([ \t]*"
            r"(?P<base>(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*)"
            r"[ \t]*(?P<stars>\*+)[ \t]*\)"
        )
        for match in auto_pointer.finditer(masked):
            result[match.group("name")] = (
                match.group("base") + " " + match.group("stars")
            )
        auto_cpp_pointer = re.compile(
            r"(?m)^[ \t]*auto[ \t]+(?P<name>[A-Za-z_][A-Za-z0-9_]*)"
            r"[ \t]*=[ \t]*(?:reinterpret|static)_cast[ \t]*<[ \t]*"
            r"(?P<base>(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*)"
            r"[ \t]*(?P<stars>\*+)[ \t]*>\s*\("
        )
        for match in auto_cpp_pointer.finditer(masked):
            result[match.group("name")] = (
                match.group("base") + " " + match.group("stars")
            )
        return result

    @staticmethod
    def _matching_delimiter(text: str, start: int, opening: str, closing: str) -> int | None:
        if start >= len(text) or text[start] != opening:
            return None
        depth = 0
        for index in range(start, len(text)):
            if text[index] == opening:
                depth += 1
            elif text[index] == closing:
                depth -= 1
                if depth == 0:
                    return index
        return None

    @staticmethod
    def _matching_open_delimiter(
        text: str, end: int, opening: str, closing: str
    ) -> int | None:
        if end < 0 or end >= len(text) or text[end] != closing:
            return None
        depth = 0
        for index in range(end, -1, -1):
            if text[index] == closing:
                depth += 1
            elif text[index] == opening:
                depth -= 1
                if depth == 0:
                    return index
        return None

    def _apply_display_postfix(
        self, display: str, suffix: str, allow_record_name_fallback: bool = False
    ) -> str | None:
        """Apply a simple C postfix chain to an already known display type."""
        assert self.type_emitter is not None
        index = 0
        while index < len(suffix):
            while index < len(suffix) and suffix[index].isspace():
                index += 1
            if index >= len(suffix):
                return display
            pointer_access = False
            if suffix.startswith("->", index):
                pointer_access = True
                index += 2
            elif suffix[index] == ".":
                index += 1
            elif suffix[index] == "[":
                closing = self._matching_delimiter(suffix, index, "[", "]")
                if closing is None:
                    return None
                display = self.type_emitter.display_element_type(display) or ""
                if not display:
                    return None
                index = closing + 1
                continue
            else:
                return None
            while index < len(suffix) and suffix[index].isspace():
                index += 1
            member = re.match(r"[A-Za-z_][A-Za-z0-9_]*", suffix[index:])
            if member is None:
                return None
            display = self.type_emitter.display_member_type(
                display, member.group(0), pointer_access,
                allow_record_name_fallback,
            ) or ""
            if not display:
                return None
            index += member.end()
        return display

    def _simple_expression_display(
        self, expression: str, declared_types: Mapping[str, str],
        allow_record_name_fallback: bool = False,
    ) -> str | None:
        """Type an exact identifier/deref/member/index expression.

        The parser deliberately has no arithmetic, implicit casts, or ownership
        guesses.  It only walks the already exported datatype graph, which makes
        it suitable for C-to-C++ boundary repair but not a substitute for Ghidra
        type recovery.
        """
        assert self.type_emitter is not None
        text = expression.strip()
        if not text:
            return None
        st_field = re.fullmatch(
            r"STField\s*<\s*(?P<type>[^>]+)\s*>\s*\(.+\)",
            text,
            re.DOTALL,
        )
        if st_field is not None:
            # STField is emitted only from an exact width/address projection;
            # its template argument is already the complete C++ lvalue type.
            return re.sub(r"\s+", " ", st_field.group("type")).strip()
        c_cast = re.match(
            r"^\(\s*(?P<type>(?:const\s+)?[A-Za-z_]"
            r"[A-Za-z0-9_:]*(?:\s*\*+)?)\s*\)",
            text,
        )
        if c_cast is not None and text[c_cast.end():].strip():
            # A C cast fixes the type of the complete following unary
            # expression.  We need not infer the operand to walk a surrounding
            # member chain such as ``((in_addr *)&storage)->S_un``; the cast is
            # already an explicit, address-local view emitted by Ghidra.
            operand = text[c_cast.end():].strip()
            simple_unary = re.fullmatch(
                r"[&*]*\s*[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|"
                r"\[[^\]\r\n]+\])*",
                operand,
            )
            display = re.sub(r"\s+", " ", c_cast.group("type")).strip()
            if (simple_unary is not None and
                    self.type_emitter.display_type_expression(display) is not None):
                return display
        if text.startswith("*"):
            operand = text[1:].strip()
            cast = re.match(
                r"^\(\s*((?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*\s*\*+)\s*\)",
                operand,
            )
            if cast is not None and operand[cast.end():].strip():
                return self.type_emitter.display_pointee_type(
                    re.sub(r"\s+", " ", cast.group(1)).strip()
                )
            display = self._simple_expression_display(
                operand, declared_types, allow_record_name_fallback
            )
            return None if display is None else \
                self.type_emitter.display_pointee_type(display)
        if text.startswith("("):
            closing = self._matching_delimiter(text, 0, "(", ")")
            if closing is None:
                return None
            if closing == len(text) - 1:
                return self._simple_expression_display(
                    text[1:closing], declared_types, allow_record_name_fallback
                )
            suffix = text[closing + 1:]
            if not re.match(r"\s*(?:\.|->|\[)", suffix):
                return None
            display = self._simple_expression_display(
                text[1:closing], declared_types, allow_record_name_fallback
            )
            return None if display is None else \
                self._apply_display_postfix(
                    display, suffix, allow_record_name_fallback
                )
        base = re.match(r"[A-Za-z_][A-Za-z0-9_]*", text)
        if base is None:
            return None
        name = base.group(0)
        display = declared_types.get(name) or getattr(
            self, "global_display_types", {}
        ).get(name)
        if not display and name.startswith("_DAT_"):
            display = getattr(self, "global_display_types", {}).get(name[1:])
        if not display and re.fullmatch(r"_DAT_[0-9A-Fa-f]{8}", name):
            # Overlapping image aliases are declared by the source assembler
            # as one neutral machine word even when they have no standalone
            # globals.jsonl datum.  Retain exactly that emitted declaration at
            # value boundaries; the alias conveys no pointer or record type.
            display = "undefined4"
        if not display:
            return None
        return self._apply_display_postfix(
            display, text[base.end():], allow_record_name_fallback
        )

    def _boundary_value_for_display(self, display: str) -> BoundaryValue:
        assert self.type_emitter is not None
        decayed = self.type_emitter.display_array_decay_type(display)
        if decayed:
            pointer_kind = self.type_emitter.display_pointer_kind(decayed)
            if pointer_kind:
                return BoundaryValue(decayed, pointer_kind + "_pointer")
        pointer_kind = self.type_emitter.display_pointer_kind(display)
        if pointer_kind:
            return BoundaryValue(display, pointer_kind + "_pointer")
        if self.type_emitter.display_machine_word_scalar(display):
            return BoundaryValue(display, "generic_word")
        storage_member = self.type_emitter.display_machine_word_member(display)
        if storage_member:
            return BoundaryValue(
                display, "four_byte_record", storage_member=storage_member
            )
        # A four-byte record can be a complete packed partition (for example
        # byte, byte, short) rather than one named dword member.  It is still
        # one exact x86 storage word at an assignment boundary.  Keep the
        # nominal record type and let the boundary emitter use a bit-preserving
        # copy; selecting one contained field would discard bytes.
        if self.type_emitter.display_record_length(display) == 4:
            return BoundaryValue(display, "four_byte_record")
        return BoundaryValue(display, "scalar")

    def _boundary_expression(
        self, expression: str, declared_types: Mapping[str, str]
    ) -> BoundaryValue | None:
        assert self.type_emitter is not None
        compact = expression.strip()
        # Ghidra frequently wraps address arithmetic in one or more redundant
        # whole-expression parentheses.  They carry no type information, but
        # leaving them in place hides an otherwise exact leading cast from the
        # boundary classifier (for example ``((byte *)offset + delta)``).
        while compact.startswith("("):
            closing = self._matching_delimiter(compact, 0, "(", ")")
            if closing != len(compact) - 1:
                break
            compact = compact[1:closing].strip()
        if compact == "nullptr":
            return BoundaryValue("nullptr", "null_pointer")
        if re.fullmatch(r"-?(?:0x[0-9A-Fa-f]+|[0-9]+)", compact):
            # An unsuffixed x86 integer literal participates in the ordinary
            # promoted machine-word domain.  Recording that here lets the
            # comparison pass expose a pointer/scalar lifetime boundary
            # instead of leaving invalid C++ or inventing a pointer type.
            return BoundaryValue("int", "generic_word")
        if re.fullmatch(r"st::fn_[0-9A-F]{8}", compact):
            return BoundaryValue("function address", "concrete_pointer", True)
        piece = re.fullmatch(
            r"ST(?:Literal)?Piece\s*<\s*\d+\s*,\s*(?P<width>\d+)\s*>"
            r"\s*\(.+\)",
            compact,
            re.DOTALL,
        )
        if piece is not None:
            width = int(piece.group("width"))
            display = {
                1: "undefined1", 2: "undefined2", 4: "undefined4",
                8: "undefined8",
            }.get(width)
            if display is not None:
                return self._boundary_value_for_display(display)
        if re.fullmatch(r'"(?:\\.|[^"\\])*"', compact, re.DOTALL):
            return BoundaryValue("const char *", "const_char_pointer", True)
        if re.fullmatch(
                r'"(?:\\.|[^"\\])*"\s*[+-]\s*.+', compact, re.DOTALL):
            return BoundaryValue("const char *", "const_char_pointer", True)
        helper = re.match(
            r"^(?:st::(?:pointer_boundary_cast|machine_word_boundary_cast|storage_bit_cast)|"
            r"STPointerBoundaryCast)"
            r"\s*<\s*([^>]+)\s*>\s*\(", compact
        )
        if helper:
            parsed = call_argument_count(compact, compact.find("(", helper.start()))
            if parsed is not None and not compact[parsed[1] + 1:].strip():
                return self._boundary_value_for_display(helper.group(1).strip())
        if re.match(r"^st::mutable_c_string\s*\(", compact):
            parsed = call_argument_count(compact, compact.find("("))
            if parsed is not None and not compact[parsed[1] + 1:].strip():
                return BoundaryValue("char *", "concrete_pointer")
        # STGridAt3D is emitted only after the exporter has proven the exact
        # world-grid aggregate.  Its objects[] member therefore retains the
        # declared STWorldObject pointer domain even though the expression
        # contains a helper call which the generic simple-expression parser
        # intentionally refuses.  This lets an already explicit Ghidra
        # ``(RecoveredRecord *)`` consumer view become ordinary C++ pointer
        # syntax without inventing either endpoint.
        if re.fullmatch(
                r"STGridAt3D\s*\([^;]+\)\s*\.\s*objects\s*"
                r"\[[^\]\r\n]+\]", compact, re.DOTALL):
            return BoundaryValue("STWorldObject *", "concrete_pointer")
        indexed_address = re.fullmatch(
            r"\(\s*&\s*(?P<base>[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*)*)\s*\)"
            r"\s*\[[^\]\n]+\]",
            compact,
            re.DOTALL,
        )
        if indexed_address:
            base = indexed_address.group("base")
            display = self._simple_expression_display(base, declared_types)
            if display:
                return self._boundary_value_for_display(display)
            if re.fullmatch(r"_?(?:DAT|PTR)_[0-9A-Fa-f]{8}", base):
                return BoundaryValue("indexed image word", "generic_word", True)
        exact_display = self._simple_expression_display(compact, declared_types)
        if exact_display:
            return self._boundary_value_for_display(exact_display)
        # One exact pointer-plus-word expression still has pointer storage in
        # the decompiler even when the pointer local is a compiler-reused loop
        # word.  Keep this deliberately to one top-level +/- operation: it is
        # enough to classify the representation for a comparison, but it does
        # not claim an array element type or simplify general arithmetic.
        binary = re.fullmatch(
            r"(?P<left>[A-Za-z_][A-Za-z0-9_]*)\s*(?P<op>[+-])\s*"
            r"(?P<right>[A-Za-z_][A-Za-z0-9_]*|-?(?:0x[0-9A-Fa-f]+|[0-9]+))",
            compact,
        )
        if binary:
            left = self._boundary_expression(binary.group("left"), declared_types)
            right_text = binary.group("right")
            right = (
                BoundaryValue("int", "generic_word")
                if re.fullmatch(r"-?(?:0x[0-9A-Fa-f]+|[0-9]+)", right_text)
                else self._boundary_expression(right_text, declared_types)
            )
            if left is not None and right is not None:
                left_pointer = left.kind.endswith("_pointer")
                right_pointer = right.kind.endswith("_pointer")
                left_word = self.type_emitter.display_machine_word_scalar(
                    left.display_type
                )
                right_word = self.type_emitter.display_machine_word_scalar(
                    right.display_type
                )
                if left_pointer and right_word:
                    return BoundaryValue(left.display_type, left.kind)
                if (binary.group("op") == "+" and right_pointer and left_word):
                    return BoundaryValue(right.display_type, right.kind)
        address = re.fullmatch(r"&\s*(.+)", compact, re.DOTALL)
        if address:
            value = address.group(1).strip()
            exact_display = self._simple_expression_display(value, declared_types)
            if exact_display:
                source = exact_display + " *"
                kind = self.type_emitter.display_pointer_kind(source) or "concrete"
                return BoundaryValue(source, kind + "_pointer", True)
            based = re.fullmatch(
                r"(?P<base>[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)"
                r"(?P<tail>\s*[+-].+)",
                value,
                re.DOTALL,
            )
            if based and self._safe_boundary_arithmetic_tail(based.group("tail")):
                base_display = self._simple_expression_display(
                    based.group("base"), declared_types
                )
                if base_display:
                    source = base_display + " *"
                    kind = self.type_emitter.display_pointer_kind(source) or "concrete"
                    return BoundaryValue(source, kind + "_pointer", True)
                if re.fullmatch(
                        r"(?:_?(?:DAT|PTR)_[0-9A-Fa-f]{8}|st_global_[0-9A-Fa-f]{8})",
                        based.group("base")):
                    return BoundaryValue(
                        "address inside unresolved image datum", "generic_pointer", True
                    )
            named = re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", value)
            named_type = None if named is None else (
                declared_types.get(named.group(0)) or
                self.global_display_types.get(named.group(0))
            )
            if named_type:
                source = named_type + " *"
                kind = self.type_emitter.display_pointer_kind(source) or "concrete"
                return BoundaryValue(source, kind + "_pointer", True)
            if named and re.fullmatch(
                    r"(?:_?(?:DAT|PTR)_[0-9A-Fa-f]{8}|st_image_[0-9A-F]{8}|"
                    r"st_global_[0-9A-Fa-f]{8}|stack0x[0-9A-Fa-f]+)",
                    named.group(0)):
                return BoundaryValue(
                    "address of unresolved image datum", "generic_pointer", True
                )
            field = re.fullmatch(
                r"(?:[A-Za-z_][A-Za-z0-9_]*|\([^()]+\))\s*->\s*"
                r"field_(?:0x)?[0-9A-Fa-f]+",
                value,
            )
            if field:
                return BoundaryValue(
                    "address of unresolved field", "generic_pointer", True
                )
            st_field = re.fullmatch(r"STField\s*<\s*([^>]+)\s*>\s*\(.+\)", value,
                re.DOTALL)
            if st_field:
                source = st_field.group(1).strip() + " *"
                kind = self.type_emitter.display_pointer_kind(source) or "concrete"
                return BoundaryValue(source, kind + "_pointer", True)
        if compact.startswith("("):
            closing = self._matching_delimiter(compact, 0, "(", ")")
            if (closing is not None and closing < len(compact) - 1 and
                    self._safe_boundary_arithmetic_tail(compact[closing + 1:])):
                grouped = self._boundary_expression(
                    compact[1:closing], declared_types
                )
                if grouped is not None and (
                        grouped.kind.endswith("_pointer") or
                        grouped.kind == "generic_word"):
                    return grouped
        cast = re.match(
            r"^\(\s*((?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*"
            r"(?:[ \t]*\*+)?)\s*\)",
            compact,
        )
        if cast:
            display = cast.group(1)
            kind = self.type_emitter.display_pointer_kind(display)
            if kind:
                return BoundaryValue(display, kind + "_pointer")
            if self.type_emitter.display_machine_word_scalar(display):
                return BoundaryValue(display, "generic_word")
            if self.type_emitter.display_storage_length(display) is not None:
                return BoundaryValue(display, "scalar")
        field = re.match(
            r"^STField\s*<\s*([^>]+)\s*>",
            compact,
        )
        if field:
            display = field.group(1).strip()
            pointer_kind = self.type_emitter.display_pointer_kind(display)
            if pointer_kind:
                return BoundaryValue(display, pointer_kind + "_pointer")
            if re.sub(r"\s+", "", display) == "undefined4":
                return BoundaryValue(display, "generic_word")
        call = re.match(r"^st::fn_([0-9A-F]{8})\s*\(", compact)
        if call:
            parsed = call_argument_count(compact, compact.find("(", call.start()))
            if parsed is None or compact[parsed[1] + 1:].strip():
                return None
            target = self.function_by_address.get(call.group(1))
            if target is None:
                return None
            result_type = self._function_result_type(target)
            if result_type:
                pointer_kind = self.type_emitter.display_pointer_kind(result_type)
                if pointer_kind:
                    return BoundaryValue(result_type, pointer_kind + "_pointer")
                if self.type_emitter.display_machine_word_scalar(result_type):
                    return BoundaryValue(result_type, "generic_word")
        unresolved_member = re.fullmatch(
            r".+->field_(?:0x)?[0-9A-Fa-f]+", compact, re.DOTALL
        )
        if unresolved_member:
            return BoundaryValue("unresolved field word", "generic_word")
        arithmetic = re.match(
            r"^(?P<base>[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*)*)"
            r"(?P<tail>[ \t]*[+\-*/%<>&|^].+)$",
            compact,
            re.DOTALL,
        )
        if arithmetic and self._safe_boundary_arithmetic_tail(
                arithmetic.group("tail")):
            base = arithmetic.group("base")
            # The arithmetic root is the complete typed member chain, not its
            # first identifier.  Treating ``object->bytes + index`` as
            # arithmetic on ``object`` manufactured a false Owner * -> byte *
            # boundary and hundreds of noisy pointer_boundary_cast helpers.
            display = self._simple_expression_display(
                base, declared_types, allow_record_name_fallback=True
            )
            if display:
                value = self._boundary_value_for_display(display)
                if value.kind.endswith("_pointer"):
                    return value
                # Arithmetic rooted in any target-width machine word is still
                # a machine-word value.  Exporter recovery deliberately spells
                # proven scalar lifetimes as uint rather than undefined4; do
                # not lose the exact scalar-to-pointer transport boundary just
                # because that readability repair succeeded.
                if self.type_emitter.display_machine_word_scalar(display):
                    return BoundaryValue(display, "generic_word")
        return None

    @staticmethod
    def _safe_boundary_arithmetic_tail(tail: str) -> bool:
        """Accept expression-only address arithmetic, including indexes.

        Calls, member-call syntax, commas, conditionals and assignments remain
        excluded.  Brackets and dots are needed for exact array-index terms
        such as ``base + index[1] * 4`` which Ghidra commonly emits.
        """
        normalized = re.sub(
            r"STField\s*<[^>]+>\s*\([^()]*\)", "st_field", tail
        )
        if not re.fullmatch(r"[\s+\-*/%<>&|^~().\[\]0-9A-Za-z_]+", normalized):
            return False
        return re.search(
            r"\b[A-Za-z_][A-Za-z0-9_]*\s*\(", normalized
        ) is None

    def _boundary_replacement(
        self, target_display: str, source: BoundaryValue,
        expression: str
    ) -> tuple[str, str] | None:
        assert self.type_emitter is not None
        target_pointer = self.type_emitter.display_pointer_kind(target_display)
        target_word = self.type_emitter.display_machine_word_scalar(target_display)
        target_type = self.type_emitter.display_type_expression(target_display)
        if target_type is None:
            return None
        normalized_target = re.sub(r"\s+", "", target_display)
        normalized_source = re.sub(r"\s+", "", source.display_type)
        if target_pointer:
            if source.kind == "null_pointer":
                return None
            if not source.kind.endswith("_pointer") and source.kind != "generic_word":
                source_width = self.type_emitter.display_integer_scalar_width(
                    source.display_type
                )
                source_storage = self.type_emitter.display_storage_length(
                    source.display_type
                )
                if source_width is not None and source_width <= 4:
                    return (
                        f"reinterpret_cast<{target_type}>(static_cast<uintptr_t>"
                        f"({expression}))",
                        f"integer address word {source.display_type} -> "
                        f"{target_display}",
                    )
                if source_storage == 4:
                    return (
                        f"reinterpret_cast<{target_type}>(static_cast<uintptr_t>("
                        f"st::storage_bit_cast<uint32_t>({expression})))",
                        f"four-byte storage {source.display_type} -> "
                        f"{target_display}",
                    )
                return None
            # Every object pointer converts to void * implicitly in C++ just as
            # it does in the decompiler's C dialect.  Emitting a helper there
            # adds noise without solving a language-boundary incompatibility.
            if self.type_emitter.display_is_void_pointer(target_display) and \
                    source.kind.endswith("_pointer"):
                return None
            if normalized_target == "char*" and \
                    source.kind == "const_char_pointer":
                return (
                    f"st::mutable_c_string({expression})",
                    "const char * -> char *",
                )
            if source.display_type == "function address":
                return (
                    f"st::function_address_boundary_cast<{target_type}>"
                    f"({expression})",
                    f"exact address-stable function value -> {target_display}",
                )
            if (normalized_target == normalized_source or
                    self.type_emitter.display_cpp_equivalent(
                        target_display, source.display_type)):
                return None
            # A neutral void receiver reaching one independently recovered object type is an
            # ordinary C++ void-pointer conversion.  Keep it visible as language syntax rather
            # than wrapping a readable constructor/base-initializer call in a project helper.
            if (source.kind.endswith("_pointer") and
                    self.type_emitter.display_is_void_pointer(
                        source.display_type)):
                if target_pointer != "concrete":
                    return (
                        f"({target_type}){expression}",
                        f"void storage pointer -> {target_display}",
                    )
                return (
                    f"static_cast<{target_type}>({expression})",
                    f"void storage pointer -> {target_display}",
                )
            # Ghidra has already made this representation boundary explicit.
            # When the recovered producer/consumer type changes, retarget the
            # outer C pointer cast instead of wrapping it in a second project-
            # specific helper.  Every object-pointer reinterpretation preserves
            # the same address; the target prototype remains authoritative.
            outer_cast = re.fullmatch(
                r"\(\s*(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*"
                r"(?:[ \t]*\*+)\s*\)\s*(?P<operand>.+)",
                expression.strip(),
                re.DOTALL,
            )
            if outer_cast:
                return (
                    f"({target_type}){outer_cast.group('operand').strip()}",
                    f"retarget explicit pointer cast {source.display_type} -> "
                    f"{target_display}",
                )
            # An address-of expression is already an exact storage address.  A
            # generic byte/word pointer view needs only the ordinary source cast;
            # pointer_boundary_cast would add no proof and can explode once a
            # large byte-buffer function loses a false anonymous-record type.
            if source.address_storage and (
                    target_pointer == "generic" or
                    self.type_emitter.display_is_neutral_storage_pointer(
                        target_display)):
                return (
                    f"({target_type}){expression.strip()}",
                    f"exact storage address {source.display_type} -> "
                    f"{target_display}",
                )
            target_integer_width = \
                self.type_emitter.display_integer_pointer_width(target_display)
            source_integer_width = \
                self.type_emitter.display_integer_pointer_width(source.display_type)
            if (target_integer_width is not None and
                    target_integer_width == source_integer_width):
                return (
                    f"reinterpret_cast<{target_type}>({expression})",
                    f"equal-width integer storage {source.display_type} -> "
                    f"{target_display}",
                )
            # Two already typed object-storage pointers carry the same x86
            # address even when their recovered record views differ.  Keep the
            # discrepancy explicit at this one assignment/call boundary; do
            # not merge either datatype or invent an inheritance relation.
            if (source.kind in {"concrete_pointer", "generic_pointer"} and
                    target_pointer in {"concrete", "generic"}):
                return (
                    f"reinterpret_cast<{target_type}>({expression})",
                    f"object storage view {source.display_type} -> "
                    f"{target_display}",
                )
            zero_member = self.type_emitter.display_zero_member_for_pointer_conversion(
                source.display_type, target_display
            )
            if zero_member:
                return (
                    f"&({expression})->{zero_member}",
                    f"{source.display_type} offset-zero member {zero_member} -> "
                    f"{target_display}",
                )
            if self.type_emitter.display_generated_record_view_compatible(
                    source.display_type, target_display):
                return (
                    f"st::pointer_boundary_cast<{target_type}>({expression})",
                    f"exact generated record view {source.display_type} -> "
                    f"{target_display}",
                )
            source_generic = source.kind in {"generic_pointer", "generic_word"}
            if not (source_generic or target_pointer == "generic" or
                    source.address_storage):
                return None
            return (
                f"st::pointer_boundary_cast<{target_type}>({expression})",
                f"{source.display_type} -> {target_display}",
            )
        if target_word and source.kind == "null_pointer":
            # A null pointer converted to a machine word is exactly the integer
            # constant zero.  Keeping the neutral Ghidra typedef in a cast only
            # leaks recovery scaffolding into otherwise ordinary source.
            return ("0", "nullptr -> zero word")
        if target_word and source.kind.endswith("_pointer"):
            return (
                f"st::machine_word_boundary_cast<{target_type}>({expression})",
                f"{source.display_type} -> {target_display}",
            )
        if target_word and source.kind == "four_byte_record":
            if not source.storage_member:
                return (
                    f"st::storage_bit_cast<{target_type}>({expression})",
                    f"four-byte packed {source.display_type} -> {target_display}",
                )
            member_suffix = re.compile(
                rf"(?:->|\.){re.escape(source.storage_member)}\s*$"
            )
            if member_suffix.search(expression.strip()):
                # The decompiler already selected the exact scalar facet of
                # this four-byte union/record.  Its nominal High type can still
                # be the enclosing record, but adding a cast to undefined4 is
                # neither necessary C++ nor useful recovered information.
                return None
            return (
                f"(({expression}).{source.storage_member})",
                f"four-byte {source.display_type} -> {target_display}",
            )
        target_integer_width = self.type_emitter.display_integer_scalar_width(
            target_display
        )
        source_record_length = self.type_emitter.display_record_length(
            source.display_type
        )
        if (target_integer_width is not None and
                source_record_length is not None and
                source_record_length >= target_integer_width and
                not source.kind.endswith("_pointer")):
            # A call boundary can consume the low machine word of a wider
            # packed record even though Ghidra's C printer spells the complete
            # record value.  Preserve exactly those little-endian bytes; this
            # is a per-use storage projection, not a semantic field claim.
            piece = (
                f"STPiece<0,{target_integer_width}>({expression})"
            )
            replacement = piece if re.fullmatch(
                rf"(?:undefined{target_integer_width}|u?int"
                rf"{target_integer_width * 8}_t)", normalized_target
            ) else f"static_cast<{target_type}>({piece})"
            return (
                replacement,
                f"low {target_integer_width}-byte storage of "
                f"{source.display_type} -> {target_display}",
            )
        if (target_integer_width in {1, 2} and
                source.kind.endswith("_pointer")):
            word = f"st::machine_word_boundary_cast<uint>({expression})"
            narrowed = (
                f"({target_type})({word})"
                if re.fullmatch(r"undefined(?:[12])?", normalized_target)
                else f"static_cast<{target_type}>({word})"
            )
            return (
                narrowed,
                f"pointer word {source.display_type} -> narrow {target_display}",
            )
        target_storage = self.type_emitter.display_storage_length(target_display)
        if target_storage == 4 and source.kind.endswith("_pointer"):
            return (
                f"st::storage_bit_cast<{target_type}>({expression})",
                f"pointer bits {source.display_type} -> four-byte {target_display}",
            )
        return None

    def _equivalent_outer_pointer_cast(
        self,
        target_display: str,
        expression: str,
        declared_types: Mapping[str, str],
    ) -> tuple[str, str] | None:
        """Normalize one already-explicit Ghidra pointer-view cast.

        A stronger callee or local type can make Ghidra change an old
        pointer-to-integer transport into ``(Target *)pointer``.  Leaving that
        C-style cast in generated C++ is both noisy and easy to mistake for a
        newly inferred conversion.  When the outer cast is exactly the proven
        destination type and the operand is independently pointer-shaped,
        retain the boundary as ordinary C++ ``reinterpret_cast`` syntax.  This
        never turns a scalar into a pointer and never chooses a target type.
        """
        assert self.type_emitter is not None
        target_pointer = self.type_emitter.display_pointer_kind(target_display)
        target_type = self.type_emitter.display_type_expression(target_display)
        if target_pointer is None or target_type is None:
            return None
        outer = re.fullmatch(
            r"\s*\(\s*(?P<cast>(?:const\s+)?[A-Za-z_]"
            r"[A-Za-z0-9_:<> ]*\s*\*+)\s*\)\s*(?P<operand>.+?)\s*",
            expression,
            re.DOTALL,
        )
        if outer is None:
            return None
        cast_display = re.sub(r"\s+", " ", outer.group("cast")).strip()
        if not (
            re.sub(r"\s+", "", cast_display) ==
                re.sub(r"\s+", "", target_display) or
            self.type_emitter.display_cpp_equivalent(
                cast_display, target_display
            )
        ):
            return None
        operand = outer.group("operand").strip()
        source = self._boundary_expression(operand, declared_types)
        if source is None or not source.kind.endswith("_pointer"):
            return None
        if (source.kind == "const_char_pointer" and
                not re.sub(r"\s+", "", target_display).startswith("const")):
            return (
                f"st::pointer_boundary_cast<{target_type}>({operand})",
                f"explicit pointer view {source.display_type} -> "
                f"{target_display}",
            )
        return (
            f"reinterpret_cast<{target_type}>({operand})",
            f"explicit pointer view {source.display_type} -> {target_display}",
        )

    def _repair_exact_storage_comparisons(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Make exact x86 pointer/word tests legal without changing recovery.

        Ghidra legitimately reuses a 32-bit storage word for pointer and scalar
        lifetimes.  C accepts several comparisons and switches which C++
        rejects, even though the x86 operation tests the same four bits.  This
        pass is deliberately limited to simple, independently typed operands:
        it does not infer a pointee, merge records, or hide arithmetic.  The
        generated helper documents the one address-local representation
        boundary while the audit row keeps the unresolved lifetime visible.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        simple_operand = (
            r"[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\r\n]+\])*"
        )
        # Keep the cast together with the value it qualifies.  Treating only
        # ``(uint)`` as the right operand in ``ptr < (uint)*word`` left the
        # actual dereference outside the comparison and made the exact x86
        # word boundary invisible.  This grammar is intentionally limited to
        # one ordinary C cast followed by dereferences and one postfix-only
        # value (or an integer literal); arbitrary parenthesized arithmetic is
        # still rejected below.
        casted_operand = (
            r"\(\s*(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*"
            r"(?:[ \t]*\*+)?\s*\)[ \t]*\**[ \t]*"
            rf"(?:\([^(),;\r\n]+\)|{simple_operand}|"
            rf"-?(?:0x[0-9A-Fa-f]+|[0-9]+))"
        )
        arithmetic_operand = (
            rf"{simple_operand}[ \t]*[+-][ \t]*"
            rf"(?:{simple_operand}|-?(?:0x[0-9A-Fa-f]+|[0-9]+))"
        )
        piece_operand = (
            rf"ST(?:Literal)?Piece[ \t]*<[ \t]*\d+[ \t]*,[ \t]*\d+"
            rf"[ \t]*>[ \t]*\([ \t]*{simple_operand}[ \t]*\)"
        )
        dereferenced_casted_operand = rf"\*[ \t]*{casted_operand}"
        operand = (
            rf"(?:{piece_operand}|{dereferenced_casted_operand}|{casted_operand}|"
            rf"{arithmetic_operand}|&[ \t]*{simple_operand}|"
            rf"\([^(),;\r\n]+\)|-?(?:0x[0-9A-Fa-f]+|[0-9]+)|"
            rf"{simple_operand})"
        )
        comparison = re.compile(
            rf"(?<![A-Za-z0-9_>.)\]*&])(?P<left>{operand})"
            rf"(?P<space1>[ \t]*)(?P<op>==|!=|<=|>=|<|>)"
            rf"(?P<space2>[ \t]*)(?P<right>{operand})"
            rf"(?![A-Za-z0-9_(.\[])",
        )
        edits: list[tuple[int, int, str, str]] = []
        masked = code_mask(body)
        for match in comparison.finditer(masked):
            if (match.group("op") == ">" and re.search(
                    r"\bST(?:Literal)?Piece\s*<\s*\d+\s*,\s*\d+\s*$",
                    masked[max(0, match.start("op") - 96):match.start("op")],
                )):
                # The closing angle bracket in STPiece<offset,width>(value)
                # is template syntax, not an x86 comparison.  Treating it as
                # ``width > value`` used to splice a boundary cast between
                # the helper name and its argument across hundreds of sites.
                continue
            left_text = body[match.start("left"):match.end("left")]
            right_text = body[match.start("right"):match.end("right")]
            left = self._boundary_expression(left_text, declared)
            right = self._boundary_expression(right_text, declared)
            if left is None or right is None:
                continue
            left_pointer = (
                left.kind.endswith("_pointer") and left.kind != "null_pointer"
            )
            right_pointer = (
                right.kind.endswith("_pointer") and right.kind != "null_pointer"
            )
            left_word = self.type_emitter.display_machine_word_scalar(
                left.display_type
            )
            right_word = self.type_emitter.display_machine_word_scalar(
                right.display_type
            )
            replacement_left = left_text
            replacement_right = right_text
            detail = ""
            if left_pointer and right_word:
                converted = self._boundary_replacement(
                    right.display_type, left, left_text
                )
                if converted is None:
                    continue
                replacement_left, transition = converted
                detail = f"comparison left: {transition}"
            elif right_pointer and left_word:
                converted = self._boundary_replacement(
                    left.display_type, right, right_text
                )
                if converted is None:
                    continue
                replacement_right, transition = converted
                detail = f"comparison right: {transition}"
            elif left_pointer and right_pointer:
                left_kind = self.type_emitter.display_pointer_kind(
                    left.display_type
                )
                right_kind = self.type_emitter.display_pointer_kind(
                    right.display_type
                )
                exact_left = self._simple_expression_display(
                    left_text, declared
                )
                exact_right = self._simple_expression_display(
                    right_text, declared
                )
                if (exact_left is not None and exact_right is not None and
                        self.type_emitter.display_cpp_equivalent(
                            left.display_type, right.display_type)):
                    continue
                replacement_left = (
                    f"st::machine_word_boundary_cast<uint>({left_text})"
                )
                replacement_right = (
                    f"st::machine_word_boundary_cast<uint>({right_text})"
                )
                detail = (
                    "comparison: distinct pointer storage views -> common x86 word"
                )
            else:
                continue
            replacement = (
                replacement_left + match.group("space1") + match.group("op") +
                match.group("space2") + replacement_right
            )
            edits.append((match.start(), match.end(), replacement, detail))

        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_storage_comparison_boundary", detail, address
            ))
        self.stats["exact_storage_comparison_boundaries"] += len(edits)

        # A pointer-valued Listing lifetime in a switch is the same machine
        # boundary, but there is no second operand from which to derive a word
        # type.  x86 switch selectors are 32-bit here; use the fixed-width
        # corpus word rather than guessing signedness.
        declared = self._declared_types(function, body)
        switch_pattern = re.compile(
            rf"\bswitch(?P<prefix>[ \t]*\([ \t]*)"
            rf"(?P<value>{operand})(?P<suffix>[ \t]*\))"
        )
        switch_edits: list[tuple[int, int, str, str]] = []
        for match in switch_pattern.finditer(code_mask(body)):
            value_text = body[match.start("value"):match.end("value")]
            value = self._boundary_expression(value_text, declared)
            if value is None or not value.kind.endswith("_pointer"):
                continue
            replacement = (
                "st::machine_word_boundary_cast<uint>(" + value_text + ")"
            )
            switch_edits.append((
                match.start("value"), match.end("value"), replacement,
                f"switch selector: {value.display_type} -> uint",
            ))
        for start, end, replacement, detail in sorted(switch_edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_pointer_switch_boundary", detail, address
            ))
        self.stats["exact_pointer_switch_boundaries"] += len(switch_edits)
        return body

    def _function_result_type(self, function: Mapping[str, Any]) -> str | None:
        address = str(function.get("address") or "").upper()
        declaration = self.body_declarations.get(address)
        if declaration:
            result = self._signature_result_type({"signature": declaration})
            if result:
                return result
        owner = self._thunk_signature_owner(function)
        result = self._signature_result_type(owner)
        # Ghidra's bare DefaultDataType is rendered as ``undefined`` but is not
        # evidence for an AL-sized return.  At an excluded/external x86
        # boundary the only source-safe transport is the complete EAX word;
        # genuinely proven narrow returns are concrete byte/char/undefined1.
        if (result == "undefined" and not owner.get("body_exported")):
            return "undefined4"
        return result

    def _repair_exact_field_names(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Replace raw offset labels with already exported exact member names."""
        assert self.type_emitter is not None
        for _ in range(4):
            declared_types = self._declared_types(function, body)
            masked = code_mask(body)
            pattern = re.compile(
                r"(?P<base>[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)"
                r"(?P<op>->|\.)(?P<field>field_(?:0x)?"
                r"(?P<offset>[0-9A-Fa-f]+))"
            )
            edits: list[tuple[int, int, str, str, bool]] = []
            for match in pattern.finditer(masked):
                display = self._simple_expression_display(
                    body[match.start("base"):match.end("base")], declared_types
                )
                if not display:
                    continue
                member = self.type_emitter.display_member_name_at_offset(
                    display, int(match.group("offset"), 16),
                    match.group("op") == "->",
                )
                if not member or member == match.group("field"):
                    continue
                edits.append((match.start("field"), match.end("field"), member,
                    f"{display}{match.group('op')}{match.group('field')} -> {member}"))
            if not edits:
                break
            for start, end, replacement, detail in sorted(edits, reverse=True):
                body = body[:start] + replacement + body[end:]
                self.issues.append(Issue("exact_field_name_rewrite", detail, address))
            self.stats["exact_field_name_rewrites"] += len(edits)
            # A by-value subobject is often parenthesized by Ghidra before the
            # final member access: ``(this->aggregate).field_0x18``.  Resolve
            # only the same simple postfix chain accepted above; the enclosing
            # parentheses add no new type evidence.
            masked = code_mask(body)
            parenthesized = re.compile(
                r"\((?P<base>[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)\)"
                r"(?P<op>->|\.)(?P<field>field_(?:0x)?"
                r"(?P<offset>[0-9A-Fa-f]+))"
            )
            edits = []
            for match in parenthesized.finditer(masked):
                display = self._simple_expression_display(
                    body[match.start("base"):match.end("base")], declared_types
                )
                if not display:
                    continue
                member = self.type_emitter.display_member_name_at_offset(
                    display, int(match.group("offset"), 16),
                    match.group("op") == "->",
                )
                if not member or member == match.group("field"):
                    continue
                edits.append((match.start("field"), match.end("field"), member,
                    f"({display}){match.group('op')}{match.group('field')} -> "
                    f"{member}"))
            for start, end, replacement, detail in sorted(edits, reverse=True):
                body = body[:start] + replacement + body[end:]
                self.issues.append(Issue("exact_field_name_rewrite", detail, address))
            self.stats["exact_field_name_rewrites"] += len(edits)
        return body

    def _repair_missing_field_addresses(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Spell an unnamed in-record byte address without a fake member.

        Pointer-shape records intentionally emit gaps as byte arrays rather
        than one member at every observed cursor position.  Ghidra can still
        render ``&record->field_0xNN`` for an address strictly inside such a
        gap.  Once the base record and its exact extent are known, byte
        arithmetic is the faithful C++ spelling; inventing a member would turn
        a transient cursor into persistent layout evidence.
        """
        assert self.type_emitter is not None
        if "field_" not in body or "&" not in body:
            return body
        declared = self._declared_types(function, body)
        pattern = re.compile(
            r"(?m)^[ \t]*(?P<lhs>[A-Za-z_][A-Za-z0-9_]*)[ \t]*=[ \t]*"
            r"(?P<rhs>\(\s*(?P<target>(?:const\s+)?[A-Za-z_]"
            r"[A-Za-z0-9_:<>]*\s*\*+)\s*\)\s*&\s*"
            r"(?P<base>(?P=lhs))\s*->\s*field_(?:0x)?"
            r"(?P<offset>[0-9A-Fa-f]+))"
        )
        edits: list[tuple[int, int, str, str]] = []
        for match in pattern.finditer(code_mask(body)):
            base = body[match.start("base"):match.end("base")]
            display = self._simple_expression_display(
                base, declared, allow_record_name_fallback=True
            )
            target = body[match.start("target"):match.end("target")].strip()
            if (display and not
                    self.type_emitter.display_cpp_equivalent(target, display)):
                continue
            display = display or target
            offset = int(match.group("offset"), 16)
            record_display = (
                self.type_emitter.display_pointee_type(display) or display
            )
            extent = self.type_emitter.display_record_length(record_display)
            if extent is None or offset < 0 or offset >= extent:
                continue
            if self.type_emitter.display_member_name_at_offset(
                    display, offset, True):
                continue
            replacement = (
                f"reinterpret_cast<{target}>("
                f"reinterpret_cast<byte *>({base}) + 0x{offset:X})"
            )
            edits.append((
                match.start("rhs"), match.end("rhs"), replacement,
                f"{display} unnamed byte address +0x{offset:X}",
            ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "unnamed_record_byte_address", detail, address
            ))
        self.stats["unnamed_record_byte_addresses"] += len(edits)
        return body

    def _observe_exact_nested_gap_fields(
        self, function: Mapping[str, Any], body: str
    ) -> None:
        """Retain exact byte views reached through a complete typed postfix chain.

        This complements ``TypeEmitter.observe_field_accesses`` for expressions
        such as ``this->records[index].field_0x5`` and
        ``(this->aggregate).field_0x21d``.  The same datatype-graph walker used
        by boundary repair must resolve the base.  The emitter then independently
        verifies that the target is one exact unnamed byte before changing the
        generated declaration.
        """
        assert self.type_emitter is not None
        declared_types = self._declared_types(function, body)
        masked = code_mask(body)
        pattern = re.compile(
            r"(?P<base>[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)"
            r"(?P<op>->|\.)field_(?:0x)?(?P<offset>[0-9A-Fa-f]+)"
        )
        for match in pattern.finditer(masked):
            display = self._simple_expression_display(
                body[match.start("base"):match.end("base")], declared_types,
                allow_record_name_fallback=True,
            )
            if not display:
                continue
            if self.type_emitter.require_exact_gap_field(
                display, int(match.group("offset"), 16),
                match.group("op") == "->",
            ):
                self.stats["nested_gap_field_observations"] += 1
        parenthesized = re.compile(
            r"\((?P<base>[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)\)"
            r"(?P<op>->|\.)field_(?:0x)?(?P<offset>[0-9A-Fa-f]+)"
        )
        for match in parenthesized.finditer(masked):
            display = self._simple_expression_display(
                body[match.start("base"):match.end("base")], declared_types,
                allow_record_name_fallback=True,
            )
            if not display:
                continue
            if self.type_emitter.require_exact_gap_field(
                display, int(match.group("offset"), 16),
                match.group("op") == "->",
            ):
                self.stats["nested_gap_field_observations"] += 1

        # Explicit receiver casts such as
        # ``((DDXContext *)*param)->field_0x8`` already state the complete
        # physical record type, but the value expression inside the cast can
        # contain arbitrary pointer arithmetic and is intentionally outside the
        # ordinary postfix walker.  Balance the outer parentheses, accept only
        # one leading ordinary pointer cast, and retain an exact one-byte gap
        # view from that literal type.  The pointee expression contributes no
        # ownership or layout evidence.
        cast_member = re.compile(
            r"->field_(?:0x)?(?P<offset>[0-9A-Fa-f]+)"
        )
        cast_prefix = re.compile(
            r"^\(\s*\(\s*"
            r"(?P<base>(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*)"
            r"\s*(?P<stars>\*+)\s*\)\s*.+\)$",
            re.DOTALL,
        )
        for match in cast_member.finditer(masked):
            cursor = match.start() - 1
            while cursor >= 0 and masked[cursor].isspace():
                cursor -= 1
            if cursor < 0 or masked[cursor] != ")":
                continue
            opening = self._matching_open_delimiter(masked, cursor, "(", ")")
            if opening is None:
                continue
            cast = cast_prefix.fullmatch(masked[opening:cursor + 1])
            if cast is None:
                continue
            display = cast.group("base") + " " + cast.group("stars")
            if self.type_emitter.require_exact_gap_field(
                display, int(match.group("offset"), 16), True
            ):
                self.stats["cast_receiver_gap_field_observations"] += 1

    def _serialized_type_expression(self, specification: str) -> str | None:
        """Render one applier fingerprint type without guessing a display alias."""
        assert self.type_emitter is not None
        pointer_depth = 0
        while specification.startswith("pointer:"):
            pointer_depth += 1
            specification = specification[len("pointer:"):]
        if not specification.startswith("/"):
            return None
        record = self.type_emitter.by_path.get(specification)
        # Hidden-this records used to be published as AnonReceiver_ADDRESS and
        # were later identity-preservingly promoted to
        # RecoveredReceiver_ADDRESS. Existing exact callsite comments retain
        # the older serialized path by design. Resolve only that deterministic
        # same-address lifecycle rename; arbitrary missing paths stay missing.
        if record is None:
            migrated = re.fullmatch(
                r"(?P<prefix>.*/HiddenThis/)AnonReceiver_(?P<address>[0-9A-Fa-f]+)",
                specification,
            )
            if migrated is not None:
                candidate = (
                    migrated.group("prefix") + "RecoveredReceiver_" +
                    migrated.group("address").upper()
                )
                if candidate in self.type_emitter.by_path:
                    specification = candidate
                    record = self.type_emitter.by_path[candidate]
        if record is None:
            return None
        result = self.type_emitter.type_name(specification)
        return result + (" *" * pointer_depth)

    def _exact_call_result_evidence(
        self, body: str, start: int, end: int
    ) -> tuple[str, str] | None:
        """Return one exact direct-call result and function-pointer ABI.

        The exporter keeps the address-authoritative ST_CALLSITE marker directly
        before the statement.  Ghidra may deliberately retain the transport
        return ABI because installing the concrete High override would merge an
        unrelated local lifetime.  At the C++ boundary the same exact proof is
        sufficient for one explicit cast around that direct call, but for no
        other expression.
        """
        compact = body[start:end].strip()
        call = re.match(r"^st::fn_(?P<target>[0-9A-F]{8})\s*\(", compact)
        if call is None:
            return None
        parsed = call_argument_count(compact, compact.find("(", call.start()))
        if parsed is None or compact[parsed[1] + 1:].strip():
            return None
        prefix = body[max(0, start - 8192):start]
        marker_start = prefix.rfind("/* ST_CALLSITE[")
        if marker_start < 0:
            return None
        marker_end = prefix.find("*/", marker_start)
        if marker_end < 0:
            return None
        marker = prefix[marker_start:marker_end + 2]
        if "[STCallResultViewApplier]" not in marker:
            return None
        direct = re.search(r"\bdirect=(?P<target>[0-9A-F]{8})\b", marker)
        if direct is None or direct.group("target") != call.group("target"):
            return None
        result = re.search(
            r"\bexact direct-call result=(?P<type>pointer:[^;\r\n]+)",
            marker,
        )
        if result is None:
            return None
        returned = self._serialized_type_expression(result.group("type").strip())
        signature = re.search(
            r"\bsignature=(?P<signature>[^*\r\n]+?)\s*(?:\*/)?$",
            marker,
        )
        if returned is None:
            return None
        if signature is None:
            return returned, ""
        parts = [part.strip() for part in signature.group("signature").split(";")]
        if len(parts) < 2 or parts[0] not in {
                "__thiscall", "__stdcall", "__cdecl"}:
            return None
        abi_returned = self._serialized_type_expression(parts[1])
        parameters = tuple(
            value for item in parts[2:]
            if (value := self._serialized_type_expression(item)) is not None
        )
        if (abi_returned is None or abi_returned != returned or
                len(parameters) != len(parts) - 2):
            return None
        function_pointer = (
            f"{returned} ({parts[0]} *)"
            f"({', '.join(parameters) if parameters else 'void'})"
        )
        return returned, function_pointer

    def _exact_call_result_view(
        self, body: str, start: int, end: int
    ) -> str | None:
        evidence = self._exact_call_result_evidence(body, start, end)
        return None if evidence is None else evidence[0]

    def _exact_call_result_expression(
        self, body: str, start: int, end: int
    ) -> str | None:
        """Render a call through its exact instruction-local result ABI.

        This is needed only when the physical source declaration is ``void``:
        C++ cannot pass a void expression through an ordinary boundary cast.
        The durable callsite marker contains the independently recovered x86
        ABI, so use that one address-local view without changing the shared
        declaration of the callee.
        """
        evidence = self._exact_call_result_evidence(body, start, end)
        if evidence is None or not evidence[1]:
            return None
        expression = body[start:end].strip()
        call = re.match(r"^st::fn_(?P<target>[0-9A-F]{8})\s*\(", expression)
        if call is None:
            return None
        callee = f"st::fn_{call.group('target')}"
        replacement = (
            f"st::exact_call_result_callee<{evidence[1]}>(&{callee})"
        )
        return replacement + expression[call.end() - 1:]

    def _exact_callsite_abis(
        self, function: Mapping[str, Any]
    ) -> dict[int, tuple[str, str, tuple[str, ...]]]:
        """Read only unanimous exact call-site ABIs exported from Ghidra."""
        by_slot: dict[int, set[str]] = defaultdict(set)
        for comment in function.get("comments", ()):
            for match in EXACT_INDIRECT_CALLSITE_RE.finditer(str(comment)):
                by_slot[int(match.group("slot"), 16)].add(
                    match.group("signature").strip()
                )
        result: dict[int, tuple[str, str, tuple[str, ...]]] = {}
        for slot, signatures in by_slot.items():
            if len(signatures) != 1:
                continue
            parts = next(iter(signatures)).split(";")
            if len(parts) < 2 or parts[0] not in {
                    "__thiscall", "__stdcall", "__cdecl"}:
                continue
            returned = self._serialized_type_expression(parts[1])
            parameters = tuple(
                value for item in parts[2:]
                if (value := self._serialized_type_expression(item)) is not None
            )
            if returned is None or len(parameters) != len(parts) - 2:
                continue
            function_pointer = (
                f"{returned} ({parts[0]} *)"
                f"({', '.join(parameters) if parameters else 'void'})"
            )
            result[slot] = (function_pointer, returned, parameters)
        return result

    def _exact_callsite_abis_by_address(
        self, function: Mapping[str, Any]
    ) -> dict[str, tuple[int, str, str, tuple[str, ...]]]:
        """Return exact instruction-local ABI evidence keyed by machine PC."""
        result: dict[str, tuple[int, str, str, tuple[str, ...]]] = {}
        conflicts: set[str] = set()
        for comment in function.get("comments", ()):
            text = str(comment)
            address_match = re.match(r"(?P<address>[0-9A-Fa-f]{8,16})\b", text)
            signature_match = EXACT_INDIRECT_CALLSITE_RE.search(text)
            if address_match is None or signature_match is None:
                continue
            parts = signature_match.group("signature").strip().split(";")
            if len(parts) < 2 or parts[0] not in {
                    "__thiscall", "__stdcall", "__cdecl"}:
                continue
            returned = self._serialized_type_expression(parts[1])
            parameters = tuple(
                value for item in parts[2:]
                if (value := self._serialized_type_expression(item)) is not None
            )
            if returned is None or len(parameters) != len(parts) - 2:
                continue
            function_pointer = (
                f"{returned} ({parts[0]} *)"
                f"({', '.join(parameters) if parameters else 'void'})"
            )
            address = address_match.group("address").upper()
            value = (
                int(signature_match.group("slot"), 16),
                function_pointer,
                returned,
                parameters,
            )
            if address in result and result[address] != value:
                conflicts.add(address)
            else:
                result[address] = value
        for address in conflicts:
            result.pop(address, None)
        return result

    def _machine_indirect_slots(self, function_address: str) -> dict[str, int]:
        """Read fixed x86 CALL [table + byteOffset] slots by exact call PC."""
        function_address = function_address.upper()
        cached = self.machine_callsite_slots.get(function_address)
        if cached is not None:
            return cached
        result: dict[str, int] = {}
        path = self.corpus / "functions" / function_address / "listing.asm"
        if path.is_file():
            for line in path.read_text(encoding="utf-8").splitlines():
                address_match = re.match(r"(?P<address>[0-9A-Fa-f]{8,16})\s+", line)
                if address_match is None or not re.search(r"\bCALL\b", line):
                    continue
                memory = re.search(
                    r"\[\s*[A-Za-z][A-Za-z0-9]*\s*"
                    r"(?:\+\s*(?P<offset>0[xX][0-9A-Fa-f]+|[0-9]+))?\s*\]",
                    line,
                )
                if memory is None:
                    continue
                result[address_match.group("address").upper()] = int(
                    memory.group("offset") or "0", 0
                )
        self.machine_callsite_slots[function_address] = result
        return result

    def _indirect_vtable_site(
        self, callee: str, declared_types: Mapping[str, str]
    ) -> tuple[int, str, str] | None:
        """Resolve wrapped vtable spelling to (byte slot, receiver, member path).

        When a physical table is shorter than a derived dispatch interface,
        Ghidra prints slot ``N`` as pointer arithmetic over the physical record,
        for example ``vtable[1].vfunc_14``.  The arithmetic is exact because
        both the record length and every named component offset are exported.
        """
        assert self.type_emitter is not None
        match = re.fullmatch(
            r"(?P<base>.+)->vtable"
            r"(?:\[(?P<table_index>0[xX][0-9A-Fa-f]+|[0-9]+)\])?"
            r"(?P<op>->|\.)(?P<member>[A-Za-z_][A-Za-z0-9_]*)"
            r"(?:\[(?P<member_index>0[xX][0-9A-Fa-f]+|[0-9]+)\])?",
            callee.strip(),
        )
        if match is None:
            return None
        vtable_expression = match.group("base").strip() + "->vtable"
        vtable_pointer = self._simple_expression_display(
            vtable_expression, declared_types
        )
        if vtable_pointer is None:
            return None
        table = self.type_emitter.display_pointee_type(vtable_pointer)
        if table is None:
            return None
        table_length = self.type_emitter.display_storage_length(table)
        member_offset = self.type_emitter.display_member_offset(
            table, match.group("member"), False
        )
        member_type = self.type_emitter.display_member_type(
            table, match.group("member"), False
        )
        if table_length is None or member_offset is None or member_type is None:
            return None
        table_index = int(match.group("table_index") or "0", 0)
        slot = table_index * table_length + member_offset
        if match.group("member_index") is not None:
            element = self.type_emitter.display_element_type(member_type)
            element_length = None if element is None else \
                self.type_emitter.display_storage_length(element)
            if element_length is None:
                return None
            slot += int(match.group("member_index"), 0) * element_length
        receiver = match.group("base").strip()
        prefix = receiver + "->"
        if not callee.strip().startswith(prefix):
            return None
        return slot, receiver, callee.strip()[len(prefix):]

    def _indirect_vtable_slot(
        self, callee: str, declared_types: Mapping[str, str]
    ) -> int | None:
        site = self._indirect_vtable_site(callee, declared_types)
        return None if site is None else site[0]

    def _repair_exact_indirect_calls(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
        *,
        register_only: bool = False,
        register_machine_fallback: bool = False,
    ) -> str:
        """Make a proven Ghidra call override visible to the C++ compiler.

        A per-instruction HighFunction override changes decompiler semantics,
        but it cannot change the static type of the physical vtable member in
        the generated header.  Wrap only a callee whose exact computed byte
        slot has one exported override ABI and whose rendered argument count
        agrees with that ABI.  This is source declaration assembly, not a new
        type inference or an error-masking cast.
        """
        body = self._repair_folded_exact_member_calls(
            address, function, body, register_only=register_only
        )
        abis = self._exact_callsite_abis(function)
        address_abis = self._exact_callsite_abis_by_address(function)
        machine_slots = self._machine_indirect_slots(address)
        if not abis and register_only and not register_machine_fallback:
            return body
        declared_types = self._declared_types(function, body)
        pattern = re.compile(
            r"\(\s*\*\s*(?P<callee>[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)"
            r"\s*\)\s*\("
        )
        masked = code_mask(body)
        callsite_markers = [
            (match.start(), match.end(), match.group("address").upper())
            for match in EXACT_CALLSITE_MARKER_RE.finditer(body)
        ]
        consumed_markers: set[int] = set()
        raw_fallback_family_size = len(
            RAW_DUPLICATED_VTABLE_CALL_RE.findall(masked)
        )
        edits: list[tuple[int, int, str, str, str]] = []
        for match in pattern.finditer(masked):
            callee = body[match.start("callee"):match.end("callee")]
            site = self._indirect_vtable_site(callee, declared_types)
            if site is None:
                continue
            slot = site[0]
            abi = None if slot is None else abis.get(slot)
            marker_index = None
            exact_marker_abi = False
            for index in range(len(callsite_markers) - 1, -1, -1):
                marker_start, marker_end, marker_address = callsite_markers[index]
                if marker_end > match.start() or index in consumed_markers:
                    continue
                between = masked[marker_end:match.start()]
                if len(between) > 4096 or ";" in between:
                    break
                address_abi = address_abis.get(marker_address)
                if address_abi is not None:
                    slot = address_abi[0]
                    abi = address_abi[1:]
                    marker_index = index
                    exact_marker_abi = True
                elif marker_address in machine_slots:
                    # The machine offset remains authoritative when Ghidra
                    # renders pointer arithmetic over an incomplete physical
                    # vtable.  Do not borrow a same-numbered ABI from another
                    # receiver in this function; only an independently known
                    # owner/slot wrapper may consume this geometry.
                    slot = machine_slots[marker_address]
                    abi = None
                    marker_index = index
                break
            open_paren = masked.rfind("(", match.start(), match.end())
            parsed = call_argument_spans(masked, open_paren, body)
            if parsed is None:
                continue
            spans, closing = parsed
            if marker_index is not None:
                consumed_markers.add(marker_index)
            receiver = site[1]
            first_argument = body[spans[0][0]:spans[0][1]] if spans else ""
            receiver_display = self._simple_expression_display(
                receiver, declared_types
            )
            wrapper = None
            call_receiver = receiver
            transported_receiver = False
            duplicated_receiver = (
                receiver_display is not None
                and first_argument.strip() == receiver.strip()
            )
            implicit_receiver = (
                abi is not None and receiver_display is not None and
                bool(abi[2]) and len(spans) + 1 == len(abi[2])
            )
            receiver_call = duplicated_receiver or implicit_receiver
            if (abi is not None and receiver_call and (
                    (duplicated_receiver and len(spans) == len(abi[2])) or
                    implicit_receiver)):
                abi_receiver = abi[2][0] if abi[2] else None
                if (abi_receiver is not None and
                        self.type_emitter._display_type_key(abi_receiver) !=
                        self.type_emitter._display_type_key(receiver_display)):
                    # The exact instruction override can expose a narrower
                    # physical receiver than the Listing local which carried
                    # the same unadjusted address.  Reuse only an independently
                    # registered wrapper for that concrete owner/slot and keep
                    # the representation change visible at this call boundary.
                    target_type = self.type_emitter.display_type_expression(
                        abi_receiver
                    )
                    if (target_type is not None and
                            self.type_emitter.display_pointer_kind(
                                abi_receiver) is not None):
                        wrapper = (
                            self.type_emitter.exact_indirect_member_wrapper(
                                receiver_display=abi_receiver,
                                slot=slot,
                                explicit_argument_count=len(spans) - 1,
                            )
                        )
                        if wrapper is not None:
                            call_receiver = (
                                f"st::pointer_boundary_cast<{target_type}>"
                                f"({receiver})"
                            )
                            transported_receiver = True
                else:
                    explicit_count = (
                        len(spans) if implicit_receiver else len(spans) - 1
                    )
                    # A readable folded call may already have registered this
                    # exact owner/slot ABI using the physical member spelling.
                    # Reuse that wrapper before considering the decompiler's
                    # alternate `vtable[index].member` spelling; otherwise the
                    # same slot can look like two competing callees and regress
                    # back to an exact_indirect_callee cast.
                    wrapper = self.type_emitter.exact_indirect_member_wrapper(
                        receiver_display=receiver_display,
                        slot=slot,
                        explicit_argument_count=explicit_count,
                    )
                    if wrapper is None:
                        wrapper = (
                            self.type_emitter.register_exact_indirect_member_wrapper(
                                receiver_display=receiver_display,
                                slot=slot,
                                return_type=abi[1],
                                function_pointer_type=abi[0],
                                parameter_types=abi[2],
                                callee_expression=site[2],
                            )
                        )
            if abi is None and duplicated_receiver:
                wrapper = self.type_emitter.exact_indirect_member_wrapper(
                    receiver_display=receiver_display,
                    slot=slot,
                    explicit_argument_count=len(spans) - 1,
                )
                if (wrapper is None and register_machine_fallback and
                        marker_index is not None and not exact_marker_abi and
                        raw_fallback_family_size <= 32):
                    generic_parameters = (
                        receiver_display,
                        *("undefined4" for _ in spans[1:]),
                    )
                    function_pointer = (
                        "undefined4 (__thiscall *)(" +
                        ", ".join(generic_parameters) + ")"
                    )
                    wrapper = (
                        self.type_emitter.register_exact_indirect_member_wrapper(
                            receiver_display=receiver_display,
                            slot=slot,
                            return_type="undefined4",
                            function_pointer_type=function_pointer,
                            parameter_types=generic_parameters,
                            callee_expression=site[2],
                        )
                    )
                    if wrapper is not None:
                        self.issues.append(Issue(
                            "machine_vtable_member_fallback",
                            f"slot 0x{slot:X}: exact CALLIND PC, duplicated "
                            f"receiver and {len(spans) - 1} machine-word "
                            "stack arguments; semantic argument types unresolved",
                            address,
                        ))
            if register_only:
                continue
            if wrapper is not None:
                argument_spans = spans if implicit_receiver else spans[1:]
                remaining_values = [
                    body[start:end] for start, end in argument_spans
                ]
                if abi is not None:
                    remaining_values = self._exact_member_argument_boundaries(
                        address, slot, remaining_values, abi[2][1:], declared_types
                    )
                remaining = ", ".join(remaining_values)
                replacement = f"{call_receiver}->{wrapper}({remaining})"
                detail = (
                    f"slot 0x{slot:X}: {abi[0]}"
                    if abi is not None
                    else f"slot 0x{slot:X}: propagated unique owner/slot ABI"
                )
                if transported_receiver:
                    detail += (
                        f"; exact receiver transport {receiver_display} -> "
                        f"{abi[2][0]}"
                    )
                edits.append((match.start(), closing + 1, replacement,
                    detail,
                    "exact_indirect_member_call"))
                continue
            if (abi is None and marker_index is not None and not spans and
                    receiver_display is not None):
                callee_display = self._simple_expression_display(
                    callee, declared_types
                )
                line_start = masked.rfind("\n", 0, match.start()) + 1
                statement_only = (
                    not masked[line_start:match.start()].strip() and
                    masked[closing + 1:].lstrip().startswith(";")
                )
                void_storage = (
                    callee_display == "void" or
                    (callee_display is not None and
                     self.type_emitter.display_is_void_pointer(callee_display))
                )
                if (void_storage and statement_only):
                    replacement = (
                        f"STStructuralVirtualCall<void>({receiver}, 0x{slot:X})"
                    )
                    edits.append((
                        match.start(), closing + 1, replacement,
                        f"slot 0x{slot:X}: exact statement-only CALLIND over "
                        "a void-typed physical member; return is ignored",
                        "exact_structural_void_call",
                    ))
                    continue
            if abi is None or len(spans) != len(abi[2]):
                continue
            replacement = f"st::exact_indirect_callee<{abi[0]}>({callee})"
            edits.append((match.start("callee"), match.end("callee"), replacement,
                f"slot 0x{slot:X}: {abi[0]}",
                "exact_indirect_call_declaration"))
        member_calls = 0
        for start, end, replacement, detail, kind in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(kind, detail, address))
            if kind == "exact_indirect_member_call":
                member_calls += 1
        self.stats["exact_indirect_call_declarations"] += len(edits)
        self.stats["exact_indirect_member_calls"] += member_calls
        return body

    def _exact_member_argument_boundaries(
        self,
        address: str,
        slot: int,
        arguments: Sequence[str],
        parameter_types: Sequence[str],
        declared_types: Mapping[str, str],
    ) -> list[str]:
        """Express only proven pointer/word transports at an exact slot ABI.

        Machine-only callsite recovery deliberately keeps semantic pointer types
        out of a physical signature and uses a neutral 32-bit word instead.  C++
        does not implicitly convert an object pointer to that word, although the
        original x86 call transports the same four bytes.  Reuse the ordinary
        boundary classifier here instead of weakening the wrapper declaration or
        inserting an unchecked C cast.
        """
        result = list(arguments)
        if len(result) != len(parameter_types):
            return result
        for index, (expression, target_display) in enumerate(
                zip(arguments, parameter_types)):
            source = self._boundary_expression(expression, declared_types)
            if source is None:
                continue
            converted = self._boundary_replacement(
                target_display, source, expression
            )
            if converted is None:
                continue
            replacement, transition = converted
            result[index] = replacement
            self.issues.append(Issue(
                "exact_indirect_argument_boundary",
                f"slot 0x{slot:X} argument {index + 1}: {transition}",
                address,
            ))
            self.stats["exact_indirect_argument_boundaries"] += 1
        return result

    def _repair_physical_member_call_boundaries(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Express x86 word/pointer transports on already folded members.

        ``STDecompExport`` can turn an exact duplicated-receiver dispatch into
        ``object->slot_N(...)`` before the source generator runs.  Its physical
        wrapper declaration remains authoritative, so apply the same exact
        boundary classifier used for raw indirect calls to the fixed prefix of
        that wrapper.  Variadic tail arguments remain untouched.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        pattern = re.compile(
            r"(?<![A-Za-z0-9_])(?P<receiver>[A-Za-z_][A-Za-z0-9_]*)"
            r"->(?P<member>(?:slot|vfunc)_[0-9A-Fa-f]+)\s*\("
        )
        for _ in range(4):
            masked = code_mask(body)
            edits: list[tuple[int, int, str, str]] = []
            for match in pattern.finditer(masked):
                receiver_display = self._simple_expression_display(
                    match.group("receiver"), declared
                )
                if receiver_display is None:
                    continue
                opening = masked.rfind("(", match.start(), match.end())
                parsed = call_argument_spans(masked, opening, body)
                if parsed is None:
                    continue
                spans, _ = parsed
                wrapper = self.type_emitter.physical_member_wrapper(
                    receiver_display, match.group("member"), len(spans)
                )
                if wrapper is None:
                    continue
                for ordinal, ((start, end), target_display) in enumerate(
                        zip(spans, wrapper.parameter_types), 1):
                    source = self._boundary_expression(
                        body[start:end], declared
                    )
                    if source is None:
                        continue
                    converted = self._boundary_replacement(
                        target_display, source, body[start:end]
                    )
                    if converted is None:
                        continue
                    replacement, transition = converted
                    edits.append((
                        start, end, replacement,
                        f"{wrapper.owner_name}::{wrapper.member_name} "
                        f"argument {ordinal}: {transition}",
                    ))
            selected: list[tuple[int, int, str, str]] = []
            for edit in sorted(edits, key=lambda item: (item[1] - item[0], item[0])):
                if any(edit[0] < old[1] and edit[1] > old[0]
                       for old in selected):
                    continue
                selected.append(edit)
            if not selected:
                break
            for start, end, replacement, detail in sorted(selected, reverse=True):
                body = body[:start] + replacement + body[end:]
                self.issues.append(Issue(
                    "physical_member_argument_boundary", detail, address
                ))
            self.stats["physical_member_argument_boundaries"] += len(selected)
        return body

    def _repair_folded_exact_member_calls(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
        *,
        register_only: bool,
    ) -> str:
        """Back a Ghidra-folded ``receiver->slot_N()`` with a real wrapper.

        STDecompExport intentionally folds only an exact duplicated receiver.
        The physical member can nevertheless remain ``void *`` in the shared
        declaration.  Recreate the non-virtual wrapper from the unanimous
        instruction overrides for that slot; never emit a C++ member call for
        an unproven slot or mismatched explicit arity.
        """
        abis = self._exact_callsite_abis(function)
        if not abis:
            return body
        declared_types = self._declared_types(function, body)
        pattern = re.compile(
            r"(?<![A-Za-z0-9_])(?P<receiver>[A-Za-z_][A-Za-z0-9_]*)"
            r"->(?P<member>(?:slot|vfunc)_(?P<slot>[0-9A-Fa-f]+))\s*\("
        )
        masked = code_mask(body)
        edits: list[tuple[int, int, str, str]] = []
        for match in pattern.finditer(masked):
            slot = int(match.group("slot"), 16)
            abi = abis.get(slot)
            if abi is None or not abi[2]:
                continue
            open_paren = masked.rfind("(", match.start(), match.end())
            parsed = call_argument_spans(masked, open_paren, body)
            if parsed is None:
                continue
            spans, closing = parsed
            if len(spans) != len(abi[2]) - 1:
                continue
            receiver = match.group("receiver")
            receiver_display = self._simple_expression_display(
                receiver, declared_types
            )
            if receiver_display is None:
                continue
            callee_expression = self.type_emitter.physical_vtable_callee_expression(
                receiver_display, slot
            )
            if callee_expression is None:
                continue
            wrapper = self.type_emitter.register_exact_indirect_member_wrapper(
                receiver_display=receiver_display,
                slot=slot,
                return_type=abi[1],
                function_pointer_type=abi[0],
                parameter_types=abi[2],
                callee_expression=callee_expression,
            )
            if register_only or wrapper is None:
                continue
            arguments = self._exact_member_argument_boundaries(
                address,
                slot,
                [body[start:end] for start, end in spans],
                abi[2][1:],
                declared_types,
            )
            edits.append((match.start(), closing + 1,
                f"{receiver}->{wrapper}({', '.join(arguments)})",
                f"slot 0x{slot:X}: folded duplicated receiver"))
        if register_only:
            return body
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_indirect_member_call", detail, address
            ))
        self.stats["exact_indirect_call_declarations"] += len(edits)
        self.stats["exact_indirect_member_calls"] += len(edits)
        return body

    def _repair_commuted_byte_subscripts(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Restore pointer/index order for an exact byte-address addition.

        x86 p-code represents ``bytePointer + byteOffset`` as commutative
        INT_ADD.  With a reused Listing local Ghidra can print the equivalent
        but ill-formed ``offset[(int)bytePointer]``.  Swapping the operands is
        exact only for a one-byte pointee; the helper retains the target's
        32-bit machine-word interpretation under a 64-bit host compiler.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        pattern = re.compile(
            r"\b(?P<base>[A-Za-z_][A-Za-z0-9_]*)\s*"
            r"\[\s*\(\s*(?:int|uint|undefined4)\s*\)\s*"
            r"(?P<pointer>[A-Za-z_][A-Za-z0-9_]*)\s*\]"
        )
        edits: list[tuple[int, int, str]] = []
        for match in pattern.finditer(code_mask(body)):
            base = match.group("base")
            pointer = match.group("pointer")
            pointer_display = declared.get(pointer)
            base_display = declared.get(base)
            if not pointer_display or not base_display:
                continue
            pointee = self.type_emitter.display_pointee_type(pointer_display)
            if re.sub(r"\s+", "", pointee or "") not in {
                    "char", "byte", "uchar", "undefined", "undefined1"}:
                continue
            if not (
                self.type_emitter.display_machine_word_scalar(base_display) or
                self.type_emitter.display_pointer_kind(base_display) is not None
            ):
                continue
            replacement = (
                f"{pointer}[st::machine_word_boundary_cast<uint>({base})]"
            )
            edits.append((match.start(), match.end(), replacement))
            self.issues.append(Issue(
                "commuted_byte_subscript",
                f"{base}[(int){pointer}] -> exact byte-pointer plus machine-word offset",
                address,
            ))
        for start, end, replacement in reversed(edits):
            body = body[:start] + replacement + body[end:]
        if edits:
            self.stats["commuted_byte_subscript_repairs"] += len(edits)
        return body

    def _repair_grid_index_boundaries(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Keep pointer-typed SSA lifetimes out of the grid helper template.

        ``STGridAt3D`` is an exact affine-address presentation helper whose
        three coordinates are x86 machine-word values.  A Listing local may
        nevertheless retain an unrelated pointer type from another lifetime;
        passing that value directly defers the error into the shared template
        and loses the stable function address.  Apply the ordinary exact
        pointer-to-word boundary at the callsite and nowhere else.
        """
        declared = self._declared_types(function, body)
        pattern = re.compile(r"\bSTGridAt3D\s*\(")
        masked = code_mask(body)
        edits: list[tuple[int, int, str, str]] = []
        for match in pattern.finditer(masked):
            opening = masked.find("(", match.start(), match.end())
            parsed = call_argument_spans(masked, opening, body)
            if parsed is None:
                continue
            spans, _ = parsed
            if len(spans) != 4:
                continue
            for ordinal, (start, end) in enumerate(spans[1:], 1):
                source = self._boundary_expression(body[start:end], declared)
                if source is None or not source.kind.endswith("_pointer"):
                    continue
                converted = self._boundary_replacement(
                    "int", source, body[start:end]
                )
                if converted is None:
                    continue
                replacement, transition = converted
                edits.append((
                    start, end, replacement,
                    f"coordinate {ordinal}: {transition}",
                ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "grid_index_word_boundary", detail, address
            ))
        self.stats["grid_index_word_boundaries"] += len(edits)
        return body

    def _repair_message_arg_facets(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Replace invalid C union casts with one exact STMessageArg facet.

        STMessageArg is a four-byte discriminator-dependent union.  C permits
        scalar-to-union casts which C++ rejects, but selecting the physical
        pointer, signed-word, or unsigned/raw-word member is source-compatible
        and does not claim one meaning for every message ID.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        pattern = re.compile(
            r"\(\s*STMessageArg\s*\)\s*"
            r"(?P<expression>"
            r"(?:nullptr|-?0x[0-9A-Fa-f]+|-?[0-9]+|"
            r"[A-Za-z_][A-Za-z0-9_]*)"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\r\n]+\])*)"
        )
        repairs: Counter[str] = Counter()

        def replacement(match: re.Match[str]) -> str:
            expression = match.group("expression")
            source = self._boundary_expression(expression, declared)
            if source is not None and source.kind.endswith("_pointer"):
                repairs["ptr"] += 1
                return f"st::message_arg_pointer({expression})"
            display = "" if source is None else re.sub(
                r"\s+", "", source.display_type
            ).lower()
            if (re.fullmatch(r"(?:signed)?(?:char|short|int|long|longlong)", display) or
                    re.fullmatch(r"int(?:8|16|32)_t", display) or
                    expression.startswith("-")):
                repairs["i32"] += 1
                return (
                    "st::message_arg_i32(static_cast<int32_t>(" +
                    expression + "))"
                )
            repairs["u32"] += 1
            return (
                "st::message_arg_u32(static_cast<uint32_t>(" +
                expression + "))"
            )

        rewritten, count = pattern.subn(replacement, body)
        if count:
            detail = ", ".join(
                f"{facet}={repairs[facet]}" for facet in sorted(repairs)
            )
            self.issues.append(Issue(
                "message_arg_exact_facet",
                f"{count} scalar/pointer union construction(s): {detail}",
                address,
            ))
        self.stats["message_arg_exact_facets"] += count
        return rewritten

    def _repair_message_arg_pointer_views(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Select the pointer facet when a message word is dereferenced.

        ``STMessageArg`` deliberately remains an ID-dependent four-byte union.
        Ghidra can copy it through the integer facet and later print
        ``*arg.i32`` or ``*(T *)(arg.u32 + offset)``.  The dereference itself is
        exact evidence that this one use consumes the pointer facet; it is not
        evidence that every message with the same envelope carries a pointer.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        expression = (
            r"[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\r\n]+\])*"
        )
        edits: list[tuple[int, int, str, str]] = []
        offset_view = re.compile(
            rf"\*\s*\(\s*(?P<target>(?:const\s+)?[A-Za-z_]"
            rf"[A-Za-z0-9_:]*(?:\s*\*+)?)\s*\)\s*\(\s*"
            rf"(?P<arg>{expression})\.u32\s*\+\s*"
            rf"(?P<offset>-?(?:0x[0-9A-Fa-f]+|[0-9]+))\s*\)"
        )
        for match in offset_view.finditer(code_mask(body)):
            arg = body[match.start("arg"):match.end("arg")]
            if self._simple_expression_display(arg, declared) != "STMessageArg":
                continue
            target_display = re.sub(
                r"\s+", " ", match.group("target")
            ).strip()
            value_display = self.type_emitter.display_pointee_type(target_display)
            target_type = self.type_emitter.display_type_expression(target_display)
            if value_display is None or target_type is None:
                continue
            offset = match.group("offset")
            edits.append((
                match.start(), match.end(),
                f"*reinterpret_cast<{target_type}>("
                f"reinterpret_cast<byte *>({arg}.ptr) + {offset})",
                f"{arg}.u32+{offset} dereferenced through STMessageArg.ptr",
            ))

        direct = re.compile(
            rf"\*\s*(?P<arg>{expression})\.i32\b"
        )
        for match in direct.finditer(code_mask(body)):
            if any(match.start() < old_end and match.end() > old_start
                   for old_start, old_end, _, _ in edits):
                continue
            arg = body[match.start("arg"):match.end("arg")]
            if self._simple_expression_display(arg, declared) != "STMessageArg":
                continue
            edits.append((
                match.start(), match.end(),
                f"*static_cast<int *>({arg}.ptr)",
                f"{arg}.i32 dereferenced through STMessageArg.ptr",
            ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "message_arg_pointer_view", detail, address
            ))
        self.stats["message_arg_pointer_views"] += len(edits)
        return body

    def _repair_exact_storage_casts(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Translate C aggregate casts into explicit equal-width storage views.

        Ghidra emits C casts both for a four-byte union facet and for equal-size
        POD records such as the Winsock ``in_addr`` transport.  Neither form is
        a C++ conversion.  The datatype graph already proves both exact widths,
        so select a named scalar member when one exists, otherwise use a
        byte-preserving bit copy.  This is source assembly only and never merges
        the two recovered datatype identities.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        operand = (
            r"[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\r\n]+\])*"
        )
        grouped_operand = (
            r"\([^(),;\r\n]+\)"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\r\n]+\])+"
        )
        pattern = re.compile(
            rf"\(\s*(?P<target>(?:const\s+)?[A-Za-z_]"
            rf"[A-Za-z0-9_:]*)\s*\)\s*(?P<value>{grouped_operand}|{operand}|"
            rf"-?(?:0x[0-9A-Fa-f]+|[0-9]+))"
        )
        edits: list[tuple[int, int, str, str]] = []
        for match in pattern.finditer(code_mask(body)):
            target = match.group("target").strip()
            value_text = body[match.start("value"):match.end("value")]
            target_type = self.type_emitter.display_type_expression(target)
            if target_type is None:
                continue
            if re.fullmatch(r"-?(?:0x[0-9A-Fa-f]+|[0-9]+)", value_text):
                target_length = self.type_emitter.display_record_length(target)
                literal_storage = {
                    1: "uint8_t", 2: "uint16_t", 4: "uint32_t",
                    8: "uint64_t",
                }.get(target_length or 0)
                if literal_storage is not None:
                    edits.append((
                        match.start(), match.end(),
                        f"st::storage_bit_cast<{target_type}>("
                        f"static_cast<{literal_storage}>({value_text}))",
                        f"{target_length}-byte literal storage -> {target}",
                    ))
                continue
            source_display = self._simple_expression_display(
                value_text, declared, allow_record_name_fallback=True
            )
            if source_display is None:
                continue
            source = self._boundary_value_for_display(source_display)
            if source.kind == "four_byte_record" and \
                    self.type_emitter.display_machine_word_scalar(target):
                member = f"({value_text}).{source.storage_member}"
                replacement = member if re.fullmatch(
                    r"(?:undefined4|dword|uint|uint32_t)",
                    re.sub(r"\s+", "", target_type),
                ) else f"static_cast<{target_type}>({member})"
                edits.append((
                    match.start(), match.end(), replacement,
                    f"{source_display}.{source.storage_member} -> {target}",
                ))
                continue
            target_length = self.type_emitter.display_record_length(target)
            source_length = self.type_emitter.display_storage_length(source_display)
            if (target_length is None or source_length is None or
                    target_length <= 0 or target_length != source_length or
                    self.type_emitter.display_pointer_kind(source_display) is not None):
                continue
            replacement = (
                f"st::storage_bit_cast<{target_type}>({value_text})"
            )
            edits.append((
                match.start(), match.end(), replacement,
                f"equal-width POD storage {source_display} -> {target}",
            ))
        masked = code_mask(body)
        grouped_cast = re.compile(
            r"\(\s*(?P<target>(?:const\s+)?[A-Za-z_]"
            r"[A-Za-z0-9_:]*)\s*\)\s*(?P<open>\()"
        )
        for match in grouped_cast.finditer(masked):
            opening = match.start("open")
            closing = self._matching_delimiter(masked, opening, "(", ")")
            if closing is None:
                continue
            # In ``(uint)(record).member`` the postfix member belongs to the
            # complete cast operand.  Consume that exact postfix chain so the
            # storage helper wraps the member value, never the enclosing
            # record.  This also covers nested Winsock aggregate facets which
            # are too rich for the intentionally small first-pass regex.
            value_end = closing + 1
            postfix = re.match(
                r"(?:[ \t]*(?:(?:\.|->)[ \t]*"
                r"[A-Za-z_][A-Za-z0-9_]*|\[[^\]\r\n]+\]))*",
                masked[value_end:],
            )
            if postfix is not None:
                value_end += postfix.end()
            if any(match.start() < old_end and value_end > old_start
                    for old_start, old_end, _, _ in edits):
                continue
            target = match.group("target").strip()
            target_type = self.type_emitter.display_type_expression(target)
            target_length = self.type_emitter.display_record_length(target)
            target_scalar_width = self.type_emitter.display_integer_scalar_width(
                target
            )
            if (target_type is None or
                    target_length != 4 and target_scalar_width != 4):
                continue
            value_text = body[opening:value_end].strip()
            render_value = value_text
            while render_value.startswith("("):
                render_closing = self._matching_delimiter(
                    render_value, 0, "(", ")"
                )
                if render_closing != len(render_value) - 1:
                    break
                render_value = render_value[1:render_closing].strip()
            source_display = self._simple_expression_display(
                value_text, declared, allow_record_name_fallback=True
            )
            source = (
                self._boundary_value_for_display(source_display)
                if source_display is not None else
                self._boundary_expression(value_text, declared)
            )
            if source is None:
                # Ghidra's explicit cast to one exact four-byte record is
                # sufficient to identify the destination representation even
                # when a nested CONCAT/arithmetic expression is too rich for
                # the deliberately small boundary parser.  Restrict this
                # fallback to side-effect-free scalar syntax so a call,
                # assignment, comma expression, or conditional is never
                # hidden inside a storage helper.
                safe_value = code_mask(value_text)
                calls = re.findall(
                    r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", safe_value
                )
                safe_calls = all(
                    re.fullmatch(r"CONCAT[1-8][1-8]", name)
                    for name in calls
                )
                if (target_length == 4 and
                        safe_calls and
                        re.fullmatch(
                            r"[\s,+\-*/%<>&|^~().\[\]0-9A-Za-z_]+",
                            safe_value,
                        ) and
                        not re.search(r"(?<![=!<>])=(?!=)", safe_value)):
                    edits.append((
                        match.start(), value_end,
                        f"st::storage_bit_cast<{target_type}>("
                        f"static_cast<uint32_t>({render_value}))",
                        f"four-byte arithmetic storage -> {target}",
                    ))
                continue
            if source.kind.endswith("_pointer"):
                continue
            if source.kind == "four_byte_record" and target_scalar_width == 4:
                edits.append((
                    match.start(), value_end,
                    f"st::storage_bit_cast<{target_type}>({render_value})",
                    f"four-byte POD storage {source.display_type} -> {target}",
                ))
                continue
            source_record_length = self.type_emitter.display_record_length(
                source.display_type
            )
            if (target_length is not None and
                    source_record_length == target_length and
                    not source.kind.endswith("_pointer")):
                edits.append((
                    match.start(), value_end,
                    f"st::storage_bit_cast<{target_type}>({render_value})",
                    f"equal-width POD storage {source.display_type} -> {target}",
                ))
                continue
            if (target_scalar_width == 4 and
                    source_record_length is not None and
                    source_record_length > target_scalar_width):
                # Ghidra's C printer uses ``(uint32_t)(record)`` for the low
                # machine word of a wider packed local.  C++ cannot convert a
                # record to an integer, and bit-casting the complete record is
                # impossible when its extent is larger than the destination.
                # Preserve the exact little-endian storage operation instead
                # of guessing a semantic member or truncating the datatype.
                edits.append((
                    match.start(), value_end,
                    f"static_cast<{target_type}>(STPiece<0,4>({render_value}))",
                    f"low four-byte POD view {source.display_type} -> {target}",
                ))
                continue
            source_width = self.type_emitter.display_integer_scalar_width(
                source.display_type
            )
            if source_width is None or source_width > 4:
                continue
            replacement = (
                f"st::storage_bit_cast<{target_type}>("
                f"static_cast<uint32_t>({render_value}))"
            )
            edits.append((
                match.start(), value_end, replacement,
                f"four-byte arithmetic storage {source.display_type} -> {target}",
            ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_storage_bit_cast", detail, address
            ))
        self.stats["exact_storage_bit_casts"] += len(edits)
        return body

    def _repair_cancelled_unary_negation(self, address: str, body: str) -> str:
        """Fold Ghidra's ``--(rvalue)`` spelling for two x87 FCHS operations.

        Prefix decrement is impossible on an arithmetic rvalue in both C and
        C++.  In this corpus the only emitted instances are the decompiler's
        tokenization of two consecutive unary negations.  Require a complete
        parenthesized expression with an arithmetic operator so a real
        ``--(lvalue)`` can never be touched.
        """
        masked = code_mask(body)
        edits: list[tuple[int, int]] = []
        for match in re.finditer(r"--(?P<open>\()", masked):
            opening = match.start("open")
            closing = self._matching_delimiter(masked, opening, "(", ")")
            if closing is None:
                continue
            expression = masked[opening + 1:closing]
            if not re.search(r"[+\-*/]", expression):
                continue
            edits.append((match.start(), opening))
        for start, end in reversed(edits):
            body = body[:start] + body[end:]
            self.issues.append(Issue(
                "cancelled_unary_negation", "two unary negations cancel", address
            ))
        self.stats["cancelled_unary_negations"] += len(edits)
        return body

    def _repair_raw_global_pointer_uses(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Make unresolved four-byte global pointer storage expressible.

        This does not promote the global in Ghidra.  It is an exact ILP32
        storage view at the use site and leaves the address in the stable audit
        queue until producer/consumer evidence proves a persistent pointee.
        """
        assert self.type_emitter is not None
        generic_globals = {
            name: display for name, display in self.global_display_types.items()
            if self.type_emitter.display_machine_word_scalar(display)
        }
        # Ghidra prefixes one underscore when a label overlaps another image
        # datum.  It is still the same exported machine-word storage identity.
        for name, display in tuple(generic_globals.items()):
            if name.startswith("DAT_"):
                generic_globals.setdefault("_" + name, display)
        if not generic_globals:
            return body
        names = "|".join(sorted(map(re.escape, generic_globals), key=len,
                                  reverse=True))
        masked = code_mask(body)
        edits: list[tuple[int, int, str, str]] = []
        callback = re.compile(
            rf"\(\s*\*\s*(?P<name>{names})\s*\)(?=\s*\()"
        )
        for match in callback.finditer(masked):
            name = match.group("name")
            edits.append((
                match.start(), match.end(),
                f"(*st::storage_bit_cast<code *>({name}))",
                f"callback stored in unresolved global {name}",
            ))

        # A neutral global word can have one exact consumer-local pointer view
        # even while the corpus lacks enough producer/caller evidence to mutate
        # the Program datum.  Recover that view only from an assignment into an
        # already declared pointer local.  Every such assignment in this body
        # must agree; the view remains use-site-only and therefore cannot merge
        # records or assert a public global type.
        declared = self._declared_types(function, body)
        candidate_views: dict[str, set[str]] = defaultdict(set)
        assignment = re.compile(
            rf"(?m)^\s*(?P<local>[A-Za-z_][A-Za-z0-9_]*)\s*=\s*"
            rf"(?P<global>{names})\b"
            rf"(?P<tail>\s*[+-]\s*[^;\r\n]+)?\s*;"
        )
        for match in assignment.finditer(masked):
            display = declared.get(match.group("local"))
            if not display or self.type_emitter.display_pointer_kind(display) is None:
                continue
            if self.type_emitter.display_is_void_pointer(display):
                continue
            if self.type_emitter.display_type_expression(display) is None:
                continue
            candidate_views[match.group("global")].add(display)

        global_assignment = re.compile(
            rf"(?m)^\s*(?P<global>{names})\s*=\s*"
            rf"(?P<rhs>[^;\r\n]+)\s*;"
        )
        for match in global_assignment.finditer(masked):
            rhs = body[match.start("rhs"):match.end("rhs")].strip()
            source = self._boundary_expression(rhs, declared)
            if (source is None or source.kind == "null_pointer" or
                    not source.kind.endswith("_pointer")):
                continue
            if self.type_emitter.display_is_void_pointer(source.display_type):
                continue
            if self.type_emitter.display_type_expression(
                    source.display_type) is None:
                continue
            candidate_views[match.group("global")].add(source.display_type)

        for name, displays in sorted(candidate_views.items()):
            if len(displays) != 1:
                continue
            display = next(iter(displays))
            type_expression = self.type_emitter.display_type_expression(display)
            if type_expression is None:
                continue
            view = f"st::storage_bit_cast<{type_expression}>({name})"
            claimed: list[tuple[int, int, str]] = []

            field_projection = re.compile(
                rf"\*\s*\(\s*(?P<cast>(?:const\s+)?[A-Za-z_]"
                rf"[A-Za-z0-9_:]*(?:\s*\*+)?)\s*\)\s*&\s*"
                rf"{re.escape(name)}\s*->\s*field_(?:0x)?"
                rf"(?P<offset>[0-9A-Fa-f]+)"
            )
            for match in field_projection.finditer(masked):
                value_display = self.type_emitter.display_pointee_type(
                    re.sub(r"\s+", " ", match.group("cast")).strip()
                )
                value_type = None if value_display is None else \
                    self.type_emitter.display_type_expression(value_display)
                if value_type is None:
                    continue
                claimed.append((
                    match.start(), match.end(),
                    f"STField<{value_type}>({view},0x{int(match.group('offset'), 16):X})",
                ))
            use_patterns = (
                re.compile(
                    rf"\b{re.escape(name)}\b(?=\s*->\s*"
                    rf"(?P<member>[A-Za-z_][A-Za-z0-9_]*))"
                ),
                re.compile(rf"(?P<star>\*)\s*{re.escape(name)}\b"),
            )
            for index, use_pattern in enumerate(use_patterns):
                for match in use_pattern.finditer(masked):
                    start, end = match.span()
                    if any(start < old_end and end > old_start
                           for old_start, old_end, _ in claimed):
                        continue
                    if index == 0:
                        member = match.group("member")
                        if self.type_emitter.display_member_type(
                                display, member, True, False) is None:
                            continue
                        replacement = view
                    else:
                        # Preserve the unary dereference outside the inserted
                        # pointer view.  Multiplication is excluded because the
                        # token immediately following '*' is an exact global
                        # identifier and this pass runs only after declarations.
                        replacement = "*" + view
                    claimed.append((start, end, replacement))
            for start, end, replacement in claimed:
                edits.append((
                    start, end, replacement,
                    f"unique consumer-local {display} view of {name}",
                ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue("global_pointer_storage_view", detail, address))
        self.stats["global_pointer_storage_views"] += len(edits)
        return body

    def _repair_exact_return_boundaries(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Apply the same exact storage conversion to a return boundary."""
        target_display = self._function_result_type(function)
        if not target_display or target_display == "void":
            return body
        declared = self._declared_types(function, body)
        masked = code_mask(body)
        pattern = re.compile(r"\breturn[ \t]+(?P<value>[^;\r\n]+)(?P<semi>;)")
        edits: list[tuple[int, int, str, str]] = []
        for match in pattern.finditer(masked):
            expression = body[match.start("value"):match.end("value")]
            source = self._boundary_expression(expression, declared)
            if source is None:
                continue
            converted = self._boundary_replacement(
                target_display, source, expression
            )
            if converted is None:
                continue
            replacement, transition = converted
            edits.append((match.start("value"), match.end("value"), replacement,
                          f"return: {transition}"))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue("exact_return_boundary", detail, address))
        self.stats["exact_return_boundaries"] += len(edits)
        return body

    def _repair_void_call_assignments(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Discard a phantom assignment from a proven void direct call.

        Ghidra may merge the post-call EAX clobber into a local and render an
        assignment even though the physical callee has a concrete void ABI.
        Only a whole standalone assignment statement is reduced; nested/comma
        expressions and non-void/unsized callees remain untouched.
        """
        masked = code_mask(body)
        line = re.compile(
            r"(?m)^(?P<indent>[ \t]*)(?P<lhs>[A-Za-z_][A-Za-z0-9_]*)"
            r"[ \t]*=[ \t]*(?P<cast>\([^;\n]+?\)[ \t]*)?"
            r"(?P<call>st::fn_(?P<target>[0-9A-F]{8})\s*\([^;\n]*\))"
            r"[ \t]*;"
        )
        edits: list[tuple[int, int, str, str]] = []
        for match in line.finditer(masked):
            target = self.function_by_address.get(match.group("target"))
            if target is None or self._function_result_type(target) != "void":
                continue
            call = body[match.start("call"):match.end("call")]
            replacement = match.group("indent") + call + ";"
            edits.append((match.start(), match.end(), replacement,
                          f"discard phantom void result assigned to {match.group('lhs')}"))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue("void_call_phantom_assignment", detail, address))
        self.stats["void_call_phantom_assignments"] += len(edits)
        return body

    def _repair_pointer_float_storage_views(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Expose exact 32-bit pointer/float SSA storage reuse to C++.

        Ghidra can keep one Listing local pointer-typed after the compiler has
        reused the same four bytes as an x87 ``float`` value (or conversely).
        C accepted the resulting casts as representation conversions; C++ does
        not.  A byte-preserving four-byte view is the only fact available here:
        it neither changes the Program datatype nor claims a numeric
        pointer/float conversion.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        simple = (
            r"[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\r\n]+\])*"
        )
        masked = code_mask(body)
        edits: list[tuple[int, int, str, str]] = []

        pointer_to_float = re.compile(
            rf"\(\s*float\s*\)\s*(?P<value>{simple})"
        )
        for match in pointer_to_float.finditer(masked):
            if masked[match.end():].lstrip().startswith("("):
                continue
            value_text = body[match.start("value"):match.end("value")]
            value = self._boundary_expression(value_text, declared)
            if value is None or not value.kind.endswith("_pointer"):
                continue
            edits.append((
                match.start(), match.end(),
                f"st::storage_bit_cast<float>({value_text})",
                f"pointer bits {value.display_type} -> float",
            ))

        float_to_pointer = re.compile(
            rf"\(\s*(?P<target>(?:const\s+)?[A-Za-z_]"
            rf"[A-Za-z0-9_:]*\s*\*+)\s*\)\s*(?P<value>{simple})"
        )
        for match in float_to_pointer.finditer(masked):
            if any(match.start() < end and match.end() > start
                    for start, end, _, _ in edits):
                continue
            value_text = body[match.start("value"):match.end("value")]
            value_display = self._simple_expression_display(
                value_text, declared, allow_record_name_fallback=True
            )
            if re.sub(r"\s+", "", value_display or "") != "float":
                continue
            target = match.group("target").strip()
            target_type = self.type_emitter.display_type_expression(target)
            if target_type is None or self.type_emitter.display_pointer_kind(
                    target) is None:
                continue
            edits.append((
                match.start(), match.end(),
                f"st::storage_bit_cast<{target_type}>({value_text})",
                f"float bits -> pointer storage {target}",
            ))

        # A complete parenthesized float expression may occupy the same four
        # physical bytes as a later pointer lifetime.  The simple matcher above
        # deliberately cannot consume arithmetic.  Accept it only when every
        # identifier/member leaf is independently typed as float and the
        # expression contains no call, assignment, comma, or conditional.
        pointer_cast = re.compile(
            r"\(\s*(?P<target>(?:const\s+)?[A-Za-z_]"
            r"[A-Za-z0-9_:]*\s*\*+)\s*\)\s*\("
        )
        for match in pointer_cast.finditer(masked):
            if any(match.start() < end and match.end() > start
                    for start, end, _, _ in edits):
                continue
            opening = masked.rfind("(", match.start(), match.end())
            closing = self._matching_delimiter(masked, opening, "(", ")")
            if closing is None:
                continue
            expression = body[opening + 1:closing].strip()
            if not re.fullmatch(r"[\s+\-*/().0-9A-Za-z_>]+", expression) or \
                    re.search(r"\b[A-Za-z_][A-Za-z0-9_]*\s*\(", expression):
                continue
            leaves = re.findall(
                r"[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*)*",
                expression,
            )
            if not leaves:
                continue
            displays = [
                self._simple_expression_display(
                    leaf, declared, allow_record_name_fallback=True
                )
                for leaf in leaves
            ]
            if any(re.sub(r"\s+", "", display or "") not in
                   {"float", "double", "float10"} for display in displays):
                continue
            target = match.group("target").strip()
            target_type = self.type_emitter.display_type_expression(target)
            if target_type is None or self.type_emitter.display_pointer_kind(
                    target) is None:
                continue
            edits.append((
                match.start(), closing + 1,
                f"st::storage_bit_cast<{target_type}>(static_cast<float>("
                f"{expression}))",
                f"four-byte floating expression -> pointer storage {target}",
            ))

        # STPiece<0,4> is the exact little-endian four-byte view of an
        # overlapping aggregate.  Its proxy is not itself a pointer and a C
        # cast therefore fails in C++; first materialize the proven word, then
        # expose the address-valued lifetime.  Other offsets/widths stay raw.
        piece_to_pointer = re.compile(
            r"\(\s*(?P<target>(?:const\s+)?[A-Za-z_]"
            r"[A-Za-z0-9_:]*\s*\*+)\s*\)\s*"
            r"(?P<piece>STPiece\s*<\s*0\s*,\s*4\s*>\s*\([^;\r\n]+?\))"
        )
        for match in piece_to_pointer.finditer(masked):
            if any(match.start() < end and match.end() > start
                    for start, end, _, _ in edits):
                continue
            target = match.group("target").strip()
            target_type = self.type_emitter.display_type_expression(target)
            if target_type is None or self.type_emitter.display_pointer_kind(
                    target) is None:
                continue
            piece = body[match.start("piece"):match.end("piece")]
            edits.append((
                match.start(), match.end(),
                f"reinterpret_cast<{target_type}>(static_cast<uintptr_t>("
                f"static_cast<uint32_t>({piece})))",
                f"exact low-word aggregate piece -> pointer storage {target}",
            ))

        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_pointer_float_storage_view", detail, address
            ))
        self.stats["exact_pointer_float_storage_views"] += len(edits)
        return body

    def _materialize_opaque_decompiler_storage(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Make unresolved High/p-code storage explicit instead of undeclared.

        Low-address ``uRam``/``pARam`` tokens, ``unique0x`` and synthetic
        register names are not recovered globals.  They describe storage which
        Ghidra could not attach to a Listing symbol.  A deterministic local
        keeps the source parseable while an audit row preserves the unresolved
        recovery obligation; no owner or semantic field is invented.
        """
        masked = code_mask(body)
        declared = self._declared_types(function, body)
        names = sorted({
            match.group("name")
            for match in OPAQUE_DECOMPILER_STORAGE_RE.finditer(masked)
            if match.group("name") not in declared
        })
        if not names:
            return body
        replacements: dict[str, str] = {
            name: safe_identifier("st_unresolved_" + name, "storage")
            for name in names
        }
        declarations: list[str] = []
        for name in names:
            display = ""
            assignment = re.compile(
                rf"(?m)^\s*(?P<lhs>[A-Za-z_][A-Za-z0-9_]*"
                rf"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*)*)\s*=\s*"
                rf"{re.escape(name)}\s*;"
            )
            candidates = {
                self._simple_expression_display(
                    match.group("lhs"), declared, allow_record_name_fallback=True
                ) or ""
                for match in assignment.finditer(masked)
            } - {""}
            pointer_candidates = {
                candidate for candidate in candidates
                if self.type_emitter.display_pointer_kind(candidate) is not None
            }
            if len(pointer_candidates) == 1:
                display = next(iter(pointer_candidates))
            elif name.startswith(("puRam", "ppuRam")):
                display = "undefined4 *"
            elif name.startswith("p"):
                display = "void *"
            elif name.startswith("fRam"):
                display = "float"
            elif name.startswith("unique"):
                rhs = re.search(
                    rf"(?m)^\s*{re.escape(name)}\s*=\s*(?P<rhs>[^;]+);",
                    masked,
                )
                display = (
                    "float" if rhs and re.search(
                        r"\b(?:float|double|fVar|DAT_008074(?:20|24))\b",
                        rhs.group("rhs"),
                    ) else "undefined4"
                )
            else:
                display = "undefined4"
            declarations.append(
                f"  {display} {replacements[name]}{{}};\n"
            )
            self.issues.append(Issue(
                "opaque_decompiler_storage",
                f"{name} -> {replacements[name]}: unresolved {display} storage view",
                address,
            ))

        def rewrite(piece: str) -> str:
            return OPAQUE_DECOMPILER_STORAGE_RE.sub(
                lambda match: replacements.get(
                    match.group("name"), match.group("name")
                ),
                piece,
            )

        body = transform_code(body, rewrite)
        opening = code_mask(body).find("{")
        if opening < 0:
            return body
        body = body[:opening + 1] + "\n" + "".join(declarations) + body[opening + 1:]
        self.stats["opaque_decompiler_storage_materializations"] += len(names)
        return body

    @staticmethod
    def _boundary_local_view(expression: str) -> tuple[str, str] | None:
        """Return the exact local root and value under whole-value casts.

        The local-lifetime ledger proves a machine call operand, not arbitrary
        source arithmetic.  Consequently this helper accepts only a bare local
        optionally wrapped in redundant parentheses, an ordinary C-style cast,
        or one of the generator's value-preserving boundary helpers.  The sole
        indexed form is ``local[0]``: in C that is the exact same storage root,
        and Ghidra commonly emits it after merging one machine word into a
        temporary array.  Nonzero indexing, member access, dereference,
        arithmetic, and calls are deliberately rejected because the proposal
        carries no source-level byte offset for them.
        """
        current = expression.strip()
        for _ in range(8):
            if IDENTIFIER_RE.fullmatch(current):
                return current, current
            first_element = re.fullmatch(
                r"([A-Za-z_][A-Za-z0-9_]*)\s*\[\s*0\s*\]", current
            )
            if first_element is not None:
                return first_element.group(1), current
            if current.startswith("("):
                closing = SourceTreeGenerator._matching_delimiter(
                    current, 0, "(", ")"
                )
                if closing == len(current) - 1:
                    current = current[1:closing].strip()
                    continue
                cast = re.match(
                    r"^\(\s*(?:const\s+|volatile\s+)*"
                    r"[A-Za-z_][A-Za-z0-9_:]*(?:\s*\*+)?\s*\)\s*(.+)$",
                    current,
                    re.DOTALL,
                )
                if cast is not None:
                    current = cast.group(1).strip()
                    continue
            helper = re.match(
                r"^(?:st::(?:pointer_boundary_cast|machine_word_boundary_cast|"
                r"storage_bit_cast)|reinterpret_cast|static_cast)\s*<[^<>]+>\s*\(",
                current,
            )
            if helper is not None:
                opening = current.find("(", helper.start())
                parsed = call_argument_spans(
                    code_mask(current), opening, current
                )
                if (parsed is not None and len(parsed[0]) == 1 and
                        not current[parsed[1] + 1:].strip()):
                    start, end = parsed[0][0]
                    current = current[start:end].strip()
                    continue
            return None
        return None

    @staticmethod
    def _bare_boundary_identifier(expression: str) -> str | None:
        """Compatibility wrapper for callers interested only in the root."""
        view = SourceTreeGenerator._boundary_local_view(expression)
        return None if view is None else view[0]

    def _proposal_display_type(self, path: str) -> str:
        """Render one proposal datatype path without creating semantic facts."""
        assert self.type_emitter is not None
        pointers = 0
        current = path
        while current.startswith("pointer:"):
            pointers += 1
            current = current[len("pointer:"):]
        display = self.type_emitter.type_name(current)
        return display + " *" * pointers

    def _repair_exact_machine_lifetime_call_views(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Expose exact unpersistable call-argument lifetimes per use.

        ``STLocalLifetimeAnalyzer`` can prove the type consumed by one CALL
        operand even when Ghidra cannot attach a distinct HighSymbol to that
        SSA lifetime.  This source-only view is allowed only when the complete
        address-stable proposal family and the complete generated call family
        agree.  It never types a whole local and never infers a semantic class.
        """
        rows = self.local_lifetime_call_views.get(address, ())
        if not rows:
            return body

        grouped: dict[tuple[str, int, str], list[dict[str, str]]] = defaultdict(list)
        for row in rows:
            grouped[(
                str(row["direct_target_address"]).upper(),
                int(row["anchor_operand"]),
                str(row["proposed_type"]),
            )].append(row)

        masked = code_mask(body)
        declared_types = self._declared_types(function, body)
        edits: list[tuple[int, int, str, str]] = []
        for (target, operand, proposed), family in sorted(grouped.items()):
            anchors = {
                f"{str(row['anchor_address']).upper()}:t{row['anchor_time']}"
                for row in family
            }
            names = {str(row["original_name"]) for row in family}
            current_types = {str(row["expected_current_type"]) for row in family}
            current_displays = {
                re.sub(r"\s+", "", self._proposal_display_type(value))
                for value in current_types
            }
            exact_candidates: list[tuple[int, int, str, str, bool]] = []
            typed_candidates: list[tuple[int, int, str, str, bool]] = []
            proposed_candidates: list[tuple[int, int, str, str, bool]] = []
            proposed_display = re.sub(
                r"\s+", "", self._proposal_display_type(proposed)
            )
            call_pattern = re.compile(rf"\bst::fn_{re.escape(target)}\s*\(")
            for match in call_pattern.finditer(masked):
                opening = masked.find("(", match.start(), match.end())
                parsed = call_argument_spans(masked, opening, body)
                if parsed is None or operand >= len(parsed[0]):
                    continue
                start, end = parsed[0][operand]
                view = self._boundary_local_view(body[start:end])
                if view is None:
                    continue
                name, value = view
                declared = re.sub(
                    r"\s+", "", declared_types.get(name, "")
                )
                if name in names:
                    exact_candidates.append(
                        (start, end, name, value, declared == proposed_display)
                    )
                elif declared in current_displays:
                    typed_candidates.append(
                        (start, end, name, value, declared == proposed_display)
                    )
                elif declared == proposed_display:
                    # The accepted decompile may already have separated the
                    # post-definition lifetime into a correctly typed source
                    # local even though the corresponding HighSymbol still
                    # carries the entry domain.  A complete closed call family
                    # is sufficient to record that exact source view; do not
                    # add a redundant cast or mutate the persistent local.
                    proposed_candidates.append(
                        (start, end, name, value, True)
                    )

            candidates = (
                exact_candidates or typed_candidates or proposed_candidates
            )

            # Source order is not machine identity.  Accept only a closed set:
            # every unique p-code CALL anchor has exactly one corresponding
            # generated call argument, and there are no extra candidates.
            if len(candidates) != len(anchors) or not candidates:
                continue
            display = self._proposal_display_type(proposed)
            proposed_pointer = proposed.startswith("pointer:")
            floating_view = (
                proposed in {"/float", "/double", "/float10"} or
                any(value in {"/float", "/double", "/float10"}
                    for value in current_types)
            )
            replacements: list[tuple[int, int, str]] = []
            for start, end, name, value, already_proposed in candidates:
                if already_proposed:
                    replacement = body[start:end]
                elif proposed_pointer:
                    replacement = f"st::storage_bit_cast<{display}>({value})"
                elif floating_view:
                    replacement = f"st::storage_bit_cast<{display}>({value})"
                else:
                    replacement = (
                        f"st::machine_word_boundary_cast<{display}>({value})"
                    )
                replacements.append((start, end, replacement))
            detail = (
                f"anchors={','.join(sorted(anchors))}; target={target}; "
                f"operand={operand}; locals={','.join(sorted(names))}; "
                f"transition={','.join(sorted(current_types))} -> {proposed}"
            )
            for start, end, replacement in replacements:
                edits.append((start, end, replacement, detail))

        claimed: list[tuple[int, int]] = []
        for start, end, _replacement, _detail in sorted(edits):
            if any(start < prior_end and prior_start < end
                   for prior_start, prior_end in claimed):
                raise GenerationError(
                    f"{address}: overlapping exact machine-lifetime call views"
                )
            claimed.append((start, end))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            if body[start:end] != replacement:
                body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_machine_lifetime_call_view", detail, address
            ))
        self.stats["exact_machine_lifetime_call_views"] += len(edits)
        return body

    def _repair_exact_pointer_boundaries(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Make exact C pointer conversions explicit at proven C++ boundaries.

        This is deliberately not a type-inference fallback.  The source must be
        a neutral pointer view and the destination must already be a concrete
        exported pointer type.  Direct calls use the address-authoritative
        callee prototype; assignments are limited to a declared local and an
        entire neutral-pointer expression.  Each edit is retained in the source
        audit so it cannot masquerade as a recovered database fact.
        """
        assert self.type_emitter is not None
        declared_types = self._declared_types(function, body)
        direct_call = re.compile(r"\bst::fn_([0-9A-F]{8})\s*\(")
        external_call = re.compile(r"\bst::(external_[A-Za-z0-9_]+)\s*\(")
        indirect_call = re.compile(
            r"\(\s*\*\s*(?P<callee>[A-Za-z_][A-Za-z0-9_]*"
            r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])*)"
            r"\s*\)\s*\("
        )
        for _ in range(4):
            masked = code_mask(body)
            edits: list[tuple[int, int, str, str]] = []

            for match in direct_call.finditer(masked):
                target = self.function_by_address.get(match.group(1))
                if target is None:
                    continue
                open_paren = masked.find("(", match.start(), match.end())
                parsed = call_argument_spans(masked, open_paren, body)
                if parsed is None:
                    continue
                spans, _ = parsed
                parameters, variadic = self._function_parameter_spec(target)
                if len(spans) < len(parameters) or (
                        not variadic and len(spans) != len(parameters)):
                    continue
                for ordinal, ((start, end), target_display) in enumerate(
                    zip(spans, parameters), 1
                ):
                    source = self._boundary_expression(
                        body[start:end], declared_types
                    )
                    if source is None:
                        continue
                    converted = self._boundary_replacement(
                        target_display, source, body[start:end]
                    )
                    if converted is None:
                        converted = self._equivalent_outer_pointer_cast(
                            target_display, body[start:end], declared_types
                        )
                    if converted is not None:
                        replacement, transition = converted
                        neutral_callable_boundary = (
                            ordinal - 1 in self.neutral_callable_parameters.get(
                                match.group(1), set()
                            ) and
                            self._generic_callable_storage_type(
                                source.display_type
                            ) and
                            re.sub(r"\s+", "", target_display) == "code*"
                        )
                        edits.append((start, end, replacement,
                            f"call {match.group(1)} argument {ordinal}: {transition}",
                            neutral_callable_boundary))

            for match in external_call.finditer(masked):
                parameters = self.external_parameter_types.get(match.group(1))
                if parameters is None:
                    continue
                open_paren = masked.find("(", match.start(), match.end())
                parsed = call_argument_spans(masked, open_paren, body)
                if parsed is None:
                    continue
                spans, _ = parsed
                variadic = match.group(1) in self.external_variadic
                if len(spans) < len(parameters) or (
                        not variadic and len(spans) != len(parameters)):
                    continue
                for ordinal, ((start, end), target_display) in enumerate(
                    zip(spans, parameters), 1
                ):
                    source = self._boundary_expression(
                        body[start:end], declared_types
                    )
                    if source is None:
                        continue
                    converted = self._boundary_replacement(
                        target_display, source, body[start:end]
                    )
                    if converted is None:
                        converted = self._equivalent_outer_pointer_cast(
                            target_display, body[start:end], declared_types
                        )
                    if converted is not None:
                        replacement, transition = converted
                        edits.append((start, end, replacement,
                            f"external {match.group(1)} argument {ordinal}: {transition}",
                            False))

            for match in indirect_call.finditer(masked):
                callee = match.group("callee")
                callee_display = self._simple_expression_display(
                    callee, declared_types
                )
                if callee_display is None:
                    continue
                parameters = self.type_emitter.display_function_parameters(
                    callee_display
                )
                if parameters is None:
                    continue
                open_paren = masked.rfind("(", match.start(), match.end())
                parsed = call_argument_spans(masked, open_paren, body)
                if parsed is None:
                    continue
                spans, _ = parsed
                if len(spans) != len(parameters):
                    continue
                for ordinal, ((start, end), target_display) in enumerate(
                    zip(spans, parameters), 1
                ):
                    source = self._boundary_expression(
                        body[start:end], declared_types
                    )
                    if source is None:
                        continue
                    converted = self._boundary_replacement(
                        target_display, source, body[start:end]
                    )
                    if converted is None:
                        converted = self._equivalent_outer_pointer_cast(
                            target_display, body[start:end], declared_types
                        )
                    if converted is not None:
                        replacement, transition = converted
                        edits.append((start, end, replacement,
                            f"indirect {callee} argument {ordinal}: {transition}",
                            False))

            # Prefer the innermost boundary when nested calls overlap, then
            # rescan the updated body.  The helper's result type is recognized
            # above, so a later pass can safely repair the enclosing argument.
            selected: list[tuple[int, int, str, str, bool]] = []
            for edit in sorted(edits, key=lambda item: (item[1] - item[0], item[0])):
                if any(edit[0] < old[1] and edit[1] > old[0] for old in selected):
                    continue
                selected.append(edit)
            if not selected:
                break
            for start, end, replacement, detail, neutral_callable in sorted(
                    selected, reverse=True):
                body = body[:start] + replacement + body[end:]
                self.issues.append(Issue(
                    "exact_pointer_boundary_cast", detail, address
                ))
                if "explicit pointer view " in detail:
                    self.exact_existing_pointer_view_casts[address] += 1
                if neutral_callable:
                    self.neutral_callable_boundary_casts[address] += 1
            self.stats["exact_pointer_boundary_casts"] += len(selected)

        masked = code_mask(body)
        edits = []

        assignment_patterns = (
            re.compile(r"(?m)^[ \t]*(?P<lhs>[^=\n]+?)[ \t]*=[ \t]*(?!=)"),
            re.compile(
                # A member/index lvalue may live inside a comma expression or
                # condition, so the line-oriented matcher above cannot safely
                # own it.  Keep this grammar deliberately postfix-only: no
                # arithmetic, calls, casts, or dereference expressions.
                r"(?<![A-Za-z0-9_*&.>\])])(?P<lhs>"
                r"[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*|\[[^\]\n]+\])+"
                r")[ \t]*=[ \t]*(?!=)"
            ),
            re.compile(
                # Ghidra's unresolved writable global arrays are commonly
                # rendered as ``(&DAT_address)[index]``.  The image word is a
                # real 32-bit destination even though no semantic element type
                # has yet been recovered.
                r"(?P<lhs>\(\s*&\s*_?(?:DAT|PTR)_[0-9A-Fa-f]{8}\s*\)"
                r"\s*\[[^\]\n]+\])[ \t]*=[ \t]*(?!=)"
            ),
            re.compile(
                r"(?P<lhs>\(\s*&\s*[A-Za-z_][A-Za-z0-9_]*"
                r"(?:(?:->|\.)[A-Za-z_][A-Za-z0-9_]*)*\s*\)"
                r"\s*\[[^\]\n]+\])[ \t]*=[ \t]*(?!=)"
            ),
            re.compile(
                # Do not begin inside a casted dereference such as
                # `*(undefined4 *)local = ...`.  The closing parenthesis is as
                # significant here as `*`, `->`, and `]`: accepting `local`
                # as the complete lvalue would convert the storage word as if
                # the local itself were the destination.
                r"(?<![A-Za-z0-9_*&.>\])])(?P<lhs>[A-Za-z_][A-Za-z0-9_]*)"
                r"[ \t]*=[ \t]*(?!=)"
            ),
        )
        claimed_assignments: set[tuple[int, int]] = set()
        for pattern_index, assignment in enumerate(assignment_patterns):
            for match in assignment.finditer(masked):
                lhs = match.group("lhs").strip()
                # The line-oriented form exists for complex lvalues, but it
                # must never consume a comparison and reinterpret the final
                # ``=`` of ``!=``/``<=``/``>=`` as an assignment.  This is
                # especially important for comma expressions whose final
                # operand compares a recovered pointer with ``nullptr``.
                if (re.search(r"(?:==|!=|<=|>=)", lhs) or
                        lhs.endswith(("!", "<", ">")) or
                        re.search(r"\b(?:if|while|for|switch)\s*\(", lhs)):
                    continue
                target_display = self._simple_expression_display(
                    lhs, declared_types, allow_record_name_fallback=True
                )
                if not target_display and pattern_index == 2:
                    global_name = re.search(
                        r"_?(?:DAT|PTR)_[0-9A-Fa-f]{8}", lhs
                    )
                    if global_name is not None:
                        target_display = self.global_display_types.get(
                            global_name.group(0)
                        )
                    if not target_display:
                        target_display = "undefined4"
                if not target_display and pattern_index == 3:
                    target_value = self._boundary_expression(lhs, declared_types)
                    if target_value is not None and target_value.kind == "generic_word":
                        target_display = target_value.display_type
                if (not target_display and re.fullmatch(
                        r"_?(?:DAT|PTR)_[0-9A-Fa-f]{8}", lhs)):
                    target_display = "undefined4"
                if not target_display:
                    continue
                equal = masked.rfind("=", match.start(), match.end())
                if equal < 0:
                    continue
                start = equal + 1
                while start < len(body) and body[start].isspace():
                    start += 1
                end = statement_expression_end(masked, start)
                if end is None or (start, end) in claimed_assignments:
                    continue
                exact_result = self._exact_call_result_view(body, start, end)
                source = self._boundary_expression(body[start:end], declared_types)
                if source is None and exact_result is not None:
                    direct = re.match(
                        r"^st::fn_(?P<target>[0-9A-F]{8})\s*\(",
                        body[start:end].strip(),
                    )
                    target = None if direct is None else \
                        self.function_by_address.get(direct.group("target"))
                    actual_result = None if target is None else \
                        self._function_result_type(target)
                    if (actual_result and actual_result != "void" and
                            (self.type_emitter.display_integer_scalar_width(
                                actual_result) is not None or
                             self.type_emitter.display_storage_length(
                                actual_result) is not None)):
                        source = BoundaryValue(actual_result, "scalar")
                if source is None and exact_result is None:
                    continue
                # The two new embedded-lvalue forms exist only to make a
                # pointer stored in an independently known machine word legal
                # C++.  Applying the full boundary lattice here would rewrite
                # ordinary scalar/union assignments which were already valid,
                # and can even match a member nested inside a casted outer
                # dereference.  Broader line/local assignments retain their
                # established behavior above.
                if pattern_index in {1, 2, 3} and (source is None or not (
                        self.type_emitter.display_machine_word_scalar(
                            target_display
                        ) and source.kind.endswith("_pointer"))):
                    continue
                if exact_result is not None:
                    target_type = self.type_emitter.display_type_expression(
                        target_display
                    )
                    target_pointer = self.type_emitter.display_pointer_kind(
                        target_display
                    )
                    exact_matches_target = (
                        re.sub(r"\s+", "", exact_result) ==
                            re.sub(r"\s+", "", target_display) or
                        self.type_emitter.display_cpp_equivalent(
                            exact_result, target_display
                        )
                    )
                    actual_matches_target = source is not None and (
                        re.sub(r"\s+", "", source.display_type) ==
                            re.sub(r"\s+", "", target_display) or
                        self.type_emitter.display_cpp_equivalent(
                            source.display_type, target_display
                        )
                    )
                    if (target_type is not None and target_pointer and
                            exact_matches_target and not actual_matches_target):
                        expression = body[start:end].strip()
                        if source is None:
                            replacement = self._exact_call_result_expression(
                                body, start, end
                            )
                            if replacement is None:
                                continue
                        elif (source.kind.endswith("_pointer") and
                                self.type_emitter.display_is_void_pointer(
                                    source.display_type)):
                            # Preserve the established generic-storage spelling.
                            # ``static_cast<undefinedN *>`` exposes recovery
                            # scaffolding and is a readability regression; the
                            # exact call-result marker still records why this
                            # one C boundary is required.
                            if target_pointer == "generic":
                                replacement = f"({target_type}){expression}"
                            else:
                                replacement = f"static_cast<{target_type}>({expression})"
                        else:
                            replacement = (
                                f"st::pointer_boundary_cast<{target_type}>"
                                f"({expression})"
                            )
                        edits.append((start, end,
                            replacement,
                            f"assignment {lhs}: exact call-result view "
                            f"{source.display_type if source is not None else 'void'} "
                            f"-> {target_display}"))
                        claimed_assignments.add((start, end))
                        continue
                if source is None:
                    continue
                converted = self._boundary_replacement(
                    target_display, source, body[start:end]
                )
                if converted is None:
                    converted = self._equivalent_outer_pointer_cast(
                        target_display, body[start:end], declared_types
                    )
                if converted is None:
                    continue
                replacement, transition = converted
                detail = f"assignment {lhs}: {transition}"
                edits.append((start, end, replacement, detail))
                if source.address_storage:
                    self.exact_address_storage_boundary_casts[address] += 1
                claimed_assignments.add((start, end))

        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_pointer_boundary_cast", detail, address
            ))
            if "explicit pointer view " in detail:
                self.exact_existing_pointer_view_casts[address] += 1
        self.stats["exact_pointer_boundary_casts"] += len(edits)

        declaration = self.body_declarations.get(address)
        return_display = None if not declaration else self._signature_result_type(
            {"signature": declaration}
        )
        if return_display:
            masked = code_mask(body)
            return_edits: list[tuple[int, int, str, str]] = []
            for match in re.finditer(r"\breturn\s+(?!;)", masked):
                start = match.end()
                end = statement_expression_end(masked, start)
                if end is None:
                    continue
                source = self._boundary_expression(body[start:end], declared_types)
                if source is None:
                    continue
                converted = self._boundary_replacement(
                    return_display, source, body[start:end]
                )
                if converted is None:
                    continue
                replacement, transition = converted
                return_edits.append((start, end, replacement,
                    f"return: {transition}"))
            for start, end, replacement, detail in sorted(return_edits, reverse=True):
                body = body[:start] + replacement + body[end:]
                self.issues.append(Issue(
                    "exact_pointer_boundary_cast", detail, address
                ))
            self.stats["exact_pointer_boundary_casts"] += len(return_edits)
        # Every durable STCallResultViewApplier marker denotes an exact,
        # address-local machine result view.  Older revisions added the
        # auxiliary ``readability_validated`` token only after a targeted
        # migration run, while the normal fixed-point applier deliberately
        # emits the same proof without that token.  Requiring the auxiliary
        # spelling made a freshly accepted full proposal look like an
        # unrelated new cast in the generated source.  Count the actual proof
        # payload instead; the budget remains confined to this one function
        # and to helper casts directly wrapped around a recovered direct call.
        validated_call_results = len(re.findall(
            r"\[STCallResultViewApplier\][^\r\n]*"
            r"\bexact direct-call result=pointer:",
            body,
        ))
        rendered_call_result_boundaries = len(re.findall(
            r"\bst::pointer_boundary_cast\s*<[^;\r\n>]+\*\s*>\s*\(\s*"
            r"st::fn_[0-9A-F]{8}\s*\(",
            code_mask(body),
        )) + len(re.findall(
            r"\bst::exact_call_result_callee\s*<[^;\r\n]+?>\s*\(\s*"
            r"&st::fn_[0-9A-F]{8}\s*\)\s*\(",
            code_mask(body),
        )) + len(re.findall(
            r"\(\s*[A-Za-z_][A-Za-z0-9_:<> ]*\s*\*+\s*\)\s*"
            r"st::fn_[0-9A-F]{8}\s*\(",
            code_mask(body),
        ))
        if validated_call_results and rendered_call_result_boundaries:
            self.exact_call_result_boundary_casts[address] = min(
                validated_call_results, rendered_call_result_boundaries
            )
        return body

    def _exact_receiver_transport_replacement(
        self, target_display: str, source: BoundaryValue, expression: str
    ) -> tuple[str, str] | None:
        """Express one concrete direct ``__thiscall`` ECX type boundary.

        A direct machine call proves that the unadjusted expression was loaded
        into ECX, but it does not prove inheritance or merge the two concrete
        record identities.  When source assembly exposes a stronger mismatch,
        retain it as an explicit compatibility cast solely at that address-
        stable receiver boundary.  Ordinary arguments never receive this
        exception.
        """
        assert self.type_emitter is not None
        if not source.kind.endswith("_pointer"):
            return None
        if self.type_emitter.display_pointer_kind(target_display) is None:
            return None
        target_type = self.type_emitter.display_type_expression(target_display)
        if target_type is None:
            return None
        if re.sub(r"\s+", "", target_display) == re.sub(
                r"\s+", "", source.display_type):
            return None
        return (
            f"st::pointer_boundary_cast<{target_type}>({expression})",
            f"exact direct __thiscall ECX transport {source.display_type} -> "
            f"{target_display}",
        )

    def _callable_symbol_address(self, spelling: str) -> str | None:
        """Resolve one rendered callable spelling without choosing by order.

        A function and its direct-jump thunk legitimately share one recovered
        name.  For an address-valued occurrence the executable thunk entry is
        the only deterministic representative when exactly one candidate
        names another candidate as its target.  Other overload/name collisions
        stay unresolved.
        """
        if spelling in self.callable_symbol_resolution_cache:
            return self.callable_symbol_resolution_cache[spelling]
        candidates = set(self.callable_addresses_by_spelling.get(spelling, ()))
        if len(candidates) == 1:
            result = next(iter(candidates))
            self.callable_symbol_resolution_cache[spelling] = result
            return result
        thunks = []
        for candidate in candidates:
            function = self.function_by_address.get(candidate, {})
            target, _ = split_address_label(str(function.get("thunk_target") or ""))
            if function.get("thunk") and target in candidates:
                thunks.append(candidate)
        result = thunks[0] if len(thunks) == 1 else None
        self.callable_symbol_resolution_cache[spelling] = result
        return result

    def _repair_callable_symbol_values(self, address: str, body: str) -> str:
        """Use address-stable declarations for calls and address-valued names.

        The ordinary direct-call pass is call-relation driven.  Ghidra also
        prints sanitized names in callback assignments and as variadic
        arguments, where no call relation exists.  Rewrite only an exact
        unique corpus spelling (or its unique direct-jump thunk family); the
        address remains the identity and overloaded names remain review debt.
        """
        token = re.compile(
            r"(?<![A-Za-z0-9_.>])"
            r"(?:[A-Za-z_][A-Za-z0-9_]*::)*"
            r"[A-Za-z_][A-Za-z0-9_]*"
            r"(?=\s*(?:\(|[,);}]|$))"
        )
        repairs = 0

        def replace(piece: str) -> str:
            nonlocal repairs

            def one(match: re.Match[str]) -> str:
                nonlocal repairs
                spelling = match.group(0)
                if (self.type_emitter is not None and
                        spelling in self.type_emitter.record_paths_by_name):
                    return spelling
                target = self._callable_symbol_address(spelling)
                if target is None:
                    return spelling
                # Types and namespace names can share an identifier with a
                # function.  Require either invocation syntax or a value-like
                # punctuation boundary before/after the token.
                before = piece[:match.start()].rstrip()
                after = piece[match.end():].lstrip()
                invocation = after.startswith("(")
                if not invocation and after.startswith("*"):
                    return spelling
                value_context = (
                    (before[-1:] in {"=", ",", "(", "&", "{"}) or
                    (after[:1] in {",", ")", ";", "}"}))
                if invocation and spelling not in self.sanitized_callable_spellings:
                    return spelling
                if not invocation and not value_context:
                    return spelling
                repairs += 1
                return function_symbol(target)

            return token.sub(one, piece)

        rewritten = transform_code(body, replace)
        if repairs:
            self.issues.append(Issue(
                "address_stable_callable_symbol",
                f"{repairs} exact call/address-valued spelling repair(s)",
                address,
            ))
        self.stats["address_stable_callable_symbol_repairs"] += repairs
        return rewritten

    def _repair_pcode_intrinsics(self, address: str, body: str) -> str:
        """Route Ghidra's CPUID p-code spellings through one declared boundary."""
        pattern = re.compile(r"\bcpuid_[A-Za-z0-9_]+_info(?=\s*\()")
        rewritten, count = pattern.subn("st::pcode_cpuid_info", body)
        if count:
            self.issues.append(Issue(
                "pcode_intrinsic_boundary",
                f"{count} CPUID p-code intrinsic call(s) require runtime implementation",
                address,
            ))
        self.stats["pcode_intrinsic_boundaries"] += count
        return rewritten

    def _rewrite_ambiguous_calls(
        self, body: str, candidates: Mapping[str, set[str]], *,
        address: str | None = None,
    ) -> tuple[str, int, dict[str, set[str]]]:
        if not candidates:
            return body, 0, {}
        masked = code_mask(body)
        direct_targets = {} if address is None else {
            str(relation.get("call_site") or "").split(" ", 1)[0].upper():
                split_address_label(str(relation.get("direct") or ""))[0]
            for relation in self.relations_by_caller.get(address.upper(), ())
            if str(relation.get("call_site") or "")
        }
        callsite_markers = [
            (match.start(), match.end(), match.group("address").upper())
            for match in EXACT_CALLSITE_MARKER_RE.finditer(body)
        ]
        edits: list[tuple[int, int, str]] = []
        occupied: list[tuple[int, int]] = []
        unresolved: dict[str, set[str]] = {}
        for spelling in sorted(candidates, key=len, reverse=True):
            pattern = re.compile(
                rf"(?<![A-Za-z0-9_]){re.escape(spelling)}(?=\s*\()"
            )
            for match in pattern.finditer(masked):
                if any(match.start() < end and match.end() > start
                        for start, end in occupied):
                    continue
                open_paren = masked.find("(", match.end())
                parsed = call_argument_count(masked, open_paren, body)
                if parsed is None:
                    unresolved[spelling] = candidates[spelling]
                    continue
                arity, _ = parsed
                exact_target = None
                for marker_start, marker_end, marker_address in reversed(
                        callsite_markers):
                    if marker_end > match.start():
                        continue
                    between = masked[marker_end:match.start()]
                    if len(between) > 4096 or ";" in between:
                        break
                    target = direct_targets.get(marker_address)
                    if target in candidates[spelling]:
                        exact_target = target
                    break
                if exact_target is not None:
                    edits.append((match.start(), match.end(),
                        address_symbol(exact_target)))
                    occupied.append((match.start(), match.end()))
                    continue
                # Without an exact direct-call PC, a leaf after member-access
                # syntax may be an independent virtual dispatch which merely
                # shares the direct target's name.  Arity does not prove target
                # identity across that boundary.
                if (match.start() >= 2 and
                        body[match.start() - 2:match.start()] in {"->", "::"}) or (
                        match.start() >= 1 and body[match.start() - 1] == "."):
                    unresolved[spelling] = candidates[spelling]
                    continue
                matching = {
                    candidate for candidate in candidates[spelling]
                    if len(self.function_by_address.get(candidate, {}).get(
                        "parameters", ())) == arity
                }
                if len(matching) != 1:
                    unresolved[spelling] = candidates[spelling]
                    continue
                edits.append((match.start(), match.end(),
                    address_symbol(next(iter(matching)))))
                occupied.append((match.start(), match.end()))
        for start, end, replacement in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
        return body, len(edits), unresolved

    def _materialize_tagged_lifetimes(self, address: str, body: str) -> str:
        """Declare Ghidra synthetic stack lifetimes with proven lexical scope.

        `_param_N`/`_local_N` are Ghidra spellings for the post-write half of a
        reused physical stack slot.  They have no declaration in the emitted
        body.  Turning their first exact assignment into `auto` is
        type-neutral and preserves its RHS type, but is safe only when every use
        remains in the same lexical block and no later switch label can jump
        over the initializer.  The synthetic spelling plus an assignment as the
        first occurrence is sufficient machine-derived evidence; an adjacent
        exporter presentation comment is useful provenance but not required.
        """
        if not re.search(r"\b_(?:param|local)_[0-9A-Fa-f]+\b", code_only(body)):
            return body
        lines = body.splitlines(keepends=True)
        masked = code_mask(body).splitlines(keepends=True)
        depths: list[int] = []
        depth = 0
        for line in masked:
            depths.append(depth)
            depth += line.count("{") - line.count("}")
        assignment = re.compile(
            r"^(?P<indent>\s*)(?P<name>_(?:param|local)_[0-9A-Fa-f]+)\s*=(?!=)"
        )
        replacements: list[tuple[int, str]] = []
        claimed: set[str] = set()
        for index, line in enumerate(masked):
            match = assignment.match(line)
            if match is None or match.group("name") in claimed:
                continue
            name = match.group("name")
            token = re.compile(rf"\b{re.escape(name)}\b")
            if any(token.search(item) for item in masked[:index]):
                continue
            start_depth = depths[index]
            end = len(lines)
            running = start_depth
            for cursor in range(index, len(lines)):
                running += masked[cursor].count("{") - masked[cursor].count("}")
                if running < start_depth:
                    end = cursor
                    break
            if any(token.search(item) for item in masked[end:]):
                continue
            if any(
                depths[cursor] == start_depth and
                re.match(r"\s*(?:case\b|default\s*:)", masked[cursor])
                for cursor in range(index + 1, end)
            ):
                continue
            replacements.append((index, name))
            claimed.add(name)
        for index, name in replacements:
            lines[index] = re.sub(
                rf"^(\s*){re.escape(name)}\s*=(?!=)",
                rf"\1auto {name} =", lines[index], count=1,
            )
        self.stats["tagged_lifetime_materializations"] += len(replacements)
        if re.search(r"\b_(?:param|local)_[0-9A-Fa-f]+\b", code_only(body)) and not replacements:
            self.issues.append(Issue(
                "tagged_lifetime_scope_unresolved",
                "no synthetic lifetime satisfied exact lexical-scope proof",
                address,
            ))
        return "".join(lines)

    def _materialize_callable_local_families(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Give a neutral ``code *`` local one unanimous callback signature.

        Ghidra often preserves a local which holds several compatible function
        addresses only as ``code *``.  Once exact direct callees independently
        require the same function-pointer ABI, keeping that neutral spelling
        adds one cast at every call boundary.  This source-only lifetime view
        changes no Program type: it requires an exact generated callback type,
        agreement across every typed use collected in the function, and a
        standalone local declaration.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        neutral = {
            name for name, display in declared.items()
            if TypeEmitter.cpp_type_key(display) == "code*"
        }
        if not neutral:
            return body
        candidates: dict[str, list[tuple[int, int, str, tuple[Any, ...]]]] = (
            defaultdict(list)
        )
        direct_call = re.compile(r"\bst::fn_([0-9A-F]{8})\s*\(")
        masked = code_mask(body)
        for match in direct_call.finditer(masked):
            target = self.function_by_address.get(match.group(1))
            if target is None:
                continue
            open_paren = masked.find("(", match.start(), match.end())
            parsed = call_argument_spans(masked, open_paren, body)
            if parsed is None:
                continue
            spans, _ = parsed
            parameters, variadic = self._function_parameter_spec(target)
            if len(spans) < len(parameters) or (
                    not variadic and len(spans) != len(parameters)):
                continue
            for (start, end), target_display in zip(spans, parameters):
                argument = body[start:end].strip()
                if argument not in neutral:
                    continue
                signature = self.type_emitter.display_function_signature(
                    target_display
                )
                if signature is not None:
                    candidates[argument].append(
                        (start, end, target_display, signature)
                    )

        edits: list[tuple[int, int, str, str]] = []
        materialized_names: set[str] = set()
        extra_declarations: dict[str, list[str]] = defaultdict(list)
        for name, uses in candidates.items():
            signatures = {item[3] for item in uses}
            displays = {item[2] for item in uses}
            canonical_display = {
                signature: min(
                    item[2] for item in uses if item[3] == signature
                )
                for signature in signatures
            }
            if len(signatures) == 1:
                # One semantic ABI throughout the function can use one local
                # declaration; exact boundary repair validates assignments.
                display = sorted(displays)[0]
                type_expression = self.type_emitter.display_type_expression(display)
                if type_expression is None:
                    continue
                pattern = re.compile(
                    rf"(?m)^(?P<indent>[ \t]*)code\s*\*\s*"
                    rf"{re.escape(name)}\s*;"
                )
                matches = list(pattern.finditer(masked))
                if len(matches) != 1:
                    continue
                match = matches[0]
                replacement = (
                    match.group("indent") + f"{type_expression} {name};"
                )
                edits.append((match.start(), match.end(), replacement, name))
                materialized_names.add(name)
                continue

            region_for = self._callable_case_region_lookup(masked)
            uses_by_region: dict[int, list[tuple[int, int, str, tuple[Any, ...]]]] = (
                defaultdict(list)
            )
            for item in uses:
                region = region_for(item[0])
                if region is not None:
                    uses_by_region[region].append(item)
            assignment_pattern = re.compile(
                rf"\b(?P<name>{re.escape(name)})\b\s*=\s*"
                r"st::fn_(?P<address>[0-9A-F]{8})\s*;"
            )
            assignments_by_region: dict[
                int, list[tuple[re.Match[str], tuple[str, int, tuple[int, ...], bool] | None]]
            ] = defaultdict(list)
            for assignment in assignment_pattern.finditer(masked):
                region = region_for(assignment.start("name"))
                if region is None:
                    continue
                target = self.function_by_address.get(assignment.group("address"))
                assignments_by_region[region].append((
                    assignment,
                    None if target is None else self._function_machine_signature(target),
                ))

            for region, region_uses in uses_by_region.items():
                region_signatures = {item[3] for item in region_uses}
                if len(region_signatures) != 1:
                    continue
                signature = next(iter(region_signatures))
                display = canonical_display[signature]
                expected_machine = (
                    self.type_emitter.display_function_machine_signature(display)
                )
                region_assignments = assignments_by_region.get(region, ())
                if expected_machine is None or not region_assignments or any(
                        actual != expected_machine
                        for _, actual in region_assignments):
                    continue
                claimed_spans = {
                    (start, end) for start, end, _, _ in region_uses
                }
                claimed_spans.update(
                    assignment.span("name") for assignment, _ in region_assignments
                )
                region_start, region_end = region_for.bounds(region)
                tokens = {
                    match.span() for match in re.finditer(
                        rf"\b{re.escape(name)}\b",
                        masked[region_start:region_end],
                    )
                }
                tokens = {
                    (start + region_start, end + region_start)
                    for start, end in tokens
                }
                # Rewriting only half of one lexical lifetime would disconnect
                # a neutral comparison, indirect call or later consumer from
                # its defining assignment.  Such a region stays review-only.
                if tokens != claimed_spans:
                    continue
                first_assignment = min(
                    assignment.start("name")
                    for assignment, _ in region_assignments
                )
                if first_assignment > min(item[0] for item in region_uses):
                    continue
                type_expression = self.type_emitter.display_type_expression(display)
                if type_expression is None:
                    continue
                digest = hashlib.sha256(repr(signature).encode()).hexdigest()[:8]
                family_name = f"{name}_callback_{digest}"
                extra_declarations[name].append(
                    f"{type_expression} {family_name};"
                )
                materialized_names.add(family_name)
                for assignment, _ in region_assignments:
                    start, end = assignment.span("name")
                    edits.append((start, end, family_name, family_name))
                for start, end, _, _ in region_uses:
                    edits.append((start, end, family_name, family_name))

        for name, declarations in extra_declarations.items():
            pattern = re.compile(
                rf"(?m)^(?P<indent>[ \t]*)code\s*\*\s*"
                rf"{re.escape(name)}\s*;"
            )
            matches = list(pattern.finditer(masked))
            if len(matches) != 1:
                continue
            match = matches[0]
            additions = "".join(
                "\n" + match.group("indent") + declaration
                for declaration in sorted(set(declarations))
            )
            edits.append((match.end(), match.end(), additions, name))
        for start, end, replacement, name in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
        materialized = len(materialized_names)
        if materialized:
            self.issues.append(Issue(
                "callable_local_family",
                f"{materialized} exact callback local/lifetime family view(s)",
                address,
            ))
        self.stats["callable_local_family_materializations"] += materialized
        return body

    @staticmethod
    def _callable_case_region_lookup(masked: str):
        """Return a lookup for live ``case`` regions in already masked code."""
        labels = list(re.finditer(
            r"(?m)^[ \t]*(?:case\b[^:\n]*|default)[ \t]*:", masked
        ))
        points = sorted({0, len(masked), *(match.start() for match in labels)})
        depths: dict[int, int] = {}
        depth = 0
        cursor = 0
        for point in points:
            while cursor < point:
                if masked[cursor] == "{":
                    depth += 1
                elif masked[cursor] == "}":
                    depth -= 1
                cursor += 1
            depths[point] = depth
        records = [
            (match.start(), depths[match.start()]) for match in labels
        ]
        bounds: dict[int, tuple[int, int]] = {}
        for index, (start, label_depth) in enumerate(records):
            end = len(masked)
            scan_depth = label_depth
            cursor = start
            next_labels = records[index + 1:]
            next_index = 0
            while cursor < len(masked):
                if (next_index < len(next_labels) and
                        cursor == next_labels[next_index][0] and
                        next_labels[next_index][1] == label_depth):
                    end = cursor
                    break
                if masked[cursor] == "{":
                    scan_depth += 1
                elif masked[cursor] == "}":
                    scan_depth -= 1
                    if scan_depth < label_depth:
                        end = cursor
                        break
                cursor += 1
                while (next_index < len(next_labels) and
                       next_labels[next_index][0] < cursor):
                    next_index += 1
            bounds[start] = (start, end)

        def lookup(position: int) -> int | None:
            current_depth = 0
            for char in masked[:position]:
                if char == "{":
                    current_depth += 1
                elif char == "}":
                    current_depth -= 1
            for start, label_depth in reversed(records):
                if start <= position and label_depth <= current_depth:
                    begin, end = bounds[start]
                    if begin <= position < end:
                        return start
            return None

        lookup.bounds = lambda region: bounds[region]  # type: ignore[attr-defined]
        return lookup

    def _function_machine_signature(
        self, function: Mapping[str, Any]
    ) -> tuple[str, int, tuple[int, ...], bool] | None:
        assert self.type_emitter is not None
        result = self._function_result_type(function)
        if result is None:
            return None
        return_width = (
            0 if re.sub(r"\s+", "", result) == "void" else
            self.type_emitter.display_storage_length(result)
        )
        parameters, variadic = self._function_parameter_spec(function)
        widths = tuple(
            self.type_emitter.display_storage_length(item) for item in parameters
        )
        if return_width is None or any(width is None for width in widths):
            return None
        convention = str(function.get("calling_convention") or "")
        convention = "" if convention == "unknown" else convention
        return convention, int(return_width), tuple(
            int(width) for width in widths
        ), variadic

    def _materialize_machine_word_output_lifetimes(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Split a full-word output from the narrower source stack object.

        Ghidra renders the post-write High value as ``_name`` when a neutral
        utility output overwrites a narrow formal or a small stack-piece
        aggregate.  The synthetic full-word read is independent evidence for
        four bytes of storage; the producer itself supplies no semantic
        pointee type.  Retain that distinction with one uint32_t output slot,
        redirect only the exact producer argument, and leave every unrelated
        use of the original source object intact.
        """
        masked = code_mask(body)
        declared = self._declared_types(function, body)
        direct_call = re.compile(r"\bst::fn_([0-9A-F]{8})\s*\(")
        edits: list[tuple[int, int, str]] = []
        names: set[str] = set()
        for call in direct_call.finditer(masked):
            producer = self.function_by_address.get(call.group(1))
            if producer is None or "RECOVERED_UTILITY_SEMANTICS" not in set(
                    producer.get("tags", ())):
                continue
            parameters = tuple(producer.get("parameters", ()))
            opening = masked.find("(", call.start(), call.end())
            parsed = call_argument_spans(masked, opening, body)
            if parsed is None:
                continue
            spans, close = parsed
            if len(spans) != len(parameters):
                continue
            for (start, end), parameter in zip(spans, parameters):
                parameter_type = re.sub(
                    r"\s+", "", str(parameter.get("type") or "")
                )
                parameter_name = str(parameter.get("name") or "")
                if (parameter_type not in {"void*", "undefined*", "byte*"} or
                        not re.match(
                            r"(?i)^(?:out|result|destination|dest)",
                            parameter_name,
                        )):
                    continue
                argument = body[start:end].strip()
                output = re.fullmatch(
                    r"&?\s*([A-Za-z_][A-Za-z0-9_]*)", argument
                )
                if output is None:
                    continue
                original = output.group(1)
                synthetic = "_" + original
                if original not in declared or synthetic in declared:
                    continue
                token = re.compile(rf"\b{re.escape(synthetic)}\b")
                occurrences = list(token.finditer(masked))
                if not occurrences or any(item.start() < close for item in occurrences):
                    continue
                original_token = re.compile(rf"\b{re.escape(original)}\b")
                if any(item.start() >= close for item in original_token.finditer(masked)):
                    continue
                names.add(synthetic)
                edits.append((start, end, "&" + synthetic))
        if not names:
            return body
        for start, end, replacement in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
        opening = code_mask(body).find("{")
        if opening < 0:
            return body
        declarations = "".join(
            f"  uint32_t {name};\n" for name in sorted(names)
        )
        body = body[:opening + 1] + "\n" + declarations + body[opening + 1:]
        for name in sorted(names):
            self.issues.append(Issue(
                "machine_word_output_lifetime",
                f"{name}: exact full-word utility output storage",
                address,
            ))
        self.stats["machine_word_output_lifetimes"] += len(names)
        return body

    def _refine_exact_auto_output_storage(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Replace a stack-split ``auto`` with its exact output word type.

        The exporter uses ``auto name = scalar`` when it can split a reused
        stack lifetime but cannot state the later value domain.  If every
        address-of use of that local is the same fixed parameter of an exact
        direct callee, the pointee type is independent ABI evidence for the
        physical output storage.  Limit this to scalar pointees whose target
        width equals the x86 stack word; concrete object semantics are not
        inferred here.
        """
        assert self.type_emitter is not None
        declaration = re.compile(
            r"(?m)^(?P<indent>[ \t]*)auto[ \t]+"
            r"(?P<name>[A-Za-z_][A-Za-z0-9_]*)[ \t]*=[ \t]*"
            r"(?P<rhs>[^;\r\n]+);[ \t]*"
            r"/\* compiler stack-slot lifetime split \*/"
        )
        matches = list(declaration.finditer(body))
        if not matches:
            return body
        masked = code_mask(body)
        direct_call = re.compile(r"\bst::fn_([0-9A-F]{8})\s*\(")
        address_uses: dict[str, list[str]] = defaultdict(list)
        all_address_spans: dict[str, set[tuple[int, int]]] = defaultdict(set)
        for call in direct_call.finditer(masked):
            target = self.function_by_address.get(call.group(1))
            if target is None:
                continue
            opening = masked.find("(", call.start(), call.end())
            parsed = call_argument_spans(masked, opening, body)
            if parsed is None:
                continue
            spans, _ = parsed
            parameters, variadic = self._function_parameter_spec(target)
            if len(spans) < len(parameters) or (
                    not variadic and len(spans) != len(parameters)):
                continue
            for (start, end), target_display in zip(spans, parameters):
                argument = body[start:end].strip()
                output = re.fullmatch(r"&\s*([A-Za-z_][A-Za-z0-9_]*)", argument)
                if output is None:
                    continue
                name = output.group(1)
                address_uses[name].append(target_display)
                all_address_spans[name].add((start, end))

        edits: list[tuple[int, int, str, str]] = []
        for match in matches:
            name = match.group("name")
            targets = address_uses.get(name, ())
            if not targets:
                continue
            every_address = {
                item.span()
                for item in re.finditer(rf"&\s*\b{re.escape(name)}\b", masked)
            }
            if every_address != all_address_spans.get(name, set()):
                continue
            pointees = {
                self.type_emitter.display_pointee_type(item) for item in targets
            }
            if None in pointees or len(pointees) != 1:
                continue
            pointee = next(iter(pointees))
            assert pointee is not None
            if (self.type_emitter.display_pointer_kind(pointee) is not None or
                    self.type_emitter.display_storage_length(pointee) != 4):
                continue
            compact_pointee = re.sub(r"\s+", "", pointee)
            if compact_pointee in {"undefined4", "uint", "dword", "DWORD"}:
                type_expression = "uint32_t"
            elif compact_pointee == "int":
                type_expression = "int"
            elif compact_pointee == "int32_t":
                type_expression = "int32_t"
            else:
                type_expression = self.type_emitter.display_type_expression(pointee)
            if type_expression is None:
                continue
            edits.append((
                match.start(), match.end(),
                f"{match.group('indent')}{type_expression} {name} = "
                f"{match.group('rhs')}; /* compiler stack-slot lifetime split */",
                f"{name}: unanimous exact output pointee {pointee}",
            ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_auto_output_storage", detail, address
            ))
        self.stats["exact_auto_output_storage_refinements"] += len(edits)
        return body

    def _materialize_promoted_parameter_slots(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Declare Ghidra's full incoming slot for a narrow ABI parameter.

        A 32-bit x86 caller allocates a machine-word stack slot even when the
        recovered source parameter is ``char`` or ``short``.  Ghidra names a
        full-width SSA view of that same slot ``_param_N``.  Replacing it with
        the narrow formal would lose the caller's integer promotion; leaving it
        undeclared makes the generated source ill-formed.  After the stronger
        exact-output lifetime repair has had first refusal, materialize only a
        remaining narrow, stack-backed formal as its C integer promotion.

        This is an ABI presentation boundary, not new semantic type evidence:
        pointer parameters, machine-width formals, synthetic locals, and names
        without an exact exported parameter ordinal are deliberately ignored.
        """
        masked = code_mask(body)
        declared_types = self._declared_types(function, body)
        declarations: list[str] = []
        claimed: set[str] = set()
        for parameter in function.get("parameters", ()):
            name = str(parameter.get("name") or "")
            synthetic = "_" + name
            if not IDENTIFIER_RE.fullmatch(name) or not re.search(
                    rf"\b{re.escape(synthetic)}\b", masked):
                continue
            if (synthetic in declared_types or re.search(
                    rf"(?m)^[ \t]*auto[ \t]+{re.escape(synthetic)}"
                    rf"[ \t]*(?:=|;)", masked)):
                # The stronger lifetime splitter already proved a new value
                # domain and exact lexical scope.  Reintroducing the incoming
                # promoted slot would redeclare that same synthetic spelling.
                continue
            storage = str(parameter.get("storage") or "")
            length = int(parameter.get("length") or 0)
            display = re.sub(r"\s+", "", str(parameter.get("type") or ""))
            if not storage.startswith("Stack[") or length not in {1, 2} or "*" in display:
                continue
            # Under the target's 32-bit MSVC integer promotions, every 8- and
            # 16-bit integer domain (including unsigned short) fits in int.
            promoted = "int"
            declarations.append(
                f"  {promoted} {synthetic} = static_cast<{promoted}>({name});\n"
            )
            claimed.add(synthetic)
            self.issues.append(Issue(
                "promoted_parameter_slot_materialization",
                f"{synthetic}: {display or '<unknown>'}[{length}] -> {promoted} x86 stack slot",
                address,
            ))
        if not declarations:
            return body
        slot_address_rewrites = 0
        for parameter_name in sorted(claimed):
            original = parameter_name[1:]
            pattern = re.compile(
                rf"\(\s*(?:int|uint|dword|DWORD|undefined4|int32_t|uint32_t)"
                rf"\s*\*\s*\)\s*&\s*{re.escape(original)}\b"
                rf"(?!\s*(?:->|\.|\[))"
            )

            def replace_slot_address(piece: str, *, _pattern: re.Pattern[str] = pattern,
                    _synthetic: str = parameter_name) -> str:
                nonlocal slot_address_rewrites
                piece, count = _pattern.subn(f"&{_synthetic}", piece)
                slot_address_rewrites += count
                return piece

            body = transform_code(body, replace_slot_address)
        if slot_address_rewrites:
            self.stats["promoted_parameter_slot_address_repairs"] += \
                slot_address_rewrites
            self.promoted_slot_boundary_casts[address] += slot_address_rewrites
            self.issues.append(Issue(
                "promoted_parameter_slot_address_repair",
                f"{slot_address_rewrites} exact machine-word output address(es) "
                "redirected from narrow formal storage to the materialized x86 slot",
                address,
            ))
        opening = code_mask(body).find("{")
        if opening < 0:
            return body
        insertion = opening + 1
        materialized = "\n" + "".join(declarations)
        self.stats["promoted_parameter_slot_materializations"] += len(claimed)
        return body[:insertion] + materialized + body[insertion:]

    def _materialize_unscoped_synthetic_words(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Give exact storage to synthetic pieces which cannot be block locals.

        Ghidra can emit ``_local_N = CONCATxy(...)`` for a physical stack word
        whose constituent pieces have separate High variables.  The assignment
        may be conditional while later uses occur outside that lexical block,
        so changing the first assignment to ``auto`` would be invalid C++.
        Hoist only a width proven independently by every simple assignment's
        complete CONCAT width (or by the exact 32-bit replacement helper).

        The exporter also owns ``int scalar_NAME = ...`` split markers.  Older
        cached bodies occasionally placed that declaration in a nested block
        even though later scalar uses survived outside it.  Hoisting the trivial
        uninitialized ``int`` declaration and retaining the assignment repairs
        scope without changing the recovered value domain.
        """
        declarations: list[str] = []
        scalar_declaration = re.compile(
            r"(?m)^(?P<indent>[ \t]*)int[ \t]+"
            r"(?P<name>scalar_[A-Za-z_][A-Za-z0-9_]*)[ \t]*=[ \t]*"
            r"(?P<rhs>[^;\r\n]+);"
            r"(?P<marker>[ \t]*/\* split integer lifetime from "
            r"pointer-typed SSA storage \*/)?"
        )
        scalar_names: list[str] = []

        def hoist_scalar(match: re.Match[str]) -> str:
            name = match.group("name")
            if name not in scalar_names:
                scalar_names.append(name)
            marker = match.group("marker") or ""
            return (
                f"{match.group('indent')}{name} = {match.group('rhs')};"
                f"{marker}"
            )

        body = scalar_declaration.sub(hoist_scalar, body)
        declarations.extend(f"  int {name};\n" for name in scalar_names)

        # A later exact stack-slot lifetime may be introduced after an early
        # switch/goto target.  C++ rejects a jump across the initialized
        # ``auto`` even though the decompiler's C control flow is valid.  For
        # an integer literal initializer the x86 promoted domain is exact, so
        # hoist only the uninitialized storage and retain the assignment at its
        # original dominance point.  Richer initializers remain untouched
        # until their machine lifetime has an independently expressible type.
        after_write = re.compile(
            r"(?m)^(?P<indent>[ \t]*)auto[ \t]+"
            r"(?P<name>[A-Za-z_][A-Za-z0-9_]*_after_write)[ \t]*=[ \t]*"
            r"(?P<rhs>-?(?:0x[0-9A-Fa-f]+|[0-9]+));[ \t]*"
            r"/\* compiler stack-slot lifetime split \*/"
        )
        after_write_names: list[str] = []

        def hoist_after_write(match: re.Match[str]) -> str:
            name = match.group("name")
            if name not in after_write_names:
                after_write_names.append(name)
            return (
                f"{match.group('indent')}{name} = {match.group('rhs')}; "
                "/* compiler stack-slot lifetime split */"
            )

        body = after_write.sub(hoist_after_write, body)
        declarations.extend(f"  int {name};\n" for name in after_write_names)

        masked = code_mask(body)
        declared = self._declared_types(function, body)
        tokens = sorted(set(re.findall(
            r"\b_(?:local|param)_[0-9A-Fa-f]+\b", masked
        )))
        exact_types = {
            1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t",
        }
        materialized: list[str] = []
        for name in tokens:
            if name in declared:
                continue
            assignment = re.compile(
                rf"(?m)^\s*(?:auto\s+)?{re.escape(name)}\s*=\s*"
                rf"(?P<rhs>[^;\r\n]+);"
            )
            widths: set[int] = set()
            for match in assignment.finditer(masked):
                rhs = match.group("rhs").strip()
                concat = re.match(r"CONCAT(?P<high>[1-8])(?P<low>[1-8])\s*\(", rhs)
                if concat:
                    widths.add(int(concat.group("high")) + int(concat.group("low")))
                elif re.match(r"STReplace(?:LowWord|ByteAt)\s*\(", rhs):
                    widths.add(4)
                else:
                    cast = re.match(r"\(\s*(?:u?int|undefined)([1248])\s*\)", rhs)
                    widths.add(int(cast.group(1)) if cast else 0)
            if len(widths) != 1 or 0 in widths:
                continue
            width = next(iter(widths))
            storage_type = exact_types.get(width)
            if storage_type is None:
                continue
            declarations.append(f"  {storage_type} {name};\n")
            materialized.append(name)
            self.issues.append(Issue(
                "synthetic_piece_storage_materialization",
                f"{name}: exact {width}-byte assignment width",
                address,
            ))

        for name in materialized:
            body = re.sub(
                rf"(?m)^(?P<indent>[ \t]*)auto[ \t]+"
                rf"{re.escape(name)}[ \t]*=",
                rf"\g<indent>{name} =",
                body,
            )

        if not declarations:
            return body
        opening = code_mask(body).find("{")
        if opening < 0:
            return body
        self.stats["hoisted_scalar_lifetimes"] += len(scalar_names)
        self.stats["hoisted_stack_slot_lifetimes"] += len(after_write_names)
        self.stats["synthetic_piece_storage_materializations"] += len(materialized)
        insertion = opening + 1
        return body[:insertion] + "\n" + "".join(declarations) + body[insertion:]

    def _materialize_raw_stack_arena(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Give unresolved EBP-relative addresses one exact local byte arena.

        ``&stack0xfffffff0`` is Ghidra's address of an unnamed stack byte at
        EBP-0x10.  Such names are not C declarations.  One aligned byte arena
        preserves every relative offset without pretending that the overlapping
        bytes form a recovered struct or initialized object.  The exported
        frame size supplies the lower bound; explicitly referenced positive
        incoming offsets extend the arena when necessary.
        """
        pattern = re.compile(r"&\s*stack0x([0-9A-Fa-f]{8})\b")
        masked = code_mask(body)
        matches = list(pattern.finditer(masked))
        if not matches:
            return body

        def signed_offset(value: str) -> int:
            raw = int(value, 16)
            return raw - 0x100000000 if raw & 0x80000000 else raw

        offsets = [signed_offset(match.group(1)) for match in matches]
        frame_size = max(0, int(function.get("stack_frame_size") or 0))
        lower = min(offsets + [-frame_size, 0])
        upper = max(offsets + [0]) + 4
        lower &= ~3
        upper = (upper + 3) & ~3
        size = upper - lower
        if size <= 0 or size > 1024 * 1024:
            self.issues.append(Issue(
                "raw_stack_arena_unresolved",
                f"refused implausible EBP-relative arena [{lower}, {upper})",
                address,
            ))
            return body

        def replacement(match: re.Match[str]) -> str:
            offset = signed_offset(match.group(1))
            return f"(st_stack_frame + {offset - lower})"

        rewritten = transform_code(body, lambda piece: pattern.sub(replacement, piece))
        opening = code_mask(rewritten).find("{")
        if opening < 0:
            return body
        declaration = f"\n  alignas(4) byte st_stack_frame[{size}];\n"
        rewritten = rewritten[:opening + 1] + declaration + rewritten[opening + 1:]
        self.stats["raw_stack_arena_functions"] += 1
        self.stats["raw_stack_address_materializations"] += len(matches)
        self.issues.append(Issue(
            "raw_stack_arena_materialization",
            f"{len(matches)} address use(s), exact EBP span [{lower}, {upper})",
            address,
        ))
        return rewritten

    def _repair_scalarized_word_arrays(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Restore a four-byte scalar lifetime misrendered as a byte array.

        A High-variable pointer use can make Ghidra display one ordinary dword
        stack slot as ``byte local[4]`` even though the same lifetime receives
        whole-word scalar assignments.  C accepts a few array-cast spellings
        which C++ rejects.  Scalarize only when a complete array-typed
        assignment proves the conflict, there is no indexed element use, and
        every remaining read is explicitly cast or addressed.  Pointer casts
        then receive ``&local`` so the machine stack address is preserved.
        """
        masked = code_mask(body)
        declaration = re.compile(
            r"(?m)^(?P<indent>[ \t]*)(?:byte|undefined1)[ \t]+"
            r"(?P<name>[A-Za-z_][A-Za-z0-9_]*)[ \t]*\[[ \t]*4[ \t]*\]"
            r"[ \t]*;"
        )
        edits: list[tuple[int, int, str]] = []
        repaired: list[str] = []
        for item in declaration.finditer(masked):
            name = item.group("name")
            if re.search(rf"\b{re.escape(name)}\s*\[", masked[item.end():]):
                continue
            assignment = re.compile(
                rf"(?m)^(?P<indent>[ \t]*)(?P<lhs>{re.escape(name)})"
                rf"[ \t]*=[ \t]*"
                rf"\(\s*(?:byte|undefined1)\s*\[\s*4\s*\]\s*\)"
                rf"(?P<value>[^;\r\n]+);"
            )
            assignments = list(assignment.finditer(masked))
            if not assignments:
                continue
            pointer_cast = re.compile(
                rf"\(\s*(?P<type>(?:const\s+)?[A-Za-z_]"
                rf"[A-Za-z0-9_:<>]*\s*\*+)\s*\)\s*{re.escape(name)}\b"
            )
            pointer_casts = list(pointer_cast.finditer(masked))
            covered: list[tuple[int, int]] = [(item.start("name"), item.end("name"))]
            covered.extend(
                (match.start("lhs"), match.end("lhs"))
                for match in assignments
            )
            covered.extend(
                (match.end() - len(name), match.end())
                for match in pointer_casts
            )
            for match in re.finditer(
                    rf"(?:\(\s*[A-Za-z_][A-Za-z0-9_:<>]*\s*\)|&)\s*"
                    rf"(?P<name>{re.escape(name)})\b", masked):
                covered.append((match.start("name"), match.end("name")))
            occurrences = list(re.finditer(rf"\b{re.escape(name)}\b", masked))
            if any(not any(start <= match.start() and match.end() <= end
                           for start, end in covered)
                    for match in occurrences):
                continue
            edits.append((
                item.start(), item.end(),
                f"{item.group('indent')}uint {name};",
            ))
            for match in assignments:
                value = body[match.start("value"):match.end("value")]
                edits.append((
                    match.start(), match.end(),
                    f"{match.group('indent')}{name} = {value};",
                ))
            for match in pointer_casts:
                pointer_type = body[match.start("type"):match.end("type")]
                edits.append((
                    match.start(), match.end(),
                    f"({pointer_type})&{name}",
                ))
            repaired.append(name)
        for start, end, replacement in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
        for name in repaired:
            self.issues.append(Issue(
                "scalarized_word_array",
                f"{name}: exact four-byte scalar assignment and address uses",
                address,
            ))
        self.stats["scalarized_word_arrays"] += len(repaired)
        return body

    def _repair_scalarized_record_indices(
        self, address: str, function: Mapping[str, Any], body: str
    ) -> str:
        """Recover a retained scalar-pointer index after record retyping.

        Ghidra can type a former ``int *`` DArray element local as the complete
        recovered record without rebuilding an older ``local[1]`` p-code
        expression.  It then prints the mechanically impossible
        ``(char)local[1]``: C++ scales by the record extent, while the machine
        operation still uses the width of the exact offset-zero scalar member.
        Accept only that impossible aggregate-to-scalar cast, one unanimous
        offset-zero scalar width, and an in-record unnamed destination span.
        The result is an explicit little-endian storage piece, not a new field
        name or an assertion that the record is a scalar array.
        """
        assert self.type_emitter is not None
        declared = self._declared_types(function, body)
        pattern = re.compile(
            r"\(\s*(?P<target>(?:u?char|byte|undefined[1248]|"
            r"u?short|u?int|u?int(?:8|16|32|64)_t))\s*\)\s*"
            r"(?P<base>[A-Za-z_][A-Za-z0-9_]*)\s*"
            r"\[\s*(?P<index>[1-9][0-9]*)\s*\]"
        )
        edits: list[tuple[int, int, str, str]] = []
        for match in pattern.finditer(code_mask(body)):
            base_display = declared.get(match.group("base"))
            pointee = None if base_display is None else \
                self.type_emitter.display_pointee_type(base_display)
            extent = None if pointee is None else \
                self.type_emitter.display_record_length(pointee)
            if extent is None or extent <= 0:
                continue
            zero_name = self.type_emitter.display_member_name_at_offset(
                base_display, 0, True
            )
            zero_display = None if zero_name is None else \
                self.type_emitter.display_member_type(
                    base_display, zero_name, True, False
                )
            stride = None if zero_display is None else \
                self.type_emitter.display_integer_scalar_width(zero_display)
            width = self.type_emitter.display_integer_scalar_width(
                match.group("target")
            )
            if stride is None or width is None or stride <= 0 or width <= 0:
                continue
            offset = int(match.group("index")) * stride
            if offset + width > extent:
                continue
            if self.type_emitter.display_member_name_at_offset(
                    base_display, offset, True) is not None:
                continue
            target_type = self.type_emitter.display_type_expression(
                match.group("target")
            )
            if target_type is None:
                continue
            piece = f"STPiece<{offset},{width}>(*{match.group('base')})"
            replacement = piece if re.fullmatch(
                rf"undefined{width}", re.sub(r"\s+", "", target_type)
            ) else f"static_cast<{target_type}>({piece})"
            edits.append((
                match.start(), match.end(), replacement,
                f"{match.group('base')} scalar stride {stride} -> "
                f"record byte span +0x{offset:X}/{width}",
            ))
        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "scalarized_record_index_view", detail, address
            ))
        self.stats["scalarized_record_index_views"] += len(edits)
        return body

    def _materialize_exact_output_lifetimes(
        self,
        address: str,
        function: Mapping[str, Any],
        body: str,
    ) -> str:
        """Split an undeclared post-write stack lifetime at an exact output call.

        Ghidra sometimes reuses a narrow incoming stack parameter as storage for
        a later pointer-sized output and renders the second SSA lifetime as
        ``_param_N`` without a declaration.  Source assembly may split it only
        when a recovered utility explicitly identifies a neutral output
        parameter, the original lifetime is dead afterwards, and every typed
        consumer (or the function return) unanimously proves one concrete
        pointer type.  This preserves the machine stack alias without guessing
        an element type from the producer itself.
        """
        assert self.type_emitter is not None
        declared_types = self._declared_types(function, body)
        direct_call = re.compile(r"\bst::fn_([0-9A-F]{8})\s*\(")

        for _ in range(8):
            masked = code_mask(body)
            applied = False
            for producer_match in direct_call.finditer(masked):
                producer = self.function_by_address.get(producer_match.group(1))
                if producer is None or "RECOVERED_UTILITY_SEMANTICS" not in set(
                        producer.get("tags", ())):
                    continue
                producer_parameters = tuple(producer.get("parameters", ()))
                open_paren = masked.find(
                    "(", producer_match.start(), producer_match.end()
                )
                parsed = call_argument_spans(masked, open_paren, body)
                if parsed is None:
                    continue
                spans, call_close = parsed
                if len(spans) != len(producer_parameters):
                    continue

                for ordinal, ((argument_start, argument_end), parameter) in enumerate(
                        zip(spans, producer_parameters), 1):
                    parameter_type = re.sub(
                        r"\s+", "", str(parameter.get("type") or "")
                    )
                    parameter_name = str(parameter.get("name") or "")
                    if parameter_type not in {"void*", "undefined*", "byte*"} or \
                            not re.match(
                                r"(?i)^(?:out|result|destination|dest)",
                                parameter_name,
                            ):
                        continue
                    argument = body[argument_start:argument_end].strip()
                    output = re.fullmatch(
                        r"&\s*([A-Za-z_][A-Za-z0-9_]*)", argument
                    )
                    if output is None:
                        continue
                    original = output.group(1)
                    synthetic = "_" + original
                    if original not in declared_types or synthetic in declared_types:
                        continue

                    block = self._enclosing_block(masked, producer_match.start())
                    if block is None:
                        continue
                    block_start, block_end = block
                    token = re.compile(rf"\b{re.escape(synthetic)}\b")
                    occurrences = list(token.finditer(masked, block_start, block_end))
                    if not occurrences or any(
                            item.start() < call_close for item in occurrences):
                        continue
                    original_token = re.compile(rf"\b{re.escape(original)}\b")
                    if any(item.start() >= argument_end for item in
                            original_token.finditer(masked, block_start, block_end)):
                        continue

                    concrete_types: set[str] = set()
                    allowed: list[tuple[int, int]] = []
                    valid = True
                    for consumer_match in direct_call.finditer(
                            masked, call_close + 1, block_end):
                        consumer = self.function_by_address.get(
                            consumer_match.group(1)
                        )
                        if consumer is None:
                            continue
                        consumer_open = masked.find(
                            "(", consumer_match.start(), consumer_match.end()
                        )
                        consumer_args = call_argument_spans(
                            masked, consumer_open, body
                        )
                        if consumer_args is None:
                            continue
                        consumer_spans, _ = consumer_args
                        parameter_types, variadic = self._function_parameter_spec(
                            consumer
                        )
                        if len(consumer_spans) < len(parameter_types) or (
                                not variadic and
                                len(consumer_spans) != len(parameter_types)):
                            continue
                        for (start, end), target_display in zip(
                                consumer_spans, parameter_types):
                            if body[start:end].strip() != synthetic:
                                continue
                            pointer_kind = self.type_emitter.display_pointer_kind(
                                target_display
                            )
                            if pointer_kind is None:
                                valid = False
                                break
                            if pointer_kind == "concrete":
                                concrete_types.add(target_display)
                            allowed.append((start, end))
                        if not valid:
                            break
                    if not valid:
                        continue

                    return_display = self._function_result_type(function)
                    for return_match in re.finditer(
                            rf"\breturn\s+({re.escape(synthetic)})\s*;",
                            masked[call_close + 1:block_end]):
                        start = call_close + 1 + return_match.start(1)
                        end = call_close + 1 + return_match.end(1)
                        if return_display is None or \
                                self.type_emitter.display_pointer_kind(
                                    return_display) is None:
                            valid = False
                            break
                        if self.type_emitter.display_pointer_kind(
                                return_display) == "concrete":
                            concrete_types.add(return_display)
                        allowed.append((start, end))
                    if not valid or len(concrete_types) != 1:
                        continue

                    null_compare = re.compile(
                        rf"(?:\b{re.escape(synthetic)}\b\s*(?:==|!=)\s*nullptr|"
                        rf"nullptr\s*(?:==|!=)\s*\b{re.escape(synthetic)}\b)"
                    )
                    allowed.extend(
                        (item.start(), item.end())
                        for item in null_compare.finditer(
                            masked, call_close + 1, block_end
                        )
                    )
                    if any(not any(start <= item.start() and item.end() <= end
                                   for start, end in allowed)
                           for item in occurrences):
                        continue

                    display = next(iter(concrete_types))
                    declaration_type = self.type_emitter.display_type_expression(
                        display
                    )
                    if declaration_type is None:
                        continue
                    line_start = body.rfind("\n", 0, producer_match.start()) + 1
                    if body[line_start:producer_match.start()].strip():
                        continue
                    indent = body[line_start:producer_match.start()]
                    replacement_argument = "&" + synthetic
                    declaration = (
                        f"{indent}{declaration_type} {synthetic} = nullptr;\n"
                    )
                    body = (
                        body[:line_start] + declaration +
                        body[line_start:argument_start] + replacement_argument +
                        body[argument_end:]
                    )
                    self.issues.append(Issue(
                        "exact_output_lifetime_materialization",
                        f"call {producer_match.group(1)} argument {ordinal}: "
                        f"{original} -> {synthetic} as {display}",
                        address,
                    ))
                    self.stats["exact_output_lifetime_materializations"] += 1
                    declared_types[synthetic] = display
                    applied = True
                    break
                if applied:
                    break
            if not applied:
                break
        return body

    @staticmethod
    def _enclosing_block(masked: str, position: int) -> tuple[int, int] | None:
        stack: list[int] = []
        for index, value in enumerate(masked[:position]):
            if value == "{":
                stack.append(index)
            elif value == "}" and stack:
                stack.pop()
        if not stack:
            return None
        opening = stack[-1]
        closing = SourceTreeGenerator._matching_delimiter(
            masked, opening, "{", "}"
        )
        return None if closing is None else (opening + 1, closing)

    def _body_declaration(self, address: str, code: str) -> str:
        symbol = function_symbol(address)
        position = code.find(symbol)
        if position < 0:
            raise GenerationError(f"missing stable definition symbol for {address}")
        brace = code.find("{", position)
        if brace < 0:
            raise GenerationError(f"missing definition body for {address}")
        declaration = code[:brace].strip()
        declaration = declaration.replace(symbol, f"fn_{address}", 1)
        declaration = re.sub(r"\bthis\b", "st_this", declaration)
        return declaration

    def _used_global_names(self, function: Mapping[str, Any], code: str) -> set[str]:
        names: set[str] = set()
        for item in function.get("referenced_globals", ()):
            match = re.match(r"^[^ ]+ (.+?)(?: =|$)", str(item))
            if not match:
                continue
            name = match.group(1)
            collision_name = self.global_type_collisions.get(name)
            if collision_name and re.search(
                    rf"\b{re.escape(collision_name)}\b", code):
                names.add(name)
                continue
            if IDENTIFIER_RE.fullmatch(name) and re.search(rf"\b{re.escape(name)}\b", code):
                names.add(name)
            overlap = "_" + name
            if IDENTIFIER_RE.fullmatch(overlap) and re.search(rf"\b{re.escape(overlap)}\b", code):
                names.add(overlap)
        names.update(ADDRESS_NAME_RE.findall(code))
        # Some switch/jump-table companion symbols are present in globals.jsonl
        # but absent from a function's compact referenced-global list.  Their
        # address-bearing spelling is still an exact identity; retain the
        # original declaration when it matches that one exported global.
        for match in ADDRESS_CODED_GLOBAL_RE.finditer(code_only(code)):
            item = self.global_by_address.get(match.group("address").upper())
            name = match.group("name")
            if (item is not None and name == str(item.get("name") or "") and
                    IDENTIFIER_RE.fullmatch(name)):
                names.add(name)
        names.update(re.findall(r"\bst_global_[0-9A-F]{8}\b", code))
        names.update(re.findall(r"\bst_image_[0-9A-F]{8}\b", code))
        names.update(re.findall(r"\bst_string_[0-9A-F]{8}\b", code))
        return names

    def _used_import_names(self, code: str) -> set[str]:
        called = set(re.findall(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", code))
        return called & self.import_spellings

    def _emit_globals(self, names: set[str]) -> str:
        assert self.type_emitter is not None
        by_name = {item["name"]: item for item in self.globals}
        lines = ["#pragma once", "", '#include "st/recovered_types.hpp"', ""]
        for name in sorted(names):
            if name.startswith("st_string_"):
                lines.append(
                    f"extern const char {name}[]; // exact image string address"
                )
                self.stats["image_string_address_declarations"] += 1
                continue
            if name.startswith("st_image_"):
                lines.append(f"extern byte {name}; // exact image address, semantic type unresolved")
                self.stats["opaque_image_address_declarations"] += 1
                continue
            lookup = name[1:] if name.startswith("_DAT_") else name
            item = (self.global_alias_records.get(name) or by_name.get(name) or
                    by_name.get(lookup))
            if item is None:
                lines.append(f"extern undefined4 {name};")
                self.issues.append(Issue(
                    "global_type_fallback", f"{name}: no globals.jsonl data record"
                ))
                self.stats["fallback_global_declarations"] += 1
                continue
            type_text = str(item["type"])
            declaration_name = (
                name if name in self.global_alias_records else
                self.global_type_collisions.get(name, name)
            )
            provenance = (
                f" // image symbol: {item['name']}"
                if declaration_name != str(item["name"]) else ""
            )
            declaration = self.type_emitter.display_declaration(
                type_text, declaration_name
            )
            if declaration is None:
                lines.append(f"extern undefined4 {declaration_name};{provenance}")
                self.issues.append(Issue(
                    "global_type_fallback", f"{name}: unsupported display type {type_text!r}"
                ))
                self.stats["fallback_global_declarations"] += 1
            else:
                lines.append(f"extern {declaration};{provenance}")
        lines.append("")
        return "\n".join(lines)

    def _emit_imports(self, names: set[str]) -> str:
        assert self.type_emitter is not None
        fn_by_name: dict[str, list[dict[str, Any]]] = defaultdict(list)
        for record in self.types:
            if record["class"] == "FunctionDefinitionDB":
                fn_by_name[safe_identifier(record["name"].replace("@", "_"), "import")].append(record)
        lines = ["#pragma once", "", '#include "st/recovered_types.hpp"', ""]
        for name in sorted(names):
            candidates = fn_by_name.get(name, [])
            if len(candidates) == 1:
                declaration = self.type_emitter.declaration(candidates[0]["path"], name)
                lines.append(declaration + ";")
                self.stats["typed_import_declarations"] += 1
            else:
                lines.append(f"undefined4 __stdcall {name}(...);")
                reason = "no matching function definition" if not candidates else "ambiguous function definitions"
                self.issues.append(Issue("import_prototype_fallback", f"{name}: {reason}"))
                self.stats["fallback_import_declarations"] += 1
        lines.append("")
        return "\n".join(lines)

    def _emit_function_declarations(self) -> str:
        lines = [
            "#pragma once", "", '#include "st/recovered_types.hpp"', "",
            "namespace st {",
        ]
        for function in sorted(self.functions, key=lambda item: item["address"]):
            address = function["address"].upper()
            provenance = f"// {address} {function['qualified_name']}"
            if function.get("library") and not function.get("body_exported"):
                provenance += " [statically linked library; implementation excluded]"
            if function.get("body_exported") and address in self.body_declarations:
                lines.append(provenance)
                lines.append(self.body_declarations[address] + ";")
                continue
            signature_owner = self._thunk_signature_owner(function)
            # A transparent thunk is one address identity with the exact ABI of
            # its final target.  Ghidra can temporarily retain the old
            # ``unknown f(void)`` presentation on the thunk until the next
            # propagation pass.  Source assembly must not discard the already
            # recovered target prototype during that window.
            signature = str(signature_owner["signature"])
            signature = re.sub(r"^noreturn\s+", "[[noreturn]] ", signature)
            if (not signature_owner.get("body_exported") and
                    int(signature_owner.get("parameter_count") or
                        len(signature_owner.get("parameters", ()))) > 0 and
                    re.match(r"^\s*undefined\s+", signature)):
                # Bare ``undefined`` is Ghidra's unknown/default return, not a
                # proven one-byte ABI.  Preserve the complete x86 EAX
                # transport in the standalone source declaration.  A real
                # narrow return is exported as byte/char/undefined1 and is not
                # touched here.
                signature = re.sub(
                    r"^(\s*)undefined(?=\s+)", r"\1undefined4", signature,
                    count=1,
                )
                self.issues.append(Issue(
                    "default_return_transport",
                    f"{address}: unknown DefaultDataType return retained as "
                    "full x86 EAX word",
                    address,
                ))
            signature = self._rewrite_neutral_callable_parameter_declarations(
                address, signature_owner, signature
            )
            name = str(signature_owner["name"])
            replacement = f"fn_{function['address'].upper()}"
            signature, count = re.subn(
                re.escape(name) + r"(?=\s*\()", replacement, signature, count=1
            )
            signature = re.sub(r"\bthis\b", "st_this", signature)
            if count != 1:
                self.issues.append(Issue(
                    "function_declaration_fallback",
                    f"could not replace {name!r} in {function['signature']!r}",
                    function["address"].upper(),
                ))
                parameters = ", ".join(
                    f"{item['type']} {safe_identifier(item['name'] or f'param_{index}')}"
                    for index, item in enumerate(function.get("parameters", ()))
                ) or "void"
                signature = f"undefined4 {replacement}({parameters})"
            elif (not function.get("body_exported") and
                    re.match(r"^\s*undefined\s+", signature) and
                    int(signature_owner.get("parameter_count") or 0) == 0):
                # An unresolved imported/external boundary is not source-level
                # void merely because Ghidra uses DefaultDataType.  Preserve a
                # callable machine-word result and unknown argument tail until
                # an imported prototype is recovered.  This is declaration
                # assembly only; the address remains in the explicit audit.
                signature = re.sub(
                    r"^\s*undefined\s+.*$",
                    f"undefined4 {replacement}(...)",
                    signature,
                    flags=re.DOTALL,
                )
                self.issues.append(Issue(
                    "unresolved_external_prototype_boundary",
                    f"{address}: unsized external/thunk prototype retained as "
                    "machine-word variadic declaration",
                    address,
                ))
            lines.append(provenance)
            lines.append(signature + ";")
        for address in sorted(self.external_signatures):
            signatures = {item for item in self.external_signatures[address] if item}
            if len(signatures) != 1:
                lines.append(f"undefined4 {external_local_name(address)}(...);")
                self.issues.append(Issue(
                    "external_prototype_conflict",
                    f"{address}: {len(signatures)} resolved signatures",
                ))
                continue
            signature = next(iter(signatures))
            signature = re.sub(r"^noreturn\s+", "[[noreturn]] ", signature)
            name_match = re.search(r"~?[A-Za-z_][A-Za-z0-9_@]*\s*(?=\()", signature)
            if not name_match:
                lines.append(f"undefined4 {external_local_name(address)}(...);")
                self.issues.append(Issue(
                    "external_declaration_fallback", f"{address}: {signature!r}"
                ))
                continue
            external_name = external_local_name(address)
            signature = signature[:name_match.start()] + external_name + signature[name_match.end():]
            signature = re.sub(r"\bthis\b", "st_this", signature)
            lines.append(f"// {address}")
            lines.append(signature + ";")
        lines.extend(["}", ""])
        assert self.type_emitter is not None
        for owner_path in sorted(
            self.type_emitter.source_member_wrappers_by_record_path
        ):
            wrappers = self.type_emitter.source_member_wrappers_by_record_path[
                owner_path
            ]
            for wrapper in sorted(
                wrappers,
                key=lambda item: (
                    item.member_name, item.parameter_types, item.address
                ),
            ):
                parameters = ", ".join(wrapper.parameters)
                lines.append(
                    f"inline {wrapper.return_type} {wrapper.owner_name}::"
                    f"{wrapper.member_name}({parameters}) {{"
                )
                arguments = ", ".join(("this", *wrapper.argument_names))
                call = f"st::fn_{wrapper.address}({arguments})"
                if wrapper.return_type == "void":
                    lines.append(f"    {call};")
                else:
                    lines.append(f"    return {call};")
                lines.extend(["}", ""])
        return "\n".join(lines)

    @staticmethod
    def _emit_cmake(source_files: Sequence[Path]) -> str:
        lines = [
            "cmake_minimum_required(VERSION 3.20)",
            "project(SubmarineTitansRecovered LANGUAGES CXX)",
            "",
            "add_library(st_recovered OBJECT",
        ]
        lines.extend(f"    {relative_include(str(path))}" for path in source_files)
        lines.extend([
            ")",
            "target_include_directories(st_recovered PRIVATE include)",
            "target_compile_features(st_recovered PRIVATE cxx_std_17)",
            "if(MSVC)",
            "    target_compile_options(st_recovered PRIVATE /Zp1)",
            "else()",
            "    target_compile_options(st_recovered PRIVATE -fms-extensions)",
            "endif()",
            "",
            "# This object target intentionally does not link yet. Imports, image-backed",
            "# globals, library replacements, and unresolved indirect ABIs remain audited",
            "# extraction boundaries rather than generated zero-filled implementations.",
            "",
        ])
        return "\n".join(lines)

    def _emit_readme(self) -> str:
        return f"""# Generated Submarine Titans source projection

This directory is generated by `tools/st_source_tree.py` from the accepted
`decomp/ST.exe` corpus. Do not repair Ghidra facts by editing these files.

- Input manifest: `{self.receipt['current_manifest_sha256']}`
- Program semantic fingerprint: `{self.receipt['program_semantic_sha256']}`
- Address-stable implementation name: `st::fn_ADDRESS`
- Recovered original paths are used only when debug metadata proves them.
- Unplaced functions are grouped deterministically by owner or address page.
- Exact anonymous byte views are materialized only when a statically typed body
  references that record/offset pair.
- Typed physical-vtable slots receive non-virtual member wrappers; the explicit
  vtable field and packed recovered layout remain authoritative.
- Proven non-virtual `__thiscall` owners receive forwarding member methods while
  `st::fn_ADDRESS` remains the address-stable implementation identity.

The CMake target is an object-only compile boundary. It deliberately does not
define image-backed globals, resolve imports, invent indirect-call ABIs, or
silently stub missing game/library behavior. See `audit/summary.json` and
`audit/issues.jsonl` for the remaining source-assembly debt.

Run `python3 tools/st_compile_audit.py` from the repository root for a local,
address-stable per-translation-unit compiler audit.
"""

    def _write_manifest(self, root: Path) -> None:
        files: list[dict[str, Any]] = []
        for path in sorted(item for item in root.rglob("*") if item.is_file()):
            relative = relative_include(str(path.relative_to(root)))
            files.append({
                "path": relative,
                "size": path.stat().st_size,
                "sha256": sha256_file(path),
            })
        manifest = {
            "schema": GENERATOR_SCHEMA,
            "schema_version": GENERATOR_VERSION,
            "input_manifest_sha256": self.receipt["current_manifest_sha256"],
            "program_semantic_sha256": self.receipt["program_semantic_sha256"],
            "generator_sha256": self.generator_sha256,
            "input_files": dict(sorted(self.input_hashes.items())),
            "function_identity": "entry_address",
            "files": files,
        }
        (root / "source_manifest.json").write_text(json_dump(manifest), encoding="utf-8")
        marker = {
            "schema": GENERATOR_SCHEMA,
            "schema_version": GENERATOR_VERSION,
            "input_manifest_sha256": self.receipt["current_manifest_sha256"],
            "generator_sha256": self.generator_sha256,
        }
        (root / MARKER).write_text(json_dump(marker), encoding="utf-8")

    def _promote(self, staging: Path) -> None:
        if self.output.exists():
            marker = self.output / MARKER
            if not marker.is_file():
                raise GenerationError(
                    f"refusing to replace non-generated directory {self.output}"
                )
            previous = self.output.parent / f".{self.output.name}.source-previous-{os.getpid()}"
            if previous.exists():
                shutil.rmtree(previous)
            os.replace(self.output, previous)
            try:
                os.replace(staging, self.output)
            except Exception:
                os.replace(previous, self.output)
                raise
            shutil.rmtree(previous)
        else:
            os.replace(staging, self.output)


def discover_repo(explicit: str | None) -> Path:
    if explicit:
        return Path(explicit).resolve()
    candidate = Path(__file__).resolve().parent.parent
    if not (candidate / "AGENTS.md").is_file():
        raise GenerationError("cannot infer repository root; pass --repo")
    return candidate


def parse_args(argv: Sequence[str]) -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", help="repository root (inferred from this script)")
    parser.add_argument("--corpus", help="accepted corpus directory")
    parser.add_argument("--receipt", help="accepted export receipt")
    parser.add_argument("--output", help="generated source-tree directory")
    return parser.parse_args(argv)


def main(argv: Sequence[str] = ()) -> int:
    arguments = parse_args(argv or sys.argv[1:])
    try:
        repo = discover_repo(arguments.repo)
        corpus = Path(arguments.corpus).resolve() if arguments.corpus else repo / "decomp" / "ST.exe"
        receipt = Path(arguments.receipt).resolve() if arguments.receipt else repo / "recovery" / "ST.exe" / "export_receipt.json"
        output = Path(arguments.output).resolve() if arguments.output else repo / "src" / "ST.exe"
        generator = SourceTreeGenerator(repo, corpus, output, receipt)
        generator.generate()
        summary = read_json(output / "audit" / "summary.json")
        statistics = summary["statistics"]
        print(
            "Source tree generated: "
            f"{output} ({statistics.get('body_functions', 0)} functions, "
            f"{statistics.get('translation_units', 0)} translation units, "
            f"{sum(summary['issue_counts'].values())} audit issues)"
        )
        return 0
    except GenerationError as error:
        print(f"error: {error}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
