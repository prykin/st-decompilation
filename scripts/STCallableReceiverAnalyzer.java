// Recover function-local structural receiver views for dense ownerless CALLIND families.
// Read-only: writes callable_receiver_*.tsv and a summary.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Callable Receivers

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
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
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.lang.Register;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;

public class STCallableReceiverAnalyzer extends GhidraScript {
    private static final String ROOT =
        "/SubmarineTitans/Recovered/PointerShapes/CallableReceivers/";
    private static final int MIN_DENSE_SITES = 8;
    private static final int MIN_SINGLE_SLOT_SITES = 16;
    private static final int MAX_TRACE_STATES = 8192;
    private static final int MAX_ARGUMENT_SETUP_INSTRUCTIONS = 24;
    private static final int MAX_RECEIVER_LENGTH = 0x10000;
    private static final Pattern MEMORY = Pattern.compile(
        ".*\\[([A-Z][A-Z0-9]{1,3})(?:\\s*([+-])\\s*(0X[0-9A-F]+|[0-9]+|[0-9A-F]+H))?[^\\]]*\\].*");

    private final Map<Address, Map<Address, List<Address>>> predecessorCache =
        new HashMap<>();
    private int auditedSites, exactParameterSites, candidateGroups, enabledGroups;
    private int originConflicts, abiConflicts, insufficientExtent, protectedTargets;
    private int reusedParameterStorage, unresolvedIncomingArguments;

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
        Path auditPath = directory.resolve("callable_family_audit.tsv");
        if (!Files.isRegularFile(auditPath))
            throw new IllegalArgumentException(
                "Run STIndirectCallsiteAnalyzer before callable-receiver analysis");

        Map<TargetKey, Family> families = new TreeMap<>();
        for (Map<String, String> row : readTsv(auditPath)) {
            auditedSites++;
            if (!"1".equals(row.get("exact_unadjusted_receiver")))
                continue;
            Function function = function(row.get("function_address"));
            Address call = address(row.get("call_address"));
            if (function == null || call == null || !function.getBody().contains(call))
                continue;
            Parameter parameter = receiverParameterOrigin(function, call,
                row.get("receiver_register"));
            if (parameter == null || parameter.isAutoParameter()) {
                originConflicts++;
                continue;
            }
            // The first successful pass changes these audit rows from
            // unresolved_object_dispatch to physical_vtable.  Retain the family when
            // the exact parameter already has this analyzer's deterministic receiver
            // identity; otherwise a confirming pass would emit apply=0 and make the
            // generated proposal set disagree with the live Program.
            boolean unresolved = "unresolved_object_dispatch".equals(
                row.get("classification"));
            boolean retained = callableReceiverPath(parameter.getDataType()).equals(
                ROOT + "CallableReceiver_" + addr(function.getEntryPoint()) + "_P" +
                    parameter.getOrdinal());
            if (!unresolved && !retained) continue;
            exactParameterSites++;
            TargetKey key = new TargetKey(addr(function.getEntryPoint()),
                parameter.getOrdinal());
            Family family = families.computeIfAbsent(key,
                ignored -> new Family(function, parameter));
            family.sites.add(new Site(addr(call), integer(row.get("slot_offset"), -1),
                integer(row.get("stack_parameter_count"), -1),
                text(row.get("machine_return"))));
        }

