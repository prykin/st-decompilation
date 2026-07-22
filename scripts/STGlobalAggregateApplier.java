// Apply reviewed global aggregate proposals produced by STGlobalAggregateAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Global Aggregates

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
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.util.CodeUnitInsertionException;
import ghidra.program.model.data.DataUtilities;

public class STGlobalAggregateApplier extends GhidraScript {
    private static final String MARKER = "[STGlobalAggregateApplier]";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private Listing listing;
    private SymbolTable symbols;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "address", "expected_name", "expected_name_source",
            "expected_type", "expected_length", "proposed_name", "proposed_type",
            "proposed_length", "aggregate_id", "evidence");
        dataTypes = currentProgram.getDataTypeManager(); listing = currentProgram.getListing();
        symbols = currentProgram.getSymbolTable();
        int tx = currentProgram.startTransaction("Apply global aggregates");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled(); apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(tx, commit); }
        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("global_aggregate_apply_report.tsv");
        writeReport(output);
        println("Global aggregates: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        if (!enabled(row.get("apply"))) {
            report.add(new Report(row.get("address"), row.get("aggregate_id"), "disabled", "apply=0"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(row.get("address"));
            if (address == null) { conflict(row, "invalid address"); return; }
            DataType proposed = resolve(row.get("proposed_type"));
            if (proposed == null || proposed.getLength() != integer(row.get("proposed_length"))) {
                conflict(row, "proposed type missing or length mismatch"); return;
            }
            Data current = listing.getDefinedDataAt(address);
            Symbol primary = symbols.getPrimarySymbol(address);
            if (current != null && primary != null && primary.getName().equals(row.get("proposed_name")) &&
                    current.getDataType().isEquivalent(proposed)) {
                report.add(new Report(row.get("address"), row.get("aggregate_id"), "unchanged",
                    "desired aggregate already present")); return;
            }
            boolean baseline = current != null && primary != null &&
                primary.getName().equals(row.get("expected_name")) &&
                primary.getSource().toString().equals(row.get("expected_name_source")) &&
                current.getDataType().getPathName().equals(row.get("expected_type")) &&
                current.getLength() == integer(row.get("expected_length"));
            if (!baseline || primary.getSource() == SourceType.USER_DEFINED ||
                    primary.getSource() == SourceType.IMPORTED) {
                report.add(new Report(row.get("address"), row.get("aggregate_id"), "preserved",
                    "stale baseline or manual primary symbol")); return;
            }
            if (!safeRange(address, proposed.getLength())) {
                conflict(row, "range contains code, concrete data, or a manual interior symbol"); return;
            }
            deleteSyntheticInteriorLabels(address, proposed.getLength());
            DataUtilities.createData(currentProgram, address, proposed, proposed.getLength(),
                DataUtilities.ClearDataMode.CLEAR_ALL_UNDEFINED_CONFLICT_DATA);
            primary = symbols.getPrimarySymbol(address);
            if (primary == null) primary = symbols.createLabel(address, row.get("proposed_name"),
                SourceType.ANALYSIS);
            else primary.setName(row.get("proposed_name"), SourceType.ANALYSIS);
            addComment(address, row);
            report.add(new Report(row.get("address"), row.get("aggregate_id"), "applied",
                row.get("proposed_name") + " " + row.get("proposed_type")));
        }
        catch (Exception exception) { conflict(row, message(exception)); }
    }

    private boolean safeRange(Address base, int length) {
        if (length < 2 || length > 0x100000) return false;
        for (int offset = 0; offset < length; offset++) {
            Address address = base.add(offset);
            if (!currentProgram.getMemory().contains(address) ||
                    listing.getInstructionContaining(address) != null) return false;
            Data data = listing.getDefinedDataContaining(address);
            if (data != null && !ghidra.program.model.data.Undefined.isUndefined(data.getDataType()) &&
                    !(data.getMinAddress().equals(base) && owned(base))) return false;
            Symbol symbol = symbols.getPrimarySymbol(address);
            if (symbol != null && !address.equals(base) &&
                    (symbol.getSource() == SourceType.USER_DEFINED ||
                     symbol.getSource() == SourceType.IMPORTED)) return false;
        }
        return true;
    }

    private void deleteSyntheticInteriorLabels(Address base, int length) {
        for (int offset = 1; offset < length; offset++) {
            Symbol symbol = symbols.getPrimarySymbol(base.add(offset));
            if (symbol != null && symbol.getSource() == SourceType.DEFAULT &&
                    symbol.getName().matches("(?i)_?(?:DAT|PTR|UNK)_[0-9a-f]+")) symbol.delete();
        }
    }

    private DataType resolve(String specification) {
        if (specification.startsWith("array:")) {
            String rest = specification.substring("array:".length());
            int colon = rest.indexOf(':');
            if (colon < 1) return null;
            int count = integer(rest.substring(0, colon));
            DataType element = resolve(rest.substring(colon + 1));
            return element == null || count < 1 ? null :
                new ArrayDataType(element, count, element.getLength(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private boolean owned(Address address) {
        String comment = listing.getComment(CommentType.PLATE, address);
        return comment != null && comment.contains(MARKER);
    }
    private void addComment(Address address, Map<String, String> row) {
        String block = MARKER + " " + row.get("aggregate_id") + ".\nEvidence: " + row.get("evidence");
        String old = listing.getComment(CommentType.PLATE, address);
        if (old == null || old.isBlank()) listing.setComment(address, CommentType.PLATE, block);
        else if (!old.contains(MARKER)) listing.setComment(address, CommentType.PLATE, old + "\n\n" + block);
    }
    private void conflict(Map<String, String> row, String detail) {
        report.add(new Report(row.get("address"), row.get("aggregate_id"), "conflict", detail));
    }
    private long count(String status) { return report.stream().filter(r -> r.status.equals(status)).count(); }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\taggregate_id\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + row.id + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException(
            "Path to global_aggregate_proposals.tsv is required");
        return askFile("Select global_aggregate_proposals.tsv", "Apply");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
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
    private static int integer(String value) { return Integer.decode(value); }
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private static String message(Exception e) { return e.getMessage() == null ? e.getClass().getSimpleName() : e.getMessage(); }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String address, String id, String status, String detail) {}
}
