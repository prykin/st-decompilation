// Apply indirect-call/vtable prototype proposals produced by STIndirectCallAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Indirect Calls

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
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.Function;

public class STIndirectCallApplier extends GhidraScript {
    private static final String MARKER = "[STIndirectCallApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private static final CategoryPath VTABLES =
        new CategoryPath("/SubmarineTitans/Recovered/VTables");
    private static final CategoryPath FUNCTIONS =
        new CategoryPath("/SubmarineTitans/Recovered/IndirectCallFunctions");
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int pointerSize;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "target_kind", "structure_path", "component_offset",
            "expected_field_name", "expected_component_type", "expected_comment",
            "proposed_vtable_type", "proposed_field_name", "table_address", "slot_count",
            "signature_function_address", "signature_function", "evidence");
        dataTypes = currentProgram.getDataTypeManager(); pointerSize = currentProgram.getDefaultPointerSize();
        int tx = currentProgram.startTransaction("Apply indirect-call prototypes"); boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) { monitor.checkCancelled(); apply(row); }
            commit = true;
        }
        finally { currentProgram.endTransaction(tx, commit); }
        Path output = file.toPath().toAbsolutePath().getParent().resolve("indirect_call_apply_report.tsv");
        writeReport(output);
        println("Indirect calls: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String target = row.get("structure_path") + "+" + row.get("component_offset");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(target, row.get("target_kind"), "disabled", "apply=0")); return;
        }
        try {
            DataType value = dataTypes.getDataType(row.get("structure_path"));
            if (!(value instanceof Structure structure)) { conflict(target, row, "structure missing"); return; }
            int offset = Integer.parseInt(row.get("component_offset"));
            DataTypeComponent component = structure.getComponentAt(offset);
            if ("create_base_vtable".equals(row.get("target_kind"))) {
                applyBaseVtable(target, row, structure, component); return;
            }
            if (!"vtable_slot".equals(row.get("target_kind"))) {
                conflict(target, row, "unknown target kind"); return;
            }
            Function signature = function(row.get("signature_function_address"));
            if (signature == null) { conflict(target, row, "signature function missing"); return; }
            DataType desired = functionPointer(signature);
            if (component != null && component.getDataType().isEquivalent(desired)) {
                report.add(new Report(target, row.get("target_kind"), "unchanged",
                    "desired function pointer already present")); return;
            }
            if (!baseline(component, row) || !ownedVtable(structure)) {
                preserve(target, row, "stale component or manually owned vtable"); return;
            }
            structure.replaceAtOffset(offset, desired, pointerSize,
                row.get("proposed_field_name"), component.getComment() + " " + MARKER);
            refreshHash(structure);
            report.add(new Report(target, row.get("target_kind"), "applied",
                signature.getPrototypeString(true, true)));
        }
        catch (Exception exception) { conflict(target, row, message(exception)); }
    }

    private void applyBaseVtable(String target, Map<String, String> row, Structure owner,
            DataTypeComponent component) throws Exception {
        String proposedPath = row.get("proposed_vtable_type");
        DataType existing = dataTypes.getDataType(proposedPath);
        Structure vtable;
        if (existing instanceof Structure structure && structure.getDescription() != null &&
                (structure.getDescription().contains(MARKER) ||
                    structure.getDescription().contains("[STVTableApplier]"))) vtable = structure;
        else if (existing == null) vtable = createBaseVtable(row);
        else { preserve(target, row, "proposed vtable name is manually occupied"); return; }
        DataType desired = new PointerDataType(vtable, pointerSize, dataTypes);
        if (component != null && component.getDataType().isEquivalent(desired)) {
            report.add(new Report(target, row.get("target_kind"), "unchanged",
                "base vtable and owner pointer already present")); return;
        }
        if (!baseline(component, row) || owner.getDescription() == null ||
                !owner.getDescription().contains("[STClassLayoutApplier]")) {
            preserve(target, row, "stale component or manually owned class layout"); return;
        }
        owner.replaceAtOffset(0, desired, pointerSize, "vtable",
            MARKER + " shared STGameObjC virtual dispatch table at " + row.get("table_address"));
        refreshHash(owner);
        report.add(new Report(target, row.get("target_kind"), "applied",
            "created " + vtable.getPathName() + " and typed owner vptr"));
    }

    private Structure createBaseVtable(Map<String, String> row) throws Exception {
        int count = Integer.parseInt(row.get("slot_count"));
        Address table = currentProgram.getAddressFactory().getAddress(row.get("table_address"));
        if (table == null || count < 1 || count > 1024) throw new IllegalArgumentException("invalid table range");
        StructureDataType desired = new StructureDataType(VTABLES, "STGameObjCVTable", 0, dataTypes);
        desired.setDescription(MARKER + " Generated shared STGameObjC table from " +
            row.get("table_address") + "; slots=" + count);
        for (int slot = 0; slot < count; slot++) {
            Address raw = readPointer(table.add((long)slot * pointerSize));
            Function entry = raw == null ? null : currentProgram.getFunctionManager().getFunctionAt(raw);
            Function target = resolveThunk(entry);
            DataType type = trusted(target) ? functionPointer(target) :
                new PointerDataType(VoidDataType.dataType, pointerSize, dataTypes);
            String field = meaningful(target) ? sanitize(target.getName()) :
                String.format("vfunc_%02X", slot * pointerSize);
            String comment = "slot 0x" + Integer.toHexString(slot * pointerSize).toUpperCase(Locale.ROOT) +
                " -> " + (raw == null ? "unreadable" : raw) +
                (target == null ? "" : " " + target.getName(true));
            desired.add(type, pointerSize, field, comment);
        }
        desired.setDescription(desired.getDescription() + HASH_MARKER + layoutHash(desired));
        return (Structure)dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
    }

    private DataType functionPointer(Function function) {
        String name = "icall_" + function.getEntryPoint().toString().toUpperCase(Locale.ROOT) +
            "_" + sanitize(function.getName());
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(FUNCTIONS, name,
            function.getSignature(), dataTypes);
        desired.setComment(MARKER + " Signature copied from " + function.getName(true));
        DataType existing = dataTypes.getDataType(FUNCTIONS, name);
        DataType definition;
        if (existing == null) definition = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
        else if (existing instanceof FunctionDefinition current) {
            if (current.getComment() != null && current.getComment().contains(MARKER) &&
                    !current.isEquivalentSignature(desired)) current.replaceWith(desired);
            definition = current;
        }
        else return new PointerDataType(VoidDataType.dataType, pointerSize, dataTypes);
        return new PointerDataType(definition, pointerSize, dataTypes);
    }

    private boolean baseline(DataTypeComponent component, Map<String, String> row) {
        return component != null && component.getOffset() == Integer.parseInt(row.get("component_offset")) &&
            name(component).equals(row.get("expected_field_name")) &&
            typeSpec(component.getDataType()).equals(row.get("expected_component_type")) &&
            text(component.getComment()).equals(row.get("expected_comment"));
    }
    private boolean ownedVtable(Structure structure) {
        String description = structure.getDescription();
        return description != null && (description.contains("[STVTableApplier]") || description.contains(MARKER));
    }
    private boolean trusted(Function function) {
        if (function == null) return false;
        if (function.getSignatureSource() == ghidra.program.model.symbol.SourceType.USER_DEFINED ||
                function.getSignatureSource() == ghidra.program.model.symbol.SourceType.IMPORTED) return true;
        for (ghidra.program.model.listing.FunctionTag tag : function.getTags())
            if (tag.getName().equals("RECOVERED_VIRTUAL_METHOD") ||
                    tag.getName().equals("RECOVERED_DEBUG_NAME")) return true;
        return false;
    }
    private boolean meaningful(Function function) {
        return function != null && !function.getName().matches("(?i)(?:FUN|sub|thunk_FUN)_[0-9a-f]+");
    }
    private Function resolveThunk(Function function) {
        Function current = function;
        for (int depth = 0; depth < 32 && current != null && current.isThunk(); depth++) {
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) break; current = next;
        }
        return current;
    }
    private Function function(String addressText) {
        Address address = currentProgram.getAddressFactory().getAddress(addressText);
        return address == null ? null : currentProgram.getFunctionManager().getFunctionAt(address);
    }
    private Address readPointer(Address address) {
        try {
            long value = Integer.toUnsignedLong(currentProgram.getMemory().getInt(address));
            return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(value);
        }
        catch (Exception ignored) { return null; }
    }
    private void refreshHash(Structure structure) {
        String description = text(structure.getDescription());
        int index = description.indexOf(HASH_MARKER);
        if (index >= 0) description = description.substring(0, index);
        structure.setDescription(description + HASH_MARKER + layoutHash(structure));
    }
    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append('|').append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|').append(name(component)).append('|')
                .append(text(component.getComment())).append('\n');
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.toString().getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest) result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) { throw new IllegalStateException(exception); }
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private static String sanitize(String name) { return name.replaceAll("[^A-Za-z0-9_]", "_"); }
    private static String name(DataTypeComponent component) { return component.getFieldName() == null ? "" : component.getFieldName(); }
    private static String text(String value) { return value == null ? "" : value; }
    private void preserve(String target, Map<String, String> row, String detail) { report.add(new Report(target, row.get("target_kind"), "preserved", detail)); }
    private void conflict(String target, Map<String, String> row, String detail) { report.add(new Report(target, row.get("target_kind"), "conflict", detail)); }
    private long count(String status) { return report.stream().filter(r -> r.status.equals(status)).count(); }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\ttarget_kind\tstatus\tdetail\n");
            for (Report row : report) out.write(clean(row.target) + "\t" + row.kind + "\t" + row.status + "\t" + clean(row.detail) + "\n");
        }
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Path to indirect_call_proposals.tsv is required");
        return askFile("Select indirect_call_proposals.tsv", "Apply");
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
    private void require(Tsv input, String... columns) { for (String column : columns) if (!input.header.contains(column)) throw new IllegalArgumentException("Missing TSV column: " + column); }
    private static boolean enabled(String value) { return "1".equals(value) || "true".equalsIgnoreCase(value); }
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private static String message(Exception e) { return e.getMessage() == null ? e.getClass().getSimpleName() : e.getMessage(); }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String target, String kind, String status, String detail) {}
}
