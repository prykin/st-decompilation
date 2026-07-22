// Recover conservative destructor and scalar-deleting-destructor candidates.
// Evidence requires deallocation of the incoming this value and, for automatic naming,
// a reviewed vtable owner plus one same-this cleanup call. Read-only.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Destructors

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
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STDestructorAnalyzer extends GhidraScript {
    private static final Pattern MEMORY = Pattern.compile(
        "^\\[([A-Z][A-Z0-9]{1,3})(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern REGISTER = Pattern.compile("^[A-Z][A-Z0-9]{1,3}$");
    private static final String TAG = "RECOVERED_DESTRUCTOR";
    private static final int MAX_WRAPPER_SIZE = 256;

    private final Map<Address, Set<String>> vtableOwners = new TreeMap<>();
    private final Map<Address, Set<String>> vtableSlots = new TreeMap<>();
    private final Set<Address> deallocators = new TreeSet<>();
    private final Map<Address, ProposalSeed> seeds = new TreeMap<>();
    private final List<LifetimeRow> lifetimeRows = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        loadVtableSlots(directory.resolve("vtable_slots.tsv"));
        discoverDeallocators();

        int deleteThisFunctions = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isThunk() || function.isExternal() || isLibrary(function)) continue;
            Lifecycle lifecycle = analyze(function);
            recordLifetime(function, lifecycle);
            if (lifecycle.deallocatesThis) {
                deleteThisFunctions++;
                considerDeletingWrapper(function, lifecycle);
            }
            else considerCleanupDestructor(function, lifecycle);
        }

        // Keep previously applied rows stable on refresh.
        functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!hasTag(function, TAG)) continue;
            String owner = ownerOf(function);
            if (owner.isBlank()) continue;
            String kind = function.getName().startsWith("~") ? "destructor" :
                "scalar_deleting_destructor";
            seeds.putIfAbsent(function.getEntryPoint(), new ProposalSeed(function, owner, kind));
        }

        List<Proposal> proposals = new ArrayList<>();
        for (ProposalSeed seed : seeds.values()) {
            Proposal proposal = finish(seed);
            if (proposal != null) proposals.add(proposal);
        }
        proposals.sort(Comparator.comparing(row -> row.address));
        writeTsv(directory.resolve("destructor_proposals.tsv"), proposals);
        writeJson(directory.resolve("destructor_proposals.jsonl"), proposals);
        writeLifetimeTsv(directory.resolve("destructor_lifetime_candidates.tsv"));
        writeSummary(directory.resolve("destructor_summary.txt"), proposals,
            deleteThisFunctions);
        println("Destructor analysis complete: " + directory.toAbsolutePath().normalize());
        println("Deallocator functions: " + deallocators.size() +
            ", delete-this functions: " + deleteThisFunctions + ", proposals: " +
            proposals.size() + ", name_apply: " +
            proposals.stream().filter(row -> row.nameApply).count());
    }

    private void loadVtableSlots(Path path) throws Exception {
        if (!Files.isRegularFile(path)) return;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("resolved_target_address") ||
                !tsv.header.contains("owner")) return;
        for (Map<String, String> row : tsv.rows) {
            String addressText = row.get("resolved_target_address");
            if (addressText == null || addressText.isBlank()) continue;
            Address address = address(addressText);
            String owner = unt(row.get("slot_owner"));
            if (owner.isBlank()) owner = unt(row.get("owner"));
            if (owner.isBlank()) continue;
            vtableOwners.computeIfAbsent(address, ignored -> new TreeSet<>()).add(owner);
            vtableSlots.computeIfAbsent(address, ignored -> new TreeSet<>())
                .add(row.getOrDefault("slot_offset", ""));
        }
    }

    private void discoverDeallocators() {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            Function target = resolveThunk(function);
            if (target != null && isDeallocatorSeed(target))
                deallocators.add(target.getEntryPoint());
        }
        boolean changed;
        do {
            changed = false;
            functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                Function function = functions.next();
                if (function.isExternal() || function.getBody().getNumAddresses() > 96 ||
                        deallocators.contains(function.getEntryPoint())) continue;
                Set<Function> calls = directCalls(function);
                if (calls.size() != 1) continue;
                Function called = calls.iterator().next();
                if (!deallocators.contains(called.getEntryPoint()) ||
                        explicitParameters(function).size() != 1 ||
                        !forwardsSingleParameter(function, called)) continue;
                deallocators.add(function.getEntryPoint());
                changed = true;
            }
        } while (changed);
    }

    private boolean forwardsSingleParameter(Function wrapper, Function expectedTarget) {
        List<Parameter> parameters = explicitParameters(wrapper);
        if (parameters.size() != 1) return false;
        Parameter parameter = parameters.get(0);
        Map<String, ThisValue> registers = new HashMap<>();
        Map<Long, ThisValue> stack = new HashMap<>();
        if (parameter.isRegisterVariable() && parameter.getRegister() != null)
            registers.put(canonicalRegister(parameter.getRegister().getName()), new ThisValue(0));
        else if (parameter.isStackVariable())
            stack.put((long)parameter.getStackOffset() + currentProgram.getDefaultPointerSize(),
                new ThisValue(0));
        else return false;
        List<ThisValue> pushes = new ArrayList<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(wrapper.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if ("PUSH".equals(mnemonic)) {
                pushes.add(valueOf(operands.length == 0 ? "" : operands[0], registers, stack));
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                Function called = calledFunction(instruction);
                if (expectedTarget.equals(called))
                    return isThis(deallocatorArgument(called, registers, pushes));
                registers.remove("EAX"); registers.remove("ECX"); registers.remove("EDX");
                pushes.clear();
                continue;
            }
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal())
                pushes.clear();
            updateRegisters(mnemonic, operands, registers, stack);
        }
        return false;
    }

    private boolean isDeallocatorSeed(Function function) {
        String name = function.getName(true).toLowerCase(Locale.ROOT);
        int separator = name.lastIndexOf("::");
        String leaf = (separator < 0 ? name : name.substring(separator + 2))
            .replace("operator", "operator_").replace(" ", "_");
        if (leaf.matches("(?:operator_)?delete|free|_free|memfree|recmemfree|deleteobject") ||
                name.matches(".*::operator_?delete.*")) return true;
        String comment = function.getComment();
        if (comment == null || !comment.toLowerCase(Locale.ROOT).contains("dbgheap.c"))
            return false;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.size() != 1 || !(parameters.get(0).getDataType() instanceof Pointer))
            return false;
        DataType returned = function.getReturnType();
        return returned.getLength() <= 0 || Undefined.isUndefined(returned);
    }

    private Lifecycle analyze(Function function) {
        Map<String, ThisValue> registers = new HashMap<>();
        registers.put("ECX", new ThisValue(0));
        Set<String> zeroRegisters = new HashSet<>();
        List<ThisValue> pushes = new ArrayList<>();
        Lifecycle result = new Lifecycle();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            observeZeroedThisField(mnemonic, operands, registers, zeroRegisters, result);
            if ("PUSH".equals(mnemonic)) {
                pushes.add(valueOf(operands.length == 0 ? "" : operands[0], registers));
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                Function called = calledFunction(instruction);
                result.totalCalls++;
                boolean ecxThis = isThis(registers.get("ECX"));
                ThisValue freed = called != null && deallocators.contains(called.getEntryPoint()) ?
                    deallocatorArgument(called, registers, pushes) : null;
                if (isThisField(freed)) result.fieldCleanupCalls++;
                if (called != null && deallocators.contains(called.getEntryPoint()) &&
                        isThis(freed)) {
                    result.deallocatesThis = true;
                    result.deallocator = called;
                    result.deallocationSite = instruction.getAddress();
                }
                else if (called != null && ecxThis && !called.equals(function)) {
                    result.sameThisCalls.add(called);
                    result.sameThisCallSites.add(addr(instruction.getAddress()) + " " +
                        called.getName(true));
                }
                registers.remove("EAX"); registers.remove("ECX"); registers.remove("EDX");
                zeroRegisters.remove("EAX"); zeroRegisters.remove("ECX");
                zeroRegisters.remove("EDX");
                pushes.clear();
                continue;
            }
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal())
                pushes.clear();
            updateRegisters(mnemonic, operands, registers);
            updateZeroRegisters(mnemonic, operands, zeroRegisters);
        }
        return result;
    }

    private ThisValue deallocatorArgument(Function called, Map<String, ThisValue> registers,
            List<ThisValue> pushes) {
        List<Parameter> parameters = explicitParameters(called);
        if (!parameters.isEmpty()) {
            Parameter parameter = parameters.get(0);
            if (parameter.isRegisterVariable() && parameter.getRegister() != null)
                return registers.get(canonicalRegister(parameter.getRegister().getName()));
            if (parameter.isStackVariable() && pushes.size() >= parameters.size())
                return pushes.get(pushes.size() - 1);
            return null;
        }
        if ("__thiscall".equals(called.getCallingConventionName())) return registers.get("ECX");
        return pushes.isEmpty() ? null : pushes.get(pushes.size() - 1);
    }

    private void observeZeroedThisField(String mnemonic, String[] operands,
            Map<String, ThisValue> registers, Set<String> zeroRegisters, Lifecycle result) {
        if (!"MOV".equals(mnemonic) || operands.length < 2) return;
        MemoryExpr destination = memoryExpr(operands[0]);
        ThisValue base = destination == null ? null : registers.get(destination.register);
        if (base == null) return;
        long offset = base.offset + destination.displacement;
        if (offset <= 0) return;
        result.thisFieldWrites++;
        Long immediate = immediate(operands[1]);
        String sourceRegister = cleanRegister(operands[1]);
        if ((immediate != null && immediate == 0) ||
                (sourceRegister != null && zeroRegisters.contains(sourceRegister)))
            result.zeroedThisOffsets.add(offset);
    }

    private void updateZeroRegisters(String mnemonic, String[] operands,
            Set<String> zeroRegisters) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if (destination == null) return;
        if (!isFullRegister(operands[0])) { zeroRegisters.remove(destination); return; }
        if (("XOR".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.length >= 2 &&
                destination.equals(cleanRegister(operands[1]))) {
            zeroRegisters.add(destination); return;
        }
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            Long value = immediate(operands[1]);
            String source = cleanRegister(operands[1]);
            if (value != null && value == 0 || source != null && zeroRegisters.contains(source))
                zeroRegisters.add(destination);
            else zeroRegisters.remove(destination);
            return;
        }
        if (!Set.of("CMP", "TEST", "PUSH", "JMP", "RET").contains(mnemonic))
            zeroRegisters.remove(destination);
    }

    private void considerDeletingWrapper(Function wrapper, Lifecycle lifecycle) {
        Set<String> tableOwnerSet = vtableOwners.getOrDefault(wrapper.getEntryPoint(), Set.of());
        String currentOwner = ownerOf(wrapper);
        Set<String> owners = new TreeSet<>(tableOwnerSet);
        if (owners.isEmpty()) {
            if (!currentOwner.isBlank()) owners.add(currentOwner);
            String typedOwner = ownerFromReceiverType(wrapper);
            if (!typedOwner.isBlank()) owners.add(typedOwner);
            for (Function called : lifecycle.sameThisCalls) {
                String calledOwner = ownerOf(called);
                if (!calledOwner.isBlank()) owners.add(calledOwner);
            }
        }
        if (owners.size() != 1) return;
        String owner = owners.iterator().next();
        boolean inVtable = tableOwnerSet.size() == 1 && tableOwnerSet.contains(owner);
        ProposalSeed wrapperSeed = new ProposalSeed(wrapper, owner,
            inVtable ? "scalar_deleting_destructor" : "delete_this_helper");
        wrapperSeed.deallocatesThis = true;
        wrapperSeed.inVtable = inVtable;
        wrapperSeed.deallocator = lifecycle.deallocator;
        wrapperSeed.evidence.add("deallocation_site=" + addr(lifecycle.deallocationSite));
        wrapperSeed.evidence.add("owner_sources=" + owners);
        wrapperSeed.evidence.addAll(lifecycle.sameThisCallSites);
        wrapperSeed.slotOffsets.addAll(vtableSlots.getOrDefault(wrapper.getEntryPoint(), Set.of()));
        wrapperSeed.strong = inVtable && wrapper.getBody().getNumAddresses() <= MAX_WRAPPER_SIZE &&
            lifecycle.sameThisCalls.size() == 1;
        seeds.put(wrapper.getEntryPoint(), wrapperSeed);

        if (wrapperSeed.strong) {
            Function body = lifecycle.sameThisCalls.iterator().next();
            if (!body.isExternal() && !body.isThunk() && !isLibrary(body)) {
                ProposalSeed bodySeed = seeds.computeIfAbsent(body.getEntryPoint(),
                    ignored -> new ProposalSeed(body, owner, "destructor"));
                bodySeed.strong = true;
                bodySeed.wrapperAddress = wrapper.getEntryPoint();
                bodySeed.inVtable = false;
                bodySeed.evidence.add("called_with_same_this_by_deleting_wrapper=" +
                    addr(wrapper.getEntryPoint()));
            }
        }
    }

    private void considerCleanupDestructor(Function function, Lifecycle lifecycle) {
        Set<String> tableOwnerSet = vtableOwners.getOrDefault(function.getEntryPoint(), Set.of());
        if (tableOwnerSet.size() != 1 || function.getBody().getNumAddresses() > 512) return;
        Set<String> slots = vtableSlots.getOrDefault(function.getEntryPoint(), Set.of());
        boolean destructorSlot = slots.contains("0x0") || slots.contains("0x4");
        boolean cleanupShape = lifecycle.zeroedThisOffsets.size() >= 2 &&
            lifecycle.totalCalls >= 2 &&
            (lifecycle.sameThisCalls.size() >= 2 || lifecycle.fieldCleanupCalls > 0);
        if (!destructorSlot || !cleanupShape) return;
        String owner = tableOwnerSet.iterator().next();
        ProposalSeed seed = new ProposalSeed(function, owner, "destructor");
        seed.strong = true;
        seed.inVtable = true;
        seed.slotOffsets.addAll(slots);
        seed.evidence.add("cleanup_only_vtable_method");
        seed.evidence.add("zeroed_this_fields=" + lifecycle.zeroedThisOffsets.size());
        seed.evidence.add("same_this_calls=" + lifecycle.sameThisCalls.size());
        seed.evidence.add("field_cleanup_calls=" + lifecycle.fieldCleanupCalls);
        seed.evidence.addAll(lifecycle.sameThisCallSites);
        seeds.put(function.getEntryPoint(), seed);
    }

    private void recordLifetime(Function function, Lifecycle lifecycle) {
        Set<String> owners = vtableOwners.getOrDefault(function.getEntryPoint(), Set.of());
        if (owners.size() != 1 || lifecycle.totalCalls == 0 &&
                lifecycle.zeroedThisOffsets.isEmpty()) return;
        lifetimeRows.add(new LifetimeRow(function, owners.iterator().next(),
            vtableSlots.getOrDefault(function.getEntryPoint(), Set.of()), lifecycle));
    }

    private Proposal finish(ProposalSeed seed) {
        Function function = seed.function;
        boolean scriptOwned = hasTag(function, TAG);
        boolean manualName = protectedSource(function.getSymbol().getSource());
        boolean manualSignature = protectedSource(function.getSignatureSource());
        String typePath = ownerTypePath(seed.owner);
        if (typePath.isBlank()) seed.evidence.add("owner_data_type_missing");
        boolean strong = (seed.strong || scriptOwned) && !typePath.isBlank();
        String method = switch (seed.kind) {
            case "destructor" -> "~" + leaf(seed.owner);
            case "scalar_deleting_destructor" -> "scalar_deleting_destructor";
            default -> "delete_this_helper_" + addr(function.getEntryPoint());
        };
        String proposed = seed.owner + "::" + method;
        if (scriptOwned && function.getName(true).startsWith(seed.owner + "::"))
            proposed = function.getName(true);
        boolean semanticKind = !"delete_this_helper".equals(seed.kind);
        boolean nameApply = strong && semanticKind && !manualName &&
            !function.getName(true).equals(proposed);
        boolean conventionApply = strong && !manualSignature &&
            !"__thiscall".equals(function.getCallingConventionName());
        boolean thisTypeApply = strong && !manualSignature &&
            !receiverTypeMatches(function, typePath);
        boolean returnApply = strong && "destructor".equals(seed.kind) && !manualSignature &&
            !"/void".equals(function.getReturnType().getPathName());
        boolean parameterApply = strong && "destructor".equals(seed.kind) && !manualSignature &&
            receiverOnlyFastcallSignature(function);
        if (manualName) seed.evidence.add("manual_name_preserved");
        if (manualSignature) seed.evidence.add("manual_signature_preserved");
        if (scriptOwned) seed.evidence.add("previously_applied");
        return new Proposal(function, seed.owner, seed.kind, proposed, typePath,
            seed.wrapperAddress, seed.inVtable, seed.slotOffsets,
            seed.deallocator == null ? null : seed.deallocator.getEntryPoint(), nameApply,
            conventionApply, thisTypeApply, returnApply, parameterApply,
            strong ? "high" : "review",
            String.join("; ", seed.evidence));
    }

    private boolean receiverOnlyFastcallSignature(Function function) {
        if (!"__fastcall".equals(function.getCallingConventionName())) return false;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.size() != 1) return false;
        Parameter parameter = parameters.get(0);
        return parameter.isRegisterVariable() && parameter.getRegister() != null &&
            "ECX".equals(canonicalRegister(parameter.getRegister().getName()));
    }

    private Set<Function> directCalls(Function function) {
        Set<Function> result = new HashSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function called = calledFunction(instruction);
            if (called != null) result.add(called);
        }
        return result;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private Function calledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return resolveThunk(function);
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

    private ThisValue valueOf(String operand, Map<String, ThisValue> registers) {
        return valueOf(operand, registers, Map.of());
    }

    private ThisValue valueOf(String operand, Map<String, ThisValue> registers,
            Map<Long, ThisValue> stack) {
        String register = cleanRegister(operand);
        if (register != null) return isFullRegister(operand) ? registers.get(register) : null;
        MemoryExpr memory = memoryExpr(operand);
        if (memory != null && "EBP".equals(memory.register) && stack.containsKey(memory.displacement))
            return stack.get(memory.displacement);
        ThisValue base = memory == null ? null : registers.get(memory.register);
        return base == null ? null : new ThisValue(base.offset + memory.displacement);
    }

    private boolean isThis(ThisValue value) { return value != null && value.offset == 0; }
    private boolean isThisField(ThisValue value) { return value != null && value.offset != 0; }

    private void updateRegisters(String mnemonic, String[] operands,
            Map<String, ThisValue> registers) {
        updateRegisters(mnemonic, operands, registers, Map.of());
    }

    private void updateRegisters(String mnemonic, String[] operands,
            Map<String, ThisValue> registers, Map<Long, ThisValue> stack) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            ThisValue value = valueOf(operands[1], registers, stack);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            MemoryExpr memory = memoryExpr(operands[1]);
            ThisValue base = memory == null ? null : registers.get(memory.register);
            if (base == null) registers.remove(destination);
            else registers.put(destination, new ThisValue(base.offset + memory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && destination != null &&
                operands.length >= 2 && registers.containsKey(destination)) {
            Long value = immediate(operands[1]);
            if (value == null) registers.remove(destination);
            else registers.put(destination, new ThisValue(registers.get(destination).offset +
                ("SUB".equals(mnemonic) ? -value : value)));
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private MemoryExpr memoryExpr(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String value = operand.substring(open, close + 1)
            .replace(" ", "").replace("+-", "-").replace("-+", "-")
            .toUpperCase(Locale.ROOT);
        Matcher matcher = MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        long displacement = 0;
        if (matcher.group(3) != null) {
            Long parsed = immediate(matcher.group(3));
            if (parsed == null) return null;
            displacement = "-".equals(matcher.group(2)) ? -parsed : parsed;
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
    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }

    private String ownerOf(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        return owner.equals("Global") || owner.startsWith("Library::") ? "" : owner;
    }

    private String ownerFromReceiverType(Function function) {
        for (Parameter parameter : function.getParameters()) {
            if (!parameter.isRegisterVariable() || parameter.getRegister() == null ||
                    !"ECX".equals(canonicalRegister(parameter.getRegister().getName())) ||
                    !(parameter.getDataType() instanceof Pointer pointer) ||
                    !(pointer.getDataType() instanceof Structure structure)) continue;
            String name = structure.getName();
            return name.startsWith("_") ? "" : name;
        }
        return "";
    }

    private String ownerTypePath(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure) return direct.getPathName();
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return match.getPathName();
        return "";
    }

    private boolean receiverTypeMatches(Function function, String typePath) {
        if (typePath.isBlank()) return false;
        for (Parameter parameter : function.getParameters()) {
            if (!(parameter.getDataType() instanceof Pointer pointer) ||
                    pointer.getDataType() == null ||
                    !typePath.equals(pointer.getDataType().getPathName())) continue;
            if (parameter.isAutoParameter()) return true;
            if (parameter.isRegisterVariable() && parameter.getRegister() != null &&
                    "ECX".equals(canonicalRegister(parameter.getRegister().getName()))) return true;
        }
        return false;
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName().toUpperCase(Locale.ROOT);
            if (name.equals("LIBRARY") || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("name_apply\tconvention_apply\tthis_type_apply\treturn_apply\t" +
                "parameter_apply\taddress\t" +
                "expected_name\texpected_name_source\texpected_signature\t" +
                "expected_signature_source\tkind\towner\tproposed_name\towner_type_path\t" +
                "wrapper_address\tin_vtable\tvtable_slots\tdeallocator_address\t" +
                "confidence\treason\n");
            for (Proposal p : rows) out.write(bit(p.nameApply) + "\t" +
                bit(p.conventionApply) + "\t" + bit(p.thisTypeApply) + "\t" +
                bit(p.returnApply) + "\t" + bit(p.parameterApply) + "\t" +
                addr(p.address) + "\t" + tsv(p.expectedName) + "\t" +
                p.expectedNameSource + "\t" + tsv(p.expectedSignature) + "\t" +
                p.expectedSignatureSource + "\t" + p.kind + "\t" + tsv(p.owner) +
                "\t" + tsv(p.proposedName) + "\t" + tsv(p.ownerTypePath) + "\t" +
                addr(p.wrapperAddress) + "\t" + bit(p.inVtable) + "\t" +
                tsv(String.join(" | ", p.slotOffsets)) + "\t" +
                addr(p.deallocatorAddress) + "\t" + p.confidence + "\t" +
                tsv(p.reason) + "\n");
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal p : rows) lines.add("{\"name_apply\":" + p.nameApply +
            ",\"convention_apply\":" + p.conventionApply +
            ",\"this_type_apply\":" + p.thisTypeApply +
            ",\"return_apply\":" + p.returnApply +
            ",\"parameter_apply\":" + p.parameterApply +
            ",\"address\":" + q(addr(p.address)) + ",\"kind\":" + q(p.kind) +
            ",\"owner\":" + q(p.owner) + ",\"proposed_name\":" + q(p.proposedName) +
            ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }

    private void writeLifetimeTsv(Path path) throws Exception {
        lifetimeRows.sort(Comparator.comparing(row -> row.address));
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tfunction\towner\tvtable_slots\tdeallocates_this\t" +
                "this_field_writes\tzeroed_this_fields\tsame_this_calls\t" +
                "field_cleanup_calls\ttotal_calls\n");
            for (LifetimeRow row : lifetimeRows) out.write(addr(row.address) + "\t" +
                tsv(row.function) + "\t" + tsv(row.owner) + "\t" +
                tsv(String.join(" | ", row.slots)) + "\t" + bit(row.deallocatesThis) +
                "\t" + row.thisFieldWrites + "\t" + row.zeroedFields + "\t" +
                row.sameThisCalls + "\t" +
                row.fieldCleanupCalls + "\t" + row.totalCalls + "\n");
        }
    }

    private void writeSummary(Path path, List<Proposal> rows, int deleteThis) throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "deallocator_functions=" + deallocators.size(),
            "delete_this_functions=" + deleteThis,
            "proposals=" + rows.size(),
            "destructor_proposals=" + rows.stream().filter(r -> r.kind.equals("destructor")).count(),
            "deleting_destructor_proposals=" + rows.stream().filter(r -> r.kind.equals("scalar_deleting_destructor")).count(),
            "cleanup_only_destructor_proposals=" + rows.stream().filter(r -> r.kind.equals("destructor") && r.reason.contains("cleanup_only_vtable_method")).count(),
            "name_auto_apply=" + rows.stream().filter(r -> r.nameApply).count(),
            "parameter_auto_apply=" + rows.stream().filter(r -> r.parameterApply).count(),
            "note=Delete-this helpers outside reviewed vtables remain review-only.",
            "note_manual=USER_DEFINED names and signatures are never auto-applied."),
            StandardCharsets.UTF_8);
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
            if (values.length != header.length) continue;
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }
    private static String leaf(String value) {
        int separator = value.lastIndexOf("::");
        return separator < 0 ? value : value.substring(separator + 2);
    }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder(); boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t'); else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n'); else out.append(ch);
                escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }
    private static String q(String value) {
        if (value == null) return "null";
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\"";
    }

    private static class ThisValue {
        final long offset; ThisValue(long offset) { this.offset = offset; }
    }
    private static class MemoryExpr {
        final String register; final long displacement;
        MemoryExpr(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class Lifecycle {
        boolean deallocatesThis;
        int fieldCleanupCalls, totalCalls, thisFieldWrites;
        Function deallocator;
        Address deallocationSite;
        final Set<Function> sameThisCalls = new HashSet<>();
        final Set<String> sameThisCallSites = new TreeSet<>();
        final Set<Long> zeroedThisOffsets = new TreeSet<>();
    }
    private static class ProposalSeed {
        final Function function; final String owner, kind;
        boolean strong, inVtable, deallocatesThis;
        Function deallocator; Address wrapperAddress;
        final Set<String> slotOffsets = new TreeSet<>();
        final List<String> evidence = new ArrayList<>();
        ProposalSeed(Function function, String owner, String kind) {
            this.function = function; this.owner = owner; this.kind = kind;
        }
    }
    private static class Proposal {
        final Address address, wrapperAddress, deallocatorAddress;
        final String expectedName, expectedNameSource, expectedSignature,
            expectedSignatureSource, kind, owner, proposedName, ownerTypePath,
            confidence, reason;
        final boolean inVtable, nameApply, conventionApply, thisTypeApply, returnApply,
            parameterApply;
        final Set<String> slotOffsets;
        Proposal(Function function, String owner, String kind, String proposedName,
                String ownerTypePath, Address wrapperAddress, boolean inVtable,
                Set<String> slotOffsets, Address deallocatorAddress, boolean nameApply,
                boolean conventionApply, boolean thisTypeApply, boolean returnApply,
                boolean parameterApply,
                String confidence,
                String reason) {
            address = function.getEntryPoint(); expectedName = function.getName(true);
            expectedNameSource = function.getSymbol().getSource().toString();
            expectedSignature = function.getSignature().getPrototypeString(true);
            expectedSignatureSource = function.getSignatureSource().toString();
            this.owner = owner; this.kind = kind; this.proposedName = proposedName;
            this.ownerTypePath = ownerTypePath; this.wrapperAddress = wrapperAddress;
            this.inVtable = inVtable; this.slotOffsets = new TreeSet<>(slotOffsets);
            this.deallocatorAddress = deallocatorAddress; this.nameApply = nameApply;
            this.conventionApply = conventionApply; this.thisTypeApply = thisTypeApply;
            this.returnApply = returnApply; this.parameterApply = parameterApply;
            this.confidence = confidence; this.reason = reason;
        }
    }
    private static class LifetimeRow {
        final Address address; final String function, owner;
        final Set<String> slots;
        final boolean deallocatesThis;
        final int thisFieldWrites, zeroedFields, sameThisCalls, fieldCleanupCalls, totalCalls;
        LifetimeRow(Function function, String owner, Set<String> slots, Lifecycle lifecycle) {
            address = function.getEntryPoint(); this.function = function.getName(true);
            this.owner = owner; this.slots = new TreeSet<>(slots);
            deallocatesThis = lifecycle.deallocatesThis;
            thisFieldWrites = lifecycle.thisFieldWrites;
            zeroedFields = lifecycle.zeroedThisOffsets.size();
            sameThisCalls = lifecycle.sameThisCalls.size();
            fieldCleanupCalls = lifecycle.fieldCleanupCalls;
            totalCalls = lifecycle.totalCalls;
        }
    }
    private static class Tsv {
        final List<String> header; final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
}
