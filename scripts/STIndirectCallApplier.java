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
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

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
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.symbol.SourceType;

public class STIndirectCallApplier extends GhidraScript {
    private static final String MARKER = "[STIndirectCallApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private static final String VTABLE_ROOT =
        "/SubmarineTitans/Recovered/VTables/";
    private static final Pattern TARGET =
        Pattern.compile("(?i)->\\s*([0-9a-f]{8,16})\\b");
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
            "signature_function_address", "signature_function", "signature_mode",
            "receiver_type", "stack_parameter_count", "proposed_parameter_types",
            "proposed_return_type", "evidence");
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
            if (unsafeSyntheticVtableMutation(row)) {
                preserve(target, row,
                    "legacy synthetic/dispatch vtable mutations are disabled; physical " +
                        "vtables must come from recovered table evidence and dispatch " +
                        "interfaces remain audit-only");
                return;
            }
            DataType value = dataTypes.getDataType(row.get("structure_path"));
            if (!(value instanceof Structure structure)) { conflict(target, row, "structure missing"); return; }
            int offset = Integer.parseInt(row.get("component_offset"));
            DataTypeComponent component = structure.getComponentAt(offset);
            if ("revert_generated_slot".equals(row.get("target_kind"))) {
                revertGeneratedSlot(target, row, structure, component); return;
            }
            if (!"vtable_slot".equals(row.get("target_kind"))) {
                conflict(target, row, "unknown target kind"); return;
            }
            Function signature = function(row.get("signature_function_address"));
            if (signature == null) { conflict(target, row, "signature function missing"); return; }
            String mode = row.get("signature_mode");
            DataType desired;
            if ("target".equals(mode)) {
                if (component != null && strongerThanTarget(component, signature)) {
                    report.add(new Report(target, row.get("target_kind"), "unchanged",
                        "stronger receiver-aware function-pointer ABI already present; " +
                            "weaker target Listing signature ignored"));
                    return;
                }
                desired = functionPointer(signature);
            }
            else if ("generated_family".equals(mode))
                desired = resolveSpecification(row.get("receiver_type"));
            else if ("family_target".equals(mode))
                desired = resolveSpecification(row.get("receiver_type"));
            else if ("synthetic_thiscall".equals(mode))
                desired = syntheticThiscallFunctionPointer(row);
            else if ("synthetic_stdcall".equals(mode))
                desired = syntheticStdcallFunctionPointer(row);
            else {
                conflict(target, row, "unknown signature mode " + mode); return;
            }
            if (!(desired instanceof Pointer pointer) ||
                    pointer.getDataType() instanceof VoidDataType) {
                conflict(target, row, "could not construct function pointer"); return;
            }
            if (component != null && component.getDataType().isEquivalent(desired)) {
                report.add(new Report(target, row.get("target_kind"), "unchanged",
                    "desired function pointer already present")); return;
            }
            if (!baseline(component, row) || !ownedVtable(structure)) {
                preserve(target, row, "stale component or manually owned vtable"); return;
            }
            String componentComment = text(component.getComment());
            if (!componentComment.contains(MARKER))
                componentComment = componentComment + " " + MARKER;
            structure.replaceAtOffset(offset, desired, pointerSize,
                row.get("proposed_field_name"), componentComment.trim());
            refreshHash(structure);
            report.add(new Report(target, row.get("target_kind"), "applied",
                mode.startsWith("synthetic_") ?
                    "neutral " + mode.substring("synthetic_".length()) +
                    " ABI: receiver=" + row.get("receiver_type") +
                    ", stack_parameters=" + row.get("stack_parameter_count") +
                    ", parameter_types=" + row.get("proposed_parameter_types") +
                    ", return=" + row.get("proposed_return_type") :
                mode.equals("family_target") ?
                    "copied unanimous function-pointer ABI from other typed " +
                    "vtable components for resolved target " +
                    row.get("signature_function_address") :
                    signature.getPrototypeString(true, true)));
        }
        catch (Exception exception) { conflict(target, row, message(exception)); }
    }

    private void revertGeneratedSlot(String target, Map<String, String> row,
            Structure structure, DataTypeComponent component) {
        if (!baseline(component, row) || !ownedVtable(structure) ||
                !generatedIndirectPointer(component)) {
            preserve(target, row, "stale or non-generated indirect slot"); return;
        }
        DataType desired = new PointerDataType(VoidDataType.dataType, pointerSize, dataTypes);
        String comment = text(component.getComment())
            .replace(" " + MARKER, "").replace(MARKER, "").trim();
        structure.replaceAtOffset(component.getOffset(), desired, pointerSize,
            name(component), comment);
        refreshHash(structure);
        report.add(new Report(target, row.get("target_kind"), "applied",
            "reverted generated indirect ABI after evidence invalidation"));
    }

    private boolean generatedIndirectPointer(DataTypeComponent component) {
        if (component == null ||
                !(component.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof FunctionDefinition definition)) return false;
        return text(component.getComment()).contains(MARKER) &&
            (text(definition.getComment()).contains(MARKER) ||
                definition.getCategoryPath().equals(FUNCTIONS));
    }

    private boolean strongerThanTarget(DataTypeComponent component, Function target) {
        if (!(component.getDataType() instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof FunctionDefinition definition))
            return false;
        String existingConvention = text(definition.getCallingConventionName());
        String targetConvention = text(target.getCallingConventionName());
        boolean existingReceiver = "__thiscall".equals(existingConvention) &&
            definition.getArguments().length > 0 &&
            definition.getArguments()[0].getDataType() instanceof Pointer;
        boolean targetReceiver = "__thiscall".equals(targetConvention) &&
            target.getParameterCount() > 0 &&
            target.getParameter(0).getDataType() instanceof Pointer;
        if ((existingReceiver && !targetReceiver) ||
            (concreteConvention(existingConvention) &&
                !concreteConvention(targetConvention)) ||
            definition.getArguments().length > target.getParameterCount() ||
            concreteWidth(definition.getReturnType()) >
                concreteWidth(target.getReturnType())) return true;

        // A generated slot is an independently recovered ABI.  Structural virtual-method
        // ownership and a useful method name do not make Ghidra's default Listing prototype
        // authoritative.  Preserve any non-equivalent generated ABI until the target itself has
        // manual/imported or independently machine-recovered provenance.  Invalidated indirect
        // evidence is removed through the explicit revert_generated_slot path above.
        if (generatedIndirectPointer(component) && !hasStrongAbiProvenance(target)) {
            FunctionDefinitionDataType candidate = new FunctionDefinitionDataType(
                FUNCTIONS, target.getName(), target.getSignature(), dataTypes);
            return !definition.isEquivalentSignature(candidate);
        }
        return false;
    }

    private boolean hasStrongAbiProvenance(Function function) {
        if (function == null) return false;
        SourceType source = function.getSignatureSource();
        if (source == SourceType.USER_DEFINED || source == SourceType.IMPORTED) return true;
        String comment = function.getComment();
        if (hasTag(function, "RECOVERED_ABI_CONSISTENCY") && comment != null &&
                comment.contains("[STAbiConsistencyApplier] machine_thiscall_arity ")) return true;
        return hasTag(function, "RECOVERED_MESSAGE_HANDLER");
    }

    private boolean hasTag(Function function, String wanted) {
        for (FunctionTag tag : function.getTags())
            if (wanted.equals(tag.getName())) return true;
        return false;
    }

    private boolean concreteConvention(String convention) {
        return convention != null && !convention.isBlank() &&
            !"unknown".equalsIgnoreCase(convention) &&
            !"default".equalsIgnoreCase(convention);
    }

    private int concreteWidth(DataType type) {
        if (type == null || type instanceof VoidDataType) return 0;
        String name = type.getName().toLowerCase(Locale.ROOT);
        // Bare /undefined is Ghidra's unknown one-byte placeholder.  Sized undefinedN values,
        // however, carry an exact recovered source/return width and must not be treated as if
        // they contained no ABI information.
        return name.equals("undefined") ? 0 : Math.max(0, type.getLength());
    }

    private boolean unsafeSyntheticVtableMutation(Map<String, String> row) {
        String kind = text(row.get("target_kind"));
        String structure = text(row.get("structure_path"));
        String mode = text(row.get("signature_mode"));
        return kind.equals("create_dispatch_vtable") ||
            kind.equals("create_base_vtable") ||
            kind.equals("dispatch_interface_audit") ||
            kind.equals("dispatch_slot_audit") ||
            structure.endsWith("DispatchVTable") ||
            mode.startsWith("synthetic_dispatch_");
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

    /**
     * Re-resolve the analyzer's same-target family inside the transaction. This
     * avoids trusting a stale serialized type path. Only independently generated
     * indirect-call components participate; weak VTableApplier target typedefs are downstream
     * consumers of this family and must not veto it.
     */
    private DataType familyTargetFunctionPointer(Function wanted) {
        Function resolvedWanted = resolveThunk(wanted);
        if (resolvedWanted == null) return null;
        Pointer agreed = null;
        Iterator<Structure> structures = dataTypes.getAllStructures();
        while (structures.hasNext()) {
            Structure structure = structures.next();
            if (!structure.getPathName().startsWith(VTABLE_ROOT)) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                if (!(component.getDataType() instanceof Pointer pointer) ||
                        !(pointer.getDataType() instanceof FunctionDefinition) ||
                        !generatedIndirectPointer(component))
                    continue;
                Matcher matcher =
                    TARGET.matcher(text(component.getComment()));
                if (!matcher.find()) continue;
                Address raw = currentProgram.getAddressFactory()
                    .getAddress(matcher.group(1));
                Function entry = raw == null ? null :
                    currentProgram.getFunctionManager().getFunctionAt(raw);
                Function target = resolveThunk(entry);
                if (target == null ||
                        !target.getEntryPoint().equals(
                            resolvedWanted.getEntryPoint()))
                    continue;
                if (agreed != null && !agreed.isEquivalent(pointer))
                    return null;
                if (agreed == null) agreed = pointer;
            }
        }
        return agreed;
    }

    private DataType syntheticThiscallFunctionPointer(Map<String, String> row) throws Exception {
        int count = Integer.parseInt(row.get("stack_parameter_count"));
        if (count < 0 || count > 64)
            throw new IllegalArgumentException("invalid stack parameter count " + count);
        DataType receiver = resolveSpecification(row.get("receiver_type"));
        DataType returned = resolveSpecification(row.get("proposed_return_type"));
        if (!(receiver instanceof Pointer) || returned == null)
            throw new IllegalArgumentException("synthetic ABI types are missing");
        String receiverName = row.get("receiver_type");
        int receiverSeparator = receiverName.lastIndexOf('/');
        if (receiverSeparator >= 0) receiverName = receiverName.substring(receiverSeparator + 1);
        String name = "icall_" +
            row.get("signature_function_address").toUpperCase(Locale.ROOT) +
            "_" + sanitize(row.get("signature_function")) + "_for_" +
            sanitize(receiverName);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(FUNCTIONS, name,
            dataTypes);
        desired.setCallingConvention("__thiscall");
        desired.setReturnType(returned);
        ParameterDefinition[] arguments = new ParameterDefinition[count + 1];
        arguments[0] = new ParameterDefinitionImpl("this", receiver,
            "receiver proven by vtable membership and incoming ECX use");
        DataType[] stackTypes = stackParameterTypes(row, count);
        String[] stackSpecifications = parameterTypeSpecifications(row, count);
        for (int index = 0; index < count; index++) {
            boolean neutral = "/undefined4".equals(stackSpecifications[index]);
            arguments[index + 1] = new ParameterDefinitionImpl("arg_" + (index + 1),
                stackTypes[index], neutral ?
                    "neutral ABI word; semantics unresolved" :
                    "width/signedness recovered from the callee's first stack-slot use");
        }
        desired.setArguments(arguments);
        desired.setComment(MARKER + " x86 thiscall ABI recovered from " +
            row.get("signature_function_address") + "; " + row.get("evidence"));
        DataType existing = dataTypes.getDataType(FUNCTIONS, name);
        DataType definition;
        if (existing == null)
            definition = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
        else if (existing instanceof FunctionDefinition current) {
            if (current.getComment() != null && current.getComment().contains(MARKER) &&
                    !current.isEquivalentSignature(desired)) current.replaceWith(desired);
            definition = current;
        }
        else throw new IllegalArgumentException("generated function type name is occupied");
        return new PointerDataType(definition, pointerSize, dataTypes);
    }

    private DataType syntheticStdcallFunctionPointer(Map<String, String> row) throws Exception {
        int count = Integer.parseInt(row.get("stack_parameter_count"));
        if (count < 1 || count > 64)
            throw new IllegalArgumentException("invalid stdcall stack parameter count " + count);
        DataType returned = resolveSpecification(row.get("proposed_return_type"));
        if (returned == null) throw new IllegalArgumentException("synthetic ABI return is missing");
        String name = "icall_" +
            row.get("signature_function_address").toUpperCase(Locale.ROOT) +
            "_" + sanitize(row.get("signature_function")) + "_stdcall";
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(FUNCTIONS, name,
            dataTypes);
        desired.setCallingConvention("__stdcall");
        desired.setReturnType(returned);
        ParameterDefinition[] arguments = new ParameterDefinition[count];
        DataType[] stackTypes = stackParameterTypes(row, count);
        String[] stackSpecifications = parameterTypeSpecifications(row, count);
        for (int index = 0; index < count; index++) {
            boolean neutral = "/undefined4".equals(stackSpecifications[index]);
            arguments[index] = new ParameterDefinitionImpl("arg_" + (index + 1),
                stackTypes[index], neutral ?
                    "neutral ABI word; semantics unresolved" :
                    "width/signedness recovered from the callee's first stack-slot use");
        }
        desired.setArguments(arguments);
        desired.setComment(MARKER + " x86 stdcall ABI recovered from " +
            row.get("signature_function_address") + "; " + row.get("evidence"));
        DataType existing = dataTypes.getDataType(FUNCTIONS, name);
        DataType definition;
        if (existing == null)
            definition = dataTypes.resolve(desired, DataTypeConflictHandler.KEEP_HANDLER);
        else if (existing instanceof FunctionDefinition current) {
            if (current.getComment() != null && current.getComment().contains(MARKER) &&
                    !current.isEquivalentSignature(desired)) current.replaceWith(desired);
            definition = current;
        }
        else throw new IllegalArgumentException("generated function type name is occupied");
        return new PointerDataType(definition, pointerSize, dataTypes);
    }

    private DataType[] stackParameterTypes(Map<String, String> row, int count) {
        String[] specifications = parameterTypeSpecifications(row, count);
        DataType[] result = new DataType[count];
        for (int index = 0; index < count; index++) {
            result[index] = resolveSpecification(specifications[index]);
            if (result[index] == null)
                throw new IllegalArgumentException("missing stack parameter type " +
                    specifications[index] + " at slot " + (index + 1));
        }
        return result;
    }

    private String[] parameterTypeSpecifications(Map<String, String> row, int count) {
        if (count == 0 && row.get("proposed_parameter_types").isBlank())
            return new String[0];
        String[] specifications = row.get("proposed_parameter_types").split(";", -1);
        if (specifications.length != count)
            throw new IllegalArgumentException("stack parameter type count " +
                specifications.length + " does not match cleanup count " + count);
        return specifications;
    }

    private DataType resolveSpecification(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolveSpecification(specification.substring("pointer:".length()));
            return pointed == null ? null : new PointerDataType(pointed, pointerSize, dataTypes);
        }
        return dataTypes.getDataType(specification);
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
    private static String leaf(String path) {
        int separator = path.lastIndexOf('/');
        if (separator >= 0) path = path.substring(separator + 1);
        separator = path.lastIndexOf("::");
        return separator < 0 ? path : path.substring(separator + 2);
    }
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
