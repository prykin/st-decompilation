// Apply reviewed global_data_proposals.tsv. Only undefined/script-owned data may be replaced.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Global Data

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
import ghidra.program.model.data.DataUtilities;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

public class STGlobalDataApplier extends GhidraScript {
    private static final String MARKER = "[STGlobalDataApplier]";
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes; private Listing listing; private SymbolTable symbols;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "type_apply", "name_apply", "address", "expected_name",
            "expected_name_source", "expected_data_type", "expected_data_length",
            "proposed_name", "proposed_type", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager(); listing = currentProgram.getListing();
        symbols = currentProgram.getSymbolTable();
        int transaction = currentProgram.startTransaction("Apply recovered global data");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled(); applyRow(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.getAbsoluteFile().getParentFile().toPath()
            .resolve("global_data_apply_report.tsv");
        writeReport(output);
        println("Global data: applied=" + count("applied") + ", partial=" +
            count("partial") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output.toAbsolutePath().normalize());
    }

    private void applyRow(Map<String, String> row) {
        boolean typeApply = enabled(row.get("type_apply"));
        boolean nameApply = enabled(row.get("name_apply"));
        Address address = address(row.get("address"));
        String proposedName = unt(row.get("proposed_name"));
        if (!typeApply && !nameApply) {
            report.add(new ReportRow(addr(address), "disabled", proposedName, "apply flags are 0"));
            return;
        }
        try {
            Data data = listing.getDefinedDataAt(address);
            Symbol symbol = symbols.getPrimarySymbol(address);
            if (data == null || symbol == null) {
                report.add(new ReportRow(addr(address), "conflict", proposedName,
                    "missing exact data or primary symbol")); return;
            }
            boolean scriptOwned = owned(address);
            String currentType = typeSpecification(data.getDataType());
            boolean baseline = symbol.getName().equals(unt(row.get("expected_name"))) &&
                symbol.getSource().toString().equals(row.get("expected_name_source")) &&
                currentType.equals(unt(row.get("expected_data_type"))) &&
                data.getLength() == Integer.parseInt(row.get("expected_data_length"));
            boolean manualSymbol = symbol.getSource() == SourceType.USER_DEFINED ||
                symbol.getSource() == SourceType.IMPORTED;
            // There is no SourceType on Data itself. Preserve every concrete current type;
            // a reviewer can clear it explicitly before applying a replacement proposal.
            boolean concreteData = !Undefined.isUndefined(data.getDataType());
            List<String> details = new ArrayList<>();
            boolean changed = false, preserved = false, conflict = false;
            if (typeApply) {
                DataType proposed = resolveType(unt(row.get("proposed_type")));
                if (proposed == null) {
                    details.add("type=conflict(missing proposed type)"); conflict = true;
                }
                else if (proposed.isEquivalent(data.getDataType())) details.add("type=unchanged");
                else if (!baseline || concreteData && !scriptOwned) {
                    details.add("type=preserved(stale/concrete data)"); preserved = true;
                }
                else if (!safeRange(address, proposed.getLength())) {
                    details.add("type=conflict(range contains non-default data or code)"); conflict = true;
                }
                else {
                    DataUtilities.createData(currentProgram, address, proposed, proposed.getLength(),
                        scriptOwned ? DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA :
                            DataUtilities.ClearDataMode.CLEAR_ALL_UNDEFINED_CONFLICT_DATA);
                    data = listing.getDefinedDataAt(address);
                    details.add("type=applied(" + proposed.getPathName() + ")"); changed = true;
                }
            }
            if (nameApply) {
                symbol = symbols.getPrimarySymbol(address);
                if (symbol != null && symbol.getName().equals(proposedName)) details.add("name=unchanged");
                else if (symbol == null) {
                    details.add("name=conflict(primary symbol disappeared)"); conflict = true;
                }
                else if (manualSymbol || !baseline) {
                    details.add("name=preserved(stale/manual symbol)"); preserved = true;
                }
                else if (proposedName.isBlank()) {
                    details.add("name=conflict(empty proposal)"); conflict = true;
                }
                else {
                    symbol.setName(proposedName, SourceType.ANALYSIS);
                    details.add("name=applied(" + proposedName + ")"); changed = true;
                }
            }
            if (changed) addComment(address, row);
            String status = conflict && !changed ? "conflict" :
                changed && (conflict || preserved) ? "partial" : changed ? "applied" :
                preserved ? "preserved" : "unchanged";
            report.add(new ReportRow(addr(address), status, proposedName,
                String.join("; ", details)));
        }
        catch (Exception exception) {
            report.add(new ReportRow(addr(address), "conflict", proposedName, message(exception)));
        }
    }

    private boolean safeRange(Address address, int length) {
        if (length < 1 || length > 8) return false;
        for (int offset = 0; offset < length; offset++) {
            Address current = address.add(offset);
            if (listing.getInstructionContaining(current) != null) return false;
            Data existing = listing.getDefinedDataContaining(current);
            if (existing == null) continue;
            if (!Undefined.isUndefined(existing.getDataType()) && !owned(existing.getMinAddress()))
                return false;
            Symbol symbol = symbols.getPrimarySymbol(current);
            if (symbol != null && !current.equals(address) &&
                    symbol.getSource() == SourceType.USER_DEFINED) return false;
        }
        return true;
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
    private boolean owned(Address address) {
        String comment = listing.getComment(CommentType.PLATE, address);
        return comment != null && (comment.contains(MARKER) ||
            comment.contains("[STPointerShapeApplier]") ||
            comment.contains("[STTypeFamilyApplier]"));
    }
    private void addComment(Address address, Map<String, String> row) {
        String block = MARKER + " Recovered global data.\nType: " +
            unt(row.get("proposed_type")) + "\nEvidence: " + unt(row.get("evidence_sites"));
        String old = listing.getComment(CommentType.PLATE, address);
        String updated = old;
        if (old == null || old.isBlank()) updated = block;
        else if (!old.contains(MARKER)) updated = old + "\n\n" + block;
        if (!text(old).equals(text(updated)))
            listing.setComment(address, CommentType.PLATE, updated);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to global_data_proposals.tsv is required");
        return askFile("Select global_data_proposals.tsv", "Apply global data");
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
            out.write("address\tstatus\tproposed_name\tdetail\n");
            for (ReportRow row : report) out.write(row.address + "\t" + row.status + "\t" +
                tsv(row.name) + "\t" + tsv(row.detail) + "\n");
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
        final String address, status, name, detail;
        ReportRow(String address, String status, String name, String detail) {
            this.address = address; this.status = status; this.name = name; this.detail = detail;
        }
    }
}
