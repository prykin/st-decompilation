// Recover conservative class layouts from ECX/this-derived memory accesses.
// Read-only: writes class_layout_proposals.tsv and class_field_proposals.tsv.
// Run after STConstructorAnalyzer so unique allocation sizes can bound structures.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Class Layouts

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
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
import ghidra.program.model.data.AbstractFloatDataType;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Data;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STClassLayoutAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final Pattern X86_REGISTER = Pattern.compile(
        "(?i)\\b(EAX|EBX|ECX|EDX|ESI|EDI|EBP|ESP)\\b");
    private static final Pattern ACCESSOR = Pattern.compile(
        "^(Get|Set|Is|Has)([A-Z][A-Za-z0-9_]*)$");
    private static final String MARKER = "[STClassLayoutApplier]";
    private static final String HASH_MARKER = "generated_layout_sha256=";
    private static final String SWITCH_ENUM_MARKER = "[STSwitchEnumApplier]";
    private static final String DARRAY_PATH = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String CLASS_POINTEE_ROOT =
        "/SubmarineTitans/Recovered/ClassPointees/";
    private static final long MAX_CLASS_SIZE = 0x1000000L;
    private static final long MAX_POINTEE_SIZE = 0x4000L;

    private DataTypeManager dataTypes;
    private int crossTypedFieldAccesses;
    private int crossTypeLinks;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();

        Map<String, Long> exactSizes = readClassSizes(
            directory.resolve("constructor_class_sizes.tsv"));
        Map<String, String> vtableTypes = readVtableTypes(
            directory.resolve("vtable_proposals.tsv"));
        Map<String, ClassEvidence> classes = new TreeMap<>();

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            String owner = ownerOf(function);
            if (owner.isBlank() || function.isThunk() || function.isExternal() ||
                    isLibrary(function) || !"__thiscall".equals(function.getCallingConventionName()))
                continue;
            ClassEvidence classEvidence = classes.computeIfAbsent(owner, ClassEvidence::new);
            analyzeFunction(function, classEvidence);
        }
        recoverTypedClassFieldSemantics(classes);

        List<ClassProposal> classRows = new ArrayList<>();
        List<FieldProposal> fieldRows = new ArrayList<>();
        List<NestedTypeProposal> nestedTypes = new ArrayList<>();
        List<NestedFieldProposal> nestedFields = new ArrayList<>();
        for (ClassEvidence evidence : classes.values()) {
            monitor.checkCancelled();
            DataType ownerType = findOwnerType(evidence.owner);
            if (!(ownerType instanceof Structure structure) || evidence.fields.isEmpty()) continue;
            long observedSize = evidence.fields.values().stream()
                .mapToLong(field -> field.offset + field.maximumSize()).max().orElse(1);
            if (vtableTypes.containsKey(evidence.owner)) observedSize = Math.max(observedSize, 4);
            long exactSize = exactSizes.getOrDefault(evidence.owner, -1L);
            long proposedSize = exactSize >= observedSize ? exactSize : observedSize;
            if (proposedSize < 1 || proposedSize > MAX_CLASS_SIZE) continue;

            String ownerVtableType = vtableTypes.get(evidence.owner);
            List<NestedTypeProposal> ownerNested = prepareNestedTypes(evidence, nestedFields,
                ownerVtableType != null);
            List<FieldProposal> ownerFields = makeFields(evidence, structure,
                ownerVtableType, proposedSize);
            markOverlaps(ownerFields);
            long autoFields = ownerFields.stream().filter(field -> field.apply).count();
            boolean safeStructure = isPlaceholder(structure) || isOwnedUnchangedCandidate(structure);
            boolean hasExactSize = exactSize >= observedSize;
            boolean hasVtable = vtableTypes.containsKey(evidence.owner);
            // A single remote access is too weak to justify materializing a mostly-empty,
            // potentially enormous structure.  Require a second independent offset, an
            // applied vtable type, or a unique constructor allocation size.
            boolean anchoredLayout = autoFields >= 2 || hasVtable || hasExactSize;
            boolean apply = safeStructure && autoFields > 0 && anchoredLayout;
            String reason = exactSize >= observedSize ? "unique_allocation_size_and_this_accesses" :
                "observed_this_access_extent";
            if (!safeStructure) reason = "existing_manual_or_unowned_structure_preserved";
            else if (!anchoredLayout) reason = "insufficient_layout_anchors";
            ClassProposal proposal = new ClassProposal(evidence.owner, structure.getPathName(),
                structure.getLength(), observedSize, exactSize, proposedSize,
                ownerFields.size(), autoFields, apply, apply ? "high" : "manual",
                reason, evidence.functions);
            classRows.add(proposal);
            fieldRows.addAll(ownerFields);
            for (NestedTypeProposal nested : ownerNested) {
                FieldProposal parent = ownerFields.stream().filter(field ->
                    field.offset == nested.parentOffset).findFirst().orElse(null);
                nested.apply = apply && parent != null && parent.apply && parent.typeApply &&
                    parent.inferredType.equals("pointer:" + nested.typePath);
                for (NestedFieldProposal field : nestedFields)
                    if (field.typePath.equals(nested.typePath)) field.apply = nested.apply;
                nestedTypes.add(nested);
            }
        }
        classRows.sort(Comparator.comparing(row -> row.owner));
        fieldRows.sort(Comparator.comparing((FieldProposal row) -> row.owner)
            .thenComparingLong(row -> row.offset));
        nestedTypes.sort(Comparator.comparing(row -> row.typePath));
        nestedFields.sort(Comparator.comparing((NestedFieldProposal row) -> row.typePath)
            .thenComparingLong(row -> row.offset));

        writeClasses(directory.resolve("class_layout_proposals.tsv"), classRows);
        writeFields(directory.resolve("class_field_proposals.tsv"), fieldRows);
        writeNestedTypes(directory.resolve("class_nested_type_proposals.tsv"), nestedTypes);
        writeNestedFields(directory.resolve("class_nested_field_proposals.tsv"), nestedFields);
        writeSummary(directory.resolve("class_layout_summary.txt"), classRows, fieldRows,
            nestedTypes);
        long applicable = classRows.stream().filter(row -> row.apply).count();
        long fields = fieldRows.stream().filter(row -> row.apply).count();
        Set<String> applicableOwners = new TreeSet<>();
        for (ClassProposal row : classRows) if (row.apply) applicableOwners.add(row.owner);
        long semanticTypes = fieldRows.stream().filter(row -> row.typeApply &&
            applicableOwners.contains(row.owner)).count();
        long revisedTypes = fieldRows.stream().filter(row ->
            row.reason.contains("generated_concrete_type_revised=")).count();
        long retiredTypes = fieldRows.stream().filter(row ->
            row.reason.contains("deprecated_generated_type_reverted=")).count();
        long suggestedNames = fieldRows.stream().filter(row -> !row.suggestedName.isBlank() &&
            row.apply && applicableOwners.contains(row.owner)).count();
        println("Class-layout analysis complete: " + directory.toAbsolutePath().normalize());
        println("Classes: " + classRows.size() + ", class_apply: " + applicable +
            ", fields: " + fieldRows.size() + ", field_apply: " + fields +
            ", semantic_type_apply: " + semanticTypes +
            ", generated_type_revisions: " + revisedTypes +
            ", deprecated_type_repairs: " + retiredTypes +
            ", cross_typed_accesses: " + crossTypedFieldAccesses +
            ", cross_type_links: " + crossTypeLinks +
            ", nested_pointees: " + nestedTypes.size() +
            ", nested_apply: " + nestedTypes.stream().filter(row -> row.apply).count() +
            ", review_name_suggestions: " + suggestedNames);
    }

    private void analyzeFunction(Function function, ClassEvidence owner) {
        Map<String, RegisterValue> registers = new HashMap<>();
        registers.put("ECX", RegisterValue.thisAddress(0));
        Map<Long, RegisterValue> stackValues = new HashMap<>();
        seedStackParameters(function, stackValues);
        Set<Long> stableThisSlots = stableThisStackSlots(function);
        for (long offset : stableThisSlots)
            stackValues.put(offset, RegisterValue.thisAddress(0));
        Map<Long, FunctionFieldAccess> functionFields = new TreeMap<>();
        List<PushEvidence> pendingPushes = new ArrayList<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(text);

            inferComparisonTypes(owner, function, instruction, mnemonic, operands, registers);
            inferBitwiseTypes(owner, function, instruction, mnemonic, operands, registers);

            if (!"LEA".equals(mnemonic)) {
                int size = accessSize(text, operands);
                for (int operandIndex = 0; operandIndex < operands.length; operandIndex++) {
                    MemoryExpr memory = memoryExpr(operands[operandIndex]);
                    RegisterValue base = memory == null ? null : registers.get(memory.register);
                    if (base != null && base.kind == ValueKind.FIELD_VALUE) {
                        long childOffset = memory.displacement;
                        if (childOffset < 0 || childOffset >= MAX_POINTEE_SIZE ||
                                size <= 0 || size > 8) continue;
                        boolean write = operandIndex == 0 && isWriteMnemonic(mnemonic);
                        FieldEvidence parent = field(owner, base.offset);
                        PointeeFieldEvidence child = parent.pointeeFields.computeIfAbsent(
                            childOffset, PointeeFieldEvidence::new);
                        child.sizes.merge(size, 1, Integer::sum);
                        if (write) child.writes++;
                        else child.reads++;
                        String site = addr(function.getEntryPoint()) + " [this+" +
                            hex(base.offset) + "] -> [pointee+" + hex(childOffset) + "]";
                        child.sites.add(site);
                        parent.pointerUses++;
                        owner.functions.add(addr(function.getEntryPoint()));
                        continue;
                    }
                    if (base == null || base.kind != ValueKind.THIS_ADDRESS) continue;
                    long offset = base.offset + memory.displacement;
                    if (offset < 0 || offset >= MAX_CLASS_SIZE || size <= 0 || size > 8) continue;
                    FieldEvidence field = field(owner, offset);
                    field.sizes.merge(size, 1, Integer::sum);
                    field.thisAccesses++;
                    boolean write = operandIndex == 0 && isWriteMnemonic(mnemonic);
                    if (write) field.writes++;
                    else field.reads++;
                    FunctionFieldAccess local = functionFields.computeIfAbsent(offset,
                        ignored -> new FunctionFieldAccess());
                    if (write) local.writes++;
                    else local.reads++;
                    inferInstructionType(field, instruction, mnemonic, size);
                    field.functions.add(function.getEntryPoint().toString().toUpperCase(Locale.ROOT));
                    owner.functions.add(function.getEntryPoint().toString().toUpperCase(Locale.ROOT));
                }
            }

            if ("CALL".equals(mnemonic)) {
                Function called = calledFunction(instruction);
                if (called != null) {
                    inferThisReceiver(owner, function, called, registers.get("ECX"));
                    inferStackArguments(owner, function, called, pendingPushes);
                }
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                pendingPushes.clear();
                String returnType = called == null || !trusted(called.getSignatureSource()) ? "" :
                    meaningfulTypeSpecification(called.getReturnType());
                if (!returnType.isBlank()) {
                    registers.put("EAX", RegisterValue.typedValue(returnType,
                        producedName(called), addr(function.getEntryPoint()) +
                        " return from " + called.getName(true)));
                }
                continue;
            }
            if ("PUSH".equals(mnemonic)) {
                pendingPushes.add(pushEvidence(operands, registers));
            }
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EBP".equals(cleanRegister(operands[0])) &&
                    "ESP".equals(cleanRegister(operands[1]))) {
                pendingPushes.clear(); // Discard callee-save pushes from the function prologue.
            }
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                pendingPushes.clear();
            }
            updateRegisters(owner, function, mnemonic, operands, registers, stackValues,
                stableThisSlots);
        }
        recoverCfgThisFields(function, owner, stableThisSlots, functionFields);
        inferAccessorName(function, owner, functionFields);
    }

    /**
     * Enrich every recovered class from accesses made through any already typed
     * class pointer, not only through the incoming this of that class's methods.
     * This recovers evidence such as a typed global singleton field participating
     * in an unsigned comparison and propagates that evidence across exact MOV
     * copies into fields of another class.
     */
    private void recoverTypedClassFieldSemantics(Map<String, ClassEvidence> classes)
            throws Exception {
        Map<String, CrossOwner> owners = new HashMap<>();
        for (ClassEvidence evidence : classes.values()) {
            DataType type = findOwnerType(evidence.owner);
            if (type instanceof Structure structure)
                owners.put(structure.getPathName(), new CrossOwner(structure, evidence));
        }
        if (owners.isEmpty()) return;

        Set<FieldLink> links = new HashSet<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() || isLibrary(function)) continue;
            recoverTypedClassFields(function, owners, links);
        }
        propagateCrossFieldTypes(owners, links);
        crossTypeLinks = links.size();
    }

    private void recoverTypedClassFields(Function function, Map<String, CrossOwner> owners,
            Set<FieldLink> links) throws Exception {
        List<CfgBlock> blocks = cfgBlocks(function);
        if (blocks.isEmpty()) return;
        Map<Address, CfgBlock> byStart = new TreeMap<>();
        for (CfgBlock block : blocks) byStart.put(block.start, block);
        for (CfgBlock block : blocks) {
            Instruction last = block.instructions.get(block.instructions.size() - 1);
            for (Address flow : last.getFlows()) addCfgEdge(function, byStart, block, flow);
            Address fallthrough = last.getFallThrough();
            if (fallthrough != null) addCfgEdge(function, byStart, block, fallthrough);
            for (Reference reference : last.getReferencesFrom())
                if (reference.getReferenceType().isFlow())
                    addCfgEdge(function, byStart, block, reference.getToAddress());
        }

        CrossState entry = crossEntryState(function, owners);
        Map<Address, CrossState> inputs = new TreeMap<>();
        Map<Address, CrossState> outputs = new TreeMap<>();
        int limit = Math.max(16, blocks.size() * 8);
        for (int pass = 0; pass < limit; pass++) {
            boolean changed = false;
            for (CfgBlock block : blocks) {
                CrossState input = block.start.equals(function.getEntryPoint()) ? entry.copy() :
                    joinCrossPredecessors(block, outputs);
                if (input == null) continue;
                CrossState output = transferCrossBlock(function, block, input, owners,
                    null, null);
                if (!input.equals(inputs.get(block.start)) ||
                        !output.equals(outputs.get(block.start))) {
                    inputs.put(block.start, input);
                    outputs.put(block.start, output);
                    changed = true;
                }
            }
            if (!changed) break;
        }
        for (CfgBlock block : blocks) {
            CrossState input = inputs.get(block.start);
            if (input != null) transferCrossBlock(function, block, input, owners,
                links, Boolean.TRUE);
        }
    }

    private CrossState crossEntryState(Function function, Map<String, CrossOwner> owners) {
        CrossState state = new CrossState();
        long frameBias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            CrossValue value = crossPointer(parameter.getDataType(), owners);
            if (value == null) continue;
            if (parameter.getRegister() != null) {
                state.registers.put(canonicalRegister(parameter.getRegister().getName()), value);
            }
            else if (parameter.isStackVariable()) {
                state.stack.put((long)parameter.getStackOffset() + frameBias, value);
            }
        }
        String ownerName = ownerOf(function);
        DataType ownerType = ownerName.isBlank() ? null : findOwnerType(ownerName);
        if (ownerType instanceof Structure structure && owners.containsKey(structure.getPathName()) &&
                "__thiscall".equals(function.getCallingConventionName()))
            state.registers.put("ECX", CrossValue.address(structure.getPathName(), 0));
        return state;
    }

    private CrossState joinCrossPredecessors(CfgBlock block,
            Map<Address, CrossState> outputs) {
        List<CrossState> states = new ArrayList<>();
        for (Address predecessor : block.predecessors) {
            CrossState state = outputs.get(predecessor);
            if (state != null) states.add(state);
        }
        if (states.isEmpty()) return null;
        CrossState result = new CrossState();
        Set<String> registers = new HashSet<>();
        Set<Long> stack = new HashSet<>();
        for (CrossState state : states) {
            registers.addAll(state.registers.keySet());
            stack.addAll(state.stack.keySet());
        }
        for (String register : registers) {
            CrossValue value = consistentCrossValue(states, register, false);
            if (value != null) result.registers.put(register, value);
        }
        for (Long offset : stack) {
            CrossValue value = consistentCrossValue(states, offset, true);
            if (value != null) result.stack.put(offset, value);
        }
        return result;
    }

    private CrossValue consistentCrossValue(List<CrossState> states, Object key,
            boolean stack) {
        CrossValue result = null;
        for (CrossState state : states) {
            CrossValue candidate = stack ? state.stack.get((Long)key) :
                state.registers.get((String)key);
            // A receiver/field provenance fact survives a CFG join only when all
            // reachable predecessors carry it.  Ignoring a missing fact leaked a
            // class field from one switch arm into unrelated arms.
            if (candidate == null) return null;
            if (result == null) result = candidate;
            else if (!result.equals(candidate)) return null;
        }
        return result;
    }

    private CrossState transferCrossBlock(Function function, CfgBlock block,
            CrossState input, Map<String, CrossOwner> owners, Set<FieldLink> links,
            Boolean collect) {
        CrossState state = input.copy();
        for (Instruction instruction : block.instructions) {
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(text);
            if (collect != null)
                collectCrossInstruction(function, instruction, mnemonic, text, operands,
                    state, owners, links);
            transferCrossInstruction(instruction, mnemonic, operands, state, owners);
        }
        return state;
    }

    private void collectCrossInstruction(Function function, Instruction instruction,
            String mnemonic, String text, String[] operands, CrossState state,
            Map<String, CrossOwner> owners, Set<FieldLink> links) {
        int size = accessSize(text, operands);
        if (!"LEA".equals(mnemonic)) {
            for (int index = 0; index < operands.length; index++) {
                for (String register : memoryRegisters(operands[index])) {
                    CrossValue carrier = state.registers.get(register);
                    if (carrier == null || carrier.kind != CrossKind.POINTER_FIELD) continue;
                    String element = bufferElementType(size);
                    if (!element.isBlank()) addCrossType(
                        CrossValue.field(carrier.ownerPath, carrier.offset),
                        "pointer:" + element, addr(instruction.getAddress()) +
                        " dynamic " + size + "-byte dereference of field-derived address in " +
                        function.getName(true), owners);
                }
                MemoryExpr memory = memoryExpr(operands[index]);
                CrossValue pointerField = memory == null ? null :
                    state.registers.get(memory.register);
                if (pointerField != null && pointerField.kind == CrossKind.FIELD)
                    recordCrossNestedAccess(function, pointerField, memory.displacement,
                        size, index == 0 && isWriteMnemonic(mnemonic), owners);
                CrossValue value = crossMemoryField(operands[index], state);
                if (value == null) continue;
                boolean write = index == 0 && isWriteMnemonic(mnemonic);
                recordCrossAccess(function, instruction, mnemonic, value, size, write, owners);
            }
        }

        String jump = Set.of("CMP", "TEST").contains(mnemonic) ?
            followingConditionalJump(function, instruction) : "";
        if ("TEST".equals(mnemonic) &&
                (!sameRegisterOperands(operands) || !isSignedJump(jump))) jump = "";
        if (!jump.isBlank()) {
            boolean signed = isSignedJump(jump);
            String type = signed ? signedIntegerType(size) : unsignedIntegerType(size);
            for (String operand : operands)
                addCrossType(crossOperandValue(operand, state), type,
                    addr(instruction.getAddress()) + " CMP/" + jump +
                    " through typed class pointer in " + function.getName(true), owners);
        }
        if ("DIV".equals(mnemonic) || "IDIV".equals(mnemonic)) {
            boolean signed = "IDIV".equals(mnemonic);
            String type = signed ? signedIntegerType(size) : unsignedIntegerType(size);
            addCrossType(state.registers.get("EAX"), type,
                addr(instruction.getAddress()) + " " + mnemonic +
                " implicit dividend in " + function.getName(true), owners);
            for (String operand : operands)
                addCrossType(crossOperandValue(operand, state), type,
                    addr(instruction.getAddress()) + " " + mnemonic +
                    " divisor in " + function.getName(true), owners);
        }

        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            CrossValue destination = crossMemoryField(operands[0], state);
            CrossValue source = crossOperandValue(operands[1], state);
            if (destination != null && destination.kind == CrossKind.FIELD &&
                    source != null && source.kind == CrossKind.ADDRESS)
                addCrossType(destination, "pointer:" + source.ownerPath,
                    addr(instruction.getAddress()) + " exact typed pointer assignment in " +
                    function.getName(true), owners);
            if (destination != null && destination.kind == CrossKind.FIELD &&
                    source != null && source.kind == CrossKind.GENERIC_POINTER)
                addCrossType(destination, "pointer:" + source.ownerPath,
                    addr(instruction.getAddress()) + " generic pointer-return assignment in " +
                    function.getName(true), owners);
            if (destination != null && source != null &&
                    destination.kind == CrossKind.FIELD && source.kind == CrossKind.FIELD &&
                    (destination.offset != source.offset ||
                     !destination.ownerPath.equals(source.ownerPath))) {
                FieldLink link = new FieldLink(destination.ownerPath, destination.offset,
                    source.ownerPath, source.offset, addr(instruction.getAddress()));
                links.add(link);
            }
        }
        if ("CALL".equals(mnemonic)) {
            Function called = calledFunction(instruction);
            CrossValue receiver = state.registers.get("ECX");
            if (called != null && receiver != null && receiver.kind == CrossKind.FIELD &&
                    "__thiscall".equals(called.getCallingConventionName())) {
                String calledOwner = ownerOf(called);
                DataType calledType = calledOwner.isBlank() ? null : findOwnerType(calledOwner);
                if (calledType instanceof Structure structure)
                    addCrossType(receiver, "pointer:" + structure.getPathName(),
                        addr(instruction.getAddress()) + " typed receiver of " +
                        called.getName(true), owners);
            }
        }
    }

    private void transferCrossInstruction(Instruction instruction, String mnemonic,
            String[] operands, CrossState state, Map<String, CrossOwner> owners) {
        if ("CALL".equals(mnemonic)) {
            Function called = calledFunction(instruction);
            state.registers.remove("EAX"); state.registers.remove("ECX");
            state.registers.remove("EDX");
            CrossValue returned = called == null ? null : crossPointer(called.getReturnType(), owners);
            if (returned != null) state.registers.put("EAX", returned);
            return;
        }
        if (operands.length == 0) return;
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            MemoryExpr destinationMemory = memoryExpr(operands[0]);
            if (destinationMemory != null && "EBP".equals(destinationMemory.register)) {
                CrossValue source = crossOperandValue(operands[1], state);
                if (source == null) state.stack.remove(destinationMemory.displacement);
                else state.stack.put(destinationMemory.displacement, source);
                return;
            }
        }
        String destination = cleanRegister(operands[0]);
        if (destination == null) return;
        if (!isFullRegister(operands[0])) { state.registers.remove(destination); return; }
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            CrossValue source = null;
            String sourceRegister = cleanRegister(operands[1]);
            if (sourceRegister != null && isFullRegister(operands[1]))
                source = state.registers.get(sourceRegister);
            MemoryExpr memory = memoryExpr(operands[1]);
            if (source == null && memory != null && "EBP".equals(memory.register))
                source = state.stack.get(memory.displacement);
            if (source == null && memory != null) {
                CrossValue field = crossMemoryField(operands[1], state);
                if (field != null) source = crossLoadedField(field, owners);
            }
            if (source == null) source = referencedCrossPointer(instruction, 1, owners);
            if (source == null) state.registers.remove(destination);
            else state.registers.put(destination, source);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.length >= 2) {
            MemoryExpr memory = memoryExpr(operands[1]);
            CrossValue base = memory == null ? null : state.registers.get(memory.register);
            if (base == null || base.kind != CrossKind.ADDRESS)
                state.registers.remove(destination);
            else state.registers.put(destination,
                CrossValue.address(base.ownerPath, base.offset + memory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.length >= 2) {
            CrossValue old = state.registers.get(destination);
            Long value = immediate(operands[1]);
            CrossValue source = crossOperandValue(operands[1], state);
            if (value == null && "ADD".equals(mnemonic) && source != null &&
                    (source.kind == CrossKind.FIELD ||
                     source.kind == CrossKind.POINTER_FIELD))
                state.registers.put(destination,
                    CrossValue.pointerField(source.ownerPath, source.offset));
            else if (value == null && old != null && (old.kind == CrossKind.FIELD ||
                    old.kind == CrossKind.POINTER_FIELD))
                state.registers.put(destination,
                    CrossValue.pointerField(old.ownerPath, old.offset));
            else if (value == null) state.registers.remove(destination);
            else if (old != null && old.kind == CrossKind.ADDRESS)
                state.registers.put(destination, CrossValue.address(old.ownerPath,
                    old.offset + ("SUB".equals(mnemonic) ? -value : value)));
            // Preserve scalar-field provenance through simple arithmetic so a
            // following signed/unsigned comparison still describes its domain.
            return;
        }
        if (("INC".equals(mnemonic) || "DEC".equals(mnemonic)) &&
                state.registers.get(destination) != null &&
                state.registers.get(destination).kind == CrossKind.FIELD) return;
        if (!Set.of("CMP", "TEST", "PUSH", "JMP", "RET").contains(mnemonic))
            state.registers.remove(destination);
    }

    private CrossValue crossMemoryField(String operand, CrossState state) {
        MemoryExpr memory = memoryExpr(operand);
        CrossValue base = memory == null ? null : state.registers.get(memory.register);
        return base == null || base.kind != CrossKind.ADDRESS ? null :
            CrossValue.field(base.ownerPath, base.offset + memory.displacement);
    }

    private CrossValue crossOperandValue(String operand, CrossState state) {
        String register = cleanRegister(operand);
        if (register != null) return state.registers.get(register);
        return crossMemoryField(operand, state);
    }

    private CrossValue crossLoadedField(CrossValue field, Map<String, CrossOwner> owners) {
        CrossOwner owner = owners.get(field.ownerPath);
        if (owner == null || field.offset < 0 || field.offset > Integer.MAX_VALUE ||
                field.offset >= owner.structure.getLength()) return field;
        DataTypeComponent component = owner.structure.getComponentContaining((int)field.offset);
        if (component == null || component.getOffset() != field.offset) return field;
        CrossValue pointer = crossPointer(component.getDataType(), owners);
        if (pointer == null) return field;
        return pointer.kind == CrossKind.GENERIC_POINTER ?
            CrossValue.pointerField(field.ownerPath, field.offset) : pointer;
    }

    private CrossValue referencedCrossPointer(Instruction instruction, int operandIndex,
            Map<String, CrossOwner> owners) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex || reference.getToAddress() == null)
                continue;
            Data data = currentProgram.getListing().getDefinedDataContaining(
                reference.getToAddress());
            if (data == null) continue;
            CrossValue value = crossPointer(data.getDataType(), owners);
            if (value != null) return value;
        }
        return null;
    }

    private CrossValue crossPointer(DataType type, Map<String, CrossOwner> owners) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return null;
        type = pointer.getDataType();
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (type instanceof Structure structure && owners.containsKey(structure.getPathName()))
            return CrossValue.address(structure.getPathName(), 0);
        String path = type == null || type.getPathName().matches(
            "/undefined(?:1|2|4|8)?") ? "/void" : type.getPathName();
        return CrossValue.genericPointer(path);
    }

    private void recordCrossAccess(Function function, Instruction instruction,
            String mnemonic, CrossValue value, int size, boolean write,
            Map<String, CrossOwner> owners) {
        CrossOwner owner = owners.get(value.ownerPath);
        if (owner == null || value.offset < 0 || value.offset >= MAX_CLASS_SIZE ||
                size < 1 || size > 8) return;
        FieldEvidence field = field(owner.evidence, value.offset);
        field.sizes.merge(size, 1, Integer::sum);
        if (write) field.writes++; else field.reads++;
        field.crossRecovered++;
        inferInstructionType(field, instruction, mnemonic, size);
        field.functions.add(addr(function.getEntryPoint()));
        owner.evidence.functions.add(addr(function.getEntryPoint()));
        crossTypedFieldAccesses++;
    }

    private void recordCrossNestedAccess(Function function, CrossValue pointerField,
            long childOffset, int size, boolean write, Map<String, CrossOwner> owners) {
        CrossOwner owner = owners.get(pointerField.ownerPath);
        if (owner == null || pointerField.offset < 0 || pointerField.offset >= MAX_CLASS_SIZE ||
                childOffset < 0 || childOffset >= MAX_POINTEE_SIZE || size < 1 || size > 8)
            return;
        FieldEvidence parent = field(owner.evidence, pointerField.offset);
        PointeeFieldEvidence child = parent.pointeeFields.computeIfAbsent(childOffset,
            PointeeFieldEvidence::new);
        child.sizes.merge(size, 1, Integer::sum);
        if (write) child.writes++; else child.reads++;
        child.sites.add(addr(function.getEntryPoint()) + " typed cross-class [field+" +
            hex(childOffset) + "]");
        parent.pointerUses++;
        parent.crossRecovered++;
        owner.evidence.functions.add(addr(function.getEntryPoint()));
    }

    private void addCrossType(CrossValue value, String type, String evidence,
            Map<String, CrossOwner> owners) {
        if (value == null || value.kind != CrossKind.FIELD || type.isBlank()) return;
        CrossOwner owner = owners.get(value.ownerPath);
        if (owner != null) field(owner.evidence, value.offset).addType(type, evidence);
    }

    private List<String> memoryRegisters(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return List.of();
        List<String> result = new ArrayList<>();
        Matcher matcher = X86_REGISTER.matcher(operand.substring(open + 1, close));
        while (matcher.find()) result.add(matcher.group(1).toUpperCase(Locale.ROOT));
        return result;
    }

    private String bufferElementType(int size) {
        return switch (size) {
            case 1 -> "/byte";
            case 2 -> "/ushort";
            default -> "";
        };
    }

    private void propagateCrossFieldTypes(Map<String, CrossOwner> owners,
            Set<FieldLink> links) {
        for (int pass = 0; pass < Math.max(8, links.size()); pass++) {
            boolean changed = false;
            for (FieldLink link : links) {
                CrossOwner leftOwner = owners.get(link.leftOwner);
                CrossOwner rightOwner = owners.get(link.rightOwner);
                if (leftOwner == null || rightOwner == null) continue;
                FieldEvidence left = field(leftOwner.evidence, link.leftOffset);
                FieldEvidence right = field(rightOwner.evidence, link.rightOffset);
                // MOV [destination-field], source-field is directional.  Copying every
                // observed scalar type in both directions made large assignment graphs
                // collapse into artificial int/uint conflicts.  A bit-pattern copy does
                // not prove the source's signedness; only propagate a uniquely resolved
                // source type into a destination which has no contrary direct evidence.
                changed |= copyCrossTypes(right, left, link.site);
            }
            if (!changed) break;
        }
    }

    private boolean copyCrossTypes(FieldEvidence source, FieldEvidence destination,
            String site) {
        String type = source.resolvedPropagationType();
        if (type.isBlank() || typeLength(type) != destination.layoutSize()) return false;
        Set<String> direct = destination.directTypes();
        if (!direct.isEmpty() && !direct.equals(Set.of(type))) return false;
        Set<String> evidence = destination.inferredTypes.computeIfAbsent(type,
            ignored -> new TreeSet<>());
        return evidence.add(site + " exact field-to-field MOV propagation");
    }

    /**
     * Supplement the linear semantic pass with a conservative CFG data-flow pass.
     * A listing-order walk crosses mutually exclusive switch arms: an epilogue in
     * one arm can appear to clobber ESI/EBX immediately before the next arm even
     * though both arms receive the register from the jump-table predecessor.  This
     * pass keeps only register=this+constant facts which agree at every known
     * predecessor and uses them solely to recover otherwise missed field widths.
     */
    private void recoverCfgThisFields(Function function, ClassEvidence owner,
            Set<Long> stableThisSlots, Map<Long, FunctionFieldAccess> linearFields) {
        List<CfgBlock> blocks = cfgBlocks(function);
        if (blocks.isEmpty()) return;
        Map<Address, CfgBlock> byStart = new TreeMap<>();
        for (CfgBlock block : blocks) byStart.put(block.start, block);
        for (CfgBlock block : blocks) {
            Instruction last = block.instructions.get(block.instructions.size() - 1);
            for (Address flow : last.getFlows())
                addCfgEdge(function, byStart, block, flow);
            Address fallthrough = last.getFallThrough();
            if (fallthrough != null) addCfgEdge(function, byStart, block, fallthrough);
            // Jump-table destinations are represented as flow references on some
            // loaders even when Instruction.getFlows() does not expose them.
            for (ghidra.program.model.symbol.Reference reference : last.getReferencesFrom())
                if (reference.getReferenceType().isFlow())
                    addCfgEdge(function, byStart, block, reference.getToAddress());
        }

        Map<Address, Map<String, Long>> outputs = new TreeMap<>();
        int limit = Math.max(8, blocks.size() * 4);
        for (int pass = 0; pass < limit; pass++) {
            boolean changed = false;
            for (CfgBlock block : blocks) {
                Map<String, Long> input = cfgInput(function, block, outputs);
                Map<String, Long> output = transferCfgBlock(block, input, stableThisSlots, null);
                if (!output.equals(outputs.get(block.start))) {
                    outputs.put(block.start, output);
                    changed = true;
                }
            }
            if (!changed) break;
        }

        Map<Long, CfgFieldAccess> recovered = new TreeMap<>();
        for (CfgBlock block : blocks) {
            Map<String, Long> input = cfgInput(function, block, outputs);
            transferCfgBlock(block, input, stableThisSlots, recovered);
        }
        String functionAddress = addr(function.getEntryPoint());
        for (CfgFieldAccess access : recovered.values()) {
            // The linear pass carries richer type/name/call evidence.  CFG evidence
            // is a fallback only for offsets the linear walk missed completely.
            if (linearFields.containsKey(access.offset)) continue;
            FieldEvidence target = field(owner, access.offset);
            for (Map.Entry<Integer, Integer> size : access.sizes.entrySet())
                target.sizes.merge(size.getKey(), size.getValue(), Integer::sum);
            target.reads += access.reads;
            target.writes += access.writes;
            target.bitwiseUses += access.bitwiseUses;
            target.cfgRecovered += access.reads + access.writes;
            for (CfgSite site : access.sites) {
                inferInstructionType(target, site.instruction, site.mnemonic, site.size);
                inferCfgComparisonType(function, target, site);
            }
            target.functions.add(functionAddress);
            owner.functions.add(functionAddress);
            FunctionFieldAccess local = linearFields.computeIfAbsent(access.offset,
                ignored -> new FunctionFieldAccess());
            local.reads += access.reads;
            local.writes += access.writes;
        }
    }

    private List<CfgBlock> cfgBlocks(Function function) {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());
        if (instructions.isEmpty()) return List.of();
        Set<Address> starts = new TreeSet<>();
        starts.add(instructions.get(0).getAddress());
        for (int index = 0; index < instructions.size(); index++) {
            Instruction instruction = instructions.get(index);
            for (Address flow : instruction.getFlows())
                if (function.getBody().contains(flow)) starts.add(flow);
            for (ghidra.program.model.symbol.Reference reference :
                    instruction.getReferencesFrom()) {
                Address target = reference.getToAddress();
                if (reference.getReferenceType().isFlow() && target != null &&
                        function.getBody().contains(target)) starts.add(target);
            }
            if (index + 1 < instructions.size() &&
                    (instruction.getFlowType().isJump() ||
                     instruction.getFlowType().isTerminal()))
                starts.add(instructions.get(index + 1).getAddress());
        }
        List<CfgBlock> result = new ArrayList<>();
        CfgBlock block = null;
        for (Instruction instruction : instructions) {
            if (block == null || starts.contains(instruction.getAddress())) {
                block = new CfgBlock(instruction.getAddress());
                result.add(block);
            }
            block.instructions.add(instruction);
        }
        return result;
    }

    private void addCfgEdge(Function function, Map<Address, CfgBlock> blocks,
            CfgBlock source, Address target) {
        if (target == null || !function.getBody().contains(target)) return;
        CfgBlock destination = blocks.get(target);
        if (destination == null) return;
        source.successors.add(destination.start);
        destination.predecessors.add(source.start);
    }

    private Map<String, Long> cfgInput(Function function, CfgBlock block,
            Map<Address, Map<String, Long>> outputs) {
        if (block.start.equals(function.getEntryPoint())) {
            Map<String, Long> entry = new HashMap<>();
            entry.put("ECX", 0L);
            return entry;
        }
        Map<String, Long> result = null;
        for (Address predecessor : block.predecessors) {
            Map<String, Long> output = outputs.get(predecessor);
            if (output == null) continue;
            if (result == null) result = new HashMap<>(output);
            else result.entrySet().removeIf(entry ->
                !output.containsKey(entry.getKey()) ||
                !output.get(entry.getKey()).equals(entry.getValue()));
        }
        return result == null ? new HashMap<>() : result;
    }

    private Map<String, Long> transferCfgBlock(CfgBlock block, Map<String, Long> input,
            Set<Long> stableThisSlots, Map<Long, CfgFieldAccess> recovered) {
        Map<String, Long> state = new HashMap<>(input);
        for (Instruction instruction : block.instructions) {
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(text);
            if (recovered != null && !"LEA".equals(mnemonic)) {
                int size = accessSize(text, operands);
                for (int operandIndex = 0; operandIndex < operands.length; operandIndex++) {
                    MemoryExpr memory = memoryExpr(operands[operandIndex]);
                    Long base = memory == null ? null : state.get(memory.register);
                    if (base == null) continue;
                    long offset = base + memory.displacement;
                    if (offset < 0 || offset >= MAX_CLASS_SIZE || size < 1 || size > 8)
                        continue;
                    boolean write = operandIndex == 0 && isWriteMnemonic(mnemonic);
                    CfgFieldAccess access = recovered.computeIfAbsent(offset,
                        CfgFieldAccess::new);
                    access.sizes.merge(size, 1, Integer::sum);
                    if (write) access.writes++; else access.reads++;
                    if (access.sites.size() < 64)
                        access.sites.add(new CfgSite(instruction, mnemonic, size,
                            operandIndex, write));
                }
            }
            transferCfgInstruction(mnemonic, operands, state, stableThisSlots);
        }
        return state;
    }

    private void transferCfgInstruction(String mnemonic, String[] operands,
            Map<String, Long> state, Set<Long> stableThisSlots) {
        if ("CALL".equals(mnemonic)) {
            state.remove("EAX"); state.remove("ECX"); state.remove("EDX");
            return;
        }
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { state.remove(destination); return; }
            String source = cleanRegister(operands[1]);
            if (source != null && isFullRegister(operands[1])) {
                Long offset = state.get(source);
                if (offset == null) state.remove(destination); else state.put(destination, offset);
                return;
            }
            MemoryExpr memory = memoryExpr(operands[1]);
            if (memory != null && "EBP".equals(memory.register) &&
                    stableThisSlots.contains(memory.displacement))
                state.put(destination, 0L);
            else state.remove(destination);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            MemoryExpr memory = memoryExpr(operands[1]);
            Long base = memory == null ? null : state.get(memory.register);
            if (base == null || !isFullRegister(operands[0])) state.remove(destination);
            else state.put(destination, base + memory.displacement);
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                destination != null && operands.length >= 2) {
            Long base = state.get(destination), value = immediate(operands[1]);
            if (base == null || value == null) state.remove(destination);
            else state.put(destination, base + ("SUB".equals(mnemonic) ? -value : value));
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) state.remove(destination);
    }

    /**
     * Recover signedness when a field load and its comparison live in a switch arm
     * which the richer linear pass could not enter with a valid this-register fact.
     * Only a short, straight-line def-use chain is accepted; calls, branches and
     * replacement writes terminate the search.
     */
    private void inferCfgComparisonType(Function function, FieldEvidence field,
            CfgSite site) {
        String jump = followingConditionalJump(function, site.instruction);
        if (("CMP".equals(site.mnemonic) ||
                ("TEST".equals(site.mnemonic) && isSignedJump(jump))) &&
                !jump.isBlank()) {
            addComparisonType(function, field, site.instruction, jump, site.size);
            return;
        }
        if (site.write || site.operandIndex != 1 ||
                !Set.of("MOV", "MOVSX", "MOVSXD", "MOVZX").contains(site.mnemonic)) return;
        String[] loadOperands = splitOperands(
            site.instruction.toString().toUpperCase(Locale.ROOT));
        if (loadOperands.length < 2 || registerWidth(loadOperands[0]) < 1) return;
        String register = cleanRegister(loadOperands[0]);
        if (register == null) return;
        Instruction cursor = currentProgram.getListing()
            .getInstructionAfter(site.instruction.getAddress());
        for (int step = 0; step < 12 && cursor != null &&
                function.getBody().contains(cursor.getAddress()); step++) {
            String mnemonic = cursor.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(cursor.toString().toUpperCase(Locale.ROOT));
            if (("CMP".equals(mnemonic) && usesRegister(operands, register)) ||
                    ("TEST".equals(mnemonic) && sameRegisterOperands(operands) &&
                     register.equals(cleanRegister(operands[0])))) {
                jump = followingConditionalJump(function, cursor);
                if (!jump.isBlank() &&
                        (!"TEST".equals(mnemonic) || isSignedJump(jump)))
                    addComparisonType(function, field, cursor, jump, site.size);
                return;
            }
            if ("CALL".equals(mnemonic) || cursor.getFlowType().isJump() ||
                    cursor.getFlowType().isTerminal()) return;
            if (writesRegister(mnemonic, operands, register) &&
                    !Set.of("ADD", "SUB", "INC", "DEC").contains(mnemonic)) return;
            cursor = currentProgram.getListing().getInstructionAfter(cursor.getAddress());
        }
    }

    private boolean usesRegister(String[] operands, String register) {
        for (String operand : operands)
            if (register.equals(cleanRegister(operand))) return true;
        return false;
    }

    private String followingConditionalJump(Function function, Instruction comparison) {
        Instruction next = currentProgram.getListing()
            .getInstructionAfter(comparison.getAddress());
        if (next == null || !function.getBody().contains(next.getAddress())) return "";
        String jump = next.getMnemonicString().toUpperCase(Locale.ROOT);
        return Set.of("JL", "JLE", "JG", "JGE", "JNGE", "JNG", "JNLE", "JNL",
            "JS", "JNS", "JB", "JBE", "JA", "JAE", "JNAE", "JNA", "JNBE",
            "JNB", "JC", "JNC")
            .contains(jump) ? jump : "";
    }

    private void addComparisonType(Function function, FieldEvidence field,
            Instruction comparison, String jump, int size) {
        boolean signed = isSignedJump(jump);
        String type = signed ? signedIntegerType(size) : unsignedIntegerType(size);
        if (!type.isBlank()) field.addType(type, addr(comparison.getAddress()) + " CMP/" +
            jump + " establishes " + type + " through CFG-recovered field flow in " +
            function.getName(true));
    }

    private void inferBitwiseTypes(ClassEvidence owner, Function function,
            Instruction instruction, String mnemonic, String[] operands,
            Map<String, RegisterValue> registers) {
        // AND/OR/XOR/TEST are valid on signed values and do not establish C
        // signedness.  SHR is the one useful x86 distinction here: SAR is the
        // signed right shift while SHR is logical/unsigned.
        if (!"SHR".equals(mnemonic)) return;
        for (String operand : operands) {
            RegisterValue value = registers.get(cleanRegister(operand));
            if (value == null || value.kind != ValueKind.FIELD_VALUE) continue;
            String type = unsignedIntegerType(registerWidth(operand));
            if (!type.isBlank()) field(owner, value.offset).addType(type,
                addr(instruction.getAddress()) + " " + mnemonic + " establishes " + type +
                " through a field-derived value in " + function.getName(true));
        }
    }

    /**
     * MSVC commonly spills incoming ECX once in the prologue and reloads it in each
     * branch after setjmp/SEH paths.  A linear register walk can otherwise lose the
     * receiver when an earlier, mutually-exclusive branch reuses the same register.
     * Treat a prologue spill as immutable only when that EBP slot has exactly one
     * machine-code write in the complete function.
     */
    private Set<Long> stableThisStackSlots(Function function) {
        Set<Long> candidates = new TreeSet<>();
        Map<Long, Integer> writes = new HashMap<>();
        boolean incomingEcxLive = true;
        int inspected = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if (operands.length > 0) {
                MemoryExpr destination = memoryExpr(operands[0]);
                if (destination != null && "EBP".equals(destination.register) &&
                        isWriteMnemonic(mnemonic)) {
                    writes.merge(destination.displacement, 1, Integer::sum);
                    if (incomingEcxLive && inspected < 40 && "MOV".equals(mnemonic) &&
                            operands.length >= 2 && "ECX".equals(cleanRegister(operands[1])) &&
                            isFullRegister(operands[1]))
                        candidates.add(destination.displacement);
                }
            }
            if (incomingEcxLive && writesRegister(mnemonic, operands, "ECX"))
                incomingEcxLive = false;
            if ("CALL".equals(mnemonic)) incomingEcxLive = false;
            inspected++;
        }
        candidates.removeIf(offset -> writes.getOrDefault(offset, 0) != 1);
        return candidates;
    }

    private boolean writesRegister(String mnemonic, String[] operands, String register) {
        if (operands.length == 0 || !register.equals(cleanRegister(operands[0]))) return false;
        if (Set.of("CMP", "TEST", "PUSH", "JMP", "RET").contains(mnemonic)) return false;
        return true;
    }

    private FieldEvidence field(ClassEvidence owner, long offset) {
        return owner.fields.computeIfAbsent(offset, ignored -> new FieldEvidence(offset));
    }

    private void inferThisReceiver(ClassEvidence owner, Function containing, Function called,
            RegisterValue receiver) {
        if (receiver == null || receiver.kind != ValueKind.FIELD_VALUE ||
                !"__thiscall".equals(called.getCallingConventionName())) return;
        String calledOwner = ownerOf(called);
        DataType ownerType = findOwnerType(calledOwner);
        if (!(ownerType instanceof Structure)) return;
        String specification = "pointer:" + ownerType.getPathName();
        field(owner, receiver.offset).addType(specification,
            addr(containing.getEntryPoint()) + " [this+" + hex(receiver.offset) +
            "] used as receiver of " + called.getName(true));
    }

    private void inferStackArguments(ClassEvidence owner, Function containing, Function called,
            List<PushEvidence> pushes) {
        String convention = called.getCallingConventionName();
        if (!("__cdecl".equals(convention) || "__stdcall".equals(convention) ||
                "__thiscall".equals(convention))) return;
        List<Parameter> parameters = new ArrayList<>();
        for (Parameter parameter : called.getParameters()) {
            if (!parameter.isAutoParameter()) parameters.add(parameter);
        }
        if (parameters.isEmpty() || parameters.size() != pushes.size()) return;
        for (int index = 0; index < parameters.size(); index++) {
            Parameter parameter = parameters.get(index);
            PushEvidence pushed = pushes.get(pushes.size() - 1 - index);
            if (pushed == null || pushed.kind != ValueKind.FIELD_VALUE) continue;
            boolean trusted = trusted(parameter.getSource());
            String inferredType = trusted ?
                meaningfulTypeSpecification(parameter.getDataType()) : "";
            if (inferredType.isBlank() &&
                    !(trusted && meaningfulParameterName(parameter.getName()))) continue;
            FieldEvidence field = field(owner, pushed.offset);
            String evidence = addr(containing.getEntryPoint()) + " [this+" +
                hex(pushed.offset) + "] passed to " + called.getName(true) + " parameter " +
                parameter.getName();
            if (!inferredType.isBlank()) field.addType(inferredType, evidence);
            if (meaningfulParameterName(parameter.getName())) {
                field.addName(cleanFieldName(parameter.getName()), evidence);
            }
        }
    }

    private Function calledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function == null) continue;
            if (function.isThunk()) {
                Function target = function.getThunkedFunction(true);
                if (target != null) function = target;
            }
            return function;
        }
        return null;
    }

    private String meaningfulTypeSpecification(DataType type) {
        if (type == null || type.getLength() < 1) return "";
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            if (pointed == null || pointed.getPathName().matches(
                    "/undefined(?:1|2|4|8)?")) return "pointer:/void";
            return "pointer:" + pointed.getPathName();
        }
        if (type.getPathName().matches("/undefined(?:1|2|4|8)?") ||
                "/void".equals(type.getPathName())) return "";
        if (type instanceof Enum || type instanceof TypeDef ||
                type instanceof AbstractIntegerDataType ||
                type instanceof AbstractFloatDataType) return type.getPathName();
        return "";
    }

    private void seedStackParameters(Function function, Map<Long, RegisterValue> stackValues) {
        // Ghidra stack parameters are relative to ESP at entry.  After the standard
        // PUSH EBP / MOV EBP,ESP prologue the same slot is one pointer-size higher.
        long frameBias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isStackVariable()) continue;
            boolean trusted = trusted(parameter.getSource());
            String type = trusted ? meaningfulTypeSpecification(parameter.getDataType()) : "";
            String name = trusted && meaningfulParameterName(parameter.getName()) ?
                cleanFieldName(parameter.getName()) : "";
            if (type.isBlank() && name.isBlank()) continue;
            String evidence = addr(function.getEntryPoint()) + " incoming parameter " +
                parameter.getName();
            stackValues.put((long)parameter.getStackOffset() + frameBias,
                RegisterValue.typedValue(type, name, evidence));
        }
    }

    private boolean trusted(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private void inferInstructionType(FieldEvidence field, Instruction instruction,
            String mnemonic, int size) {
        String type = "";
        if (Set.of("FLD", "FST", "FSTP", "FADD", "FSUB", "FSUBR", "FMUL",
                "FDIV", "FDIVR", "FCOM", "FCOMP").contains(mnemonic)) {
            if (size == 4) type = "/float";
            else if (size == 8) type = "/double";
        }
        else if (Set.of("FILD", "FIST", "FISTP", "FICOM", "FICOMP")
                .contains(mnemonic)) {
            type = signedIntegerType(size);
        }
        else if ("MOVSX".equals(mnemonic) || "MOVSXD".equals(mnemonic)) {
            type = signedIntegerType(size);
        }
        else if ("MOVZX".equals(mnemonic)) {
            type = unsignedIntegerType(size);
        }
        if (!type.isBlank()) field.addType(type, addr(instruction.getAddress()) + " " +
            mnemonic + " establishes " + type);
    }

    private void inferComparisonTypes(ClassEvidence owner, Function function,
            Instruction instruction, String mnemonic, String[] operands,
            Map<String, RegisterValue> registers) {
        if (!Set.of("CMP", "TEST").contains(mnemonic)) return;
        if ("TEST".equals(mnemonic) && !sameRegisterOperands(operands)) return;
        Instruction next = currentProgram.getListing().getInstructionAfter(instruction.getAddress());
        if (next == null || !function.getBody().contains(next.getAddress())) return;
        String jump = next.getMnemonicString().toUpperCase(Locale.ROOT);
        boolean signed = isSignedJump(jump);
        boolean unsigned = Set.of("JB", "JBE", "JA", "JAE", "JNAE", "JNA", "JNBE", "JNB",
            "JC", "JNC").contains(jump);
        // TEST clears OF and CF.  A signed conditional after TEST reg,reg is a
        // sign/zero test; unsigned conditions do not establish an unsigned C type.
        if ("TEST".equals(mnemonic)) unsigned = false;
        if (!signed && !unsigned) return;
        for (String operand : operands) {
            RegisterValue value = registers.get(cleanRegister(operand));
            if (value == null || value.kind != ValueKind.FIELD_VALUE) continue;
            int size = registerWidth(operand);
            String type = signed ? signedIntegerType(size) : unsignedIntegerType(size);
            if (type.isBlank()) continue;
            field(owner, value.offset).addType(type, addr(instruction.getAddress()) + " CMP/" +
                jump + " establishes " + type + " through a field-derived value in " +
                function.getName(true));
        }
    }

    private boolean sameRegisterOperands(String[] operands) {
        if (operands.length < 2) return false;
        String left = cleanRegister(operands[0]);
        String right = cleanRegister(operands[1]);
        return left != null && left.equals(right) &&
            registerWidth(operands[0]) == registerWidth(operands[1]);
    }

    private boolean isSignedJump(String jump) {
        return Set.of("JL", "JLE", "JG", "JGE", "JNGE", "JNG", "JNLE", "JNL",
            "JS", "JNS").contains(jump);
    }

    private int registerWidth(String operand) {
        String register = operand.trim().toUpperCase(Locale.ROOT);
        if (Set.of("AL", "AH", "BL", "BH", "CL", "CH", "DL", "DH").contains(register))
            return 1;
        if (Set.of("AX", "BX", "CX", "DX", "SI", "DI", "BP", "SP").contains(register))
            return 2;
        if (register.matches("E(?:AX|BX|CX|DX|SI|DI|BP|SP)")) return 4;
        if (register.matches("R(?:AX|BX|CX|DX|SI|DI|BP|SP)")) return 8;
        return -1;
    }

    private String signedIntegerType(int size) {
        return switch (size) {
            case 1 -> "/char";
            case 2 -> "/short";
            case 4 -> "/int";
            case 8 -> "/longlong";
            default -> "";
        };
    }

    private String unsignedIntegerType(int size) {
        return switch (size) {
            case 1 -> "/byte";
            case 2 -> "/ushort";
            case 4 -> "/uint";
            case 8 -> "/ulonglong";
            default -> "";
        };
    }

    private void inferAccessorName(Function function, ClassEvidence owner,
            Map<Long, FunctionFieldAccess> fields) {
        Matcher matcher = ACCESSOR.matcher(function.getName());
        if (!matcher.matches()) return;
        boolean setter = "Set".equals(matcher.group(1));
        List<Long> candidates = fields.entrySet().stream()
            .filter(entry -> entry.getKey() != 0)
            .filter(entry -> setter ? entry.getValue().writes > 0 : entry.getValue().reads > 0)
            .map(Map.Entry::getKey).toList();
        if (candidates.size() != 1) return;
        String name = cleanFieldName(matcher.group(2));
        if (name.isBlank()) return;
        long offset = candidates.get(0);
        field(owner, offset).addName(name, addr(function.getEntryPoint()) + " unique " +
            matcher.group(1).toLowerCase(Locale.ROOT) + " field in " +
            function.getName(true));
    }

    private String producedName(Function called) {
        String name = called.getName();
        Matcher accessor = Pattern.compile(
            "^(?:Get|Find|Create|Make|New|Alloc|Open|Load)([A-Z][A-Za-z0-9_]*)$")
            .matcher(name);
        return accessor.matches() ? cleanFieldName(accessor.group(1)) : "";
    }

    private String cleanFieldName(String value) {
        if (value == null) return "";
        String result = value.trim().replaceAll("^(?:m_|p_)+", "")
            .replaceAll("[^A-Za-z0-9_]", "_");
        if (result.isBlank() || !Character.isLetter(result.charAt(0)) && result.charAt(0) != '_')
            return "";
        result = lowerCamel(result);
        return meaningfulParameterName(result) ? result : "";
    }

    private String lowerCamel(String value) {
        if (value.isBlank() || Character.isLowerCase(value.charAt(0))) return value;
        int firstLower = -1;
        for (int index = 0; index < value.length(); index++) {
            if (Character.isLowerCase(value.charAt(index))) {
                firstLower = index;
                break;
            }
        }
        if (firstLower < 0) return value.toLowerCase(Locale.ROOT);
        int prefix = Math.max(1, firstLower - 1);
        return value.substring(0, prefix).toLowerCase(Locale.ROOT) +
            value.substring(prefix);
    }

    private PushEvidence pushEvidence(String[] operands, Map<String, RegisterValue> registers) {
        if (operands.length < 1) return PushEvidence.unknown();
        String register = cleanRegister(operands[0]);
        if (register != null)
            return PushEvidence.from(isFullRegister(operands[0]) ? registers.get(register) : null);
        MemoryExpr memory = memoryExpr(operands[0]);
        RegisterValue base = memory == null ? null : registers.get(memory.register);
        if (base != null && base.kind == ValueKind.THIS_ADDRESS) {
            return new PushEvidence(ValueKind.FIELD_VALUE, base.offset + memory.displacement);
        }
        return PushEvidence.unknown();
    }

    private List<NestedTypeProposal> prepareNestedTypes(ClassEvidence evidence,
            List<NestedFieldProposal> fieldRows, boolean hasOwnerVtable) {
        List<NestedTypeProposal> result = new ArrayList<>();
        for (FieldEvidence parent : evidence.fields.values()) {
            // Offset zero is the actual dispatch table whenever a reviewed vtable exists.
            // Treating calls through it as arbitrary nested-data dereferences used to replace
            // the vptr with AnonPointee_<owner>_0000 and made every virtual call raw again.
            if (hasOwnerVtable && parent.offset == 0) continue;
            List<PointeeFieldEvidence> selected = selectedPointeeFields(parent);
            if (parent.pointerUses < 3 || selected.size() < 2) continue;
            if (looksLikeDArray(parent) && dataTypes.getDataType(DARRAY_PATH) instanceof Structure) {
                parent.addType("pointer:" + DARRAY_PATH,
                    "nested layout has DArray fields +0x8/+0xC/+0x1C");
                continue;
            }
            int length = pointeeLength(selected);
            if (length < 1 || length > MAX_POINTEE_SIZE) continue;
            String owner = evidence.owner.replaceAll("[^A-Za-z0-9_]", "_");
            String path = CLASS_POINTEE_ROOT + "AnonPointee_" + owner + "_" +
                String.format("%04X", parent.offset);
            parent.addType("pointer:" + path,
                "consistent nested dereferences through [this+" + hex(parent.offset) + "]");
            NestedTypeProposal type = new NestedTypeProposal(false, evidence.owner,
                parent.offset, path, length, selected.size(), parent.pointerUses,
                "multiple non-overlapping fixed offsets through one class pointer field");
            result.add(type);
            for (PointeeFieldEvidence child : selected) {
                int size = child.uniqueSize();
                fieldRows.add(new NestedFieldProposal(false, path, child.offset, size,
                    String.format("field_%04X", child.offset), "/undefined" + size,
                    child.sites.size(), "nested reads=" + child.reads +
                    ", writes=" + child.writes));
            }
        }
        return result;
    }

    private boolean looksLikeDArray(FieldEvidence parent) {
        if (parent.pointerUses < 3) return false;
        DataType candidate = dataTypes.getDataType(DARRAY_PATH);
        if (!(candidate instanceof Structure darray)) return false;
        PointeeFieldEvidence elementSize = parent.pointeeFields.get(8L);
        PointeeFieldEvidence count = parent.pointeeFields.get(0xcL);
        PointeeFieldEvidence data = parent.pointeeFields.get(0x1cL);
        if (!(elementSize != null && count != null && data != null &&
            elementSize.uniqueSize() == 4 && count.uniqueSize() == 4 &&
            data.uniqueSize() == 4)) return false;
        for (PointeeFieldEvidence field : parent.pointeeFields.values()) {
            int size = field.sizes.keySet().stream().mapToInt(Integer::intValue).max()
                .orElse(1);
            if (field.offset < 0 || field.offset + size > darray.getLength()) return false;
        }
        return true;
    }

    private List<PointeeFieldEvidence> selectedPointeeFields(FieldEvidence parent) {
        List<PointeeFieldEvidence> candidates = parent.pointeeFields.values().stream()
            .filter(field -> field.uniqueSize() > 0)
            .sorted(Comparator.<PointeeFieldEvidence>comparingInt(field ->
                field.sites.size()).reversed().thenComparingLong(field -> field.offset))
            .toList();
        List<PointeeFieldEvidence> result = new ArrayList<>();
        for (PointeeFieldEvidence candidate : candidates) {
            long start = candidate.offset, end = start + candidate.uniqueSize();
            boolean overlap = result.stream().anyMatch(field -> start <
                field.offset + field.uniqueSize() && field.offset < end);
            if (!overlap) result.add(candidate);
        }
        result.sort(Comparator.comparingLong(field -> field.offset));
        return result;
    }

    private int pointeeLength(List<PointeeFieldEvidence> fields) {
        long end = 0;
        for (PointeeFieldEvidence field : fields)
            end = Math.max(end, field.offset + field.uniqueSize());
        return (int)((end + 3) & ~3L);
    }

    private List<FieldProposal> makeFields(ClassEvidence evidence, Structure structure,
            String vtableType, long proposedSize) {
        List<FieldProposal> result = new ArrayList<>();
        Map<String, Integer> inferredTypeCounts = new HashMap<>();
        for (FieldEvidence field : evidence.fields.values()) {
            String inferred = field.uniqueType();
            if (!inferred.isBlank()) inferredTypeCounts.merge(inferred, 1, Integer::sum);
        }
        boolean hasOffsetZero = false;
        for (FieldEvidence field : evidence.fields.values()) {
            if (field.offset == 0) hasOffsetZero = true;
            int size = field.layoutSize();
            boolean consistent = field.compatibleWidths();
            boolean ownerVtable = field.offset == 0 && vtableType != null;
            String name = ownerVtable ? "vtable" :
                String.format("field_%04X", field.offset);
            String type = ownerVtable ? "pointer:" + vtableType :
                "/undefined" + size;
            // A constructor/vptr-store backed table is stronger evidence than a generic
            // fixed-offset pointee inferred from CALL [vptr+slot].
            String inferredType = ownerVtable ? type : field.uniqueType();
            boolean typeApply = !inferredType.isBlank() && typeLength(inferredType) == size;
            String suggestedName = field.uniqueName();
            if (suggestedName.isBlank() && !inferredType.isBlank() &&
                    inferredTypeCounts.getOrDefault(inferredType, 0) == 1)
                suggestedName = typeBasedName(inferredType);
            String nameConfidence = suggestedName.isBlank() ? "none" :
                field.nameCount(suggestedName) >= 2 ? "high" : "medium";
            // Names remain review-only.  A reviewer can change name_apply to 1 without
            // enabling or disabling the independently controlled type proposal.
            boolean nameApply = false;
            DataTypeComponent existing = field.offset <= Integer.MAX_VALUE ?
                structure.getComponentAt((int)field.offset) : null;
            boolean existingConcreteType = false;
            boolean generatedTypeRevision = false;
            String retiredDeprecatedInference = "";
            if (ownerVtable && existing != null && existing.getOffset() == field.offset &&
                    existing.getLength() == size) {
                String existingType = typeSpecification(existing.getDataType());
                existingConcreteType = !isUndefined(existing.getDataType());
                if (existing.getFieldName() != null && existingType.equals(type))
                    name = existing.getFieldName();
                if (existingType.equals(type)) typeApply = false;
                else if (isOwnedUnchangedCandidate(structure)) {
                    generatedTypeRevision = true;
                    typeApply = true;
                }
                else typeApply = false;
            }
            else if (existing != null && existing.getOffset() == field.offset &&
                    existing.getDataType() instanceof Enum && existing.getLength() == size &&
                    existing.getComment() != null &&
                    existing.getComment().contains(SWITCH_ENUM_MARKER)) {
                type = existing.getDataType().getPathName();
                if (existing.getFieldName() != null) name = existing.getFieldName();
                existingConcreteType = true;
                typeApply = false;
            }
            else if (existing != null && existing.getOffset() == field.offset &&
                    existing.getLength() == size && existing.getComment() != null &&
                    existing.getComment().contains(MARKER) &&
                    !isUndefined(existing.getDataType())) {
                type = typeSpecification(existing.getDataType());
                if (existing.getFieldName() != null) name = existing.getFieldName();
                existingConcreteType = true;
                if (isOwnedUnchangedCandidate(structure) && !inferredType.isBlank() &&
                        !inferredType.equals(type)) {
                    generatedTypeRevision = true;
                    typeApply = typeLength(inferredType) == size;
                }
                else if (isOwnedUnchangedCandidate(structure) && inferredType.isBlank()) {
                    retiredDeprecatedInference = deprecatedGeneratedInference(existing);
                    if (retiredDeprecatedInference.isBlank() && scalarTypeConflict(field))
                        retiredDeprecatedInference = "unresolved_scalar_domain";
                    if (!retiredDeprecatedInference.isBlank()) {
                        inferredType = "/undefined" + size;
                        typeApply = true;
                    }
                    else typeApply = false;
                }
                else typeApply = false;
            }
            if (!genericFieldName(name)) suggestedName = "";
            boolean apply = consistent && field.offset + size <= proposedSize;
            if (!apply) typeApply = false;
            String reason = !consistent ? "conflicting_access_widths=" + field.sizeText() :
                ownerVtable ? "owner_vtable_pointer" :
                field.thisAccesses == 0 && field.cfgRecovered == 0 && field.crossRecovered > 0 ?
                    "consistent_typed_class_pointer_access" :
                    "consistent_this_relative_access";
            if (field.sizes.size() > 1 && consistent)
                reason += "; compatible_subwidth_views=" + field.sizeText();
            if (generatedTypeRevision)
                reason += "; generated_concrete_type_revised=" + type + "->" + inferredType;
            else if (!retiredDeprecatedInference.isBlank())
                reason += "; deprecated_generated_type_reverted=" + type +
                    "; deprecated_source=" + retiredDeprecatedInference;
            else if (field.inferredTypes.size() > 1)
                reason += "; inferred_type_conflict=" + String.join("|", field.inferredTypes.keySet());
            else if (existingConcreteType && !inferredType.isBlank() &&
                    !inferredType.equals(type))
                reason += "; existing_concrete_type_preserved=" + type +
                    "; rejected_inference=" + inferredType;
            else if (existingConcreteType) reason += "; concrete_type_already_present";
            else if (typeApply) reason += "; unique_semantic_type_evidence";
            if (field.cfgRecovered > 0)
                reason += "; cfg_field_recovery=" + field.cfgRecovered;
            if (field.crossRecovered > 0)
                reason += "; typed_cross_class_recovery=" + field.crossRecovered;
            result.add(new FieldProposal(evidence.owner, field.offset, size, name, type,
                inferredType, typeApply, suggestedName, nameApply, field.typeEvidenceText(),
                field.nameEvidenceText(), !retiredDeprecatedInference.isBlank() ? "repair" :
                    typeApply ? "high" :
                    field.inferredTypes.size() > 1 ? "conflict" :
                    existingConcreteType ? "existing" : "none", nameConfidence,
                field.reads, field.writes, field.functions, apply,
                apply ? "high" : "conflict", reason));
        }
        disableDuplicateSuggestedNames(result);
        // A high-confidence owner vtable is direct layout evidence even when none of the
        // currently named methods happens to dereference [this] itself.
        if (!hasOffsetZero && vtableType != null && proposedSize >= 4) {
            result.add(new FieldProposal(evidence.owner, 0, 4, "vtable",
                "pointer:" + vtableType, "", false, "", false, "", "",
                "existing", "none", 0, 0, Set.of(), true, "high",
                "owner_vtable_pointer"));
        }
        result.sort(Comparator.comparingLong(field -> field.offset));
        return result;
    }

    private void disableDuplicateSuggestedNames(List<FieldProposal> fields) {
        Map<String, Integer> counts = new HashMap<>();
        for (FieldProposal field : fields) {
            if (!field.suggestedName.isBlank())
                counts.merge(field.suggestedName, 1, Integer::sum);
        }
        for (FieldProposal field : fields) {
            if (!field.suggestedName.isBlank() &&
                    counts.getOrDefault(field.suggestedName, 0) > 1) {
                field.nameApply = false;
                field.suggestedName = "";
                field.nameConfidence = "conflict";
                field.reason += "; duplicate_suggested_field_name";
            }
        }
    }

    private int typeLength(String specification) {
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }

    private String typeBasedName(String specification) {
        String path = specification.startsWith("pointer:") ?
            specification.substring("pointer:".length()) : specification;
        String leaf = path.substring(path.lastIndexOf('/') + 1);
        if (path.matches("(?i).*(?:windef|winnt|windows)\\.h/.*") ||
                leaf.matches("[A-Z0-9_]+")) return "";
        if (Set.of("char", "byte", "short", "ushort", "int", "uint", "longlong",
                "ulonglong", "float", "double", "void").contains(leaf)) return "";
        leaf = leaf.replaceFirst("(?i)Ty$", "").replaceFirst("C$", "");
        return cleanFieldName(leaf);
    }

    private boolean genericFieldName(String value) {
        return value == null || value.isBlank() || value.equals("vtable") ||
            value.matches("(?i)field_[0-9a-f]+");
    }

    private boolean isUndefined(DataType type) {
        return type.getPathName().matches("/undefined(?:1|2|4|8)?");
    }

    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type.getPathName();
    }

    private void markOverlaps(List<FieldProposal> fields) {
        for (int left = 0; left < fields.size(); left++) {
            FieldProposal a = fields.get(left);
            if (!a.apply) continue;
            for (int right = left + 1; right < fields.size(); right++) {
                FieldProposal b = fields.get(right);
                if (b.offset >= a.offset + a.size) break;
                if (!b.apply || a.offset == b.offset) continue;
                a.apply = false;
                b.apply = false;
                a.typeApply = false;
                b.typeApply = false;
                a.nameApply = false;
                b.nameApply = false;
                a.typeConfidence = b.typeConfidence = "conflict";
                a.confidence = b.confidence = "conflict";
                a.reason = "overlaps_field_" + String.format("%04X", b.offset);
                b.reason = "overlaps_field_" + String.format("%04X", a.offset);
            }
        }
    }

    private Map<String, Long> readClassSizes(Path path) throws Exception {
        Map<String, Long> result = new TreeMap<>();
        if (!Files.isRegularFile(path)) return result;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("owner") || !tsv.header.contains("size")) return result;
        for (Map<String, String> row : tsv.rows) {
            if (!enabled(row.get("apply"))) continue;
            result.put(unt(row.get("owner")), Long.parseLong(row.get("size")));
        }
        return result;
    }

    private Map<String, String> readVtableTypes(Path path) throws Exception {
        Map<String, String> result = new TreeMap<>();
        if (!Files.isRegularFile(path)) return result;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("owner") || !tsv.header.contains("proposed_name")) return result;
        for (Map<String, String> row : tsv.rows) {
            String owner = unt(row.get("owner")), name = unt(row.get("proposed_name"));
            if (owner.isBlank() || name.isBlank()) continue;
            DataType type = dataTypes.getDataType(
                "/SubmarineTitans/Recovered/VTables/" + name);
            if (type != null) result.putIfAbsent(owner, type.getPathName());
        }
        return result;
    }

    private String ownerOf(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator > 0) {
            String owner = qualified.substring(0, separator);
            String upper = owner.toUpperCase(Locale.ROOT);
            if (!owner.equals("Global") && !owner.startsWith("Library::") &&
                    !upper.contains(".DLL")) return owner;
        }
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter() || !(parameter.getDataType() instanceof Pointer pointer))
                continue;
            DataType pointed = pointer.getDataType();
            if (pointed != null && pointed instanceof Structure) return pointed.getName();
        }
        return "";
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private DataType findOwnerType(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure) return direct;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches) {
            if (match instanceof Structure &&
                    !match.getPathName().contains("/Recovered/VTables/")) return match;
        }
        return null;
    }

    private boolean isPlaceholder(Structure structure) {
        String description = structure.getDescription();
        return structure.getLength() <= 1 && structure.getNumDefinedComponents() == 0 &&
            (description == null || description.isBlank() ||
                description.contains("PlaceHolder Class Structure"));
    }

    private boolean isOwnedUnchangedCandidate(Structure structure) {
        String description = structure.getDescription();
        if (description == null || !description.contains(MARKER)) return false;
        String stored = storedLayoutHash(description);
        return stored != null && stored.equals(layoutHash(structure));
    }

    private String storedLayoutHash(String description) {
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
        int end = value.indexOf(';');
        if (end >= 0) value = value.substring(0, end);
        return value.matches("[0-9a-fA-F]{64}") ? value.toLowerCase(Locale.ROOT) : null;
    }

    private String layoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName())
                .append('|').append(component.getComment() == null ? "" :
                    component.getComment()).append('\n');
        }
        return sha256(layout.toString());
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
            throw new IllegalStateException(exception);
        }
    }

    private String deprecatedGeneratedInference(DataTypeComponent component) {
        String comment = component.getComment();
        if (comment == null || !comment.contains(MARKER)) return "";
        int marker = comment.indexOf("type_evidence=");
        if (marker < 0) return "";
        String evidence = comment.substring(marker);
        boolean deprecated = evidence.contains(" bitwise use establishes ") ||
            evidence.matches("(?s).*\\s(?:AND|OR|XOR|TEST)\\s.*");
        boolean independentlyTyped = evidence.contains(" CMP/") ||
            evidence.contains(" SHR ") || evidence.contains(" DIV ") ||
            evidence.contains(" IDIV ") || evidence.contains("typed receiver") ||
            evidence.contains("typed pointer assignment") ||
            evidence.contains("parameter ") || evidence.contains(" return from ");
        if (deprecated && !independentlyTyped) return "bitwise_signedness";
        boolean propagation = evidence.contains("exact field-to-field MOV propagation");
        String withoutPropagation = evidence.replaceAll(
            "(?i)[^|;]*exact field-to-field MOV propagation", "").
            replace("type_evidence=", "").replace("|", "").replace(";", "").trim();
        if (propagation && withoutPropagation.isBlank()) return "bidirectional_mov_propagation";
        return "";
    }

    private boolean scalarTypeConflict(FieldEvidence field) {
        if (field.inferredTypes.size() < 2) return false;
        return field.inferredTypes.keySet().stream().allMatch(type -> Set.of(
            "/char", "/byte", "/short", "/ushort", "/int", "/uint",
            "/longlong", "/ulonglong").contains(type));
    }

    private void updateRegisters(ClassEvidence owner, Function function, String mnemonic,
            String[] operands, Map<String, RegisterValue> registers,
            Map<Long, RegisterValue> stackValues, Set<Long> stableThisSlots) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            String sourceRegister = cleanRegister(operands[1]);
            if (sourceRegister != null) {
                RegisterValue source = isFullRegister(operands[1]) ?
                    registers.get(sourceRegister) : null;
                if (source == null) registers.remove(destination);
                else registers.put(destination, source);
                return;
            }
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            RegisterValue base = sourceMemory == null ? null : registers.get(sourceMemory.register);
            if (base != null && base.kind == ValueKind.THIS_ADDRESS) {
                registers.put(destination, RegisterValue.fieldValue(
                    base.offset + sourceMemory.displacement));
            }
            else if (sourceMemory != null && "EBP".equals(sourceMemory.register)) {
                RegisterValue source = stableThisSlots.contains(sourceMemory.displacement) ?
                    RegisterValue.thisAddress(0) : stackValues.get(sourceMemory.displacement);
                if (source == null) registers.remove(destination);
                else registers.put(destination, source);
            }
            else registers.remove(destination);
            return;
        }
        if ("MOV".equals(mnemonic) && destination == null && operands.length >= 2) {
            MemoryExpr destinationMemory = memoryExpr(operands[0]);
            RegisterValue base = destinationMemory == null ? null :
                registers.get(destinationMemory.register);
            String sourceRegister = cleanRegister(operands[1]);
            RegisterValue source = sourceRegister == null || !isFullRegister(operands[1]) ? null :
                registers.get(sourceRegister);
            if (destinationMemory != null && "EBP".equals(destinationMemory.register)) {
                if (stableThisSlots.contains(destinationMemory.displacement))
                    stackValues.put(destinationMemory.displacement,
                        RegisterValue.thisAddress(0));
                else if (source == null) stackValues.remove(destinationMemory.displacement);
                else stackValues.put(destinationMemory.displacement, source);
                return;
            }
            if (base != null && base.kind == ValueKind.THIS_ADDRESS && source != null &&
                    source.kind == ValueKind.TYPED_VALUE) {
                long offset = base.offset + destinationMemory.displacement;
                FieldEvidence target = field(owner, offset);
                String evidence = addr(function.getEntryPoint()) + " [this+" + hex(offset) +
                    "] assigned " + source.evidence;
                if (!source.type.isBlank()) target.addType(source.type, evidence);
                if (!source.name.isBlank()) target.addName(source.name, evidence);
            }
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            MemoryExpr sourceMemory = memoryExpr(operands[1]);
            RegisterValue source = sourceMemory == null ? null : registers.get(sourceMemory.register);
            if (source == null || source.kind != ValueKind.THIS_ADDRESS)
                registers.remove(destination);
            else registers.put(destination,
                RegisterValue.thisAddress(source.offset + sourceMemory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && destination != null &&
                registers.containsKey(destination) && operands.length >= 2) {
            RegisterValue original = registers.get(destination);
            Long value = immediate(operands[1]);
            if (value != null && original.kind == ValueKind.FIELD_VALUE) {
                // Keep datatype provenance through a simple scalar adjustment.  The
                // address is no longer exact, but a following signed/unsigned CMP still
                // describes the source field's integer domain.
                registers.put(destination, original);
            }
            else if (value == null || original.kind != ValueKind.THIS_ADDRESS)
                registers.remove(destination);
            else registers.put(destination, RegisterValue.thisAddress(original.offset +
                ("SUB".equals(mnemonic) ? -value : value)));
            return;
        }
        if (("INC".equals(mnemonic) || "DEC".equals(mnemonic)) && destination != null &&
                registers.get(destination) != null &&
                registers.get(destination).kind == ValueKind.FIELD_VALUE) return;
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private boolean meaningfulParameterName(String value) {
        if (value == null || value.isBlank()) return false;
        return value.matches("[A-Za-z_][A-Za-z0-9_]*") &&
            !value.matches("(?i)(?:this|param_?\\d+|arg_?\\d+|unknown_?.*|value|data|ptr|p)");
    }

    private static String addr(Address address) {
        return address.toString().toUpperCase(Locale.ROOT);
    }

    private static String hex(long value) {
        return String.format("0x%X", value);
    }

    private boolean isWriteMnemonic(String mnemonic) {
        return !Set.of("CMP", "TEST", "PUSH", "CALL", "JMP", "LEA").contains(mnemonic);
    }

    private int accessSize(String text, String[] operands) {
        if (text.contains("QWORD PTR")) return 8;
        if (text.contains("DWORD PTR")) return 4;
        if (text.contains("WORD PTR")) return 2;
        if (text.contains("BYTE PTR")) return 1;
        for (String operand : operands) {
            String register = operand.trim().toUpperCase(Locale.ROOT);
            if (!REGISTER.matcher(register).matches()) continue;
            if (Set.of("AL", "AH", "BL", "BH", "CL", "CH", "DL", "DH").contains(register))
                return 1;
            if (Set.of("AX", "BX", "CX", "DX", "SI", "DI", "BP", "SP").contains(register))
                return 2;
            if (register.startsWith("E")) return 4;
            if (register.startsWith("R")) return 8;
        }
        return 4;
    }

    private String[] splitOperands(String text) {
        int space = text.indexOf(' ');
        if (space < 0) return new String[0];
        String value = text.substring(space + 1).trim();
        return value.isEmpty() ? new String[0] : value.split("\\s*,\\s*", -1);
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String expression = operand.substring(open, close + 1).replace(" ", "")
            .replace("+-", "-").replace("-+", "-");
        Matcher matcher = MEMORY.matcher(expression);
        if (!matcher.matches()) return null; // Indexed accesses are deliberately excluded.
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : signed32(parsed);
        }
        return new MemoryExpr(canonicalRegister(matcher.group(1)), displacement);
    }

    private String cleanRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return REGISTER.matcher(value).matches() ? canonicalRegister(value) : null;
    }
    private String canonicalRegister(String register) {
        return switch (register.toUpperCase(Locale.ROOT)) {
            case "AL", "AH", "AX", "EAX", "RAX" -> "EAX";
            case "BL", "BH", "BX", "EBX", "RBX" -> "EBX";
            case "CL", "CH", "CX", "ECX", "RCX" -> "ECX";
            case "DL", "DH", "DX", "EDX", "RDX" -> "EDX";
            case "SI", "ESI", "RSI" -> "ESI"; case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP"; case "SP", "ESP", "RSP" -> "ESP";
            default -> register.toUpperCase(Locale.ROOT);
        };
    }
    private boolean isFullRegister(String operand) {
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP")
            .contains(operand.trim().toUpperCase(Locale.ROOT));
    }

    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException exception) { return null; }
        return null;
    }

    private long signed32(long value) {
        return value <= 0xffffffffL && (value & 0x80000000L) != 0 ? value - 0x100000000L : value;
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (Files.isRegularFile(path.resolve("vtable_proposals.tsv")) ||
                Files.isRegularFile(path.resolve("constructor_class_sizes.tsv"))) return path;
        return path.resolve(safe(currentProgram.getName()));
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Analyze class layouts");
    }

    private void writeClasses(Path path, List<ClassProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\ttype_path\texisting_length\tobserved_min_size\t" +
                "exact_allocation_size\tproposed_length\tfield_count\tauto_field_count\t" +
                "confidence\treason\tevidence_functions\n");
            for (ClassProposal row : rows) out.write(bit(row.apply) + "\t" + tsv(row.owner) +
                "\t" + tsv(row.typePath) + "\t" + row.existingLength + "\t" +
                row.observedSize + "\t" + (row.exactSize < 0 ? "" : row.exactSize) + "\t" +
                row.proposedLength + "\t" + row.fieldCount + "\t" + row.autoFieldCount +
                "\t" + row.confidence + "\t" + row.reason + "\t" +
                tsv(String.join(" | ", row.functions)) + "\n");
        }
    }

    private void writeFields(Path path, List<FieldProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\toffset\toffset_hex\tsize\tproposed_name\t" +
                "proposed_type\ttype_apply\tinferred_type\tsuggested_name\tname_apply\t" +
                "type_confidence\tname_confidence\ttype_evidence\tname_evidence\t" +
                "reads\twrites\tconfidence\treason\t" +
                "evidence_functions\n");
            for (FieldProposal row : rows) out.write(bit(row.apply) + "\t" + tsv(row.owner) +
                "\t" + row.offset + "\t" + String.format("0x%X", row.offset) + "\t" +
                row.size + "\t" + row.name + "\t" + tsv(row.type) + "\t" +
                bit(row.typeApply) + "\t" + tsv(row.inferredType) + "\t" +
                tsv(row.suggestedName) + "\t" + bit(row.nameApply) + "\t" +
                row.typeConfidence + "\t" + row.nameConfidence + "\t" +
                tsv(row.typeEvidence) + "\t" + tsv(row.nameEvidence) + "\t" + row.reads +
                "\t" + row.writes + "\t" + row.confidence + "\t" + row.reason + "\t" +
                tsv(String.join(" | ", row.functions)) + "\n");
        }
    }

    private void writeNestedTypes(Path path, List<NestedTypeProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\tparent_offset\ttype_path\tlength\tfield_count\t" +
                "access_count\tconfidence\treason\n");
            for (NestedTypeProposal row : rows) out.write(bit(row.apply) + "\t" +
                tsv(row.owner) + "\t" + row.parentOffset + "\t" + tsv(row.typePath) +
                "\t" + row.length + "\t" + row.fieldCount + "\t" + row.accessCount +
                "\t" + (row.apply ? "layout" : "review") + "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeNestedFields(Path path, List<NestedFieldProposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\ttype_path\toffset\tsize\tproposed_name\tproposed_type\t" +
                "evidence_count\treason\n");
            for (NestedFieldProposal row : rows) out.write(bit(row.apply) + "\t" +
                tsv(row.typePath) + "\t" + row.offset + "\t" + row.size + "\t" +
                row.name + "\t" + tsv(row.type) + "\t" + row.evidenceCount + "\t" +
                tsv(row.reason) + "\n");
        }
    }

    private void writeSummary(Path path, List<ClassProposal> classes, List<FieldProposal> fields,
            List<NestedTypeProposal> nestedTypes) throws Exception {
        Set<String> applicableOwners = new TreeSet<>();
        for (ClassProposal row : classes) if (row.apply) applicableOwners.add(row.owner);
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "classes_with_this_accesses=" + classes.size(),
            "class_auto_apply=" + classes.stream().filter(row -> row.apply).count(),
            "field_proposals=" + fields.size(),
            "field_auto_apply=" + fields.stream().filter(row -> row.apply).count(),
            "field_effective_auto_apply=" + fields.stream()
                .filter(row -> row.apply && applicableOwners.contains(row.owner)).count(),
            "field_conflicts=" + fields.stream().filter(row -> !row.apply).count(),
            "field_type_auto_apply=" + fields.stream()
                .filter(row -> row.typeApply && applicableOwners.contains(row.owner)).count(),
            "field_name_auto_apply=" + fields.stream().filter(row -> row.nameApply).count(),
            "field_name_suggestions=" + fields.stream()
                .filter(row -> !row.suggestedName.isBlank()).count(),
            "field_name_applicable_suggestions=" + fields.stream()
                .filter(row -> !row.suggestedName.isBlank() && row.apply &&
                    applicableOwners.contains(row.owner)).count(),
            "field_scalar_type_auto_apply=" + fields.stream()
                .filter(row -> row.typeApply && applicableOwners.contains(row.owner) &&
                    !row.inferredType.startsWith("pointer:"))
                .count(),
            "field_pointer_type_auto_apply=" + fields.stream()
                .filter(row -> row.typeApply && applicableOwners.contains(row.owner) &&
                    row.inferredType.startsWith("pointer:"))
                .count(),
            "field_type_conflicts=" + fields.stream()
                .filter(row -> row.reason.contains("inferred_type_conflict")).count(),
            "field_existing_type_conflicts=" + fields.stream()
                .filter(row -> row.reason.contains("rejected_inference=")).count(),
            "field_generated_type_revisions=" + fields.stream()
                .filter(row -> row.reason.contains("generated_concrete_type_revised=")).count(),
            "field_deprecated_type_repairs=" + fields.stream()
                .filter(row -> row.reason.contains("deprecated_generated_type_reverted=")).count(),
            "cross_typed_field_accesses=" + crossTypedFieldAccesses,
            "cross_field_type_links=" + crossTypeLinks,
            "nested_pointee_types=" + nestedTypes.size(),
            "nested_pointee_type_auto_apply=" + nestedTypes.stream()
                .filter(row -> row.apply).count(),
            "note=Only exact register-plus-constant accesses derived from incoming ECX, " +
                "or from an existing typed class pointer, are used.",
            "note_types=Types require one unambiguous typed receiver/argument/return, " +
                "sign-extension, or x87 memory-use flow with an exactly matching width.",
            "note_names=Names are review-only (name_apply=0); suggestions come from typed " +
                "parameters, unique accessors/producers, or a unique user-defined field type.",
            "note_manual=Non-placeholder structures and generated structures whose current layout " +
                "cannot be verified are never auto-applied."), StandardCharsets.UTF_8);
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length) continue;
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private static String leaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') result.append('\t');
                else if (ch == 'r') result.append('\r');
                else if (ch == 'n') result.append('\n');
                else result.append(ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class MemoryExpr {
        final String register;
        final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private enum ValueKind { THIS_ADDRESS, FIELD_VALUE, TYPED_VALUE, UNKNOWN }
    private static class RegisterValue {
        final ValueKind kind;
        final long offset;
        final String type, name, evidence;
        RegisterValue(ValueKind kind, long offset, String type, String name, String evidence) {
            this.kind = kind; this.offset = offset; this.type = type; this.name = name;
            this.evidence = evidence;
        }
        static RegisterValue thisAddress(long offset) {
            return new RegisterValue(ValueKind.THIS_ADDRESS, offset, "", "", "");
        }
        static RegisterValue fieldValue(long offset) {
            return new RegisterValue(ValueKind.FIELD_VALUE, offset, "", "", "");
        }
        static RegisterValue typedValue(String type, String name, String evidence) {
            return new RegisterValue(ValueKind.TYPED_VALUE, 0, type, name, evidence);
        }
    }
    private static class PushEvidence {
        final ValueKind kind;
        final long offset;
        PushEvidence(ValueKind kind, long offset) { this.kind = kind; this.offset = offset; }
        static PushEvidence from(RegisterValue value) {
            return value == null ? unknown() : new PushEvidence(value.kind, value.offset);
        }
        static PushEvidence unknown() { return new PushEvidence(ValueKind.UNKNOWN, 0); }
    }
    private static class ClassEvidence {
        final String owner;
        final Map<Long, FieldEvidence> fields = new TreeMap<>();
        final Set<String> functions = new TreeSet<>();
        ClassEvidence(String owner) { this.owner = owner; }
    }
    private static class FunctionFieldAccess {
        int reads, writes;
    }
    private static class CfgBlock {
        final Address start;
        final List<Instruction> instructions = new ArrayList<>();
        final Set<Address> predecessors = new TreeSet<>();
        final Set<Address> successors = new TreeSet<>();
        CfgBlock(Address start) { this.start = start; }
    }
    private static class CfgFieldAccess {
        final long offset;
        final Map<Integer, Integer> sizes = new TreeMap<>();
        final List<CfgSite> sites = new ArrayList<>();
        int reads, writes, bitwiseUses;
        CfgFieldAccess(long offset) { this.offset = offset; }
    }
    private static class CfgSite {
        final Instruction instruction;
        final String mnemonic;
        final int size;
        final int operandIndex;
        final boolean write;
        CfgSite(Instruction instruction, String mnemonic, int size, int operandIndex,
                boolean write) {
            this.instruction = instruction;
            this.mnemonic = mnemonic;
            this.size = size;
            this.operandIndex = operandIndex;
            this.write = write;
        }
    }
    private enum CrossKind { ADDRESS, FIELD, POINTER_FIELD, GENERIC_POINTER }
    private static class CrossValue {
        final CrossKind kind;
        final String ownerPath;
        final long offset;
        CrossValue(CrossKind kind, String ownerPath, long offset) {
            this.kind = kind; this.ownerPath = ownerPath; this.offset = offset;
        }
        static CrossValue address(String ownerPath, long offset) {
            return new CrossValue(CrossKind.ADDRESS, ownerPath, offset);
        }
        static CrossValue field(String ownerPath, long offset) {
            return new CrossValue(CrossKind.FIELD, ownerPath, offset);
        }
        static CrossValue pointerField(String ownerPath, long offset) {
            return new CrossValue(CrossKind.POINTER_FIELD, ownerPath, offset);
        }
        static CrossValue genericPointer(String pointedPath) {
            return new CrossValue(CrossKind.GENERIC_POINTER, pointedPath, 0);
        }
        @Override public boolean equals(Object other) {
            if (!(other instanceof CrossValue value)) return false;
            return kind == value.kind && offset == value.offset &&
                ownerPath.equals(value.ownerPath);
        }
        @Override public int hashCode() {
            return 31 * (31 * kind.hashCode() + ownerPath.hashCode()) + Long.hashCode(offset);
        }
    }
    private static class CrossState {
        final Map<String, CrossValue> registers = new HashMap<>();
        final Map<Long, CrossValue> stack = new HashMap<>();
        CrossState copy() {
            CrossState result = new CrossState();
            result.registers.putAll(registers); result.stack.putAll(stack);
            return result;
        }
        @Override public boolean equals(Object other) {
            if (!(other instanceof CrossState state)) return false;
            return registers.equals(state.registers) && stack.equals(state.stack);
        }
        @Override public int hashCode() {
            return 31 * registers.hashCode() + stack.hashCode();
        }
    }
    private record CrossOwner(Structure structure, ClassEvidence evidence) { }
    private record FieldLink(String leftOwner, long leftOffset, String rightOwner,
        long rightOffset, String site) { }
    private static class FieldEvidence {
        final long offset;
        final Map<Integer, Integer> sizes = new TreeMap<>();
        final Set<String> functions = new TreeSet<>();
        final Map<String, Set<String>> inferredTypes = new TreeMap<>();
        final Map<String, Set<String>> inferredNames = new TreeMap<>();
        final Map<Long, PointeeFieldEvidence> pointeeFields = new TreeMap<>();
        int reads, writes, pointerUses, thisAccesses, cfgRecovered, crossRecovered, bitwiseUses;
        FieldEvidence(long offset) { this.offset = offset; }
        void addType(String type, String evidence) {
            if ("pointer:/void".equals(type) && inferredTypes.keySet().stream()
                    .anyMatch(value -> value.startsWith("pointer:") &&
                        !value.equals("pointer:/void"))) return;
            if (type.startsWith("pointer:") && !type.equals("pointer:/void"))
                inferredTypes.remove("pointer:/void");
            inferredTypes.computeIfAbsent(type, ignored -> new TreeSet<>()).add(evidence);
        }
        void addName(String name, String evidence) {
            inferredNames.computeIfAbsent(name, ignored -> new TreeSet<>()).add(evidence);
        }
        String uniqueType() {
            if (inferredTypes.size() == 1) return inferredTypes.keySet().iterator().next();
            List<String> namedPointers = inferredTypes.keySet().stream()
                .filter(type -> type.startsWith("pointer:") &&
                    !type.contains("/Recovered/ClassPointees/") &&
                    !type.contains("/Recovered/PointerShapes/") &&
                    !type.equals("pointer:/void"))
                .toList();
            boolean pointerAlternativesOnly = inferredTypes.keySet().stream().allMatch(type ->
                type.startsWith("pointer:"));
            return pointerAlternativesOnly && namedPointers.size() == 1 ?
                namedPointers.get(0) : "";
        }
        Set<String> directTypes() {
            Set<String> result = new TreeSet<>();
            for (Map.Entry<String, Set<String>> entry : inferredTypes.entrySet())
                if (entry.getValue().stream().anyMatch(value ->
                        !value.contains("exact field-to-field MOV propagation")))
                    result.add(entry.getKey());
            return result;
        }
        String resolvedPropagationType() {
            Set<String> direct = directTypes();
            if (direct.size() == 1) return direct.iterator().next();
            return direct.isEmpty() && inferredTypes.size() == 1 ?
                inferredTypes.keySet().iterator().next() : "";
        }
        String uniqueName() {
            return inferredNames.size() == 1 ? inferredNames.keySet().iterator().next() : "";
        }
        int nameCount(String name) {
            return inferredNames.getOrDefault(name, Set.of()).size();
        }
        String typeEvidenceText() { return evidenceText(inferredTypes); }
        String nameEvidenceText() { return evidenceText(inferredNames); }
        private String evidenceText(Map<String, Set<String>> values) {
            List<String> result = new ArrayList<>();
            for (Map.Entry<String, Set<String>> entry : values.entrySet())
                result.add(entry.getKey() + " <= " + String.join("; ", entry.getValue()));
            return String.join(" | ", result);
        }
        int dominantSize() {
            return sizes.entrySet().stream().max(Comparator
                .<Map.Entry<Integer, Integer>>comparingInt(Map.Entry::getValue)
                .thenComparingInt(Map.Entry::getKey)).map(Map.Entry::getKey).orElse(1);
        }
        int layoutSize() {
            return compatibleWidths() ? maximumSize() : dominantSize();
        }
        boolean compatibleWidths() {
            int maximum = maximumSize();
            return sizes.keySet().stream().allMatch(size -> size > 0 &&
                size <= maximum && maximum % size == 0);
        }
        int maximumSize() { return sizes.keySet().stream().mapToInt(Integer::intValue).max().orElse(1); }
        String sizeText() {
            List<String> result = new ArrayList<>();
            for (Map.Entry<Integer, Integer> entry : sizes.entrySet())
                result.add(entry.getKey() + "x" + entry.getValue());
            return String.join("|", result);
        }
    }
    private static class PointeeFieldEvidence {
        final long offset;
        final Map<Integer, Integer> sizes = new TreeMap<>();
        final Set<String> sites = new TreeSet<>();
        int reads, writes;
        PointeeFieldEvidence(long offset) { this.offset = offset; }
        int uniqueSize() {
            return sizes.size() == 1 ? sizes.keySet().iterator().next() : -1;
        }
    }
    private static class NestedTypeProposal {
        boolean apply;
        final String owner, typePath, reason;
        final long parentOffset;
        final int length, fieldCount, accessCount;
        NestedTypeProposal(boolean apply, String owner, long parentOffset, String typePath,
                int length, int fieldCount, int accessCount, String reason) {
            this.apply = apply; this.owner = owner; this.parentOffset = parentOffset;
            this.typePath = typePath; this.length = length; this.fieldCount = fieldCount;
            this.accessCount = accessCount; this.reason = reason;
        }
    }
    private static class NestedFieldProposal {
        boolean apply;
        final String typePath, name, type, reason;
        final long offset;
        final int size, evidenceCount;
        NestedFieldProposal(boolean apply, String typePath, long offset, int size,
                String name, String type, int evidenceCount, String reason) {
            this.apply = apply; this.typePath = typePath; this.offset = offset;
            this.size = size; this.name = name; this.type = type;
            this.evidenceCount = evidenceCount; this.reason = reason;
        }
    }
    private static class ClassProposal {
        final String owner, typePath, confidence, reason;
        final long existingLength, observedSize, exactSize, proposedLength, fieldCount,
            autoFieldCount;
        final boolean apply;
        final Set<String> functions;
        ClassProposal(String owner, String typePath, long existingLength, long observedSize,
                long exactSize, long proposedLength, long fieldCount, long autoFieldCount,
                boolean apply, String confidence, String reason, Set<String> functions) {
            this.owner = owner; this.typePath = typePath; this.existingLength = existingLength;
            this.observedSize = observedSize; this.exactSize = exactSize;
            this.proposedLength = proposedLength; this.fieldCount = fieldCount;
            this.autoFieldCount = autoFieldCount; this.apply = apply;
            this.confidence = confidence; this.reason = reason;
            this.functions = new TreeSet<>(functions);
        }
    }
    private static class FieldProposal {
        final String owner, name, type, inferredType, typeEvidence, nameEvidence;
        String suggestedName, typeConfidence, nameConfidence;
        final long offset;
        final int size, reads, writes;
        final Set<String> functions;
        boolean apply, typeApply, nameApply;
        String confidence, reason;
        FieldProposal(String owner, long offset, int size, String name, String type,
                String inferredType, boolean typeApply, String suggestedName,
                boolean nameApply, String typeEvidence, String nameEvidence,
                String typeConfidence, String nameConfidence, int reads, int writes,
                Set<String> functions, boolean apply, String confidence, String reason) {
            this.owner = owner; this.offset = offset; this.size = size; this.name = name;
            this.type = type; this.inferredType = inferredType; this.typeApply = typeApply;
            this.suggestedName = suggestedName; this.nameApply = nameApply;
            this.typeEvidence = typeEvidence; this.nameEvidence = nameEvidence;
            this.typeConfidence = typeConfidence; this.nameConfidence = nameConfidence;
            this.reads = reads; this.writes = writes;
            this.functions = new TreeSet<>(functions); this.apply = apply;
            this.confidence = confidence; this.reason = reason;
        }
    }
}
