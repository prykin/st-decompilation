// Apply reviewed packed global-record proposals produced by STGlobalRecordAnalyzer.
// Existing manual structures and concrete/unowned data are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Global Records

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DataUtilities;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;

public class STGlobalRecordApplier extends GhidraScript {
    private static final String MARKER = "[STGlobalRecordApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private final List<ReportRow> report = new ArrayList<>();
    private Listing listing;
    private SymbolTable symbols;
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Each record owns an independent top-level transaction.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File recordFile = inputFile();
        if (recordFile == null) return;
        if (recordFile.isDirectory()) recordFile = new File(recordFile,
            "global_record_proposals.tsv");
        File directory = recordFile.getAbsoluteFile().getParentFile();
        File fieldFile = new File(directory, "global_record_field_proposals.tsv");
        if (!recordFile.isFile())
            throw new IllegalArgumentException("Missing " + recordFile);
        if (!fieldFile.isFile())
            throw new IllegalArgumentException("Missing sibling " + fieldFile);

        Tsv records = readTsv(recordFile.toPath());
        Tsv fields = readTsv(fieldFile.toPath());
        requireColumns(records, "apply", "record_id", "base_address", "stride", "count",
            "total_size", "end_address", "type_path", "array_name",
            "expected_range_sha256", "confidence", "reason");
        requireColumns(fields, "apply", "record_id", "offset", "size", "proposed_name",
            "proposed_type", "type_confidence", "name_confidence", "evidence", "reason");
        Map<String, List<Map<String, String>>> byRecord = new LinkedHashMap<>();
        for (Map<String, String> row : fields.rows)
            byRecord.computeIfAbsent(unt(row.get("record_id")), ignored -> new ArrayList<>())
                .add(row);

        listing = currentProgram.getListing();
        symbols = currentProgram.getSymbolTable();
        dataTypes = currentProgram.getDataTypeManager();
        for (Map<String, String> row : records.rows) {
            monitor.checkCancelled();
            String id = unt(row.get("record_id"));
            if (!enabled(row.get("apply"))) {
                report.add(new ReportRow(id, unt(row.get("base_address")), "disabled", 0, 0,
                    "apply=0"));
                continue;
            }
            int transaction = currentProgram.startTransaction("Apply global record " + id);
            boolean commit = false;
            try {
                ReportRow result = applyRecord(row, byRecord.getOrDefault(id, List.of()));
                report.add(result);
                commit = !result.status.equals("conflict") && !result.status.equals("preserved");
            }
            catch (Exception exception) {
                report.add(new ReportRow(id, unt(row.get("base_address")), "conflict", 0, 0,
                    message(exception)));
            }
            finally {
                currentProgram.endTransaction(transaction, commit);
            }
        }

        Path reportPath = directory.toPath().resolve("global_record_apply_report.tsv");
        writeReport(reportPath);
        println("Global records: applied=" + count("applied") + ", updated=" +
            count("updated") + ", unchanged=" + count("unchanged") +
            ", partial=" + count("partial") + ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
    }

