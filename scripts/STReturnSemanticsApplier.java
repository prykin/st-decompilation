// Apply reviewed return semantics produced by STReturnSemanticsAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Return Semantics

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SourceType;

public class STReturnSemanticsApplier extends GhidraScript {
    private static final String MARKER = "[STReturnSemanticsApplier]";
    private static final String TAG = "RECOVERED_RETURN_SEMANTICS";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "function_address", "expected_function", "expected_signature",
            "expected_return_type", "expected_return_source", "expected_noreturn",
            "proposed_return_type", "proposed_noreturn", "semantic_id",
            "roundtrip_call_sites", "expected_call_overrides",
            "roundtrip_return_ordinals", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        int tx = currentProgram.startTransaction("Apply return semantics"); boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) { monitor.checkCancelled(); apply(row); }
            commit = true;
        }
        finally { currentProgram.endTransaction(tx, commit); }
        Path output = file.toPath().toAbsolutePath().getParent().resolve("return_semantics_apply_report.tsv");
        writeReport(output);
        println("Return semantics: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String addressText = row.get("function_address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(addressText, row.get("semantic_id"), "disabled", "apply=0")); return;
        }
        // Refuse stale proposal files emitted by the short-lived unsafe rollback heuristic.
        if ("revert_unsafe_ignored_eax_void".equals(row.get("semantic_id"))) {
            report.add(new Report(addressText, row.get("semantic_id"), "disabled",
                "obsolete unsafe rollback proposal; rerun STReturnSemanticsAnalyzer")); return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Function function = address == null ? null : currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) { conflict(row, "function missing"); return; }
            DataType proposed = resolve(row.get("proposed_return_type"));
            if (proposed == null) { conflict(row, "proposed return type missing"); return; }
            boolean proposedNoReturn = Boolean.parseBoolean(row.get("proposed_noreturn"));
            boolean baseline = function.getName(true).equals(row.get("expected_function")) &&
                function.getPrototypeString(true, true).equals(row.get("expected_signature")) &&
                typeSpec(function.getReturnType()).equals(row.get("expected_return_type")) &&
                function.getReturn().getSource().toString().equals(row.get("expected_return_source")) &&
                function.hasNoReturn() == Boolean.parseBoolean(row.get("expected_noreturn"));
            if (!baseline || function.getReturn().getSource() == SourceType.USER_DEFINED ||
                    function.getReturn().getSource() == SourceType.IMPORTED) {
                report.add(new Report(addressText, row.get("semantic_id"), "preserved",
                    "stale baseline or manual return type")); return;
            }
            List<CallOverridePlan> overrides = planRoundTripOverrides(function, row,
                proposed);
            boolean functionChange = !function.getReturnType().isEquivalent(proposed) ||
                function.hasNoReturn() != proposedNoReturn;
            if (functionChange) {
                function.setReturnType(proposed, SourceType.ANALYSIS);
                function.setNoReturn(proposedNoReturn);
                function.addTag(TAG);
            }
            int overrideChanges = applyRoundTripOverrides(function, row, overrides);
            if ("repair_unsafe_eax_rollback".equals(row.get("semantic_id")))
                removeCommentBlock(function, "revert_unsafe_ignored_eax_void");
            if ("repair_false_machine_eax_return".equals(row.get("semantic_id")))
                removeCommentBlock(function, "machine_eax_return");
            if (functionChange || overrideChanges > 0) {
                // A semantic family may legitimately refine its proposed type on a later
                // evidence pass (for example undefined4 -> int). Refresh only that exact
                // automation-owned block; ordinary unchanged passes remain byte-idempotent.
                removeCommentBlock(function, row.get("semantic_id"));
                addComment(function, row);
            }
            report.add(new Report(addressText, row.get("semantic_id"),
                functionChange || overrideChanges > 0 ? "applied" : "unchanged",
                row.get("proposed_return_type") + ", noreturn=" + proposedNoReturn +
                    ", direct_call_overrides=" + overrideChanges));
        }
        catch (PreserveException exception) {
            report.add(new Report(addressText, row.get("semantic_id"), "preserved",
                exception.getMessage()));
        }
        catch (Exception exception) { conflict(row, message(exception)); }
    }

    private List<CallOverridePlan> planRoundTripOverrides(Function function,
            Map<String, String> row, DataType returned) throws Exception {
        String sitesText = row.get("roundtrip_call_sites");
        if (sitesText == null || sitesText.isBlank()) return List.of();
        if (!"pointer_producer_argument_roundtrip".equals(row.get("semantic_id")))
            throw new PreserveException("call-site override attached to unrelated semantic");
        // A signature fingerprint itself contains semicolons, so row collections use
        // a pipe delimiter.  The former semicolon delimiter made every non-empty
        // fingerprint look like several callsites and silently preserved the repair.
        String[] sites = sitesText.split("\\|", -1);
        String[] expected = row.get("expected_call_overrides").split("\\|", -1);
        String[] ordinals = row.get("roundtrip_return_ordinals").split("\\|", -1);
        if (sites.length != expected.length || sites.length != ordinals.length)
            throw new PreserveException("call-site override baseline count changed");
        List<CallOverridePlan> result = new ArrayList<>();
        for (int index = 0; index < sites.length; index++) {
            Address callAddress = currentProgram.getAddressFactory().getAddress(sites[index]);
            Instruction call = callAddress == null ? null :
                currentProgram.getListing().getInstructionAt(callAddress);
            if (call == null || !function.getBody().contains(callAddress) ||
                    !"CALL".equalsIgnoreCase(call.getMnemonicString()))
                throw new PreserveException("roundtrip call is stale: " + sites[index]);
            Function called = resolveThunk(directCalledFunction(call));
            if (called == null || called.hasVarArgs())
                throw new PreserveException("roundtrip callee is unresolved or variadic: " +
                    sites[index]);
            FunctionDefinition existing = existingOverride(function, callAddress);
            String current = existing == null ? "none" : fingerprint(existing);
            if (!current.equals(expected[index]))
                throw new PreserveException("stale/foreign call override at " + sites[index] +
                    ": expected " + expected[index] + ", found " + current);
            FunctionDefinitionDataType desired = directCallOverride(called, callAddress,
                returned);
            if (existing != null && !fingerprint(desired).equals(current) &&
                    !hasCallMarker(callAddress))
                throw new PreserveException("foreign call override preserved at " +
                    sites[index]);
            int returnedOrdinal;
            try { returnedOrdinal = Integer.parseInt(ordinals[index]); }
            catch (NumberFormatException exception) {
                throw new PreserveException("invalid returned parameter ordinal at " +
                    sites[index]);
            }
            if (returnedOrdinal < 0 || returnedOrdinal >= called.getParameterCount())
                throw new PreserveException("returned parameter ordinal out of range at " +
                    sites[index]);
            result.add(new CallOverridePlan(callAddress, desired, existing,
                returnedOrdinal));
        }
        return result;
    }

    private int applyRoundTripOverrides(Function function, Map<String, String> row,
            List<CallOverridePlan> plans) throws Exception {
        int changed = 0;
        for (CallOverridePlan plan : plans) {
            String desired = fingerprint(plan.desired);
            boolean overrideChange = plan.existing == null ||
                !desired.equals(fingerprint(plan.existing));
            if (overrideChange) {
                if (hasCallMarker(plan.address)) deleteOverrides(function, plan.address);
                HighFunctionDBUtil.writeOverride(function, plan.address, plan.desired);
            }
            boolean markerChange = setCallMarker(plan.address, desired,
                plan.returnedOrdinal);
            if (overrideChange || markerChange) changed++;
        }
        return changed;
    }

    private FunctionDefinitionDataType directCallOverride(Function called, Address call,
            DataType returned) throws Exception {
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            "roundtrip_" + call, dataTypes);
        desired.setCallingConvention(called.getCallingConventionName());
        desired.setReturnType(returned);
        Parameter[] parameters = called.getParameters();
        ParameterDefinition[] arguments = new ParameterDefinition[parameters.length];
        for (int index = 0; index < parameters.length; index++)
            arguments[index] = new ParameterDefinitionImpl(parameters[index].getName(),
                parameters[index].getFormalDataType(),
                "exact direct-call parameter; return overridden by machine roundtrip proof");
        desired.setArguments(arguments);
        return desired;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private Function resolveThunk(Function function) {
        java.util.Set<Address> seen = new java.util.HashSet<>();
        while (function != null && function.isThunk() &&
                seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    private FunctionDefinition existingOverride(Function function, Address call) {
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return null;
        FunctionDefinition agreed = null;
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null ||
                    !(value.getDataType() instanceof FunctionDefinition definition)) continue;
            if (agreed != null && !fingerprint(agreed).equals(fingerprint(definition)))
                return null;
            agreed = definition;
        }
        return agreed;
    }

    private void deleteOverrides(Function function, Address call) {
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return;
        List<DataTypeSymbol> remove = new ArrayList<>();
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value != null) remove.add(value);
        }
        for (DataTypeSymbol value : remove) {
            if (value.getSymbol().delete()) value.cleanupUnusedOverride();
        }
    }

    private String fingerprint(FunctionDefinition definition) {
        List<String> parts = new ArrayList<>();
        parts.add(definition.getCallingConventionName());
        parts.add(typeSpec(definition.getReturnType()));
        for (ParameterDefinition argument : definition.getArguments())
            parts.add(typeSpec(argument.getDataType()));
        return String.join(";", parts);
    }

    private boolean hasCallMarker(Address address) {
        String comment = currentProgram.getListing().getComment(CommentType.EOL, address);
        return comment != null && comment.contains(
            MARKER + " pointer_producer_argument_roundtrip_call");
    }

    private boolean setCallMarker(Address address, String signature,
            int returnedOrdinal) {
        String prefix = MARKER + " pointer_producer_argument_roundtrip_call";
        String marker = prefix + "; return_parameter_ordinal=" + returnedOrdinal +
            "; signature=" + signature;
        String old = currentProgram.getListing().getComment(CommentType.EOL, address);
        if (marker.equals(old)) return false;
        if (old == null || old.isBlank()) {
            currentProgram.getListing().setComment(address, CommentType.EOL, marker);
            return true;
        }
        if (!old.contains(prefix)) {
            currentProgram.getListing().setComment(address, CommentType.EOL,
                old + "\n" + marker);
            return true;
        }
        List<String> lines = new ArrayList<>();
        boolean replaced = false;
        for (String line : old.split("\\R", -1)) {
            if (line.contains(prefix)) {
                if (!replaced) lines.add(marker);
                replaced = true;
            }
            else lines.add(line);
        }
        String updated = String.join("\n", lines);
        if (updated.equals(old)) return false;
        currentProgram.getListing().setComment(address, CommentType.EOL, updated);
        return true;
    }
    private void addComment(Function function, Map<String, String> row) {
        String block = MARKER + " " + row.get("semantic_id") + ".\nEvidence: " + row.get("evidence");
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(MARKER + " " + row.get("semantic_id"))) function.setComment(old + "\n\n" + block);
    }
    private void removeCommentBlock(Function function, String semantic) {
        String comment = function.getComment();
        if (comment == null || comment.isBlank()) return;
        String marker = MARKER + " " + semantic;
        int start = comment.indexOf(marker);
        if (start < 0) return;
        int end = comment.indexOf("\n\n[", start + marker.length());
        if (end < 0) end = comment.length();
        else end += 2; // Preserve the '[' which starts the following block.
        int removeStart = start;
        while (removeStart > 0 && comment.charAt(removeStart - 1) == '\n') removeStart--;
        String before = comment.substring(0, removeStart).trim();
        String after = comment.substring(end).trim();
        String cleaned = before.isBlank() ? after :
            after.isBlank() ? before : before + "\n\n" + after;
        function.setComment(cleaned.isBlank() ? null : cleaned);
    }
    private DataType resolve(String specification) {
        if (specification.startsWith("pointer:")) {
            DataType base = resolve(specification.substring("pointer:".length()));
            return base == null ? null : new PointerDataType(base,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private void conflict(Map<String, String> row, String detail) {
        report.add(new Report(row.get("function_address"), row.get("semantic_id"), "conflict", detail));
    }
    private long count(String status) { return report.stream().filter(r -> r.status.equals(status)).count(); }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tsemantic_id\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + row.semantic + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Path to return_semantics_proposals.tsv is required");
        return askFile("Select return_semantics_proposals.tsv", "Apply");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1); List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++) row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... columns) {
        for (String column : columns) if (!input.header.contains(column))
            throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private static boolean enabled(String value) { return "1".equals(value) || "true".equalsIgnoreCase(value); }
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private static String message(Exception e) { return e.getMessage() == null ? e.getClass().getSimpleName() : e.getMessage(); }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String address, String semantic, String status, String detail) {}
    private record CallOverridePlan(Address address, FunctionDefinitionDataType desired,
        FunctionDefinition existing, int returnedOrdinal) {}
    private static class PreserveException extends Exception {
        PreserveException(String message) { super(message); }
    }
}
