// Apply exact DArray<T *> descriptor sources proposed by STDArrayPointerElementAnalyzer.
// Manual/imported symbols and stale or hash-diverged generated records are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply DArray Pointer Elements

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
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STDArrayPointerElementApplier extends GhidraScript {
    private static final String DARRAY_PATH = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String DESCRIPTOR_ROOT =
        "/SubmarineTitans/Recovered/DArraySpecializations/";
    private static final String MARKER = "[STDArrayPointerElementApplier]";
    private static final String GLOBAL_RECORD_MARKER = "[STGlobalRecordApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private final List<ReportRow> report = new ArrayList<>();
    private final List<ReportRow> outputReport = new ArrayList<>();
    private DataTypeManager dataTypes;
    private Listing listing;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        if (file.isDirectory())
            file = new File(file, "darray_pointer_element_proposals.tsv");
        if (!file.isFile()) throw new IllegalArgumentException("Missing " + file);
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "apply", "accessor_address", "object_type_path",
            "descriptor_type_path", "source_kind", "global_address", "symbol",
            "owner_type_path", "field_offset", "expected_type",
            "expected_symbol_source", "confidence", "reason");
        Path outputProposalPath = file.getAbsoluteFile().getParentFile().toPath()
            .resolve("darray_pointer_output_proposals.tsv");
        Tsv outputTsv = Files.isRegularFile(outputProposalPath) ?
            readTsv(outputProposalPath) : null;
        if (outputTsv != null)
            requireColumns(outputTsv, "apply", "function_address", "function",
                "output_name", "output_storage", "expected_type", "expected_source",
                "object_type_path", "descriptor_type_path", "source_identity",
                "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();
        listing = currentProgram.getListing();

        int transaction = currentProgram.startTransaction(
            "Apply recovered DArray pointer element types");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }

        if (outputTsv != null) {
            int outputTransaction = currentProgram.startTransaction(
                "Apply recovered DArray pointer outputs");
            boolean outputCommit = false;
            try {
                for (Map<String, String> row : outputTsv.rows) {
                    monitor.checkCancelled();
                    applyOutput(row);
                }
                outputCommit = true;
            }
            finally { currentProgram.endTransaction(outputTransaction, outputCommit); }
        }

        Path output = file.getAbsoluteFile().getParentFile().toPath()
            .resolve("darray_pointer_element_apply_report.tsv");
        writeReport(output);
        Path outputLocalReport = file.getAbsoluteFile().getParentFile().toPath()
            .resolve("darray_pointer_output_apply_report.tsv");
        writeOutputReport(outputLocalReport);
        println("DArray pointer elements: applied=" + count("applied") +
            ", updated=" + count("updated") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output.toAbsolutePath().normalize());
        println("DArray pointer outputs: applied=" + outputCount("applied") +
            ", unchanged=" + outputCount("unchanged") + ", preserved=" +
            outputCount("preserved") + ", conflicts=" + outputCount("conflict") +
            ", disabled=" + outputCount("disabled"));
        println("Output apply report: " + outputLocalReport.toAbsolutePath().normalize());
    }

    private void applyOutput(Map<String, String> row) {
        String identity = unt(row.get("function_address")) + ":" +
            unt(row.get("output_name"));
        if (!enabled(row.get("apply"))) {
            outputReport.add(new ReportRow(identity, "disabled", "apply=0"));
            return;
        }
        try {
            if (!sourceHasDescriptor(unt(row.get("source_identity")),
                    unt(row.get("descriptor_type_path")))) {
                outputReport.add(new ReportRow(identity, "preserved",
                    "descriptor source was not safely specialized"));
                return;
            }
            Function function = currentProgram.getFunctionManager().getFunctionAt(
                address(row.get("function_address")));
            if (function == null ||
                    !function.getName(true).equals(unt(row.get("function"))))
                throw new IllegalArgumentException("stale function identity");
            Variable variable = null;
            for (Variable candidate : function.getLocalVariables()) {
                if (!candidate.getName().equals(unt(row.get("output_name"))) ||
                        !candidate.getVariableStorage().getSerializationString().equals(
                            unt(row.get("output_storage")))) continue;
                if (variable != null)
                    throw new IllegalArgumentException("ambiguous local storage");
                variable = candidate;
            }
            if (variable == null) throw new IllegalArgumentException("local is missing");
            DataType object = dataTypes.getDataType(unt(row.get("object_type_path")));
            if (!(object instanceof Structure))
                throw new IllegalArgumentException("object type is missing");
            DataType proposed = new PointerDataType(object,
                currentProgram.getDefaultPointerSize(), dataTypes);
            if (equivalent(variable.getDataType(), proposed)) {
                outputReport.add(new ReportRow(identity, "unchanged",
                    "local already has descriptor element-pointer type"));
                return;
            }
            if (protectedSource(variable.getSource())) {
                outputReport.add(new ReportRow(identity, "preserved",
                    "manual/imported local preserved"));
                return;
            }
            if (!typeSpec(variable.getDataType()).equals(unt(row.get("expected_type"))) ||
                    !variable.getSource().toString().equals(unt(row.get("expected_source"))))
                throw new IllegalArgumentException("stale local baseline");
            variable.setDataType(proposed, SourceType.ANALYSIS);
            Variable installed = null;
            for (Variable candidate : function.getLocalVariables())
                if (candidate.getVariableStorage().equals(variable.getVariableStorage())) {
                    installed = candidate;
                    break;
                }
            if (installed == null || !equivalent(installed.getDataType(), proposed))
                throw new IllegalStateException("local type did not persist");
            outputReport.add(new ReportRow(identity, "applied",
                unt(row.get("expected_type")) + " -> " + typeSpec(proposed) +
                "; " + unt(row.get("reason"))));
        }
        catch (Exception exception) {
            outputReport.add(new ReportRow(identity, "conflict", message(exception)));
        }
    }

    private boolean sourceHasDescriptor(String identity, String descriptorPath) {
        String[] parts = identity.split("\\|", -1);
        if (parts.length != 3) return false;
        DataType descriptor = dataTypes.getDataType(descriptorPath);
        if (!(descriptor instanceof Structure)) return false;
        DataType expected = new PointerDataType(descriptor,
            currentProgram.getDefaultPointerSize(), dataTypes);
        Address root = address(parts[1]);
        if ("global".equals(parts[0])) {
            Data data = listing.getDefinedDataAt(root);
            return data != null && equivalent(data.getDataType(), expected);
        }
        if (!"record_field".equals(parts[0])) return false;
        Data data = listing.getDefinedDataAt(root);
        if (data == null) return false;
        DataType owner = unwrap(data.getDataType());
        if (owner instanceof ghidra.program.model.data.Array array)
            owner = unwrap(array.getDataType());
        if (!(owner instanceof Structure structure)) return false;
        int offset = (int)Long.parseLong(parts[2]);
        DataTypeComponent component = structure.getComponentAt(offset);
        return component != null && component.getOffset() == offset &&
            equivalent(component.getDataType(), expected);
    }

    private void apply(Map<String, String> row) {
        String identity = unt(row.get("source_kind")) + ":" +
            unt(row.get("global_address")) +
            (unt(row.get("field_offset")).isBlank() ? "" : "+" + row.get("field_offset"));
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow(identity, "disabled", "apply=0"));
            return;
        }
        try {
            String objectPath = unt(row.get("object_type_path"));
            String descriptorPath = unt(row.get("descriptor_type_path"));
            DataType object = dataTypes.getDataType(objectPath);
            if (!(object instanceof Structure))
                throw new IllegalArgumentException("missing object type " + objectPath);
            Change descriptor = installDescriptor(descriptorPath, object);
            if (!descriptor.safe) {
                report.add(new ReportRow(identity, "preserved", descriptor.detail));
                return;
            }
            DataType proposed = new PointerDataType(structure(descriptorPath),
                currentProgram.getDefaultPointerSize(), dataTypes);
            Change target = switch (unt(row.get("source_kind"))) {
                case "global" -> applyGlobal(row, proposed);
                case "record_field" -> applyRecordField(row, proposed);
                default -> throw new IllegalArgumentException(
                    "unknown source kind " + row.get("source_kind"));
            };
            String status = !target.safe ? "preserved" : target.changed ? "applied" :
                descriptor.changed ? "updated" : "unchanged";
            report.add(new ReportRow(identity, status,
                "descriptor=" + descriptor.detail + "; target=" + target.detail));
        }
        catch (Exception exception) {
            report.add(new ReportRow(identity, "conflict", message(exception)));
        }
    }

    private Change applyGlobal(Map<String, String> row, DataType proposed) throws Exception {
        Address address = address(row.get("global_address"));
        Data data = listing.getDefinedDataAt(address);
        if (data == null) throw new IllegalArgumentException("global data is missing");
        Symbol primary = currentProgram.getSymbolTable().getPrimarySymbol(address);
        if (primary == null || !primary.getName().equals(unt(row.get("symbol"))))
            throw new IllegalArgumentException("stale primary global symbol");
        String expectedSource = unt(row.get("expected_symbol_source"));
        if (!primary.getSource().toString().equals(expectedSource) &&
                !equivalent(data.getDataType(), proposed))
            return new Change(false, false, "stale symbol source " + primary.getSource());
        if (protectedSource(primary.getSource()) && !equivalent(data.getDataType(), proposed))
            return new Change(false, false, "manual/imported global symbol preserved");
        String current = typeSpec(data.getDataType());
        String expected = unt(row.get("expected_type"));
        if (!current.equals(expected) && !equivalent(data.getDataType(), proposed))
            throw new IllegalArgumentException("stale global type " + current +
                " != " + expected);
        if (equivalent(data.getDataType(), proposed))
            return new Change(true, false, "global already specialized");
        if (!darrayCompatible(data.getDataType()))
            return new Change(false, false, "global is no longer DArray-compatible");
        DataUtilities.createData(currentProgram, address, proposed, proposed.getLength(),
            DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA);
        addGlobalComment(address, unt(row.get("reason")));
        return new Change(true, true, "specialized standalone DArray global");
    }

    private Change applyRecordField(Map<String, String> row, DataType proposed) {
        String ownerPath = unt(row.get("owner_type_path"));
        Structure owner = structure(ownerPath);
        if (owner == null) throw new IllegalArgumentException("missing owner " + ownerPath);
        Safety safety = structureSafety(owner, GLOBAL_RECORD_MARKER);
        if (!safety.safe) return new Change(false, false, safety.reason);
        int offset = (int)number(row.get("field_offset"));
        DataTypeComponent field = owner.getComponentAt(offset);
        if (field == null || field.getOffset() != offset ||
                field.getLength() != currentProgram.getDefaultPointerSize())
            throw new IllegalArgumentException("missing exact record field");
        String current = typeSpec(field.getDataType());
        String expected = unt(row.get("expected_type"));
        if (!current.equals(expected) && !equivalent(field.getDataType(), proposed))
            throw new IllegalArgumentException("stale record field type " + current +
                " != " + expected);
        if (equivalent(field.getDataType(), proposed))
            return new Change(true, false, "record field already specialized");
        if (!darrayCompatible(field.getDataType()))
            return new Change(false, false, "record field is no longer DArray-compatible");
        owner.replaceAtOffset(offset, proposed, proposed.getLength(), field.getFieldName(),
            mergeComment(field.getComment(), unt(row.get("reason"))));
        refreshHash(owner, GLOBAL_RECORD_MARKER);
        return new Change(true, true, "specialized hash-owned global-record field");
    }

    private Change installDescriptor(String path, DataType object) {
        try {
            if (!path.startsWith(DESCRIPTOR_ROOT))
                throw new IllegalArgumentException("unexpected descriptor path " + path);
            Structure base = structure(DARRAY_PATH);
            if (base == null) throw new IllegalArgumentException("missing " + DARRAY_PATH);
            Structure existing = structure(path);
            Safety safety = structureSafety(existing, MARKER);
            if (!safety.safe) return new Change(false, false, safety.reason);
            StructureDataType desired = new StructureDataType(
                category(path), leaf(path), base.getLength(), dataTypes);
            DataType element = new PointerDataType(object,
                currentProgram.getDefaultPointerSize(), dataTypes);
            DataType dataPointer = new PointerDataType(element,
                currentProgram.getDefaultPointerSize(), dataTypes);
            boolean replacedData = false;
            for (DataTypeComponent component : base.getDefinedComponents()) {
                DataType type = component.getDataType();
                if (component.getOffset() == 0x1c) {
                    type = dataPointer;
                    replacedData = true;
                }
                desired.replaceAtOffset(component.getOffset(), type,
                    component.getLength(), component.getFieldName(), component.getComment());
            }
            if (!replacedData)
                throw new IllegalArgumentException("DArrayTy has no data member at 0x1c");
            String hash = layoutHash(desired);
            desired.setDescription(MARKER +
                " Generated DArray object-pointer specialization; element=pointer:" +
                object.getPathName() + HASH_MARKER + hash);
            if (existing == null) {
                DataType installed = dataTypes.resolve(desired,
                    DataTypeConflictHandler.KEEP_HANDLER);
                if (!(installed instanceof Structure structure) ||
                        !structure.getPathName().equals(path))
                    throw new IllegalStateException("could not create " + path);
                structure.setDescription(desired.getDescription());
                return new Change(true, true, "created " + path);
            }
            if (layoutHash(existing).equals(hash)) {
                if (!text(existing.getDescription()).equals(desired.getDescription()))
                    existing.setDescription(desired.getDescription());
                return new Change(true, false, "unchanged " + path);
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            return new Change(true, true, "updated " + path);
        }
        catch (Exception exception) {
            return new Change(false, false, message(exception));
        }
    }

    private void addGlobalComment(Address address, String evidence) {
        String block = MARKER + " DArray object-pointer specialization. Evidence: " + evidence;
        String old = listing.getComment(CommentType.EOL, address);
        String updated = old == null || old.isBlank() ? block :
            old.contains(MARKER) ? replaceMarkerBlock(old, block) : old + "\n" + block;
        if (!text(old).equals(updated)) listing.setComment(address, CommentType.EOL, updated);
    }

    private String replaceMarkerBlock(String old, String block) {
        int start = old.indexOf(MARKER);
        int end = old.indexOf('\n', start);
        if (end < 0) end = old.length();
        return old.substring(0, start) + block + old.substring(end);
    }

    private String mergeComment(String old, String evidence) {
        String block = MARKER + " element=object-pointer; " + evidence;
        if (old == null || old.isBlank()) return block;
        if (!old.contains(MARKER)) return old + " " + block;
        int start = old.indexOf(MARKER);
        return old.substring(0, start) + block;
    }

    private boolean darrayCompatible(DataType type) {
        type = unwrap(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = unwrap(pointer.getDataType());
        return pointed != null && (DARRAY_PATH.equals(pointed.getPathName()) ||
            pointed.getPathName().startsWith(DESCRIPTOR_ROOT));
    }

    private Safety structureSafety(Structure structure, String marker) {
        if (structure == null) return new Safety(true, "new script-owned structure");
        String description = text(structure.getDescription());
        if (!description.contains(marker))
            return new Safety(false, "manual/unowned structure preserved");
        String stored = storedHash(description);
        if (stored == null) return new Safety(false, "generated structure lacks safety hash");
        if (!stored.equals(hashFor(structure, marker)))
            return new Safety(false, "manual changes detected; structure preserved");
        return new Safety(true, "unchanged script-owned structure");
    }

    private void refreshHash(Structure structure, String marker) {
        String description = text(structure.getDescription());
        if (!description.contains(marker))
            throw new IllegalArgumentException("owner is not " + marker + " owned");
        int start = description.indexOf(HASH_MARKER);
        if (start < 0) throw new IllegalArgumentException("owner lacks generated hash");
        start += HASH_MARKER.length();
        if (description.length() < start + 64)
            throw new IllegalArgumentException("owner hash is malformed");
        structure.setDescription(description.substring(0, start) +
            hashFor(structure, marker) + description.substring(start + 64));
    }

    private String hashFor(Structure structure, String marker) {
        return GLOBAL_RECORD_MARKER.equals(marker) ?
            globalRecordLayoutHash(structure) : layoutHash(structure);
    }

    /** Keep byte-for-byte parity with STGlobalRecordApplier's ownership hash. */
    private String globalRecordLayoutHash(Structure structure) {
        StringBuilder value = new StringBuilder("length=")
            .append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append('|')
                .append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(text(component.getFieldName())).append('|')
                .append(text(component.getComment())).append('\n');
        return sha256(value.toString());
    }

    private String storedHash(String description) {
        int start = description.indexOf(HASH_MARKER);
        if (start < 0) return null;
        start += HASH_MARKER.length();
        if (description.length() < start + 64) return null;
        String value = description.substring(start, start + 64);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
    }

    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder("length=")
            .append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append('|')
                .append(component.getLength()).append('|')
                .append(typeSpec(component.getDataType())).append('|')
                .append(text(component.getFieldName())).append('|')
                .append(text(component.getComment())).append('\n');
        return sha256(value.toString());
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder out = new StringBuilder();
            for (byte item : digest) out.append(String.format("%02x", item & 0xff));
            return out.toString();
        }
        catch (Exception exception) { throw new IllegalStateException(exception); }
    }

    private boolean equivalent(DataType left, DataType right) {
        return left != null && right != null && (left.isEquivalent(right) ||
            typeSpec(left).equals(typeSpec(right)));
    }

    private DataType unwrap(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        type = unwrap(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private Structure structure(String path) {
        DataType type = dataTypes.getDataType(path);
        return type instanceof Structure structure ? structure : null;
    }

    private CategoryPath category(String path) {
        int split = path.lastIndexOf('/');
        return new CategoryPath(split <= 0 ? "/" : path.substring(0, split));
    }

    private String leaf(String path) {
        int split = path.lastIndexOf('/');
        return split < 0 ? path : path.substring(split + 1);
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(unt(value));
        if (result == null) throw new IllegalArgumentException("invalid address " + value);
        return result;
    }

    private long number(String value) {
        String text = unt(value).toLowerCase(Locale.ROOT);
        if (text.startsWith("0x")) return Long.parseUnsignedLong(text.substring(2), 16);
        return Long.parseLong(text);
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Proposal file is required");
        return askFile("Select darray_pointer_element_proposals.tsv", "Select");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            Map<String, String> row = new LinkedHashMap<>();
            for (int index = 0; index < header.length; index++)
                row.put(header[index], index < values.length ? values[index] : "");
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
            out.write("target\tstatus\tdetail\n");
            for (ReportRow row : report)
                out.write(clean(row.target) + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }

    private void writeOutputReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\tstatus\tdetail\n");
            for (ReportRow row : outputReport)
                out.write(clean(row.target) + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private long outputCount(String status) {
        return outputReport.stream().filter(row -> row.status.equals(status)).count();
    }

    private boolean enabled(String value) {
        return "1".equals(unt(value)) || "true".equalsIgnoreCase(unt(value));
    }
    private String unt(String value) { return value == null ? "" : value.trim(); }
    private String text(String value) { return value == null ? "" : value; }
    private String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Change(boolean safe, boolean changed, String detail) {}
    private record Safety(boolean safe, String reason) {}
    private record ReportRow(String target, String status, String detail) {}
}
