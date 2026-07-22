// Recover STMessageId candidates from MESS_* diagnostics and comparisons of message->id (+0x10).
// Read-only: writes proposals consumed by STMessageIdApplier.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Message IDs

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.ArrayDeque;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Deque;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Enum;
import ghidra.program.model.lang.Register;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.util.DefinedStringIterator;

public class STMessageIdAnalyzer extends GhidraScript {
    private static final Pattern MESSAGE_NAME = Pattern.compile("\\b(MESS_[A-Za-z0-9_]+)\\b");
    private static final Pattern ID_FIELD = Pattern.compile("(?i)\\[[^]]+\\+\\s*(?:0x)?10\\]");
    private static final String ENUM_PATH = "/SubmarineTitans/Recovered/STMessageId";

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the ST program first."); return; }
        File root = outputDirectory();
        if (root == null) return;

        Map<Address, Evidence> functions = new LinkedHashMap<>();
        for (Data data : DefinedStringIterator.forProgram(currentProgram)) {
            monitor.checkCancelled();
            String text = stringValue(data);
            Matcher matcher = MESSAGE_NAME.matcher(text);
            Set<String> names = new TreeSet<>();
            while (matcher.find()) names.add(matcher.group(1));
            if (names.isEmpty()) continue;
            ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(data.getMinAddress());
            while (refs.hasNext()) {
                Reference reference = refs.next();
                Function function = currentProgram.getListing().getFunctionContaining(reference.getFromAddress());
                if (function == null) continue;
                Evidence evidence = functions.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new Evidence(function));
                evidence.names.addAll(names);
                evidence.strings.add(text);
                for (String name : names) {
                    evidence.nameRefs.computeIfAbsent(name, ignored -> new TreeSet<>())
                        .add(reference.getFromAddress());
                }
            }
        }

        Map<String, Long> existing = existingValues();
        Map<Address, MessageIdScan> functionScans = new LinkedHashMap<>();
        Map<Long, Set<String>> handlersByValue = new java.util.TreeMap<>();
        FunctionIterator allFunctions = currentProgram.getFunctionManager().getFunctions(true);
        while (allFunctions.hasNext()) {
            monitor.checkCancelled();
            Function function = allFunctions.next();
            if (function.isExternal()) continue;
            String functionName = function.getName(true);
            if (!functionName.contains("GetMessage") && !functions.containsKey(function.getEntryPoint()))
                continue;
            MessageIdScan scan = findComparedMessageIds(function);
            if (scan.values.isEmpty()) continue;
            functionScans.put(function.getEntryPoint(), scan);
            for (Long value : scan.values) handlersByValue.computeIfAbsent(value,
                ignored -> new TreeSet<>()).add(addr(function.getEntryPoint()) + " " + function.getName(true));
        }
        List<Proposal> proposals = new ArrayList<>();
        for (Evidence evidence : functions.values()) {
            monitor.checkCancelled();
            MessageIdScan scan = functionScans.get(evidence.function.getEntryPoint());
            if (scan != null) evidence.values.addAll(scan.values);
            for (String name : evidence.names) {
                Long known = existing.get(name);
                if (known != null) {
                    proposals.add(new Proposal(evidence, name, known, true, "existing_enum_value"));
                }
                else if (scan != null) {
                    Set<Long> siteValues = siteSpecificValues(evidence, name, scan);
                    if (siteValues.size() == 1) {
                        proposals.add(new Proposal(evidence, name, siteValues.iterator().next(),
                            true, "cfg_unique_string_site"));
                    }
                    else if (evidence.names.size() == 1 && evidence.values.size() == 1) {
                        proposals.add(new Proposal(evidence, name, evidence.values.iterator().next(),
                            true, "single_name_single_id_comparison"));
                    }
                    else {
                        for (Long value : evidence.values) {
                            proposals.add(new Proposal(evidence, name, value, false,
                                "ambiguous_function_candidates"));
                        }
                    }
                }
                else if (evidence.names.size() == 1 && evidence.values.size() == 1) {
                    proposals.add(new Proposal(evidence, name, evidence.values.iterator().next(),
                        true, "single_name_single_id_comparison"));
                }
                else {
                    for (Long value : evidence.values) {
                        proposals.add(new Proposal(evidence, name, value, false,
                            "ambiguous_function_candidates"));
                    }
                }
            }
        }
        Set<String> proposalKeys = new TreeSet<>();
        for (Proposal proposal : proposals) proposalKeys.add(proposal.name + "\u0000" + proposal.value);
        Set<Long> valuesWithRecoveredNames = new TreeSet<>();
        for (Proposal proposal : proposals) {
            if (proposal.apply && !isSyntheticName(proposal.name, proposal.value))
                valuesWithRecoveredNames.add(proposal.value);
        }
        Map<Long, Set<String>> existingNamesByValue = new HashMap<>();
        for (Map.Entry<String, Long> entry : existing.entrySet()) {
            existingNamesByValue.computeIfAbsent(entry.getValue(), ignored -> new TreeSet<>())
                .add(entry.getKey());
        }
        int syntheticCount = 0;
        for (Map.Entry<Long, Set<String>> entry : handlersByValue.entrySet()) {
            if (valuesWithRecoveredNames.contains(entry.getKey())) continue;
            Function representative = representativeFunction(entry.getValue());
            if (representative == null) continue;
            Evidence evidence = new Evidence(representative);
            evidence.values.add(entry.getKey());
            evidence.strings.add("handlers: " + String.join(" | ", entry.getValue()));
            Set<String> existingNames = existingNamesByValue.get(entry.getKey());
            if (existingNames != null && !existingNames.isEmpty()) {
                for (String name : existingNames) {
                    if (proposalKeys.add(name + "\u0000" + entry.getKey())) {
                        proposals.add(new Proposal(evidence, name, entry.getKey(), true,
                            "existing_enum_catalog_value"));
                    }
                }
            }
            else {
                String name = syntheticName(entry.getKey(), entry.getValue());
                if (proposalKeys.add(name + "\u0000" + entry.getKey())) {
                    evidence.strings.add("synthetic handler-based name");
                    proposals.add(new Proposal(evidence, name, entry.getKey(), true,
                        "synthetic_handler_based_name"));
                    syntheticCount++;
                }
            }
        }
        proposals.sort(Comparator.comparing((Proposal p) -> p.name)
            .thenComparingLong(p -> p.value).thenComparing(p -> p.evidence.function.getEntryPoint()));

        Path dir = root.toPath().toAbsolutePath().normalize().resolve(safe(currentProgram.getName()));
        Files.createDirectories(dir);
        writeTsv(dir.resolve("message_id_proposals.tsv"), proposals);
        writeJsonl(dir.resolve("message_id_proposals.jsonl"), proposals);
        writeCatalog(dir.resolve("message_id_catalog.tsv"), handlersByValue, existing);
        int staleEnumValues = writeStaleEnumValues(
            dir.resolve("message_id_stale_enum_values.tsv"), handlersByValue.keySet(), existing);
        long high = proposals.stream().filter(p -> p.apply).count();
        long cfgNamed = proposals.stream().filter(p -> p.apply &&
            "cfg_unique_string_site".equals(p.reason)).count();
        Files.write(dir.resolve("message_id_summary.txt"), List.of(
            "program=" + currentProgram.getName(), "functions_with_MESS_strings=" + functions.size(),
            "proposals=" + proposals.size(), "auto_apply=" + high,
            "cfg_named_auto_apply=" + cfgNamed,
            "synthetic_auto_apply=" + syntheticCount,
            "numeric_ids_in_catalog=" + handlersByValue.size(),
            "stale_enum_values_for_review=" + staleEnumValues,
            "note=Review apply=0 rows; STMessageIdApplier consumes only apply=1."),
            StandardCharsets.UTF_8);
        println("Message-ID analysis complete: " + dir);
        println("Proposals: " + proposals.size() + ", auto-apply: " + high);
        if (staleEnumValues > 0) {
            printerr("Enum values needing review: " + staleEnumValues + " (see " +
                dir.resolve("message_id_stale_enum_values.tsv") + ")");
        }
    }

    private Function representativeFunction(Set<String> handlers) {
        if (handlers.isEmpty()) return null;
        String first = handlers.iterator().next();
        int space = first.indexOf(' ');
        String addressText = space < 0 ? first : first.substring(0, space);
        try {
            return currentProgram.getFunctionManager().getFunctionAt(
                currentProgram.getAddressFactory().getAddress(addressText));
        }
        catch (Exception ignored) { return null; }
    }

    private String syntheticName(long value, Set<String> handlers) {
        Set<String> owners = new TreeSet<>();
        for (String handler : handlers) {
            int space = handler.indexOf(' ');
            String functionName = space < 0 ? handler : handler.substring(space + 1);
            int separator = functionName.indexOf("::");
            if (separator > 0) owners.add(functionName.substring(0, separator));
        }
        String owner = owners.size() == 1 ? owners.iterator().next() : "SHARED";
        owner = owner.replaceAll("[^A-Za-z0-9]+", "_").toUpperCase(Locale.ROOT);
        return String.format("MESS_%s_%04X", owner, value & 0xffff);
    }

    private boolean isSyntheticName(String name, long value) {
        return name.startsWith("MESS_") &&
            name.endsWith(String.format("_%04X", value & 0xffff));
    }

    private MessageIdScan findComparedMessageIds(Function function) {
        MessageIdScan result = new MessageIdScan();
        Map<Address, FlowState> incoming = new HashMap<>();
        Deque<Address> work = new ArrayDeque<>();
        incoming.put(function.getEntryPoint(), new FlowState());
        work.add(function.getEntryPoint());

        while (!work.isEmpty()) {
            Address address = work.removeFirst();
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !function.getBody().contains(address)) continue;
            FlowState state = new FlowState(incoming.get(address));
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString();
            Register destination = instruction.getRegister(0);
            Register source = instruction.getNumOperands() > 1 ? instruction.getRegister(1) : null;
            Scalar operandScalar = instruction.getNumOperands() > 1 ? instruction.getScalar(1) : null;
            RegisterState previousDestination = destination == null ? null :
                state.idRegisters.get(registerKey(destination));
            Long previousConstant = destination == null ? null :
                state.constantRegisters.get(registerKey(destination));
            Long sourceConstant = source == null ? null :
                state.constantRegisters.get(registerKey(source));

            if (destination != null && writesFirstOperand(mnemonic)) {
                state.idRegisters.remove(registerKey(destination));
                state.constantRegisters.remove(registerKey(destination));
            }
            if (("MOV".equals(mnemonic) || "MOVZX".equals(mnemonic) || "MOVSX".equals(mnemonic)) &&
                    destination != null) {
                if (destination.getBitLength() == 32 &&
                        ID_FIELD.matcher(text.replace(" ", "")).find()) {
                    state.idRegisters.put(registerKey(destination), new RegisterState(0, false));
                }
                else if (source != null && state.idRegisters.containsKey(registerKey(source))) {
                    RegisterState sourceState = state.idRegisters.get(registerKey(source));
                    state.idRegisters.put(registerKey(destination), sourceState);
                }
                if (operandScalar != null && OperandType.isScalar(instruction.getOperandType(1))) {
                    state.constantRegisters.put(registerKey(destination), operandScalar.getUnsignedValue());
                }
                else if (source != null && state.constantRegisters.containsKey(registerKey(source))) {
                    state.constantRegisters.put(registerKey(destination),
                        state.constantRegisters.get(registerKey(source)));
                }
            }
            else if ("XOR".equals(mnemonic) && destination != null && source != null &&
                    registerKey(destination).equals(registerKey(source))) {
                state.constantRegisters.put(registerKey(destination), 0L);
            }
            else if ("LEA".equals(mnemonic) && destination != null && source != null &&
                    state.idRegisters.containsKey(registerKey(source))) {
                RegisterState sourceState = state.idRegisters.get(registerKey(source));
                long delta = operandScalar == null ? 0 : operandScalar.getSignedValue();
                state.idRegisters.put(registerKey(destination),
                    new RegisterState(sourceState.delta + delta, true));
            }
            else if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && destination != null &&
                    (operandScalar != null || sourceConstant != null) && previousDestination != null) {
                long delta = operandScalar != null ? operandScalar.getSignedValue() : sourceConstant;
                if ("SUB".equals(mnemonic)) delta = -delta;
                RegisterState updated = new RegisterState(previousDestination.delta + delta,
                    previousDestination.switchNormalized);
                state.idRegisters.put(registerKey(destination), updated);
                addZeroComparison(result, function, instruction, updated);
                if (previousConstant != null) {
                    state.constantRegisters.put(registerKey(destination), previousConstant + delta);
                }
            }
            else if (("INC".equals(mnemonic) || "DEC".equals(mnemonic)) &&
                    destination != null && previousDestination != null) {
                long delta = "INC".equals(mnemonic) ? 1 : -1;
                RegisterState updated = new RegisterState(previousDestination.delta + delta,
                    previousDestination.switchNormalized);
                state.idRegisters.put(registerKey(destination), updated);
                addZeroComparison(result, function, instruction, updated);
                if (previousConstant != null)
                    state.constantRegisters.put(registerKey(destination), previousConstant + delta);
            }

            if ("CMP".equals(mnemonic)) {
                Long comparedConstant = null;
                for (int i = 0; i < instruction.getNumOperands(); i++) {
                    Scalar candidate = instruction.getScalar(i);
                    if (candidate != null && OperandType.isScalar(instruction.getOperandType(i)))
                        comparedConstant = candidate.getUnsignedValue();
                    Register register = instruction.getRegister(i);
                    if (register != null &&
                            state.constantRegisters.containsKey(registerKey(register))) {
                        comparedConstant = state.constantRegisters.get(registerKey(register));
                    }
                }
                if (comparedConstant != null) {
                    boolean direct = ID_FIELD.matcher(text.replace(" ", "")).find();
                    RegisterState tracked = null;
                    for (int i = 0; i < instruction.getNumOperands(); i++) {
                        Register register = instruction.getRegister(i);
                        RegisterState candidate = register == null ? null :
                            state.idRegisters.get(registerKey(register));
                        if (candidate != null) tracked = candidate;
                    }
                    long value = comparedConstant;
                    if (direct && value <= 0xffff) {
                        result.values.add(value);
                        addExactComparison(result, function, instruction, value);
                    }
                    if (tracked != null) {
                        long original = value - tracked.delta;
                        if (original >= 0 && original <= 0xffff) {
                            result.values.add(original);
                            addExactComparison(result, function, instruction, original);
                        }
                        if (tracked.switchNormalized && tracked.delta < 0 && value <= 0x400) {
                            long base = -tracked.delta;
                            for (long candidate = base; candidate <= base + value; candidate++) {
                                if (candidate <= 0xffff) result.values.add(candidate);
                            }
                        }
                    }
                }
            }

            // Calls may destroy the x86 caller-saved registers.  Callee-saved registers
            // keep their tracked value, which is important for large GetMessage methods.
            if (instruction.getFlowType().isCall()) {
                clearRegisters(state, "EAX", "ECX", "EDX");
            }
            else if ("DIV".equals(mnemonic) || "IDIV".equals(mnemonic) ||
                    (("MUL".equals(mnemonic) || "IMUL".equals(mnemonic)) &&
                        instruction.getNumOperands() == 1)) {
                clearRegisters(state, "EAX", "EDX");
            }
            else if ("CDQ".equals(mnemonic) || "CWD".equals(mnemonic)) {
                clearRegisters(state, "EDX");
            }
            else if (("XCHG".equals(mnemonic) || "XADD".equals(mnemonic)) &&
                    destination != null && source != null) {
                clearRegisters(state, registerKey(destination), registerKey(source));
            }
            for (Address successor : successors(instruction, function)) {
                FlowState existingState = incoming.get(successor);
                if (existingState == null) {
                    incoming.put(successor, new FlowState(state));
                    work.addLast(successor);
                }
                else if (existingState.retainCommon(state)) {
                    work.addLast(successor);
                }
            }
        }
        return result;
    }

    private void addExactComparison(MessageIdScan scan, Function function,
            Instruction comparison, long value) {
        Address nextAddress = comparison.getFallThrough();
        if (nextAddress == null) return;
        Set<Address> priorInequalitySuccessors = new TreeSet<>();
        for (int step = 0; step < 2; step++) {
            Instruction branch = currentProgram.getListing().getInstructionAt(nextAddress);
            if (branch == null || !branch.getFlowType().isConditional()) return;
            String mnemonic = branch.getMnemonicString().toUpperCase(Locale.ROOT);
            Address fallThrough = branch.getFallThrough();
            Address[] flows = branch.getFlows();
            if (fallThrough == null || flows.length != 1) return;
            Address taken = flows[0];
            if (!function.getBody().contains(fallThrough) || !function.getBody().contains(taken)) return;

            boolean equalBranch = "JE".equals(mnemonic) || "JZ".equals(mnemonic);
            boolean notEqualBranch = "JNE".equals(mnemonic) || "JNZ".equals(mnemonic);
            if (equalBranch || notEqualBranch) {
                Address equalitySuccessor = equalBranch ? taken : fallThrough;
                Set<Address> inequalitySuccessors = new TreeSet<>(priorInequalitySuccessors);
                inequalitySuccessors.add(equalBranch ? fallThrough : taken);
                IdComparison candidate = new IdComparison(comparison.getAddress(),
                    equalitySuccessor, inequalitySuccessors, value);
                if (!scan.comparisons.contains(candidate)) scan.comparisons.add(candidate);
                return;
            }

            // MSVC commonly emits CMP; JA/JB; JZ for a three-way decision tree.
            // A strict ordered branch excludes one side but leaves equality for the next JZ.
            if (!("JA".equals(mnemonic) || "JG".equals(mnemonic) ||
                    "JB".equals(mnemonic) || "JL".equals(mnemonic))) return;
            priorInequalitySuccessors.add(taken);
            nextAddress = fallThrough;
        }
    }

    private void addZeroComparison(MessageIdScan scan, Function function,
            Instruction instruction, RegisterState state) {
        long original = -state.delta;
        if (original < 0 || original > 0xffff) return;
        int before = scan.comparisons.size();
        addExactComparison(scan, function, instruction, original);
        if (scan.comparisons.size() != before) scan.values.add(original);
    }

    private Set<Long> siteSpecificValues(Evidence evidence, String name, MessageIdScan scan)
            throws Exception {
        Set<Long> agreed = new TreeSet<>();
        for (Address reference : evidence.nameRefs.getOrDefault(name, Set.of())) {
            Set<Long> candidates = new TreeSet<>();
            for (IdComparison comparison : scan.comparisons) {
                boolean equalityReaches = reaches(comparison.equalitySuccessor, reference,
                    evidence.function, comparison.address);
                if (!equalityReaches) continue;
                boolean inequalityReaches = false;
                for (Address successor : comparison.inequalitySuccessors) {
                    if (reaches(successor, reference, evidence.function, comparison.address)) {
                        inequalityReaches = true;
                        break;
                    }
                }
                if (!inequalityReaches) candidates.add(comparison.value);
            }
            if (candidates.size() == 1) agreed.add(candidates.iterator().next());
        }
        return agreed.size() == 1 ? agreed : Set.of();
    }

    private boolean reaches(Address start, Address target, Function function, Address barrier)
            throws Exception {
        if (start == null || target == null) return false;
        Deque<Address> work = new ArrayDeque<>();
        Set<Address> visited = new TreeSet<>();
        work.add(start);
        int steps = 0;
        while (!work.isEmpty()) {
            Address address = work.removeFirst();
            if (!visited.add(address) || address.equals(barrier)) continue;
            if (address.equals(target)) return true;
            if ((++steps & 0x3ff) == 0) monitor.checkCancelled();
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !function.getBody().contains(address)) continue;
            work.addAll(successors(instruction, function));
        }
        return false;
    }

    private Set<Address> successors(Instruction instruction, Function function) {
        Set<Address> result = new TreeSet<>();
        Address fallThrough = instruction.getFallThrough();
        if (fallThrough != null && function.getBody().contains(fallThrough)) result.add(fallThrough);
        if (!instruction.getFlowType().isCall()) {
            for (Address flow : instruction.getFlows()) {
                if (function.getBody().contains(flow)) result.add(flow);
            }
        }
        return result;
    }

    private String registerKey(Register register) {
        Register base = register.getBaseRegister();
        return (base == null ? register : base).getName().toUpperCase(Locale.ROOT);
    }

    private void clearRegisters(FlowState state, String... registers) {
        for (String register : registers) {
            state.idRegisters.remove(register);
            state.constantRegisters.remove(register);
        }
    }

    private boolean writesFirstOperand(String mnemonic) {
        return mnemonic.startsWith("MOV") || mnemonic.equals("LEA") || mnemonic.equals("ADD") ||
            mnemonic.equals("SUB") || mnemonic.equals("ADC") || mnemonic.equals("SBB") ||
            mnemonic.equals("XOR") || mnemonic.equals("AND") ||
            mnemonic.equals("OR") || mnemonic.equals("POP") || mnemonic.equals("INC") ||
            mnemonic.equals("DEC") || mnemonic.equals("IMUL") || mnemonic.equals("MUL") ||
            mnemonic.equals("NEG") || mnemonic.equals("NOT") || mnemonic.startsWith("SH") ||
            mnemonic.startsWith("RO") || mnemonic.startsWith("SET") ||
            mnemonic.startsWith("CMOV") || mnemonic.equals("BSF") || mnemonic.equals("BSR") ||
            mnemonic.equals("BSWAP") || mnemonic.equals("XCHG") || mnemonic.equals("XADD");
    }

    private Map<String, Long> existingValues() {
        Map<String, Long> result = new HashMap<>();
        DataType type = currentProgram.getDataTypeManager().getDataType(ENUM_PATH);
        if (type instanceof Enum enumType) {
            for (String name : enumType.getNames()) result.put(name, enumType.getValue(name));
        }
        return result;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Output directory is required");
        return askDirectory("Select recovery output directory", "Analyze");
    }

    private void writeTsv(Path path, List<Proposal> proposals) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tname\tvalue_hex\tvalue_decimal\tfunction_address\tfunction\tconfidence\treason\tstrings\n");
            for (Proposal p : proposals) {
                out.write((p.apply ? "1" : "0") + "\t" + p.name + "\t" + hex(p.value) + "\t" +
                    p.value + "\t" + addr(p.evidence.function.getEntryPoint()) + "\t" +
                    tsv(p.evidence.function.getName(true)) + "\t" + (p.apply ? "high" : "low") +
                    "\t" + p.reason + "\t" + tsv(String.join(" | ", p.evidence.strings)) + "\n");
            }
        }
    }

    private void writeJsonl(Path path, List<Proposal> proposals) throws Exception {
        List<String> rows = new ArrayList<>();
        for (Proposal p : proposals) rows.add("{\"apply\":" + p.apply + ",\"name\":" + q(p.name) +
            ",\"value_hex\":" + q(hex(p.value)) + ",\"value\":" + p.value +
            ",\"function_address\":" + q(addr(p.evidence.function.getEntryPoint())) +
            ",\"function\":" + q(p.evidence.function.getName(true)) + ",\"confidence\":" +
            q(p.apply ? "high" : "low") + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, rows, StandardCharsets.UTF_8);
    }

    private void writeCatalog(Path path, Map<Long, Set<String>> handlers,
            Map<String, Long> existing) throws Exception {
        Map<Long, Set<String>> namesByValue = new HashMap<>();
        for (Map.Entry<String, Long> entry : existing.entrySet()) {
            namesByValue.computeIfAbsent(entry.getValue(), ignored -> new TreeSet<>()).add(entry.getKey());
        }
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("value_hex\tvalue_decimal\tknown_names\thandler_count\thandlers\n");
            for (Map.Entry<Long, Set<String>> entry : handlers.entrySet()) {
                Set<String> names = namesByValue.getOrDefault(entry.getKey(), Set.of());
                out.write(hex(entry.getKey()) + "\t" + entry.getKey() + "\t" +
                    tsv(String.join(" | ", names)) + "\t" + entry.getValue().size() + "\t" +
                    tsv(String.join(" | ", entry.getValue())) + "\n");
            }
        }
    }

    private int writeStaleEnumValues(Path path, Set<Long> observed,
            Map<String, Long> existing) throws Exception {
        int count = 0;
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("name\tvalue_hex\tvalue_decimal\treason\n");
            List<String> names = new ArrayList<>(existing.keySet());
            names.sort(Comparator.naturalOrder());
            for (String name : names) {
                long value = existing.get(name);
                if (observed.contains(value)) continue;
                out.write(name + "\t" + hex(value) + "\t" + value +
                    "\tnot_observed_in_current_GetMessage_scan\n");
                count++;
            }
        }
        return count;
    }

    private static String stringValue(Data data) {
        Object value = data.getValue();
        return value instanceof String ? (String)value : data.getDefaultValueRepresentation();
    }
    private static String addr(Address a) { return a.toString().toUpperCase(Locale.ROOT); }
    private static String hex(long value) { return String.format("0x%X", value); }
    private static String safe(String s) { return s.replaceAll("[^A-Za-z0-9._-]+", "_"); }
    private static String tsv(String s) { return s.replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"); }
    private static String q(String s) { return "\"" + s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n") + "\""; }

    private static class Evidence {
        final Function function; final Set<String> names = new TreeSet<>(), strings = new TreeSet<>();
        final Set<Long> values = new TreeSet<>();
        final Map<String, Set<Address>> nameRefs = new HashMap<>();
        Evidence(Function function) { this.function = function; }
    }
    private static class MessageIdScan {
        final Set<Long> values = new TreeSet<>();
        final List<IdComparison> comparisons = new ArrayList<>();
    }
    private static class IdComparison {
        final Address address, equalitySuccessor;
        final Set<Address> inequalitySuccessors;
        final long value;
        IdComparison(Address address, Address equalitySuccessor, Set<Address> inequalitySuccessors,
                long value) {
            this.address = address;
            this.equalitySuccessor = equalitySuccessor;
            this.inequalitySuccessors = inequalitySuccessors;
            this.value = value;
        }
        @Override
        public boolean equals(Object other) {
            if (!(other instanceof IdComparison comparison)) return false;
            return value == comparison.value && address.equals(comparison.address) &&
                equalitySuccessor.equals(comparison.equalitySuccessor) &&
                inequalitySuccessors.equals(comparison.inequalitySuccessors);
        }
        @Override
        public int hashCode() {
            int result = address.hashCode();
            result = result * 31 + equalitySuccessor.hashCode();
            result = result * 31 + inequalitySuccessors.hashCode();
            return result * 31 + Long.hashCode(value);
        }
    }
    private static class RegisterState {
        final long delta; final boolean switchNormalized;
        RegisterState(long delta, boolean switchNormalized) {
            this.delta = delta; this.switchNormalized = switchNormalized;
        }
        @Override
        public boolean equals(Object other) {
            if (!(other instanceof RegisterState state)) return false;
            return delta == state.delta && switchNormalized == state.switchNormalized;
        }
        @Override
        public int hashCode() {
            return Long.hashCode(delta) * 31 + Boolean.hashCode(switchNormalized);
        }
    }
    private static class FlowState {
        final Map<String, RegisterState> idRegisters = new HashMap<>();
        final Map<String, Long> constantRegisters = new HashMap<>();
        FlowState() {}
        FlowState(FlowState other) {
            idRegisters.putAll(other.idRegisters);
            constantRegisters.putAll(other.constantRegisters);
        }
        boolean retainCommon(FlowState other) {
            boolean changed = idRegisters.entrySet().removeIf(entry ->
                !entry.getValue().equals(other.idRegisters.get(entry.getKey())));
            changed |= constantRegisters.entrySet().removeIf(entry ->
                !entry.getValue().equals(other.constantRegisters.get(entry.getKey())));
            return changed;
        }
    }
    private static class Proposal {
        final Evidence evidence; final String name, reason; final long value; final boolean apply;
        Proposal(Evidence evidence, String name, long value, boolean apply, String reason) {
            this.evidence = evidence; this.name = name; this.value = value;
            this.apply = apply; this.reason = reason;
        }
    }
}
