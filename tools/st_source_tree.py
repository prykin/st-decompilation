#!/usr/bin/env python3
"""Build a deterministic C++ source projection from an accepted ST corpus.

The Ghidra database remains authoritative.  This tool consumes only the
accepted text corpus, never opens the project, and never invents a class owner
or a semantic type.  Address-stable free functions form the extraction ABI;
the recovered Ghidra names are retained as provenance.
"""

from __future__ import annotations

import argparse
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
LOCAL_LABEL_RE = re.compile(r"(?m)^\s*(LAB_[0-9A-Fa-f]{8})\s*:")
ADDRESS_TAKEN_LABEL_RE = re.compile(r"&\s*(LAB_([0-9A-Fa-f]{8}))\b")
ADDRESS_CODED_FUNCTION_RE = re.compile(
    r"(?<![A-Za-z0-9_])"
    r"(?:(?:[A-Za-z_][A-Za-z0-9_]*)::\s*)*"
    r"(?:(?:thunk_)?FUN|sub)_[0-9A-Fa-f]{8}"
    r"(?![A-Za-z0-9_])"
)
QUALIFIED_ADDRESS_SYMBOL_RE = re.compile(
    r"(?<![A-Za-z0-9_])"
    r"(?:(?:[A-Za-z_][A-Za-z0-9_]*)::\s*)+"
    r"(st::fn_[0-9A-Fa-f]{8})"
    r"(?![A-Za-z0-9_])"
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
    "break", "case", "continue", "delete", "do", "else", "for", "goto",
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
    if token not in {rendered, "_" + rendered}:
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
                        )
                    )

    @staticmethod
    def _display_type_key(type_text: str) -> str:
        return re.sub(r"\s+", "", type_text.replace("const ", ""))

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
    def _canonical_score(record: Mapping[str, Any]) -> tuple[int, int, int, str]:
        path = str(record["path"])
        kind = str(record["class"])
        return (
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
        self, display_name: str, field_name: str, pointer_access: bool
    ) -> str | None:
        """Resolve a named member through the exact exported record graph.

        This follows typedefs and, for ``->`` only, one pointer edge.  Duplicate
        datatype paths are harmless only when every viable record yields the
        same rendered member type.
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
            matches = []
            raw_gap = re.fullmatch(r"field_0x([0-9A-Fa-f]+)", field_name)
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
                parameters = ", ".join(wrapper.parameters)
                lines.append(
                    f"inline {wrapper.return_type} {wrapper.owner_name}::"
                    f"{wrapper.member_name}({parameters}) {{"
                )
                arguments = ", ".join(("this", *wrapper.argument_names))
                call = f"(vtable->{wrapper.member_name})({arguments})"
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
        if keyword == "struct" and length > offset:
            lines.append(f"    byte _pad_{offset:04X}[{length - offset}];")
        if not record["detail"]["components"] and length > 0:
            lines.append(f"    byte _storage[{length}];")
        for wrapper in self.member_wrappers_by_record_path.get(record_path, ()):
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
        self.global_type_collisions: dict[str, str] = {}
        self.global_display_types: dict[str, str] = {}
        self.body_declarations: dict[str, str] = {}
        self.receipt: dict[str, Any] = {}
        self.type_emitter: TypeEmitter | None = None
        self.input_hashes: dict[str, str] = {}
        self.generator_sha256 = sha256_file(Path(__file__).resolve())

    def load(self) -> None:
        required = [
            self.corpus / "manifest.json", self.corpus / "functions.json",
            self.corpus / "types.jsonl", self.corpus / "globals.jsonl",
            self.corpus / "imports.json", self.corpus / "pseudocode_runtime.h",
            self.corpus / "call_relations.jsonl",
            self.receipt_path,
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
            "imports.json", "call_relations.jsonl", "pseudocode_runtime.h",
        ):
            self.input_hashes[name] = sha256_file(self.corpus / name)
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
        self.types = read_jsonl(self.corpus / "types.jsonl")
        self.globals = read_jsonl(self.corpus / "globals.jsonl")
        self.global_by_address = {
            str(item["address"]).upper(): item for item in self.globals
        }
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
        self._preload_body_declarations()
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
            self.type_emitter.observe_field_accesses(transformed_code)
            self.body_declarations[address] = self._body_declaration(address, transformed_code)
            group = self._source_group(function)
            groups[group].append((function, transformed, body_line_origin))
            used_globals.update(
                self._used_global_names(function, transformed_code)
            )
            used_imports.update(self._used_import_names(transformed_code))

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
            "    if constexpr (std::is_pointer_v<Source>)\n"
            "        return reinterpret_cast<Target>(value);\n"
            "    else\n"
            "        return reinterpret_cast<Target>(static_cast<uintptr_t>(value));\n"
            "}\n"
            "template <typename Target, typename Source>\n"
            "inline Target machine_word_boundary_cast(Source value) noexcept {\n"
            "    static_assert(std::is_integral_v<Target>);\n"
            "    static_assert(std::is_pointer_v<Source> || std::is_integral_v<Source>);\n"
            "    if constexpr (std::is_pointer_v<Source>)\n"
            "        return static_cast<Target>(reinterpret_cast<uintptr_t>(value));\n"
            "    else\n"
            "        return static_cast<Target>(value);\n"
            "}\n"
            "inline char *mutable_c_string(const char *value) noexcept {\n"
            "    return const_cast<char *>(value);\n"
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
                chunks.append(
                    f"// {address} {function['qualified_name']}\n"
                    f"#line {body_line_origin} "
                    f"\"decomp/ST.exe/functions/{address}/decomp.c\"\n"
                    f"{body.rstrip()}\n\n"
                )
            target.write_text("".join(chunks), encoding="utf-8")
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

    def _transform_body(self, function: Mapping[str, Any], body: str) -> str:
        body = re.sub(r"^#include[^\n]*\n+", "", body, count=1)
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
                r"(?<![A-Za-z0-9_])(?:"
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
        def replace(piece: str) -> str:
            nonlocal definition_rewritten
            result = piece
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
                if not addresses and encoded is not None:
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
            transformed, ambiguous
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
        transformed = self._materialize_tagged_lifetimes(address, transformed)
        transformed = self._materialize_exact_output_lifetimes(
            address, function, transformed
        )
        transformed = self._repair_exact_field_names(address, function, transformed)
        transformed = self._repair_exact_pointer_boundaries(
            address, function, transformed
        )
        if not definition_rewritten:
            self.issues.append(Issue(
                "definition_not_rewritten",
                f"could not find {function['qualified_name']!r} in exported definition",
                address,
            ))
        return transformed

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
                return parsed
        return (
            tuple(str(item.get("type") or "") for item in function.get("parameters", ())),
            bool(function.get("varargs")),
        )

    @staticmethod
    def _declared_types(
        function: Mapping[str, Any], body: str
    ) -> dict[str, str]:
        result: dict[str, str] = {}
        for parameter in function.get("parameters", ()):
            name = str(parameter.get("name") or "")
            display = str(parameter.get("type") or "")
            if name and display:
                result[name] = display
        masked = code_mask(body)
        declaration = re.compile(
            r"(?m)^[ \t]*(?P<base>(?:const\s+)?[A-Za-z_][A-Za-z0-9_:]*)"
            r"[ \t]+(?P<stars>\*+)?[ \t]*(?P<name>[A-Za-z_][A-Za-z0-9_]*)"
            r"(?P<array>[ \t]*\[[^\]\n]+\])?[ \t]*(?:;|=)"
        )
        for match in declaration.finditer(masked):
            if match.group("base") in DECLARATION_NON_TYPES:
                continue
            stars = match.group("stars") or ""
            # An array identifier decays to its element pointer at a call or
            # assignment boundary.  Pointer-to-array cases retain an explicit
            # '&' and are handled as address-storage evidence below.
            if match.group("array"):
                stars += "*"
            result[match.group("name")] = (
                match.group("base") + (" " + stars if stars else "")
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

    def _apply_display_postfix(self, display: str, suffix: str) -> str | None:
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
                display, member.group(0), pointer_access
            ) or ""
            if not display:
                return None
            index += member.end()
        return display

    def _simple_expression_display(
        self, expression: str, declared_types: Mapping[str, str]
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
            display = self._simple_expression_display(operand, declared_types)
            return None if display is None else \
                self.type_emitter.display_pointee_type(display)
        if text.startswith("("):
            closing = self._matching_delimiter(text, 0, "(", ")")
            if closing is None:
                return None
            if closing == len(text) - 1:
                return self._simple_expression_display(
                    text[1:closing], declared_types
                )
            suffix = text[closing + 1:]
            if not re.match(r"\s*(?:\.|->|\[)", suffix):
                return None
            display = self._simple_expression_display(
                text[1:closing], declared_types
            )
            return None if display is None else \
                self._apply_display_postfix(display, suffix)
        base = re.match(r"[A-Za-z_][A-Za-z0-9_]*", text)
        if base is None:
            return None
        name = base.group(0)
        display = declared_types.get(name) or self.global_display_types.get(name)
        if not display:
            return None
        return self._apply_display_postfix(display, text[base.end():])

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
        return BoundaryValue(display, "scalar")

    def _boundary_expression(
        self, expression: str, declared_types: Mapping[str, str]
    ) -> BoundaryValue | None:
        assert self.type_emitter is not None
        compact = expression.strip()
        if compact == "nullptr":
            return BoundaryValue("nullptr", "null_pointer")
        if re.fullmatch(r"st::fn_[0-9A-F]{8}", compact):
            return BoundaryValue("function address", "concrete_pointer", True)
        if re.fullmatch(r'"(?:\\.|[^"\\])*"', compact, re.DOTALL):
            return BoundaryValue("const char *", "const_char_pointer", True)
        if re.fullmatch(
                r'"(?:\\.|[^"\\])*"\s*[+-]\s*.+', compact, re.DOTALL):
            return BoundaryValue("const char *", "const_char_pointer", True)
        helper = re.match(
            r"^st::(?:pointer_boundary_cast|machine_word_boundary_cast)"
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
                        r"_?(?:DAT|PTR)_[0-9A-Fa-f]{8}", based.group("base")):
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
                    r"stack0x[0-9A-Fa-f]+)", named.group(0)):
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
            r"^(?P<base>[A-Za-z_][A-Za-z0-9_]*)\b(?P<tail>.+)$",
            compact,
            re.DOTALL,
        )
        if arithmetic and self._safe_boundary_arithmetic_tail(
                arithmetic.group("tail")):
            base = arithmetic.group("base")
            display = declared_types.get(base) or self.global_display_types.get(base)
            if display:
                pointer_kind = self.type_emitter.display_pointer_kind(display)
                if pointer_kind:
                    return BoundaryValue(display, pointer_kind + "_pointer")
                if re.sub(r"\s+", "", display) == "undefined4":
                    return BoundaryValue(display, "generic_word")
        return None

    @staticmethod
    def _safe_boundary_arithmetic_tail(tail: str) -> bool:
        """Accept expression-only address arithmetic, including indexes.

        Calls, member-call syntax, commas, conditionals and assignments remain
        excluded.  Brackets and dots are needed for exact array-index terms
        such as ``base + index[1] * 4`` which Ghidra commonly emits.
        """
        if not re.fullmatch(r"[\s+\-*/%<>&|^().\[\]0-9A-Za-z_]+", tail):
            return False
        return re.search(r"\b[A-Za-z_][A-Za-z0-9_]*\s*\(", tail) is None

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
                return None
            # Every object pointer converts to void * implicitly in C++ just as
            # it does in the decompiler's C dialect.  Emitting a helper there
            # adds noise without solving a language-boundary incompatibility.
            if normalized_target in {"void*", "constvoid*"} and \
                    source.kind.endswith("_pointer"):
                return None
            if normalized_target == "char*" and \
                    source.kind == "const_char_pointer":
                return (
                    f"st::mutable_c_string({expression})",
                    "const char * -> char *",
                )
            if normalized_target == normalized_source:
                return None
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
            return (
                f"static_cast<{target_type}>(({expression}).{source.storage_member})",
                f"four-byte {source.display_type} -> {target_display}",
            )
        return None

    def _function_result_type(self, function: Mapping[str, Any]) -> str | None:
        address = str(function.get("address") or "").upper()
        declaration = self.body_declarations.get(address)
        if declaration:
            result = self._signature_result_type({"signature": declaration})
            if result:
                return result
        return self._signature_result_type(function)

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
                r"(?P<op>->|\.)(?P<field>field_0x(?P<offset>[0-9A-Fa-f]+))"
            )
            edits: list[tuple[int, int, str, str]] = []
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
                    if converted is not None:
                        replacement, transition = converted
                        edits.append((start, end, replacement,
                            f"call {match.group(1)} argument {ordinal}: {transition}"))

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
                    if converted is not None:
                        replacement, transition = converted
                        edits.append((start, end, replacement,
                            f"external {match.group(1)} argument {ordinal}: {transition}"))

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
                    if converted is not None:
                        replacement, transition = converted
                        edits.append((start, end, replacement,
                            f"indirect {callee} argument {ordinal}: {transition}"))

            # Prefer the innermost boundary when nested calls overlap, then
            # rescan the updated body.  The helper's result type is recognized
            # above, so a later pass can safely repair the enclosing argument.
            selected: list[tuple[int, int, str, str]] = []
            for edit in sorted(edits, key=lambda item: (item[1] - item[0], item[0])):
                if any(edit[0] < old[1] and edit[1] > old[0] for old in selected):
                    continue
                selected.append(edit)
            if not selected:
                break
            for start, end, replacement, detail in sorted(selected, reverse=True):
                body = body[:start] + replacement + body[end:]
                self.issues.append(Issue(
                    "exact_pointer_boundary_cast", detail, address
                ))
            self.stats["exact_pointer_boundary_casts"] += len(selected)

        masked = code_mask(body)
        edits = []

        assignment_patterns = (
            re.compile(r"(?m)^[ \t]*(?P<lhs>[^=\n]+?)[ \t]*=[ \t]*(?!=)"),
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
        for assignment in assignment_patterns:
            for match in assignment.finditer(masked):
                lhs = match.group("lhs").strip()
                target_display = self._simple_expression_display(lhs, declared_types)
                if not target_display:
                    continue
                start = match.end()
                end = statement_expression_end(masked, start)
                if end is None or (start, end) in claimed_assignments:
                    continue
                source = self._boundary_expression(
                    body[start:end], declared_types
                )
                if source is None:
                    continue
                converted = self._boundary_replacement(
                    target_display, source, body[start:end]
                )
                if converted is None:
                    continue
                replacement, transition = converted
                detail = f"assignment {lhs}: {transition}"
                edits.append((start, end, replacement, detail))
                claimed_assignments.add((start, end))

        for start, end, replacement, detail in sorted(edits, reverse=True):
            body = body[:start] + replacement + body[end:]
            self.issues.append(Issue(
                "exact_pointer_boundary_cast", detail, address
            ))
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
        return body

    def _rewrite_ambiguous_calls(
        self, body: str, candidates: Mapping[str, set[str]]
    ) -> tuple[str, int, dict[str, set[str]]]:
        if not candidates:
            return body, 0, {}
        masked = code_mask(body)
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
        names.update(re.findall(r"\bst_global_[0-9A-F]{8}\b", code))
        names.update(re.findall(r"\bst_image_[0-9A-F]{8}\b", code))
        return names

    def _used_import_names(self, code: str) -> set[str]:
        called = set(re.findall(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", code))
        return called & self.import_spellings

    def _emit_globals(self, names: set[str]) -> str:
        assert self.type_emitter is not None
        by_name = {item["name"]: item for item in self.globals}
        lines = ["#pragma once", "", '#include "st/recovered_types.hpp"', ""]
        for name in sorted(names):
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
            if function.get("body_exported") and address in self.body_declarations:
                lines.append(f"// {address} {function['qualified_name']}")
                lines.append(self.body_declarations[address] + ";")
                continue
            signature = str(function["signature"])
            signature = re.sub(r"^noreturn\s+", "[[noreturn]] ", signature)
            name = str(function["name"])
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
            lines.append(f"// {function['address'].upper()} {function['qualified_name']}")
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