    private ReportRow applyRecord(Map<String, String> row,
            List<Map<String, String>> fieldRows) throws Exception {
        String id = unt(row.get("record_id"));
        Address base = address(row.get("base_address"));
        int stride = positive(row.get("stride"), "stride");
        int count = positive(row.get("count"), "count");
        int totalSize = positive(row.get("total_size"), "total_size");
        if ((long)stride * count != totalSize)
            throw new IllegalArgumentException("stride * count != total_size");
        Address end = base.add(totalSize - 1L);
        Address expectedEnd = address(row.get("end_address"));
        if (!end.add(1).equals(expectedEnd))
            throw new IllegalArgumentException("exclusive end does not match base + total_size");
        String currentSignature = rangeSignature(base, end);
        if (!currentSignature.equalsIgnoreCase(unt(row.get("expected_range_sha256"))))
            return new ReportRow(id, addr(base), "preserved", 0, 0,
                "stale range baseline; rerun STGlobalRecordAnalyzer");
        RangeSafety range = rangeSafety(base, end, unt(row.get("type_path")));
        if (!range.safe)
            return new ReportRow(id, addr(base), "preserved", 0, 0, range.reason);

        String typePath = unt(row.get("type_path"));
        Structure existing = existingStructure(typePath);
        Safety safety = structureSafety(existing);
        if (!safety.safe)
            return new ReportRow(id, addr(base), "preserved", 0, 0, safety.reason);

        List<Map<String, String>> selected = fieldRows.stream()
            .filter(field -> enabled(field.get("apply")))
            .sorted(Comparator.comparingLong(field -> Long.parseLong(field.get("offset"))))
            .toList();
        StructureDataType desired = new StructureDataType(category(typePath), leaf(typePath),
            stride, dataTypes);
        int typed = 0, named = 0;
        long previousEnd = -1;
        for (Map<String, String> field : selected) {
            long offsetLong = Long.parseLong(field.get("offset"));
            int size = positive(field.get("size"), "field size");
            if (offsetLong < 0 || offsetLong > Integer.MAX_VALUE ||
                    offsetLong + size > stride)
                throw new IllegalArgumentException("field outside record at offset " + offsetLong);
            int offset = (int)offsetLong;
            if (offset < previousEnd)
                throw new IllegalArgumentException("overlapping field at offset " + offset);
            DataType fieldType = resolveType(unt(field.get("proposed_type")), size);
            if (fieldType.getLength() > 0 && fieldType.getLength() != size)
                throw new IllegalArgumentException("type length mismatch at offset " + offset +
                    ": " + fieldType.getPathName() + " is " + fieldType.getLength() +
                    " bytes, proposal says " + size);
            String name = unt(field.get("proposed_name"));
            String comment = MARKER + " type_confidence=" + field.get("type_confidence") +
                "; name_confidence=" + field.get("name_confidence") + "; " +
                unt(field.get("reason"));
            desired.replaceAtOffset(offset, fieldType, size,
                name.isBlank() ? null : name, comment);
            if (!Undefined.isUndefined(fieldType)) typed++;
            if (!name.isBlank()) named++;
            previousEnd = offsetLong + size;
        }
        String desiredHash = layoutHash(desired);
        desired.setDescription(MARKER + " Generated packed global record " + id +
            "; stride=0x" + Integer.toHexString(stride).toUpperCase(Locale.ROOT) +
            HASH_MARKER + desiredHash);

        boolean structureChanged;
        Structure installed;
        if (existing == null) {
            DataType resolved = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            if (!(resolved instanceof Structure structure) ||
                    !structure.getPathName().equals(typePath))
                throw new IllegalStateException("could not create exact record type " + typePath);
            installed = structure;
            installed.setDescription(desired.getDescription());
            structureChanged = true;
        }
        else {
            String currentHash = layoutHash(existing);
            structureChanged = !currentHash.equals(desiredHash);
            if (structureChanged) existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            installed = existing;
        }

        ArrayDataType arrayType = new ArrayDataType(installed, count, stride, dataTypes);
        Data root = listing.getDefinedDataAt(base);
        boolean dataChanged = root == null || !root.getDataType().isEquivalent(arrayType) ||
            root.getLength() != totalSize;
        if (dataChanged) {
            DataUtilities.ClearDataMode mode = range.scriptOwnedArray ?
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA :
                DataUtilities.ClearDataMode.CLEAR_ALL_UNDEFINED_CONFLICT_DATA;
            DataUtilities.createData(currentProgram, base, arrayType, totalSize, mode);
            root = listing.getDefinedDataAt(base);
            if (root == null || root.getLength() != totalSize)
                throw new IllegalStateException("record array was not created at " + addr(base));
        }

        boolean nameChanged = false, namePreserved = false;
        String arrayName = unt(row.get("array_name"));
        Symbol primary = symbols.getPrimarySymbol(base);
        if (primary != null && !primary.getName().equals(arrayName)) {
            boolean synthetic = primary.getName().matches("(?i)(?:_?(?:DAT|UNK|PTR)_[0-9a-f]+|[0-9a-f]{6,16})");
            if (primary.getSource() == SourceType.DEFAULT || synthetic || owned(base)) {
                primary.setName(arrayName, SourceType.ANALYSIS);
                nameChanged = true;
            }
            else namePreserved = true;
        }
        addComment(base, id, typePath, stride, count, row);

        boolean changed = structureChanged || dataChanged || nameChanged;
        String status = changed ? namePreserved ? "partial" :
            existing == null ? "applied" : "updated" : "unchanged";
        String detail = "record=" + typePath + "; array=" + arrayName + "[" + count +
            "]; stride=0x" + Integer.toHexString(stride).toUpperCase(Locale.ROOT) +
            "; fields=" + selected.size() + "; " + safety.reason + "; " + range.reason;
        if (namePreserved) detail += "; manual/analysis primary symbol preserved";
        return new ReportRow(id, addr(base), status, typed, named, detail);
    }

