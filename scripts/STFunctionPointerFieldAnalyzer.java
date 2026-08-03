// Recover non-vtable function-pointer fields from the chain:
// exact function address -> structure field store -> indirect call through that field.
// Read-only: writes function_pointer_field_proposals.tsv and summary.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Function Pointer Fields

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STFunctionPointerFieldAnalyzer extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT = 45;
    private static final int MAX_TRACE_DEPTH = 24;
    private static final String MARKER = "[STFunctionPointerFieldApplier]";
    private static final String TYPE_ROOT =
        "/SubmarineTitans/Recovered/FunctionPointerFields/";
    private static final Set<String> GENERATED_MARKERS = Set.of(
        "[STClassLayoutApplier]", "[STGlobalDataApplier]",
        "[STPointerShapeApplier]", "[STDArrayElementApplier]",
        "[STGlobalRecordApplier]", "[STGlobalAggregateApplier]",
        "[STDiscriminatedPayloadApplier]");
    private static final Set<String> ABI_TAGS = Set.of(
        "RECOVERED_ABI_CONSISTENCY", "RECOVERED_CALLSITE_CONVENTION",
        "RECOVERED_CONSTRUCTOR", "RECOVERED_DESTRUCTOR",
        "RECOVERED_HEURISTIC_SIGNATURE", "RECOVERED_HIDDEN_THIS",
        "RECOVERED_MESSAGE_HANDLER", "RECOVERED_OBJECT_FACTORY",
        "RECOVERED_PROTOTYPE", "RECOVERED_UTILITY_SEMANTICS",
        "RECOVERED_VIRTUAL_METHOD");

    private final Map<FieldKey, Evidence> evidence = new TreeMap<>();
    private final List<Failure> failures = new ArrayList<>();
    private final Map<Object, FieldRef> fieldCache = new HashMap<>();
    private final Map<Object, Function> functionCache = new HashMap<>();
    private int candidates, machineStoreCandidates, machineCallCandidates;
    private int machineAddressReferenceFunctions, machineIndirectWriteFunctions;
    private int pcodeStoreOperations, exactFieldStores, trustedFieldStores;
    private int skippedCallOnlyDecompiles;

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

        List<Function> storeFunctions = new ArrayList<>(), callFunctions = new ArrayList<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (!candidate(function)) continue;
            MachineCandidate machine = machineCandidate(function);
            if (!machine.any()) continue;
            candidates++;
            if (machine.storedFunction()) {
                machineStoreCandidates++;
                storeFunctions.add(function);
            }
            if (machine.indirectCall()) {
                machineCallCandidates++;
                callFunctions.add(function);
            }
            if (machine.functionAddressReference()) machineAddressReferenceFunctions++;
            if (machine.indirectWrite()) machineIndirectWriteFunctions++;
        }

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(false);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open current program");
        try {
            Set<Address> analyzed = new HashSet<>();
            for (Function function : storeFunctions) {
                monitor.checkCancelled();
                analyze(function, decompiler);
                analyzed.add(function.getEntryPoint());
            }
            boolean exactTargetStore = evidence.values().stream()
                .anyMatch(value -> !value.observedTargets.isEmpty());
            for (Function function : callFunctions) {
                if (!analyzed.add(function.getEntryPoint())) continue;
                if (!exactTargetStore) {
                    skippedCallOnlyDecompiles++;
                    continue;
                }
                monitor.checkCancelled();
                analyze(function, decompiler);
            }
        }
        finally { decompiler.dispose(); }

        List<Row> rows = proposals();
        writeRows(directory.resolve("function_pointer_field_proposals.tsv"), rows);
        writeFailures(directory.resolve("function_pointer_field_failures.tsv"));
        writeSummary(directory.resolve("function_pointer_field_summary.txt"), rows);
        println("Function-pointer-field analysis complete: " + directory.toAbsolutePath());
        println("Candidates=" + candidates + ", fields=" + rows.size() +
            ", apply=" + rows.stream().filter(row -> row.apply).count() +
            ", failures=" + failures.size());
    }

    private boolean candidate(Function function) {
        return function != null && !function.isExternal() && !function.isThunk() &&
            !isLibrary(function);
    }

    private MachineCandidate machineCandidate(Function function) {
        boolean storedFunction = false, indirectCall = false;
        boolean functionAddressReference = false, indirectWrite = false;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if ("CALL".equals(mnemonic) && directCalledFunction(instruction) == null)
                indirectCall = true;
            boolean addressMaterialization = "MOV".equals(mnemonic) ||
                "LEA".equals(mnemonic) || "PUSH".equals(mnemonic);
            Function referenced = addressMaterialization ?
                referencedFunction(instruction) : null;
            if (referenced != null) functionAddressReference = true;
            boolean writesIndirect = "MOV".equals(mnemonic) &&
                instruction.getNumOperands() >= 2 &&
                OperandType.isIndirect(instruction.getOperandType(0));
            if (writesIndirect) indirectWrite = true;
            if (writesIndirect && referenced != null) storedFunction = true;
        }
        // Also admit the common two-instruction materialization
        // MOV reg,function; MOV [field],reg. High p-code still has to prove that
        // the exact function value reaches the exact structure field.
        storedFunction |= functionAddressReference && indirectWrite;
        return new MachineCandidate(storedFunction, indirectCall,
            functionAddressReference, indirectWrite);
    }

    private void analyze(Function function, DecompInterface decompiler) {
        try {
            fieldCache.clear(); functionCache.clear();
            DecompileResults result = decompiler.decompileFunction(function,
                DECOMPILE_TIMEOUT, monitor);
            if (result == null || !result.decompileCompleted()) {
                failures.add(new Failure(addr(function.getEntryPoint()), function.getName(true),
                    result == null ? "no decompiler result" : text(result.getErrorMessage())));
                return;
            }
            Object highFunction = result.getClass().getMethod("getHighFunction").invoke(result);
            if (highFunction == null) throw new IllegalStateException("no HighFunction");
            @SuppressWarnings("unchecked")
            Iterator<Object> operations = (Iterator<Object>)highFunction.getClass()
                .getMethod("getPcodeOps").invoke(highFunction);
            while (operations.hasNext()) {
                Object operation = operations.next();
                String mnemonic = mnemonic(operation);
                if ("STORE".equals(mnemonic)) collectStore(function, operation);
                else if ("CALLIND".equals(mnemonic)) collectCall(function, operation);
            }
        }
        catch (Exception exception) {
            failures.add(new Failure(addr(function.getEntryPoint()), function.getName(true),
                message(exception)));
        }
    }

    private void collectStore(Function containing, Object operation) throws Exception {
        pcodeStoreOperations++;
        if (inputCount(operation) < 3) return;
        FieldRef field = fieldAddress(input(operation, 1), 0, new HashSet<>());
        Function target = functionValue(input(operation, 2), 0, new HashSet<>());
        if (field == null || target == null) return;
        Function resolved = resolveThunk(target);
        if (resolved == null) return;
        exactFieldStores++;
        FieldKey key = new FieldKey(field.structure.getPathName(), field.offset);
        Evidence value = evidence.computeIfAbsent(key,
            ignored -> new Evidence(field.structure, field.offset));
        String observedSite = site(operation) + " " + containing.getName(true) +
            " stores " + target.getName(true);
        value.observedTargets.add(addr(resolved.getEntryPoint()));
        value.observedStoreSites.add(observedSite);
        String rejection = signatureRejection(resolved);
        if (!rejection.isBlank()) {
            value.rejectedStoreSites.add(observedSite + " [" + rejection + "]");
            value.rejectionReasons.add(rejection);
            return;
        }
        trustedFieldStores++;
        value.targets.put(addr(resolved.getEntryPoint()), resolved);
        value.storeSites.add(observedSite);
    }

    private void collectCall(Function containing, Object operation) throws Exception {
        if (inputCount(operation) < 1) return;
        FieldRef field = calledField(input(operation, 0), 0, new HashSet<>());
        if (field == null) return;
        FieldKey key = new FieldKey(field.structure.getPathName(), field.offset);
        Evidence value = evidence.computeIfAbsent(key,
            ignored -> new Evidence(field.structure, field.offset));
        value.callSites.add(site(operation) + " " + containing.getName(true) +
            " CALLIND arguments=" + Math.max(0, inputCount(operation) - 1));
        value.callArgumentCounts.add(Math.max(0, inputCount(operation) - 1));
    }

    private FieldRef calledField(Object node, int depth, Set<Object> seen) throws Exception {
        if (node == null || depth > MAX_TRACE_DEPTH || !seen.add(node)) return null;
        Object definition = definition(node);
        if (definition == null) return null;
        String mnemonic = mnemonic(definition);
        if ("LOAD".equals(mnemonic) && inputCount(definition) >= 2)
            return fieldAddress(input(definition, 1), depth + 1, seen);
        if (Set.of("COPY", "CAST", "INDIRECT").contains(mnemonic) &&
                inputCount(definition) >= 1)
            return calledField(input(definition, 0), depth + 1, seen);
        if ("MULTIEQUAL".equals(mnemonic)) {
            FieldRef agreed = null;
            for (int index = 0; index < inputCount(definition); index++) {
                FieldRef candidate = calledField(input(definition, index), depth + 1,
                    new HashSet<>(seen));
                if (candidate == null || agreed != null && !agreed.same(candidate)) return null;
                agreed = candidate;
            }
            return agreed;
        }
        return null;
    }

    private FieldRef fieldAddress(Object node, int depth, Set<Object> seen) throws Exception {
        if (node == null || depth > MAX_TRACE_DEPTH || !seen.add(node)) return null;
        if (fieldCache.containsKey(node)) return fieldCache.get(node);
        Object definition = definition(node);
        if (definition != null) {
            String mnemonic = mnemonic(definition);
            if (Set.of("COPY", "CAST", "INDIRECT").contains(mnemonic) &&
                    inputCount(definition) >= 1) {
                FieldRef result = fieldAddress(input(definition, 0), depth + 1, seen);
                fieldCache.put(node, result); return result;
            }
            if (("PTRSUB".equals(mnemonic) || "INT_ADD".equals(mnemonic)) &&
                    inputCount(definition) >= 2) {
                Object left = input(definition, 0), right = input(definition, 1);
                Long leftConstant = constantValue(left), rightConstant = constantValue(right);
                Object base = rightConstant != null ? left : leftConstant != null ? right : null;
                Long offset = rightConstant != null ? rightConstant : leftConstant;
                Structure structure = pointerStructure(dataType(base));
                if (structure != null && offset != null && offset >= 0 &&
                        offset <= Integer.MAX_VALUE) {
                    FieldRef result = exactField(structure, offset.intValue());
                    fieldCache.put(node, result); return result;
                }
                FieldRef parent = fieldAddress(base, depth + 1, seen);
                if (parent != null && offset != null && offset >= 0 &&
                        parent.offset + offset <= Integer.MAX_VALUE) {
                    FieldRef result = exactField(parent.structure,
                        (int)(parent.offset + offset));
                    fieldCache.put(node, result); return result;
                }
            }
        }
        Structure structure = pointerStructure(dataType(node));
        FieldRef result = structure == null ? null : exactField(structure, 0);
        fieldCache.put(node, result);
        return result;
    }

    private FieldRef exactField(Structure structure, int offset) {
        if (offset < 0 || offset + currentProgram.getDefaultPointerSize() >
                structure.getLength()) return null;
        DataTypeComponent component = structure.getComponentAt(offset);
        return component != null && component.getOffset() == offset ?
            new FieldRef(structure, offset) : null;
    }

    private Function functionValue(Object node, int depth, Set<Object> seen) throws Exception {
        if (node == null || depth > MAX_TRACE_DEPTH || !seen.add(node)) return null;
        if (functionCache.containsKey(node)) return functionCache.get(node);
        Address address = nodeAddress(node);
        Function direct = address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
        if (direct != null) { functionCache.put(node, direct); return direct; }
        Object definition = definition(node);
        if (definition == null) return null;
        String mnemonic = mnemonic(definition);
        if (Set.of("COPY", "CAST").contains(mnemonic) && inputCount(definition) >= 1) {
            Function result = functionValue(input(definition, 0), depth + 1, seen);
            functionCache.put(node, result); return result;
        }
        if ("MULTIEQUAL".equals(mnemonic)) {
            Function agreed = null;
            for (int index = 0; index < inputCount(definition); index++) {
                Function candidate = functionValue(input(definition, index), depth + 1,
                    new HashSet<>(seen));
                if (candidate == null || agreed != null &&
                        !agreed.getEntryPoint().equals(candidate.getEntryPoint())) return null;
                agreed = candidate;
            }
            functionCache.put(node, agreed); return agreed;
        }
        return null;
    }

    private List<Row> proposals() {
        List<Row> rows = new ArrayList<>();
        for (Map.Entry<FieldKey, Evidence> entry : evidence.entrySet()) {
            Evidence value = entry.getValue();
            if (value.observedTargets.isEmpty()) continue;
            DataTypeComponent component = value.structure.getComponentAt(value.offset);
            if (component == null || component.getOffset() != value.offset) continue;
            Set<String> signatures = new TreeSet<>();
            for (Function target : value.targets.values()) signatures.add(signatureKey(target));
            Function representative = value.targets.values().stream().findFirst().orElse(null);
            boolean completeChain = !value.targets.isEmpty() && !value.callSites.isEmpty();
            boolean compatible = signatures.size() == 1;
            boolean owned = generatedStructure(value.structure);
            boolean baseline = genericComponent(component) || generatedComponent(component);
            boolean apply = completeChain && compatible && owned && baseline;
            String definition = TYPE_ROOT + "callback_" + sanitize(value.structure.getName()) +
                "_" + String.format("%04X", value.offset);
            String reason = "stores=" + value.storeSites.size() + ", calls=" +
                value.callSites.size() + ", targets=" + value.targets.keySet() +
                ", observed_targets=" + value.observedTargets +
                ", signatures=" + signatures + ", call_argument_counts=" +
                value.callArgumentCounts + (completeChain ? "" : "; incomplete chain") +
                (signatures.size() > 1 ? "; conflicting trusted target ABIs" : "") +
                (value.targets.isEmpty() ?
                    "; all exact stores rejected: " + value.rejectionReasons : "") +
                (owned ? "" : "; manual/unowned structure") +
                (baseline ? "" : "; concrete field type preserved");
            rows.add(new Row(apply, value.structure.getPathName(), value.offset,
                name(component), typeSpec(component.getDataType()), text(component.getComment()),
                definition, meaningfulFieldName(component) ? name(component) :
                    "callback_" + String.format("%04X", value.offset),
                representative == null ? "" : addr(representative.getEntryPoint()),
                representative == null ? "" : representative.getName(true),
                String.join("|", value.targets.keySet()),
                String.join("|", value.observedTargets),
                String.join(" | ", value.observedStoreSites),
                String.join(" | ", value.storeSites), String.join(" | ", value.callSites),
                String.join(" | ", value.rejectedStoreSites),
                apply ? "high" : "review", reason));
        }
        rows.sort(Comparator.comparing((Row row) -> row.structurePath)
            .thenComparingInt(row -> row.offset));
        return rows;
    }

    private boolean genericComponent(DataTypeComponent component) {
        DataType type = component.getDataType();
        if (type instanceof Undefined) return component.getLength() == currentProgram.getDefaultPointerSize();
        if (type instanceof Pointer pointer)
            return pointer.getDataType() == null || pointer.getDataType() instanceof VoidDataType;
        return type instanceof AbstractIntegerDataType && component.getLength() ==
            currentProgram.getDefaultPointerSize() && genericFieldName(name(component));
    }
    private boolean generatedComponent(DataTypeComponent component) {
        return component.getDataType() instanceof Pointer pointer &&
            pointer.getDataType() instanceof FunctionDefinition &&
            text(component.getComment()).contains(MARKER);
    }
    private boolean generatedStructure(Structure structure) {
        String description = text(structure.getDescription());
        return GENERATED_MARKERS.stream().anyMatch(description::contains);
    }
    private String signatureRejection(Function function) {
        if (function == null || function.hasVarArgs() ||
                function.getCallingConventionName() == null ||
                function.getCallingConventionName().equals("unknown"))
            return function != null && function.hasVarArgs() ? "variadic target ABI" :
                "unknown calling convention";
        SourceType source = function.getSignatureSource();
        if (source == SourceType.IMPORTED) return "";
        for (FunctionTag tag : function.getTags())
            if (ABI_TAGS.contains(tag.getName()) ||
                    tag.getName().startsWith("RECOVERED_UTILITY_")) return "";
        return source == SourceType.USER_DEFINED ?
            "USER_DEFINED without independent ABI provenance" :
            "no imported or recovered ABI provenance";
    }
    private String signatureKey(Function function) {
        List<String> parts = new ArrayList<>();
        parts.add(text(function.getCallingConventionName()));
        parts.add(typeSpec(function.getReturnType()));
        for (Parameter parameter : function.getParameters())
            parts.add(typeSpec(parameter.getDataType()));
        return String.join(";", parts);
    }

    private Object definition(Object node) {
        try { return node.getClass().getMethod("getDef").invoke(node); }
        catch (Exception ignored) { return null; }
    }
    private Object input(Object operation, int index) throws Exception {
        return operation.getClass().getMethod("getInput", int.class).invoke(operation, index);
    }
    private int inputCount(Object operation) throws Exception {
        return ((Number)operation.getClass().getMethod("getNumInputs").invoke(operation)).intValue();
    }
    private String mnemonic(Object operation) throws Exception {
        return String.valueOf(operation.getClass().getMethod("getMnemonic").invoke(operation));
    }
    private String site(Object operation) {
        try {
            Object sequence = operation.getClass().getMethod("getSeqnum").invoke(operation);
            Address address = (Address)sequence.getClass().getMethod("getTarget").invoke(sequence);
            return addr(address);
        }
        catch (Exception ignored) { return ""; }
    }
    private DataType dataType(Object node) {
        try {
            Object high = node.getClass().getMethod("getHigh").invoke(node);
            return high == null ? null :
                (DataType)high.getClass().getMethod("getDataType").invoke(high);
        }
        catch (Exception ignored) { return null; }
    }
    private Long constantValue(Object node) {
        try {
            if (!((Boolean)node.getClass().getMethod("isConstant").invoke(node))) return null;
            return ((Number)node.getClass().getMethod("getOffset").invoke(node)).longValue();
        }
        catch (Exception ignored) { return null; }
    }
    private Address nodeAddress(Object node) {
        try {
            Address address = (Address)node.getClass().getMethod("getAddress").invoke(node);
            if (address != null && address.isMemoryAddress()) return address;
            Long offset = constantValue(node);
            return offset == null ? null : currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(offset);
        }
        catch (Exception ignored) { return null; }
    }
    private Structure pointerStructure(DataType type) {
        return type instanceof Pointer pointer && pointer.getDataType() instanceof Structure structure ?
            structure : null;
    }

    private Function referencedFunction(Instruction instruction) {
        for (Reference reference : instruction.getReferencesFrom()) {
            Function function = currentProgram.getFunctionManager()
                .getFunctionAt(reference.getToAddress());
            if (function != null) return function;
        }
        if (instruction.getNumOperands() < 2) return null;
        for (Object object : instruction.getOpObjects(1))
            if (object instanceof ghidra.program.model.scalar.Scalar scalar) {
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(scalar.getUnsignedValue());
                Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                if (function != null) return function;
            }
        return null;
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
    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags())
            if (tag.getName().equals("LIBRARY") || tag.getName().startsWith("LIBRARY_"))
                return true;
        return false;
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tstructure_path\tcomponent_offset\texpected_field_name\t" +
                "expected_component_type\texpected_comment\tdefinition_path\t" +
                "proposed_field_name\tsignature_function_address\tsignature_function\t" +
                "target_addresses\tobserved_target_addresses\tobserved_store_sites\t" +
                "store_sites\tindirect_call_sites\trejected_store_sites\t" +
                "confidence\tevidence\n");
            for (Row row : rows)
                out.write(bit(row.apply) + "\t" + row.structurePath + "\t" + row.offset +
                    "\t" + clean(row.expectedName) + "\t" + row.expectedType + "\t" +
                    clean(row.expectedComment) + "\t" + row.definitionPath + "\t" +
                    clean(row.proposedName) + "\t" + row.signatureAddress + "\t" +
                    clean(row.signatureName) + "\t" + row.targetAddresses + "\t" +
                    row.observedTargetAddresses + "\t" + clean(row.observedStoreSites) +
                    "\t" + clean(row.storeSites) + "\t" + clean(row.callSites) + "\t" +
                    clean(row.rejectedStoreSites) + "\t" +
                    row.confidence + "\t" + clean(row.reason) + "\n");
        }
    }
    private void writeFailures(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction_name\terror\n");
            for (Failure failure : failures)
                out.write(failure.address + "\t" + clean(failure.name) + "\t" +
                    clean(failure.error) + "\n");
        }
    }
    private void writeSummary(Path path, List<Row> rows) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "machine_prefilter_candidates=" + candidates,
            "machine_store_candidate_functions=" + machineStoreCandidates,
            "machine_indirect_call_candidate_functions=" + machineCallCandidates,
            "machine_function_address_reference_functions=" +
                machineAddressReferenceFunctions,
            "machine_indirect_write_functions=" + machineIndirectWriteFunctions,
            "skipped_call_only_decompiles=" + skippedCallOnlyDecompiles,
            "pcode_store_operations=" + pcodeStoreOperations,
            "exact_structure_field_stores=" + exactFieldStores,
            "trusted_structure_field_stores=" + trustedFieldStores,
            "field_candidates=" + rows.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "decompile_failures=" + failures.size(),
            "note=Application requires both an exact stored target and an indirect call through the same structure field.",
            "note=Multiple stored targets must have one identical recovered ABI; manual structures and concrete fields are preserved."
        ), StandardCharsets.UTF_8);
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null && path.getFileName().toString()
            .equals(currentProgram.getName()) ? path : path.resolve(currentProgram.getName());
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private boolean meaningfulFieldName(DataTypeComponent component) {
        return !genericFieldName(name(component));
    }
    private boolean genericFieldName(String value) {
        return value == null || value.isBlank() ||
            value.matches("(?i)(?:field|callback)_(?:0x)?[0-9a-f]+");
    }
    private static String name(DataTypeComponent component) { return component.getFieldName() == null ? "" : component.getFieldName(); }
    private static String sanitize(String value) { return text(value).replaceAll("[^A-Za-z0-9_]", "_"); }
    private static String addr(Address address) { return address == null ? "" : address.toString().toUpperCase(Locale.ROOT); }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String clean(String value) { return text(value).replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"); }
    private static String text(String value) { return value == null ? "" : value; }
    private static String message(Throwable throwable) { return throwable.getMessage() == null ? throwable.getClass().getSimpleName() : throwable.getMessage(); }

    private record FieldRef(Structure structure, int offset) {
        boolean same(FieldRef other) { return other != null && offset == other.offset && structure.getPathName().equals(other.structure.getPathName()); }
    }
    private record FieldKey(String structurePath, int offset) implements Comparable<FieldKey> {
        @Override public int compareTo(FieldKey other) {
            int value = structurePath.compareTo(other.structurePath);
            return value != 0 ? value : Integer.compare(offset, other.offset);
        }
    }
    private static class Evidence {
        final Structure structure;
        final int offset;
        final Map<String, Function> targets = new TreeMap<>();
        final Set<String> observedTargets = new TreeSet<>();
        final Set<String> storeSites = new TreeSet<>(), observedStoreSites = new TreeSet<>(),
            rejectedStoreSites = new TreeSet<>(), rejectionReasons = new TreeSet<>(),
            callSites = new TreeSet<>();
        final Set<Integer> callArgumentCounts = new TreeSet<>();
        Evidence(Structure structure, int offset) { this.structure = structure; this.offset = offset; }
    }
    private record Failure(String address, String name, String error) { }
    private record Row(boolean apply, String structurePath, int offset,
        String expectedName, String expectedType, String expectedComment,
        String definitionPath, String proposedName, String signatureAddress,
        String signatureName, String targetAddresses, String observedTargetAddresses,
        String observedStoreSites, String storeSites, String callSites,
        String rejectedStoreSites, String confidence, String reason) { }
    private record MachineCandidate(boolean storedFunction, boolean indirectCall,
        boolean functionAddressReference, boolean indirectWrite) {
        boolean any() { return storedFunction || indirectCall; }
    }
}