        List<TypeRow> types = new ArrayList<>();
        List<SlotRow> slots = new ArrayList<>();
        List<TargetRow> targets = new ArrayList<>();
        for (Family family : families.values()) {
            monitor.checkCancelled();
            candidateGroups++;
            Decision decision = decide(family);
            String shape = "CallableReceiver_" +
                addr(family.function.getEntryPoint()) + "_P" +
                family.parameter.getOrdinal();
            String receiverPath = ROOT + shape;
            String vtablePath = ROOT + shape + "VTable";
            int length = receiverExtent(family.function, family.parameter);
            if (length < currentProgram.getDefaultPointerSize() * 2) {
                decision = decision.disable(
                    "no exact non-vptr receiver extent was recovered");
                insufficientExtent++;
            }
            if (protectedSource(family.parameter.getSource())) {
                decision = decision.disable("manual/imported parameter preserved");
                protectedTargets++;
            }
            if (writesParameterStorage(family.function, family.parameter)) {
                decision = decision.disable(
                    "parameter storage is overwritten and has multiple compiler lifetimes");
                reusedParameterStorage++;
            }
            if (family.sites.stream().anyMatch(site ->
                    hasUnresolvedIncomingStackArgument(family.function, site))) {
                decision = decision.disable(
                    "a slot argument carries an unresolved incoming register ABI");
                unresolvedIncomingArguments++;
            }
            if (!genericReceiver(family.parameter.getDataType()) &&
                    !typeSpec(family.parameter.getDataType()).equals(
                        "pointer:" + receiverPath))
                decision = decision.disable("concrete parameter type preserved");

            List<SlotDecision> slotDecisions = slotDecisions(family);
            if (slotDecisions.isEmpty() || slotDecisions.stream().anyMatch(value ->
                    !value.valid)) {
                decision = decision.disable("slot ABI family is not unanimous");
                abiConflicts++;
            }
            int maxSlot = slotDecisions.stream().filter(value -> value.valid)
                .mapToInt(value -> value.slot).max().orElse(0);
            if (decision.apply) enabledGroups++;
            String reason = decision.reason + "; sites=" + family.sites.size() +
                "; slots=" + slotDecisions.size() + "; exact_extent=" + length;
            types.add(new TypeRow(decision.apply, shape, receiverPath, vtablePath,
                Math.max(length, currentProgram.getDefaultPointerSize()),
                maxSlot + currentProgram.getDefaultPointerSize(),
                family.sites.size(), slotDecisions.size(),
                decision.apply ? "high" : "review", reason));
            for (SlotDecision slot : slotDecisions)
                slots.add(new SlotRow(decision.apply && slot.valid, shape, slot.slot,
                    slot.arity, slot.returnType, slot.sites.size(),
                    String.join(" | ", slot.sites), slot.reason));
            targets.add(new TargetRow(decision.apply, family.function,
                family.parameter, "pointer:" + receiverPath, shape,
                decision.apply ? "high" : "review", reason));
        }

