// Apply high-confidence non-vtable function-pointer field proposals.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Function Pointer Fields

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
import java.util.Set;
import java.util.TreeSet;

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
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;

public class STFunctionPointerFieldApplier extends GhidraScript {
    private static final String MARKER = "[STFunctionPointerFieldApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private static final Set<String> GENERATED_MARKERS = Set.of(
        "[STClassLayoutApplier]", "[STGlobalDataApplier]",
        "[STPointerShapeApplier]", "[STDArrayElementApplier]",
        "[STGlobalRecordApplier]", "[STGlobalAggregateApplier]",
        "[STDiscriminatedPayloadApplier]");
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int pointerSize;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        if (file.isDirectory()) file = new File(file,
            "function_pointer_field_proposals.tsv");
        Tsv input = read(file.toPath());
        require(input, "apply", "structure_path", "component_offset",
            "expected_field_name", "expected_component_type", "expected_comment",
            "definition_path", "proposed_field_name", "signature_function_address",
            "target_addresses", "store_sites", "indirect_call_sites", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();

        int transaction = currentProgram.startTransaction(
            "Apply recovered function-pointer fields");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }

        Path output = file.toPath().toAbsolutePath().normalize().resolveSibling(
            "function_pointer_field_apply_report.tsv");
        writeReport(output);
        println("Function-pointer fields: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") + ", preserved=" +
            count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String target = row.get("structure_path") + "+" + row.get("component_offset");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(target, "disabled", "apply=0"));
            return;
        }
        try {
            DataType value = dataTypes.getDataType(row.get("structure_path"));
            if (!(value instanceof Structure structure)) {
                conflict(target, "structure is missing"); return;
            }
            int offset = Integer.parseInt(row.get("component_offset"));
            DataTypeComponent component = structure.getComponentAt(offset);
            if (component == null || component.getOffset() != offset ||
                    component.getLength() != pointerSize) {
                conflict(target, "field boundary is missing or no longer pointer-sized"); return;
            }
            List<Function> targets = currentTargets(row.get("target_addresses"));
            if (targets.isEmpty()) { conflict(target, "stored target set is stale"); return; }
            Set<String> signatures = new TreeSet<>();
            for (Function function : targets) signatures.add(signatureKey(function));
            if (signatures.size() != 1) {
                conflict(target, "stored target ABIs now conflict: " + signatures); return;
            }
            Function representative = function(row.get("signature_function_address"));
            representative = resolveThunk(representative);
            boolean representativePresent = false;
            if (representative != null)
                for (Function candidate : targets)
                    if (candidate.getEntryPoint().equals(representative.getEntryPoint())) {
                        representativePresent = true;
                        break;
                    }
            if (!representativePresent) {
                conflict(target, "representative target is stale"); return;
            }
            if (!baseline(component, row)) {
                preserve(target, "component baseline changed"); return;
            }
            String unsafe = unsafeStructure(structure);
            if (!unsafe.isBlank()) { preserve(target, unsafe); return; }
            FunctionPointerResult recovered = functionPointer(
                row.get("definition_path"), representative, row.get("evidence"));
            DataType desired = recovered.pointer;
            if (component.getDataType().isEquivalent(desired)) {
                report.add(new Report(target,
                    recovered.definitionChanged ? "applied" : "unchanged",
                    recovered.definitionChanged ?
                        "updated the recovered callback definition to the current " +
                            "stored-target ABI" :
                        "recovered function-pointer field already present"));
                return;
            }
            String comment = MARKER + " exact function-address store and indirect-call chain; " +
                "targets=" + row.get("target_addresses");
            structure.replaceAtOffset(offset, desired, pointerSize,
                row.get("proposed_field_name"), comment);
            refreshHash(structure);
            report.add(new Report(target, "applied",
                "installed " + row.get("definition_path") + " from " +
                    targets.size() + " ABI-compatible stored target(s)"));
        }
        catch (Exception exception) { conflict(target, message(exception)); }
    }

    private FunctionPointerResult functionPointer(String path, Function function,
            String evidence)
            throws Exception {
        int separator = path.lastIndexOf('/');
        if (separator <= 0 || separator == path.length() - 1)
            throw new IllegalArgumentException("invalid definition path " + path);
        CategoryPath category = new CategoryPath(path.substring(0, separator));
        String name = path.substring(separator + 1);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(category, name,
            function.getSignature(), dataTypes);
        desired.setComment(MARKER + " Signature copied from exact stored target family; " +
            evidence);
        DataType existing = dataTypes.getDataType(path);
        DataType definition;
        boolean changed = false;
        if (existing == null) {
            definition = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            changed = true;
        }
        else if (existing instanceof FunctionDefinition current) {
            if (!text(current.getComment()).contains(MARKER))
                throw new IllegalArgumentException("manual function definition preserved");
            if (!current.isEquivalentSignature(desired)) {
                current.replaceWith(desired);
                changed = true;
            }
            definition = current;
        }
        else throw new IllegalArgumentException("definition name is occupied by non-function type");
        return new FunctionPointerResult(
            new PointerDataType(definition, pointerSize, dataTypes), changed);
    }

    private List<Function> currentTargets(String value) {
        List<Function> result = new ArrayList<>();
        Set<Address> seen = new TreeSet<>();
        for (String token : text(value).split("\\|")) {
            Function function = resolveThunk(function(token.trim()));
            if (function != null && seen.add(function.getEntryPoint())) result.add(function);
        }
        return result;
    }
    private Function function(String address) {
        Address value = currentProgram.getAddressFactory().getAddress(address);
        return value == null ? null : currentProgram.getFunctionManager().getFunctionAt(value);
    }
    private Function resolveThunk(Function function) {
        Set<Address> seen = new TreeSet<>();
        while (function != null && function.isThunk() && seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }
    private String signatureKey(Function function) {
        List<String> values = new ArrayList<>();
        values.add(text(function.getCallingConventionName()));
        values.add(typeSpec(function.getReturnType()));
        for (Parameter parameter : function.getParameters())
            values.add(typeSpec(parameter.getDataType()));
        return String.join(";", values);
    }
    private boolean baseline(DataTypeComponent component, Map<String, String> row) {
        return name(component).equals(row.get("expected_field_name")) &&
            typeSpec(component.getDataType()).equals(row.get("expected_component_type")) &&
            text(component.getComment()).equals(row.get("expected_comment"));
    }
    private String unsafeStructure(Structure structure) {
        String description = text(structure.getDescription());
        if (GENERATED_MARKERS.stream().noneMatch(description::contains))
            return "manual/unowned structure preserved";
        String stored = storedHash(description);
        if (stored == null) return "generated structure lacks safety hash";
        String current = layoutHash(structure);
        return stored.equals(current) ? "" : "manual layout changes detected (stored " +
            stored.substring(0, 12) + ", current " + current.substring(0, 12) + ")";
    }
    private void refreshHash(Structure structure) {
        String description = text(structure.getDescription());
        int marker = description.indexOf(HASH_MARKER);
        if (marker >= 0) description = description.substring(0, marker);
        structure.setDescription(description + HASH_MARKER + layoutHash(structure));
    }
    private String storedHash(String description) {
        int marker = description.indexOf(HASH_MARKER);
        if (marker < 0) return null;
        String value = description.substring(marker + HASH_MARKER.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
    }
    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder("length=")
            .append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents())
            value.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(name(component)).append('|').append(text(component.getComment()))
                .append('\n');
        return sha256(value.toString());
    }
    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
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

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to function_pointer_field_proposals.tsv is required");
        return askFile("Select function_pointer_field_proposals.tsv", "Apply");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], unescape(values[column]));
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... names) {
        for (String name : names)
            if (!input.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\tstatus\tdetail\n");
            for (Report row : report)
                out.write(clean(row.target) + "\t" + row.status + "\t" +
                    clean(row.detail) + "\n");
        }
    }
    private void preserve(String target, String detail) { report.add(new Report(target, "preserved", detail)); }
    private void conflict(String target, String detail) { report.add(new Report(target, "conflict", detail)); }
    private long count(String status) { return report.stream().filter(row -> row.status.equals(status)).count(); }
    private static boolean enabled(String value) { return "1".equals(value) || "true".equalsIgnoreCase(value) || "yes".equalsIgnoreCase(value); }
    private static String name(DataTypeComponent component) { return component.getFieldName() == null ? "" : component.getFieldName(); }
    private static String clean(String value) { return text(value).replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"); }
    private static String unescape(String value) { return text(value).replace("\\t", "\t").replace("\\r", "\r").replace("\\n", "\n").replace("\\\\", "\\"); }
    private static String text(String value) { return value == null ? "" : value; }
    private static String message(Throwable throwable) { return throwable.getMessage() == null ? throwable.getClass().getSimpleName() : throwable.getMessage(); }
    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String target, String status, String detail) { }
    private record FunctionPointerResult(DataType pointer,
        boolean definitionChanged) { }
}
