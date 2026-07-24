// Recover the central Submarine Titans {objectTypeId, factory} registry.
// Read-only: discovers the terminated registry, factory ABI, concrete factory result classes,
// and object-type consumers.  Writes auditable proposals under recovery/<program>/.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Object Factories

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STObjectFactoryAnalyzer extends GhidraScript {
    private static final int MIN_REGISTRY_ENTRIES = 32;
    private static final int MAX_REGISTRY_ENTRIES = 4096;
    private static final long MAX_TYPE_ID = 0x1ffffL;

    private Memory memory;
    private DataTypeManager dataTypes;
    private final Map<String, Structure> classTypes = new TreeMap<>();
    private final Map<Integer, Set<String>> classesBySize = new TreeMap<>();

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
        memory = currentProgram.getMemory();
        dataTypes = currentProgram.getDataTypeManager();

        Registry registry = findRegistry();
        if (registry == null)
            throw new IllegalStateException("No terminated {typeId, executable factory} registry " +
                "with at least " + MIN_REGISTRY_ENTRIES + " entries was found");

        collectClassTypes();
        DispatchEvidence dispatch = findFactoryDispatch();
        List<FactoryRow> rows = initialRows(registry);
        Address allocator = discoverAllocator(rows);
        enrichFactories(rows, allocator);
        chooseNames(rows);
        markRepresentatives(rows, dispatch != null);
        List<ConsumerRow> consumers = consumerRows();

        writeRegistry(directory.resolve("object_factory_registry.tsv"), registry, allocator,
            dispatch);
        writeFactories(directory.resolve("object_factory_proposals.tsv"), rows);
        writeFactoriesJson(directory.resolve("object_factory_proposals.jsonl"), rows);
        writeConsumers(directory.resolve("object_type_consumer_proposals.tsv"), consumers);
        writeSummary(directory.resolve("object_factory_summary.txt"), registry, rows, consumers,
            allocator, dispatch);

        long concrete = rows.stream().filter(row -> !row.owner.isBlank()).count();
        long names = rows.stream().filter(row -> row.nameApply).count();
        long creates = rows.stream().filter(row -> row.createApply).count();
        println("Object-factory analysis complete: " + directory.toAbsolutePath().normalize());
        println("Registry=" + addr(registry.base) + ", entries=" + registry.entries.size() +
            ", allocator=" + addr(allocator) + ", concrete owners=" + concrete +
            ", name_apply=" + names + ", missing factories=" + creates +
            ", ABI dispatch=" + (dispatch == null ? "unverified" :
                addr(dispatch.instruction)) + ", enum consumers=" +
            consumers.stream().filter(row -> row.apply).count());
    }

    private Registry findRegistry() throws Exception {
        Registry best = null;
        for (MemoryBlock block : memory.getBlocks()) {
            monitor.checkCancelled();
            if (!block.isInitialized() || block.isExecute() || block.getSize() < 16) continue;
            long alignment = (4 - (block.getStart().getOffset() & 3)) & 3;
            for (long offset = alignment; offset + 16 <= block.getSize(); offset += 4) {
                if ((offset & 0x3fff) == 0) monitor.checkCancelled();
                Address start = block.getStart().add(offset);
                Registry candidate = registryAt(start, block.getEnd());
                if (candidate == null) continue;
                if (best == null || candidate.entries.size() > best.entries.size() ||
                        (candidate.entries.size() == best.entries.size() &&
                         candidate.base.compareTo(best.base) < 0)) best = candidate;
            }
        }
        return best;
    }

    private Registry registryAt(Address start, Address blockEnd) {
        try {
            List<RegistryEntry> entries = new ArrayList<>();
            Set<Long> ids = new TreeSet<>();
            for (int index = 0; index < MAX_REGISTRY_ENTRIES; index++) {
                Address record = start.add((long)index * 8);
                if (record.add(7).compareTo(blockEnd) > 0) return null;
                long id = uint(record);
                long pointerValue = uint(record.add(4));
                if (id == 0 && pointerValue == 0) {
                    if (entries.size() < MIN_REGISTRY_ENTRIES) return null;
                    return new Registry(start, record, entries);
                }
                if (id == 0 || id > MAX_TYPE_ID || pointerValue == 0 || !ids.add(id)) return null;
                Address pointer = address(pointerValue);
                if (!isExecutable(pointer)) return null;
                entries.add(new RegistryEntry(index, record, id, pointer));
            }
        }
        catch (Exception ignored) { }
        return null;
    }

    private void collectClassTypes() {
        Set<String> owners = new TreeSet<>();
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            Function function = iterator.next();
            Namespace namespace = function.getParentNamespace();
            if (namespace instanceof GhidraClass) owners.add(namespace.getName(true));
        }
        for (String owner : owners) {
            Structure structure = findClassType(owner);
            if (structure == null || structure.getLength() < 4) continue;
            classTypes.put(owner, structure);
            classesBySize.computeIfAbsent(structure.getLength(), ignored -> new TreeSet<>())
                .add(owner);
        }
    }

    private Structure findClassType(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure structure && !vtableType(structure)) return structure;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        Structure best = null;
        for (DataType match : matches) {
            if (!(match instanceof Structure structure) || vtableType(structure)) continue;
            if (best == null || preferredClassPath(structure.getPathName(), best.getPathName()))
                best = structure;
        }
        return best;
    }

    private boolean preferredClassPath(String candidate, String current) {
        boolean candidateRoot = candidate.indexOf('/', 1) < 0;
        boolean currentRoot = current.indexOf('/', 1) < 0;
        if (candidateRoot != currentRoot) return candidateRoot;
        boolean candidateRecovered = candidate.contains("/SubmarineTitans/Recovered/");
        boolean currentRecovered = current.contains("/SubmarineTitans/Recovered/");
        return !candidateRecovered && currentRecovered;
    }

    private boolean vtableType(Structure structure) {
        String path = structure.getPathName();
        return path.contains("/VTables/") || structure.getName().endsWith("VTable");
    }

    private List<FactoryRow> initialRows(Registry registry) {
        List<FactoryRow> result = new ArrayList<>();
        for (RegistryEntry entry : registry.entries) {
            Function rawFunction = currentProgram.getFunctionManager().getFunctionAt(entry.pointer);
            Function target = resolveThunk(rawFunction);
            Address targetAddress = target != null ? target.getEntryPoint() : entry.pointer;
            Function current = currentProgram.getFunctionManager().getFunctionAt(targetAddress);
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(targetAddress);
            boolean canCreate = rawFunction == null &&
                currentProgram.getFunctionManager().getFunctionContaining(entry.pointer) == null &&
                !looksLikeMsvcEhContinuation(entry.pointer);
            FactoryRow row = new FactoryRow(entry, targetAddress);
            row.createApply = canCreate;
            row.currentName = current == null ? "" : current.getName(true);
            row.currentNameSource = symbol == null ? "" : symbol.getSource().toString();
            row.currentSignature = current == null ? "" :
                current.getSignature().getPrototypeString(true);
            row.currentSignatureSource = current == null ? "" :
                current.getSignatureSource().toString();
            row.currentReturnType = current == null ? "" : current.getReturnType().getPathName();
            row.entryBytes = entryBytes(entry.pointer);
            row.evidence.add("registry[" + entry.index + "] at " + addr(entry.record) +
                " stores type " + hex(entry.typeId) + " and executable pointer " +
                addr(entry.pointer));
            result.add(row);
        }
        return result;
    }

    private Address discoverAllocator(List<FactoryRow> rows) {
        Map<Address, Integer> counts = new TreeMap<>();
        for (FactoryRow row : rows) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(row.targetAddress);
            if (function == null) continue;
            for (CallEvidence call : calls(function)) {
                if (call.immediateArgument < 4) continue;
                counts.merge(call.target, 1, Integer::sum);
            }
        }
        Address best = null;
        int bestCount = 0;
        for (Map.Entry<Address, Integer> entry : counts.entrySet()) {
            if (entry.getValue() > bestCount) {
                best = entry.getKey();
                bestCount = entry.getValue();
            }
        }
        return bestCount >= 8 ? best : null;
    }

    private DispatchEvidence findFactoryDispatch() {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!function.getName().equals("CreateObject")) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString()) ||
                        instruction.getFlows().length != 0) continue;
                String compact = instruction.toString().toUpperCase(Locale.ROOT)
                    .replace(" ", "");
                boolean recordSlot = compact.contains("*0X8+0X4") ||
                    compact.contains("*8+0X4") || compact.contains("*0X8+4") ||
                    compact.contains("*8+4");
                if (!recordSlot || nearbyArgumentPush(instruction, function, 4)) continue;
                return new DispatchEvidence(function.getEntryPoint(), instruction.getAddress());
            }
        }
        return null;
    }

    private boolean nearbyArgumentPush(Instruction call, Function function, int limit) {
        Instruction cursor = currentProgram.getListing().getInstructionBefore(call.getAddress());
        for (int count = 0; count < limit && cursor != null &&
                function.getBody().contains(cursor.getAddress()); count++) {
            String mnemonic = cursor.getMnemonicString().toUpperCase(Locale.ROOT);
            if ("PUSH".equals(mnemonic)) return true;
            if ("CALL".equals(mnemonic) || cursor.getFlowType().isJump() ||
                    cursor.getFlowType().isTerminal()) break;
            cursor = currentProgram.getListing().getInstructionBefore(cursor.getAddress());
        }
        return false;
    }

    private void enrichFactories(List<FactoryRow> rows, Address allocator) throws Exception {
        for (FactoryRow row : rows) {
            monitor.checkCancelled();
            Function function = currentProgram.getFunctionManager().getFunctionAt(row.targetAddress);
            if (function == null) {
                row.proposedReturnType = "void *";
                row.confidence = row.createApply ? "exact_registry_entry" : "review";
                row.reason = row.createApply ? "exact registry pointer; create function first" :
                    "factory target unavailable";
                continue;
            }
            Set<String> constructors = new TreeSet<>();
            for (CallEvidence call : calls(function)) {
                if (allocator != null && allocator.equals(call.target) &&
                        call.immediateArgument >= 4) row.allocationSize = call.immediateArgument;
                Function called = currentProgram.getFunctionManager().getFunctionAt(call.target);
                called = resolveThunk(called);
                String owner = constructorOwner(called);
                if (owner != null) constructors.add(owner);
            }
            row.constructorOwners.addAll(constructors);
            String sizeOwner = uniqueSizeOwner(row.allocationSize);
            String returnOwner = pointerOwner(function.getReturnType());
            if (sizeOwner != null) {
                row.owner = sizeOwner;
                row.confidence = "high";
                row.evidence.add("allocation size " + row.allocationSize +
                    " uniquely matches " + classTypes.get(sizeOwner).getPathName());
                if (constructors.contains(sizeOwner))
                    row.evidence.add("calls named constructor " + sizeOwner + "::" +
                        leaf(sizeOwner));
                else if (!constructors.isEmpty())
                    row.evidence.add("calls base/helper constructor(s) " +
                        String.join(", ", constructors) + "; exact derived allocation size wins");
            }
            else if (constructors.size() == 1 && constructorMatchesAllocation(
                    constructors.iterator().next(), row.allocationSize)) {
                row.owner = constructors.iterator().next();
                row.confidence = "high";
                row.evidence.add("calls named constructor " + row.owner + "::" +
                    leaf(row.owner) + " whose class length matches allocation size " +
                    row.allocationSize);
            }
            else if (returnOwner != null) {
                row.owner = returnOwner;
                row.confidence = "existing_typed_return";
                row.evidence.add("current return pointer already names class " + returnOwner);
            }
            else {
                row.confidence = row.allocationSize > 0 ? "review" : "exact_factory_abi";
                if (row.allocationSize > 0) row.evidence.add("allocation size " +
                    row.allocationSize + " has no unique current class-layout match");
            }
            row.proposedReturnType = row.owner.isBlank() ? "void *" : row.owner + " *";
            row.reason = String.join("; ", row.evidence);
        }
    }

    private List<CallEvidence> calls(Function function) {
        List<CallEvidence> result = new ArrayList<>();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            boolean terminalTailJump = "JMP".equals(mnemonic) &&
                instruction.getFallThrough() == null;
            if (!"CALL".equals(mnemonic) && !terminalTailJump) continue;
            Address target = directFlow(instruction);
            Instruction previous = currentProgram.getListing()
                .getInstructionBefore(instruction.getAddress());
            Scalar scalar = "CALL".equals(mnemonic) && previous != null &&
                function.getBody().contains(previous.getAddress()) &&
                "PUSH".equalsIgnoreCase(previous.getMnemonicString()) ? previous.getScalar(0) : null;
            long immediate = scalar == null ? -1 : scalar.getUnsignedValue();
            if (target == null) continue;
            Function called = currentProgram.getFunctionManager().getFunctionAt(target);
            called = resolveThunk(called);
            result.add(new CallEvidence(called == null ? target : called.getEntryPoint(), immediate));
        }
        return result;
    }

    private Address directFlow(Instruction instruction) {
        Address[] flows = instruction.getFlows();
        if (flows.length != 1 || !isExecutable(flows[0])) return null;
        return flows[0];
    }

    private String constructorOwner(Function function) {
        if (function == null) return null;
        Namespace namespace = function.getParentNamespace();
        if (!(namespace instanceof GhidraClass)) return null;
        String owner = namespace.getName(true);
        return function.getName().equals(leaf(owner)) && classTypes.containsKey(owner) ? owner : null;
    }

    private String uniqueSizeOwner(long allocationSize) {
        if (allocationSize < 4 || allocationSize > Integer.MAX_VALUE) return null;
        Set<String> owners = classesBySize.get((int)allocationSize);
        return owners != null && owners.size() == 1 ? owners.iterator().next() : null;
    }

    private boolean constructorMatchesAllocation(String owner, long allocationSize) {
        Structure structure = classTypes.get(owner);
        return structure != null && allocationSize >= 4 &&
            structure.getLength() == allocationSize;
    }

    private String pointerOwner(DataType type) {
        if (!(type instanceof Pointer pointer)) return null;
        String name = pointer.getDataType().getName();
        for (String owner : classTypes.keySet())
            if (leaf(owner).equals(name)) return owner;
        return null;
    }

    private void chooseNames(List<FactoryRow> rows) {
        Map<String, Set<Address>> targetsByOwner = new TreeMap<>();
        Map<String, Integer> idsByOwner = new TreeMap<>();
        for (FactoryRow row : rows) {
            if (row.owner.isBlank()) continue;
            targetsByOwner.computeIfAbsent(row.owner, ignored -> new TreeSet<>())
                .add(row.targetAddress);
            idsByOwner.merge(row.owner, 1, Integer::sum);
        }
        for (FactoryRow row : rows) {
            String suffix = String.format("%04X", row.entry.typeId);
            if (row.owner.isBlank()) {
                row.enumValueName = "ST_OBJECT_TYPE_" + suffix;
                row.proposedName = "CreateObjectType_" + suffix;
                continue;
            }
            String simple = simplifyOwner(row.owner);
            boolean duplicateIdOwner = idsByOwner.getOrDefault(row.owner, 0) > 1;
            boolean duplicateFactoryOwner = targetsByOwner.get(row.owner).size() > 1;
            row.enumValueName = "ST_OBJECT_" + upperSnake(simple) +
                (duplicateIdOwner ? "_" + suffix : "");
            row.proposedName = "Create" + simple +
                (duplicateFactoryOwner ? "_" + suffix : "");
        }

        Map<String, Integer> enumCounts = new TreeMap<>();
        for (FactoryRow row : rows) enumCounts.merge(row.enumValueName, 1, Integer::sum);
        for (FactoryRow row : rows)
            if (enumCounts.get(row.enumValueName) > 1)
                row.enumValueName += "_" + String.format("%04X", row.entry.typeId);

        Map<String, Set<Address>> functionTargets = new TreeMap<>();
        for (FactoryRow row : rows)
            functionTargets.computeIfAbsent(row.proposedName, ignored -> new TreeSet<>())
                .add(row.targetAddress);
        for (FactoryRow row : rows)
            if (functionTargets.get(row.proposedName).size() > 1)
                row.proposedName += "_" + String.format("%04X", row.entry.typeId);
    }

    private void markRepresentatives(List<FactoryRow> rows, boolean abiProven) {
        Set<Address> seen = new TreeSet<>();
        for (FactoryRow row : rows) {
            row.representative = seen.add(row.targetAddress);
            Function function = currentProgram.getFunctionManager().getFunctionAt(row.targetAddress);
            row.signatureApply = row.representative && abiProven;
            row.nameApply = row.representative && !row.owner.isBlank() &&
                (function == null || synthetic(function.getName()));
            if (!row.representative) row.createApply = false;
        }
    }

    private List<ConsumerRow> consumerRows() throws Exception {
        List<ConsumerRow> result = new ArrayList<>();
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Function function = iterator.next();
            if (function.isExternal()) continue;
            String leafName = function.getName();
            String lower = leafName.toLowerCase(Locale.ROOT);
            if (lower.contains("createobject")) {
                List<Parameter> explicit = new ArrayList<>();
                for (Parameter parameter : function.getParameters())
                    if (!parameter.isAutoParameter()) explicit.add(parameter);
                Parameter selected = null;
                for (Parameter parameter : explicit) {
                    String name = parameter.getName().toLowerCase(Locale.ROOT);
                    if ((name.contains("type") || name.contains("class")) &&
                            scalar32(parameter.getDataType())) { selected = parameter; break; }
                }
                if (selected == null && leafName.equals("CreateObject") && !explicit.isEmpty() &&
                        scalar32(explicit.get(0).getDataType())) selected = explicit.get(0);
                if (selected != null) result.add(ConsumerRow.parameter(function, selected,
                    automaticSource(selected.getSource()), "CreateObject discriminator"));
            }
            if (lower.contains("getobjecttypeid") && scalar32(function.getReturnType()))
                result.add(ConsumerRow.returnType(function,
                    automaticSource(function.getSignatureSource()),
                    "GetObjectTypeId result"));
        }
        result.sort(Comparator.comparing((ConsumerRow row) -> row.functionAddress)
            .thenComparing(row -> row.kind).thenComparingInt(row -> row.ordinal));
        return result;
    }

    private boolean scalar32(DataType type) {
        if (type == null || type.getLength() != 4 || type instanceof Pointer) return false;
        String name = type.getName().toLowerCase(Locale.ROOT);
        return name.contains("int") || name.contains("long") || name.contains("undefined4") ||
            name.contains("dword");
    }

    private boolean automaticSource(SourceType source) {
        return source != SourceType.USER_DEFINED && source != SourceType.IMPORTED;
    }

    private Function resolveThunk(Function function) {
        Function current = function;
        Set<Address> seen = new TreeSet<>();
        for (int depth = 0; depth < 32 && current != null && current.isThunk(); depth++) {
            if (!seen.add(current.getEntryPoint())) break;
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) break;
            current = next;
        }
        return current;
    }

    private void writeRegistry(Path path, Registry registry, Address allocator,
            DispatchEvidence dispatch) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\ttable_address\tsentinel_address\trecord_count\trecord_size\t" +
                "enum_name\trecord_type\tarray_name\tallocator_address\tevidence\n");
            out.write((dispatch == null ? "0" : "1") + "\t" + addr(registry.base) + "\t" +
                addr(registry.sentinel) + "\t" +
                registry.entries.size() + "\t8\tSTObjectTypeId\tSTObjectFactoryEntry\t" +
                "g_objectFactoryRegistry\t" + addr(allocator) + "\t" +
                "terminated dense {uint32 typeId, executable factory} registry" +
                (dispatch == null ? "; no argument-free +4 slot dispatch was verified" :
                    "; argument-free +4 slot dispatch at " + addr(dispatch.instruction) +
                    " in " + addr(dispatch.function)) + "\n");
        }
    }

    private void writeFactories(Path path, List<FactoryRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("create_apply\tsignature_apply\tname_apply\trepresentative\trecord_index\t" +
                "record_address\ttype_id\ttype_id_hex\tenum_value_name\traw_factory_address\t" +
                "target_address\tentry_bytes\tcurrent_name\tcurrent_name_source\t" +
                "current_signature\tcurrent_signature_source\tcurrent_return_type\t" +
                "proposed_name\tproposed_return_type\towner\tallocation_size\t" +
                "constructor_owners\tconfidence\treason\n");
            for (FactoryRow row : rows) out.write((row.createApply ? "1" : "0") + "\t" +
                (row.signatureApply ? "1" : "0") + "\t" + (row.nameApply ? "1" : "0") +
                "\t" + (row.representative ? "1" : "0") + "\t" + row.entry.index + "\t" +
                addr(row.entry.record) + "\t" + row.entry.typeId + "\t" + hex(row.entry.typeId) +
                "\t" + tsv(row.enumValueName) + "\t" + addr(row.entry.pointer) + "\t" +
                addr(row.targetAddress) + "\t" + row.entryBytes + "\t" +
                tsv(row.currentName) + "\t" + row.currentNameSource + "\t" +
                tsv(row.currentSignature) + "\t" + row.currentSignatureSource + "\t" +
                tsv(row.currentReturnType) + "\t" + tsv(row.proposedName) + "\t" +
                tsv(row.proposedReturnType) + "\t" + tsv(row.owner) + "\t" +
                (row.allocationSize < 0 ? "" : Long.toString(row.allocationSize)) + "\t" +
                tsv(String.join(" | ", row.constructorOwners)) + "\t" + row.confidence +
                "\t" + tsv(row.reason) + "\n");
        }
    }

    private void writeFactoriesJson(Path path, List<FactoryRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            for (FactoryRow row : rows) out.write("{\"type_id\":" + row.entry.typeId +
                ",\"type_id_hex\":" + json(hex(row.entry.typeId)) +
                ",\"enum_value\":" + json(row.enumValueName) +
                ",\"raw_factory_address\":" + json(addr(row.entry.pointer)) +
                ",\"target_address\":" + json(addr(row.targetAddress)) +
                ",\"owner\":" + json(row.owner) +
                ",\"allocation_size\":" + row.allocationSize +
                ",\"proposed_name\":" + json(row.proposedName) +
                ",\"proposed_return_type\":" + json(row.proposedReturnType) +
                ",\"create_apply\":" + row.createApply +
                ",\"signature_apply\":" + row.signatureApply +
                ",\"name_apply\":" + row.nameApply +
                ",\"confidence\":" + json(row.confidence) +
                ",\"reason\":" + json(row.reason) + "}\n");
        }
    }

    private void writeConsumers(Path path, List<ConsumerRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tkind\tfunction_address\texpected_function\texpected_signature\t" +
                "expected_signature_source\ttarget_ordinal\ttarget_name\texpected_type\t" +
                "expected_source\tproposed_type\tevidence\n");
            for (ConsumerRow row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.kind +
                "\t" + row.functionAddress + "\t" + tsv(row.expectedFunction) + "\t" +
                tsv(row.expectedSignature) + "\t" + row.expectedSignatureSource + "\t" +
                row.ordinal + "\t" + tsv(row.targetName) + "\t" + tsv(row.expectedType) +
                "\t" + row.expectedSource + "\t/SubmarineTitans/Recovered/Enums/STObjectTypeId\t" +
                tsv(row.evidence) + "\n");
        }
    }

    private void writeSummary(Path path, Registry registry, List<FactoryRow> rows,
            List<ConsumerRow> consumers, Address allocator, DispatchEvidence dispatch)
            throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST object factory registry recovery\n\n");
            out.write("table: " + addr(registry.base) + "\nsentinel: " +
                addr(registry.sentinel) + "\nentries: " + registry.entries.size() +
                "\nallocator: " + addr(allocator) + "\nABI dispatch: " +
                (dispatch == null ? "unverified" : addr(dispatch.function) + "@" +
                    addr(dispatch.instruction)) + "\n");
            out.write("factory signature_apply: " +
                rows.stream().filter(row -> row.signatureApply).count() + "\n");
            out.write("factory name_apply: " + rows.stream().filter(row -> row.nameApply).count() +
                "\nconcrete result owners: " + rows.stream().filter(row -> !row.owner.isBlank()).count() +
                "\nmissing function create_apply: " + rows.stream().filter(row -> row.createApply).count() +
                "\nobject-type consumers: " + consumers.size() + "\nconsumer apply: " +
                consumers.stream().filter(row -> row.apply).count() + "\n\n");
            out.write("Every unique target receives only one signature/name proposal even when " +
                "several type IDs share a factory.  The no-argument cdecl ABI is exact from the " +
                "registry consumer; concrete class results require independent layout or named-" +
                "constructor evidence.\n");
        }
    }

    private boolean looksLikeMsvcEhContinuation(Address address) {
        try {
            return (memory.getByte(address) & 0xff) == 0x8b &&
                (memory.getByte(address.add(1)) & 0xff) == 0x65 &&
                (memory.getByte(address.add(2)) & 0xff) == 0xe8;
        }
        catch (Exception ignored) { return false; }
    }

    private String entryBytes(Address address) {
        try {
            MemoryBlock block = memory.getBlock(address);
            int length = (int)Math.min(16, block.getEnd().subtract(address) + 1);
            byte[] bytes = new byte[length];
            if (memory.getBytes(address, bytes) != length) return "";
            StringBuilder result = new StringBuilder();
            for (byte value : bytes) result.append(String.format("%02X", value & 0xff));
            return result.toString();
        }
        catch (Exception ignored) { return ""; }
    }

    private boolean isExecutable(Address address) {
        if (address == null) return false;
        MemoryBlock block = memory.getBlock(address);
        return block != null && block.isInitialized() && block.isExecute();
    }

    private long uint(Address address) throws Exception {
        return Integer.toUnsignedLong(memory.getInt(address));
    }

    private Address address(long value) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(value);
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Analyze");
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        Path leaf = path.getFileName();
        return leaf != null && leaf.toString().equals(currentProgram.getName()) ? path :
            path.resolve(currentProgram.getName());
    }

    private static String simplifyOwner(String owner) {
        String value = leaf(owner);
        if (value.endsWith("ClassTy")) value = value.substring(0, value.length() - 7);
        else if (value.endsWith("Ty")) value = value.substring(0, value.length() - 2);
        else if (value.endsWith("C") && value.length() > 1)
            value = value.substring(0, value.length() - 1);
        return value.isBlank() ? leaf(owner) : value;
    }

    private static String upperSnake(String value) {
        String result = value.replaceAll("([a-z0-9])([A-Z])", "$1_$2")
            .replaceAll("([A-Z]+)([A-Z][a-z])", "$1_$2")
            .replaceAll("[^A-Za-z0-9]+", "_").toUpperCase(Locale.ROOT);
        return result.replaceAll("^_+|_+$", "");
    }

    private static String leaf(String owner) {
        int index = owner.lastIndexOf("::");
        return index < 0 ? owner : owner.substring(index + 2);
    }

    private static boolean synthetic(String name) {
        return name != null && name.matches("(?i)(?:FUN|sub|thunk_(?:FUN|sub))_[0-9a-f]+");
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static String hex(long value) { return String.format("0x%04X", value); }

    private static String tsv(String value) {
        return value == null ? "" : value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String json(String value) {
        if (value == null) return "null";
        StringBuilder out = new StringBuilder("\"");
        for (char ch : value.toCharArray()) {
            switch (ch) {
                case '\\' -> out.append("\\\\");
                case '\"' -> out.append("\\\"");
                case '\n' -> out.append("\\n");
                case '\r' -> out.append("\\r");
                case '\t' -> out.append("\\t");
                default -> out.append(ch);
            }
        }
        return out.append('\"').toString();
    }

    private record Registry(Address base, Address sentinel, List<RegistryEntry> entries) { }
    private record RegistryEntry(int index, Address record, long typeId, Address pointer) { }
    private record CallEvidence(Address target, long immediateArgument) { }
    private record DispatchEvidence(Address function, Address instruction) { }

    private static class FactoryRow {
        final RegistryEntry entry;
        final Address targetAddress;
        boolean createApply, signatureApply, nameApply, representative;
        String currentName = "", currentNameSource = "", currentSignature = "";
        String currentSignatureSource = "", currentReturnType = "", entryBytes = "";
        String enumValueName = "", proposedName = "", proposedReturnType = "void *";
        String owner = "", confidence = "review", reason = "";
        long allocationSize = -1;
        final Set<String> constructorOwners = new TreeSet<>();
        final List<String> evidence = new ArrayList<>();
        FactoryRow(RegistryEntry entry, Address targetAddress) {
            this.entry = entry; this.targetAddress = targetAddress;
        }
    }

    private static class ConsumerRow {
        final boolean apply;
        final String kind, functionAddress, expectedFunction, expectedSignature;
        final String expectedSignatureSource, targetName, expectedType, expectedSource, evidence;
        final int ordinal;
        ConsumerRow(boolean apply, String kind, Function function, int ordinal,
                String targetName, String expectedType, String expectedSource, String evidence) {
            this.apply = apply; this.kind = kind; this.functionAddress = addr(function.getEntryPoint());
            this.expectedFunction = function.getName(true);
            this.expectedSignature = function.getSignature().getPrototypeString(true);
            this.expectedSignatureSource = function.getSignatureSource().toString();
            this.ordinal = ordinal; this.targetName = targetName; this.expectedType = expectedType;
            this.expectedSource = expectedSource; this.evidence = evidence;
        }
        static ConsumerRow parameter(Function function, Parameter parameter, boolean apply,
                String evidence) {
            return new ConsumerRow(apply, "parameter", function, parameter.getOrdinal(),
                parameter.getName(), parameter.getDataType().getPathName(),
                parameter.getSource().toString(), evidence);
        }
        static ConsumerRow returnType(Function function, boolean apply, String evidence) {
            return new ConsumerRow(apply, "return", function, -1, "return",
                function.getReturnType().getPathName(), function.getSignatureSource().toString(),
                evidence);
        }
    }
}
