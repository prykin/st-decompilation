// Recover x86 ABI details which are visible in machine code but easy to lose in propagated C types.
// Read-only: writes abi_consistency_proposals.tsv and abi_consistency_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze ABI Consistency

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.SourceType;

public class STAbiConsistencyAnalyzer extends GhidraScript {
    private static final int CALL_USE_SCAN_LIMIT = 8;
    private static final int POINTER_RETURN_SCAN_LIMIT = 32;
    private static final int RETURN_DEFINITION_SCAN_LIMIT = 12;
    private static final int PARAMETER_MASK_SCAN_LIMIT = 8;
    private static final Pattern STACK_MEMORY = Pattern.compile(
        "^\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern BASE_MEMORY = Pattern.compile(
        ".*\\[(EAX|EBX|ECX|EDX|ESI|EDI|EBP|ESP)" +
        "(?:\\s*([+-])\\s*(0X[0-9A-F]+|[0-9]+))?\\].*");

    private Listing listing;
    private int pointerSize;
    private final Map<Address, ReturnUse> returnUses = new TreeMap<>();
    private final Map<Address, PointerElementEvidence> pointerReturnElements =
        new TreeMap<>();
    private final List<ScalarAuditRow> scalarAudit = new ArrayList<>();

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
        listing = currentProgram.getListing();
        pointerSize = currentProgram.getDefaultPointerSize();

