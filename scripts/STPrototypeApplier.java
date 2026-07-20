// Apply reviewed prototype_proposals.tsv one parameter/return at a time.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Prototypes

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STPrototypeApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_PROTOTYPE";
    private static final String MARKER = "[STPrototypeApplier]";
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "type_apply", "name_apply", "repair", "function_address",
            "expected_function", "target_kind", "target_ordinal", "expected_target_name",
            "expected_target_type", "expected_target_source", "proposed_name",
            "proposed_type", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();
        int transaction = currentProgram.startTransaction("Apply recovered prototypes");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled(); applyRow(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.getAbsoluteFile().getParentFile().toPath()
            .resolve("prototype_apply_report.tsv");
        writeReport(output);
        println("Prototypes: applied=" + count("applied") + ", partial=" +
            count("partial") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output.toAbsolutePath().normalize());
    }

    private void applyRow(Map<String, String> row) {
        if (enabled(row.get("repair"))) {
            report.add(new ReportRow(row.get("function_address"),
                row.get("target_kind") + ":" + row.get("target_ordinal"), "disabled",
                "repair row; use STPrototypeRepairAnalyzer/Applier first"));
            return;
        }
        boolean typeApply = enabled(row.get("type_apply"));
        boolean nameApply = enabled(row.get("name_apply"));
        Address address = address(row.get("function_address"));
        String targetLabel = row.get("target_kind") + ":" + row.get("target_ordinal");
        if (!typeApply && !nameApply) {
            report.add(new ReportRow(addr(address), targetLabel, "disabled", "apply flags are 0"));
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            report.add(new ReportRow(addr(address), targetLabel, "conflict", "function missing"));
            return;
        }
        try {
            if (!function.getName(true).equals(unt(row.get("expected_function"))) &&
                    !hasTag(function, TAG)) {
                report.add(new ReportRow(addr(address), targetLabel, "preserved",
                    "function identity changed")); return;
            }
            Parameter target = "return".equals(row.get("target_kind")) ? function.getReturn() :
                explicitParameter(function, Integer.parseInt(row.get("target_ordinal")));
            if (target == null) {
                report.add(new ReportRow(addr(address), targetLabel, "conflict", "target missing"));
                return;
            }
            String currentType = typeSpecification(target.getDataType());
            String currentName = target.getName() == null ? "" : target.getName();
            String currentSource = target.getSource().toString();
            boolean baseline = currentType.equals(unt(row.get("expected_target_type"))) &&
                currentName.equals(unt(row.get("expected_target_name"))) &&
                currentSource.equals(row.get("expected_target_source"));
            boolean manual = protectedSource(target.getSource());
            List<String> details = new ArrayList<>();
            boolean changed = false, preserved = false, conflict = false;
            if (typeApply) {
                DataType proposedType = resolveType(unt(row.get("proposed_type")));
                if (proposedType == null) {
                    details.add("type=conflict(missing proposed type)"); conflict = true;
                }
                else if (proposedType.isEquivalent(target.getDataType()))
                    details.add("type=unchanged");
                else if (manual || !baseline) {
                    details.add("type=preserved(stale/manual target)"); preserved = true;
                }
                else {
                    if ("return".equals(row.get("target_kind")))
                        function.setReturnType(proposedType, SourceType.ANALYSIS);
                    else target.setDataType(proposedType, SourceType.ANALYSIS);
                    details.add("type=applied(" + proposedType.getPathName() + ")"); changed = true;
                }
            }
            if (nameApply && !"return".equals(row.get("target_kind"))) {
                String proposedName = unt(row.get("proposed_name"));
                if (target.getName().equals(proposedName)) details.add("name=unchanged");
                else if (manual || !baseline) {
                    details.add("name=preserved(stale/manual target)"); preserved = true;
                }
                else if (proposedName.isBlank()) {
                    details.add("name=conflict(empty proposal)"); conflict = true;
                }
                else {
                    target.setName(proposedName, SourceType.ANALYSIS);
                    details.add("name=applied(" + proposedName + ")"); changed = true;
                }
            }
            if (changed) { function.addTag(TAG); addComment(function, row); }
            String status = conflict && !changed ? "conflict" :
                changed && (conflict || preserved) ? "partial" : changed ? "applied" :
                preserved ? "preserved" : "unchanged";
            report.add(new ReportRow(addr(address), targetLabel, status,
                String.join("; ", details)));
        }
        catch (Exception exception) {
            report.add(new ReportRow(addr(address), targetLabel, "conflict", message(exception)));
        }
    }

    private Parameter explicitParameter(Function function, int ordinal) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.getOrdinal() == ordinal) return parameter;
        return null;
    }
    private DataType resolveType(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType base = dataTypes.getDataType(specification.substring("pointer:".length()));
            return base == null ? null : new PointerDataType(base,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type == null ? "" : type.getPathName();
    }
    private void addComment(Function function, Map<String, String> row) {
        String block = MARKER + " Propagated " + row.get("target_kind") +
            (row.get("target_ordinal").isBlank() ? "" : " " + row.get("target_ordinal")) +
            ".\nEvidence: " + unt(row.get("evidence_sites"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(block)) function.setComment(old + "\n\n" + block);
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to prototype_proposals.tsv is required");
        return askFile("Select prototype_proposals.tsv", "Apply prototypes");
    }
    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++) row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\ttarget\tstatus\tdetail\n");
            for (ReportRow row : report) out.write(row.address + "\t" + row.target + "\t" +
                row.status + "\t" + tsv(row.detail) + "\n");
        }
    }
    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder(); boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t'); else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n'); else out.append(ch); escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\'); return out.toString();
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }
    private static class Tsv {
        final List<String> header; final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class ReportRow {
        final String address, target, status, detail;
        ReportRow(String address, String target, String status, String detail) {
            this.address = address; this.target = target; this.status = status; this.detail = detail;
        }
    }
}
