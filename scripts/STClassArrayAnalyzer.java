// Recover fixed-size arrays embedded in script-owned class layouts.
// Evidence comes from bounded this+index*stride machine accesses and exact pointer-walk loops.
// Read-only: writes class_array_proposals.tsv/jsonl and class_array_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Class Member Arrays

import java.io.BufferedWriter;
import java.io.File;
import java.security.MessageDigest;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
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
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.scalar.Scalar;

public class STClassArrayAnalyzer extends GhidraScript {
    private static final int MAX_ARRAY_COUNT = 0x400;
    private static final int MAX_LOOP_SCAN = 64;
    private static final int MAX_RECORD_LOOP_SCAN = 256;
    private static final int MAX_RECORD_STRIDE = 0x10000;
    private static final String RECORD_TYPE_ROOT =
        "/SubmarineTitans/Recovered/InlineRecordArrays/";
    private static final String CLASS_LAYOUT_MARKER = "[STClassLayoutApplier]";
    private static final String HASH_MARKER = "generated_layout_sha256=";
    private static final Pattern REGISTER_TERM = Pattern.compile(
        "^([A-Z][A-Z0-9]{1,3})(?:\\*(0X[0-9A-F]+|[0-9]+))?$");
    private static final Pattern STACK = Pattern.compile(
        "^\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");

    private final Map<ArrayKey, ArrayEvidence> arrays = new TreeMap<>();
    private final Map<SpanKey, SpanEvidence> zeroSpans = new TreeMap<>();
    private final Map<RecordKey, RecordEvidence> recordArrays = new TreeMap<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // This analyzer is read-only and must not retain GhidraScript's wrapper transaction.
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