    private Structure existingStructure(String path) {
        DataType type = dataTypes.getDataType(path);
        if (type == null) return null;
        if (!(type instanceof Structure structure))
            throw new IllegalArgumentException("target path is not a structure: " + path);
        return structure;
    }

    private Safety structureSafety(Structure structure) {
        if (structure == null) return new Safety(true, "created new script-owned structure");
        String description = structure.getDescription();
        if (description == null || !description.contains(MARKER))
            return new Safety(false, "existing manual/unowned record structure preserved");
        String stored = storedHash(description);
        if (stored == null)
            return new Safety(false, "generated record structure lacks safety hash");
        String current = layoutHash(structure);
        if (!stored.equals(current))
            return new Safety(false, "manual record-layout changes detected; structure preserved");
        return new Safety(true, "updated unchanged script-owned structure");
    }

    private RangeSafety rangeSafety(Address base, Address end, String typePath) {
        if (listing.getInstructions(new AddressSet(base, end), true).hasNext())
            return new RangeSafety(false, false, "record range contains instructions");
        Data root = listing.getDefinedDataAt(base);
        if (root != null && root.getDataType() instanceof Array array &&
                array.getDataType() instanceof Structure structure &&
                structure.getPathName().equals(typePath) && owned(base))
            return new RangeSafety(true, true, "existing script-owned record array");
        DataIterator data = listing.getDefinedData(new AddressSet(base, end), true);
        while (data.hasNext()) {
            Data item = data.next();
            if (!Undefined.isUndefined(item.getDataType()))
                return new RangeSafety(false, false, "concrete data preserved at " +
                    addr(item.getMinAddress()) + " type=" + item.getDataType().getPathName());
        }
        return new RangeSafety(true, false, "range contains only undefined data");
    }

    private DataType resolveType(String specification, int size) {
        if (specification == null || specification.isBlank()) {
            if (size < 1)
                throw new IllegalArgumentException("array element type is blank");
            return Undefined.getUndefinedDataType(size);
        }
        if (specification.startsWith("array:")) {
            int separator = specification.indexOf(':', "array:".length());
            if (separator < 0)
                throw new IllegalArgumentException("invalid array type " + specification);
            int count;
            try {
                count = Integer.parseInt(
                    specification.substring("array:".length(), separator));
            }
            catch (NumberFormatException exception) {
                throw new IllegalArgumentException("invalid array count in " + specification);
            }
            if (count < 1)
                throw new IllegalArgumentException("invalid array count in " + specification);
            String elementSpecification = specification.substring(separator + 1);
            DataType element = resolveType(elementSpecification, -1);
            if (element.getLength() < 1)
                throw new IllegalArgumentException(
                    "array element has no fixed length: " + elementSpecification);
            return new ArrayDataType(element, count, element.getLength(), dataTypes);
        }
        if (specification.startsWith("pointer:")) {
            String path = specification.substring("pointer:".length());
            DataType pointed = dataTypes.getDataType(path);
            if (pointed == null) throw new IllegalArgumentException("missing pointed type " + path);
            return new PointerDataType(pointed, currentProgram.getDefaultPointerSize(), dataTypes);
        }
        if (specification.startsWith("/undefined")) {
            int undefinedSize = size;
            if (undefinedSize < 1) {
                try {
                    undefinedSize = Integer.parseInt(
                        specification.substring("/undefined".length()));
                }
                catch (NumberFormatException exception) {
                    throw new IllegalArgumentException(
                        "invalid undefined type " + specification);
                }
            }
            return Undefined.getUndefinedDataType(undefinedSize);
        }
        DataType type = dataTypes.getDataType(specification);
        if (type == null) throw new IllegalArgumentException("missing data type " + specification);
        return type;
    }

