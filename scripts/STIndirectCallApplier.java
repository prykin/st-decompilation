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
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
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
            DataType value = dataTypes.getDataType(row.get("structure_path"));
            if (!(value instanceof Structure structure)) { conflict(target, row, "structure missing"); return; }
            int offset = Integer.parseInt(row.get("component_offset"));
            DataTypeComponent component = structure.getComponentAt(offset);
            if ("create_dispatch_vtable".equals(row.get("target_kind"))) {
                applyDispatchVtable(target, row, structure, component); return;
            }
            if ("create_base_vtable".equals(row.get("target_kind"))) {
                applyBaseVtable(target, row, structure, component); return;
            }
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
            if ("target".equals(mode)) desired = functionPointer(signature);
            else if ("synthetic_thiscall".equals(mode) ||
                    "synthetic_dispatch_thiscall".equals(mode))
                desired = syntheticThiscallFunctionPointer(row);
            else if ("synthetic_stdcall".equals(mode) ||
                    "synthetic_dispatch_stdcall".equals(mode))
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
            text(definition.getComment()).contains(MARKER);
    }

    private void applyDispatchVtable(String target, Map<String, String> row,
            Structure owner, DataTypeComponent component) throws Exception {
        DataType source = resolveSpecification(row.get("receiver_type"));
        if (!(source instanceof Pointer pointer) ||
                !(pointer.getDataType() instanceof Structure physical)) {
            conflict(target, row, "physical vtable prefix is missing"); return;
        }
        DispatchResolution resolution = ensureDispatchVtable(row, physical);
        if (resolution.error != null) {
            preserve(target, row, resolution.error); return;
        }
        DataType desired = new PointerDataType(resolution.structure, pointerSize, dataTypes);
        if (component != null && component.getOffset() == 0 &&
                component.getDataType().isEquivalent(desired)) {
            report.add(new Report(target, row.get("target_kind"),
                resolution.changed ? "applied" : "unchanged", resolution.detail));
            return;
        }
        if (!baseline(component, row) || owner.getDescription() == null ||
                !owner.getDescription().contains("[STClassLayoutApplier]")) {
            preserve(target, row, "stale component or manually owned class layout"); return;
        }
        owner.replaceAtOffset(0, desired, pointerSize, "vtable",
            MARKER + " polymorphic dispatch shape; physical prefix=" +
                physical.getPathName());
        refreshHash(owner);
        report.add(new Report(target, row.get("target_kind"), "applied",
            resolution.detail + "; owner vptr now uses " +
                resolution.structure.getPathName()));
    }

    private DispatchResolution ensureDispatchVtable(Map<String, String> row,
            Structure physical) throws Exception {
        int count = Integer.parseInt(row.get("slot_count"));
        if (count < 1 || count > 1024)
            return DispatchResolution.error("invalid dispatch slot count " + count);
        String path = row.get("proposed_vtable_type");
        DataType value = dataTypes.getDataType(path);
        if (value == null) {
            Structure created = createDispatchVtable(row, physical, count);
            return new DispatchResolution(created, true,
                "created polymorphic dispatch shape with " + count + " slots", null);
        }
        if (!(value instanceof Structure current))
            return DispatchResolution.error("dispatch type name is occupied");
        String description = text(current.getDescription());
        if (!description.contains(MARKER))
            return DispatchResolution.error("manual dispatch type preserved");
        String stored = storedHash(description);
        if (stored == null || !stored.equals(layoutHash(current)))
            return DispatchResolution.error("modified generated dispatch type preserved");
        if (current.getLength() % pointerSize != 0)
            return DispatchResolution.error("generated dispatch type has a partial slot");

        int existingSlots = current.getLength() / pointerSize;
        int requiredSlots = Math.max(existingSlots, count);
        StructureDataType refreshed = new StructureDataType(
            current.getCategoryPath(), current.getName(), 0, dataTypes);
        int prefixSlots = physical.getLength() / pointerSize;
        for (int slot = 0; slot < requiredSlots; slot++) {
            int offset = slot * pointerSize;
            DataTypeComponent prefix = slot < prefixSlots ?
                physical.getComponentAt(offset) : null;
            DataTypeComponent prior = slot < existingSlots ?
                current.getComponentAt(offset) : null;
            DataTypeComponent source = prefix != null && prefix.getOffset() == offset &&
                prefix.getLength() == pointerSize ? prefix :
                prior != null && prior.getOffset() == offset &&
                    prior.getLength() == pointerSize ? prior : null;
            if (source != null)
                refreshed.add(source.getDataType(), pointerSize, name(source),
                    text(source.getComment()));
            else refreshed.add(
                new PointerDataType(VoidDataType.dataType, pointerSize, dataTypes),
                pointerSize, String.format("vfunc_%02X", offset),
                dispatchSlotComment(row.get("structure_path"), offset));
        }
        String refreshedHash = layoutHash(refreshed);
        if (current.getLength() == refreshed.getLength() &&
                refreshedHash.equals(layoutHash(current)))
            return new DispatchResolution(current, false,
                "polymorphic dispatch shape already has " + existingSlots +
                    " slots and a current physical prefix", null);
        refreshed.setDescription(MARKER + " Generated polymorphic dispatch shape for " +
            leaf(row.get("structure_path")) + "; physical_prefix=" +
            physical.getPathName() + "; slots=" + requiredSlots + HASH_MARKER +
            refreshedHash);
        current.replaceWith(refreshed);
        current.setDescription(refreshed.getDescription());
        return new DispatchResolution(current, true,
            requiredSlots > existingSlots ?
                "extended polymorphic dispatch shape from " + existingSlots +
                    " to " + requiredSlots + " slots and synchronized its physical prefix" :
                "synchronized the polymorphic dispatch shape with its physical prefix",
            null);
    }

    private Structure createDispatchVtable(Map<String, String> row,
            Structure physical, int count) throws Exception {
        String path = row.get("proposed_vtable_type");
        String dispatchName = leaf(path);
        StructureDataType desired = new StructureDataType(
            VTABLES, dispatchName, 0, dataTypes);
        desired.setDescription(MARKER + " Generated polymorphic dispatch shape for " +
            leaf(row.get("structure_path")) + "; physical_prefix=" +
            physical.getPathName() + "; slots=" + count);
        int prefixSlots = physical.getLength() / pointerSize;
        for (int slot = 0; slot < count; slot++) {
            int offset = slot * pointerSize;
            DataTypeComponent prefix = slot < prefixSlots ?
                physical.getComponentAt(offset) : null;
            if (prefix != null && prefix.getOffset() == offset &&
                    prefix.getLength() == pointerSize)
                desired.add(prefix.getDataType(), pointerSize, name(prefix),
                    text(prefix.getComment()));
            else
                desired.add(new PointerDataType(VoidDataType.dataType, pointerSize, dataTypes),
                    pointerSize, String.format("vfunc_%02X", offset),
                    dispatchSlotComment(row.get("structure_path"), offset));
        }
        desired.setDescription(desired.getDescription() + HASH_MARKER +
            layoutHash(desired));
        DataType resolved = dataTypes.resolve(desired,
            DataTypeConflictHandler.KEEP_HANDLER);
        if (!(resolved instanceof Structure structure))
            throw new IllegalStateException("could not create dispatch structure " + path);
        return structure;
    }

    private String dispatchSlotComment(String ownerPath, int offset) {
        return MARKER + " polymorphic dispatch slot 0x" +
            Integer.toHexString(offset).toUpperCase(Locale.ROOT) +
            " for " + leaf(ownerPath);
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
        boolean dispatch = row.get("signature_mode").startsWith("synthetic_dispatch_");
        String name = dispatch ?
            "dispatch_" + sanitize(leaf(row.get("structure_path"))) + "_" +
                String.format("%02X", Integer.parseInt(row.get("component_offset"))) :
            "icall_" + row.get("signature_function_address").toUpperCase(Locale.ROOT) +
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
        boolean dispatch = row.get("signature_mode").startsWith("synthetic_dispatch_");
        String name = dispatch ?
            "dispatch_" + sanitize(leaf(row.get("structure_path"))) + "_" +
                String.format("%02X", Integer.parseInt(row.get("component_offset"))) :
            "icall_" + row.get("signature_function_address").toUpperCase(Locale.ROOT) +
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
    private String storedHash(String description) {
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
        return value.length() >= 64 && value.substring(0, 64).matches("[0-9a-fA-F]{64}") ?
            value.substring(0, 64).toLowerCase(Locale.ROOT) : null;
    }
    private String stripHash(String description) {
        int index = description.indexOf(HASH_MARKER);
        return index < 0 ? description : description.substring(0, index);
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
    private record DispatchResolution(Structure structure, boolean changed,
        String detail, String error) {
        private static DispatchResolution error(String detail) {
            return new DispatchResolution(null, false, "", detail);
        }
    }
}
