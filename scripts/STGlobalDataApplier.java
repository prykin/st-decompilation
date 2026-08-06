// Apply reviewed global_data_proposals.tsv. Concrete data is preserved except for an
// exact non-manual pointer global proven by a direct named-constructor result store
// or by an initialized word which points exactly at defined string data.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Global Data

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
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
            boolean constructorOverride = baseline && !manualSymbol &&
                data.getDataType() instanceof Pointer &&
                unt(row.get("proposed_type")).startsWith("pointer:") &&
                unt(row.get("reason")).contains(
                    "direct_constructor_store_overrides_non_manual_pointer_type");
            boolean stringPointerOverride = baseline && !manualSymbol &&
                data.getDataType() instanceof Pointer &&
                "pointer:/char".equals(unt(row.get("proposed_type"))) &&
                unt(row.get("reason")).contains(
                    "exact_initialized_string_pointer_overrides_bare_pointer");
            List<String> details = new ArrayList<>();
            boolean changed = false, preserved = false, conflict = false;
            if (typeApply) {
                DataType proposed = resolveType(unt(row.get("proposed_type")));
                if (proposed == null && baseline && (!concreteData || scriptOwned))
                    proposed = materializeLibraryContext(row, data);
                if (proposed == null) {
                    details.add("type=conflict(missing proposed type)"); conflict = true;
                }
                else if (proposed.isEquivalent(data.getDataType())) details.add("type=unchanged");
                else if (!baseline || concreteData && !scriptOwned &&
                        !constructorOverride && !stringPointerOverride) {
                    details.add("type=preserved(stale/concrete data)"); preserved = true;
                }
                else if (!safeRange(address, proposed.getLength(),
                        constructorOverride || stringPointerOverride)) {
                    details.add("type=conflict(range contains non-default data or code)"); conflict = true;
                }
                else {
                    DataUtilities.createData(currentProgram, address, proposed, proposed.getLength(),
                        scriptOwned || constructorOverride || stringPointerOverride ?
                            DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA :
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

    /**
     * A dominant statically linked library family can identify an otherwise
     * anonymous global context.  Clone only the script-owned observed layout;
     * no new fields are invented and a stale/manual global is still rejected by
     * the normal baseline checks below.
     */
    private DataType materializeLibraryContext(Map<String, String> row, Data current)
            throws Exception {
        String specification = unt(row.get("proposed_type"));
        String prefix = "pointer:/SubmarineTitans/Recovered/LibraryContexts/";
        if (!specification.startsWith(prefix) ||
                !unt(row.get("reason")).contains("dominant_library_context=") ||
                !(current.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof Structure source) ||
                !anonymousStructure(source)) return null;
        String path = specification.substring("pointer:".length());
        DataType existing = dataTypes.getDataType(path);
        Structure target;
        if (existing instanceof Structure structure) {
            String description = structure.getDescription();
            if (description == null || !description.contains(MARKER) ||
                    structure.getLength() < source.getLength() ||
                    !structure.isEquivalent(source) &&
                    !description.contains("from " + source.getPathName())) return null;
            target = structure;
        }
        else {
            if (existing != null) return null;
            int separator = path.lastIndexOf('/');
            if (separator <= 0 || separator == path.length() - 1) return null;
            StructureDataType created = new StructureDataType(
                new CategoryPath(path.substring(0, separator)),
                path.substring(separator + 1), source.getLength(), dataTypes);
            for (DataTypeComponent component : source.getDefinedComponents()) {
                String fieldName = component.getFieldName();
                DataType fieldType = materializeLibraryEntry(path, component);
                if (fieldType == null) fieldType = component.getDataType();
                if (pointerDepth(fieldType) > 1 &&
                        (fieldName == null || fieldName.isBlank() ||
                         fieldName.matches("(?i)field_[0-9a-f]+")))
                    fieldName = "entries_" + String.format("%04X",
                        component.getOffset());
                if (Undefined.isUndefined(fieldType) &&
                        (fieldName == null || fieldName.isBlank())) continue;
                created.replaceAtOffset(component.getOffset(), fieldType,
                    component.getLength(), fieldName, component.getComment());
            }
            String description = MARKER + " Generated library-context view from " +
                source.getPathName() + "; " + unt(row.get("reason"));
            created.setDescription(description + "; generated_layout_sha256=" +
                layoutHash(created));
            DataType added = dataTypes.addDataType(created,
                DataTypeConflictHandler.REPLACE_HANDLER);
            if (!(added instanceof Structure structure)) return null;
            target = structure;
        }
        return new PointerDataType(target, currentProgram.getDefaultPointerSize(), dataTypes);
    }

    /**
     * A context member used as an indexed pointer table carries one more useful
     * identity: its selected record layout.  Give that already observed nested
     * generated structure a library-family name while preserving every field and
     * pointer depth.  No new member or semantic role is invented here.
     */
    private DataType materializeLibraryEntry(String contextPath,
            DataTypeComponent component) {
        DataType type = component.getDataType();
        int depth = pointerDepth(type);
        if (depth < 2) return null;
        DataType base = pointerBase(type);
        if (!(base instanceof Structure source) || !anonymousStructure(source)) return null;
        int separator = contextPath.lastIndexOf('/');
        if (separator <= 0) return null;
        String contextName = contextPath.substring(separator + 1);
        String family = contextName;
        String contextSuffix = "";
        int contextMarker = contextName.indexOf("Context");
        if (contextMarker > 0) {
            family = contextName.substring(0, contextMarker);
            contextSuffix = contextName.substring(contextMarker + "Context".length());
        }
        String entryPath = contextPath.substring(0, separator + 1) + family +
            "Entry" + contextSuffix + "_" +
            String.format("%04X", component.getOffset());
        DataType existing = dataTypes.getDataType(entryPath);
        Structure target;
        if (existing instanceof Structure structure) {
            String description = structure.getDescription();
            if (description == null || !description.contains(MARKER) ||
                    structure.getLength() < source.getLength()) return null;
            target = structure;
        }
        else {
            if (existing != null) return null;
            StructureDataType created = new StructureDataType(
                new CategoryPath(entryPath.substring(0, entryPath.lastIndexOf('/'))),
                entryPath.substring(entryPath.lastIndexOf('/') + 1),
                source.getLength(), dataTypes);
            for (DataTypeComponent field : source.getDefinedComponents()) {
                if (Undefined.isUndefined(field.getDataType()) &&
                        (field.getFieldName() == null || field.getFieldName().isBlank()))
                    continue;
                created.replaceAtOffset(field.getOffset(), field.getDataType(),
                    field.getLength(), field.getFieldName(), field.getComment());
            }
            created.setDescription(MARKER + " Generated library entry view from " +
                source.getPathName() + "; generated_layout_sha256=" +
                layoutHash(created));
            DataType added = dataTypes.addDataType(created,
                DataTypeConflictHandler.REPLACE_HANDLER);
            if (!(added instanceof Structure structure)) return null;
            target = structure;
        }
        DataType result = target;
        for (int index = 0; index < depth; index++)
            result = new PointerDataType(result,
                currentProgram.getDefaultPointerSize(), dataTypes);
        return result;
    }

    private int pointerDepth(DataType type) {
        int depth = 0;
        while (type instanceof Pointer pointer) {
            depth++;
            type = pointer.getDataType();
        }
        return depth;
    }

    private DataType pointerBase(DataType type) {
        while (type instanceof Pointer pointer) type = pointer.getDataType();
        return type;
    }

    private boolean anonymousStructure(Structure structure) {
        String path = structure.getPathName();
        String description = structure.getDescription();
        return structure.getName().startsWith("Anon") ||
            path.contains("/Recovered/PointerShapes/") ||
            path.contains("/Recovered/ClassPointees/") ||
            path.contains("/Recovered/HiddenThis/") ||
            description != null && description.contains("Generated anonymous");
    }

    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder();
        value.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            value.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName())
                .append('|').append(component.getComment() == null ? "" :
                    component.getComment()).append('\n');
        }
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.toString().getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException(exception);
        }
    }

    private boolean safeRange(Address address, int length,
            boolean allowExactConcretePointer) {
        if (length < 1 || length > 8) return false;
        for (int offset = 0; offset < length; offset++) {
            Address current = address.add(offset);
            if (listing.getInstructionContaining(current) != null) return false;
            Data existing = listing.getDefinedDataContaining(current);
            if (existing == null) continue;
            boolean exactAllowed = allowExactConcretePointer &&
                existing.getMinAddress().equals(address) &&
                existing.getLength() == length &&
                existing.getDataType() instanceof Pointer;
            if (!Undefined.isUndefined(existing.getDataType()) &&
                    !owned(existing.getMinAddress()) && !exactAllowed)
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
