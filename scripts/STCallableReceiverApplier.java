// Apply dense function-local callable-receiver views from STCallableReceiverAnalyzer.
// Physical class vtables, namespaces, and semantic method names are never changed.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Callable Receivers

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STCallableReceiverApplier extends GhidraScript {
    private static final String MARKER = "[STCallableReceiverApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private static final String SIGNATURE_HASH_MARKER = "; generated_signature_sha256=";
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
        if (file.isDirectory()) file = new File(file, "callable_receiver_proposals.tsv");
        Path targetPath = file.toPath().toAbsolutePath().normalize();
        Path typePath = targetPath.resolveSibling("callable_receiver_type_proposals.tsv");
        Path slotPath = targetPath.resolveSibling("callable_receiver_slot_proposals.tsv");
        if (!Files.isRegularFile(targetPath))
            throw new IllegalArgumentException("Missing " + targetPath);
        if (!Files.isRegularFile(typePath))
            throw new IllegalArgumentException("Missing " + typePath);
        if (!Files.isRegularFile(slotPath))
            throw new IllegalArgumentException("Missing " + slotPath);

        Tsv targets = readTsv(targetPath);
        Tsv types = readTsv(typePath);
        Tsv slots = readTsv(slotPath);
        require(targets, "apply", "function_address", "function_name",
            "parameter_ordinal", "expected_name", "expected_storage", "expected_type",
            "expected_source", "proposed_type", "shape_id", "confidence", "reason");
        require(types, "apply", "shape_id", "receiver_type_path", "vtable_type_path",
            "receiver_length", "vtable_length", "site_count", "slot_count",
            "confidence", "reason");
        require(slots, "apply", "shape_id", "slot_offset", "stack_parameter_count",
            "return_type", "site_count", "call_addresses", "reason");

        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();
        Map<String, List<Map<String, String>>> slotsByShape = new LinkedHashMap<>();
        for (Map<String, String> row : slots.rows)
            slotsByShape.computeIfAbsent(row.get("shape_id"), ignored -> new ArrayList<>())
                .add(row);

        int transaction = currentProgram.startTransaction(
            "Apply recovered callable receivers");
        boolean commit = false;
        try {
            for (Map<String, String> row : types.rows) {
                monitor.checkCancelled();
                applyType(row, slotsByShape.getOrDefault(row.get("shape_id"), List.of()));
            }
            for (Map<String, String> row : targets.rows) {
                monitor.checkCancelled();
                applyTarget(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }

        Path output = targetPath.resolveSibling("callable_receiver_apply_report.tsv");
        writeReport(output);
        println("Callable receivers: applied=" + count("applied") +
            ", updated=" + count("updated") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void applyType(Map<String, String> row,
            List<Map<String, String>> slotRows) {
        String shape = row.get("shape_id");
        if (!enabled(row.get("apply"))) {
            report.add(new Report("type", shape, "disabled", "apply=0"));
            return;
        }
        try {
            int receiverLength = positive(row.get("receiver_length"), "receiver length");
            int vtableLength = positive(row.get("vtable_length"), "vtable length");
            String receiverPath = row.get("receiver_type_path");
            String vtablePath = row.get("vtable_type_path");

            Structure receiver = prepareReceiverShell(receiverPath, receiverLength);
            List<Map<String, String>> enabledSlots = slotRows.stream()
                .filter(value -> enabled(value.get("apply")))
                .sorted(Comparator.comparingInt(value ->
                    Integer.parseInt(value.get("slot_offset"))))
                .toList();
            StructureDataType desiredTable = new StructureDataType(category(vtablePath),
                leaf(vtablePath), vtableLength, dataTypes);
            for (Map<String, String> slot : enabledSlots) {
                int offset = nonnegative(slot.get("slot_offset"), "slot offset");
                if ((offset % pointerSize) != 0 || offset + pointerSize > vtableLength)
                    throw new IllegalArgumentException("unaligned/out-of-range slot " + offset);
                DataType functionPointer = callablePointer(shape, receiver, slot);
                desiredTable.replaceAtOffset(offset, functionPointer, pointerSize,
                    "vfunc_" + String.format("%02X", offset),
                    MARKER + " exact dense CALLIND family; sites=" +
                        slot.get("call_addresses"));
            }
            desiredTable.setDescription(MARKER +
                " generated function-local callable table");
            Structure table = installStructure(vtablePath, desiredTable);

            StructureDataType desiredReceiver = new StructureDataType(
                category(receiverPath), leaf(receiverPath), receiverLength, dataTypes);
            desiredReceiver.replaceAtOffset(0,
                new PointerDataType(table, pointerSize, dataTypes), pointerSize,
                "vtable", MARKER + " exact offset-zero indirect-call table load");
            desiredReceiver.setDescription(MARKER +
                " generated function-local structural receiver; no semantic class ownership");
            String before = layoutHash(receiver);
            receiver = installStructure(receiverPath, desiredReceiver);
            String after = layoutHash(receiver);
            report.add(new Report("type", shape,
                before.equals(after) ? "unchanged" : "updated",
                "receiver_length=" + receiverLength + "; slots=" + enabledSlots.size()));
        }
        catch (Exception exception) {
            report.add(new Report("type", shape, "conflict", message(exception)));
        }
    }

    private Structure prepareReceiverShell(String path, int length) throws Exception {
        DataType existing = dataTypes.getDataType(path);
        if (existing != null) {
            if (!(existing instanceof Structure structure))
                throw new IllegalArgumentException("receiver path is occupied by non-structure");
            requireOwnedStructure(structure);
            return structure;
        }
        StructureDataType shell = new StructureDataType(category(path), leaf(path),
            length, dataTypes);
        shell.setDescription(MARKER + " generated callable receiver shell");
        DataType installed = dataTypes.resolve(shell, DataTypeConflictHandler.KEEP_HANDLER);
        if (!(installed instanceof Structure structure) ||
                !structure.getPathName().equals(path))
            throw new IllegalStateException("could not create receiver " + path);
        structure.setDescription(shell.getDescription() + HASH_MARKER +
            layoutHash(structure));
        return structure;
    }

    private Structure installStructure(String path, StructureDataType desired)
            throws Exception {
        DataType existing = dataTypes.getDataType(path);
        if (existing == null) {
            DataType installed = dataTypes.resolve(desired,
                DataTypeConflictHandler.KEEP_HANDLER);
            if (!(installed instanceof Structure structure) ||
                    !structure.getPathName().equals(path))
                throw new IllegalStateException("could not create exact structure " + path);
            structure.setDescription(desired.getDescription() + HASH_MARKER +
                layoutHash(structure));
            return structure;
        }
        if (!(existing instanceof Structure structure))
            throw new IllegalArgumentException("type path is occupied by non-structure " + path);
        requireOwnedStructure(structure);
        String desiredHash = layoutHash(desired);
        if (!layoutHash(structure).equals(desiredHash)) structure.replaceWith(desired);
        structure.setDescription(desired.getDescription() + HASH_MARKER +
            layoutHash(structure));
        return structure;
    }

    private void requireOwnedStructure(Structure structure) {
        String description = text(structure.getDescription());
        if (!description.contains(MARKER))
            throw new IllegalArgumentException("manual/unowned structure preserved: " +
                structure.getPathName());
        String stored = storedHash(description, HASH_MARKER);
        if (stored == null || !stored.equals(layoutHash(structure)))
            throw new IllegalArgumentException("generated structure was manually changed: " +
                structure.getPathName());
    }

    private DataType callablePointer(String shape, Structure receiver,
            Map<String, String> row) throws Exception {
        int offset = nonnegative(row.get("slot_offset"), "slot offset");
        int count = nonnegative(row.get("stack_parameter_count"), "stack parameter count");
        if (count > 64) throw new IllegalArgumentException("implausible stack parameter count");
        DataType returned = resolve(row.get("return_type"));
        if (returned == null) throw new IllegalArgumentException("missing return type");
        CategoryPath category = category(receiver.getPathName());
        String name = shape + "_vfunc_" + String.format("%02X", offset);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(category,
            name, dataTypes);
        desired.setCallingConvention("__thiscall");
        desired.setReturnType(returned);
        ParameterDefinition[] arguments = new ParameterDefinition[count + 1];
        arguments[0] = new ParameterDefinitionImpl("this",
            new PointerDataType(receiver, pointerSize, dataTypes),
            "exact unadjusted receiver; structural identity only");
        DataType word = dataTypes.getDataType("/undefined4");
        if (word == null) throw new IllegalStateException("missing /undefined4");
        for (int index = 0; index < count; index++)
            arguments[index + 1] = new ParameterDefinitionImpl("arg_" + (index + 1),
                word, "machine-width stack argument; semantics unresolved");
        desired.setArguments(arguments);
        String signatureHash = signatureHash(desired);
        desired.setComment(MARKER + " dense ownerless CALLIND slot 0x" +
            Integer.toHexString(offset).toUpperCase(Locale.ROOT) + "; sites=" +
            row.get("call_addresses") + SIGNATURE_HASH_MARKER + signatureHash);

        String path = desired.getPathName();
        DataType existing = dataTypes.getDataType(path);
        DataType definition;
        if (existing == null) {
            definition = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
            if (!definition.getPathName().equals(path))
                throw new IllegalStateException("could not create exact function type " + path);
        }
        else if (existing instanceof FunctionDefinition current) {
            String comment = text(current.getComment());
            String stored = storedHash(comment, SIGNATURE_HASH_MARKER);
            if (!comment.contains(MARKER) || stored == null ||
                    !stored.equals(signatureHash(current)))
                throw new IllegalArgumentException(
                    "manual/edited function definition preserved: " + path);
            if (!current.isEquivalentSignature(desired)) current.replaceWith(desired);
            current.setComment(desired.getComment());
            definition = current;
        }
        else throw new IllegalArgumentException(
            "function type path is occupied by non-function: " + path);
        return new PointerDataType(definition, pointerSize, dataTypes);
    }

    private void applyTarget(Map<String, String> row) {
        String target = row.get("function_address") + ":param_" +
            row.get("parameter_ordinal");
        if (!enabled(row.get("apply"))) {
            report.add(new Report("target", target, "disabled", "apply=0"));
            return;
        }
        try {
            Function function = function(row.get("function_address"));
            if (function == null) throw new IllegalArgumentException("function missing");
            if (!function.getName(true).equals(row.get("function_name"))) {
                report.add(new Report("target", target, "preserved",
                    "function identity changed"));
                return;
            }
            int ordinal = Integer.parseInt(row.get("parameter_ordinal"));
            Parameter parameter = null;
            for (Parameter candidate : function.getParameters())
                if (!candidate.isAutoParameter() && candidate.getOrdinal() == ordinal)
                    parameter = candidate;
            if (parameter == null) throw new IllegalArgumentException("parameter missing");
            DataType proposed = resolve(row.get("proposed_type"));
            if (!(proposed instanceof Pointer))
                throw new IllegalArgumentException("proposed receiver is not a pointer");
            if (parameter.getDataType().isEquivalent(proposed)) {
                report.add(new Report("target", target, "unchanged",
                    "callable receiver already installed"));
                return;
            }
            boolean baseline = parameter.getName().equals(row.get("expected_name")) &&
                parameter.getVariableStorage().toString().equals(row.get("expected_storage")) &&
                typeSpec(parameter.getDataType()).equals(row.get("expected_type")) &&
                parameter.getSource().toString().equals(row.get("expected_source"));
            if (!baseline) {
                report.add(new Report("target", target, "preserved", "stale baseline"));
                return;
            }
            if (parameter.getSource() == SourceType.USER_DEFINED ||
                    parameter.getSource() == SourceType.IMPORTED) {
                report.add(new Report("target", target, "preserved",
                    "manual/imported parameter"));
                return;
            }
            if (!genericReceiver(parameter.getDataType())) {
                report.add(new Report("target", target, "preserved",
                    "concrete parameter type"));
                return;
            }
            parameter.setDataType(proposed, SourceType.ANALYSIS);
            parameter.setComment(MARKER + " " + row.get("shape_id") + "; " +
                row.get("reason"));
            report.add(new Report("target", target, "applied",
                row.get("expected_type") + " -> " + row.get("proposed_type")));
        }
        catch (Exception exception) {
            report.add(new Report("target", target, "conflict", message(exception)));
        }
    }

    private boolean genericReceiver(DataType type) {
        DataType value = unwrap(type);
        if (!(value instanceof Pointer pointer))
            return Undefined.isUndefined(value) || genericScalar(value);
        DataType pointee = unwrap(pointer.getDataType());
        if (pointee == null || Undefined.isUndefined(pointee)) return true;
        if (pointee instanceof Structure structure)
            return text(structure.getDescription()).contains(MARKER);
        return genericScalar(pointee);
    }

    private boolean genericScalar(DataType type) {
        String name = type == null ? "" : type.getName().toLowerCase(Locale.ROOT);
        return name.equals("void") ||
            name.matches("u?int(?:1|2|4|8)?|undefined[1248]?|dword|word|byte|char|short|long");
    }

    private DataType unwrap(DataType type) {
        Set<DataType> seen = new HashSet<>();
        while (type instanceof TypeDef alias && seen.add(type))
            type = alias.getBaseDataType();
        return type;
    }

    private DataType resolve(String specification) {
        String value = text(specification);
        if (value.startsWith("pointer:")) {
            DataType base = resolve(value.substring("pointer:".length()));
            return base == null ? null :
                new PointerDataType(base, pointerSize, dataTypes);
        }
        return dataTypes.getDataType(value);
    }

    private Function function(String value) {
        Address address = currentProgram.getAddressFactory().getAddress(value);
        return address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
    }

    private Structure existingStructure(String path) {
        DataType value = dataTypes.getDataType(path);
        return value instanceof Structure structure ? structure : null;
    }

    private CategoryPath category(String path) {
        int split = path.lastIndexOf('/');
        return new CategoryPath(split <= 0 ? "/" : path.substring(0, split));
    }
    private String leaf(String path) {
        int split = path.lastIndexOf('/');
        return split < 0 ? path : path.substring(split + 1);
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

    private String signatureHash(FunctionDefinition definition) {
        StringBuilder value = new StringBuilder()
            .append(definition.getCallingConventionName()).append('|')
            .append(typeSpec(definition.getReturnType()));
        for (ParameterDefinition parameter : definition.getArguments())
            value.append('|').append(typeSpec(parameter.getDataType()));
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
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 unavailable", exception);
        }
    }

    private String storedHash(String value, String marker) {
        int index = text(value).indexOf(marker);
        if (index < 0) return null;
        String hash = value.substring(index + marker.length()).trim();
        if (hash.length() < 64) return null;
        hash = hash.substring(0, 64).toLowerCase(Locale.ROOT);
        return hash.matches("[0-9a-f]{64}") ? hash : null;
    }

    private File inputFile() throws Exception {
        String[] arguments = getScriptArgs();
        if (arguments.length > 0 && !arguments[0].isBlank())
            return new File(arguments[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException(
                "Path to callable_receiver_proposals.tsv is required");
        return askFile("Select callable_receiver_proposals.tsv", "Apply");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) return new Tsv(List.of(), List.of());
        String[] header = lines.get(0).split("\\t", -1);
        List<String> columns = List.of(header);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Malformed TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(columns, rows);
    }

    private void require(Tsv input, String... columns) {
        for (String column : columns)
            if (!input.columns.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("kind\ttarget\tstatus\tdetail\n");
            for (Report row : report)
                out.write(row.kind + "\t" + clean(row.target) + "\t" + row.status +
                    "\t" + clean(row.detail) + "\n");
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private boolean enabled(String value) { return "1".equals(text(value).trim()); }
    private int positive(String value, String label) {
        int result = Integer.parseInt(value);
        if (result <= 0) throw new IllegalArgumentException("invalid " + label);
        return result;
    }
    private int nonnegative(String value, String label) {
        int result = Integer.parseInt(value);
        if (result < 0) throw new IllegalArgumentException("invalid " + label);
        return result;
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private String text(Object value) { return value == null ? "" : value.toString(); }
    private String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private record Tsv(List<String> columns, List<Map<String, String>> rows) {}
    private record Report(String kind, String target, String status, String detail) {}
}
