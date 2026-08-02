// Recover fixed-size arrays embedded in script-owned class layouts.
// Evidence comes from bounded this+index*stride machine accesses and exact pointer-walk loops.
// Read-only: writes class_array_proposals.tsv/jsonl and class_array_summary.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Class Member Arrays

import java.io.BufferedWriter;
import java.io.File;
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
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
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
    private static final Pattern REGISTER_TERM = Pattern.compile(
        "^([A-Z][A-Z0-9]{1,3})(?:\\*(0X[0-9A-F]+|[0-9]+))?$");
    private static final Pattern STACK = Pattern.compile(
        "^\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");

    private final Map<ArrayKey, ArrayEvidence> arrays = new TreeMap<>();
    private final Map<SpanKey, SpanEvidence> zeroSpans = new TreeMap<>();
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
            if (owner.isBlank() || function.isExternal() || function.isThunk() ||
                    isLibrary(function) ||
                    !"__thiscall".equals(function.getCallingConventionName())) continue;
            Structure structure = findOwnerType(owner);
            if (structure == null) continue;
            functionsSeen++;
            analyzeFunction(function, owner, structure);
        }

        List<Proposal> proposals = makeProposals();
        writeTsv(directory.resolve("class_array_proposals.tsv"), proposals);
        writeSummary(directory.resolve("class_array_summary.txt"), functionsSeen, proposals);
        println("Class-array analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Functions=" + functionsSeen + ", candidates=" + proposals.size() +
            ", auto_apply=" + proposals.stream().filter(row -> row.apply).count() +
            ", bounded_sites=" + proposals.stream().mapToInt(row -> row.boundedSites).sum() +
            ", exact_loops=" + proposals.stream().mapToInt(row -> row.exactLoops).sum());
    }

    private void analyzeFunction(Function function, String owner, Structure structure) {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());
        if (instructions.isEmpty()) return;

        Map<String, Value> registers = new HashMap<>();
        Map<String, Long> constants = new HashMap<>();
        Map<Long, Value> stack = new HashMap<>();
        Map<String, ArrayEvidence> pointerOrigins = new HashMap<>();
        registers.put("ECX", Value.thisAddress(0));

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
                if (!cursor.isBlank() && base != null && base.indexRegister.isBlank())
                    observeExactLoop(function, owner, structure, instructions, index,
                        cursor, base.offset);
            }

            updateState(instruction, mnemonic, operands, registers, stack, pointerOrigins);
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
        String counter = "";
        int count = -1;
        for (int index = leaIndex + 1;
                index < instructions.size() && index <= leaIndex + 5; index++) {
            List<String> operands = operands(instructions.get(index));
            if (!"MOV".equalsIgnoreCase(instructions.get(index).getMnemonicString()) ||
                    operands.size() < 2) continue;
            Long value = immediate(operands.get(1));
            String register = fullRegister(operands.get(0));
            if (!register.isBlank() && value != null && value >= 2 &&
                    value <= MAX_ARRAY_COUNT) {
                counter = register;
                count = value.intValue();
                break;
            }
        }
        if (counter.isBlank()) return;

        int stride = -1;
        boolean decrement = false;
        boolean backwardLoop = false;
        boolean freesPointer = false;
        int end = Math.min(instructions.size(), leaIndex + MAX_LOOP_SCAN);
        for (int index = leaIndex + 1; index < end; index++) {
            Instruction instruction = instructions.get(index);
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);
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
            }
            if (instruction.getFlowType().isJump()) {
                for (Address target : instruction.getFlows()) {
                    if (target.compareTo(instructions.get(leaIndex).getAddress()) >= 0 &&
                            target.compareTo(instruction.getAddress()) < 0)
                        backwardLoop = true;
                }
            }
            if (stride > 0 && decrement && backwardLoop) break;
        }
        if (stride < 1 || !decrement || !backwardLoop ||
                offset < 0 || offset + (long)count * stride > structure.getLength()) return;
        ArrayKey key = new ArrayKey(owner, offset, stride);
        ArrayEvidence evidence = arrays.computeIfAbsent(key, ArrayEvidence::new);
        evidence.counts.add(count);
        evidence.exactLoops++;
        evidence.functions.add(addr(function.getEntryPoint()));
        evidence.sites.add(addr(instructions.get(leaIndex).getAddress()) +
            " exact pointer walk count=" + count + ", stride=" + stride);
        if (freesPointer) {
            evidence.elementTypes.remove(unsignedType(stride));
            evidence.elementTypes.add("pointer:/void");
        }
        else evidence.elementTypes.add(unsignedType(stride));
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
            String elementType = selectElementType(evidence.elementTypes);
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
                (rangeValid ? "" : "; range_outside_owner") +
                (strong ? "" : "; insufficient_exact_extent_evidence");
            result.add(new Proposal(apply, evidence.key, count, size, elementType,
                evidence.boundedSites, evidence.exactLoops,
                evidence.pointerDereferences, apply ? "high" : "review", reason,
                evidence.functions, evidence.sites));
        }
        result.sort(Comparator.comparing((Proposal row) -> row.key.owner)
            .thenComparingLong(row -> row.key.offset));
        disableOverlaps(result);
        return result;
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

    private String selectElementType(Set<String> candidates) {
        if (candidates.isEmpty()) return "";
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
                Proposal b = rows.get(right);
                if (!a.key.owner.equals(b.key.owner)) break;
                if (b.key.offset >= a.key.offset + a.size) break;
                if (!b.apply) continue;
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
        return "";
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
            "note=Only bounded this+index*stride accesses and exact decrementing pointer walks contribute an extent.",
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
        final Set<String> functions = new TreeSet<>();
        final Set<String> sites = new TreeSet<>();
        int boundedSites;
        int exactLoops;
        int pointerDereferences;
        ArrayEvidence(ArrayKey key) { this.key = key; }
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
        Proposal(boolean apply, ArrayKey key, int count, int size, String elementType,
                int boundedSites, int exactLoops, int pointerDereferences,
                String confidence, String reason, Set<String> functions,
                Set<String> sites) {
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
        }
    }
}