    private void addComment(Address base, String id, String path, int stride, int count,
            Map<String, String> row) {
        String block = MARKER + " Packed global record array.\nRecord: " + id +
            "\nType: " + path + "\nStride: 0x" +
            Integer.toHexString(stride).toUpperCase(Locale.ROOT) + "\nCount: " + count +
            "\nEvidence: " + unt(row.get("reason"));
        String old = listing.getComment(CommentType.PLATE, base);
        if (old == null || old.isBlank()) listing.setComment(base, CommentType.PLATE, block);
        else if (!old.contains(MARKER))
            listing.setComment(base, CommentType.PLATE, old + "\n\n" + block);
        else {
            int start = old.indexOf(MARKER);
            String prefix = old.substring(0, start).stripTrailing();
            listing.setComment(base, CommentType.PLATE,
                prefix.isBlank() ? block : prefix + "\n\n" + block);
        }
    }

    private boolean owned(Address address) {
        String comment = listing.getComment(CommentType.PLATE, address);
        return comment != null && comment.contains(MARKER);
    }

    private String rangeSignature(Address base, Address end) {
        StringBuilder value = new StringBuilder();
        value.append(addr(base)).append('|').append(addr(end)).append('\n');
        DataIterator data = listing.getDefinedData(new AddressSet(base, end), true);
        while (data.hasNext()) {
            Data item = data.next();
            value.append("D|").append(addr(item.getMinAddress())).append('|')
                .append(item.getLength()).append('|')
                .append(item.getDataType().getPathName()).append('\n');
        }
        SymbolIterator iterator = symbols.getAllSymbols(true);
        while (iterator.hasNext()) {
            Symbol symbol = iterator.next();
            if (symbol.getAddress().compareTo(base) < 0 ||
                    symbol.getAddress().compareTo(end) > 0) continue;
            value.append("S|").append(addr(symbol.getAddress())).append('|')
                .append(symbol.getName(true)).append('|').append(symbol.getSource()).append('|')
                .append(symbol.isPrimary()).append('\n');
        }
        return sha256(value.toString());
    }

    private String layoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|').append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName()).append('|')
                .append(component.getComment() == null ? "" : component.getComment()).append('\n');
        }
        return sha256(layout.toString());
    }

    private String storedHash(String description) {
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 unavailable", exception);
        }
    }

    private CategoryPath category(String path) {
        int separator = path.lastIndexOf('/');
        return new CategoryPath(separator <= 0 ? "/" : path.substring(0, separator));
    }

    private String leaf(String path) {
        int separator = path.lastIndexOf('/');
        return separator < 0 ? path : path.substring(separator + 1);
    }

    private int positive(String value, String label) {
        int result = Integer.parseInt(value);
        if (result < 1) throw new IllegalArgumentException("invalid " + label + ": " + value);
        return result;
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to global_record_proposals.tsv is required");
        return askFile("Select global_record_proposals.tsv", "Apply global records");
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
                throw new IllegalArgumentException(path.getFileName() + " line " + (line + 1) +
                    " has " + values.length + " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names)
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("record_id\tbase_address\tstatus\ttyped_fields\tnamed_fields\tdetail\n");
            for (ReportRow row : report) out.write(tsv(row.id) + "\t" + row.base + "\t" +
                row.status + "\t" + row.typedFields + "\t" + row.namedFields + "\t" +
                tsv(row.detail) + "\n");
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
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
        StringBuilder result = new StringBuilder(); boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') result.append('\t'); else if (ch == 'r') result.append('\r');
                else if (ch == 'n') result.append('\n'); else result.append(ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
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
    private static class Safety {
        final boolean safe; final String reason;
        Safety(boolean safe, String reason) { this.safe = safe; this.reason = reason; }
    }
    private static class RangeSafety {
        final boolean safe, scriptOwnedArray; final String reason;
        RangeSafety(boolean safe, boolean scriptOwnedArray, String reason) {
            this.safe = safe; this.scriptOwnedArray = scriptOwnedArray; this.reason = reason;
        }
    }
    private static class ReportRow {
        final String id, base, status, detail; final int typedFields, namedFields;
        ReportRow(String id, String base, String status, int typedFields, int namedFields,
                String detail) {
            this.id = id; this.base = base; this.status = status;
            this.typedFields = typedFields; this.namedFields = namedFields; this.detail = detail;
        }
    }
}
