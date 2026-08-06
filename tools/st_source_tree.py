#!/usr/bin/env python3
"""Build a deterministic C++ source projection from an accepted ST corpus.

The Ghidra database remains authoritative.  This tool consumes only the
accepted text corpus, never opens the project, and never invents a class owner
or a semantic type.  Address-stable free functions form the extraction ABI;
the recovered Ghidra names are retained as provenance.
"""

from __future__ import annotations

import argparse
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
        self.materialized_gap_fields = 0
        self._prepare_names()
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
                f"field_{component_offset:04X}_{component['ordinal']}"
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
        self.types: list[dict[str, Any]] = []
        self.imports: list[dict[str, Any]] = []
        self.import_spellings: set[str] = set()
        self.call_relations: list[dict[str, Any]] = []
        self.relations_by_caller: dict[str, list[dict[str, Any]]] = defaultdict(list)
        self.external_signatures: dict[str, set[str]] = defaultdict(set)
        self.global_type_collisions: dict[str, str] = {}
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
        self.types = read_jsonl(self.corpus / "types.jsonl")
        self.globals = read_jsonl(self.corpus / "globals.jsonl")
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
            self.body_declarations[address] = self._body_declaration(
                address, transformed_code
            )
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
            "#define this st_this\n",
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

    def _transform_body(self, function: Mapping[str, Any], body: str) -> str:
        body = re.sub(r"^#include[^\n]*\n+", "", body, count=1)
        address = str(function["address"]).upper()
        own_candidates = [
            str(function["qualified_name"]),
            safe_identifier(str(function["qualified_name"]), "function"),
            str(function["name"]),
            safe_identifier(str(function["name"]), "function"),
        ]
        own_spellings = list(dict.fromkeys(own_candidates))
        own_pattern = re.compile(
            r"(?<![A-Za-z0-9_])(?:"
            + "|".join(re.escape(item) for item in own_spellings)
            + r")(?=\s*\()"
        )
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
        for spelling, addresses in replacements.items():
            if len(addresses) == 1:
                resolved[spelling] = address_symbol(next(iter(addresses)))
            else:
                self.issues.append(Issue(
                    "ambiguous_direct_call",
                    f"{spelling}: {', '.join(sorted(addresses))}",
                    address,
                ))
                self.stats["ambiguous_direct_calls"] += 1

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
            return result

        transformed = transform_code(body, replace)
        if not definition_rewritten:
            self.issues.append(Issue(
                "definition_not_rewritten",
                f"could not find {function['qualified_name']!r} in exported definition",
                address,
            ))
        return transformed

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
        return names

    def _used_import_names(self, code: str) -> set[str]:
        called = set(re.findall(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", code))
        return called & self.import_spellings

    def _emit_globals(self, names: set[str]) -> str:
        assert self.type_emitter is not None
        by_name = {item["name"]: item for item in self.globals}
        lines = ["#pragma once", "", '#include "st/recovered_types.hpp"', ""]
        for name in sorted(names):
            lookup = name[1:] if name.startswith("_DAT_") else name
            item = by_name.get(name) or by_name.get(lookup)
            if item is None:
                lines.append(f"extern undefined4 {name};")
                self.issues.append(Issue(
                    "global_type_fallback", f"{name}: no globals.jsonl data record"
                ))
                self.stats["fallback_global_declarations"] += 1
                continue
            type_text = str(item["type"])
            declaration_name = self.global_type_collisions.get(name, name)
            provenance = (
                f" // image symbol: {name}"
                if declaration_name != name else ""
            )
            if type_text in {"pointer", "word", "byte", "dword", "undefined1", "undefined2", "undefined4", "undefined8", "int", "short", "uint", "ushort", "float", "double"}:
                lines.append(f"extern {type_text} {declaration_name};{provenance}")
            elif IDENTIFIER_RE.fullmatch(type_text.rstrip(" *")):
                lines.append(f"extern {type_text} {declaration_name};{provenance}")
            else:
                lines.append(f"extern undefined4 {declaration_name};{provenance}")
                self.issues.append(Issue(
                    "global_type_fallback", f"{name}: unsupported display type {type_text!r}"
                ))
                self.stats["fallback_global_declarations"] += 1
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