        types.sort(Comparator.comparing(row -> row.shapeId));
        slots.sort(Comparator.comparing((SlotRow row) -> row.shapeId)
            .thenComparingInt(row -> row.slot));
        targets.sort(Comparator.comparing((TargetRow row) -> row.functionAddress)
            .thenComparingInt(row -> row.parameterOrdinal));
        writeTypes(directory.resolve("callable_receiver_type_proposals.tsv"), types);
        writeSlots(directory.resolve("callable_receiver_slot_proposals.tsv"), slots);
        writeTargets(directory.resolve("callable_receiver_proposals.tsv"), targets);
        writeSummary(directory.resolve("callable_receiver_summary.txt"), types, slots,
            targets);
        println("Callable-receiver analysis complete: " + directory.toAbsolutePath());
        println("Candidate groups=" + candidateGroups + ", apply=" + enabledGroups +
            ", exact parameter sites=" + exactParameterSites +
            ", ABI conflicts=" + abiConflicts);
    }

    private Decision decide(Family family) {
        Set<Integer> distinctSlots = new TreeSet<>();
        for (Site site : family.sites)
            if (site.slot >= 0) distinctSlots.add(site.slot);
        boolean dense = family.sites.size() >= MIN_DENSE_SITES &&
            (distinctSlots.size() >= 2 || family.sites.size() >= MIN_SINGLE_SLOT_SITES);
        if (!dense) return new Decision(false,
            "receiver family is not dense enough for a persistent structural view");
        return new Decision(true,
            "exact unadjusted parameter receiver at every retained CALLIND; dense " +
                "function-local table family");
    }

    private List<SlotDecision> slotDecisions(Family family) {
        Map<Integer, List<Site>> grouped = new TreeMap<>();
        for (Site site : family.sites)
            grouped.computeIfAbsent(site.slot, ignored -> new ArrayList<>()).add(site);
        List<SlotDecision> result = new ArrayList<>();
        for (Map.Entry<Integer, List<Site>> entry : grouped.entrySet()) {
            Set<Integer> arities = new TreeSet<>();
            Set<String> returns = new TreeSet<>();
            List<String> sites = new ArrayList<>();
            for (Site site : entry.getValue()) {
                arities.add(site.arity);
                if (!site.returnType.isBlank() && !"/void".equals(site.returnType))
                    returns.add(site.returnType);
                sites.add(site.callAddress);
            }
            boolean valid = entry.getKey() >= 0 && arities.size() == 1 &&
                arities.iterator().next() >= 0 && returns.size() <= 1;
            int arity = arities.size() == 1 ? arities.iterator().next() : -1;
            String returned = returns.isEmpty() ? "/void" : returns.iterator().next();
            String reason = valid ?
                "unanimous machine stack arity and return-consumption width" :
                "conflicting machine ABI: arities=" + arities + "; returns=" + returns;
            result.add(new SlotDecision(valid, entry.getKey(), arity, returned,
                sites, reason));
        }
        return result;
    }

    /**
     * Persistent Listing parameter typing affects every SSA lifetime which Ghidra merges back
     * into that incoming stack word.  Reject a receiver parameter when the function writes any
     * part of its storage: the common optimized pattern saves the real pointer in a register and
     * then recycles the dead argument slot as a byte discriminator or loop counter.  Applying a
     * structure pointer there makes later scalar updates render as pointer arithmetic.
     */
    private boolean writesParameterStorage(Function function, Parameter parameter) {
        if (!parameter.isStackVariable()) return false;
        long wanted = parameter.getStackOffset();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!writesMemoryOperandZero(instruction)) continue;
            for (Reference reference : instruction.getReferencesFrom()) {
                if (reference.getOperandIndex() == 0 &&
                        reference instanceof StackReference stack &&
                        stack.getStackOffset() == wanted) return true;
            }
        }
        return false;
    }

    private boolean writesMemoryOperandZero(Instruction instruction) {
        if (instruction.getNumOperands() == 0) return false;
        String destination = text(instruction.getDefaultOperandRepresentation(0));
        if (!destination.contains("[")) return false;
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        return !Set.of("CMP", "TEST", "BT", "CALL", "JMP", "PUSH", "LEA")
            .contains(mnemonic);
    }

    /**
     * Installing a slot prototype can expose arguments which an untyped CALLIND previously hid.
     * Refuse the whole receiver view when a newly exposed argument is a callee-saved register
     * whose value reaches function entry without an explicit register parameter or definition.
     * Otherwise Ghidra correctly—but unreadably—introduces unaff_EBX/ESI/EDI declarations.
     */
    private boolean hasUnresolvedIncomingStackArgument(Function function, Site site) {
        if (site.arity <= 0) return false;
        Address call = address(site.callAddress);
        Instruction instruction = call == null ? null :
            currentProgram.getListing().getInstructionBefore(call);
        int pushes = 0;
        for (int scanned = 0; instruction != null && scanned < MAX_ARGUMENT_SETUP_INSTRUCTIONS;
                scanned++, instruction = currentProgram.getListing()
                    .getInstructionBefore(instruction.getAddress())) {
            if (!function.getBody().contains(instruction.getAddress()) ||
                    instruction.getFlowType().isCall() ||
                    instruction.getFlowType().isJump()) break;
            if (!"PUSH".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            pushes++;
            String operand = instruction.getNumOperands() == 0 ? "" :
                text(instruction.getDefaultOperandRepresentation(0));
            String register = canonicalRegister(operand);
            if (Set.of("EBX", "ESI", "EDI").contains(register) &&
                    incomingRegisterParameter(function, register) == null &&
                    reachesEntryWithoutDefinition(function, instruction.getAddress(), register))
                return true;
            if (pushes >= site.arity) break;
        }
        return false;
    }

    private boolean reachesEntryWithoutDefinition(Function function, Address use,
            String register) {
        Map<Address, List<Address>> predecessors = predecessors(function);
        List<Address> work = new ArrayList<>(predecessors.getOrDefault(use, List.of()));
        Set<Address> visited = new HashSet<>();
        for (int cursor = 0; cursor < work.size() && work.size() <= MAX_TRACE_STATES;
                cursor++) {
            Address address = work.get(cursor);
            if (!visited.add(address)) continue;
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !function.getBody().contains(address)) return true;
            if (definesRegister(instruction, register)) continue;
            List<Address> before = predecessors.getOrDefault(address, List.of());
            if (before.isEmpty()) return true;
            work.addAll(before);
        }
        return work.size() > MAX_TRACE_STATES;
    }

    /**
     * Derive the receiver extent independently of decompiler field spelling.  Every memory
     * operand is admitted only when all instruction-CFG predecessors trace its base register
     * to the same unadjusted parameter.  This gives the structural view enough real object
     * extent without copying one consumer's semantic field names into the interface.
     */
    private int receiverExtent(Function function, Parameter parameter) {
        int extent = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                String rendered = text(instruction.getDefaultOperandRepresentation(operand))
                    .toUpperCase(Locale.ROOT);
                Memory memory = memory(rendered);
                if (memory == null || memory.displacement < 0 ||
                        memory.displacement >= MAX_RECEIVER_LENGTH) continue;
                Parameter origin = receiverParameterOrigin(function,
                    instruction.getAddress(), memory.register);
                if (origin == null || origin.getOrdinal() != parameter.getOrdinal()) continue;
                extent = Math.max(extent, memory.displacement + operandWidth(rendered));
            }
        }
        return extent;
    }

    private Parameter receiverParameterOrigin(Function function, Address use,
            String receiverRegister) {
        String wanted = canonicalRegister(receiverRegister);
        if (wanted.isBlank()) return null;
        Map<Address, List<Address>> predecessors = predecessors(function);
        List<Address> initial = predecessors.getOrDefault(use, List.of());
        if (initial.isEmpty()) return incomingRegisterParameter(function, wanted);

        List<RegisterTrace> work = new ArrayList<>();
        for (Address address : initial) work.add(new RegisterTrace(address, wanted));
        Set<RegisterTrace> visited = new HashSet<>();
        Set<Parameter> origins = new HashSet<>();
        boolean invalid = false;
        for (int cursor = 0; cursor < work.size() && work.size() <= MAX_TRACE_STATES;
                cursor++) {
            RegisterTrace state = work.get(cursor);
            if (!visited.add(state)) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null || !function.getBody().contains(state.address)) {
                invalid = true;
                continue;
            }
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitInstructionOperands(instruction.toString());
            if (instruction.getFlowType().isCall() &&
                    Set.of("EAX", "ECX", "EDX").contains(state.register)) {
                invalid = true;
                continue;
            }
            if ("MOV".equals(mnemonic) && operands.length > 0 &&
                    state.register.equals(canonicalRegister(operands[0]))) {
                if (operands.length < 2) { invalid = true; continue; }
                String source = canonicalRegister(operands[1]);
                if (!source.isBlank()) {
                    enqueuePredecessors(predecessors, state.address, source, function,
                        origins, work);
                    continue;
                }
                Long stack = stackParameterOffset(instruction, operands[1]);
                Parameter parameter = stack == null ? null : parameterAt(function, stack);
                if (parameter == null) invalid = true;
                else origins.add(parameter);
                continue;
            }
            if (definesRegister(instruction, state.register)) {
                invalid = true;
                continue;
            }
            List<Address> before = predecessors.getOrDefault(state.address, List.of());
            if (before.isEmpty()) {
                Parameter incoming = incomingRegisterParameter(function, state.register);
                if (incoming == null) invalid = true;
                else origins.add(incoming);
            }
            else for (Address address : before)
                work.add(new RegisterTrace(address, state.register));
        }
        if (work.size() > MAX_TRACE_STATES || invalid || origins.size() != 1) return null;
        return origins.iterator().next();
    }

    private void enqueuePredecessors(Map<Address, List<Address>> predecessors,
            Address address, String register, Function function, Set<Parameter> origins,
            List<RegisterTrace> work) {
        List<Address> before = predecessors.getOrDefault(address, List.of());
        if (before.isEmpty()) {
            Parameter incoming = incomingRegisterParameter(function, register);
            if (incoming != null) origins.add(incoming);
            return;
        }
        for (Address predecessor : before)
            work.add(new RegisterTrace(predecessor, register));
    }

    private Map<Address, List<Address>> predecessors(Function function) {
        return predecessorCache.computeIfAbsent(function.getEntryPoint(), ignored -> {
            Map<Address, List<Address>> result = new HashMap<>();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                Address source = instruction.getAddress();
                Address fallthrough = instruction.getFallThrough();
                if (fallthrough != null && function.getBody().contains(fallthrough) &&
                        currentProgram.getListing().getInstructionAt(fallthrough) != null)
                    result.computeIfAbsent(fallthrough,
                        key -> new ArrayList<>()).add(source);
                if (instruction.getFlowType().isJump())
                    for (Address flow : instruction.getFlows())
                        if (function.getBody().contains(flow) &&
                                currentProgram.getListing().getInstructionAt(flow) != null)
                            result.computeIfAbsent(flow,
                                key -> new ArrayList<>()).add(source);
            }
            return result;
        });
    }

    private Parameter incomingRegisterParameter(Function function, String register) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isRegisterVariable()) continue;
            Register value = parameter.getRegister();
            if (value != null && register.equals(canonicalRegister(value.getName())))
                return parameter;
        }
        return null;
    }

    private boolean definesRegister(Instruction instruction, String register) {
        for (Object output : instruction.getResultObjects())
            if (output instanceof Register value && register.equals(
                    canonicalRegister(value.getName()))) return true;
        return false;
    }

    private Long stackParameterOffset(Instruction instruction, String operand) {
        for (Reference reference : instruction.getReferencesFrom())
            if (reference instanceof StackReference stack && stack.getStackOffset() >= 0)
                return (long)stack.getStackOffset();
        Matcher matcher = Pattern.compile(".*\\[EBP\\+(0X[0-9A-F]+|[0-9]+)\\].*")
            .matcher(operand.toUpperCase(Locale.ROOT).replace(" ", ""));
        if (!matcher.matches()) return null;
        return (long)integer(matcher.group(1), -1) -
            currentProgram.getDefaultPointerSize();
    }

    private Parameter parameterAt(Function function, long stackOffset) {
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter() && parameter.isStackVariable() &&
                    parameter.getStackOffset() == stackOffset) return parameter;
        return null;
    }

    private Memory memory(String operand) {
        Matcher matcher = MEMORY.matcher(operand);
        if (!matcher.matches()) return null;
        String register = canonicalRegister(matcher.group(1));
        if (register.isBlank()) return null;
        int displacement = matcher.group(3) == null ? 0 :
            integer(matcher.group(3), Integer.MIN_VALUE);
        if (displacement == Integer.MIN_VALUE) return null;
        if ("-".equals(matcher.group(2))) displacement = -displacement;
        return new Memory(register, displacement);
    }

    private int operandWidth(String operand) {
        String value = operand.toUpperCase(Locale.ROOT);
        if (value.contains("BYTE PTR")) return 1;
        if (value.contains("WORD PTR")) return 2;
        if (value.contains("QWORD PTR") || value.contains("DOUBLE PTR")) return 8;
        if (value.contains("TBYTE PTR")) return 10;
        return 4;
    }

    private String[] splitInstructionOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }

    private String canonicalRegister(String value) {
        String register = text(value).trim().toUpperCase(Locale.ROOT);
        return switch (register) {
            case "AL", "AH", "AX", "EAX" -> "EAX";
            case "BL", "BH", "BX", "EBX" -> "EBX";
            case "CL", "CH", "CX", "ECX" -> "ECX";
            case "DL", "DH", "DX", "EDX" -> "EDX";
            case "SI", "ESI" -> "ESI";
            case "DI", "EDI" -> "EDI";
            case "BP", "EBP" -> "EBP";
            case "SP", "ESP" -> "ESP";
            default -> register.matches("E[A-Z]{2}") ? register : "";
        };
    }

    private boolean genericReceiver(DataType type) {
        DataType value = unwrap(type);
        if (!(value instanceof Pointer pointer))
            return Undefined.isUndefined(value) || genericScalar(value);
        DataType pointee = unwrap(pointer.getDataType());
        if (pointee == null || Undefined.isUndefined(pointee)) return true;
        if (pointee instanceof Structure structure)
            return structure.getPathName().startsWith(ROOT);
        return genericScalar(pointee);
    }

    private String callableReceiverPath(DataType type) {
        DataType value = unwrap(type);
        if (!(value instanceof Pointer pointer)) return "";
        DataType pointee = unwrap(pointer.getDataType());
        if (!(pointee instanceof Structure structure) ||
                !structure.getPathName().startsWith(ROOT)) return "";
        return structure.getPathName();
    }

    private boolean genericScalar(DataType type) {
        String name = type == null ? "" : type.getName().toLowerCase(Locale.ROOT);
        return name.equals("void") ||
            name.matches("u?int(?:1|2|4|8)?|undefined[1248]?|dword|word|byte|char|short|long");
    }

    private DataType unwrap(DataType type) {
        Set<DataType> seen = new HashSet<>();
        while (type instanceof TypeDef alias && seen.add(type))
            type = alias.getBaseDataType();
        return type;
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private Function function(String value) {
        Address address = address(value);
        return address == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(address);
    }

    private Address address(String value) {
        try { return currentProgram.getAddressFactory().getAddress(text(value)); }
        catch (Exception ignored) { return null; }
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        return path.getFileName() != null && path.getFileName().toString()
            .equals(currentProgram.getName()) ? path : path.resolve(currentProgram.getName());
    }

    private File outputDirectory() throws Exception {
        File selected = askDirectory("Select recovery output directory", "Select");
        return selected;
    }

    private List<Map<String, String>> readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        List<Map<String, String>> result = new ArrayList<>();
        if (lines.isEmpty()) return result;
        String[] header = lines.get(0).split("\\t", -1);
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

    private void writeTypes(Path path, List<TypeRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tshape_id\treceiver_type_path\tvtable_type_path\t" +
                "receiver_length\tvtable_length\tsite_count\tslot_count\tconfidence\treason\n");
            for (TypeRow row : rows)
                out.write(bit(row.apply) + "\t" + row.shapeId + "\t" +
                    row.receiverPath + "\t" + row.vtablePath + "\t" +
                    row.receiverLength + "\t" + row.vtableLength + "\t" +
                    row.siteCount + "\t" + row.slotCount + "\t" + row.confidence +
                    "\t" + clean(row.reason) + "\n");
        }
    }

    private void writeSlots(Path path, List<SlotRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tshape_id\tslot_offset\tstack_parameter_count\t" +
                "return_type\tsite_count\tcall_addresses\treason\n");
            for (SlotRow row : rows)
                out.write(bit(row.apply) + "\t" + row.shapeId + "\t" + row.slot +
                    "\t" + row.arity + "\t" + row.returnType + "\t" + row.siteCount +
                    "\t" + clean(row.callAddresses) + "\t" + clean(row.reason) + "\n");
        }
    }

    private void writeTargets(Path path, List<TargetRow> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\tfunction_name\tparameter_ordinal\t" +
                "expected_name\texpected_storage\texpected_type\texpected_source\t" +
                "proposed_type\tshape_id\tconfidence\treason\n");
            for (TargetRow row : rows)
                out.write(bit(row.apply) + "\t" + row.functionAddress + "\t" +
                    clean(row.functionName) + "\t" + row.parameterOrdinal + "\t" +
                    clean(row.expectedName) + "\t" + clean(row.expectedStorage) + "\t" +
                    row.expectedType + "\t" + row.expectedSource + "\t" +
                    row.proposedType + "\t" + row.shapeId + "\t" + row.confidence +
                    "\t" + clean(row.reason) + "\n");
        }
    }

    private void writeSummary(Path path, List<TypeRow> types, List<SlotRow> slots,
            List<TargetRow> targets) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "audited_call_sites=" + auditedSites,
            "exact_parameter_receiver_sites=" + exactParameterSites,
            "candidate_groups=" + candidateGroups,
            "auto_apply_groups=" + enabledGroups,
            "auto_apply_sites=" + targets.stream().filter(row -> row.apply)
                .mapToInt(row -> types.stream().filter(type ->
                    type.shapeId.equals(row.shapeId)).mapToInt(type -> type.siteCount)
                    .findFirst().orElse(0)).sum(),
            "auto_apply_slots=" + slots.stream().filter(row -> row.apply).count(),
            "origin_conflicts=" + originConflicts,
            "abi_conflicts=" + abiConflicts,
            "insufficient_extent=" + insufficientExtent,
            "protected_targets=" + protectedTargets,
            "reused_parameter_storage=" + reusedParameterStorage,
            "unresolved_incoming_arguments=" + unresolvedIncomingArguments,
            "policy=A persistent callable-receiver view requires a dense family of exact " +
                "unadjusted CALLIND sites whose receiver register reaches one explicit " +
                "function parameter on every instruction-CFG predecessor. Every slot must " +
                "have unanimous machine stack arity and non-void return width, and the same " +
                "parameter must have an independently observed non-vptr extent. Its storage " +
                "must not be overwritten for another compiler lifetime, and applying its " +
                "slot ABIs must not expose an unresolved incoming callee-saved argument. " +
                "The result " +
                "is a function-local structural interface under Recovered/PointerShapes; " +
                "it does not claim a semantic class, physical vtable address, inheritance, " +
                "or original method names."), StandardCharsets.UTF_8);
    }

    private int integer(String value, int fallback) {
        String number = text(value).trim().toUpperCase(Locale.ROOT);
        try {
            if (number.endsWith("H"))
                return Integer.parseUnsignedInt(number.substring(0, number.length() - 1), 16);
            return number.startsWith("0X") ?
                Integer.parseUnsignedInt(number.substring(2), 16) :
                Integer.parseInt(number);
        }
        catch (Exception ignored) { return fallback; }
    }

    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private String text(Object value) { return value == null ? "" : value.toString(); }
    private String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private String bit(boolean value) { return value ? "1" : "0"; }

    private record TargetKey(String functionAddress, int ordinal)
            implements Comparable<TargetKey> {
        @Override public int compareTo(TargetKey other) {
            int value = functionAddress.compareTo(other.functionAddress);
            return value != 0 ? value : Integer.compare(ordinal, other.ordinal);
        }
    }
    private static final class Family {
        final Function function;
        final Parameter parameter;
        final List<Site> sites = new ArrayList<>();
        Family(Function function, Parameter parameter) {
            this.function = function;
            this.parameter = parameter;
        }
    }
    private record Site(String callAddress, int slot, int arity, String returnType) {}
    private record RegisterTrace(Address address, String register) {}
    private record Memory(String register, int displacement) {}
    private record Decision(boolean apply, String reason) {
        Decision disable(String detail) {
            return new Decision(false, reason + "; " + detail);
        }
    }
    private record SlotDecision(boolean valid, int slot, int arity, String returnType,
            List<String> sites, String reason) {}
    private record TypeRow(boolean apply, String shapeId, String receiverPath,
            String vtablePath, int receiverLength, int vtableLength, int siteCount,
            int slotCount, String confidence, String reason) {}
    private record SlotRow(boolean apply, String shapeId, int slot, int arity,
            String returnType, int siteCount, String callAddresses, String reason) {}
    private record TargetRow(boolean apply, String functionAddress, String functionName,
            int parameterOrdinal, String expectedName, String expectedStorage,
            String expectedType, String expectedSource, String proposedType,
            String shapeId, String confidence, String reason) {
        TargetRow(boolean apply, Function function, Parameter parameter,
                String proposedType, String shapeId, String confidence, String reason) {
            this(apply, function.getEntryPoint().toString().toUpperCase(Locale.ROOT),
                function.getName(true), parameter.getOrdinal(), parameter.getName(),
                parameter.getVariableStorage().toString(),
                typeSpecification(parameter.getDataType()),
                parameter.getSource().toString(), proposedType, shapeId, confidence, reason);
        }
        private static String typeSpecification(DataType type) {
            if (type instanceof Pointer pointer && pointer.getDataType() != null)
                return "pointer:" + typeSpecification(pointer.getDataType());
            return type == null ? "" : type.getPathName();
        }
    }
}
