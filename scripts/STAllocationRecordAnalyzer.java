// Recover a consumer-local record view for one allocation which receives an exact
// fixed-size copy from one source parameter and is returned by the containing function.
// Allocator ABIs remain neutral; this script is read-only and writes proposals.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Allocation Records

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
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STAllocationRecordAnalyzer extends GhidraScript {
    private static final String TYPE_ROOT =
        "/SubmarineTitans/Recovered/AllocationRecords/";
    private static final String MARKER = "[STAllocationRecordApplier]";
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern STACK_STORAGE = Pattern.compile(
        "(?i)Stack\\[0x([0-9a-f]+)\\]");
    private static final int MAX_SPAN = 0x100000;

    private int functionsScanned;
    private int allocatorCallFunctions;
    private int allocationRoots;
    private int returnedRoots;
    private int exactCopyRoots;
    private int fieldCompleteRoots;
    private int manualBaselines;
    private int overlapConflicts;
    private int stringMoves;
    private int allocationDestinationMoves;
    private int parameterSourceMoves;
    private int exactCopySegments;
    private final List<Audit> audits = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        List<Row> rows = new ArrayList<>();
        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (!candidate(function) || !hasAllocatorCall(function)) continue;
            functionsScanned++;
            rows.addAll(analyze(function));
        }
        rows.sort(Comparator.comparing((Row row) -> row.functionAddress)
            .thenComparing(row -> row.allocationCall));
        writeRows(directory.resolve("allocation_record_proposals.tsv"), rows);
        writeAudits(directory.resolve("allocation_record_machine_audit.tsv"));
        writeSummary(directory.resolve("allocation_record_summary.txt"), rows);
        println("Allocation-record analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Functions=" + functionsScanned + ", roots=" + allocationRoots +
            ", returned=" + returnedRoots + ", exact_copies=" + exactCopyRoots +
            ", field_complete=" + fieldCompleteRoots + ", proposals=" + rows.size() +
            ", apply=" + rows.stream().filter(row -> row.apply).count());
    }

    private boolean candidate(Function function) {
        return function != null && !function.isExternal() && !function.isThunk() &&
            !isLibrary(function);
    }

    private boolean hasAllocatorCall(Function function) {
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            if (allocator(directCalledFunction(instruction))) {
                allocatorCallFunctions++;
                return true;
            }
        }
        return false;
    }

    private List<Row> analyze(Function function) throws Exception {
        Map<String, Value> registers = new HashMap<>();
        Map<Long, Value> stack = new HashMap<>();
        Map<Integer, ParameterInfo> parameters = seedParameters(function, stack);
        Map<Integer, Allocation> allocations = new LinkedHashMap<>();
        Set<Integer> returned = new TreeSet<>();
        boolean unknownReturn = false;
        int nextAllocation = 1;

        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = iterator.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operands(instruction);

            if (stringMove(mnemonic)) {
                stringMoves++;
                int width = stringMoveWidth(mnemonic);
                long count = mnemonic.endsWith(".REP") ?
                    constant(registers.get("ECX")) : 1;
                long bytes = safeBytes(count, width);
                Value destination = registers.get("EDI");
                Value source = registers.get("ESI");
                if (bytes > 0 && destination != null && source != null &&
                        destination.kind == Kind.ALLOCATION &&
                        source.kind == Kind.PARAMETER) {
                    Allocation allocation = allocations.get(destination.id);
                    if (allocation != null) allocation.copies.add(new CopySegment(
                        source.id, destination.offset, source.offset, (int)bytes,
                        addr(instruction.getAddress())));
                    exactCopySegments++;
                }
                if (bytes > 0 && destination != null &&
                        destination.kind == Kind.ALLOCATION)
                    allocationDestinationMoves++;
                if (bytes > 0 && source != null && source.kind == Kind.PARAMETER)
                    parameterSourceMoves++;
                advance(registers, "EDI", bytes);
                advance(registers, "ESI", bytes);
                if (mnemonic.endsWith(".REP"))
                    registers.put("ECX", Value.constant(0));
                continue;
            }

            collectMemoryEvidence(instruction, mnemonic, operands, registers,
                allocations, parameters);

            if ("CALL".equals(mnemonic)) {
                Function target = resolveThunk(directCalledFunction(instruction));
                if (allocator(target)) {
                    int id = nextAllocation++;
                    Allocation allocation = new Allocation(id,
                        addr(instruction.getAddress()), addr(target.getEntryPoint()),
                        target.getName(true));
                    allocations.put(id, allocation);
                    registers.put("EAX", Value.allocation(id, 0));
                    allocationRoots++;
                }
                else registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                continue;
            }

            if ("RET".equals(mnemonic)) {
                Value value = registers.get("EAX");
                if (value != null && value.kind == Kind.ALLOCATION && value.offset == 0)
                    returned.add(value.id);
                else if (value == null || value.kind != Kind.CONSTANT ||
                        value.constant != 0)
                    unknownReturn = true;
                continue;
            }
            transfer(mnemonic, operands, registers, stack, parameters,
                allocations);
        }

        List<Row> rows = new ArrayList<>();
        for (Allocation allocation : allocations.values()) {
            CopyChain observedCopy = exactCopy(allocation.copies);
            if (!allocation.copies.isEmpty())
                audits.add(new Audit(addr(function.getEntryPoint()),
                    function.getName(true), allocation.callSite,
                    allocation.allocatorName, returned.contains(allocation.id),
                    unknownReturn, observedCopy == null ? 0 : observedCopy.span,
                    allocation.copies.stream().map(segment ->
                        "p" + segment.parameterOrdinal + ":dst+" +
                        segment.destination + ":src+" + segment.source +
                        ":" + segment.bytes + "@" + segment.site)
                        .reduce((left, right) -> left + " | " + right).orElse("")));
            if (!returned.contains(allocation.id)) continue;
            returnedRoots++;
            CopyChain copy = observedCopy;
            if (copy == null) continue;
            exactCopyRoots++;
            ParameterInfo source = parameters.get(copy.parameterOrdinal);
            if (source == null || !(untypedef(source.parameter.getDataType())
                    instanceof Pointer)) continue;
            Layout layout = layout(function, allocation, source, copy.span);
            if (layout == null) continue;
            fieldCompleteRoots++;

            boolean uniqueReturn = returned.size() == 1 && !unknownReturn;
            SourceType returnSource = function.getReturn().getSource();
            boolean protectedBaseline = protectedSource(returnSource) ||
                protectedSource(source.parameter.getSource());
            if (protectedBaseline) manualBaselines++;
            boolean compatibleReturn = returnCompatible(function.getReturnType());
            boolean occupied = layout.createType && occupiedByManual(layout.typePath);
            boolean sourceApply = layout.sourceCanAdopt &&
                !typeSpec(source.parameter.getDataType()).equals(
                    "pointer:" + layout.typePath);
            boolean returnApply = !typeSpec(function.getReturnType()).equals(
                "pointer:" + layout.typePath);
            boolean apply = uniqueReturn && !protectedBaseline && compatibleReturn &&
                !occupied && layout.safe;
            String reason = "one returned allocation root; exact REP MOVS source=p" +
                copy.parameterOrdinal + "+0 destination=allocation+0 span=" +
                copy.span + "; non_overlapping_fields=" + layout.fields.size() +
                "; source_layout=" + layout.sourceLayout +
                (uniqueReturn ? "" : "; another/unknown non-null return path") +
                (protectedBaseline ? "; manual/imported ABI baseline preserved" : "") +
                (compatibleReturn ? "" : "; return ABI is not a replaceable word") +
                (occupied ? "; generated type path is manually occupied" : "") +
                (layout.safe ? "" : "; field geometry conflicts");
            rows.add(new Row(apply, addr(function.getEntryPoint()),
                function.getName(true), function.getSignature().getPrototypeString(true),
                function.getSignatureSource().toString(), allocation.callSite,
                allocation.allocatorAddress, allocation.allocatorName,
                copy.firstSite, copy.lastSite, copy.span, copy.parameterOrdinal,
                source.parameter.getName(), typeSpec(source.parameter.getDataType()),
                source.parameter.getSource().toString(),
                typeSpec(function.getReturnType()), returnSource.toString(),
                layout.typePath, layout.createType, layout.serializedFields(),
                layout.hash, layout.fields.size(), sourceApply, returnApply,
                uniqueReturn,
                layout.safe && !protectedBaseline ? "high" : "review", reason));
        }
        return rows;
    }

    private Map<Integer, ParameterInfo> seedParameters(Function function,
            Map<Long, Value> stack) {
        Map<Integer, ParameterInfo> result = new TreeMap<>();
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter()) continue;
            Matcher matcher = STACK_STORAGE.matcher(
                parameter.getVariableStorage().toString());
            if (!matcher.find()) continue;
            long ghidraOffset = Long.parseUnsignedLong(matcher.group(1), 16);
            DataType type = untypedef(parameter.getDataType());
            int ordinal = parameter.getOrdinal();
            DataType pointee = type instanceof Pointer pointer ?
                pointer.getDataType() : null;
            ParameterInfo info = new ParameterInfo(parameter, pointee);
            result.put(ordinal, info);
            Value value = type instanceof Pointer pointer ?
                Value.parameter(ordinal, 0, pointer.getDataType()) :
                Value.typed(typeSpec(type), type == null ? 4 : type.getLength());
            stack.put(ghidraOffset + 4, value);
        }
        return result;
    }

    private void collectMemoryEvidence(Instruction instruction, String mnemonic,
            List<String> operands, Map<String, Value> registers,
            Map<Integer, Allocation> allocations,
            Map<Integer, ParameterInfo> parameters) {
        for (int index = 0; index < operands.size(); index++) {
            Memory memory = memory(operands.get(index));
            if (memory == null) continue;
            Value base = registers.get(memory.base);
            if (base == null || base.kind != Kind.ALLOCATION) continue;
            Allocation allocation = allocations.get(base.id);
            if (allocation == null) continue;
            int width = memoryWidth(operands.get(index), mnemonic);
            long offset = base.offset + memory.offset;
            if (width < 1 || width > 16 || offset < 0 ||
                    offset + width > MAX_SPAN) continue;
            String type = "";
            if ("MOV".equals(mnemonic) && index == 0 && operands.size() > 1) {
                Value source = operandValue(operands.get(1), registers,
                    Map.of(), parameters, allocations);
                if (source != null && source.kind == Kind.TYPED &&
                        source.width == width) type = source.type;
            }
            allocation.fields.add(new FieldObservation(offset, width, type,
                addr(instruction.getAddress()) + " " + instruction));
        }
    }

    private void transfer(String mnemonic, List<String> operands,
            Map<String, Value> registers, Map<Long, Value> stack,
            Map<Integer, ParameterInfo> parameters,
            Map<Integer, Allocation> allocations) {
        if (operands.isEmpty()) return;
        String destinationRegister = register(operands.get(0));
        Memory destinationMemory = memory(operands.get(0));
        if ("MOV".equals(mnemonic) && operands.size() >= 2) {
            Value value = operandValue(operands.get(1), registers, stack,
                parameters, allocations);
            if (destinationMemory != null && "EBP".equals(destinationMemory.base)) {
                if (value == null) stack.remove(destinationMemory.offset);
                else stack.put(destinationMemory.offset, value);
                return;
            }
            if (!destinationRegister.isBlank()) {
                if (value == null) registers.remove(destinationRegister);
                else registers.put(destinationRegister, value);
            }
            return;
        }
        if (("MOVZX".equals(mnemonic) || "MOVSX".equals(mnemonic)) &&
                !destinationRegister.isBlank() && operands.size() >= 2) {
            int width = "MOVZX".equals(mnemonic) ? 4 : 4;
            registers.put(destinationRegister, Value.typed(
                "MOVZX".equals(mnemonic) ? "/uint" : "/int", width));
            return;
        }
        if ("LEA".equals(mnemonic) && !destinationRegister.isBlank() &&
                operands.size() >= 2) {
            Memory source = memory(operands.get(1));
            Value base = source == null ? null : registers.get(source.base);
            if (base == null && source != null && "EBP".equals(source.base))
                base = stack.get(source.offset);
            if (base == null) registers.remove(destinationRegister);
            else registers.put(destinationRegister, base.add(source.offset));
            return;
        }
        if ("XOR".equals(mnemonic) && operands.size() >= 2 &&
                !destinationRegister.isBlank() &&
                destinationRegister.equals(register(operands.get(1)))) {
            registers.put(destinationRegister, Value.constant(0));
            return;
        }
        if (!destinationRegister.isBlank() && operands.size() >= 2 &&
                Set.of("ADD", "SUB", "AND", "SHL", "SHR", "SAR")
                    .contains(mnemonic)) {
            Value old = registers.get(destinationRegister);
            Long amount = immediate(operands.get(1));
            if (old == null || amount == null) {
                registers.remove(destinationRegister);
                return;
            }
            amount = signed32(amount);
            if ("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) {
                long delta = "SUB".equals(mnemonic) ? -amount : amount;
                registers.put(destinationRegister, old.add(delta));
            }
            else if (old.kind == Kind.CONSTANT) {
                long value = switch (mnemonic) {
                    case "AND" -> old.constant & amount;
                    case "SHL" -> old.constant << amount;
                    case "SHR" -> old.constant >>> amount;
                    case "SAR" -> old.constant >> amount;
                    default -> old.constant;
                };
                registers.put(destinationRegister, Value.constant(value));
            }
            else registers.remove(destinationRegister);
            return;
        }
        if (!destinationRegister.isBlank() &&
                !Set.of("CMP", "TEST", "PUSH", "JMP", "RET", "POP")
                    .contains(mnemonic))
            registers.remove(destinationRegister);
    }

    private Value operandValue(String operand, Map<String, Value> registers,
            Map<Long, Value> stack, Map<Integer, ParameterInfo> parameters,
            Map<Integer, Allocation> allocations) {
        String sourceRegister = register(operand);
        if (!sourceRegister.isBlank()) return registers.get(sourceRegister);
        Long literal = immediate(operand);
        if (literal != null) return Value.constant(signed32(literal));
        Memory memory = memory(operand);
        if (memory == null) return null;
        if ("EBP".equals(memory.base)) return stack.get(memory.offset);
        Value base = registers.get(memory.base);
        if (base == null) return null;
        long offset = base.offset + memory.offset;
        int width = memoryWidth(operand, "MOV");
        if (base.kind == Kind.PARAMETER) {
            ParameterInfo info = parameters.get(base.id);
            return typedDereference(info == null ? null : info.pointee,
                offset, width);
        }
        if (base.kind == Kind.ALLOCATION) {
            Allocation allocation = allocations.get(base.id);
            if (allocation != null) {
                Set<String> types = new TreeSet<>();
                for (FieldObservation field : allocation.fields)
                    if (field.offset == offset && field.width == width &&
                            !field.type.isBlank()) types.add(field.type);
                if (types.size() == 1)
                    return Value.typed(types.iterator().next(), width);
            }
        }
        return null;
    }

    private Value typedDereference(DataType pointee, long offset, int width) {
        pointee = untypedef(pointee);
        if (pointee == null || width < 1) return null;
        if (offset == 0 && pointee.getLength() == width &&
                !(pointee instanceof Structure))
            return Value.typed(typeSpec(pointee), width);
        if (pointee instanceof Structure structure) {
            DataTypeComponent component = structure.getComponentAt((int)offset);
            if (component != null && component.getOffset() == offset &&
                    component.getLength() == width)
                return Value.typed(typeSpec(component.getDataType()), width);
        }
        return null;
    }

    private CopyChain exactCopy(List<CopySegment> segments) {
        Map<Integer, List<CopySegment>> byParameter = new TreeMap<>();
        for (CopySegment segment : segments)
            byParameter.computeIfAbsent(segment.parameterOrdinal,
                ignored -> new ArrayList<>()).add(segment);
        List<CopyChain> chains = new ArrayList<>();
        for (Map.Entry<Integer, List<CopySegment>> entry : byParameter.entrySet()) {
            List<CopySegment> values = entry.getValue();
            values.sort(Comparator.comparingLong((CopySegment value) -> value.destination)
                .thenComparingLong(value -> value.source)
                .thenComparing(value -> value.site));
            long cursor = 0;
            String first = "", last = "";
            for (CopySegment value : values) {
                if (value.destination != cursor || value.source != cursor) continue;
                if (first.isBlank()) first = value.site;
                last = value.site;
                cursor += value.bytes;
            }
            if (cursor > 0 && cursor <= MAX_SPAN)
                chains.add(new CopyChain(entry.getKey(), (int)cursor, first, last));
        }
        if (chains.size() != 1) return null;
        return chains.get(0);
    }

    private Layout layout(Function function, Allocation allocation,
            ParameterInfo source, int span) throws Exception {
        DataType pointee = untypedef(source.pointee);
        if (pointee instanceof Structure structure &&
                structure.getLength() == span &&
                (concreteFields(structure) >= 2 || ownedAllocationRecord(structure)) &&
                !viewOnly(structure)) {
            List<Field> fields = new ArrayList<>();
            for (DataTypeComponent component : structure.getDefinedComponents())
                fields.add(new Field(component.getOffset(), component.getLength(),
                    typeSpec(component.getDataType()),
                    fieldName(component.getFieldName(), component.getOffset())));
            boolean safe = observationsFit(allocation.fields, fields, span);
            if (!safe) overlapConflicts++;
            return new Layout(structure.getPathName(), false, fields, safe,
                false, "complete existing " + structure.getPathName());
        }

        List<Field> fields = new ArrayList<>();
        boolean sourceCanAdopt = !(pointee instanceof Structure);
        String sourceLayout = "machine-observed fields inside copied header";
        if (pointee instanceof Structure structure &&
                structure.getLength() > 0 && structure.getLength() <= span &&
                !viewOnly(structure)) {
            for (DataTypeComponent component : structure.getDefinedComponents())
                fields.add(new Field(component.getOffset(), component.getLength(),
                    typeSpec(component.getDataType()),
                    fieldName(component.getFieldName(), component.getOffset())));
            sourceCanAdopt = true;
            sourceLayout = "monotonic extension of " + structure.getPathName() +
                " length=" + structure.getLength();
        }
        fields.sort(Comparator.comparingLong(field -> field.offset));
        Map<Long, List<FieldObservation>> grouped = new TreeMap<>();
        for (FieldObservation observation : allocation.fields) {
            if (observation.offset < 0 || observation.offset + observation.width > span)
                continue;
            grouped.computeIfAbsent(observation.offset,
                ignored -> new ArrayList<>()).add(observation);
        }
        boolean safe = true;
        for (Map.Entry<Long, List<FieldObservation>> entry : grouped.entrySet()) {
            Set<Integer> widths = new TreeSet<>();
            Set<String> types = new TreeSet<>();
            for (FieldObservation observation : entry.getValue()) {
                widths.add(observation.width);
                if (!observation.type.isBlank()) types.add(observation.type);
            }
            if (widths.size() != 1) { safe = false; continue; }
            int width = widths.iterator().next();
            String type = types.size() == 1 &&
                typeLength(types.iterator().next()) == width ?
                types.iterator().next() : undefinedType(width);
            long start = entry.getKey(), finish = start + width;
            Field containing = null;
            boolean partialOverlap = false;
            for (Field field : fields) {
                long fieldEnd = field.offset + field.width;
                if (field.offset <= start && fieldEnd >= finish) {
                    containing = field;
                    break;
                }
                if (field.offset < finish && start < fieldEnd)
                    partialOverlap = true;
            }
            if (partialOverlap) safe = false;
            else if (containing == null)
                fields.add(new Field(start, width, type,
                    fieldName(null, (int)start)));
        }
        fields.sort(Comparator.comparingLong(field -> field.offset));
        long end = -1;
        for (Field field : fields) {
            if (field.offset < end || field.offset < 0 ||
                    field.offset + field.width > span) safe = false;
            end = Math.max(end, field.offset + field.width);
        }
        if (fields.size() < 2) safe = false;
        if (!safe) overlapConflicts++;
        String typePath = TYPE_ROOT + "AllocationRecord_" +
            addr(function.getEntryPoint());
        return new Layout(typePath, true, fields, safe, sourceCanAdopt,
            sourceLayout);
    }

    private boolean observationsFit(List<FieldObservation> observations,
            List<Field> fields, int span) {
        for (FieldObservation observation : observations) {
            if (observation.offset < 0 || observation.offset + observation.width > span)
                continue;
            boolean covered = false;
            for (Field field : fields)
                if (field.offset <= observation.offset &&
                        field.offset + field.width >=
                            observation.offset + observation.width) {
                    covered = true;
                    break;
                }
            if (!covered) return false;
        }
        return true;
    }

    private int concreteFields(Structure structure) {
        int count = 0;
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (!Undefined.isUndefined(component.getDataType())) count++;
        return count;
    }

    private boolean viewOnly(Structure structure) {
        String description = text(structure.getDescription());
        return description.contains("[ST_VIEW_ONLY]");
    }

    private boolean ownedAllocationRecord(Structure structure) {
        return text(structure.getDescription()).contains(MARKER);
    }

    private boolean occupiedByManual(String path) {
        DataType existing = currentProgram.getDataTypeManager().getDataType(path);
        if (existing == null) return false;
        if (!(existing instanceof Structure structure)) return true;
        return !text(structure.getDescription()).contains(MARKER);
    }

    private boolean returnCompatible(DataType type) {
        type = untypedef(type);
        return type != null && type.getLength() == currentProgram.getDefaultPointerSize();
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private boolean allocator(Function function) {
        function = resolveThunk(function);
        if (function == null) return false;
        if (tagged(function, "RECOVERED_UTILITY_MEMORY_ALLOCATE") ||
                tagged(function, "RECOVERED_UTILITY_MEMORY_ALLOCATE_ZEROED"))
            return true;
        String evidence = (text(function.getComment()) + "\n" +
            referencedStrings(function)).toLowerCase(Locale.ROOT);
        return (evidence.contains("memalloc.c") ||
            evidence.contains("memallcl.c")) &&
            function.getParameters().length == 1 &&
            function.getReturnType().getLength() ==
                currentProgram.getDefaultPointerSize();
    }

    private String referencedStrings(Function function) {
        StringBuilder result = new StringBuilder();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            for (var reference : instruction.getReferencesFrom()) {
                var data = currentProgram.getListing()
                    .getDefinedDataAt(reference.getToAddress());
                if (data != null && data.hasStringValue() && data.getValue() != null)
                    result.append(data.getValue()).append('\n');
            }
        }
        return result.toString();
    }

    private boolean tagged(Function function, String name) {
        if (function == null) return false;
        for (FunctionTag tag : function.getTags())
            if (name.equals(tag.getName())) return true;
        return false;
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") ||
                    tag.getName().startsWith("LIBRARY_")) return true;
        return false;
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
        while (function != null && function.isThunk() &&
                seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    private boolean stringMove(String mnemonic) {
        return Set.of("MOVSD.REP", "MOVSW.REP", "MOVSB.REP",
            "MOVSD", "MOVSW", "MOVSB").contains(mnemonic);
    }

    private int stringMoveWidth(String mnemonic) {
        if (mnemonic.startsWith("MOVSD")) return 4;
        if (mnemonic.startsWith("MOVSW")) return 2;
        return 1;
    }

    private void advance(Map<String, Value> registers, String register, long bytes) {
        if (bytes <= 0) return;
        Value value = registers.get(register);
        if (value != null) registers.put(register, value.add(bytes));
    }

    private long safeBytes(long count, int width) {
        return count < 1 || count > MAX_SPAN || count > MAX_SPAN / width ?
            -1 : count * width;
    }

    private long constant(Value value) {
        return value == null || value.kind != Kind.CONSTANT ? -1 : value.constant;
    }

    private List<String> operands(Instruction instruction) {
        List<String> result = new ArrayList<>();
        for (int index = 0; index < instruction.getNumOperands(); index++)
            result.add(instruction.getDefaultOperandRepresentation(index)
                .toUpperCase(Locale.ROOT));
        return result;
    }

    private Memory memory(String operand) {
        String value = operand == null ? "" : operand.toUpperCase(Locale.ROOT)
            .replace("TBYTE PTR", "").replace("QWORD PTR", "")
            .replace("DWORD PTR", "").replace("WORD PTR", "")
            .replace("BYTE PTR", "").replace(" ", "")
            .replace("+-", "-");
        Matcher matcher = MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        Long offset = matcher.group(3) == null ? 0L : immediate(matcher.group(3));
        if (offset == null) return null;
        offset = signed32(offset);
        return new Memory(matcher.group(1),
            "-".equals(matcher.group(2)) ? -offset : offset);
    }

    private int memoryWidth(String operand, String mnemonic) {
        String value = text(operand).toUpperCase(Locale.ROOT);
        if (value.contains("TBYTE PTR")) return 10;
        if (value.contains("QWORD PTR")) return 8;
        if (value.contains("DWORD PTR")) return 4;
        if (value.contains("WORD PTR")) return 2;
        if (value.contains("BYTE PTR")) return 1;
        return mnemonic.endsWith("B") ? 1 : mnemonic.endsWith("W") ? 2 : 0;
    }

    private String register(String value) {
        value = text(value).trim().toUpperCase(Locale.ROOT);
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP")
            .contains(value) ? value : "";
    }

    private Long immediate(String value) {
        value = text(value).trim().toUpperCase(Locale.ROOT);
        try {
            if (value.startsWith("0X"))
                return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9A-F]+H"))
                return Long.parseUnsignedLong(
                    value.substring(0, value.length() - 1), 16);
            return value.matches("[0-9]+") ? Long.parseLong(value) : null;
        }
        catch (NumberFormatException ignored) { return null; }
    }

    private long signed32(long value) {
        return value >= 0x80000000L && value <= 0xffffffffL ?
            value - 0x100000000L : value;
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef definition)
            type = definition.getBaseDataType();
        return type;
    }

    private String typeSpec(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private int typeLength(String specification) {
        DataType type = currentProgram.getDataTypeManager().getDataType(specification);
        return type == null ? -1 : type.getLength();
    }

    private String undefinedType(int width) {
        return switch (width) {
            case 1 -> "/undefined1";
            case 2 -> "/undefined2";
            case 4 -> "/undefined4";
            case 8 -> "/undefined8";
            default -> "/undefined" + width;
        };
    }

    private String fieldName(String current, int offset) {
        return current == null || current.isBlank() ?
            "field_" + String.format("%04X", offset) : current;
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\texpected_signature\t" +
                "expected_signature_source\tallocation_call\tallocator_address\t" +
                "allocator_name\tcopy_first_site\tcopy_last_site\tcopy_span\t" +
                "source_parameter_ordinal\texpected_source_name\texpected_source_type\t" +
                "expected_source_source\texpected_return_type\texpected_return_source\t" +
                "proposed_type_path\tcreate_type\tfield_layout\tlayout_sha256\t" +
                "field_count\tsource_apply\treturn_apply\tunique_return_root\t" +
                "confidence\treason\n");
            for (Row row : rows)
                out.write(bit(row.apply) + "\t" + row.functionAddress + "\t" +
                    clean(row.expectedFunction) + "\t" + clean(row.expectedSignature) +
                    "\t" + row.expectedSignatureSource + "\t" + row.allocationCall +
                    "\t" + row.allocatorAddress + "\t" + clean(row.allocatorName) +
                    "\t" + row.copyFirstSite + "\t" + row.copyLastSite + "\t" +
                    row.copySpan + "\t" + row.sourceOrdinal + "\t" +
                    clean(row.expectedSourceName) + "\t" + row.expectedSourceType +
                    "\t" + row.expectedSourceSource + "\t" + row.expectedReturnType +
                    "\t" + row.expectedReturnSource + "\t" + row.proposedTypePath +
                    "\t" + bit(row.createType) + "\t" + clean(row.fieldLayout) +
                    "\t" + row.layoutHash + "\t" + row.fieldCount + "\t" +
                    bit(row.sourceApply) + "\t" + bit(row.returnApply) + "\t" +
                    bit(row.uniqueReturnRoot) + "\t" + row.confidence + "\t" +
                    clean(row.reason) + "\n");
        }
    }

    private void writeSummary(Path path, List<Row> rows) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_with_allocator_calls=" + functionsScanned,
            "allocation_roots=" + allocationRoots,
            "returned_allocation_roots=" + returnedRoots,
            "exact_fixed_copy_roots=" + exactCopyRoots,
            "field_complete_roots=" + fieldCompleteRoots,
            "manual_or_imported_baselines=" + manualBaselines,
            "overlap_or_geometry_conflicts=" + overlapConflicts,
            "string_moves=" + stringMoves,
            "allocation_destination_moves=" + allocationDestinationMoves,
            "parameter_source_moves=" + parameterSourceMoves,
            "exact_copy_segments=" + exactCopySegments,
            "proposals=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "note=Allocator return ABIs remain neutral. A record view belongs only to the producer/consumer function.",
            "note=Automatic rows require one returned allocation root, one exact source-parameter copy from offset zero, non-overlapping fields, and non-manual ABI baselines."
        ), StandardCharsets.UTF_8);
    }

    private void writeAudits(Path path) throws Exception {
        audits.sort(Comparator.comparing((Audit row) -> row.functionAddress)
            .thenComparing(row -> row.allocationCall));
        try (BufferedWriter out = Files.newBufferedWriter(path,
                StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction_name\tallocation_call\tallocator\t" +
                "returned_root\tunknown_return_path\texact_span\tcopy_segments\n");
            for (Audit row : audits)
                out.write(row.functionAddress + "\t" + clean(row.functionName) +
                    "\t" + row.allocationCall + "\t" + clean(row.allocator) +
                    "\t" + bit(row.returnedRoot) + "\t" +
                    bit(row.unknownReturnPath) + "\t" + row.exactSpan + "\t" +
                    clean(row.copySegments) + "\n");
        }
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null && path.getFileName().toString()
            .equals(currentProgram.getName()) ? path : path.resolve(currentProgram.getName());
    }

    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String sha256(String value) throws Exception {
        byte[] digest = MessageDigest.getInstance("SHA-256")
            .digest(value.getBytes(StandardCharsets.UTF_8));
        StringBuilder result = new StringBuilder();
        for (byte item : digest) result.append(String.format("%02x", item & 0xff));
        return result.toString();
    }

    private enum Kind { ALLOCATION, PARAMETER, CONSTANT, TYPED }

    private record Memory(String base, long offset) { }
    private record ParameterInfo(Parameter parameter, DataType pointee) { }
    private record CopySegment(int parameterOrdinal, long destination, long source,
            int bytes, String site) { }
    private record CopyChain(int parameterOrdinal, int span, String firstSite,
            String lastSite) { }
    private record FieldObservation(long offset, int width, String type, String site) { }
    private record Field(long offset, int width, String type, String name) { }

    private static final class Value {
        final Kind kind;
        final int id;
        final long offset;
        final long constant;
        final String type;
        final int width;
        final DataType pointee;

        private Value(Kind kind, int id, long offset, long constant,
                String type, int width, DataType pointee) {
            this.kind = kind; this.id = id; this.offset = offset;
            this.constant = constant; this.type = type; this.width = width;
            this.pointee = pointee;
        }
        static Value allocation(int id, long offset) {
            return new Value(Kind.ALLOCATION, id, offset, 0, "", 4, null);
        }
        static Value parameter(int ordinal, long offset, DataType pointee) {
            return new Value(Kind.PARAMETER, ordinal, offset, 0, "", 4, pointee);
        }
        static Value constant(long value) {
            return new Value(Kind.CONSTANT, -1, 0, value, "", 4, null);
        }
        static Value typed(String type, int width) {
            return new Value(Kind.TYPED, -1, 0, 0, type, width, null);
        }
        Value add(long delta) {
            if (kind == Kind.CONSTANT) return constant(constant + delta);
            if (kind == Kind.ALLOCATION) return allocation(id, offset + delta);
            if (kind == Kind.PARAMETER) return parameter(id, offset + delta, pointee);
            return this;
        }
    }

    private static final class Allocation {
        final int id;
        final String callSite, allocatorAddress, allocatorName;
        final List<CopySegment> copies = new ArrayList<>();
        final List<FieldObservation> fields = new ArrayList<>();
        Allocation(int id, String callSite, String allocatorAddress,
                String allocatorName) {
            this.id = id; this.callSite = callSite;
            this.allocatorAddress = allocatorAddress;
            this.allocatorName = allocatorName;
        }
    }

    private static final class Layout {
        final String typePath, sourceLayout;
        final boolean createType, safe, sourceCanAdopt;
        final List<Field> fields;
        final String hash;
        Layout(String typePath, boolean createType, List<Field> fields,
                boolean safe, boolean sourceCanAdopt,
                String sourceLayout) throws Exception {
            this.typePath = typePath; this.createType = createType;
            this.fields = fields; this.safe = safe;
            this.sourceCanAdopt = sourceCanAdopt;
            this.sourceLayout = sourceLayout;
            this.hash = sha256(typePath + "|" + serializedFields());
        }
        String serializedFields() {
            List<String> values = new ArrayList<>();
            for (Field field : fields)
                values.add(field.offset + "," + field.width + "," +
                    field.type + "," + field.name);
            return String.join("|", values);
        }
    }

    private record Row(boolean apply, String functionAddress,
            String expectedFunction, String expectedSignature,
            String expectedSignatureSource, String allocationCall,
            String allocatorAddress, String allocatorName, String copyFirstSite,
            String copyLastSite, int copySpan, int sourceOrdinal,
            String expectedSourceName, String expectedSourceType,
            String expectedSourceSource, String expectedReturnType,
            String expectedReturnSource, String proposedTypePath,
            boolean createType, String fieldLayout, String layoutHash,
            int fieldCount, boolean sourceApply, boolean returnApply,
            boolean uniqueReturnRoot, String confidence,
            String reason) { }
    private record Audit(String functionAddress, String functionName,
            String allocationCall, String allocator, boolean returnedRoot,
            boolean unknownReturnPath, int exactSpan, String copySegments) { }
}
