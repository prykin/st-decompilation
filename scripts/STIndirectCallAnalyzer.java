// Recover prototypes for vtable and callback calls that still decompile as code** expressions.
// Read-only: writes indirect_call_proposals.tsv and indirect_call_sites.tsv.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Indirect Calls

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.SourceType;

public class STIndirectCallAnalyzer extends GhidraScript {
    private static final String VTABLE_ROOT = "/SubmarineTitans/Recovered/VTables/";
    private static final String INDIRECT_FUNCTION_ROOT =
        "/SubmarineTitans/Recovered/IndirectCallFunctions";
    private static final String VTABLE_FUNCTION_ROOT =
        "/SubmarineTitans/Recovered/VTableFunctions";
    private static final String APPLIER_MARKER = "[STIndirectCallApplier]";
    private static final Pattern TARGET = Pattern.compile("(?i)->\\s*([0-9a-f]{8,16})\\b");
    private static final Pattern SLOT = Pattern.compile(
        "(?i)CALL\\s+(?:dword ptr )?\\[([A-Z]{2,3})(?:\\s*\\+\\s*(0x[0-9a-f]+|[0-9a-f]+h?))?\\]");
    private static final Pattern REGISTER_WRITE = Pattern.compile(
        "(?i)^MOV\\s+([A-Z]{2,3}),");
    private static final Pattern VTABLE_LOAD = Pattern.compile(
        "(?i)^MOV\\s+([A-Z]{2,3}),\\s*(?:DWORD PTR )?\\[([A-Z]{2,3})\\]$");
    private static final Pattern STACK_ARGUMENT = Pattern.compile(
        "^\\[EBP\\+(0X[0-9A-F]+|[0-9]+)\\]$");
    private static final int RETURN_DEFINITION_SCAN_LIMIT = 20;
    private final List<Site> sites = new ArrayList<>();
    private final Map<String, FunctionPointerFamily> targetFamilies =
        new TreeMap<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        List<Row> rows = new ArrayList<>();
        collectSites();
        collectTargetFamilies();
        addDispatchVtables(rows, directory);
        addExistingVtableSlots(rows);
        rows.sort(Comparator.comparingInt((Row row) ->
                "dispatch_interface_audit".equals(row.kind) ? 0 : 1)
            .thenComparing(row -> row.structurePath)
            .thenComparingInt(row -> row.offset));
        writeRows(directory.resolve("indirect_call_proposals.tsv"), rows);
        writeSites(directory.resolve("indirect_call_sites.tsv"));
        writeSummary(directory.resolve("indirect_call_summary.txt"), rows);
        println("Indirect-call analysis complete: " + directory.toAbsolutePath().normalize());
        println("Sites=" + sites.size() + ", proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count());
    }

    /**
     * Keep exact physical table layouts separate from the polymorphic dispatch interface.
     * A short base table can contain only the non-pure prefix while derived tables implement
     * more slots. Reusing that physical type makes Ghidra wrap high offsets through vtable[1]
     * and borrow the ABI of an unrelated low slot.
     */
    private void addDispatchVtables(List<Row> rows, Path directory) throws Exception {
        Path path = directory.resolve("vtable_proposals.tsv");
        if (!Files.isRegularFile(path)) return;
        List<Map<String, String>> proposals = readTsv(path);
        for (Map<String, String> baseRow : proposals) {
            if (!flagEnabled(baseRow.get("apply"))) continue;
            String ownerName = safeText(baseRow.get("owner")).trim();
            String physicalName = safeText(baseRow.get("proposed_name")).trim();
            if (ownerName.isBlank() || physicalName.isBlank() ||
                    !primaryOffset(baseRow.get("this_vptr_offsets"))) continue;
            DataType ownerValue = findOwnerType(ownerName);
            DataType physicalValue = currentProgram.getDataTypeManager().getDataType(
                VTABLE_ROOT + physicalName);
            if (!(ownerValue instanceof Structure owner) ||
                    !(physicalValue instanceof Structure physical)) continue;
            int baseSlots = integer(baseRow.get("slot_count"), -1);
            if (baseSlots < 1 || physical.getLength() != baseSlots *
                    currentProgram.getDefaultPointerSize()) continue;

            List<DispatchTable> related = new ArrayList<>();
            int maximumSlots = baseSlots;
            for (Map<String, String> row : proposals) {
                if (!flagEnabled(row.get("layout_apply")) ||
                        !ownerToken(row.get("slot_owners"), ownerName)) continue;
                int count = integer(row.get("slot_count"), -1);
                if (count <= baseSlots) continue;
                String selectedName = flagEnabled(row.get("apply")) ?
                    safeText(row.get("proposed_name")).trim() :
                    safeText(row.get("layout_name")).trim();
                if (selectedName.isBlank())
                    selectedName = safeText(row.get("proposed_name")).trim();
                DataType value = currentProgram.getDataTypeManager().getDataType(
                    VTABLE_ROOT + selectedName);
                if (!(value instanceof Structure table) ||
                        table.getLength() != count * currentProgram.getDefaultPointerSize())
                    continue;
                related.add(new DispatchTable(table, count,
                    safeText(row.get("table_address")).trim()));
                maximumSlots = Math.max(maximumSlots, count);
            }
            if (related.size() < 2 || maximumSlots <= baseSlots) continue;

            String dispatchPath = VTABLE_ROOT + sanitize(leaf(ownerName)) +
                "DispatchVTable";
            DataType dispatchValue =
                currentProgram.getDataTypeManager().getDataType(dispatchPath);
            Structure dispatch = dispatchValue instanceof Structure structure ?
                structure : null;
            DataTypeComponent ownerComponent = owner.getComponentAt(0);
            if (ownerComponent == null || ownerComponent.getOffset() != 0 ||
                    ownerComponent.getLength() != currentProgram.getDefaultPointerSize())
                continue;
            rows.add(new Row(false, "dispatch_interface_audit", owner.getPathName(), 0,
                name(ownerComponent), typeSpec(ownerComponent.getDataType()),
                safeText(ownerComponent.getComment()), dispatchPath, name(ownerComponent),
                hex(baseRow.get("table_address")), maximumSlots, "", "",
                "dispatch_shape", "pointer:" + physical.getPathName(), -1, "", "",
                "audit", "audit-only polymorphic interface; physical prefix has " +
                    baseSlots + " slot(s); " +
                    related.size() + " independently recovered derived tables extend the " +
                    ownerName + " dispatch interface to " + maximumSlots + " slot(s); " +
                    "the class vptr must remain pointer:" + physical.getPathName()));

            for (int slot = baseSlots; slot < maximumSlots; slot++)
                addDispatchSlot(rows, ownerName, physical, dispatch, dispatchPath,
                    related, slot);
        }
    }