        int functionsSeen = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            String owner = ownerOf(function);
            boolean factory = isObjectFactory(function);
            if (owner.isBlank() || function.isExternal() || function.isThunk() ||
                    isLibrary(function) ||
                    !("__thiscall".equals(function.getCallingConventionName()) || factory))
                continue;
            Structure structure = findOwnerType(owner);
            if (structure == null) continue;
            functionsSeen++;
            analyzeFunction(function, owner, structure, factory);
        }

        List<Proposal> proposals = makeProposals();
        RecordProposals records = makeRecordProposals(proposals);
        writeTsv(directory.resolve("class_array_proposals.tsv"), proposals);
        writeRecordTypes(directory.resolve("class_record_array_type_proposals.tsv"),
            records.types);
        writeRecordFields(directory.resolve("class_record_array_field_proposals.tsv"),
            records.fields);
        writeSummary(directory.resolve("class_array_summary.txt"), functionsSeen, proposals);
        println("Class-array analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", candidates=" + proposals.size() +
            ", auto_apply=" + proposals.stream().filter(row -> row.apply).count() +
            ", bounded_sites=" + proposals.stream().mapToInt(row -> row.boundedSites).sum() +
            ", exact_loops=" + proposals.stream().mapToInt(row -> row.exactLoops).sum() +
            ", record_arrays=" + records.types.size() +
            ", record_array_apply=" + records.types.stream()
                .filter(row -> row.apply).count());
    }

    private void analyzeFunction(Function function, String owner, Structure structure) {
        analyzeFunction(function, owner, structure, false);
    }

    private void analyzeFunction(Function function, String owner, Structure structure,
            boolean factory) {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());
        if (instructions.isEmpty()) return;

        Map<String, Value> registers = new HashMap<>();
        Map<String, Long> constants = new HashMap<>();
        Map<Long, Value> stack = new HashMap<>();
        Map<String, ArrayEvidence> pointerOrigins = new HashMap<>();
        if (!factory) registers.put("ECX", Value.thisAddress(0));

        for (int index = 0; index < instructions.size(); index++) {
            Instruction instruction = instructions.get(index);
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);

            observeExactZeroSpan(function, owner, instruction, mnemonic, registers,
                constants);

            if (Set.of("CMP", "TEST").contains(mnemonic) && !operands.isEmpty())
                observeBound(instructions, index, mnemonic, operands, registers, stack);

            IndexedAccess indexed = indexedAccess(owner, structure, instruction,
                operands, registers);
            if (indexed != null) {
                ArrayEvidence evidence = arrays.computeIfAbsent(indexed.key,
                    ArrayEvidence::new);
                evidence.functions.add(addr(function.getEntryPoint()));
                evidence.sites.add(addr(instruction.getAddress()) + " " + instruction);
                if (indexed.bound > 0) {
                    evidence.counts.add(indexed.bound);
                    evidence.boundedSites++;
                }
                if (!indexed.directType.isBlank() &&
                        evidence.elementTypes.stream().noneMatch(value ->
                            value.startsWith("pointer:")))
                    evidence.elementTypes.add(indexed.directType);
                String destination = operands.isEmpty() ? "" :
                    fullRegister(operands.get(0));
                if (!destination.isBlank() &&
                        (("MOV".equals(mnemonic) && indexed.operandIndex == 1) ||
                         ("ADD".equals(mnemonic) && indexed.operandIndex == 1))) {
                    pointerOrigins.put(destination, evidence);
                    observeLoadedPointerUse(instructions, index, destination, evidence);
                }
            }

            observePointerElementUse(instruction, operands, pointerOrigins);

            if ("LEA".equals(mnemonic) && operands.size() >= 2) {
                String cursor = fullRegister(operands.get(0));
                AddressExpr expression = addressExpr(operands.get(1));
                ThisAddress base = thisAddress(expression, registers);
                if (!cursor.isBlank() && base != null && base.indexRegister.isBlank()) {
                    observeRecordLoop(function, owner, structure, instructions, index,
                        cursor, base.offset, factory);
                    observeExactLoop(function, owner, structure, instructions, index,
                        cursor, base.offset);
                }
            }

            updateState(instruction, mnemonic, operands, registers, stack, pointerOrigins);
            if (factory && isExactFactoryAllocationCall(instructions, index, structure))
                registers.put("EAX", Value.thisAddress(0));
            updateConstants(mnemonic, operands, constants);
        }
    }

    private void observeExactZeroSpan(Function function, String owner,
            Instruction instruction, String mnemonic, Map<String, Value> registers,
            Map<String, Long> constants) {
        int width = mnemonic.equals("STOSD.REP") ? 4 :
            mnemonic.equals("STOSB.REP") ? 1 : mnemonic.equals("STOSB") ? 1 : 0;
        if (width == 0 || constants.getOrDefault("EAX", Long.MIN_VALUE) != 0) return;
        Value destination = registers.get("EDI");
        if (destination == null || destination.thisOffset == null) return;
        long count = mnemonic.endsWith(".REP") ?
            constants.getOrDefault("ECX", -1L) : 1L;
        if (count < 1 || count > MAX_ARRAY_COUNT * 16L ||
                count > Long.MAX_VALUE / width) return;
        long bytes = count * width;
        SpanKey key = new SpanKey(owner, destination.thisOffset);
        SpanEvidence evidence = zeroSpans.computeIfAbsent(key, SpanEvidence::new);
        evidence.lengths.add((int)bytes);
        evidence.functions.add(addr(function.getEntryPoint()));
        evidence.sites.add(addr(instruction.getAddress()) + " exact zero span bytes=" + bytes);
        registers.put("EDI", Value.thisAddress(destination.thisOffset + bytes));
        if (mnemonic.endsWith(".REP")) constants.put("ECX", 0L);
    }

    private void updateConstants(String mnemonic, List<String> operands,
            Map<String, Long> constants) {
        if ("CALL".equals(mnemonic)) {
            constants.remove("EAX"); constants.remove("ECX"); constants.remove("EDX");
            return;
        }
        if (operands.isEmpty()) return;
        String destination = fullRegister(operands.get(0));
        if (destination.isBlank()) return;
        if ("XOR".equals(mnemonic) && operands.size() >= 2 &&
                destination.equals(fullRegister(operands.get(1)))) {
            constants.put(destination, 0L);
            return;
        }
        if ("MOV".equals(mnemonic) && operands.size() >= 2) {
            Long value = immediate(operands.get(1));
            if (value == null) value = constants.get(fullRegister(operands.get(1)));
            if (value == null) constants.remove(destination);
            else constants.put(destination, value);
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.size() >= 2) {
            Long current = constants.get(destination), value = immediate(operands.get(1));
            if (current == null || value == null) constants.remove(destination);
            else constants.put(destination,
                "SUB".equals(mnemonic) ? current - value : current + value);
            return;
        }
        if (writesFirstOperand(mnemonic) && !mnemonic.startsWith("STOS"))
            constants.remove(destination);
    }

    /**
     * Follow the value loaded from an array element for a short straight-line
     * window.  This complements the streaming register state at basic-block
     * joins and recognizes arrays such as byte *layers[8], where the selected
     * pointer is immediately used as [base + cellIndex].
     */
    private void observeLoadedPointerUse(List<Instruction> instructions, int loadIndex,
            String register, ArrayEvidence evidence) {
        int end = Math.min(instructions.size(), loadIndex + 25);
        for (int index = loadIndex + 1; index < end; index++) {
            Instruction instruction = instructions.get(index);
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);
            boolean dereferenced = false;
            for (String operand : operands) {
                if (!operand.contains("[") || !containsRegister(operand, register)) continue;
                AddressExpr expression = addressExpr(operand);
                if (expression == null || expression.registers.stream().noneMatch(term ->
                        register.equals(term.register) && term.scale == 1)) continue;
                int width = memoryWidth(operand);
                if (width < 1 || width > 8) continue;
                evidence.elementTypes.remove(unsignedType(evidence.key.elementSize));
                evidence.elementTypes.add("pointer:" + unsignedType(width));
                evidence.pointerDereferences++;
                if (evidence.sites.size() < 64)
                    evidence.sites.add(addr(instruction.getAddress()) +
                        " loaded element dereferenced with width=" + width + ": " +
                        instruction);
                dereferenced = true;
                break;
            }
            if (dereferenced || "CALL".equals(mnemonic) ||
                    instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) return;
            if (!operands.isEmpty() && register.equals(fullRegister(operands.get(0))) &&
                    writesFirstOperand(mnemonic) &&
                    !Set.of("ADD", "SUB", "INC", "DEC").contains(mnemonic)) return;
        }
    }

    private void observeBound(List<Instruction> instructions, int index, String mnemonic,
            List<String> operands, Map<String, Value> registers,
            Map<Long, Value> stack) {
        if (!"CMP".equals(mnemonic) || operands.size() < 2 ||
                index + 1 >= instructions.size()) return;
        String register = fullRegister(operands.get(0));
        Long limit = immediate(operands.get(1));
        if (register.isBlank() || limit == null || limit < 2 || limit > MAX_ARRAY_COUNT)
            return;
        String jump = instructions.get(index + 1).getMnemonicString()
            .toUpperCase(Locale.ROOT);
        if (!Set.of("JNC", "JAE", "JNB").contains(jump)) return;
        Value current = registers.get(register);
        Value bounded = current == null ? Value.bounded(limit.intValue()) :
            current.withBound(limit.intValue());
        registers.put(register, bounded);
        if (bounded.sourceStack != null) stack.put(bounded.sourceStack, bounded);
    }

    private IndexedAccess indexedAccess(String owner, Structure structure,
            Instruction instruction, List<String> operands, Map<String, Value> registers) {
        for (int operandIndex = 0; operandIndex < operands.size(); operandIndex++) {
            AddressExpr expression = addressExpr(operands.get(operandIndex));
            ThisAddress address = thisAddress(expression, registers);
            if (address == null || address.indexRegister.isBlank() ||
                    address.scale < 1 || address.scale > 16 ||
                    address.offset < 0 || address.offset >= structure.getLength()) continue;
            Value index = registers.get(address.indexRegister);
            int bound = index == null || index.upperBound == null ? -1 :
                index.upperBound;
            int accessWidth = memoryWidth(operands.get(operandIndex));
            String directType = "";
            if (accessWidth == address.scale)
                directType = unsignedType(accessWidth);
            ArrayKey key = new ArrayKey(owner, address.offset, address.scale);
            return new IndexedAccess(key, operandIndex, bound, directType);
        }
        return null;
    }

    private void observePointerElementUse(Instruction instruction, List<String> operands,
            Map<String, ArrayEvidence> pointerOrigins) {
        for (Map.Entry<String, ArrayEvidence> origin :
                new ArrayList<>(pointerOrigins.entrySet())) {
            for (String operand : operands) {
                if (!operand.contains("[") ||
                        !containsRegister(operand, origin.getKey())) continue;
                int width = memoryWidth(operand);
                if (width < 1 || width > 8) continue;
                origin.getValue().elementTypes.remove(
                    unsignedType(origin.getValue().key.elementSize));
                origin.getValue().elementTypes.add("pointer:" + unsignedType(width));
                origin.getValue().pointerDereferences++;
                if (origin.getValue().sites.size() < 64)
                    origin.getValue().sites.add(addr(instruction.getAddress()) +
                        " element pointee width=" + width + ": " + instruction);
            }
        }
    }

    private void observeExactLoop(Function function, String owner, Structure structure,
            List<Instruction> instructions, int leaIndex, String cursor, long offset) {
        CounterSeed seed = exactLoopCounterSeed(instructions, leaIndex);
        if (seed == null) return;

        int stride = -1;
        boolean decrement = false;
        boolean backwardLoop = false;
        boolean freesPointer = false;
        String counter = seed.register;
        String eaxPointerType = "";
        Map<Long, Set<String>> storedTypes = new TreeMap<>();
        Map<Long, Set<String>> exactStoredPointerTypes = new TreeMap<>();
        int end = Math.min(instructions.size(), leaIndex + MAX_LOOP_SCAN);
        for (int index = leaIndex + 1; index < end; index++) {
            Instruction instruction = instructions.get(index);
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);
            if (seed.stackOffset != null && "MOV".equals(mnemonic) &&
                    operands.size() >= 2 &&
                    seed.stackOffset.equals(stackOffset(instruction, 1))) {
                String loaded = fullRegister(operands.get(0));
                if (!loaded.isBlank()) counter = loaded;
            }
            if ("ADD".equals(mnemonic) && operands.size() >= 2 &&
                    cursor.equals(fullRegister(operands.get(0)))) {
                Long value = immediate(operands.get(1));
                if (value != null && Set.of(1L, 2L, 4L, 8L, 16L).contains(value))
                    stride = value.intValue();
            }
            if ("DEC".equals(mnemonic) && !operands.isEmpty() &&
                    counter.equals(fullRegister(operands.get(0)))) decrement = true;
            if ("CALL".equals(mnemonic) && index > leaIndex + 1) {
                Instruction prior = instructions.get(index - 1);
                List<String> pushed = operands(prior);
                Function called = resolveThunk(directCalledFunction(instruction));
                if ("PUSH".equalsIgnoreCase(prior.getMnemonicString()) &&
                        !pushed.isEmpty() && cursor.equals(fullRegister(pushed.get(0))) &&
                        called != null && called.getTags().stream().anyMatch(tag ->
                            "RECOVERED_UTILITY_FREE_AND_NULL".equals(tag.getName())))
                    freesPointer = true;
                eaxPointerType = pointerReturnType(called);
            }
            if ("MOV".equals(mnemonic) && operands.size() >= 2) {
                Long cursorDisplacement = cursorDisplacement(instruction, 0, cursor);
                if (cursorDisplacement != null) {
                    int width = memoryWidth(operands.get(0));
                    if (width == 0 && !fullRegister(operands.get(1)).isBlank())
                        width = 4;
                    if (width > 0) {
                        Set<String> types = storedTypes.computeIfAbsent(
                            cursorDisplacement, ignored -> new TreeSet<>());
                        String source = fullRegister(operands.get(1));
                        if ("EAX".equals(source) && !eaxPointerType.isBlank()) {
                            types.add(eaxPointerType);
                            exactStoredPointerTypes.computeIfAbsent(cursorDisplacement,
                                ignored -> new TreeSet<>()).add(eaxPointerType);
                        }
                        else if (immediate(operands.get(1)) == null)
                            types.add(unsignedType(width));
                    }
                }
            }
            if (instruction.getFlowType().isJump()) {
                for (Address target : instruction.getFlows()) {
                    if (target.compareTo(instructions.get(leaIndex).getAddress()) >= 0 &&
                            target.compareTo(instruction.getAddress()) < 0)
                        backwardLoop = true;
                }
            }
            if (!"CALL".equals(mnemonic) && !operands.isEmpty() &&
                    "EAX".equals(fullRegister(operands.get(0))) &&
                    writesFirstOperand(mnemonic)) {
                // A store which consumes EAX sees the current value before this
                // invalidation.  Every other EAX definition ends the exact call
                // result provenance.
                if (!("MOV".equals(mnemonic) &&
                        addressExpr(operands.get(0)) != null)) eaxPointerType = "";
            }
            if (stride > 0 && decrement && backwardLoop) break;
        }
        if (stride < 1 || !decrement || !backwardLoop ||
                offset < 0) return;

        // One optimized loop often advances a common cursor while writing two
        // or more disjoint fixed arrays at constant cursor displacements.  Each
        // destination displacement is its own exact member array; treating only
        // the LEA base loses the parallel arrays and can leave the cursor typed
        // as byte * even though every store is pointer-sized.
        if (storedTypes.isEmpty()) storedTypes.put(0L, new TreeSet<>());
        for (Map.Entry<Long, Set<String>> stored : storedTypes.entrySet()) {
            long memberOffset = offset + stored.getKey();
            if (memberOffset < 0 ||
                    memberOffset + (long)seed.count * stride > structure.getLength())
                continue;
            ArrayKey key = new ArrayKey(owner, memberOffset, stride);
            ArrayEvidence evidence = arrays.computeIfAbsent(key, ArrayEvidence::new);
            evidence.counts.add(seed.count);
            evidence.exactLoops++;
            evidence.functions.add(addr(function.getEntryPoint()));
            evidence.sites.add(addr(instructions.get(leaIndex).getAddress()) +
                " exact pointer walk count=" + seed.count + ", stride=" + stride +
                ", cursor_displacement=" + stored.getKey());
            if (!stored.getValue().isEmpty()) evidence.elementTypes.addAll(stored.getValue());
            else if (freesPointer) evidence.elementTypes.add("pointer:/void");
            else evidence.elementTypes.add(unsignedType(stride));
            evidence.exactPointerTypes.addAll(
                exactStoredPointerTypes.getOrDefault(stored.getKey(), Set.of()));
        }
    }

    /**
     * Recover a repeated record independently of the scalar member-array logic above.
     * x86 SIB scales stop at eight, so MSVC advances a record cursor explicitly for
     * packed elements such as 0x1fb-byte UI records.  An exact decrementing loop proves
     * the count; other loops with the same owner/stride contribute only member geometry.
     */
    private void observeRecordLoop(Function function, String owner, Structure structure,
            List<Instruction> instructions, int leaIndex, String cursor, long offset,
            boolean factory) {
        boolean backwardLoop = false;
        Address loopTarget = null;
        String conditionCounter = "";
        int stride = -1;
        Map<String, Long> aliases = new HashMap<>();
        aliases.put(cursor, 0L);
        Map<Long, Set<Integer>> accesses = new TreeMap<>();
        Map<Long, Map<String, Integer>> typedObjects = new TreeMap<>();
        Set<String> sites = new TreeSet<>();

        int end = Math.min(instructions.size(), leaIndex + MAX_RECORD_LOOP_SCAN);
        for (int index = leaIndex + 1; index < end; index++) {
            Instruction instruction = instructions.get(index);
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);

            if (!"LEA".equals(mnemonic)) {
                for (int operandIndex = 0; operandIndex < operands.size(); operandIndex++) {
                    if (!OperandType.isIndirect(instruction.getOperandType(operandIndex)) &&
                            !operands.get(operandIndex).contains(" PTR [")) continue;
                    Long relative = aliasDisplacement(operands.get(operandIndex), aliases);
                    int width = memoryWidth(operands.get(operandIndex));
                    if (relative == null || width < 1 || width > 16) continue;
                    long absolute = offset + relative;
                    if (absolute < 0 || absolute + width > structure.getLength()) continue;
                    accesses.computeIfAbsent(absolute, ignored -> new TreeSet<>()).add(width);
                    if (sites.size() < 128)
                        sites.add(addr(instruction.getAddress()) + " " + instruction);
                }
            }

            if ("CALL".equals(mnemonic)) {
                Long receiver = aliases.get("ECX");
                Structure receiverType = receiverStructure(resolveThunk(
                    directCalledFunction(instruction)));
                if (receiver != null && receiverType != null && receiverType.getLength() > 0 &&
                        receiverType.getLength() <= MAX_RECORD_STRIDE) {
                    long absolute = offset + receiver;
                    if (absolute >= 0 && absolute + receiverType.getLength() <=
                            structure.getLength()) {
                        typedObjects.computeIfAbsent(absolute, ignored -> new TreeMap<>())
                            .merge(receiverType.getPathName(), 1, Integer::sum);
                        sites.add(addr(instruction.getAddress()) + " typed nested receiver=" +
                            receiverType.getPathName() + " at owner+" + hex(absolute));
                    }
                }
            }

            if ("ADD".equals(mnemonic) && operands.size() >= 2 &&
                    cursor.equals(fullRegister(operands.get(0)))) {
                Long value = immediate(operands.get(1));
                if (value != null && value > 16 && value <= MAX_RECORD_STRIDE)
                    stride = value.intValue();
            }
            if ("DEC".equals(mnemonic) && !operands.isEmpty())
                conditionCounter = fullRegister(operands.get(0));
            else if (writesConditionFlags(mnemonic)) conditionCounter = "";
            if (instruction.getFlowType().isJump()) {
                for (Address target : instruction.getFlows()) {
                    if (target.compareTo(instructions.get(leaIndex).getAddress()) >= 0 &&
                            target.compareTo(instruction.getAddress()) < 0) {
                        backwardLoop = true;
                        loopTarget = target;
                    }
                }
            }

            updateCursorAliases(mnemonic, operands, aliases, cursor, stride);
            // A later independent definition of the same machine register starts a
            // different cursor lifetime.  Do not let an earlier LEA inherit that
            // later loop's stride merely because MSVC reused EDI/EDX.
            if (!aliases.containsKey(cursor) && stride <= 16) return;
            if (stride > 16 && backwardLoop) break;
        }
        if (stride <= 16 || !backwardLoop || offset < 0) return;

        Integer exactCount = exactRecordLoopCount(instructions, leaIndex, loopTarget,
            conditionCounter);

        RecordKey key = new RecordKey(owner, stride);
        RecordEvidence evidence = recordArrays.computeIfAbsent(key, RecordEvidence::new);
        evidence.loops++;
        evidence.functions.add(addr(function.getEntryPoint()));
        evidence.boundaries.add(offset);
        evidence.sites.add(addr(instructions.get(leaIndex).getAddress()) +
            " record cursor owner+" + hex(offset) + ", stride=" + hex(stride) +
            (exactCount != null ? ", exact_count=" + exactCount :
                ", runtime_bound"));
        evidence.sites.addAll(sites);
        for (Map.Entry<Long, Set<Integer>> access : accesses.entrySet())
            evidence.accessWidths.computeIfAbsent(access.getKey(), ignored -> new TreeSet<>())
                .addAll(access.getValue());
        for (Map.Entry<Long, Map<String, Integer>> object : typedObjects.entrySet())
            for (Map.Entry<String, Integer> type : object.getValue().entrySet())
                evidence.typedObjects.computeIfAbsent(object.getKey(),
                    ignored -> new TreeMap<>()).merge(type.getKey(), type.getValue(),
                        Integer::sum);
        if (exactCount != null) {
            evidence.counts.add(exactCount);
            if (factory) evidence.factoryCounts.add(exactCount);
            evidence.exactLoops++;
        }
    }

    private Integer exactRecordLoopCount(List<Instruction> instructions, int leaIndex,
            Address loopTarget, String counter) {
        if (loopTarget == null || counter.isBlank()) return null;
        int targetIndex = -1;
        for (int index = leaIndex; index < instructions.size(); index++) {
            if (instructions.get(index).getAddress().equals(loopTarget)) {
                targetIndex = index;
                break;
            }
        }
        if (targetIndex < 0) return null;
        int first = Math.max(0, Math.min(leaIndex, targetIndex) - 12);
        for (int index = targetIndex - 1; index >= first; index--) {
            Instruction instruction = instructions.get(index);
            List<String> operands = operands(instruction);
            if (operands.isEmpty() ||
                    !counter.equals(fullRegister(operands.get(0))) ||
                    !writesFirstOperand(instruction.getMnemonicString().toUpperCase(
                        Locale.ROOT))) continue;
            if (!"MOV".equalsIgnoreCase(instruction.getMnemonicString()) ||
                    operands.size() < 2) break;
            Long count = immediate(operands.get(1));
            if (count != null && count >= 2 && count <= MAX_ARRAY_COUNT)
                return count.intValue();
            break;
        }

        // Optimized frame-pointer builds commonly spill the loop count:
        //   mov [ebp-4], N; loop: mov eax,[ebp-4]; ...; dec eax;
        //   mov [ebp-4],eax; jnz loop
        // The matching load and write-back make this the same induction value;
        // an arbitrary nearby stack constant is not accepted.
        Long counterStack = null;
        boolean decrementSeen = false;
        boolean writeBack = false;
        int loopEnd = -1;
        for (int index = targetIndex;
                index < Math.min(instructions.size(), targetIndex + MAX_RECORD_LOOP_SCAN);
                index++) {
            Instruction instruction = instructions.get(index);
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);
            if ("MOV".equals(mnemonic) && operands.size() >= 2 &&
                    counter.equals(fullRegister(operands.get(0)))) {
                Long loaded = stackOffset(instruction, 1);
                if (loaded != null) counterStack = loaded;
            }
            if ("DEC".equals(mnemonic) && !operands.isEmpty() &&
                    counter.equals(fullRegister(operands.get(0)))) decrementSeen = true;
            if (decrementSeen && counterStack != null && "MOV".equals(mnemonic) &&
                    operands.size() >= 2 && counterStack.equals(stackOffset(instruction, 0)) &&
                    counter.equals(fullRegister(operands.get(1)))) writeBack = true;
            if (instruction.getFlowType().isJump()) {
                for (Address target : instruction.getFlows()) {
                    if (target.equals(loopTarget)) loopEnd = index;
                }
                if (loopEnd >= 0) break;
            }
        }
        if (counterStack == null || !decrementSeen || !writeBack || loopEnd < 0)
            return null;
        first = Math.max(0, Math.min(leaIndex, targetIndex) - 16);
        for (int index = targetIndex - 1; index >= first; index--) {
            Instruction instruction = instructions.get(index);
            List<String> operands = operands(instruction);
            if (!"MOV".equalsIgnoreCase(instruction.getMnemonicString()) ||
                    operands.size() < 2 ||
                    !counterStack.equals(stackOffset(instruction, 0))) continue;
            Long count = immediate(operands.get(1));
            if (count == null || count < 2 || count > MAX_ARRAY_COUNT) return null;
            return count.intValue();
        }
        return null;
    }

    private boolean writesConditionFlags(String mnemonic) {
        return Set.of("ADD", "ADC", "SUB", "SBB", "INC", "NEG", "AND", "OR",
            "XOR", "CMP", "TEST", "SHL", "SHR", "SAR", "ROL", "ROR", "MUL",
            "IMUL", "DIV", "IDIV").contains(mnemonic);
    }

    private Long aliasDisplacement(String operand, Map<String, Long> aliases) {
        AddressExpr expression = addressExpr(operand);
        if (expression == null || expression.registers.size() != 1) return null;
        RegisterTerm term = expression.registers.get(0);
        if (term.scale != 1 || !aliases.containsKey(term.register)) return null;
        return aliases.get(term.register) + expression.displacement;
    }

    private void updateCursorAliases(String mnemonic, List<String> operands,
            Map<String, Long> aliases, String cursor, int stride) {
        if ("CALL".equals(mnemonic)) {
            aliases.remove("EAX"); aliases.remove("ECX"); aliases.remove("EDX");
            return;
        }
        if (operands.isEmpty()) return;
        String destination = fullRegister(operands.get(0));
        if (destination.isBlank()) return;
        if ("MOV".equals(mnemonic) && operands.size() >= 2) {
            String source = fullRegister(operands.get(1));
            Long value = aliases.get(source);
            if (value == null) aliases.remove(destination);
            else aliases.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.size() >= 2) {
            Long value = aliasDisplacement(operands.get(1), aliases);
            if (value == null) aliases.remove(destination);
            else aliases.put(destination, value);
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                operands.size() >= 2 && aliases.containsKey(destination)) {
            Long delta = immediate(operands.get(1));
            // The cursor increment is the loop latch, not an in-iteration alias shift.
            if (destination.equals(cursor) && delta != null && delta == stride) return;
            if (delta == null) aliases.remove(destination);
            else aliases.put(destination, aliases.get(destination) +
                ("SUB".equals(mnemonic) ? -delta : delta));
            return;
        }
        if (writesFirstOperand(mnemonic)) aliases.remove(destination);
    }

    private Structure receiverStructure(Function function) {
        if (function == null || !"__thiscall".equals(function.getCallingConventionName()))
            return null;
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isAutoParameter() ||
                    !(parameter.getDataType() instanceof Pointer pointer)) continue;
            DataType pointed = untypedef(pointer.getDataType());
            if (pointed instanceof Structure structure) return structure;
        }
        return null;
    }

    private Long cursorDisplacement(Instruction instruction, int operandIndex,
            String cursor) {
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return null;
        String representation = instruction.getDefaultOperandRepresentation(operandIndex);
        AddressExpr rendered = addressExpr(representation);
        if (rendered != null && rendered.registers.size() == 1 &&
                cursor.equals(rendered.registers.get(0).register) &&
                rendered.registers.get(0).scale == 1) return rendered.displacement;

        boolean found = false;
        long displacement = 0;
        for (Object object : instruction.getOpObjects(operandIndex)) {
            if (object instanceof Register register) {
                if (found || !cursor.equals(fullRegister(register.getName()))) return null;
                found = true;
            }
            else if (object instanceof Scalar scalar)
                displacement += scalar.getSignedValue();
            else if (object instanceof Address) return null;
        }
        return found ? displacement : null;
    }

    /**
     * MSVC commonly spills a constant loop count to [EBP-local], reloads it at
     * the loop latch, decrements the register, and stores it back.  Accept that
     * form as well as the simpler register counter, but only when the exact
     * immediate seed is adjacent to the pointer-walk setup.
     */
    private CounterSeed exactLoopCounterSeed(List<Instruction> instructions,
            int leaIndex) {
        int first = Math.max(0, leaIndex - 4);
        int last = Math.min(instructions.size() - 1, leaIndex + 5);
        for (int index = first; index <= last; index++) {
            Instruction instruction = instructions.get(index);
            if (!"MOV".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            List<String> operands = operands(instruction);
            if (operands.size() < 2) continue;
            Long value = immediate(operands.get(1));
            if (value == null || value < 2 || value > MAX_ARRAY_COUNT) continue;
            String register = fullRegister(operands.get(0));
            Long stack = stackOffset(instruction, 0);
            if (!register.isBlank() || stack != null)
                return new CounterSeed(value.intValue(), register, stack);
        }
        return null;
    }

    private String pointerReturnType(Function function) {
        if (function == null) return "";
        DataType type = function.getReturnType();
        if (!(type instanceof Pointer pointer)) return "";
        DataType pointed = pointer.getDataType();
        return "pointer:" + pointed.getPathName();
    }

    private void updateState(Instruction instruction, String mnemonic, List<String> operands,
            Map<String, Value> registers, Map<Long, Value> stack,
            Map<String, ArrayEvidence> pointerOrigins) {
        if (operands.isEmpty()) return;
        String destination = fullRegister(operands.get(0));
        if ("CALL".equals(mnemonic)) {
            for (String register : List.of("EAX", "ECX", "EDX")) {
                registers.remove(register);
                pointerOrigins.remove(register);
            }
            return;
        }
        if ("MOV".equals(mnemonic) && operands.size() >= 2) {
            Long destinationStack = stackOffset(instruction, 0);
            String sourceRegister = fullRegister(operands.get(1));
            if (destinationStack != null && !sourceRegister.isBlank()) {
                Value value = registers.get(sourceRegister);
                if (value == null) stack.remove(destinationStack);
                else stack.put(destinationStack, value);
                return;
            }
            if (destination.isBlank()) return;
            if (!sourceRegister.isBlank()) {
                Value value = registers.get(sourceRegister);
                if (value == null) registers.remove(destination);
                else registers.put(destination, value);
                ArrayEvidence origin = pointerOrigins.get(sourceRegister);
                if (origin == null) pointerOrigins.remove(destination);
                else pointerOrigins.put(destination, origin);
                return;
            }
            Long sourceStack = stackOffset(instruction, 1);
            if (sourceStack != null) {
                Value value = stack.get(sourceStack);
                if (value == null) value = Value.stackSource(sourceStack);
                registers.put(destination, value);
                pointerOrigins.remove(destination);
                return;
            }
            registers.remove(destination);
            // indexedAccess() may have just installed a pointer origin for this load.
            if (!pointerOrigins.containsKey(destination)) pointerOrigins.remove(destination);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.size() >= 2 && !destination.isBlank()) {
            AddressExpr expression = addressExpr(operands.get(1));
            ThisAddress address = thisAddress(expression, registers);
            if (address != null && address.indexRegister.isBlank())
                registers.put(destination, Value.thisAddress(address.offset));
            else registers.remove(destination);
            ArrayEvidence origin = null;
            for (Map.Entry<String, ArrayEvidence> item : pointerOrigins.entrySet())
                if (containsRegister(operands.get(1), item.getKey())) {
                    origin = item.getValue();
                    break;
                }
            if (origin == null) pointerOrigins.remove(destination);
            else pointerOrigins.put(destination, origin);
            return;
        }
        if (!destination.isBlank() && writesFirstOperand(mnemonic)) {
            if (!Set.of("ADD", "SUB", "INC", "DEC").contains(mnemonic)) {
                registers.remove(destination);
                pointerOrigins.remove(destination);
            }
        }
    }

    private List<Proposal> makeProposals() {
        List<Proposal> result = new ArrayList<>();
        for (ArrayEvidence evidence : arrays.values()) {
            applyExactZeroExtent(evidence);
            if (evidence.counts.size() != 1) continue;
            int count = evidence.counts.iterator().next();
            String elementType = selectElementType(evidence);
            if (elementType.isBlank()) continue;
            int size = count * evidence.key.elementSize;
            Structure structure = findOwnerType(evidence.key.owner);
            boolean rangeValid = structure != null && evidence.key.offset >= 0 &&
                evidence.key.offset + size <= structure.getLength();
            boolean strong = evidence.exactLoops > 0 ||
                evidence.boundedSites >= 2 ||
                (evidence.boundedSites > 0 && evidence.pointerDereferences > 0);
            boolean apply = rangeValid && strong &&
                elementLength(elementType) == evidence.key.elementSize &&
                !overlapsMeaningfulManualComponent(structure, evidence.key.offset, size);
            String reason = "fixed member array from machine evidence: counts=" +
                evidence.counts + ", bounded_sites=" + evidence.boundedSites +
                ", exact_loops=" + evidence.exactLoops +
                ", pointer_dereferences=" + evidence.pointerDereferences +
                ", element_candidates=" + evidence.elementTypes +
                ", exact_pointer_candidates=" + evidence.exactPointerTypes +
                (rangeValid ? "" : "; range_outside_owner") +
                (strong ? "" : "; insufficient_exact_extent_evidence");
            result.add(new Proposal(apply, evidence.key, count, size, elementType,
                evidence.boundedSites, evidence.exactLoops,
                evidence.pointerDereferences, apply ? "high" : "review", reason,
                evidence.functions, evidence.sites, false));
        }
        result.sort(Comparator.comparing((Proposal row) -> row.key.owner)
            .thenComparingLong(row -> row.key.offset));
        disableOverlaps(result);
        return result;
    }

    private RecordProposals makeRecordProposals(List<Proposal> arraysOut) {
        List<RecordTypeProposal> types = new ArrayList<>();
        List<RecordFieldProposal> fields = new ArrayList<>();
        for (RecordEvidence evidence : recordArrays.values()) {
            Set<Integer> extentCounts = evidence.factoryCounts.size() == 1 ?
                evidence.factoryCounts : evidence.counts;
            int stride = evidence.key.stride;
            Structure owner = findOwnerType(evidence.key.owner);
            if (owner == null || evidence.boundaries.isEmpty()) continue;
            long base = recordBase(evidence);
            String safeOwner = evidence.key.owner.replaceAll("[^A-Za-z0-9_]", "_");
            String typePath = RECORD_TYPE_ROOT + safeOwner + "_Record_" +
                String.format("%04X", base) + "_" + String.format("%04X", stride);
            if (extentCounts.size() != 1 || evidence.exactLoops < 1 ||
                    evidence.loops < 2) {
                String reason = "review-only repeated record geometry: counts=" +
                    evidence.counts + ", factory_counts=" + evidence.factoryCounts +
                    ", stride=" + hex(stride) + ", loops=" + evidence.loops +
                    ", exact_loops=" + evidence.exactLoops +
                    "; ambiguous_or_missing_exact_extent";
                types.add(new RecordTypeProposal(false, evidence.key.owner, base,
                    typePath, stride, 0, evidence.accessWidths.size(), reason,
                    evidence.functions, evidence.sites));
                continue;
            }
            int count = extentCounts.iterator().next();
            long total = (long)count * stride;
            boolean range = base >= 0 && total <= Integer.MAX_VALUE &&
                base + total <= owner.getLength();
            boolean owned = isOwnedUnchanged(owner);
            List<RecordFieldProposal> selected = range ? recordFields(owner, evidence,
                base, count, stride, typePath) : List.of();
            boolean hasTypedObject = selected.stream().anyMatch(row ->
                !row.type.startsWith("/undefined") && row.size > 4);
            boolean apply = range && owned && selected.size() >= 3 &&
                (hasTypedObject || evidence.accessWidths.size() >= 6);
            String reason = "fixed inline record array from exact cursor loops: counts=" +
                evidence.counts + ", factory_counts=" + evidence.factoryCounts +
                ", stride=" + hex(stride) + ", loops=" +
                evidence.loops + ", exact_loops=" + evidence.exactLoops +
                ", boundaries=" + evidence.boundaries + ", access_offsets=" +
                evidence.accessWidths.size() + ", typed_nested_objects=" +
                evidence.typedObjects.size() + (range ? "" : "; range_outside_owner") +
                (owned ? "" : "; owner_layout_hash_changed_or_unowned") +
                (selected.size() >= 3 ? "" : "; insufficient_nonoverlapping_fields") +
                (hasTypedObject || evidence.accessWidths.size() >= 6 ? "" :
                    "; insufficient_record_semantics");
            RecordTypeProposal type = new RecordTypeProposal(apply,
                evidence.key.owner, base, typePath, stride, selected.size(),
                evidence.accessWidths.size(), reason, evidence.functions, evidence.sites);
            types.add(type);
            for (RecordFieldProposal field : selected) field.apply = apply;
            fields.addAll(selected);
            ArrayKey key = new ArrayKey(evidence.key.owner, base, stride);
            arraysOut.add(new Proposal(apply, key, count, (int)total, typePath,
                0, evidence.exactLoops, evidence.accessWidths.size(),
                apply ? "high" : "review", reason, evidence.functions,
                evidence.sites, true));
        }
        types.sort(Comparator.comparing((RecordTypeProposal row) -> row.owner)
            .thenComparingLong(row -> row.parentOffset));
        fields.sort(Comparator.comparing((RecordFieldProposal row) -> row.typePath)
            .thenComparingLong(row -> row.offset));
        arraysOut.sort(Comparator.comparing((Proposal row) -> row.key.owner)
            .thenComparingLong(row -> row.key.offset));
        disableOverlaps(arraysOut);
        return new RecordProposals(types, fields);
    }

    private long recordBase(RecordEvidence evidence) {
        long base = evidence.boundaries.stream().mapToLong(Long::longValue)
            .min().orElse(Long.MAX_VALUE);
        if (!evidence.accessWidths.isEmpty())
            base = Math.min(base, evidence.accessWidths.keySet().stream()
                .mapToLong(Long::longValue).min().orElse(base));
        if (!evidence.typedObjects.isEmpty())
            base = Math.min(base, evidence.typedObjects.keySet().stream()
                .mapToLong(Long::longValue).min().orElse(base));
        return base;
    }

    private List<RecordFieldProposal> recordFields(Structure owner,
            RecordEvidence evidence, long base, int count, int stride, String typePath) {
        Map<FieldCandidateKey, FieldCandidate> candidates = new TreeMap<>();
        DataTypeComponent arrayComponent = base <= Integer.MAX_VALUE ?
            owner.getComponentAt((int)base) : null;
        DataType arrayType = arrayComponent != null && arrayComponent.getOffset() == base ?
            untypedef(arrayComponent.getDataType()) : null;
        if (arrayType instanceof Array array && array.getNumElements() == count &&
                array.getElementLength() == stride &&
                untypedef(array.getDataType()) instanceof Structure existingElement) {
            addStructureCandidates(candidates, existingElement, 0, stride, 4,
                "existing exact record-array element");
        }
        else {
            long end = base + (long)count * stride;
            for (DataTypeComponent component : owner.getDefinedComponents()) {
                long absolute = component.getOffset();
                if (absolute < base || absolute >= end) continue;
                long relative = (absolute - base) % stride;
                if (component.getLength() < 1 || relative + component.getLength() > stride)
                    continue;
                DataType type = untypedef(component.getDataType());
                int priority = isUndefinedType(type) ? 2 : 3;
                addCandidate(candidates, new FieldCandidate(relative,
                    component.getLength(), typeSpecification(type), priority, 1,
                    "existing hash-owned class member " + hex(absolute)));
            }
        }

        for (Map.Entry<Long, Map<String, Integer>> entry : evidence.typedObjects.entrySet()) {
            if (entry.getKey() < base ||
                    entry.getKey() >= base + (long)count * stride) continue;
            long relative = Math.floorMod(entry.getKey() - base, stride);
            if (entry.getValue().size() != 1) continue;
            Map.Entry<String, Integer> vote = entry.getValue().entrySet().iterator().next();
            DataType type = dataTypes.getDataType(vote.getKey());
            if (!(untype(type) instanceof Structure structure) ||
                    relative + structure.getLength() > stride) continue;
            addCandidate(candidates, new FieldCandidate(relative, structure.getLength(),
                structure.getPathName(), 5, vote.getValue(),
                "exact repeated typed receiver construction"));
        }

        Map<Long, Set<Integer>> relativeWidths = new TreeMap<>();
        for (Map.Entry<Long, Set<Integer>> entry : evidence.accessWidths.entrySet()) {
            if (entry.getKey() < base ||
                    entry.getKey() >= base + (long)count * stride) continue;
            long relative = Math.floorMod(entry.getKey() - base, stride);
            relativeWidths.computeIfAbsent(relative, ignored -> new TreeSet<>())
                .addAll(entry.getValue());
        }
        for (Map.Entry<Long, Set<Integer>> entry : relativeWidths.entrySet()) {
            if (entry.getValue().size() != 1) continue;
            int width = entry.getValue().iterator().next();
            if (entry.getKey() + width > stride) continue;
            addCandidate(candidates, new FieldCandidate(entry.getKey(), width,
                "/undefined" + width, 1, 1, "exact record-cursor machine access"));
        }

        List<FieldCandidate> ordered = new ArrayList<>(candidates.values());
        ordered.sort(Comparator.<FieldCandidate>comparingInt(row -> row.priority).reversed()
            .thenComparing(Comparator.comparingInt((FieldCandidate row) -> row.evidence)
                .reversed()).thenComparingLong(row -> row.offset));
        List<FieldCandidate> selected = new ArrayList<>();
        Set<FieldCandidateKey> conflicted = new HashSet<>();
        for (int left = 0; left < ordered.size(); left++) {
            FieldCandidate a = ordered.get(left);
            for (int right = left + 1; right < ordered.size(); right++) {
                FieldCandidate b = ordered.get(right);
                if (a.priority != b.priority || a.priority < 3) continue;
                if (a.offset < b.offset + b.size && b.offset < a.offset + a.size &&
                        !(a.offset == b.offset && a.size == b.size &&
                            a.type.equals(b.type))) {
                    conflicted.add(a.key()); conflicted.add(b.key());
                }
            }
        }
        for (FieldCandidate candidate : ordered) {
            if (conflicted.contains(candidate.key())) continue;
            boolean overlap = selected.stream().anyMatch(field -> candidate.offset <
                field.offset + field.size && field.offset < candidate.offset + candidate.size);
            if (!overlap) selected.add(candidate);
        }
        selected.sort(Comparator.comparingLong(row -> row.offset));
        List<RecordFieldProposal> result = new ArrayList<>();
        for (FieldCandidate field : selected)
            result.add(new RecordFieldProposal(false, typePath, field.offset, field.size,
                String.format("field_%04X", field.offset), field.type, field.evidence,
                field.reason));
        return result;
    }

    private void addStructureCandidates(Map<FieldCandidateKey, FieldCandidate> candidates,
            Structure structure, long base, int stride, int priority, String reason) {
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            long offset = base + component.getOffset();
            if (offset < 0 || component.getLength() < 1 ||
                    offset + component.getLength() > stride) continue;
            addCandidate(candidates, new FieldCandidate(offset, component.getLength(),
                typeSpecification(component.getDataType()), priority, 1, reason));
        }
    }

    private void addCandidate(Map<FieldCandidateKey, FieldCandidate> candidates,
            FieldCandidate candidate) {
        FieldCandidate old = candidates.get(candidate.key());
        if (old == null) candidates.put(candidate.key(), candidate);
        else candidates.put(candidate.key(), new FieldCandidate(candidate.offset,
            candidate.size, candidate.type, Math.max(old.priority, candidate.priority),
            old.evidence + candidate.evidence, old.reason + " | " + candidate.reason));
    }

    private void applyExactZeroExtent(ArrayEvidence evidence) {
        if (!evidence.counts.isEmpty() || evidence.sites.size() < 3) return;
        SpanEvidence span = zeroSpans.get(new SpanKey(evidence.key.owner,
            evidence.key.offset));
        if (span == null || span.lengths.size() != 1) return;
        int bytes = span.lengths.iterator().next();
        if (bytes < evidence.key.elementSize * 2 || bytes % evidence.key.elementSize != 0)
            return;
        int count = bytes / evidence.key.elementSize;
        if (count > MAX_ARRAY_COUNT) return;
        Structure structure = findOwnerType(evidence.key.owner);
        if (!genericStrideRange(structure, evidence.key.offset, bytes,
                evidence.key.elementSize)) return;
        evidence.counts.add(count);
        evidence.exactLoops++;
        evidence.functions.addAll(span.functions);
        evidence.sites.addAll(span.sites);
        evidence.sites.add("exact zero-init extent supplies count=" + count +
            " for independently indexed stride=" + evidence.key.elementSize);
    }

    private boolean genericStrideRange(Structure structure, long offset, int bytes,
            int stride) {
        if (structure == null || offset < 0 || offset + bytes > structure.getLength())
            return false;
        for (ghidra.program.model.data.DataTypeComponent component :
                structure.getDefinedComponents()) {
            if (component.getOffset() >= offset + bytes ||
                    component.getEndOffset() < offset) continue;
            if ((component.getOffset() - offset) % stride != 0 ||
                    component.getLength() > stride) return false;
            DataType type = component.getDataType();
            if (!(type instanceof ghidra.program.model.data.Undefined) &&
                    !(type instanceof ghidra.program.model.data.AbstractIntegerDataType))
                return false;
        }
        return true;
    }

    private String selectElementType(ArrayEvidence evidence) {
        Set<String> candidates = evidence.elementTypes;
        if (candidates.isEmpty()) return "";
        if (evidence.exactPointerTypes.size() == 1) {
            String exact = evidence.exactPointerTypes.iterator().next();
            boolean onlySameWidthGeneric = candidates.stream().allMatch(value ->
                value.equals(exact) || (!value.startsWith("pointer:") &&
                    elementLength(value) == evidence.key.elementSize));
            if (onlySameWidthGeneric) return exact;
        }
        List<String> pointers = candidates.stream()
            .filter(value -> value.startsWith("pointer:")).toList();
        if (!pointers.isEmpty()) {
            List<String> concrete = pointers.stream()
                .filter(value -> !value.equals("pointer:/void")).distinct().toList();
            if (concrete.size() == 1 && candidates.stream().allMatch(value ->
                    value.startsWith("pointer:"))) return concrete.get(0);
            if (concrete.isEmpty() && pointers.size() == candidates.size())
                return "pointer:/void";
            return "";
        }
        return candidates.size() == 1 ? candidates.iterator().next() : "";
    }

    private boolean overlapsMeaningfulManualComponent(Structure structure, long offset,
            int size) {
        if (structure == null) return true;
        String description = structure.getDescription();
        if (description == null || !description.contains("[STClassLayoutApplier]"))
            return true;
        for (ghidra.program.model.data.DataTypeComponent component :
                structure.getDefinedComponents()) {
            if (component.getOffset() >= offset + size ||
                    component.getEndOffset() < offset) continue;
            String comment = component.getComment();
            if (comment == null || !comment.contains("[STClassLayoutApplier]")) return true;
        }
        return false;
    }

    private void disableOverlaps(List<Proposal> rows) {
        for (int left = 0; left < rows.size(); left++) {
            Proposal a = rows.get(left);
            if (!a.apply) continue;
            for (int right = left + 1; right < rows.size(); right++) {
                if (!a.apply) break;
                Proposal b = rows.get(right);
                if (!a.key.owner.equals(b.key.owner)) break;
                if (b.key.offset >= a.key.offset + a.size) break;
                if (!b.apply) continue;
                if (a.recordArray != b.recordArray) {
                    Proposal record = a.recordArray ? a : b;
                    Proposal scalar = a.recordArray ? b : a;
                    if (scalar.key.offset >= record.key.offset &&
                            scalar.key.offset + scalar.size <= record.key.offset + record.size) {
                        scalar.apply = false;
                        scalar.reason += "; contained_by_record_array_" +
                            hex(record.key.offset);
                        continue;
                    }
                }
                a.apply = false;
                b.apply = false;
                a.reason += "; overlaps_array_" + hex(b.key.offset);
                b.reason += "; overlaps_array_" + hex(a.key.offset);
            }
        }
    }

    private ThisAddress thisAddress(AddressExpr expression,
            Map<String, Value> registers) {
        if (expression == null) return null;
        String thisRegister = "";
        long thisOffset = 0;
        List<RegisterTerm> other = new ArrayList<>();
        for (RegisterTerm term : expression.registers) {
            Value value = registers.get(term.register);
            if (value != null && value.thisOffset != null && term.scale == 1 &&
                    thisRegister.isBlank()) {
                thisRegister = term.register;
                thisOffset = value.thisOffset;
            }
            else other.add(term);
        }
        if (thisRegister.isBlank() || other.size() > 1) return null;
        if (other.isEmpty())
            return new ThisAddress(thisOffset + expression.displacement, "", 0);
        RegisterTerm index = other.get(0);
        return new ThisAddress(thisOffset + expression.displacement,
            index.register, index.scale);
    }

    private AddressExpr addressExpr(String operand) {
        if (operand == null) return null;
        String value = operand.toUpperCase(Locale.ROOT);
        int open = value.indexOf('['), close = value.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        value = value.substring(open + 1, close).replace(" ", "")
            .replace("-", "+-");
        List<RegisterTerm> registers = new ArrayList<>();
        long displacement = 0;
        for (String term : value.split("\\+")) {
            if (term.isBlank()) continue;
            Matcher matcher = REGISTER_TERM.matcher(term);
            if (matcher.matches()) {
                Long scale = matcher.group(2) == null ? 1L : immediate(matcher.group(2));
                if (scale == null || scale < 1 || scale > 16) return null;
                registers.add(new RegisterTerm(matcher.group(1), scale.intValue()));
                continue;
            }
            Long immediate = immediate(term);
            if (immediate == null) return null;
            // Ghidra commonly renders a negative 32-bit LEA displacement as an
            // unsigned hexadecimal literal (for example 0xffffff6f == -0x91).
            // This conversion belongs only to address geometry; the same bit
            // pattern used as an ordinary immediate may intentionally be unsigned.
            String normalized = term.toUpperCase(Locale.ROOT);
            if (!normalized.startsWith("-") && normalized.startsWith("0X") &&
                    immediate >= 0x80000000L && immediate <= 0xffffffffL)
                immediate -= 0x100000000L;
            displacement += immediate;
        }
        return new AddressExpr(registers, displacement);
    }

    private Long stackOffset(String operand) {
        if (operand == null) return null;
        String value = operand.toUpperCase(Locale.ROOT).replace("BYTE PTR", "")
            .replace("WORD PTR", "").replace("DWORD PTR", "")
            .replace("QWORD PTR", "").replace(" ", "");
        Matcher matcher = STACK.matcher(value);
        if (!matcher.matches()) return null;
        if (matcher.group(2) == null) return 0L;
        Long parsed = immediate(matcher.group(2));
        if (parsed == null) return null;
        return "-".equals(matcher.group(1)) ? -parsed : parsed;
    }

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
                if (!"EBP".equals(fullRegister(register.getName()))) return null;
                ebp = true;
            }
            else if (object instanceof Scalar scalar) {
                displacement += scalar.getSignedValue();
                scalars++;
            }
        }
        return ebp && scalars <= 1 ? displacement : null;
    }

    private int memoryWidth(String operand) {
        String value = operand == null ? "" : operand.toUpperCase(Locale.ROOT);
        if (value.contains("BYTE PTR")) return 1;
        if (value.contains("WORD PTR") && !value.contains("DWORD PTR") &&
                !value.contains("QWORD PTR")) return 2;
        if (value.contains("DWORD PTR")) return 4;
        if (value.contains("QWORD PTR")) return 8;
        return 0;
    }

    private String unsignedType(int width) {
        return switch (width) {
            case 1 -> "/byte";
            case 2 -> "/ushort";
            case 4 -> "/uint";
            case 8 -> "/ulonglong";
            default -> "";
        };
    }

    private int elementLength(String specification) {
        if (specification.startsWith("pointer:"))
            return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef definition) type = definition.getBaseDataType();
        return type;
    }

    private DataType untype(DataType type) { return untypedef(type); }

    private boolean isUndefinedType(DataType type) {
        type = untypedef(type);
        return type == null || type.getPathName().matches("/undefined(?:[1248])?");
    }

    private String typeSpecification(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + untypedef(pointer.getDataType()).getPathName();
        if (type instanceof Array array)
            return "array:" + array.getNumElements() + ":" +
                typeSpecification(array.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private boolean isOwnedUnchanged(Structure structure) {
        String description = structure.getDescription();
        if (description == null || !description.contains(CLASS_LAYOUT_MARKER)) return false;
        int marker = description.indexOf(HASH_MARKER);
        if (marker < 0) return false;
        String tail = description.substring(marker + HASH_MARKER.length()).trim();
        if (tail.length() < 64) return false;
        String stored = tail.substring(0, 64).toLowerCase(Locale.ROOT);
        return stored.matches("[0-9a-f]{64}") && stored.equals(layoutHash(structure));
    }

    private String layoutHash(Structure structure) {
        StringBuilder layout = new StringBuilder();
        layout.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            layout.append(component.getOffset()).append('|')
                .append(component.getLength()).append('|')
                .append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName())
                .append('|')
                .append(component.getComment() == null ? "" : component.getComment())
                .append('\n');
        }
        return sha256(layout.toString());
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest)
                result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException("SHA-256 unavailable", exception);
        }
    }

    private List<String> operands(Instruction instruction) {
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
        return Pattern.compile("(?<![A-Z0-9_])" + Pattern.quote(register) +
            "(?![A-Z0-9_])").matcher(operand.toUpperCase(Locale.ROOT)).find();
    }

    private boolean writesFirstOperand(String mnemonic) {
        return Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP", "XOR", "SUB", "SBB",
            "ADD", "ADC", "AND", "OR", "IMUL", "SHL", "SHR", "SAR", "SAL", "INC",
            "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private Long immediate(String operand) {
        String value = operand == null ? "" :
            operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        boolean negative = value.startsWith("-");
        if (negative) value = value.substring(1);
        try {
            long result;
            if (value.startsWith("0X"))
                result = Long.parseUnsignedLong(value.substring(2), 16);
            else if (value.matches("[0-9A-F]+H"))
                result = Long.parseUnsignedLong(value.substring(0, value.length() - 1), 16);
            else if (value.matches("[0-9]+")) result = Long.parseLong(value);
            else return null;
            return negative ? -result : result;
        }
        catch (NumberFormatException ignored) { return null; }
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
            if (!parameter.isAutoParameter() ||
                    !(parameter.getDataType() instanceof Pointer pointer)) continue;
            DataType pointed = pointer.getDataType();
            if (pointed instanceof Structure) return pointed.getName();
        }
        if (isObjectFactory(function)) {
            DataType returned = untypedef(function.getReturnType());
            if (returned instanceof Pointer pointer) {
                DataType pointed = untypedef(pointer.getDataType());
                if (pointed instanceof Structure structure) return structure.getName();
            }
        }
        return "";
    }

    private boolean isObjectFactory(Function function) {
        return function.getTags().stream().anyMatch(tag ->
            "RECOVERED_OBJECT_FACTORY".equals(tag.getName()));
    }

    private boolean isExactFactoryAllocationCall(List<Instruction> instructions, int index,
            Structure owner) {
        if (index < 1 || index >= instructions.size()) return false;
        Instruction call = instructions.get(index);
        if (!"CALL".equalsIgnoreCase(call.getMnemonicString())) return false;
        Instruction prior = instructions.get(index - 1);
        if (!"PUSH".equalsIgnoreCase(prior.getMnemonicString())) return false;
        List<String> operands = operands(prior);
        Long bytes = operands.isEmpty() ? null : immediate(operands.get(0));
        return bytes != null && bytes == owner.getLength();
    }

    private Structure findOwnerType(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure structure) return structure;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure structure &&
                    !match.getPathName().contains("/Recovered/VTables/")) return structure;
        return null;
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if ("LIBRARY".equals(tag.getName()) ||
                    tag.getName().startsWith("LIBRARY_")) return true;
        return false;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        Path root = selected.toPath().toAbsolutePath().normalize();
        return root.getFileName() != null &&
            root.getFileName().toString().equals(currentProgram.getName()) ?
            root : root.resolve(currentProgram.getName());
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\toffset\toffset_hex\tcount\telement_size\ttotal_size\t" +
                "element_type\tproposed_type\tproposed_name\tbounded_sites\texact_loops\t" +
                "pointer_dereferences\tconfidence\treason\tevidence_functions\tevidence_sites\n");
            for (Proposal row : rows) {
                out.write(bit(row.apply) + "\t" + tsv(row.key.owner) + "\t" +
                    row.key.offset + "\t0x" +
                    Long.toHexString(row.key.offset).toUpperCase(Locale.ROOT) + "\t" +
                    row.count + "\t" + row.key.elementSize + "\t" + row.size + "\t" +
                    tsv(row.elementType) + "\t" +
                    tsv(arrayType(row.count, row.elementType)) + "\t" +
                    "array_" + String.format("%04X", row.key.offset) + "\t" +
                    row.boundedSites + "\t" + row.exactLoops + "\t" +
                    row.pointerDereferences + "\t" + row.confidence + "\t" +
                    tsv(row.reason) + "\t" +
                    tsv(String.join(" | ", row.functions)) + "\t" +
                    tsv(String.join(" | ", row.sites)) + "\n");
            }
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            for (Proposal row : rows) {
                out.write("{\"apply\":" + row.apply +
                    ",\"owner\":\"" + json(row.key.owner) +
                    "\",\"offset\":" + row.key.offset +
                    ",\"count\":" + row.count +
                    ",\"element_size\":" + row.key.elementSize +
                    ",\"total_size\":" + row.size +
                    ",\"element_type\":\"" + json(row.elementType) +
                    "\",\"proposed_type\":\"" +
                    json(arrayType(row.count, row.elementType)) +
                    "\",\"confidence\":\"" + row.confidence +
                    "\",\"reason\":\"" + json(row.reason) + "\"}\n");
            }
        }
    }

    private void writeRecordTypes(Path path, List<RecordTypeProposal> rows)
            throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\towner\tparent_offset\ttype_path\tlength\tfield_count\t" +
                "access_count\tconfidence\treason\tevidence_functions\tevidence_sites\n");
            for (RecordTypeProposal row : rows)
                out.write(bit(row.apply) + "\t" + tsv(row.owner) + "\t" +
                    row.parentOffset + "\t" + tsv(row.typePath) + "\t" + row.length +
                    "\t" + row.fieldCount + "\t" + row.accessCount + "\t" +
                    (row.apply ? "layout" : "review") + "\t" + tsv(row.reason) +
                    "\t" + tsv(String.join(" | ", row.functions)) + "\t" +
                    tsv(String.join(" | ", row.sites)) + "\n");
        }
    }

    private void writeRecordFields(Path path, List<RecordFieldProposal> rows)
            throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\ttype_path\toffset\tsize\tproposed_name\tproposed_type\t" +
                "evidence_count\treason\n");
            for (RecordFieldProposal row : rows)
                out.write(bit(row.apply) + "\t" + tsv(row.typePath) + "\t" +
                    row.offset + "\t" + row.size + "\t" + row.name + "\t" +
                    tsv(row.type) + "\t" + row.evidenceCount + "\t" +
                    tsv(row.reason) + "\n");
        }
    }

    private void writeSummary(Path path, int functions, List<Proposal> rows)
            throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_scanned=" + functions,
            "candidate_arrays=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "bounded_index_arrays=" + rows.stream()
                .filter(row -> row.boundedSites > 0).count(),
            "exact_pointer_walk_arrays=" + rows.stream()
                .filter(row -> row.exactLoops > 0).count(),
            "record_arrays=" + rows.stream().filter(row -> row.recordArray).count(),
            "record_array_auto_apply=" + rows.stream()
                .filter(row -> row.recordArray && row.apply).count(),
            "note=Only bounded this+index*stride accesses and exact decrementing pointer walks contribute an extent.",
            "note=Large-stride record arrays require an exact loop count plus repeated cursor geometry; nested record fields retain only non-conflicting hash-owned or typed-receiver evidence.",
            "note=Semantic names are not guessed; address-stable array_XXXX names are structural.",
            "note=Manual/unowned class components and conflicting element roles remain review-only."
        ), StandardCharsets.UTF_8);
    }

    private String arrayType(int count, String elementType) {
        return "array:" + count + ":" + elementType;
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String leaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }
    private static String hex(long value) {
        return "0x" + Long.toHexString(value).toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String json(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t");
    }

    private static class Value {
        final Long thisOffset;
        final Integer upperBound;
        final Long sourceStack;
        Value(Long thisOffset, Integer upperBound, Long sourceStack) {
            this.thisOffset = thisOffset;
            this.upperBound = upperBound;
            this.sourceStack = sourceStack;
        }
        static Value thisAddress(long offset) { return new Value(offset, null, null); }
        static Value bounded(int bound) { return new Value(null, bound, null); }
        static Value stackSource(long offset) { return new Value(null, null, offset); }
        Value withBound(int bound) { return new Value(thisOffset, bound, sourceStack); }
    }
    private record RegisterTerm(String register, int scale) { }
    private record AddressExpr(List<RegisterTerm> registers, long displacement) { }
    private record ThisAddress(long offset, String indexRegister, int scale) { }
    private record IndexedAccess(ArrayKey key, int operandIndex, int bound,
        String directType) { }
    private record CounterSeed(int count, String register, Long stackOffset) { }
    private record ArrayKey(String owner, long offset, int elementSize)
            implements Comparable<ArrayKey> {
        @Override public int compareTo(ArrayKey other) {
            int ownerOrder = owner.compareTo(other.owner);
            if (ownerOrder != 0) return ownerOrder;
            int offsetOrder = Long.compare(offset, other.offset);
            return offsetOrder != 0 ? offsetOrder :
                Integer.compare(elementSize, other.elementSize);
        }
    }
    private record SpanKey(String owner, long offset) implements Comparable<SpanKey> {
        @Override public int compareTo(SpanKey other) {
            int order = owner.compareTo(other.owner);
            return order != 0 ? order : Long.compare(offset, other.offset);
        }
    }
    private record RecordKey(String owner, int stride) implements Comparable<RecordKey> {
        @Override public int compareTo(RecordKey other) {
            int order = owner.compareTo(other.owner);
            return order != 0 ? order : Integer.compare(stride, other.stride);
        }
    }
    private static class SpanEvidence {
        final SpanKey key;
        final Set<Integer> lengths = new TreeSet<>();
        final Set<String> functions = new TreeSet<>();
        final Set<String> sites = new TreeSet<>();
        SpanEvidence(SpanKey key) { this.key = key; }
    }
    private static class ArrayEvidence {
        final ArrayKey key;
        final Set<Integer> counts = new TreeSet<>();
        final Set<String> elementTypes = new TreeSet<>();
        final Set<String> exactPointerTypes = new TreeSet<>();
        final Set<String> functions = new TreeSet<>();
        final Set<String> sites = new TreeSet<>();
        int boundedSites;
        int exactLoops;
        int pointerDereferences;
        ArrayEvidence(ArrayKey key) { this.key = key; }
    }
    private static class RecordEvidence {
        final RecordKey key;
        final Set<Integer> counts = new TreeSet<>();
        final Set<Integer> factoryCounts = new TreeSet<>();
        final Set<Long> boundaries = new TreeSet<>();
        final Map<Long, Set<Integer>> accessWidths = new TreeMap<>();
        final Map<Long, Map<String, Integer>> typedObjects = new TreeMap<>();
        final Set<String> functions = new TreeSet<>();
        final Set<String> sites = new TreeSet<>();
        int loops;
        int exactLoops;
        RecordEvidence(RecordKey key) { this.key = key; }
    }
    private record FieldCandidateKey(long offset, int size, String type)
            implements Comparable<FieldCandidateKey> {
        @Override public int compareTo(FieldCandidateKey other) {
            int order = Long.compare(offset, other.offset);
            if (order != 0) return order;
            order = Integer.compare(size, other.size);
            return order != 0 ? order : type.compareTo(other.type);
        }
    }
    private static class FieldCandidate {
        final long offset;
        final int size;
        final String type;
        final int priority;
        final int evidence;
        final String reason;
        FieldCandidate(long offset, int size, String type, int priority,
                int evidence, String reason) {
            this.offset = offset; this.size = size; this.type = type;
            this.priority = priority; this.evidence = evidence; this.reason = reason;
        }
        FieldCandidateKey key() { return new FieldCandidateKey(offset, size, type); }
    }
    private record RecordProposals(List<RecordTypeProposal> types,
        List<RecordFieldProposal> fields) { }
    private static class RecordTypeProposal {
        final boolean apply;
        final String owner, typePath, reason;
        final long parentOffset;
        final int length, fieldCount, accessCount;
        final Set<String> functions, sites;
        RecordTypeProposal(boolean apply, String owner, long parentOffset,
                String typePath, int length, int fieldCount, int accessCount,
                String reason, Set<String> functions, Set<String> sites) {
            this.apply = apply; this.owner = owner; this.parentOffset = parentOffset;
            this.typePath = typePath; this.length = length; this.fieldCount = fieldCount;
            this.accessCount = accessCount; this.reason = reason;
            this.functions = new TreeSet<>(functions); this.sites = new TreeSet<>(sites);
        }
    }
    private static class RecordFieldProposal {
        boolean apply;
        final String typePath, name, type, reason;
        final long offset;
        final int size, evidenceCount;
        RecordFieldProposal(boolean apply, String typePath, long offset, int size,
                String name, String type, int evidenceCount, String reason) {
            this.apply = apply; this.typePath = typePath; this.offset = offset;
            this.size = size; this.name = name; this.type = type;
            this.evidenceCount = evidenceCount; this.reason = reason;
        }
    }
    private static class Proposal {
        boolean apply;
        final ArrayKey key;
        final int count;
        final int size;
        final String elementType;
        final int boundedSites;
        final int exactLoops;
        final int pointerDereferences;
        final String confidence;
        String reason;
        final Set<String> functions;
        final Set<String> sites;
        final boolean recordArray;
        Proposal(boolean apply, ArrayKey key, int count, int size, String elementType,
                int boundedSites, int exactLoops, int pointerDereferences,
                String confidence, String reason, Set<String> functions,
                Set<String> sites, boolean recordArray) {
            this.apply = apply;
            this.key = key;
            this.count = count;
            this.size = size;
            this.elementType = elementType;
            this.boundedSites = boundedSites;
            this.exactLoops = exactLoops;
            this.pointerDereferences = pointerDereferences;
            this.confidence = confidence;
            this.reason = reason;
            this.functions = new TreeSet<>(functions);
            this.sites = new TreeSet<>(sites);
            this.recordArray = recordArray;
        }
    }
}