        collectReturnUses();
        List<Row> rows = new ArrayList<>();
        addKnownRepairs(rows);

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int functionsSeen = 0;
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isExternal() || function.isThunk() || isLibrary(function)) continue;
            functionsSeen++;
            // A full prototype rewrite changes ordinals.  Do not emit stale
            // per-parameter rows for the same baseline in this pass.
            if (addX87DoubleParameterRepair(function, rows)) continue;
            addReturnWidthRepair(function, rows);
            addParameterWidthRepairs(function, rows);
            addParameterScalarRoleRepairs(function, rows);
            addPointerReturnElementRepair(function, rows);
        }
        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.targetKind)
            .thenComparingInt(row -> row.targetOrdinal));

        writeRows(directory.resolve("abi_consistency_proposals.tsv"), rows);
        writeScalarAudit(directory.resolve("abi_consistency_scalar_audit.tsv"));
        writeSummary(directory.resolve("abi_consistency_summary.txt"), functionsSeen, rows);
        println("ABI consistency analysis complete: " + directory.toAbsolutePath().normalize());
        println("Proposals=" + rows.size() + ", automatic=" +
            rows.stream().filter(row -> row.apply).count());
    }

    private void collectReturnUses() throws Exception {
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            monitor.checkCancelled();
            Function caller = callers.next();
            if (caller.isExternal()) continue;
            InstructionIterator instructions = listing.getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction call = instructions.next();
                if (!"CALL".equalsIgnoreCase(call.getMnemonicString())) continue;
                Function called = directCalledFunction(call);
                if (called == null) continue;
                called = resolveThunk(called);
                if (called == null) continue;
                if (genericPointer(called.getReturn().getFormalDataType())) {
                    PointerElementEvidence pointerEvidence =
                        pointerReturnElements.computeIfAbsent(called.getEntryPoint(),
                            ignored -> new PointerElementEvidence());
                    scanReturnedPointerUse(caller, call, pointerEvidence);
                }
                RegisterUse use = firstAccumulatorUse(caller, call);
                if (use.width == 0) continue;
                ReturnUse aggregate = returnUses.computeIfAbsent(called.getEntryPoint(),
                    ignored -> new ReturnUse());
                if (use.width >= 4) aggregate.full++;
                else aggregate.narrow++;
                if (aggregate.sites.size() < 24)
                    aggregate.sites.add(addr(caller.getEntryPoint()) + " @ " +
                        addr(call.getAddress()) + " -> " + use.evidence);
            }
        }
    }

    private RegisterUse firstAccumulatorUse(Function caller, Instruction call) {
        Instruction instruction = listing.getInstructionAfter(call.getAddress());
        for (int count = 0; count < CALL_USE_SCAN_LIMIT && instruction != null &&
                caller.getBody().contains(instruction.getAddress()); count++) {
            int input = accumulatorWidth(instruction.getInputObjects());
            if (input > 0)
                return new RegisterUse(input, instruction.getMnemonicString().toUpperCase(Locale.ROOT) +
                    " " + instruction.toString());
            if (accumulatorWidth(instruction.getResultObjects()) > 0 ||
                    "CALL".equalsIgnoreCase(instruction.getMnemonicString())) break;
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return new RegisterUse(0, "");
    }

    private int accumulatorWidth(Object[] objects) {
        int width = 0;
        for (Object object : objects) {
            if (!(object instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (name.equals("EAX") || name.equals("RAX")) width = Math.max(width, 4);
            else if (name.equals("AX")) width = Math.max(width, 2);
            else if (name.equals("AL") || name.equals("AH")) width = Math.max(width, 1);
        }
        return width;
    }

    private void addKnownRepairs(List<Row> rows) throws Exception {
        Function setjmp = uniqueNamedFunction("__setjmp3");
        if (setjmp != null && !matchesFullPrototype(setjmp, "/int", "__cdecl", true,
                List.of("pointer:/int", "/int"))) {
            rows.add(Row.full(setjmp, "known_setjmp3", true, "/int", "__cdecl", true,
                "pointer:/int;/int", "env;count", "high",
                "MSVC _setjmp3 has two fixed arguments followed by optional unwind metadata; " +
                "call sites push env and count only"));
        }

        Function loadString = uniqueTaggedFunction(
            "RECOVERED_UTILITY_LOAD_RESOURCE_STRING");
        if (loadString != null && !"pointer:/char".equals(typeSpec(loadString.getReturnType()))) {
            int callers = loadString.getCallingFunctions(monitor).size();
            rows.add(Row.target(loadString, "known_load_resource_string", true, "return", -1,
                loadString.getReturn(), "", "pointer:/char", "high",
                "the helper computes the ring-buffer address in EAX and callers consume that " +
                "address immediately; observed callers=" + callers));
        }
    }

    private void addReturnWidthRepair(Function function, List<Row> rows) {
        Parameter returned = function.getReturn();
        if (manual(returned.getSource()) || hasTag(function, "RECOVERED_ABI_CONSISTENCY")) return;
        DataType current = unwrap(returned.getDataType());
        if (current == null || current.getLength() < 1 || current.getLength() >= 4 ||
                current instanceof Pointer) return;
        ReturnUse use = returnUses.get(function.getEntryPoint());
        if (use == null || use.full == 0 || use.narrow != 0 || !allReturnsDefineFullAccumulator(function))
            return;
        if (!(current instanceof AbstractIntegerDataType) &&
                !current.getName().equalsIgnoreCase("bool")) return;
        rows.add(Row.target(function, "full_eax_return", true, "return", -1, returned,
            "", "/int", "high", "all observed callers consume full EAX (" + use.full +
            "), none consume AL/AX, and every RET path defines full EAX; sites=" +
            String.join(" | ", use.sites)));
    }

    /**
     * Recover double parameters from the physical x87 operand width.  Old
     * prototypes often split one eight-byte ABI slot into two undefined4/int
     * parameters, which makes every caller print the low/high IEEE-754 halves.
     * An exact `double ptr [EBP+positive_offset]` access proves both the width
     * and the slot boundary, so adjacent generic dwords may be merged without
     * guessing from constants or names.
     */
    private boolean addX87DoubleParameterRepair(Function function, List<Row> rows)
            throws Exception {
        boolean scriptOwnedX87 = scriptOwnedX87Prototype(function);
        if (pointerSize != 4 || function.hasVarArgs() ||
                !scriptOwnedX87 && (manual(function.getSignatureSource()) ||
                    manual(function.getReturn().getSource()))) return false;
        List<Parameter> parameters = explicitParameters(function).stream()
            .sorted(Comparator.comparingInt(Parameter::getOrdinal)).toList();
        if (parameters.isEmpty() || !scriptOwnedX87 &&
                parameters.stream().anyMatch(parameter -> manual(parameter.getSource())))
            return false;

        List<ParameterSlot> slots = new ArrayList<>();
        Map<Long, Integer> slotAt = new TreeMap<>();
        long frameOffset = pointerSize * 2L;
        for (int index = 0; index < parameters.size(); index++) {
            Parameter parameter = parameters.get(index);
            int span = parameterSpan(parameter);
            if (parameter.hasStackStorage()) {
                slots.add(new ParameterSlot(parameter, frameOffset, span));
                slotAt.put(frameOffset, index);
                frameOffset += span;
            }
            else {
                // Explicit ECX/EDX parameters in thiscall/fastcall consume no
                // incoming EBP stack slot.  Retain their prototype ordinal but
                // exclude them from the physical stack map.
                slots.add(new ParameterSlot(parameter, -1, span));
            }
        }

        Map<Long, List<String>> evidence = new TreeMap<>();
        Set<Long> writtenStackBytes = new HashSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (x87MemoryRead(mnemonic)) {
                for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                    String rendered = instruction.getDefaultOperandRepresentation(operand)
                        .toUpperCase(Locale.ROOT);
                    if (!rendered.contains("DOUBLE PTR") && !rendered.contains("QWORD PTR"))
                        continue;
                    Long offset = stackOffset(instruction, operand);
                    if (offset == null || offset < pointerSize * 2L ||
                            stackRangeWritten(writtenStackBytes, offset, 8)) continue;
                    evidence.computeIfAbsent(offset, ignored -> new ArrayList<>())
                        .add(addr(instruction.getAddress()) + " " + instruction);
                }
            }
            if (writesStackMemory(mnemonic) && instruction.getNumOperands() > 0) {
                Long offset = stackOffset(instruction, 0);
                int width = memoryWidth(
                    instruction.getDefaultOperandRepresentation(0));
                if (offset != null && width > 0)
                    for (int byteOffset = 0; byteOffset < width; byteOffset++)
                        writtenStackBytes.add(offset + byteOffset);
            }
        }
        Map<Long, List<String>> typedStores =
            typedDoubleStoreEvidence(function, slots);
        for (Map.Entry<Long, List<String>> entry : typedStores.entrySet())
            evidence.computeIfAbsent(entry.getKey(), ignored -> new ArrayList<>())
                .addAll(entry.getValue());
        if (evidence.isEmpty()) return false;

        // Retire x87 prototypes created with dynamic storage. On 32-bit x86
        // doubles are stack-aligned to four bytes; dynamic storage may insert
        // padding or duplicate a legacy explicit ECX receiver.
        if (addX87StorageMigration(function, parameters, evidence, rows)) return true;

        Map<Integer, Integer> merges = new TreeMap<>();
        List<String> selectedEvidence = new ArrayList<>();
        for (Map.Entry<Long, List<String>> entry : evidence.entrySet()) {
            Integer index = slotAt.get(entry.getKey());
            if (index == null) continue;
            ParameterSlot first = slots.get(index);
            DataType firstType = first.parameter.getFormalDataType();
            if (first.span == 8 && genericQword(firstType)) {
                merges.put(index, 1);
                selectedEvidence.addAll(entry.getValue());
                continue;
            }
            if (first.span != 4 || !genericDword(firstType) ||
                    index + 1 >= slots.size()) continue;
            ParameterSlot second = slots.get(index + 1);
            if (second.offset != first.offset + 4 || second.span != 4 ||
                    !genericDword(second.parameter.getFormalDataType())) continue;
            merges.put(index, 2);
            selectedEvidence.addAll(entry.getValue());
        }
        if (merges.isEmpty()) return false;

        // Reject overlapping selections rather than making the result dependent
        // on instruction order.
        for (Map.Entry<Integer, Integer> merge : merges.entrySet())
            if (merge.getValue() == 2 && merges.containsKey(merge.getKey() + 1))
                return false;

        List<String> types = new ArrayList<>();
        List<String> names = new ArrayList<>();
        List<String> storages = new ArrayList<>();
        for (int index = 0; index < parameters.size();) {
            Integer consumed = merges.get(index);
            Parameter parameter = parameters.get(index);
            if (consumed != null) {
                types.add("/double");
                names.add(parameter.getName());
                if (consumed == 1)
                    storages.add(parameter.getVariableStorage().getSerializationString());
                else
                    storages.add(new VariableStorage(currentProgram,
                        parameter.getStackOffset(), 8).getSerializationString());
                index += consumed;
            }
            else {
                types.add(typeSpec(parameter.getFormalDataType()));
                names.add(parameter.getName());
                storages.add(parameter.getVariableStorage().getSerializationString());
                index++;
            }
        }
        StoragePlan customPlan = withAutoParameters(function,
            new StoragePlan(types, names, storages));
        rows.add(Row.fullCustom(function, "x87_double_parameter_slots", true,
            typeSpec(function.getReturnType()), function.getCallingConventionName(),
            function.hasVarArgs(), String.join(";", customPlan.types),
            String.join(";", customPlan.names), String.join(";", customPlan.storages),
            "high", "x87 double-width accesses or exact split stores into an " +
            "owner field independently typed or consumed as double prove physical " +
            "EBP slot boundaries; " +
            "merged_slots=" + merges + "; sites=" +
            String.join(" | ", selectedEvidence)));
        return true;
    }

    private boolean scriptOwnedX87Prototype(Function function) {
        if (!hasTag(function, "RECOVERED_ABI_CONSISTENCY")) return false;
        String comment = function.getComment();
        if (comment == null) return false;
        String marker = "[STAbiConsistencyApplier] x87_double_parameter_slots " +
            "target=function:-1: prototype=";
        int start = comment.indexOf(marker);
        if (start < 0) return false;
        start += marker.length();
        int end = comment.indexOf(" Evidence:", start);
        if (end < 0) return false;
        String installedPrototype = comment.substring(start, end).trim();
        return installedPrototype.equals(function.getSignature().getPrototypeString(true));
    }

    private boolean addX87StorageMigration(Function function,
            List<Parameter> parameters, Map<Long, List<String>> evidence,
            List<Row> rows) throws Exception {
        String comment = function.getComment();
        if (!hasTag(function, "RECOVERED_ABI_CONSISTENCY") || comment == null ||
                !comment.contains("[STAbiConsistencyApplier] x87_double_parameter_slots") ||
                parameters.stream().noneMatch(parameter ->
                    "/double".equals(typeSpec(parameter.getFormalDataType()))))
            return false;

        StoragePlan fullPlan = packedStoragePlan(parameters);
        boolean fullPlanMatches = x87OffsetsMatch(fullPlan, evidence.keySet());

        Parameter autoThis = null;
        for (Parameter parameter : function.getParameters())
            if (parameter.isAutoParameter()) { autoThis = parameter; break; }
        // Do not identify the duplicate by datatype identity: later generated-type
        // replacement may leave two same-role receiver pointers non-equivalent. The
        // one-slot removal is selected only when the current layout contradicts the
        // observed x87 boundaries and the projected layout matches all of them.
        if (autoThis != null && parameters.size() > 1 &&
                parameters.get(0).hasStackStorage() && !fullPlanMatches) {
            StoragePlan projectedPlan = packedStoragePlan(
                parameters.subList(1, parameters.size()));
            if (x87OffsetsMatch(projectedPlan, evidence.keySet())) {
                StoragePlan customPlan = withAutoParameters(function, projectedPlan);
                rows.add(Row.fullCustom(function, "x87_stack_storage_migration", true,
                    typeSpec(function.getReturnType()), function.getCallingConventionName(),
                    function.hasVarArgs(), String.join(";", customPlan.types),
                    String.join(";", customPlan.names),
                    String.join(";", customPlan.storages),
                    "high", "retire script-owned dynamic x87 storage; " +
                        "observed_ebp_offsets=" + evidence.keySet() +
                        "; current_layout_mismatch=1; custom_storage=" +
                        projectedPlan.storages +
                        "; removed duplicated auto-this projection"));
                return true;
            }
        }

        if (!fullPlanMatches) return false;
        boolean already = true;
        for (int index = 0; index < parameters.size(); index++)
            if (!parameters.get(index).getVariableStorage()
                    .getSerializationString().equals(fullPlan.storages.get(index))) {
                already = false;
                break;
            }
        if (!already) {
            StoragePlan customPlan = withAutoParameters(function, fullPlan);
            rows.add(Row.fullCustom(function, "x87_stack_storage_migration", true,
                typeSpec(function.getReturnType()), function.getCallingConventionName(),
                function.hasVarArgs(), String.join(";", customPlan.types),
                String.join(";", customPlan.names),
                String.join(";", customPlan.storages),
                "high", "retire script-owned dynamic x87 storage; observed_ebp_offsets=" +
                    evidence.keySet() + "; custom_storage=" + fullPlan.storages));
            return true;
        }
        return false;
    }

    private StoragePlan packedStoragePlan(List<Parameter> parameters) throws Exception {
        List<String> types = new ArrayList<>();
        List<String> names = new ArrayList<>();
        List<String> storages = new ArrayList<>();
        // Incoming x86 stack parameters begin immediately after the return
        // address. Auto this/fastcall registers consume no stack slot; using the
        // shifted minimum from a broken dynamic signature would preserve its gap.
        int stackOffset = pointerSize;
        for (Parameter parameter : parameters) {
            DataType type = parameter.getFormalDataType();
            types.add(typeSpec(type));
            names.add(parameter.getName());
            if (parameter.hasStackStorage()) {
                int span = parameterSpan(parameter);
                int storageLength = type.getLength() > 0 ? type.getLength() :
                    parameter.getLength();
                storages.add(new VariableStorage(currentProgram, stackOffset, storageLength)
                    .getSerializationString());
                stackOffset += span;
            }
            else storages.add(parameter.getVariableStorage().getSerializationString());
        }
        return new StoragePlan(types, names, storages);
    }

    private StoragePlan withAutoParameters(Function function, StoragePlan plan) {
        List<String> types = new ArrayList<>();
        List<String> names = new ArrayList<>();
        List<String> storages = new ArrayList<>();
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter()) continue;
            types.add(typeSpec(parameter.getFormalDataType()));
            names.add(parameter.getName());
            storages.add(parameter.getVariableStorage().getSerializationString());
        }
        types.addAll(plan.types);
        names.addAll(plan.names);
        storages.addAll(plan.storages);
        return new StoragePlan(types, names, storages);
    }

    private boolean x87OffsetsMatch(StoragePlan plan, Set<Long> observed) throws Exception {
        Set<Long> doubles = new HashSet<>();
        for (int index = 0; index < plan.types.size(); index++) {
            if (!"/double".equals(plan.types.get(index))) continue;
            VariableStorage storage = VariableStorage.deserialize(
                currentProgram, plan.storages.get(index));
            if (!storage.hasStackStorage()) return false;
            doubles.add((long)storage.getStackOffset() + pointerSize);
        }
        return !doubles.isEmpty() && !observed.isEmpty() &&
            observed.stream().allMatch(doubles::contains);
    }

    private boolean x87MemoryRead(String mnemonic) {
        return Set.of("FLD", "FADD", "FADDP", "FSUB", "FSUBR", "FSUBP",
            "FSUBRP", "FMUL", "FMULP", "FDIV", "FDIVR", "FDIVP", "FDIVRP",
            "FCOM", "FCOMP", "FUCOM", "FUCOMP").contains(mnemonic);
    }

    private boolean writesStackMemory(String mnemonic) {
        return writesFirstOperand(mnemonic) ||
            Set.of("FST", "FSTP", "FIST", "FISTP", "FISTTP").contains(mnemonic);
    }

    private boolean stackRangeWritten(Set<Long> written, long offset, int length) {
        for (int byteOffset = 0; byteOffset < length; byteOffset++)
            if (written.contains(offset + byteOffset)) return true;
        return false;
    }

    private int parameterSpan(Parameter parameter) {
        int length = Math.max(pointerSize,
            Math.max(parameter.getLength(), parameter.getFormalDataType().getLength()));
        return (length + pointerSize - 1) / pointerSize * pointerSize;
    }

    private boolean genericQword(DataType type) {
        DataType current = unwrap(type);
        if (current == null || current.getLength() != 8 || current instanceof Pointer)
            return false;
        String name = current.getName().toLowerCase(Locale.ROOT);
        return Undefined.isUndefined(current) || Set.of("undefined8", "qword").contains(name);
    }

    /**
     * A compiler may copy a by-value double into a typed object field with two
     * integer MOVs. Once class-layout recovery has independently established
     * that destination as `/double`, or the same complete eight-byte component
     * is independently consumed by an x87 double operation, matching low/high
     * stores prove the source qword parameter without relying on floating
     * constants at callers.
     */
    private Map<Long, List<String>> typedDoubleStoreEvidence(Function function,
            List<ParameterSlot> slots) {
        Map<Long, List<String>> result = new TreeMap<>();
        Structure owner = ownerStructure(function);
        if (owner == null || !"__thiscall".equals(function.getCallingConventionName()))
            return result;
        Set<Long> qwordStarts = new HashSet<>();
        for (ParameterSlot slot : slots)
            if (slot.offset >= pointerSize * 2L && slot.span == 8 &&
                    genericQword(slot.parameter.getFormalDataType()))
                qwordStarts.add(slot.offset);
        if (qwordStarts.isEmpty()) return result;

        Set<String> thisAliases = new HashSet<>();
        thisAliases.add("ECX");
        Map<String, ParameterHalf> halves = new TreeMap<>();
        Map<Long, ParameterHalf[]> fieldHalves = new TreeMap<>();
        Map<Long, List<String>> fieldSites = new TreeMap<>();
        Set<Long> doubleFieldOffsets = new HashSet<>();
        for (DataTypeComponent component : owner.getComponents()) {
            DataType componentType = unwrap(component.getDataType());
            if (component.getLength() == 8 && componentType != null &&
                    "/double".equals(componentType.getPathName()))
                doubleFieldOffsets.add((long)component.getOffset());
        }
        Set<Long> writtenStackBytes = new HashSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operandRepresentations(instruction);
            if (x87MemoryRead(mnemonic)) {
                for (String operand : operands) {
                    if (!operand.contains("DOUBLE PTR") &&
                            !operand.contains("QWORD PTR")) continue;
                    BaseMemory memory = baseMemory(operand);
                    if (memory == null || !thisAliases.contains(memory.base)) continue;
                    DataTypeComponent component =
                        owner.getComponentContaining((int)memory.offset);
                    if (component != null && component.getLength() == 8 &&
                            memory.offset == component.getOffset()) {
                        doubleFieldOffsets.add((long)component.getOffset());
                        fieldSites.computeIfAbsent((long)component.getOffset(),
                            ignored -> new ArrayList<>()).add(
                            addr(instruction.getAddress()) +
                            " reads owner field as double");
                    }
                }
            }
            if ("MOV".equals(mnemonic) && operands.size() >= 2) {
                String destination = fullRegister(operands.get(0));
                String source = fullRegister(operands.get(1));
                if (!destination.isBlank()) {
                    thisAliases.remove(destination);
                    halves.remove(destination);
                    if (!source.isBlank() && thisAliases.contains(source))
                        thisAliases.add(destination);
                    ParameterHalf half = !source.isBlank() ? halves.get(source) :
                        incomingParameterHalf(instruction, 1, qwordStarts,
                            writtenStackBytes);
                    if (half != null) halves.put(destination, half);
                }
                else {
                    BaseMemory memory = baseMemory(operands.get(0));
                    ParameterHalf half = source.isBlank() ? null : halves.get(source);
                    if (memory != null && thisAliases.contains(memory.base) && half != null) {
                        DataTypeComponent component =
                            owner.getComponentContaining((int)memory.offset);
                        if (component != null && component.getLength() == 8) {
                            int piece = memory.offset == component.getOffset() ? 0 :
                                memory.offset == component.getOffset() + 4 ? 1 : -1;
                            if (piece == half.half) {
                                ParameterHalf[] pieces = fieldHalves.computeIfAbsent(
                                    (long)component.getOffset(),
                                    ignored -> new ParameterHalf[2]);
                                pieces[piece] = half;
                                fieldSites.computeIfAbsent(
                                    (long)component.getOffset(),
                                    ignored -> new ArrayList<>()).add(
                                    addr(instruction.getAddress()) +
                                    " stores incoming qword half " + piece);
                            }
                        }
                    }
                }
            }
            else if ("CALL".equals(mnemonic)) {
                for (String volatileRegister : List.of("EAX", "ECX", "EDX")) {
                    thisAliases.remove(volatileRegister);
                    halves.remove(volatileRegister);
                }
            }
            else if (!operands.isEmpty()) {
                String destination = fullRegister(operands.get(0));
                if (!destination.isBlank() && writesFirstOperand(mnemonic)) {
                    thisAliases.remove(destination);
                    halves.remove(destination);
                }
            }
            if (writesStackMemory(mnemonic) && instruction.getNumOperands() > 0) {
                Long offset = stackOffset(instruction, 0);
                int width = memoryWidth(
                    instruction.getDefaultOperandRepresentation(0));
                if (offset != null && width > 0)
                    for (int byteOffset = 0; byteOffset < width; byteOffset++)
                        writtenStackBytes.add(offset + byteOffset);
            }
        }
        for (Map.Entry<Long, ParameterHalf[]> entry : fieldHalves.entrySet()) {
            ParameterHalf[] pieces = entry.getValue();
            if (!doubleFieldOffsets.contains(entry.getKey()) ||
                    pieces[0] == null || pieces[1] == null ||
                    pieces[0].parameterOffset != pieces[1].parameterOffset)
                continue;
            result.computeIfAbsent(pieces[0].parameterOffset,
                ignored -> new ArrayList<>()).add(
                "incoming qword stored into " + owner.getPathName() + "+0x" +
                Long.toHexString(entry.getKey()) +
                " and independently consumed as double; sites=" +
                String.join(", ",
                    fieldSites.getOrDefault(entry.getKey(), List.of())));
        }
        return result;
    }

    private ParameterHalf incomingParameterHalf(Instruction instruction, int operand,
            Set<Long> qwordStarts, Set<Long> writtenStackBytes) {
        Long offset = stackOffset(instruction, operand);
        if (offset == null || stackRangeWritten(writtenStackBytes, offset, 4)) return null;
        if (qwordStarts.contains(offset)) return new ParameterHalf(offset, 0);
        if (qwordStarts.contains(offset - 4)) return new ParameterHalf(offset - 4, 1);
        return null;
    }

    private Structure ownerStructure(Function function) {
        if (!(function.getParentNamespace() instanceof GhidraClass owner)) return null;
        DataType exact = currentProgram.getDataTypeManager()
            .getDataType("/" + owner.getName());
        if (unwrap(exact) instanceof Structure structure) return structure;
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(owner.getName(), matches);
        Structure found = null;
        for (DataType match : matches) {
            DataType unwrapped = unwrap(match);
            if (!(unwrapped instanceof Structure structure)) continue;
            if (found != null && !found.getPathName().equals(structure.getPathName()))
                return null;
            found = structure;
        }
        return found;
    }

    private BaseMemory baseMemory(String operand) {
        Matcher matcher = BASE_MEMORY.matcher(operand.toUpperCase(Locale.ROOT));
        if (!matcher.matches()) return null;
        long offset = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            offset = "-".equals(matcher.group(2)) ? -parsed : parsed;
        }
        return new BaseMemory(matcher.group(1), offset);
    }

    private boolean allReturnsDefineFullAccumulator(Function function) {
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        int returns = 0;
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET")) continue;
            returns++;
            Instruction prior = listing.getInstructionBefore(instruction.getAddress());
            boolean full = false;
            for (int count = 0; count < RETURN_DEFINITION_SCAN_LIMIT && prior != null &&
                    function.getBody().contains(prior.getAddress()); count++) {
                int width = accumulatorWidth(prior.getResultObjects());
                if (width >= 4) { full = true; break; }
                String mnemonic = prior.getMnemonicString().toUpperCase(Locale.ROOT);
                if ("CALL".equals(mnemonic) || mnemonic.startsWith("J")) break;
                prior = listing.getInstructionBefore(prior.getAddress());
            }
            if (!full) return false;
        }
        return returns > 0;
    }

    private void addParameterWidthRepairs(Function function, List<Row> rows) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isStackVariable() ||
                    manual(parameter.getSource()) || !genericDword(parameter.getFormalDataType())) continue;
            WidthEvidence evidence = parameterWidth(function, parameter);
            if (evidence == null || evidence.proposedType.isBlank() || evidence.conflict) continue;
            if (evidence.proposedType.equals(typeSpec(parameter.getFormalDataType()))) continue;
            rows.add(Row.target(function, "stack_parameter_width", true, "parameter",
                parameter.getOrdinal(), parameter, parameter.getName(), evidence.proposedType,
                "high", evidence.reason));
        }
    }

    /**
     * Repair a generic pointer which was propagated into an ABI slot even though the
     * callee consumes the incoming value exclusively as a scalar.  The scan stops at
     * the first write back to the argument slot: optimized MSVC routinely reuses dead
     * incoming slots as locals, and post-write pointer dereferences must not contaminate
     * the original parameter lifetime.
     */
    private void addParameterScalarRoleRepairs(Function function, List<Row> rows) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.hasStackStorage() ||
                    manual(parameter.getSource()) ||
                    !genericPointer(parameter.getFormalDataType())) continue;
            ScalarRoleEvidence evidence = scalarParameterRole(function, parameter);
            if (evidence == null || evidence.pointerDereferences != 0 ||
                    evidence.scalarOperations < 2 || evidence.directReads == 0) continue;
            String proposed = scalarRoleType(evidence);
            if (proposed.isBlank()) continue;
            rows.add(Row.target(function, "stack_parameter_scalar_role", true, "parameter",
                parameter.getOrdinal(), parameter, parameter.getName(), proposed, "high",
                "generic pointer has a scalar-only incoming lifetime before its first slot " +
                "overwrite: frame_offset=0x" + Long.toHexString(evidence.frameOffset) +
                ", direct_reads=" + evidence.directReads +
                ", scalar_operations=" + evidence.scalarOperations +
                ", signed_comparisons=" + evidence.signedComparisons +
                ", unsigned_bounds=" + evidence.unsignedBounds +
                ", pointer_dereferences=" + evidence.pointerDereferences +
                ", slot_reused=" + evidence.slotReused + "; sites=" +
                String.join(" | ", evidence.sites)));
        }
    }

    private ScalarRoleEvidence scalarParameterRole(Function function, Parameter parameter) {
        // Depending on whether custom or dynamic storage supplied the prototype,
        // Ghidra's stack offset can be expressed in entry-SP coordinates or in the
        // post-prologue EBP frame used by the listing.  Try both representations
        // and keep only a uniquely strongest incoming lifetime.  Requiring a
        // later write to the same slot strongly distinguishes an optimized
        // argument-slot reuse from the adjacent argument.
        List<ScalarRoleEvidence> candidates = new ArrayList<>();
        Set<Long> offsets = new LinkedHashSet<>();
        offsets.add((long)parameter.getStackOffset());
        offsets.add((long)parameter.getStackOffset() + pointerSize);
        Long ordinalOffset = abiFrameOffset(function, parameter);
        if (ordinalOffset != null) offsets.add(ordinalOffset);
        List<ScalarRoleEvidence> attempted = new ArrayList<>();
        for (long expectedOffset : offsets) {
            ScalarRoleEvidence candidate =
                scalarParameterRole(function, expectedOffset);
            if (candidate == null) candidate = new ScalarRoleEvidence();
            candidate.frameOffset = expectedOffset;
            attempted.add(candidate);
            if (qualifyingScalarRole(candidate)) {
                candidates.add(candidate);
            }
        }
        ScalarRoleEvidence selected = null;
        if (!candidates.isEmpty()) {
            candidates.sort(Comparator.comparingInt(this::scalarRoleScore).reversed());
            selected = candidates.get(0);
            if (candidates.size() > 1 &&
                    scalarRoleScore(candidates.get(1)) == scalarRoleScore(selected))
                selected = null;
        }
        for (ScalarRoleEvidence evidence : attempted)
            scalarAudit.add(new ScalarAuditRow(addr(function.getEntryPoint()),
                function.getName(true), parameter.getOrdinal(), parameter.getName(),
                typeSpec(parameter.getFormalDataType()), parameter.getVariableStorage().toString(),
                evidence.frameOffset, qualifyingScalarRole(evidence),
                selected == evidence, scalarRoleScore(evidence), evidence.directReads,
                evidence.scalarOperations, evidence.signedComparisons,
                evidence.unsignedBounds, evidence.pointerDereferences,
                evidence.slotReused, String.join(" | ", evidence.sites)));
        return selected;
    }

    /**
     * Derive the physical EBP-frame slot from the ordered x86 ABI arguments as
     * an independent fallback.  Some dynamically reconstructed signatures
     * expose their stack-space address in a coordinate system which does not
     * match the concrete EBP displacement printed by the Listing.
     */
    private Long abiFrameOffset(Function function, Parameter wanted) {
        if (pointerSize != 4 || function == null || wanted == null ||
                !wanted.hasStackStorage()) return null;
        long offset = pointerSize * 2L; // saved EBP, then the return address
        List<Parameter> parameters = explicitParameters(function).stream()
            .sorted(Comparator.comparingInt(Parameter::getOrdinal)).toList();
        for (Parameter parameter : parameters) {
            if (!parameter.hasStackStorage()) continue;
            if (parameter.getOrdinal() == wanted.getOrdinal()) return offset;
            int length = Math.max(pointerSize,
                Math.max(parameter.getLength(), parameter.getFormalDataType().getLength()));
            offset += (length + pointerSize - 1L) / pointerSize * pointerSize;
        }
        return null;
    }

    private ScalarRoleEvidence scalarParameterRole(Function function, long expectedOffset) {
        ScalarRoleEvidence evidence = new ScalarRoleEvidence();
        Set<String> aliases = new HashSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operandRepresentations(instruction);

            boolean slotRead = false;
            boolean slotWrite = false;
            for (int index = 0; index < operands.size(); index++) {
                Long offset = stackOffset(instruction, index);
                if (offset == null || offset != expectedOffset) continue;
                boolean write = index == 0 && writesFirstOperand(mnemonic);
                if (write) slotWrite = true;
                if (!write || readsFirstOperand(mnemonic)) slotRead = true;
            }
            if (slotWrite && evidence.directReads > 0) {
                evidence.slotReused = true;
                if (evidence.sites.size() < 16)
                    evidence.sites.add(addr(instruction.getAddress()) + " first slot write: " +
                        instruction);
                break;
            }

            String destination = operands.isEmpty() ? "" :
                fullRegister(operands.get(0));
            if ("MOV".equals(mnemonic) && operands.size() >= 2) {
                String sourceRegister = fullRegister(operands.get(1));
                Long sourceOffset = stackOffset(instruction, 1);
                if (sourceOffset != null && sourceOffset == expectedOffset) {
                    evidence.directReads++;
                    if (!destination.isBlank()) aliases.add(destination);
                    if (evidence.sites.size() < 16)
                        evidence.sites.add(addr(instruction.getAddress()) + " incoming load: " +
                            instruction);
                }
                else if (!destination.isBlank()) {
                    if (!sourceRegister.isBlank() && aliases.contains(sourceRegister))
                        aliases.add(destination);
                    else aliases.remove(destination);
                }
            }

            boolean mentionsAlias = aliases.stream().anyMatch(alias ->
                operands.stream().anyMatch(operand -> containsRegister(operand, alias)));
            if (mentionsAlias) {
                if (!"LEA".equals(mnemonic) &&
                        operands.stream().anyMatch(operand ->
                            aliases.stream().anyMatch(alias ->
                                memoryUsesUnscaledRegister(operand, alias)))) {
                    evidence.pointerDereferences++;
                    if (evidence.sites.size() < 16)
                        evidence.sites.add(addr(instruction.getAddress()) +
                            " pointer-like dereference: " + instruction);
                }
                if (Set.of("ADD", "SUB", "IMUL", "IDIV", "DIV", "SHL", "SHR", "SAR",
                        "SAL", "INC", "DEC", "NEG", "LEA").contains(mnemonic)) {
                    evidence.scalarOperations++;
                    if (evidence.sites.size() < 16)
                        evidence.sites.add(addr(instruction.getAddress()) +
                            " scalar operation: " + instruction);
                }
                if (Set.of("CMP", "TEST").contains(mnemonic)) {
                    Instruction next = listing.getInstructionAfter(instruction.getAddress());
                    String jump = next == null ? "" :
                        next.getMnemonicString().toUpperCase(Locale.ROOT);
                    if (Set.of("JL", "JLE", "JG", "JGE").contains(jump))
                        evidence.signedComparisons++;
                    else if (Set.of("JA", "JAE", "JB", "JBE", "JC", "JNC",
                            "JNA", "JNAE", "JNB", "JNBE").contains(jump) &&
                            operands.stream().anyMatch(operand -> immediate(operand) != null))
                        evidence.unsignedBounds++;
                }
            }

            if ("CALL".equals(mnemonic)) {
                aliases.remove("EAX");
                aliases.remove("ECX");
                aliases.remove("EDX");
            }
            else if (!destination.isBlank() && !"MOV".equals(mnemonic) &&
                    writesFirstOperand(mnemonic) &&
                    !Set.of("ADD", "SUB", "IMUL", "SHL", "SHR", "SAR", "SAL",
                        "INC", "DEC", "NEG").contains(mnemonic))
                aliases.remove(destination);

            if (slotRead && evidence.directReads == 0) evidence.directReads++;
        }
        return evidence.directReads == 0 ? null : evidence;
    }

    private boolean qualifyingScalarRole(ScalarRoleEvidence evidence) {
        return evidence != null && evidence.pointerDereferences == 0 &&
            evidence.scalarOperations >= 2 && evidence.directReads > 0 &&
            !scalarRoleType(evidence).isBlank();
    }

    private String scalarRoleType(ScalarRoleEvidence evidence) {
        if (evidence == null) return "";
        return evidence.signedComparisons > 0 ? "/int" :
            evidence.unsignedBounds > 0 ? "/uint" : "";
    }

    private int scalarRoleScore(ScalarRoleEvidence evidence) {
        if (evidence == null) return Integer.MIN_VALUE;
        return (evidence.slotReused ? 1000 : 0) + evidence.directReads * 100 +
            evidence.signedComparisons * 20 + evidence.unsignedBounds * 10 +
            Math.min(evidence.scalarOperations, 20);
    }

    /**
     * A function returning only a generic pointer can still expose its element
     * width through all direct callers.  This is intentionally width-only: byte
     * consumers yield byte*, not a guessed semantic mask/table type.
     */
    private void addPointerReturnElementRepair(Function function, List<Row> rows) {
        Parameter returned = function.getReturn();
        if (manual(returned.getSource()) || !genericPointer(returned.getFormalDataType())) return;
        PointerElementEvidence evidence = pointerReturnElements.get(function.getEntryPoint());
        if (evidence == null || evidence.widths.size() != 1 || evidence.sites.size() < 2)
            return;
        int width = evidence.widths.iterator().next();
        String element = switch (width) {
            case 1 -> "/byte";
            case 2 -> "/ushort";
            case 4 -> "/uint";
            default -> "";
        };
        if (element.isBlank()) return;
        String proposed = "pointer:" + element;
        if (proposed.equals(typeSpec(returned.getFormalDataType()))) return;
        rows.add(Row.target(function, "pointer_return_element_width", true, "return", -1,
            returned, "", proposed, "high",
            "generic returned address is dereferenced with one consistent machine width " +
            "across callers; width=" + width + ", sites=" +
            String.join(" | ", evidence.sites)));
    }

    private void scanReturnedPointerUse(Function caller, Instruction call,
            PointerElementEvidence evidence) {
        Set<String> aliases = new HashSet<>();
        Set<Long> stackAliases = new HashSet<>();
        aliases.add("EAX");
        Instruction instruction = listing.getInstructionAfter(call.getAddress());
        for (int count = 0; count < POINTER_RETURN_SCAN_LIMIT && instruction != null &&
                caller.getBody().contains(instruction.getAddress()) &&
                !aliases.isEmpty(); count++) {
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operandRepresentations(instruction);
            for (String operand : operands) {
                if (aliases.stream().noneMatch(alias ->
                        memoryUsesUnscaledRegister(operand, alias))) continue;
                int width = memoryWidth(operand);
                if (width > 0) {
                    evidence.widths.add(width);
                    if (evidence.sites.size() < 24)
                        evidence.sites.add(addr(caller.getEntryPoint()) + " @ " +
                            addr(instruction.getAddress()) + " " + instruction);
                }
            }
            String destination = operands.isEmpty() ? "" :
                fullRegister(operands.get(0));
            if ("MOV".equals(mnemonic) && operands.size() >= 2) {
                Long destinationStack = stackOffset(instruction, 0);
                String source = fullRegister(operands.get(1));
                if (destinationStack != null && !source.isBlank()) {
                    if (aliases.contains(source)) stackAliases.add(destinationStack);
                    else stackAliases.remove(destinationStack);
                }
                else if (!destination.isBlank()) {
                    Long sourceStack = stackOffset(instruction, 1);
                    if (!source.isBlank() && aliases.contains(source))
                        aliases.add(destination);
                    else if (sourceStack != null && stackAliases.contains(sourceStack))
                        aliases.add(destination);
                    else aliases.remove(destination);
                }
            }
            else if ("LEA".equals(mnemonic) && operands.size() >= 2 &&
                    !destination.isBlank()) {
                boolean derived = aliases.stream().anyMatch(alias ->
                    containsRegister(operands.get(1), alias));
                if (derived) aliases.add(destination); else aliases.remove(destination);
            }
            else if ("CALL".equals(mnemonic)) {
                aliases.remove("EAX"); aliases.remove("ECX"); aliases.remove("EDX");
            }
            else if (!destination.isBlank() && writesFirstOperand(mnemonic) &&
                    !Set.of("ADD", "SUB", "INC", "DEC").contains(mnemonic))
                aliases.remove(destination);
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
    }

    private WidthEvidence parameterWidth(Function function, Parameter parameter) {
        long expectedOffset = (long)parameter.getStackOffset() + pointerSize;
        Set<String> candidates = new HashSet<>();
        List<String> sites = new ArrayList<>();
        int unmaskedDwordReads = 0;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            for (int operandIndex = 0; operandIndex < instruction.getNumOperands(); operandIndex++) {
                String source = instruction.getDefaultOperandRepresentation(operandIndex);
                Long offset = stackOffset(instruction, operandIndex);
                if (offset == null || offset != expectedOffset) continue;
                String upperSource = source.toUpperCase(Locale.ROOT);
                String proposed = "";
                boolean sourceOperand = operandIndex == 1;
                if (sourceOperand && "MOVSX".equals(mnemonic)) {
                    if (upperSource.contains("BYTE PTR")) proposed = "/char";
                    else if (upperSource.contains("WORD PTR")) proposed = "/short";
                }
                else if (sourceOperand && "MOVZX".equals(mnemonic)) {
                    if (upperSource.contains("BYTE PTR")) proposed = "/byte";
                    else if (upperSource.contains("WORD PTR")) proposed = "/ushort";
                }
                else if (sourceOperand && "MOV".equals(mnemonic) &&
                        upperSource.contains("DWORD PTR")) {
                    proposed = maskedLoadType(instruction);
                    if (proposed.isBlank()) unmaskedDwordReads++;
                }
                else if (upperSource.contains("DWORD PTR")) unmaskedDwordReads++;
                if (!proposed.isBlank()) {
                    candidates.add(proposed);
                    if (sites.size() < 12) sites.add(addr(instruction.getAddress()) + " " +
                        instruction.toString() +
                        ("MOV".equals(mnemonic) ? "; first-use mask" : ""));
                }
            }
        }
        if (candidates.isEmpty()) return null;
        boolean conflict = candidates.size() != 1 || unmaskedDwordReads != 0;
        String proposed = candidates.size() == 1 ? candidates.iterator().next() : "";
        return new WidthEvidence(proposed, conflict, "entry-use width=" + proposed +
            "; unmasked_dword_reads=" + unmaskedDwordReads + "; evidence=" +
            String.join(" | ", sites));
    }

    private String maskedLoadType(Instruction load) {
        String destination = load.getDefaultOperandRepresentation(0).trim().toUpperCase(Locale.ROOT);
        if (!destination.matches("E?(?:AX|BX|CX|DX|SI|DI)")) return "";
        Instruction next = listing.getInstructionAfter(load.getAddress());
        for (int count = 0; count < PARAMETER_MASK_SCAN_LIMIT && next != null; count++) {
            String mnemonic = next.getMnemonicString().toUpperCase(Locale.ROOT);
            if ("AND".equals(mnemonic) && next.getNumOperands() >= 2 &&
                    destination.equals(next.getDefaultOperandRepresentation(0).trim()
                        .toUpperCase(Locale.ROOT))) {
                Long mask = immediate(next.getDefaultOperandRepresentation(1));
                if (mask != null && mask == 0xffL) return "/byte";
                if (mask != null && mask == 0xffffL) return "/ushort";
                return "";
            }
            // MSVC commonly schedules an unrelated load between a stack-parameter
            // load and its zero-extension mask.  Skip only instructions which do
            // not consume or redefine the loaded register; the first real use is
            // still the ABI-width proof.
            if (mentionsRegister(next.getInputObjects(), destination) ||
                    mentionsRegister(next.getResultObjects(), destination) ||
                    next.getFlowType().isJump() || next.getFlowType().isTerminal() ||
                    "CALL".equals(mnemonic))
                return "";
            next = listing.getInstructionAfter(next.getAddress());
        }
        return "";
    }

    private boolean mentionsRegister(Object[] objects, String wanted) {
        String canonical = canonicalRegister(wanted);
        for (Object object : objects) {
            if (object instanceof Register register &&
                    canonical.equals(canonicalRegister(register.getName()))) return true;
        }
        return false;
    }

    private String canonicalRegister(String value) {
        return switch (value.toUpperCase(Locale.ROOT)) {
            case "AL", "AH", "AX", "EAX", "RAX" -> "EAX";
            case "BL", "BH", "BX", "EBX", "RBX" -> "EBX";
            case "CL", "CH", "CX", "ECX", "RCX" -> "ECX";
            case "DL", "DH", "DX", "EDX", "RDX" -> "EDX";
            case "SI", "ESI", "RSI" -> "ESI";
            case "DI", "EDI", "RDI" -> "EDI";
            default -> value.toUpperCase(Locale.ROOT);
        };
    }

    private Long stackOffset(String operand) {
        String value = operand.toUpperCase(Locale.ROOT).replace("DOUBLE PTR", "")
            .replace("QWORD PTR", "").replace("DWORD PTR", "")
            .replace("FLOAT PTR", "").replace("WORD PTR", "")
            .replace("BYTE PTR", "").replace(" ", "");
        Matcher matcher = STACK_MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        if (matcher.group(2) == null) return 0L;
        Long parsed = immediate(matcher.group(2));
        if (parsed == null) return null;
        return "-".equals(matcher.group(1)) ? -parsed : parsed;
    }

    /**
     * Prefer Ghidra's operand objects over display text.  Symbolic stack
     * rendering may replace the numeric displacement with a variable name even
     * though the underlying operand still contains EBP plus a Scalar.
     */
    private Long stackOffset(Instruction instruction, int operandIndex) {
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return null;
        String representation =
            instruction.getDefaultOperandRepresentation(operandIndex);
        Long rendered = stackOffset(representation);
        if (rendered != null) return rendered;
        String instructionText = instruction.toString();
        int separator = instructionText.indexOf(' ');
        if (separator >= 0) {
            String[] listingOperands =
                instructionText.substring(separator + 1).split("\\s*,\\s*");
            if (operandIndex < listingOperands.length) {
                rendered = stackOffset(listingOperands[operandIndex]);
                if (rendered != null) return rendered;
            }
        }
        int operandType = instruction.getOperandType(operandIndex);
        if (!OperandType.isIndirect(operandType) &&
                (representation == null || !representation.contains("["))) return null;
        boolean ebp = false;
        long displacement = 0;
        int scalars = 0;
        for (Object object : instruction.getOpObjects(operandIndex)) {
            if (object instanceof Register register) {
                String name = canonicalRegister(register.getName());
                if (!"EBP".equals(name)) return null;
                ebp = true;
            }
            else if (object instanceof Scalar scalar) {
                displacement += scalar.getSignedValue();
                scalars++;
            }
        }
        return ebp && scalars <= 1 ? displacement : null;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() && seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    private Function uniqueNamedFunction(String leaf) {
        Function match = null;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function candidate = functions.next();
            if (!leaf.equals(candidate.getName())) continue;
            if (match != null) return null;
            match = candidate;
        }
        return match;
    }

    private Function uniqueTaggedFunction(String tagName) {
        Function match = null;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function candidate = functions.next();
            if (!hasTag(candidate, tagName)) continue;
            if (match != null) return null;
            match = candidate;
        }
        return match;
    }

    private boolean matchesFullPrototype(Function function, String returnType, String convention,
            boolean varargs, List<String> parameters) {
        if (!returnType.equals(typeSpec(function.getReturnType())) ||
                !convention.equals(function.getCallingConventionName()) ||
                varargs != function.hasVarArgs()) return false;
        List<Parameter> explicit = explicitParameters(function);
        if (explicit.size() != parameters.size()) return false;
        for (int index = 0; index < explicit.size(); index++)
            if (!parameters.get(index).equals(typeSpec(explicit.get(index).getFormalDataType())))
                return false;
        return true;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private List<String> operandRepresentations(Instruction instruction) {
        List<String> result = new ArrayList<>();
        for (int index = 0; index < instruction.getNumOperands(); index++)
            result.add(instruction.getDefaultOperandRepresentation(index)
                .toUpperCase(Locale.ROOT));
        return result;
    }

    private String fullRegister(String operand) {
        String value = operand == null ? "" : operand.trim().toUpperCase(Locale.ROOT);
        return switch (value) {
            case "EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP" -> value;
            default -> "";
        };
    }

    private boolean containsRegister(String operand, String register) {
        if (operand == null || register == null || register.isBlank()) return false;
        return Pattern.compile("(?<![A-Z0-9_])" + Pattern.quote(register) +
            "(?![A-Z0-9_])").matcher(operand.toUpperCase(Locale.ROOT)).find();
    }

    private boolean memoryUsesUnscaledRegister(String operand, String register) {
        if (operand == null || !operand.contains("[") || !operand.contains("]")) return false;
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        String expression = operand.substring(open + 1, close)
            .toUpperCase(Locale.ROOT).replace(" ", "");
        return Pattern.compile("(?:^|[+\\-])" + Pattern.quote(register) +
            "(?![A-Z0-9_*])").matcher(expression).find();
    }

    private boolean writesFirstOperand(String mnemonic) {
        return Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP", "XOR", "SUB", "SBB",
            "ADD", "ADC", "AND", "OR", "IMUL", "SHL", "SHR", "SAR", "SAL", "INC",
            "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private boolean readsFirstOperand(String mnemonic) {
        return Set.of("XOR", "SUB", "SBB", "ADD", "ADC", "AND", "OR", "IMUL",
            "SHL", "SHR", "SAR", "SAL", "INC", "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private int memoryWidth(String operand) {
        String upper = operand == null ? "" : operand.toUpperCase(Locale.ROOT);
        if (upper.contains("BYTE PTR")) return 1;
        if (upper.contains("WORD PTR") && !upper.contains("DWORD PTR") &&
                !upper.contains("QWORD PTR")) return 2;
        if (upper.contains("DWORD PTR")) return 4;
        if (upper.contains("QWORD PTR")) return 8;
        if (upper.contains("FLOAT PTR")) return 4;
        if (upper.contains("DOUBLE PTR")) return 8;
        return 0;
    }

    private boolean genericDword(DataType type) {
        DataType current = unwrap(type);
        if (current == null || current.getLength() != 4 || current instanceof Pointer) return false;
        return Undefined.isUndefined(current) || current instanceof AbstractIntegerDataType ||
            Set.of("dword", "undefined4").contains(current.getName().toLowerCase(Locale.ROOT));
    }

    private boolean genericPointer(DataType type) {
        DataType current = unwrap(type);
        if (!(current instanceof Pointer pointer)) return false;
        DataType pointed = unwrap(pointer.getDataType());
        return pointed == null || Undefined.isUndefined(pointed) ||
            Set.of("/void", "/undefined").contains(pointed.getPathName()) ||
            Set.of("void", "undefined").contains(
                pointed.getName().toLowerCase(Locale.ROOT));
    }

    private DataType unwrap(DataType type) {
        Set<String> seen = new HashSet<>();
        while (type instanceof TypeDef typedef && seen.add(type.getPathName()))
            type = typedef.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_")) return true;
        return false;
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean manual(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private Long immediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9A-F]+H"))
                return Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException ignored) { }
        return null;
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\trepair_kind\tfunction_address\texpected_function\t" +
                "expected_signature\texpected_signature_source\ttarget_kind\ttarget_ordinal\t" +
                "expected_target_name\texpected_target_type\texpected_target_source\t" +
                "proposed_name\tproposed_type\tproposed_convention\tproposed_varargs\t" +
                "proposed_parameter_types\tproposed_parameter_names\t" +
                "proposed_parameter_storages\tconfidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.repairKind +
                "\t" + row.functionAddress + "\t" + tsv(row.expectedFunction) + "\t" +
                tsv(row.expectedSignature) + "\t" + row.expectedSignatureSource + "\t" +
                row.targetKind + "\t" + row.targetOrdinal + "\t" +
                tsv(row.expectedTargetName) + "\t" + row.expectedTargetType + "\t" +
                row.expectedTargetSource + "\t" + tsv(row.proposedName) + "\t" +
                row.proposedType + "\t" + row.proposedConvention + "\t" +
                row.proposedVarargs + "\t" + row.proposedParameterTypes + "\t" +
                tsv(row.proposedParameterNames) + "\t" +
                row.proposedParameterStorages + "\t" + row.confidence + "\t" +
                tsv(row.evidence) + "\n");
        }
    }

    private void writeScalarAudit(Path path) throws Exception {
        scalarAudit.sort(Comparator.comparing((ScalarAuditRow row) -> row.functionAddress)
            .thenComparingInt(row -> row.parameterOrdinal)
            .thenComparingLong(row -> row.frameOffset));
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\tparameter_ordinal\tparameter_name\t" +
                "parameter_type\tstorage\tframe_offset\tqualifies\tselected\tscore\t" +
                "direct_reads\tscalar_operations\tsigned_comparisons\tunsigned_bounds\t" +
                "pointer_dereferences\tslot_reused\tevidence\n");
            for (ScalarAuditRow row : scalarAudit)
                out.write(row.functionAddress + "\t" + tsv(row.function) + "\t" +
                    row.parameterOrdinal + "\t" + tsv(row.parameterName) + "\t" +
                    row.parameterType + "\t" + tsv(row.storage) + "\t0x" +
                    Long.toHexString(row.frameOffset) + "\t" + (row.qualifies ? "1" : "0") +
                    "\t" + (row.selected ? "1" : "0") + "\t" + row.score + "\t" +
                    row.directReads + "\t" + row.scalarOperations + "\t" +
                    row.signedComparisons + "\t" + row.unsignedBounds + "\t" +
                    row.pointerDereferences + "\t" + (row.slotReused ? "1" : "0") +
                    "\t" + tsv(row.evidence == null || row.evidence.isBlank() ?
                        "-" : row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, int functions, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST x86 ABI consistency\n\nFunctions scanned: " + functions +
                "\nProposals: " + rows.size() + "\nAutomatic: " +
                rows.stream().filter(row -> row.apply).count() + "\n");
            for (String kind : List.of("known_setjmp3", "known_load_resource_string",
                    "x87_double_parameter_slots", "x87_stack_storage_migration",
                    "full_eax_return", "stack_parameter_width",
                    "stack_parameter_scalar_role", "pointer_return_element_width"))
                out.write(kind + ": " + rows.stream().filter(row ->
                    row.repairKind.equals(kind)).count() + "\n");
            out.write("note=USER_DEFINED and IMPORTED target types are never selected for automatic repair.\n");
            out.write("note_returns=Full-EAX repairs require full-width caller use and a full EAX definition on every RET path.\n");
            out.write("note_parameters=Narrow stack parameters require consistent MOVSX/MOVZX or an immediate AND mask and no unmasked dword reads.\n");
            out.write("note_x87_doubles=An exact x87 double-width EBP read before any overlapping stack write may merge adjacent generic dwords; one generic qword may also be retyped when its exact halves are stored into an independently typed double class field. Stack byte count is preserved.\n");
            out.write("note_scalar_roles=Generic pointer parameters become int/uint only when their incoming lifetime has multiple scalar operations, a signed/range comparison, and no pointer dereference before the first argument-slot overwrite.\n");
            out.write("note_pointer_returns=Generic pointer returns gain only a byte/word/dword element width when at least two caller dereferences agree; no semantic table type is guessed.\n");
        }
    }

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
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static class ReturnUse {
        int full, narrow;
        final List<String> sites = new ArrayList<>();
    }
    private static class ScalarRoleEvidence {
        long frameOffset;
        int directReads;
        int scalarOperations;
        int signedComparisons;
        int unsignedBounds;
        int pointerDereferences;
        boolean slotReused;
        final List<String> sites = new ArrayList<>();
    }
    private static class PointerElementEvidence {
        final Set<Integer> widths = new HashSet<>();
        final List<String> sites = new ArrayList<>();
    }
    private record RegisterUse(int width, String evidence) { }
    private record ParameterSlot(Parameter parameter, long offset, int span) { }
    private record StoragePlan(List<String> types, List<String> names,
        List<String> storages) { }
    private record ParameterHalf(long parameterOffset, int half) { }
    private record BaseMemory(String base, long offset) { }
    private record WidthEvidence(String proposedType, boolean conflict, String reason) { }
    private record ScalarAuditRow(String functionAddress, String function,
        int parameterOrdinal, String parameterName, String parameterType, String storage,
        long frameOffset, boolean qualifies, boolean selected, int score, int directReads,
        int scalarOperations, int signedComparisons, int unsignedBounds,
        int pointerDereferences, boolean slotReused, String evidence) { }
    private static class Row {
        final boolean apply;
        final String repairKind, functionAddress, expectedFunction, expectedSignature;
        final String expectedSignatureSource, targetKind;
        final int targetOrdinal;
        final String expectedTargetName, expectedTargetType, expectedTargetSource;
        final String proposedName, proposedType, proposedConvention;
        final boolean proposedVarargs;
        final String proposedParameterTypes, proposedParameterNames;
        final String proposedParameterStorages, confidence, evidence;

        Row(boolean apply, String repairKind, Function function, String targetKind,
                int targetOrdinal, String expectedTargetName, String expectedTargetType,
                String expectedTargetSource, String proposedName, String proposedType,
                String proposedConvention, boolean proposedVarargs,
                String proposedParameterTypes, String proposedParameterNames,
                String proposedParameterStorages, String confidence, String evidence) {
            this.apply = apply; this.repairKind = repairKind;
            this.functionAddress = addr(function.getEntryPoint());
            this.expectedFunction = function.getName(true);
            this.expectedSignature = function.getSignature().getPrototypeString(true);
            this.expectedSignatureSource = function.getSignatureSource().toString();
            this.targetKind = targetKind; this.targetOrdinal = targetOrdinal;
            this.expectedTargetName = expectedTargetName;
            this.expectedTargetType = expectedTargetType;
            this.expectedTargetSource = expectedTargetSource;
            this.proposedName = proposedName; this.proposedType = proposedType;
            this.proposedConvention = proposedConvention;
            this.proposedVarargs = proposedVarargs;
            this.proposedParameterTypes = proposedParameterTypes;
            this.proposedParameterNames = proposedParameterNames;
            this.proposedParameterStorages = proposedParameterStorages;
            this.confidence = confidence; this.evidence = evidence;
        }

        static Row target(Function function, String kind, boolean apply, String targetKind,
                int ordinal, Parameter target, String proposedName, String proposedType,
                String confidence, String evidence) {
            return new Row(apply, kind, function, targetKind, ordinal, target.getName(),
                typeSpecStatic(target.getFormalDataType()), target.getSource().toString(),
                proposedName, proposedType, "", false, "", "", "", confidence, evidence);
        }
        static Row full(Function function, String kind, boolean apply, String returnType,
                String convention, boolean varargs, String parameterTypes,
                String parameterNames, String confidence, String evidence) {
            return new Row(apply, kind, function, "function", -1, "", "", "",
                "", returnType, convention, varargs, parameterTypes, parameterNames,
                "", confidence, evidence);
        }
        static Row fullCustom(Function function, String kind, boolean apply,
                String returnType, String convention, boolean varargs,
                String parameterTypes, String parameterNames, String parameterStorages,
                String confidence, String evidence) {
            return new Row(apply, kind, function, "function", -1, "", "", "",
                "", returnType, convention, varargs, parameterTypes, parameterNames,
                parameterStorages, confidence, evidence);
        }
        private static String typeSpecStatic(DataType type) {
            if (type instanceof Pointer pointer && pointer.getDataType() != null)
                return "pointer:" + typeSpecStatic(pointer.getDataType());
            return type == null ? "" : type.getPathName();
        }
    }
}