    private void addDispatchSlot(List<Row> rows, String ownerName, Structure physical,
            Structure dispatch, String dispatchPath, List<DispatchTable> related, int slot) {
        int offset = slot * currentProgram.getDefaultPointerSize();
        Synthetic agreed = null;
        Function representative = null;
        int candidates = 0;
        int implementations = 0;
        boolean conflict = false;
        Map<String, Integer> returnTypes = new TreeMap<>();
        Set<String> tables = new TreeSet<>();
        for (DispatchTable candidate : related) {
            if (candidate.slots <= slot) continue;
            candidates++;
            DataTypeComponent component = candidate.structure.getComponentAt(offset);
            Matcher matcher = component == null ? null :
                TARGET.matcher(safeText(component.getComment()));
            if (component == null || component.getOffset() != offset ||
                    matcher == null || !matcher.find()) {
                continue;
            }
            Address raw = currentProgram.getAddressFactory().getAddress(matcher.group(1));
            Function entry = raw == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(raw);
            Function target = resolveThunk(entry);
            Synthetic synthetic = dispatchSignature(target, physical);
            if (synthetic == null) continue;
            if (agreed != null && (!agreed.mode.equals(synthetic.mode) ||
                    agreed.stackParameters != synthetic.stackParameters ||
                    !agreed.parameterTypes.equals(synthetic.parameterTypes))) {
                conflict = true;
                break;
            }
            if (agreed == null) {
                agreed = synthetic;
                representative = target;
            }
            returnTypes.merge(synthetic.returnType, 1, Integer::sum);
            implementations++;
            tables.add(candidate.address);
        }
        String returned = dispatchReturnConsensus(returnTypes, implementations);
        if (returned == null) conflict = true;

        DataTypeComponent current = dispatch == null ? null :
            dispatch.getComponentAt(offset);
        boolean exactCurrent = current != null && current.getOffset() == offset &&
            current.getLength() == currentProgram.getDefaultPointerSize();
        String expectedName = exactCurrent ? name(current) :
            String.format("vfunc_%02X", offset);
        String expectedType = exactCurrent ? typeSpec(current.getDataType()) :
            "pointer:/void";
        String expectedComment = exactCurrent ? safeText(current.getComment()) :
            dispatchSlotComment(ownerName, offset);

        if (conflict || agreed == null || implementations < 2 ||
                implementations * 2 < candidates) {
            if (exactCurrent && current.getDataType() instanceof Pointer pointer &&
                    generatedIndirectPointer(current, pointer))
                rows.add(new Row(false, "dispatch_slot_audit", dispatchPath, offset,
                    expectedName, expectedType, expectedComment, dispatchPath, expectedName,
                    0, 0, "", "", "", "", -1, "", "", "cleanup",
                    "audit-only dispatch metadata: derived-table ABI consensus for this " +
                        "slot no longer holds"));
            return;
        }
        if (exactCurrent && !(current.getDataType() instanceof Pointer pointer &&
                (pointer.getDataType() instanceof VoidDataType ||
                    generatedIndirectPointer(current, pointer)))) return;

        String mode = agreed.mode.replace("synthetic_", "synthetic_dispatch_");
        rows.add(new Row(false, "dispatch_slot_audit", dispatchPath, offset,
            expectedName, expectedType, expectedComment, dispatchPath,
            String.format("vfunc_%02X", offset), 0, 0,
            addr(representative.getEntryPoint()), representative.getName(true), mode,
            agreed.receiverType, agreed.stackParameters, agreed.parameterTypes, returned, "audit",
            "audit-only dispatch metadata; " + implementations + "/" + candidates +
                " physical implementations across tables " +
                String.join("|", tables) + " agree on " + mode +
                ", stack cleanup words=" + agreed.stackParameters +
                ", stack parameter types=" + agreed.parameterTypes +
                "; return consensus=" + returnTypes + " => " + returned));
    }

    /**
     * A polymorphic interface is stronger evidence than an individual empty override.
     * MSVC commonly shares a bare RET implementation for a void virtual slot; that target
     * neither consumes ECX nor writes EAX.  A non-empty override may leave an incidental
     * call result in EAX even though the interface remains void.  Accept only an exact
     * return agreement, or a strong void supermajority whose dissent is the neutral
     * dword result.  Never majority-vote a narrow scalar ABI.
     */
    private String dispatchReturnConsensus(Map<String, Integer> returns, int implementations) {
        if (implementations < 1 || returns.isEmpty()) return null;
        if (returns.size() == 1) return returns.keySet().iterator().next();
        if (!returns.keySet().stream().allMatch(
                type -> "/void".equals(type) || "/undefined4".equals(type)))
            return null;
        int voids = returns.getOrDefault("/void", 0);
        return voids >= 2 && voids * 4 >= implementations * 3 ? "/void" : null;
    }

    private Synthetic dispatchSignature(Function target, Structure physical) {
        Synthetic direct = syntheticSignature(target, physical);
        if (direct != null || target == null) return direct;
        Set<Long> pops = returnPops(target);
        if (!pops.equals(Set.of(0L))) return null;
        String returned = machineReturnType(target);
        return new Synthetic("synthetic_thiscall", receiverType(physical), 0, "", returned,
            "polymorphic slot consensus supplies an otherwise-unused ECX receiver; every RET " +
                "agrees on zero stack cleanup; return=" + returned);
    }

    private void addExistingVtableSlots(List<Row> rows) throws Exception {
        Iterator<Structure> structures = currentProgram.getDataTypeManager().getAllStructures();
        while (structures.hasNext()) {
            monitor.checkCancelled(); Structure structure = structures.next();
            if (!structure.getPathName().startsWith(VTABLE_ROOT) ||
                    structure.getName().endsWith("DispatchVTable")) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                if (!(component.getDataType() instanceof Pointer pointer)) continue;
                boolean generic = pointer.getDataType() instanceof VoidDataType;
                boolean generated = generatedIndirectPointer(component, pointer);
                if (!generic && !generated) continue;
                Matcher matcher = TARGET.matcher(safeText(component.getComment()));
                if (!matcher.find()) continue;
                Address raw = currentProgram.getAddressFactory().getAddress(matcher.group(1));
                Function entry = raw == null ? null : currentProgram.getFunctionManager().getFunctionAt(raw);
                Function target = resolveThunk(entry);
                boolean trusted = trusted(target);
                // A leaf virtual implementation is allowed to ignore ECX.  The exact
                // physical-table slot still proves the receiver ABI; requiring a semantic
                // ECX read here leaves common constant getters (for example a type-id slot)
                // as void * even though every machine call is receiver-dispatched.
                Synthetic refinement = trusted ?
                    refinedGeneratedTargetSignature(pointer, target) : null;
                Synthetic synthetic = trusted ? null : dispatchSignature(target, structure);
                FunctionPointerFamily family = raw == null ? null :
                    targetFamilies.get(addr(raw));
                if (family == null && target != null)
                    family = targetFamilies.get(addr(target.getEntryPoint()));
                Pointer recovered = trusted && refinement == null ? strongerGeneratedPointer(
                    structure, component, pointer, target) : null;
                boolean familyRepair = family != null &&
                    !pointer.isEquivalent(family.pointer);
                if (generated && !trusted && synthetic == null &&
                        family == null) {
                    rows.add(new Row(true, "revert_generated_slot", structure.getPathName(),
                        component.getOffset(), name(component),
                        typeSpec(component.getDataType()), safeText(component.getComment()),
                        structure.getPathName(), name(component), 0, 0,
                        target == null ? "" : addr(target.getEntryPoint()),
                        target == null ? "" : target.getName(true), "", "", -1, "", "",
                        "cleanup",
                        "generated indirect ABI no longer has sufficient machine evidence"));
                    continue;
                }
                // A generated physical-slot definition is independent ABI evidence.  A later
                // semantic retype of the Listing target (pointer-shape, message envelope, void
                // source intent, and so on) must not make the analyzer copy that target back
                // over every table which shares the generated FunctionDefinition.  Only an
                // explicit field-local refinement or an independently unanimous slot family may
                // change an already generated slot.  Trusted target copying remains valid for a
                // still-generic void* component.
                boolean targetCopy = trusted && !generated;
                boolean apply = refinement != null || recovered != null || familyRepair ||
                    targetCopy || synthetic != null || family != null;
                rows.add(new Row(apply, "vtable_slot", structure.getPathName(),
                    component.getOffset(), name(component), typeSpec(component.getDataType()),
                    safeText(component.getComment()), structure.getPathName(), name(component), 0, 0,
                    target == null ? "" : addr(target.getEntryPoint()),
                    target == null ? "" : target.getName(true),
                    refinement != null ? refinement.mode :
                        recovered != null ? "generated_family" :
                        familyRepair ? "family_target" :
                        targetCopy ? "target" : synthetic != null ? synthetic.mode :
                        family != null ? "family_target" : "",
                    refinement != null ? refinement.receiverType :
                        recovered != null ? typeSpec(recovered) :
                        familyRepair ? family.pointerType :
                        synthetic == null ? family == null ? "" : family.pointerType :
                            synthetic.receiverType,
                    refinement != null ? refinement.stackParameters :
                        synthetic == null ? -1 : synthetic.stackParameters,
                    refinement != null ? refinement.parameterTypes :
                        synthetic == null ? "" : synthetic.parameterTypes,
                    refinement != null ? refinement.returnType :
                        synthetic == null ? "" : synthetic.returnType,
                    refinement != null || recovered != null || familyRepair ? "high" : targetCopy ? "high" :
                        synthetic != null ? "layout" :
                        family != null ? "family" : "review",
                    refinement != null ? refinement.evidence :
                        recovered != null ?
                        "an automation-owned receiver-aware function-pointer ABI is " +
                            "strictly stronger than the reviewed target signature; " +
                            "preserving generated family " + typeSpec(recovered) :
                        familyRepair ?
                            family.occurrences + " independently recovered slot(s) for " +
                            "resolved target " + addr(target.getEntryPoint()) +
                            " unanimously carry stronger family " + family.pointerType +
                            "; replace the weaker physical-table typedef" :
                        targetCopy ? "generic slot target has a reviewed function signature" :
                        synthetic != null ? synthetic.evidence :
                        family != null ?
                            family.occurrences + " independently typed vtable " +
                            "component(s) for resolved target " +
                            addr(target.getEntryPoint()) +
                            " agree on " + family.pointerType :
                            "slot target lacks consistent indirect ABI evidence"));
            }
        }
    }

    /**
     * Keep the physical table's independently recovered receiver and return
     * transport, but refine generic stack words from a trusted target's exact
     * formal parameters.  The two views must agree on thiscall and arity; an
     * already semantic generated argument is never replaced by a competing
     * target type.  This is intentionally a field-local ABI merge, not a copy
     * of an ownerless target signature over the physical receiver.
     */
    private Synthetic refinedGeneratedTargetSignature(Pointer pointer,
            Function target) {
        if (!(pointer.getDataType() instanceof FunctionDefinition definition) ||
                !generatedFunctionDefinition(definition) || target == null ||
                !"__thiscall".equals(definition.getCallingConventionName()) ||
                !"__thiscall".equals(target.getCallingConventionName()) ||
                definition.getArguments().length < 1 ||
                !(definition.getArguments()[0].getDataType() instanceof Pointer))
            return null;
        List<Parameter> explicit = new ArrayList<>();
        for (Parameter parameter : target.getParameters())
            if (!parameter.isAutoParameter()) explicit.add(parameter);
        int existingExplicit = definition.getArguments().length - 1;
        boolean exactTargetCleanup = returnPops(target).equals(Set.of(
            explicit.size() * (long)currentProgram.getDefaultPointerSize()));
        if (existingExplicit != explicit.size()) {
            // A previously generated slot may retain speculative neutral stack
            // words after the named target's own callee-cleanup and Listing ABI
            // have converged.  Those words are not stronger evidence.  Remove
            // them only from the tail, only when every removed type is generic,
            // and only when RET n exactly agrees with the target's explicit
            // parameter count.
            if (existingExplicit < explicit.size() || !exactTargetCleanup)
                return null;
            for (int index = explicit.size() + 1;
                    index < definition.getArguments().length; index++)
                if (!genericAbiParameter(
                        definition.getArguments()[index].getDataType()))
                    return null;
        }

        List<String> selected = new ArrayList<>();
        boolean improved = false;
        for (int index = 0; index < explicit.size(); index++) {
            DataType existing = definition.getArguments()[index + 1].getDataType();
            DataType candidate = explicit.get(index).getFormalDataType();
            if (genericAbiType(existing) && semanticAbiType(candidate)) {
                selected.add(typeSpec(candidate));
                improved = true;
            }
            else if (semanticAbiType(existing) && semanticAbiType(candidate) &&
                    !existing.isEquivalent(candidate)) {
                return null;
            }
            else selected.add(typeSpec(existing));
        }
        boolean arityImproved = existingExplicit != explicit.size();
        if (!improved && !arityImproved) return null;
        // The existing generated definition is an accepted machine-return
        // boundary.  A semantically named Listing target may expose bool,
        // pointer, or void source intent, but that is not evidence that every
        // physical slot consumer observes the same EAX width.  This refinement
        // is deliberately stack-parameter-only.
        DataType returned = definition.getReturnType();
        return new Synthetic("refined_generated_target",
            typeSpec(definition.getArguments()[0].getDataType()), explicit.size(),
            String.join(";", selected), typeSpec(returned),
            "physical generated receiver/return retained while trusted target " +
                addr(target.getEntryPoint()) +
                (arityImproved ? " removes " +
                    (existingExplicit - explicit.size()) +
                    " stale generic stack word(s); RET cleanup exactly agrees;" :
                    " refines generic stack words;") +
                " exact thiscall arity=" + explicit.size());
    }

    private boolean genericAbiParameter(DataType type) {
        if (genericAbiType(type)) return true;
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = pointer.getDataType();
        return pointed == null || pointed instanceof VoidDataType ||
            genericAbiType(pointed);
    }

    private boolean generatedFunctionDefinition(FunctionDefinition definition) {
        return definition != null &&
            (definition.getCategoryPath().getPath().startsWith(
                INDIRECT_FUNCTION_ROOT) ||
             definition.getCategoryPath().getPath().startsWith(
                VTABLE_FUNCTION_ROOT) ||
             safeText(definition.getComment()).contains(APPLIER_MARKER));
    }

    private boolean genericAbiType(DataType type) {
        if (type == null) return true;
        String name = type.getName().toLowerCase(Locale.ROOT);
        return name.equals("undefined") || name.matches("undefined[1248]");
    }

    private boolean semanticAbiType(DataType type) {
        return type != null && !genericAbiType(type) &&
            !(type instanceof VoidDataType);
    }

    /**
     * A recovered target function can temporarily lose its receiver or return ABI while
     * prototype propagation is converging.  Never let that weaker Listing signature erase
     * a receiver-aware indirect-call family.  Prefer the component already installed; if a
     * previous pass has downgraded it, recover the deterministic owner-specific generated
     * definition still present in the data-type manager.
     */
    private Pointer strongerGeneratedPointer(Structure table,
            DataTypeComponent component, Pointer current, Function target) {
        if (target == null) return null;
        if (generatedIndirectPointer(component, current) &&
                strongerThanTarget(current, target)) return current;
        String address = addr(target.getEntryPoint()).toUpperCase(Locale.ROOT);
        String owner = table.getName().replaceFirst(
            "(?i)VTable(?:_at_[0-9A-F]+)?$", "");
        String prefix = "icall_" + address + "_";
        String suffix = "_for_" + sanitize(owner);
        Iterator<DataType> iterator =
            currentProgram.getDataTypeManager().getAllDataTypes();
        Pointer agreed = null;
        while (iterator.hasNext()) {
            DataType value = iterator.next();
            if (!(value instanceof FunctionDefinition definition) ||
                    !definition.getName().startsWith(prefix) ||
                    !definition.getName().endsWith(suffix) ||
                    !safeText(definition.getComment()).contains(APPLIER_MARKER)) continue;
            Pointer candidate = currentProgram.getDataTypeManager().getPointer(definition);
            if (!strongerThanTarget(candidate, target)) continue;
            if (agreed != null && !agreed.isEquivalent(candidate)) return null;
            agreed = candidate;
        }
        return agreed;
    }

    private boolean strongerThanTarget(Pointer pointer, Function target) {
        if (!(pointer.getDataType() instanceof FunctionDefinition definition) ||
                target == null) return false;
        String existingConvention = safeText(definition.getCallingConventionName());
        String targetConvention = safeText(target.getCallingConventionName());
        boolean existingReceiver = "__thiscall".equals(existingConvention) &&
            definition.getArguments().length > 0 &&
            definition.getArguments()[0].getDataType() instanceof Pointer;
        boolean targetReceiver = "__thiscall".equals(targetConvention) &&
            target.getParameterCount() > 0 &&
            target.getParameter(0).getDataType() instanceof Pointer;
        boolean strongerConvention = concreteConvention(existingConvention) &&
            !concreteConvention(targetConvention);
        boolean strongerParameters = definition.getArguments().length >
            target.getParameterCount();
        boolean strongerReturn = concreteWidth(definition.getReturnType()) >
            concreteWidth(target.getReturnType());
        return (existingReceiver && !targetReceiver) || strongerConvention ||
            strongerParameters || strongerReturn;
    }

    private boolean concreteConvention(String convention) {
        return convention != null && !convention.isBlank() &&
            !"unknown".equalsIgnoreCase(convention) &&
            !"default".equalsIgnoreCase(convention);
    }

    private int concreteWidth(DataType type) {
        if (type == null || type instanceof VoidDataType) return 0;
        String name = type.getName().toLowerCase(Locale.ROOT);
        return name.startsWith("undefined") ? 0 : Math.max(0, type.getLength());
    }

    /**
     * The same implementation address is frequently reused in several physical
     * vtables (base implementations, shared empty overrides, thunk aliases).
     * Independently recovered indirect-call components are the authoritative family anchors.
     * VTableApplier-owned target typedefs are deliberately excluded: a stale weak typedef in a
     * newly named physical table must not veto the already recovered ABI for the same machine
     * implementation. Conflicting independent pointers invalidate the family instead of being
     * majority-voted.
     */
    private void collectTargetFamilies() {
        Map<String, List<TypedTargetComponent>> grouped = new TreeMap<>();
        Iterator<Structure> structures =
            currentProgram.getDataTypeManager().getAllStructures();
        while (structures.hasNext()) {
            Structure structure = structures.next();
            if (!structure.getPathName().startsWith(VTABLE_ROOT)) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                if (!(component.getDataType() instanceof Pointer pointer) ||
                        !(pointer.getDataType() instanceof FunctionDefinition) ||
                        !generatedIndirectPointer(component, pointer))
                    continue;
                Matcher matcher = TARGET.matcher(safeText(component.getComment()));
                if (!matcher.find()) continue;
                Address raw =
                    currentProgram.getAddressFactory().getAddress(matcher.group(1));
                Function entry = raw == null ? null :
                    currentProgram.getFunctionManager().getFunctionAt(raw);
                Function resolved = resolveThunk(entry);
                if (resolved == null) continue;
                TypedTargetComponent typed = new TypedTargetComponent(pointer,
                    structure.getPathName(), component.getOffset());
                String rawKey = addr(raw);
                grouped.computeIfAbsent(rawKey, ignored -> new ArrayList<>()).add(typed);
                String resolvedKey = addr(resolved.getEntryPoint());
                if (!resolvedKey.equals(rawKey))
                    grouped.computeIfAbsent(resolvedKey, ignored -> new ArrayList<>()).add(typed);
            }
        }
        for (Map.Entry<String, List<TypedTargetComponent>> entry :
                grouped.entrySet()) {
            List<TypedTargetComponent> candidates = entry.getValue();
            Pointer agreed = null;
            boolean conflict = false;
            for (TypedTargetComponent candidate : candidates) {
                if (agreed != null && !agreed.isEquivalent(candidate.pointer)) {
                    conflict = true;
                    break;
                }
                if (agreed == null) agreed = candidate.pointer;
            }
            if (!conflict && agreed != null)
                targetFamilies.put(entry.getKey(),
                    new FunctionPointerFamily(agreed, typeSpec(agreed),
                        candidates.size()));
        }
    }

    private Synthetic syntheticSignature(Function target, Structure vtable) {
        if (target == null) return null;
        Set<Long> pops = returnPops(target);
        if (pops.size() != 1) return null;
        long bytes = pops.iterator().next();
        if (bytes < 0 || bytes > 0x100 || bytes % currentProgram.getDefaultPointerSize() != 0)
            return null;
        int parameters = (int)(bytes / currentProgram.getDefaultPointerSize());
        String parameterTypes = stackParameterTypes(target, parameters);
        String returned = machineReturnType(target);
        if (usesIncomingEcx(target))
            return new Synthetic("synthetic_thiscall", receiverType(vtable), parameters,
                parameterTypes, returned,
                "vtable membership, semantic incoming ECX use, and every RET agrees on " +
                "callee cleanup " + bytes + " byte(s); stack parameter types=" +
                parameterTypes + "; return=" + returned);
        if (bytes == 0) return null;
        return new Synthetic("synthetic_stdcall", "", parameters, parameterTypes, returned,
            "vtable membership, no semantic incoming ECX use, and every RET agrees on " +
                "callee cleanup " + bytes + " byte(s); stack parameter types=" +
                parameterTypes + "; return=" + returned);
    }

    private String stackParameterTypes(Function function, int count) {
        String[] types = new String[count];
        for (int index = 0; index < count; index++) types[index] = "";
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if ("LEA".equals(mnemonic)) continue;
            for (int operandIndex = 0; operandIndex < instruction.getNumOperands();
                    operandIndex++) {
                if (operandIndex == 0 && !firstOperandIsRead(mnemonic))
                    continue;
                String operand = instruction.getDefaultOperandRepresentation(operandIndex);
                Long offset = stackArgumentOffset(operand);
                if (offset == null || offset < 8 || (offset - 8) % 4 != 0) continue;
                int slot = (int)((offset - 8) / 4);
                if (slot < 0 || slot >= count) continue;
                String candidate = stackAccessType(mnemonic, operand);
                if (!candidate.isBlank())
                    types[slot] = mergeStackType(types[slot], candidate);
            }
        }
        for (int index = 0; index < count; index++)
            if (types[index].isBlank()) types[index] = "/undefined4";
        return String.join(";", types);
    }

    private boolean firstOperandIsRead(String mnemonic) {
        return Set.of("CMP", "TEST", "PUSH", "ADD", "ADC", "SUB", "SBB", "AND",
            "OR", "XOR", "INC", "DEC", "NEG", "NOT", "SHL", "SAL", "SHR",
            "SAR", "ROL", "ROR", "RCL", "RCR", "IMUL", "MUL", "DIV", "IDIV",
            "BT", "BTC", "BTR", "BTS").contains(mnemonic);
    }

    private Long stackArgumentOffset(String operand) {
        String value = operand.toUpperCase(Locale.ROOT)
            .replace("QWORD PTR", "").replace("DWORD PTR", "")
            .replace("WORD PTR", "").replace("BYTE PTR", "")
            .replace(" ", "");
        Matcher matcher = STACK_ARGUMENT.matcher(value);
        if (!matcher.matches()) return null;
        try {
            String number = matcher.group(1);
            return number.startsWith("0X") ?
                Long.parseUnsignedLong(number.substring(2), 16) :
                Long.parseLong(number);
        }
        catch (NumberFormatException ignored) { return null; }
    }

    private String stackAccessType(String mnemonic, String operand) {
        String upper = operand.toUpperCase(Locale.ROOT);
        if (upper.contains("BYTE PTR")) {
            if ("MOVSX".equals(mnemonic)) return "/char";
            if ("MOVZX".equals(mnemonic)) return "/byte";
            return "/undefined1";
        }
        if (upper.contains("WORD PTR")) {
            if ("MOVSX".equals(mnemonic)) return "/short";
            if ("MOVZX".equals(mnemonic)) return "/ushort";
            return "/undefined2";
        }
        if (upper.contains("DWORD PTR")) return "/undefined4";
        return "";
    }

    private String mergeStackType(String existing, String candidate) {
        if (existing.isBlank()) return candidate;
        if (existing.equals(candidate)) return existing;
        if (existing.equals("/undefined4") || candidate.equals("/undefined4"))
            return "/undefined4";
        int existingWidth = scalarWidth(existing);
        int candidateWidth = scalarWidth(candidate);
        if (existingWidth != candidateWidth) return "/undefined4";
        if (existing.equals("/undefined" + existingWidth)) return candidate;
        if (candidate.equals("/undefined" + candidateWidth)) return existing;
        return "/undefined" + existingWidth;
    }

    private int scalarWidth(String type) {
        return switch (type) {
            case "/char", "/byte", "/undefined1" -> 1;
            case "/short", "/ushort", "/undefined2" -> 2;
            default -> 4;
        };
    }

    private String machineReturnType(Function function) {
        if (definitelyVoid(function)) return "/void";
        Set<Integer> widths = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.equals("RET") && !mnemonic.equals("RETF")) continue;
            Instruction prior = currentProgram.getListing()
                .getInstructionBefore(instruction.getAddress());
            int width = 0;
            for (int scanned = 0; scanned < RETURN_DEFINITION_SCAN_LIMIT &&
                    prior != null && function.getBody().contains(prior.getAddress()); scanned++) {
                width = accumulatorWriteWidth(prior);
                if (width > 0) break;
                String priorMnemonic = prior.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("CALL".equals(priorMnemonic) || priorMnemonic.startsWith("J")) break;
                prior = currentProgram.getListing().getInstructionBefore(prior.getAddress());
            }
            if (width == 0) return "/undefined4";
            widths.add(width);
        }
        // A late AX/AL write alone does not prove that the untouched high EAX bits
        // are semantically irrelevant.  Narrow only when Ghidra's independent
        // function-return analysis already agrees with the unanimous machine width.
        int analyzedWidth = function.getReturnType() == null ? -1 :
            function.getReturnType().getLength();
        if (widths.equals(Set.of(1)) && analyzedWidth == 1) return "/undefined1";
        if (widths.equals(Set.of(2)) && analyzedWidth == 2) return "/undefined2";
        return "/undefined4";
    }

    private int accumulatorWriteWidth(Instruction instruction) {
        int result = 0;
        for (Object output : instruction.getResultObjects()) {
            if (!(output instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (name.equals("EAX") || name.equals("RAX")) result = Math.max(result, 4);
            else if (name.equals("AX")) result = Math.max(result, 2);
            else if (name.equals("AL") || name.equals("AH")) result = Math.max(result, 1);
        }
        return result;
    }

    private boolean generatedIndirectPointer(DataTypeComponent component, Pointer pointer) {
        if (!(pointer.getDataType() instanceof FunctionDefinition definition)) return false;
        String category = definition.getCategoryPath().getPath();
        boolean indirectOwned = safeText(component.getComment()).contains(APPLIER_MARKER) &&
            (safeText(definition.getComment()).contains(APPLIER_MARKER) ||
                category.startsWith(INDIRECT_FUNCTION_ROOT));
        // STVTableApplier predates the indirect-call pass and records ownership through
        // the deterministic VTableFunctions category plus the exact slot->target comment.
        // Treat those definitions as equally script-owned so stale generic tail arguments
        // can converge from the target's RET cleanup and Listing ABI.
        boolean vtableOwned = category.startsWith(VTABLE_FUNCTION_ROOT) &&
            TARGET.matcher(safeText(component.getComment())).find();
        return indirectOwned || vtableOwned;
    }

    private Set<Long> returnPops(Function function) {
        Set<Long> result = new TreeSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.equals("RET") && !mnemonic.equals("RETF")) continue;
            Scalar scalar = instruction.getScalar(0);
            result.add(scalar == null ? 0L : scalar.getUnsignedValue());
        }
        return result;
    }

    private boolean usesIncomingEcx(Function function) {
        boolean live = true;
        int count = 0;
        String previous = "";
        String beforePrevious = "";
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext() && count++ < 256 && live) {
            Instruction instruction = instructions.next();
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            boolean scratchAllocation = "PUSH ECX".equals(text) &&
                "MOV EBP,ESP".equals(previous) && "PUSH EBP".equals(beforePrevious);
            for (Object input : instruction.getInputObjects())
                if (input instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT)) &&
                        !scratchAllocation) return true;
            for (Object output : instruction.getResultObjects())
                if (output instanceof Register register &&
                        "ECX".equals(register.getName().toUpperCase(Locale.ROOT))) live = false;
            beforePrevious = previous;
            previous = text;
        }
        return false;
    }

    private boolean definitelyVoid(Function function) {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isCall()) return false;
            for (Object output : instruction.getResultObjects()) {
                if (!(output instanceof Register register)) continue;
                String name = register.getName().toUpperCase(Locale.ROOT);
                if (Set.of("EAX", "AX", "AL", "AH").contains(name)) return false;
            }
        }
        return true;
    }

    private String receiverType(Structure vtable) {
        String owner = vtable.getName().replaceFirst("(?i)VTable(?:_at_[0-9A-F]+)?$", "");
        DataType direct = currentProgram.getDataTypeManager().getDataType("/" + owner);
        if (direct instanceof Structure) return "pointer:" + direct.getPathName();
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(owner, matches);
        Structure found = null;
        for (DataType match : matches) {
            if (!(match instanceof Structure structure) ||
                    structure.getPathName().contains("/VTables/")) continue;
            if (found != null && !found.getPathName().equals(structure.getPathName()))
                return "pointer:/void";
            found = structure;
        }
        return found == null ? "pointer:/void" : "pointer:" + found.getPathName();
    }

    private DataType findOwnerType(String owner) {
        String name = leaf(owner);
        DataType direct = currentProgram.getDataTypeManager().getDataType("/" + name);
        if (direct instanceof Structure) return direct;
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure &&
                    !match.getPathName().startsWith(VTABLE_ROOT)) return match;
        return null;
    }

    private List<Map<String, String>> readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) return List.of();
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> result = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) continue;
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            result.add(row);
        }
        return result;
    }

    private boolean ownerToken(String value, String owner) {
        for (String token : safeText(value).split("\\s*\\|\\s*"))
            if (token.trim().equals(owner)) return true;
        return false;
    }

    private boolean primaryOffset(String value) {
        String normalized = safeText(value).trim();
        return normalized.equals("0") || normalized.equalsIgnoreCase("0x0");
    }

    private static boolean flagEnabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }

    private int integer(String value, int fallback) {
        try { return Integer.parseInt(safeText(value).trim()); }
        catch (NumberFormatException ignored) { return fallback; }
    }

    private long hex(String value) {
        try {
            String normalized = safeText(value).trim();
            if (normalized.startsWith("0x") || normalized.startsWith("0X"))
                normalized = normalized.substring(2);
            return Long.parseUnsignedLong(normalized, 16);
        }
        catch (NumberFormatException ignored) { return 0; }
    }

    private String dispatchSlotComment(String owner, int offset) {
        return APPLIER_MARKER + " polymorphic dispatch slot 0x" +
            Integer.toHexString(offset).toUpperCase(Locale.ROOT) + " for " + owner;
    }

    private String leaf(String value) {
        int namespace = value.lastIndexOf("::");
        if (namespace >= 0) value = value.substring(namespace + 2);
        int path = value.lastIndexOf('/');
        return path < 0 ? value : value.substring(path + 1);
    }

    private String sanitize(String value) {
        return value.replaceAll("[^A-Za-z0-9_]", "_");
    }

    private void collectSites() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled(); Function function = functions.next();
            if (function.isExternal()) continue;
            int pushes = 0; String ecx = "";
            Map<String, String> vtableBases = new TreeMap<>();
            InstructionIterator iterator = currentProgram.getListing().getInstructions(function.getBody(), true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                String text = instruction.toString().toUpperCase(Locale.ROOT);
                String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("PUSH".equals(mnemonic)) pushes++;
                Matcher written = REGISTER_WRITE.matcher(text);
                if (written.find()) {
                    String destination = written.group(1);
                    vtableBases.remove(destination);
                    // A table value loaded from [receiverReg] is usable only while that
                    // exact receiver register remains live.  Invalidate dependent table
                    // roots before recording a new load; otherwise MOV ECX,... after
                    // MOV EAX,[ECX] could falsely bind the call to the new ECX value.
                    vtableBases.entrySet().removeIf(entry ->
                        entry.getValue().equals(destination));
                    if ("ECX".equals(destination)) ecx = "";
                    Matcher load = VTABLE_LOAD.matcher(text);
                    if (load.matches())
                        vtableBases.put(destination, load.group(2));
                    if ("ECX".equals(destination)) ecx = text.substring(8).trim();
                }
                if ("CALL".equals(mnemonic)) {
                    Matcher matcher = SLOT.matcher(text);
                    if (matcher.find()) {
                        String table = matcher.group(1).toUpperCase(Locale.ROOT);
                        String receiver = safeText(vtableBases.get(table));
                        // `MOV tableReg,[ECX] ... CALL [tableReg+slot]` needs no
                        // separate MOV ECX,receiver: ECX already is the receiver.
                        // Dependency invalidation above proves it was not redefined.
                        String liveEcx = ecx.isBlank() && "ECX".equals(receiver) ?
                            "ECX" : ecx;
                        sites.add(new Site(addr(function.getEntryPoint()),
                            function.getName(true), addr(instruction.getAddress()), table,
                            slotValue(matcher.group(2)), pushes, liveEcx,
                            receiver, instruction.toString()));
                    }
                    pushes = 0; ecx = "";
                    vtableBases.remove("EAX");
                    vtableBases.remove("ECX");
                    vtableBases.remove("EDX");
                }
                if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                    pushes = 0; ecx = ""; vtableBases.clear();
                }
            }
        }
    }

    private int slotValue(String value) {
        if (value == null || value.isBlank()) return 0;
        value = value.toLowerCase(Locale.ROOT).replace("h", "");
        try { return value.startsWith("0x") ? Integer.parseInt(value.substring(2), 16) :
            Integer.parseInt(value, 16); }
        catch (Exception ignored) { return -1; }
    }
    private boolean trusted(Function function) {
        if (function == null) return false;
        if (function.getSignatureSource() == SourceType.IMPORTED) return true;
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if (name.equals("RECOVERED_VIRTUAL_METHOD") ||
                    name.equals("RECOVERED_DEBUG_NAME") ||
                    name.equals("RECOVERED_ABI_CONSISTENCY") ||
                    name.equals("RECOVERED_CALLSITE_CONVENTION") ||
                    name.equals("RECOVERED_MESSAGE_HANDLER") ||
                    name.equals("RECOVERED_HEURISTIC_SIGNATURE") ||
                    name.equals("RECOVERED_CONSTRUCTOR") ||
                    name.equals("RECOVERED_DESTRUCTOR")) return true;
        }
        // USER_DEFINED is not evidence by itself: older bootstrap scripts used that source
        // for speculative signatures.  It becomes trusted only with independent provenance.
        return false;
    }
    private Function resolveThunk(Function function) {
        Function current = function;
        for (int depth = 0; depth < 32 && current != null && current.isThunk(); depth++) {
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) break;
            current = next;
        }
        return current;
    }
    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\ttarget_kind\tstructure_path\tcomponent_offset\texpected_field_name\t" +
                "expected_component_type\texpected_comment\tproposed_vtable_type\tproposed_field_name\t" +
                "table_address\tslot_count\tsignature_function_address\tsignature_function\t" +
                "signature_mode\treceiver_type\tstack_parameter_count\tproposed_parameter_types\t" +
                "proposed_return_type\tconfidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.kind +
                "\t" + row.structurePath + "\t" + row.offset + "\t" + clean(row.expectedName) +
                "\t" + row.expectedType + "\t" + clean(row.expectedComment) + "\t" +
                row.proposedVtable + "\t" + clean(row.proposedName) + "\t" +
                (row.tableAddress == 0 ? "" : String.format("%08X", row.tableAddress)) + "\t" +
                row.slotCount + "\t" + row.functionAddress + "\t" + clean(row.function) +
                "\t" + row.signatureMode + "\t" + row.receiverType + "\t" +
                (row.stackParameters < 0 ? "" : row.stackParameters) + "\t" +
                row.parameterTypes + "\t" + row.returnType +
                "\t" + row.confidence + "\t" + clean(row.evidence) + "\n");
        }
    }
    private void writeSites(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\tcall_address\ttable_register\tslot_offset\t" +
                "observed_pushes\tlast_ecx_assignment\tvtable_receiver_register\tinstruction\n");
            for (Site row : sites) out.write(row.functionAddress + "\t" + clean(row.function) +
                "\t" + row.callAddress + "\t" + row.register + "\t" + row.slot + "\t" +
                row.pushes + "\t" + clean(row.ecx) + "\t" + clean(row.receiverRegister) +
                "\t" + clean(row.instruction) + "\n");
        }
    }
    private void writeSummary(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST indirect-call prototypes\n\nIndirect call sites: " + sites.size() +
                "\nProposals: " + rows.size() + "\nAutomatic: " +
                rows.stream().filter(row -> row.apply).count() +
                "\nDispatch interface audits: " + rows.stream().filter(row ->
                    row.kind.equals("dispatch_interface_audit")).count() +
                "\nDispatch tail ABI prototypes: " + rows.stream().filter(row ->
                    row.signatureMode.startsWith("synthetic_dispatch_")).count() +
                "\nSynthetic ABI prototypes: " + rows.stream().filter(row ->
                    row.signatureMode.startsWith("synthetic_")).count() +
                "\nResolved-target ABI families: " + targetFamilies.size() +
                "\nFamily-propagated slots: " + rows.stream().filter(row ->
                    row.signatureMode.equals("family_target")).count() + "\n");
        }
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private static String name(DataTypeComponent component) {
        return component.getFieldName() == null ? "" : component.getFieldName();
    }
    private static String safeText(String value) { return value == null ? "" : value; }
    private String addr(Address address) { return address.toString().toUpperCase(Locale.ROOT); }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path root = selected.toPath().toAbsolutePath().normalize();
        return root.getFileName() != null && root.getFileName().toString().equals(currentProgram.getName()) ?
            root : root.resolve(currentProgram.getName());
    }
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private record Row(boolean apply, String kind, String structurePath, int offset,
        String expectedName, String expectedType, String expectedComment, String proposedVtable,
        String proposedName, long tableAddress, int slotCount, String functionAddress,
        String function, String signatureMode, String receiverType, int stackParameters,
        String parameterTypes, String returnType, String confidence, String evidence) {}
    private record Synthetic(String mode, String receiverType, int stackParameters,
        String parameterTypes, String returnType, String evidence) {}
    private record Site(String functionAddress, String function, String callAddress,
        String register, int slot, int pushes, String ecx, String receiverRegister,
        String instruction) {}
    private record DispatchTable(Structure structure, int slots, String address) {}
    private record TypedTargetComponent(Pointer pointer, String structurePath,
        int offset) {}
    private record FunctionPointerFamily(Pointer pointer, String pointerType,
        int occurrences) {}
}
