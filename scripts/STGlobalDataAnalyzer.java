// Recover conservative types and structural names for generic global data symbols.
// Evidence comes from use as a typed this receiver, as an argument of a trusted prototype,
// or from an exact trusted pointer return stored into the global.
// Read-only: writes global_data_*.tsv/global_data_*.txt.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Global Data

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.ArrayDeque;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
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
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;
import ghidra.program.model.symbol.Symbol;

public class STGlobalDataAnalyzer extends GhidraScript {
    private static final Pattern SYNTHETIC = Pattern.compile(
        "(?i)(?:_?(?:DAT|UNK|PTR)_[0-9a-f]+|[0-9a-f]{6,16})");
    private static final String MARKER = "[STGlobalDataApplier]";
    private final Map<Address, Evidence> evidence = new TreeMap<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        dataTypes = currentProgram.getDataTypeManager();
        collectInitializedStringPointers();
        int functionsSeen = 0, callsSeen = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function function = functions.next();
            if (function.isThunk() || function.isExternal()) continue;
            // Library bodies are excluded from semantic ownership/call-boundary
            // propagation, but an exact machine store of a typed formal pointer
            // into one global remains valid storage-role evidence.  Collect that
            // deliberately narrow fact before applying the library boundary.
            collectPublishedPointerStores(function);
            if (isLibrary(function)) {
                collectLibraryMachinePointerRoles(function);
                continue;
            }
            functionsSeen++;
            collectExactGlobalReturnAlias(function);
            collectCfgThisGlobalStores(function);
            callsSeen += analyze(function);
            collectSehChainGlobals(function);
        }
        addPointerDereferenceEvidence();
        List<Proposal> proposals = makeProposals();
        List<PointerAudit> pointerAudit = pointerAudit(proposals);
        writeTsv(directory.resolve("global_data_proposals.tsv"), proposals);
        writeCallBoundaryAudit(directory.resolve("global_call_boundary_audit.tsv"), proposals);
        writePointerAudit(directory.resolve("global_pointer_audit.tsv"), pointerAudit);
        writePointerSummary(directory.resolve("global_pointer_summary.txt"), pointerAudit);
        writeSummary(directory.resolve("global_data_summary.txt"), proposals,
            functionsSeen, callsSeen);
        println("Global-data analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions: " + functionsSeen + ", calls: " + callsSeen +
            ", proposals: " + proposals.size() + ", type_apply: " +
            proposals.stream().filter(row -> row.typeApply).count() + ", name_apply: " +
            proposals.stream().filter(row -> row.nameApply).count() +
            ", PTR audit: " + pointerAudit.size() + ", zero globals: " +
            pointerAudit.stream().filter(row -> row.classification.equals(
                "zero_initialized_global")).count());
    }

    private int analyze(Function function) {
        Map<String, GlobalValue> registers = new HashMap<>();
        Map<String, TypedValue> typedRegisters = new HashMap<>();
        Map<Integer, TypedValue> typedStack = new HashMap<>();
        String owner = ownerTypePath(function);
        if ("__thiscall".equals(function.getCallingConventionName()) && !owner.isBlank())
            typedRegisters.put("ECX", new TypedValue("pointer:" + owner,
                function.getName(true) + " this", false));
        List<GlobalValue> pushes = new ArrayList<>();
        int calls = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            collectScalarEvidence(function, instruction, mnemonic, operands);
            collectCStringScanEvidence(function, instruction, mnemonic, operands);
            collectPointerDereferenceEvidence(function, instruction, mnemonic,
                operands, registers);
            collectAddressCrossObjectEvidence(function, instruction, mnemonic,
                operands, registers);
            collectBitStringEvidence(function, instruction, mnemonic, operands,
                registers);
            if ("PUSH".equals(mnemonic)) {
                pushes.add(globalValue(instruction, 0, operands.length == 0 ? "" : operands[0],
                    registers, false));
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                Function called = calledFunction(instruction);
                if (called != null) {
                    calls++;
                    collectModuleHandleGlobal(called, instruction);
                    propagateCall(function, called, registers.get("ECX"), pushes,
                        instruction.getAddress());
                }
                registers.remove("EAX"); registers.remove("ECX"); registers.remove("EDX");
                typedRegisters.remove("EAX"); typedRegisters.remove("ECX");
                typedRegisters.remove("EDX");
                String returnType = called == null ? "" : constructorPointer(called);
                boolean constructorResult = !returnType.isBlank();
                if (returnType.isBlank() && called != null && trustedPointerReturn(called))
                    returnType = concretePointer(called.getReturnType());
                if (constructorResult)
                    collectConstructorGlobal(function, called, instruction, returnType);
                if (!returnType.isBlank()) typedRegisters.put("EAX",
                    new TypedValue(returnType, called.getName(true) + " return",
                        constructorResult));
                pushes.clear(); continue;
            }
            if (instruction.getFlowType().isJump() || instruction.getFlowType().isTerminal()) {
                pushes.clear();
                typedRegisters.clear();
            }
            trackTypedStore(function, instruction, mnemonic, operands,
                typedRegisters, typedStack);
            updateRegisters(instruction, mnemonic, operands, registers);
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EBP".equals(cleanRegister(operands[0])) &&
                    "ESP".equals(cleanRegister(operands[1]))) pushes.clear();
        }
        return calls;
    }

    /**
     * A linked-library classification is a semantic/export boundary, not a
     * reason to discard exact storage-role evidence from its machine code.
     * Scan those bodies only for uses of a loaded global word as an actual
     * memory base (or x86 bit-string base).  Do not propagate prototypes,
     * receiver owners, names, or library source context across this boundary.
     *
     * Keeping this deliberately separate from {@link #analyze(Function)} makes
     * the boundary auditable: the only surviving state is address identity of
     * the loaded global, and calls/control-flow kill that state exactly as in
     * the ordinary forward tracker.
     */
    private void collectLibraryMachinePointerRoles(Function function) {
        Map<String, GlobalValue> registers = new HashMap<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
            collectPointerDereferenceEvidence(function, instruction, mnemonic,
                operands, registers);
            collectAddressCrossObjectEvidence(function, instruction, mnemonic,
                operands, registers);
            collectBitStringEvidence(function, instruction, mnemonic,
                operands, registers);
            if (instruction.getFlowType().isCall()) {
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                continue;
            }
            if (instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal())
                registers.clear();
            updateRegisters(instruction, mnemonic, operands, registers);
        }
    }

    /**
     * Recover the storage role of a writable global word from an exact pointer
     * producer.  This is deliberately weaker than a semantic pointee proof: a
     * neutral allocator result, an alloca address, or a LEA-derived address can
     * establish that the word publishes a pointer without identifying the
     * pointed record.  Later exact dereference widths and trusted call
     * boundaries select only a primitive pointee view.
     *
     * Stack pointer facts survive branches because the compiler commonly parks
     * several allocation results in distinct EBP slots and publishes them after
     * a conditional initialization block.  Any exact write of a non-pointer
     * value kills the slot.  Register facts remain ordinary forward facts and
     * are killed by calls or non-transparent writes.
     */
    private void collectPublishedPointerStores(Function function) {
        Map<String, PointerOrigin> registers = new HashMap<>();
        Map<Integer, PointerOrigin> stack = new HashMap<>();
        Set<Address> pointerStackStores = pointerStackStoreSites(function);
        registers.put("ESP", new PointerOrigin("", "stack address"));
        registers.put("EBP", new PointerOrigin("", "stack frame address"));
        if ("__thiscall".equals(function.getCallingConventionName())) {
            String owner = ownerTypePath(function);
            if (!owner.isBlank()) registers.put("ECX",
                new PointerOrigin("pointer:" + owner, "typed this receiver"));
        }
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isStackVariable() ||
                    !(parameter.getDataType() instanceof Pointer)) continue;
            String type = typeSpecification(parameter.getDataType());
            stack.put(parameter.getStackOffset(), new PointerOrigin(type,
                "typed parameter " + parameter.getName()));
        }

        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));

            if ("CALL".equals(mnemonic)) {
                registers.remove("EAX");
                registers.remove("ECX");
                registers.remove("EDX");
                Function called = calledFunction(instruction);
                if (called != null && called.getReturnType() instanceof Pointer) {
                    String type = trustedPointerReturn(called) ?
                        typeSpecification(called.getReturnType()) : "";
                    if (type.equals("pointer:/void") ||
                            type.matches("pointer:/undefined[1248]?")) type = "";
                    registers.put("EAX", new PointerOrigin(type,
                        "pointer return from " + called.getName(true)));
                }
                continue;
            }
            if (operands.length == 0) continue;

            String destination = cleanRegister(operands[0]);
            Integer destinationStack = stackOffset(instruction, 0);
            if ("MOV".equals(mnemonic) && operands.length >= 2) {
                PointerOrigin source = pointerOrigin(instruction, 1, operands[1],
                    registers, stack);
                GlobalValue global = referencedGlobal(instruction, 0, operands[0], false);
                if (global != null && !global.addressOf &&
                        memoryOperandWidth(operands[0], mnemonic) ==
                            currentProgram.getDefaultPointerSize()) {
                    Evidence ev = evidence.computeIfAbsent(global.address,
                        ignored -> new Evidence());
                    ev.directWordStores++;
                    if (source != null) {
                        ev.pointerProducerStores++;
                        if (!source.type.isBlank())
                            ev.pointerProducerTypes.merge(source.type, 1, Integer::sum);
                        ev.pointerProducerSites.add(addr(function.getEntryPoint()) +
                            " publishes " + source.reason + " @ " +
                            addr(instruction.getAddress()));
                    }
                    else if (isZeroImmediate(operands[1])) ev.nullWordStores++;
                    else ev.unknownWordStores++;
                }
                if (destination != null) {
                    if (isFullRegister(operands[0]) && source != null)
                        registers.put(destination, source);
                    else registers.remove(destination);
                }
                else if (destinationStack != null) {
                    if (source != null) stack.put(destinationStack, source);
                    else if (pointerStackStores.contains(instruction.getAddress()))
                        stack.put(destinationStack, new PointerOrigin("",
                            "exact stack definition later dereferenced as pointer"));
                    else stack.remove(destinationStack);
                }
                continue;
            }
            if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
                if (isFullRegister(operands[0]) && operands[1].contains("["))
                    registers.put(destination, new PointerOrigin("", "LEA-derived address"));
                else registers.remove(destination);
                continue;
            }
            if (destination != null && writesRegister(mnemonic, operands) &&
                    !(Set.of("ADD", "SUB", "INC", "DEC").contains(mnemonic) &&
                      registers.containsKey(destination)))
                registers.remove(destination);
            if (destinationStack != null && writesMemory(mnemonic))
                stack.remove(destinationStack);
        }
    }

    /**
     * Recover the head of an x86 SEH registration chain as neutral word
     * pointer storage.  ``FS:[0]`` is a machine ABI anchor, not a semantic
     * Windows structure claim.  Require both the exact segment load/store and
     * an independently observed later dereference of that same global in this
     * function before contributing the two evidence votes needed by the normal
     * global-data policy.
     */
    private void collectSehChainGlobals(Function function) {
        Map<String, Address> segmentHeads = new HashMap<>();
        Set<Address> published = new LinkedHashSet<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(
                instruction.toString().toUpperCase(Locale.ROOT));
            if (instruction.getFlowType().isCall() ||
                    instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal())
                segmentHeads.clear();
            if (!"MOV".equals(mnemonic) || operands.length < 2) continue;
            String destination = cleanRegister(operands[0]);
            if (destination != null && isFullRegister(operands[0])) {
                if (operands[1].replaceAll("\\s+", "")
                        .matches(".*FS:\\[(?:0X)?0+\\].*"))
                    segmentHeads.put(destination, instruction.getAddress());
                else segmentHeads.remove(destination);
                continue;
            }
            GlobalValue global = referencedGlobal(
                instruction, 0, operands[0], false);
            String source = cleanRegister(operands[1]);
            if (global != null && !global.addressOf && source != null &&
                    segmentHeads.containsKey(source) &&
                    (memoryOperandWidth(operands[0], mnemonic) ==
                        currentProgram.getDefaultPointerSize() ||
                     (isFullRegister(operands[1]) &&
                        isPointerSizedDefinedGlobal(global.address))))
                published.add(global.address);
        }
        String owner = addr(function.getEntryPoint());
        for (Address address : published) {
            Evidence ev = evidence.get(address);
            if (ev == null || !ev.pointerDerefFunctions.contains(owner) ||
                    ev.pointerDerefWidths.getOrDefault(4, 0) < 1) continue;
            add(address, "pointer:/undefined4", "", true, false,
                owner + " exact FS:[0] registration-chain publication");
            add(address, "pointer:/undefined4", "", true, false,
                owner + " published FS:[0] value later reused as a dword memory base");
        }
    }

    private boolean isPointerSizedDefinedGlobal(Address address) {
        Data data = currentProgram.getListing().getDefinedDataAt(address);
        return data != null &&
            data.getLength() == currentProgram.getDefaultPointerSize();
    }

    /**
     * Find incoming/local EBP slots whose loaded machine word is subsequently
     * used as the sole unscaled base of a real memory access.  This establishes
     * the pointer role of the slot without assigning a semantic pointee.  The
     * fact is intentionally local to one function and is used only when the
     * exact slot value is later published into a writable global.
     *
     * Register provenance is kept only through full-width MOV copies.  Calls
     * kill volatile registers and control-flow boundaries clear the map, so a
     * textual register reuse in another basic block cannot manufacture a
     * pointer producer.
     */
    private Set<Address> pointerStackStoreSites(Function function) {
        Set<Address> result = new HashSet<>();
        Map<Integer, Address> lastStackStores = new HashMap<>();
        Map<String, StackDefinition> registerDefinitions = new HashMap<>();
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));

            if (!"LEA".equals(mnemonic)) {
                for (String operand : operands) {
                    int open = operand.indexOf('['), close = operand.lastIndexOf(']');
                    if (open < 0 || close <= open) continue;
                    String address = operand.substring(open + 1, close);
                    for (Map.Entry<String, StackDefinition> entry :
                            registerDefinitions.entrySet())
                        if (soleUnscaledBase(address, entry.getKey()))
                            result.add(entry.getValue().storeSite);
                }
            }

            if (instruction.getFlowType().isCall()) {
                registerDefinitions.remove("EAX");
                registerDefinitions.remove("ECX");
                registerDefinitions.remove("EDX");
                continue;
            }
            if (operands.length == 0) {
                if (instruction.getFlowType().isJump() ||
                        instruction.getFlowType().isTerminal()) {
                    registerDefinitions.clear();
                    lastStackStores.clear();
                }
                continue;
            }
            Integer destinationStack = stackOffset(instruction, 0);
            if (destinationStack != null && writesMemory(mnemonic)) {
                if ("MOV".equals(mnemonic)) {
                    lastStackStores.put(destinationStack, instruction.getAddress());
                    if (operands.length >= 2) {
                        String source = cleanRegister(operands[1]);
                        if (source != null && isFullRegister(operands[1]))
                            registerDefinitions.put(source, new StackDefinition(
                                destinationStack, instruction.getAddress()));
                    }
                }
                else lastStackStores.remove(destinationStack);
            }
            String destination = cleanRegister(operands[0]);
            if (destination != null && writesRegister(mnemonic, operands)) {
                StackDefinition origin = null;
                if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                        isFullRegister(operands[0])) {
                    Integer sourceStack = stackOffset(instruction, 1);
                    if (sourceStack != null) {
                        Address store = lastStackStores.get(sourceStack);
                        if (store != null) origin = new StackDefinition(sourceStack, store);
                    }
                    else {
                        String source = cleanRegister(operands[1]);
                        if (source != null && isFullRegister(operands[1]))
                            origin = registerDefinitions.get(source);
                    }
                }
                if (origin == null) registerDefinitions.remove(destination);
                else registerDefinitions.put(destination, origin);
            }
            if (instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) {
                registerDefinitions.clear();
                lastStackStores.clear();
            }
        }
        return result;
    }

    private PointerOrigin pointerOrigin(Instruction instruction, int operandIndex,
            String operand, Map<String, PointerOrigin> registers,
            Map<Integer, PointerOrigin> stack) {
        String register = cleanRegister(operand);
        if (register != null && isFullRegister(operand)) return registers.get(register);
        Integer stackOffset = stackOffset(instruction, operandIndex);
        if (stackOffset != null) return stack.get(stackOffset);
        // On 32-bit Windows, FS:[0] is the head pointer of the current thread's
        // SEH registration chain.  The segment-relative load proves pointer
        // role but not the private record layout, so retain a neutral origin.
        // Require the complete exact operand; other TLS offsets carry arbitrary
        // scalar runtime data and must not inherit this rule.
        String compact = operand.replaceAll("\\s+", "").toUpperCase(Locale.ROOT);
        if (compact.matches("(?:DWORDPTR)?FS:\\[(?:0|0X0+)\\]"))
            return new PointerOrigin("", "x86 FS:[0] exception-chain head");
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex ||
                    !reference.isMemoryReference()) continue;
            Data data = currentProgram.getListing().getDefinedDataAt(reference.getToAddress());
            if (data != null && data.getDataType() instanceof Pointer)
                return new PointerOrigin(typeSpecification(data.getDataType()),
                    "typed global load " + addr(data.getAddress()));
        }
        return null;
    }

    private boolean writesMemory(String mnemonic) {
        return !Set.of("CMP", "TEST", "PUSH", "BT", "JMP", "CALL", "RET", "NOP")
            .contains(mnemonic) && !mnemonic.startsWith("J");
    }

    /**
     * A trusted concrete pointer-returning function may publish its result through
     * one exact global.  Accept that global type only when every RET is reached
     * with either a direct load of the same global in EAX or an exact zero EAX.
     * This covers factory singletons without propagating the neutral allocator's
     * return type into their consumers.
     */
    private void collectExactGlobalReturnAlias(Function function) {
        if (!trustedPointerReturn(function)) return;
        String type = concretePointer(function.getReturnType());
        if (type.isBlank()) return;
        Address global = null;
        int returns = 0, globalReturns = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!instruction.getFlowType().isTerminal() ||
                    !instruction.getMnemonicString().equalsIgnoreCase("RET")) continue;
            returns++;
            ReturnOrigin origin = precedingReturnOrigin(function, instruction);
            if (origin.kind == ReturnOriginKind.UNKNOWN) return;
            if (origin.kind == ReturnOriginKind.ZERO) continue;
            globalReturns++;
            if (global != null && !global.equals(origin.address)) return;
            global = origin.address;
        }
        if (returns == 0 || globalReturns == 0 || global == null) return;
        String site = addr(function.getEntryPoint()) + " trusted " + type +
            " return aliases exact global on " + globalReturns + "/" + returns +
            " non-null/total RET paths";
        add(global, type, "", true, false, site);
        Evidence ev = evidence.get(global);
        ev.typedStores++;
        ev.typedStoreTypes.merge(type, 1, Integer::sum);
        ev.typedStoreSites.add(site);
    }

    private ReturnOrigin precedingReturnOrigin(Function function, Instruction ret) {
        Instruction cursor = ret.getPrevious();
        for (int count = 0; cursor != null && count < 24 &&
                function.getBody().contains(cursor.getAddress()); count++) {
            String mnemonic = cursor.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(cursor.toString().toUpperCase(Locale.ROOT));
            if (cursor.getFlowType().isCall() || cursor.getFlowType().isJump())
                return ReturnOrigin.unknown();
            String destination = operands.length == 0 ? null : cleanRegister(operands[0]);
            if ("EAX".equals(destination) && isFullRegister(operands[0])) {
                if ("MOV".equals(mnemonic) && operands.length >= 2) {
                    GlobalValue value = referencedGlobal(cursor, 1, operands[1], false);
                    if (value != null && !value.addressOf)
                        return ReturnOrigin.global(value.address);
                    if (isZeroImmediate(operands[1])) return ReturnOrigin.zero();
                }
                if (("XOR".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                        operands.length >= 2 && "EAX".equals(cleanRegister(operands[1])))
                    return ReturnOrigin.zero();
                return ReturnOrigin.unknown();
            }
            cursor = cursor.getPrevious();
        }
        return ReturnOrigin.unknown();
    }

    /**
     * Recover exact stores of a named method's unadjusted receiver into a global.
     *
     * The ordinary linear register tracker intentionally drops provenance at a
     * branch.  That is safe for call-site aggregation, but misses VC6 SEH-shaped
     * methods which spill ECX, cross a setjmp/switch, reload it into EBX/ESI/EDI,
     * and publish the object in one case.  This small forward must-analysis keeps
     * a receiver fact only when every predecessor reaching an instruction agrees.
     * Calls kill volatile registers; stack facts use exact Ghidra stack references.
     */
    private void collectCfgThisGlobalStores(Function function) {
        if (!"__thiscall".equals(function.getCallingConventionName())) return;
        String ownerType = ownerTypePath(function);
        if (ownerType.isBlank()) return;
        Instruction entry = currentProgram.getListing().getInstructionAt(
            function.getEntryPoint());
        if (entry == null) return;
        Map<Address, ThisState> incoming = new HashMap<>();
        ArrayDeque<Address> work = new ArrayDeque<>();
        ThisState initial = new ThisState();
        initial.registers.add("ECX");
        incoming.put(entry.getAddress(), initial);
        work.add(entry.getAddress());
        int visits = 0;
        int visitLimit = Math.max(1024,
            (int)Math.min(200000L, function.getBody().getNumAddresses() * 24L));
        while (!work.isEmpty() && visits++ < visitLimit) {
            Address address = work.removeFirst();
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !function.getBody().contains(address)) continue;
            ThisState state = incoming.get(address).copy();
            transferThisState(function, instruction, state, ownerType);
            for (Address successor : instructionSuccessors(function, instruction)) {
                ThisState old = incoming.get(successor);
                if (old == null) {
                    incoming.put(successor, state.copy());
                    work.addLast(successor);
                    continue;
                }
                ThisState merged = old.intersection(state);
                if (!merged.equals(old)) {
                    incoming.put(successor, merged);
                    work.addLast(successor);
                }
            }
        }
    }

    private void transferThisState(Function function, Instruction instruction,
            ThisState state, String ownerType) {
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        String[] operands = splitOperands(instruction.toString().toUpperCase(Locale.ROOT));
        if (operands.length == 0) {
            if (instruction.getFlowType().isCall()) state.killVolatile();
            return;
        }
        String destination = cleanRegister(operands[0]);
        Integer destinationStack = stackOffset(instruction, 0);
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            String source = cleanRegister(operands[1]);
            Integer sourceStack = stackOffset(instruction, 1);
            boolean carriesThis =
                (source != null && isFullRegister(operands[1]) &&
                    state.registers.contains(source)) ||
                (sourceStack != null && state.stack.contains(sourceStack));
            if (destination != null) {
                if (isFullRegister(operands[0]) && carriesThis)
                    state.registers.add(destination);
                else state.registers.remove(destination);
                return;
            }
            if (destinationStack != null) {
                if (carriesThis) state.stack.add(destinationStack);
                else state.stack.remove(destinationStack);
                return;
            }
            if (carriesThis) {
                GlobalValue target = referencedGlobal(instruction, 0, operands[0], false);
                if (target != null && !target.addressOf) {
                    String type = "pointer:" + ownerType;
                    String site = addr(function.getEntryPoint()) + " exact CFG this store @ " +
                        addr(instruction.getAddress());
                    add(target.address, type, "", true, false, site);
                    Evidence ev = evidence.get(target.address);
                    ev.typedStores++;
                    ev.typedStoreTypes.merge(type, 1, Integer::sum);
                    ev.typedStoreSites.add(site);
                }
            }
            return;
        }
        if (instruction.getFlowType().isCall()) {
            state.killVolatile();
            return;
        }
        if (destinationStack != null) state.stack.remove(destinationStack);
        if (destination != null && writesRegister(mnemonic, operands))
            state.registers.remove(destination);
    }

    private List<Address> instructionSuccessors(Function function,
            Instruction instruction) {
        List<Address> result = new ArrayList<>();
        if (instruction.getFlowType().isTerminal()) return result;
        if (instruction.getFlowType().isJump()) {
            for (Address flow : instruction.getFlows())
                if (function.getBody().contains(flow) && !result.contains(flow))
                    result.add(flow);
        }
        Address fallthrough = instruction.getFallThrough();
        if (fallthrough != null && function.getBody().contains(fallthrough) &&
                !result.contains(fallthrough)) result.add(fallthrough);
        return result;
    }

    /**
     * A word loaded from one exact global and then used as the base of repeated
     * memory accesses is a pointer value, irrespective of whether the
     * pointed record has a semantic name yet.  Keep this as a neutral
     * primitive pointer: the proof establishes indirection, not a class
     * identity.  The loaded global must be the sole unscaled base register;
     * scaled indexes and two-register sums are not pointer evidence.
     */
    private void collectPointerDereferenceEvidence(Function function,
            Instruction instruction, String mnemonic, String[] operands,
            Map<String, GlobalValue> registers) {
        // LEA proves arithmetic only.  A scalar count multiplied or offset in
        // an address expression must not become a pointer until a later
        // instruction actually dereferences the derived address.
        if ("LEA".equals(mnemonic)) return;
        for (int operandIndex = 0; operandIndex < operands.length; operandIndex++) {
            String operand = operands[operandIndex];
            String upper = operand.toUpperCase(Locale.ROOT);
            int open = upper.indexOf('['), close = upper.lastIndexOf(']');
            if (open < 0 || close <= open) continue;
            String address = upper.substring(open + 1, close);
            for (Map.Entry<String, GlobalValue> entry : registers.entrySet()) {
                GlobalValue value = entry.getValue();
                if (value == null || value.addressOf ||
                        !soleUnscaledBase(address, entry.getKey())) continue;
                Evidence ev = evidence.computeIfAbsent(value.address,
                    ignored -> new Evidence());
                ev.pointerDereferences++;
                ev.pointerDerefFunctions.add(addr(function.getEntryPoint()));
                int width = memoryOperandWidth(upper, mnemonic);
                if (width > 0) ev.pointerDerefWidths.merge(width, 1, Integer::sum);
                boolean compatible = dwordPointerGeometry(address, entry.getKey());
                if (!compatible) ev.pointerDerefWordCompatible = false;
                ev.pointerDerefSites.add(addr(function.getEntryPoint()) + " " +
                    instruction.toString() + " @ " + addr(instruction.getAddress()));
            }
        }
    }

    /**
     * An address-of global which is subsequently used with a non-zero displacement
     * or an index is an anchor into adjacent storage, not evidence that the one
     * labelled word has the observed pointee width.  This distinction matters for
     * old C-style global arrays whose first few cells each acquired their own DAT_/PTR_
     * symbol: treating the anchor cell as undefinedN * makes Ghidra render artificial
     * undefinedN ** locals and pointer arithmetic across unrelated data labels.
     */
    private void collectAddressCrossObjectEvidence(Function function,
            Instruction instruction, String mnemonic, String[] operands,
            Map<String, GlobalValue> registers) {
        if ("LEA".equals(mnemonic)) return;
        for (String operand : operands) {
            String upper = operand.toUpperCase(Locale.ROOT);
            int open = upper.indexOf('['), close = upper.lastIndexOf(']');
            if (open < 0 || close <= open) continue;
            String address = upper.substring(open + 1, close);
            for (Map.Entry<String, GlobalValue> entry : registers.entrySet()) {
                GlobalValue value = entry.getValue();
                if (value == null || !value.addressOf ||
                        !soleUnscaledBase(address, entry.getKey()) ||
                        exactZeroOffset(address, entry.getKey())) continue;
                Evidence ev = evidence.computeIfAbsent(value.address,
                    ignored -> new Evidence());
                ev.addressCrossObjectSites.add(addr(function.getEntryPoint()) + " " +
                    instruction.toString() + " @ " + addr(instruction.getAddress()));
                ev.addressCrossObjectFunctions.add(addr(function.getEntryPoint()));
            }
        }
    }

    private boolean exactZeroOffset(String address, String baseRegister) {
        String remainder = address.replaceAll(
            "(?i)\\b" + Pattern.quote(baseRegister) + "\\b", "")
            .replaceAll("\\s+", "");
        return remainder.isEmpty() || remainder.matches("[+-]?(?:0|0X0+)");
    }

    private int memoryOperandWidth(String operand, String mnemonic) {
        if (operand.contains("BYTE PTR")) return 1;
        if (operand.contains("QWORD PTR")) return 8;
        if (operand.contains("DWORD PTR")) return 4;
        if (operand.contains("WORD PTR")) return 2;
        if (mnemonic.endsWith("B")) return 1;
        if (mnemonic.endsWith("W")) return 2;
        if (mnemonic.endsWith("D")) return 4;
        return 0;
    }

    private boolean soleUnscaledBase(String address, String baseRegister) {
        Matcher registers = Pattern.compile(
            "(?i)\\b(?:EAX|EBX|ECX|EDX|ESI|EDI|EBP|ESP)\\b")
            .matcher(address);
        String unscaled = null;
        int unscaledCount = 0;
        while (registers.find()) {
            int cursor = registers.end();
            while (cursor < address.length() &&
                    Character.isWhitespace(address.charAt(cursor))) cursor++;
            if (cursor < address.length() && address.charAt(cursor) == '*') {
                if (baseRegister.equals(canonicalRegister(registers.group())))
                    return false;
                continue;
            }
            unscaled = canonicalRegister(registers.group());
            unscaledCount++;
        }
        return unscaledCount == 1 && baseRegister.equals(unscaled);
    }

    private boolean dwordPointerGeometry(String address, String baseRegister) {
        String remainder = address.replaceAll(
            "(?i)\\b" + Pattern.quote(baseRegister) + "\\b", "");
        Matcher numbers = Pattern.compile("(?i)(?:0X[0-9A-F]+|[0-9]+)")
            .matcher(remainder);
        while (numbers.find()) {
            String text = numbers.group();
            long value;
            try {
                value = text.regionMatches(true, 0, "0X", 0, 2) ?
                    Long.parseUnsignedLong(text.substring(2), 16) :
                    Long.parseLong(text);
            }
            catch (NumberFormatException exception) {
                return false;
            }
            if ((value & 3) != 0) return false;
        }
        return true;
    }

    private void addPointerDereferenceEvidence() {
        List<Map.Entry<Address, Evidence>> entries =
            new ArrayList<>(evidence.entrySet());
        for (Map.Entry<Address, Evidence> entry : entries) {
            Evidence ev = entry.getValue();
            if (ev.pointerDerefSites.size() < 3 ||
                    ev.pointerDerefFunctions.size() < 2) continue;
            String type = unique(ev.callBoundaryTypes);
            // Indirection proves pointer-ness but not a pointee width. Prefer an
            // independent exact primitive-pointer call boundary when available;
            // otherwise install only a neutral pointer role which later concrete
            // evidence may replace.
            if (fourBytePrimitivePointer(type)) {
                for (String site : ev.pointerDerefSites)
                    add(entry.getKey(), type, "", false, false,
                        "repeated aligned DWORD dereference of exact global value; " + site);
            }
            else if (ev.bitStringSites.isEmpty()) {
                // Repeated use of the loaded machine word as a memory base proves
                // pointer-ness, but neither its access width nor displacement proves
                // a pointee.  Keep the result deliberately neutral so later exact
                // call-boundary, constructor, record, or bit-string evidence wins.
                for (String site : ev.pointerDerefSites)
                    add(entry.getKey(), "pointer:/void", "", false, false,
                        "repeated exact global value dereference proves neutral pointer; " +
                        site);
            }
        }
        for (Map.Entry<Address, Evidence> entry : entries) {
            Evidence ev = entry.getValue();
            if (ev.untypedReceiverSites.size() < 3 ||
                    ev.untypedReceiverFunctions.size() < 2 ||
                    ev.untypedReceiverCallees.size() < 2) continue;
            for (String site : ev.untypedReceiverSites)
                add(entry.getKey(), "pointer:/void", "", false, false,
                    "exact global value used as receiver of independent __thiscall targets; " +
                    site);
        }
        for (Map.Entry<Address, Evidence> entry : entries) {
            Evidence ev = entry.getValue();
            if (ev.bitStringSites.size() < 3 || ev.bitStringFunctions.size() < 2)
                continue;
            // BT/BTS/BTR/BTC with the exact global value as the memory base is
            // direct machine evidence for a runtime bit string.  The x86
            // instruction addresses bits across successive bytes even though
            // the physical access unit may be a dword, so byte * is the only
            // neutral C storage view which preserves the indexing contract.
            for (String site : ev.bitStringSites)
                add(entry.getKey(), "pointer:/byte", "bitset", false, false,
                    "exact x86 bit-string memory base; " + site);
        }
    }

    /**
     * Recover a runtime bit-string global from the instruction which consumes
     * it, rather than from a guessed allocation type.  Register provenance is
     * already killed by arithmetic and calls in updateRegisters(), so the
     * surviving value here is an exact MOV of one global pointer (possibly
     * copied through full registers) into the sole memory-base register.
     */
    private void collectBitStringEvidence(Function function,
            Instruction instruction, String mnemonic, String[] operands,
            Map<String, GlobalValue> registers) {
        if (!Set.of("BT", "BTS", "BTR", "BTC").contains(mnemonic) ||
                operands.length < 2) return;
        String memory = operands[0].toUpperCase(Locale.ROOT);
        int open = memory.indexOf('['), close = memory.lastIndexOf(']');
        if (open < 0 || close <= open) return;
        String address = memory.substring(open + 1, close);
        for (Map.Entry<String, GlobalValue> entry : registers.entrySet()) {
            GlobalValue value = entry.getValue();
            if (value == null || value.addressOf ||
                    !soleUnscaledBase(address, entry.getKey())) continue;
            Evidence ev = evidence.computeIfAbsent(value.address,
                ignored -> new Evidence());
            String functionAddress = addr(function.getEntryPoint());
            ev.bitStringFunctions.add(functionAddress);
            ev.bitStringSites.add(functionAddress + " " + instruction.toString() +
                " @ " + addr(instruction.getAddress()));
        }
    }

    private boolean fourBytePrimitivePointer(String specification) {
        if (specification == null || !specification.startsWith("pointer:"))
            return false;
        DataType type = dataTypes.getDataType(
            specification.substring("pointer:".length()));
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type != null && type.getLength() == 4 &&
            (type instanceof AbstractIntegerDataType || Undefined.isUndefined(type));
    }

    private void collectModuleHandleGlobal(Function called, Instruction call) {
        if (called == null || !"GetModuleHandleA".equalsIgnoreCase(called.getName())) return;
        String module = previousPushedString(call);
        Address global = forwardEaxGlobalStore(call);
        String name = moduleGlobalName(module);
        if (global == null || name.isBlank()) return;
        Evidence ev = evidence.computeIfAbsent(global, ignored -> new Evidence());
        ev.names.merge(name, 1, Integer::sum);
        ev.strongNames.add(name);
        ev.sites.add(addr(call.getAddress()) + " GetModuleHandleA(" + module +
            ") result stored in global " + addr(global));
    }

    private String previousPushedString(Instruction call) {
        Instruction previous = call.getPrevious();
        for (int count = 0; previous != null && count < 8;
                count++, previous = previous.getPrevious()) {
            if ("CALL".equalsIgnoreCase(previous.getMnemonicString())) break;
            if (!"PUSH".equalsIgnoreCase(previous.getMnemonicString())) continue;
            for (Reference reference : previous.getReferencesFrom()) {
                Data data = currentProgram.getListing().getDefinedDataAt(reference.getToAddress());
                if (data != null && data.hasStringValue() && data.getValue() != null)
                    return data.getValue().toString();
            }
        }
        return "";
    }

    /**
     * MSVC's scalar-new ternary commonly has the shape
     *
     *   call Constructor
     *   jmp join
     * null:
     *   xor eax,eax
     * join:
     *   mov [global],eax
     *
     * A linear register tracker drops EAX at the JMP and misses the strongest
     * possible type evidence.  Follow only the constructor-return edge through
     * unconditional jumps; never choose a conditional successor.
     */
    private void collectConstructorGlobal(Function containing, Function constructor,
            Instruction call, String returnType) {
        Address global = forwardEaxGlobalStore(call);
        if (global == null) return;
        String site = addr(containing.getEntryPoint()) + " stores direct result of " +
            constructor.getName(true) + " @ " + addr(call.getAddress()) +
            " in global " + addr(global);
        add(global, returnType, "", true, false, site);
        Evidence ev = evidence.get(global);
        ev.typedStores++;
        ev.constructorStores.merge(returnType, 1, Integer::sum);
    }

    private Address forwardEaxGlobalStore(Instruction call) {
        Instruction next = call.getNext();
        Set<Address> seen = new HashSet<>();
        for (int count = 0; next != null && count < 24 &&
                seen.add(next.getAddress()); count++) {
            String mnemonic = next.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(next.toString().toUpperCase(Locale.ROOT));
            if ("CALL".equals(mnemonic)) return null;
            if ("MOV".equals(mnemonic) && operands.length >= 2 &&
                    "EAX".equals(cleanRegister(operands[1]))) {
                GlobalValue target = referencedGlobal(next, 0, operands[0], false);
                if (target != null && !target.addressOf) return target.address;
            }
            String destination = operands.length == 0 ? null : cleanRegister(operands[0]);
            if (destination != null && "EAX".equals(destination) &&
                    isFullRegister(operands[0]) &&
                    !Set.of("CMP", "TEST", "PUSH", "JMP", "RET").contains(mnemonic))
                return null;
            if ("JMP".equals(mnemonic)) {
                Address[] flows = next.getFlows();
                if (flows.length != 1) return null;
                next = currentProgram.getListing().getInstructionAt(flows[0]);
                continue;
            }
            if (next.getFlowType().isJump() || next.getFlowType().isTerminal())
                return null;
            next = next.getNext();
        }
        return null;
    }

    private String moduleGlobalName(String module) {
        if (module == null || module.isBlank()) return "";
        String base = module.replace('\\', '/');
        int slash = base.lastIndexOf('/');
        if (slash >= 0) base = base.substring(slash + 1);
        base = base.replaceFirst("(?i)\\.dll$", "");
        String[] parts = base.split("[^A-Za-z0-9]+");
        StringBuilder result = new StringBuilder();
        for (String part : parts) {
            if (part.isBlank()) continue;
            if (result.length() == 0) result.append(part.toLowerCase(Locale.ROOT));
            else result.append(Character.toUpperCase(part.charAt(0)))
                .append(part.substring(1).toLowerCase(Locale.ROOT));
        }
        return result.isEmpty() ? "" : result + "Module";
    }

    private void trackTypedStore(Function containing, Instruction instruction,
            String mnemonic, String[] operands, Map<String, TypedValue> registers,
            Map<Integer, TypedValue> stack) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            String source = cleanRegister(operands[1]);
            TypedValue value = source == null ? null : registers.get(source);
            Integer sourceStack = stackOffset(instruction, 1);
            if (value == null && sourceStack != null) value = stack.get(sourceStack);
            if (destination != null) {
                if (isFullRegister(operands[0]) && value != null)
                    registers.put(destination, value);
                else registers.remove(destination);
                return;
            }
            Integer destinationStack = stackOffset(instruction, 0);
            if (destinationStack != null) {
                if (value == null) stack.remove(destinationStack);
                else stack.put(destinationStack, value);
                return;
            }
            if (value == null) return;
            GlobalValue global = referencedGlobal(instruction, 0, operands[0], false);
            if (global == null || global.addressOf) return;
            String site = addr(containing.getEntryPoint()) + " stores named pointer from " +
                value.producer + " @ " + addr(instruction.getAddress());
            add(global.address, value.type, "", true, false, site);
            Evidence ev = evidence.get(global.address);
            ev.typedStores++;
            ev.typedStoreTypes.merge(value.type, 1, Integer::sum);
            ev.typedStoreSites.add(site);
            if (value.constructorResult)
                ev.constructorStores.merge(
                    value.type, 1, Integer::sum);
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private Integer stackOffset(Instruction instruction, int operandIndex) {
        for (Reference reference : instruction.getReferencesFrom())
            if (reference.getOperandIndex() == operandIndex &&
                    reference instanceof StackReference stack)
                return stack.getStackOffset();
        return null;
    }

    private String concretePointer(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return "";
        type = pointer.getDataType();
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        if (type == null || Undefined.isUndefined(type) ||
                "/void".equals(type.getPathName())) return "";
        if (type instanceof Structure structure &&
                (structure.getName().startsWith("Anon") ||
                 structure.getPathName().contains("/Recovered/PointerShapes/") ||
                 structure.getPathName().contains("/Recovered/ClassPointees/") ||
                 structure.getPathName().contains("/Recovered/HiddenThis/"))) return "";
        return "pointer:" + type.getPathName();
    }

    /**
     * A direct return store is an anchor only when the callee boundary has independent
     * provenance.  A DEFAULT pointer spelling on an ordinary internal function is often
     * exactly the weak inference this pass is meant to audit and must not validate itself.
     */
    private boolean trustedPointerReturn(Function function) {
        if (function == null || concretePointer(function.getReturnType()).isBlank()) return false;
        Parameter returned = function.getReturn();
        if (returned != null && (returned.getSource() == SourceType.USER_DEFINED ||
                returned.getSource() == SourceType.IMPORTED)) return true;
        for (FunctionTag tag : function.getTags())
            if (Set.of("RECOVERED_PROTOTYPE", "RECOVERED_UTILITY_SEMANTICS",
                    "RECOVERED_CONSTRUCTOR", "RECOVERED_OBJECT_FACTORY")
                    .contains(tag.getName())) return true;
        return false;
    }

    private String constructorPointer(Function function) {
        if (!(function.getParentNamespace() instanceof GhidraClass owner) ||
                !function.getName().equals(owner.getName())) return "";
        String path = ownerTypePath(function);
        return path.isBlank() ? "" : "pointer:" + path;
    }

    private void propagateCall(Function containing, Function called, GlobalValue receiver,
            List<GlobalValue> pushes, Address site) {
        // Address-taking is a possible write/escape even when the current callee
        // prototype is too weak to contribute a type vote.  Record it before the
        // arity/trust filters so a closed-store proof cannot silently ignore one
        // untyped T ** consumer.
        for (GlobalValue value : pushes) {
            if (value == null || !value.addressOf) continue;
            Evidence ev = evidence.computeIfAbsent(value.address,
                ignored -> new Evidence());
            ev.rawAddressCallSites.add(addr(containing.getEntryPoint()) + " -> " +
                addr(called.getEntryPoint()) + " address-of global @ " + addr(site));
            if ("FreeAndNull".equals(called.getName()) &&
                    hasTag(called, "RECOVERED_UTILITY_SEMANTICS"))
                ev.safeNullingAddressSites.add(addr(containing.getEntryPoint()) + " -> " +
                    addr(called.getEntryPoint()) + " FreeAndNull @ " + addr(site));
        }
        String ownerType = ownerTypePath(called);
        if ("__thiscall".equals(called.getCallingConventionName()) && receiver != null) {
            recordLibraryContext(receiver, called);
            if (!ownerType.isBlank()) {
                String type = receiver.addressOf ? ownerType : "pointer:" + ownerType;
                add(receiver.address, type, "",
                    true, receiver.addressOf,
                    addr(containing.getEntryPoint()) + " used as this of " +
                    called.getName(true) + " @ " + addr(site));
            }
            else if (!receiver.addressOf) {
                Evidence ev = evidence.computeIfAbsent(receiver.address,
                    ignored -> new Evidence());
                ev.untypedReceiverFunctions.add(addr(containing.getEntryPoint()));
                ev.untypedReceiverCallees.add(addr(called.getEntryPoint()));
                ev.untypedReceiverSites.add(addr(containing.getEntryPoint()) + " -> " +
                    addr(called.getEntryPoint()) + " exact global ECX receiver @ " +
                    addr(site));
            }
        }
        List<Parameter> parameters = explicitParameters(called);
        if (parameters.size() != pushes.size() &&
                !(called.hasVarArgs() && pushes.size() >= parameters.size())) return;
        for (int index = 0; index < parameters.size(); index++) {
            GlobalValue value = pushes.get(pushes.size() - 1 - index);
            if (value == null) continue;
            if (index == 0) recordLibraryContext(value, called);
            Parameter parameter = parameters.get(index);
            if (!trusted(parameter)) continue;
            String type = meaningfulType(parameter.getDataType());
            if (type.isBlank()) continue;
            boolean addressEvidence = value.addressOf;
            if (addressEvidence) {
                if (!type.startsWith("pointer:")) continue;
                type = type.substring("pointer:".length());
            }
            String name = meaningfulName(parameter.getName()) ? parameter.getName() : "";
            add(value.address, type, name, parameter.getSource() == SourceType.USER_DEFINED ||
                parameter.getSource() == SourceType.IMPORTED, addressEvidence,
                addr(containing.getEntryPoint()) + " passed to " + called.getName(true) +
                " parameter " + parameter.getName() + " @ " + addr(site));
            Evidence ev = evidence.get(value.address);
            ev.callBoundaryTypes.merge(type, 1, Integer::sum);
            ev.callBoundarySites.add(addr(containing.getEntryPoint()) + " -> " +
                addr(called.getEntryPoint()) + " parameter " + parameter.getOrdinal() +
                " as " + type + " @ " + addr(site) +
                (addressEvidence ? " (address-of global)" : " (global value)"));
            if (!addressEvidence) {
                ev.callBoundaryValueTypes.merge(type, 1, Integer::sum);
                ev.callBoundaryValueFunctions.add(addr(containing.getEntryPoint()));
                ev.callBoundaryValueSites.add(addr(containing.getEntryPoint()) + " -> " +
                    addr(called.getEntryPoint()) + " parameter " +
                    parameter.getOrdinal() + " as " + type + " @ " + addr(site));
            }
        }
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags())
            if (name.equals(tag.getName())) return true;
        return false;
    }

    private void recordLibraryContext(GlobalValue value, Function called) {
        if (value == null || value.addressOf || called == null) return;
        String qualified = called.getName(true);
        if (!qualified.startsWith("Library::")) return;
        int separator = qualified.lastIndexOf("::");
        if (separator <= "Library::".length()) return;
        String owner = qualified.substring(0, separator);
        int leaf = owner.lastIndexOf("::");
        String family = leaf < 0 ? owner : owner.substring(leaf + 2);
        family = family.replaceAll("[^A-Za-z0-9_]", "");
        if (family.isBlank()) return;
        Evidence ev = evidence.computeIfAbsent(value.address, ignored -> new Evidence());
        // The quorum is intentionally over library-context calls only.  Counting
        // ordinary wrapper/helper calls here used to dilute a perfectly coherent
        // DDX/SND/etc. context merely because the same singleton flowed through
        // several internal adapters before reaching the library boundary.
        ev.libraryContextCalls++;
        ev.libraryContexts.merge(family, 1, Integer::sum);
    }

    private void collectScalarEvidence(Function function, Instruction instruction,
            String mnemonic, String[] operands) {
        if (!("MOVZX".equals(mnemonic) || "MOVSX".equals(mnemonic) ||
                "MOVSXD".equals(mnemonic) || mnemonic.startsWith("F"))) return;
        for (int index = 0; index < operands.length; index++) {
            GlobalValue value = referencedGlobal(instruction, index, operands[index], false);
            if (value == null || value.addressOf) continue;
            int width = accessWidth(operands[index]);
            String type = "";
            if ("MOVZX".equals(mnemonic)) type = unsignedType(width);
            else if ("MOVSX".equals(mnemonic) || "MOVSXD".equals(mnemonic))
                type = signedType(width);
            else if (Set.of("FLD", "FST", "FSTP", "FADD", "FSUB", "FSUBR", "FMUL",
                    "FDIV", "FDIVR", "FCOM", "FCOMP").contains(mnemonic))
                type = width == 4 ? "/float" : width == 8 ? "/double" : "";
            if (!type.isBlank()) add(value.address, type, "", false, false,
                addr(function.getEntryPoint()) + " " + mnemonic + " @ " +
                addr(instruction.getAddress()));
        }
    }

    /**
     * MSVC's inlined strlen/copy sequence loads an exact source address into
     * EDI and searches for NUL with REPNE SCASB.  This proves that the addressed
     * image byte begins C character storage even when Ghidra has split a compact
     * string table into anonymous one-byte Data objects.  Stop at any EDI
     * overwrite or control-flow boundary; a mere printable initializer is not
     * enough evidence.
     */
    private void collectCStringScanEvidence(Function function, Instruction instruction,
            String mnemonic, String[] operands) {
        if (!"MOV".equals(mnemonic) || operands.length < 2 ||
                !"EDI".equals(cleanRegister(operands[0])) ||
                !isFullRegister(operands[0])) return;
        GlobalValue source = referencedGlobal(instruction, 1, operands[1], true);
        if (source == null) return;
        Address scan = provenCStringScan(function, instruction);
        if (scan == null) return;
        String site = addr(function.getEntryPoint()) +
            " exact CFG EDI NUL scan from global " + addr(source.address) +
            " @ " + addr(instruction.getAddress()) + " -> " + addr(scan);
        add(source.address, "/char", "", true, true, site);
        evidence.get(source.address).cstringScans++;
    }

    /**
     * Follow all machine CFG successors from one exact EDI load.  Every path
     * must reach SCASB with AL proven zero before EDI is overwritten.  This is
     * deliberately stricter than a linear mnemonic window, but it also handles
     * the common MSVC switch shape in which every case loads a different string
     * address and jumps to one shared inlined strlen tail.
     */
    private Address provenCStringScan(Function function, Instruction origin) {
        Address first = origin.getFallThrough();
        if (first == null || !function.getBody().contains(first)) return null;
        ArrayDeque<CStringState> pending = new ArrayDeque<>();
        Set<String> visited = new HashSet<>();
        pending.add(new CStringState(first, false));
        Address firstScan = null;
        int instructionsSeen = 0;
        while (!pending.isEmpty()) {
            CStringState state = pending.removeFirst();
            String key = addr(state.address) + ":" + state.lowAccumulatorZero;
            if (!visited.add(key)) continue;
            if (++instructionsSeen > 256) return null;
            Instruction current = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (current == null || !function.getBody().contains(current.getAddress()))
                return null;
            String currentMnemonic = current.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            if (currentMnemonic.contains("SCASB")) {
                if (!state.lowAccumulatorZero) return null;
                if (firstScan == null) firstScan = current.getAddress();
                continue;
            }
            if ("CALL".equals(currentMnemonic) || current.getFlowType().isTerminal())
                return null;
            String[] currentOperands = splitOperands(
                current.toString().toUpperCase(Locale.ROOT));
            if (overwritesEdi(currentMnemonic, currentOperands)) return null;
            boolean lowZero = updateLowAccumulatorZero(currentMnemonic,
                currentOperands, state.lowAccumulatorZero);
            List<Address> successors = new ArrayList<>();
            for (Address flow : current.getFlows()) successors.add(flow);
            Address fallThrough = current.getFallThrough();
            if (fallThrough != null && !successors.contains(fallThrough))
                successors.add(fallThrough);
            if (successors.isEmpty()) return null;
            for (Address successor : successors) {
                if (!function.getBody().contains(successor)) return null;
                // A pre-scan loop has a path which need not reach the scan.
                // Reject it rather than interpreting a visited-set cutoff as
                // proof of termination.
                if (successor.compareTo(current.getAddress()) <= 0) return null;
                pending.addLast(new CStringState(successor, lowZero));
            }
        }
        return firstScan;
    }

    private boolean overwritesEdi(String mnemonic, String[] operands) {
        if (mnemonic.contains("MOVS") || mnemonic.contains("STOS") ||
                mnemonic.contains("CMPS")) return true;
        if (operands.length == 0) return "POP".equals(mnemonic);
        String destination = cleanRegister(operands[0]);
        if (destination == null || !"EDI".equals(canonicalRegister(destination)))
            return false;
        return !Set.of("CMP", "TEST", "PUSH").contains(mnemonic);
    }

    private boolean updateLowAccumulatorZero(String mnemonic, String[] operands,
            boolean previous) {
        if (operands.length == 0) return previous;
        String destination = operands[0].trim().toUpperCase(Locale.ROOT);
        if ("AH".equals(destination)) return previous;
        if (!("EAX".equals(destination) || "AX".equals(destination) ||
                "AL".equals(destination))) return previous;
        if (("XOR".equals(mnemonic) || "SUB".equals(mnemonic)) &&
                operands.length >= 2 &&
                destination.equals(operands[1].trim().toUpperCase(Locale.ROOT))) return true;
        if (("MOV".equals(mnemonic) || "AND".equals(mnemonic)) &&
                operands.length >= 2 && isZeroImmediate(operands[1])) return true;
        return Set.of("CMP", "TEST", "PUSH").contains(mnemonic) ? previous : false;
    }

    private boolean isZeroImmediate(String operand) {
        String value = operand.trim().replaceAll("(?i)^(?:BYTE|WORD|DWORD)\\s+PTR\\s+", "");
        return value.matches("(?i)(?:0|0X0+|0+H)");
    }

    private void add(Address address, String type, String name, boolean strong,
            boolean addressEvidence, String site) {
        if (address == null || type == null || type.isBlank()) return;
        Evidence value = evidence.computeIfAbsent(address, ignored -> new Evidence());
        value.types.merge(type, 1, Integer::sum);
        name = cleanName(name);
        if (!name.isBlank()) value.names.merge(name, 1, Integer::sum);
        if (strong) value.strongCount++;
        if (addressEvidence) value.addressEvidence++;
        value.sites.add(site);
    }

    /**
     * Ghidra's bare Pointer data type loses the initialized pointee identity even
     * when the image word points exactly at defined string data.  This is not a
     * callsite vote: the relocation value and target Data object are a complete,
     * address-independent proof that the global stores char *.  Keeping it as
     * bare /pointer later renders it as uintptr_t and poisons every string call
     * boundary which consumes it.
     */
    private void collectInitializedStringPointers() throws Exception {
        DataIterator iterator = currentProgram.getListing().getDefinedData(true);
        while (iterator.hasNext()) {
            monitor.checkCancelled();
            Data data = iterator.next();
            if (data.getLength() != currentProgram.getDefaultPointerSize() ||
                    !initializedStringPointerCandidate(data.getDataType())) continue;
            long raw;
            try {
                raw = currentProgram.getDefaultPointerSize() == 4 ?
                    Integer.toUnsignedLong(currentProgram.getMemory()
                        .getInt(data.getAddress())) :
                    currentProgram.getMemory().getLong(data.getAddress());
            }
            catch (Exception ignored) {
                continue;
            }
            Address target = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(raw);
            Data string = target == null ? null :
                currentProgram.getListing().getDefinedDataAt(target);
            if (string == null || !string.hasStringValue()) continue;
            Evidence value = evidence.computeIfAbsent(data.getAddress(),
                ignored -> new Evidence());
            value.initializedStringPointers++;
            Symbol targetSymbol = currentProgram.getSymbolTable().getPrimarySymbol(target);
            String pointerName = stringPointerName(targetSymbol, data.getAddress());
            if (!pointerName.isBlank()) value.initializedStringNames.add(pointerName);
            add(data.getAddress(), "pointer:/char", "", true, false,
                addr(data.getAddress()) + " contains exact pointer to string data " +
                    addr(target));
        }
    }

    private boolean genericBarePointer(DataType type) {
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = pointer.getDataType();
        return pointed == null || Undefined.isUndefined(pointed) ||
            "/void".equals(pointed.getPathName());
    }

    private boolean initializedStringPointerCandidate(DataType type) {
        if (genericBarePointer(type)) return true;
        if (!(type instanceof Pointer pointer) || pointer.getDataType() == null) return false;
        return "/char".equals(pointer.getDataType().getPathName());
    }

    private String stringPointerName(Symbol target, Address pointerAddress) {
        if (target == null || !target.getName().startsWith("s_")) return "";
        String stem = target.getName().replaceFirst("(?i)_[0-9a-f]{8}$", "");
        return "PTR_" + stem + "_" + addr(pointerAddress).toLowerCase(Locale.ROOT);
    }

    private List<Proposal> makeProposals() {
        List<Proposal> result = new ArrayList<>();
        for (Map.Entry<Address, Evidence> entry : evidence.entrySet()) {
            Address address = entry.getKey(); Evidence ev = entry.getValue();
            Data data = currentProgram.getListing().getDefinedDataAt(address);
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
            if (data == null || symbol == null || data.hasStringValue()) continue;
            String currentName = symbol.getName();
            boolean scriptOwned = isOwned(address);
            boolean synthetic = SYNTHETIC.matcher(currentName).matches() || scriptOwned ||
                currentName.matches("(?i)g_[A-Za-z0-9_]+_[0-9a-f]{8}");
            // Ghidra gives exact initialized string pointers useful PTR_s_* names
            // while leaving their datatype as bare /pointer. Preserve the name,
            // but do not exclude the independently proven type upgrade merely
            // because that name is already semantic.
            if (!synthetic && ev.initializedStringPointers == 0) continue;
            String constructorType = unique(ev.constructorStores);
            String typedStoreType = unique(ev.typedStoreTypes);
            String narrowCharType = ev.cstringScans > 0 && narrowScalarTypesOnly(ev.types) ?
                "/char" : dominantNarrowCharType(ev.types);
            String proposedType = !constructorType.isBlank() ? constructorType :
                !typedStoreType.isBlank() ? typedStoreType :
                !narrowCharType.isBlank() ? narrowCharType : unique(ev.types);
            String currentType = typeSpecification(data.getDataType());
            ContextVote context = dominantLibraryContext(ev);
            boolean contextualAnonymous = context != null &&
                currentType.startsWith("pointer:") && anonymousPointer(data.getDataType());
            if (contextualAnonymous)
                proposedType = "pointer:" + libraryContextPath(
                    context.family, address, data.getDataType());
            boolean constructorConflict = ev.constructorStores.size() > 1;
            boolean constructorDominates = !constructorType.isBlank() && !constructorConflict;
            boolean typedStoreConflict = ev.typedStoreTypes.size() > 1;
            boolean typedStoreDominates = constructorType.isBlank() &&
                !typedStoreType.isBlank() && !typedStoreConflict;
            boolean anchoredStoreDominates = constructorDominates || typedStoreDominates;
            String boundaryBytePointerType = inferredBoundaryBytePointerType(ev);
            boolean boundaryBytePointerDominates = constructorType.isBlank() &&
                typedStoreType.isBlank() && !boundaryBytePointerType.isBlank();
            if (boundaryBytePointerDominates) proposedType = boundaryBytePointerType;
            String publishedPointerType = inferredPublishedPointerType(ev);
            boolean publishedPointerDominates = constructorType.isBlank() &&
                typedStoreType.isBlank() && !boundaryBytePointerDominates &&
                !publishedPointerType.isBlank();
            if (publishedPointerDominates) proposedType = publishedPointerType;
            String genericWidthRepairType = inferredGenericPointerWidth(ev);
            boolean genericWidthRepairDominates =
                "pointer:/void".equals(currentType) && scriptOwned &&
                constructorType.isBlank() && typedStoreType.isBlank() &&
                !boundaryBytePointerDominates && !publishedPointerDominates &&
                ev.addressCrossObjectSites.isEmpty() &&
                !genericWidthRepairType.isBlank();
            if (genericWidthRepairDominates) proposedType = genericWidthRepairType;
            boolean crossObjectWidthRepairRollback = scriptOwned &&
                genericUndefinedPointer(data.getDataType()) &&
                constructorType.isBlank() && typedStoreType.isBlank() &&
                !boundaryBytePointerDominates && !publishedPointerDominates &&
                !ev.addressCrossObjectSites.isEmpty();
            if (crossObjectWidthRepairRollback) proposedType = "pointer:/void";
            boolean neutralPointerErasesKnownWidth = "pointer:/void".equals(proposedType) &&
                pointerHasKnownPointeeWidth(data.getDataType()) &&
                !crossObjectWidthRepairRollback;
            if (neutralPointerErasesKnownWidth) proposedType = currentType;
            boolean typeConflict = !contextualAnonymous &&
                (constructorConflict || typedStoreConflict ||
                 narrowCharType.isBlank() && !anchoredStoreDominates &&
                 !boundaryBytePointerDominates && !publishedPointerDominates &&
                 !genericWidthRepairDominates && !crossObjectWidthRepairRollback &&
                 ev.types.size() > 1);
            int count = proposedType.isBlank() ? 0 : ev.types.getOrDefault(proposedType, 0);
            int currentTypeCount = ev.types.getOrDefault(currentType, 0);
            boolean currentTypeDominates = currentTypeCount >= 3;
            for (Map.Entry<String, Integer> type : ev.types.entrySet())
                if (!type.getKey().equals(currentType) &&
                        currentTypeCount < type.getValue() * 3) currentTypeDominates = false;
            int proposedLength = typeLength(proposedType);
            boolean smallSafeType = proposedLength >= 1 && proposedLength <= 8 &&
                !(resolveBaseType(proposedType) instanceof Structure &&
                    !proposedType.startsWith("pointer:"));
            // Data objects do not have a per-change SourceType.  Preserve arbitrary concrete
            // data, but allow a hash/comment-owned anonymous pointer produced by our earlier
            // shape passes to graduate to a named type when repeated call ABI evidence agrees.
            boolean generatedAnonymous = scriptOwned && anonymousPointer(data.getDataType());
            boolean generatedBarePointer = scriptOwned &&
                genericBarePointer(data.getDataType());
            // A direct named-constructor result stored in a synthetic pointer global
            // is stronger than an old DEFAULT/ANALYSIS concrete pointer propagated
            // from one weak consumer.  Preserve all manually/imported symbols and
            // require one unambiguous constructor type.
            boolean constructorConcreteOverride = constructorDominates &&
                data.getDataType() instanceof Pointer &&
                symbol.getSource() != SourceType.USER_DEFINED &&
                symbol.getSource() != SourceType.IMPORTED;
            boolean initializedStringPointer = ev.initializedStringPointers > 0 &&
                "pointer:/char".equals(proposedType) &&
                genericBarePointer(data.getDataType()) &&
                symbol.getSource() != SourceType.USER_DEFINED &&
                symbol.getSource() != SourceType.IMPORTED;
            boolean currentReplaceable = Undefined.isUndefined(data.getDataType()) ||
                generatedAnonymous || generatedBarePointer || constructorConcreteOverride ||
                initializedStringPointer;
            DataType currentBase = data.getDataType() instanceof Pointer pointer ?
                pointer.getDataType() : null;
            DataType proposedBase = resolveBaseType(proposedType);
            boolean extentCompatible = !generatedAnonymous ||
                contextualAnonymous ||
                currentBase instanceof Structure currentStructure &&
                proposedBase instanceof Structure proposedStructure &&
                proposedStructure.getLength() >= currentStructure.getLength();
            boolean typeChange = !proposedType.isBlank() && !sameType(currentType, proposedType);
            // Taking the address of a pointer-valued singleton is normal for an
            // initializer/destructor which fills or clears T **.  It does not
            // contradict hundreds of later T * context uses.  Retain the old
            // review boundary for scalar/weak globals and require a 16:1
            // context-to-address-use quorum for this exception.
            boolean contextualAddressSafe = contextualAnonymous &&
                data.getDataType() instanceof Pointer &&
                ev.addressEvidence > 0 &&
                context.count >= ev.addressEvidence * 16;
            boolean addressEvidenceCompatible =
                ev.addressEvidence == 0 || !narrowCharType.isBlank() || contextualAddressSafe ||
                boundaryBytePointerDominates &&
                    ev.rawAddressCallSites.size() == ev.safeNullingAddressSites.size() ||
                genericWidthRepairDominates &&
                    ev.rawAddressCallSites.size() == ev.safeNullingAddressSites.size() ||
                crossObjectWidthRepairRollback ||
                anchoredStoreDominates && proposedType.startsWith("pointer:");
            boolean typeApply = !typeConflict && typeChange && smallSafeType &&
                currentReplaceable && extentCompatible && addressEvidenceCompatible &&
                (contextualAnonymous || initializedStringPointer ||
                    !narrowCharType.isBlank() ||
                    boundaryBytePointerDominates ||
                    genericWidthRepairDominates ||
                    crossObjectWidthRepairRollback ||
                    anchoredStoreDominates || publishedPointerDominates ||
                    ev.typedStores >= 1 ||
                    ev.strongCount >= 2 || count >= 3);
            String proposedName = unique(ev.names);
            int proposedNameCount = proposedName.isBlank() ? 0 :
                ev.names.getOrDefault(proposedName, 0);
            // A single parameter name is call-site context, not global identity. For example,
            // AddChildSystem's childSystem parameter must not override dozens of concrete
            // STPlaySystemC receiver uses of the same global.
            boolean strongSemanticName = ev.strongNames.contains(proposedName);
            if (proposedNameCount < 2 && !strongSemanticName) proposedName = "";
            String namingType = proposedType.startsWith("pointer:") ? proposedType :
                currentTypeDominates && currentType.startsWith("pointer:") ? currentType : "";
            if (proposedName.isBlank() && !namingType.isBlank())
                proposedName = structuralName(namingType.substring("pointer:".length()), address);
            else if (!proposedName.isBlank()) proposedName = "g_" + proposedName + "_" + addr(address);
            if (contextualAnonymous)
                proposedName = "g_" + context.family.toLowerCase(Locale.ROOT) +
                    "Context_" + addr(address);
            String initializedStringName = ev.initializedStringNames.size() == 1 ?
                ev.initializedStringNames.iterator().next() : "";
            boolean generatedGenericStringName =
                symbol.getSource() == SourceType.ANALYSIS &&
                symbol.getName().matches("(?i)g_(?:text|_?source)_[0-9a-f]{8}");
            boolean preserveInitializedStringName =
                ev.initializedStringPointers > 0 && symbol.getName().startsWith("PTR_s_");
            boolean repairInitializedStringName =
                ev.initializedStringPointers > 0 && generatedGenericStringName &&
                !initializedStringName.isBlank();
            if (preserveInitializedStringName) proposedName = symbol.getName();
            else if (repairInitializedStringName) proposedName = initializedStringName;
            boolean sameConcreteType = !proposedType.isBlank() && sameType(currentType, proposedType);
            boolean nameApply = (!typeConflict || currentTypeDominates) && !proposedName.isBlank() &&
                // `_Source`, `_Dest` and `text` describe a call parameter role,
                // not the identity of a global character buffer.  The quorum
                // proves storage type only; keep the address-stable symbol until
                // independent semantic-name evidence exists.
                (narrowCharType.isBlank() || strongSemanticName) &&
                (!publishedPointerDominates || strongSemanticName) &&
                !symbol.getName().equals(proposedName) && (typeApply || sameConcreteType &&
                    (ev.typedStores >= 1 || ev.strongCount >= 2 || count >= 3) ||
                    currentTypeDominates || contextualAnonymous || strongSemanticName ||
                    repairInitializedStringName) &&
                symbol.getSource() != SourceType.USER_DEFINED &&
                symbol.getSource() != SourceType.IMPORTED;
            if (!typeChange && !nameApply) continue;
            List<String> reasons = new ArrayList<>();
            reasons.add("type_evidence=" + ev.types);
            reasons.add("name_evidence=" + ev.names);
            reasons.add("strong_semantic_names=" + ev.strongNames);
            reasons.add("strong_evidence=" + ev.strongCount);
            reasons.add("closed_named_pointer_stores=" + ev.typedStores);
            reasons.add("typed_pointer_return_store_types=" + ev.typedStoreTypes);
            reasons.add("call_boundary_types=" + ev.callBoundaryTypes);
            reasons.add("value_call_boundary_types=" + ev.callBoundaryValueTypes +
                "; functions=" + ev.callBoundaryValueFunctions.size());
            reasons.add("constructor_store_types=" + ev.constructorStores);
            reasons.add("library_context_votes=" + ev.libraryContexts);
            reasons.add("pointer_dereferences=" + ev.pointerDereferences +
                "; functions=" + ev.pointerDerefFunctions.size() +
                "; widths=" + ev.pointerDerefWidths +
                "; aligned_dword_geometry=" + ev.pointerDerefWordCompatible);
            reasons.add("address_cross_object_sites=" +
                ev.addressCrossObjectSites.size() + "; functions=" +
                ev.addressCrossObjectFunctions.size());
            reasons.add("pointer_producer_stores=" + ev.pointerProducerStores +
                "; producer_types=" + ev.pointerProducerTypes +
                "; producer_sites=" + ev.pointerProducerSites);
            reasons.add("direct_word_stores=" + ev.directWordStores +
                "; null_stores=" + ev.nullWordStores +
                "; unknown_stores=" + ev.unknownWordStores +
                "; address_call_escapes=" + ev.rawAddressCallSites.size() +
                "; safe_nulling_address_escapes=" +
                    ev.safeNullingAddressSites.size());
            if (!ev.untypedReceiverSites.isEmpty())
                reasons.add("untyped_thiscall_receiver_sites=" +
                    ev.untypedReceiverSites.size() + "; functions=" +
                    ev.untypedReceiverFunctions.size() + "; callees=" +
                    ev.untypedReceiverCallees.size());
            if (!ev.bitStringSites.isEmpty())
                reasons.add("exact_x86_bit_string_sites=" + ev.bitStringSites.size() +
                    "; functions=" + ev.bitStringFunctions.size());
            if (contextualAnonymous)
                reasons.add("dominant_library_context=" + context.family +
                    "; context_votes=" + context.count + "/" + context.total);
            if (constructorDominates && ev.types.size() > 1)
                reasons.add("constructor_store_dominates_weaker_use_types");
            if (typedStoreDominates && ev.types.size() > 1)
                reasons.add("exact_typed_pointer_store_dominates_weaker_use_types");
            if (publishedPointerDominates)
                reasons.add("published_pointer_role_from_exact_store_and_dereference_width");
            if (boundaryBytePointerDominates)
                reasons.add("closed_pointer_or_null_stores_and_cross_function_primitive_" +
                    "pointer_consumers_prove_neutral_byte_buffer");
            if (genericWidthRepairDominates)
                reasons.add("script_owned_void_pointer_recovered_to_unanimous_exact_" +
                    "machine_dereference_width");
            if (crossObjectWidthRepairRollback)
                reasons.add("script_owned_generic_pointer_rolled_back_because_address_" +
                    "arithmetic_crosses_neighboring_global_storage");
            if (neutralPointerErasesKnownWidth)
                reasons.add("neutral_pointer_role_preserves_existing_pointee_width");
            if (typeConflict) reasons.add("type_conflict");
            if (!narrowCharType.isBlank())
                reasons.add("dominant_char_pointer_role_over_neutral_byte_consumers");
            if (ev.cstringScans > 0)
                reasons.add("exact_repne_scasb_cstring_scans=" + ev.cstringScans);
            if (currentTypeDominates) reasons.add("existing_type_dominates_conflicting_evidence=" +
                currentTypeCount);
            if (contextualAddressSafe)
                reasons.add("address_of_pointer_global_compatible=" +
                    ev.addressEvidence + "; context_to_address_quorum=" +
                    context.count + ":" + ev.addressEvidence);
            else if (ev.addressEvidence > 0 && anchoredStoreDominates &&
                    proposedType.startsWith("pointer:"))
                reasons.add(
                    "address_of_pointer_global_compatible_with_trusted_store=" +
                    ev.addressEvidence);
            else if (ev.addressEvidence > 0)
                reasons.add("address_of_global_requires_review");
            if (generatedAnonymous) reasons.add("script_owned_anonymous_pointer_upgrade");
            if (constructorConcreteOverride && !generatedAnonymous)
                reasons.add("direct_constructor_store_overrides_non_manual_pointer_type");
            if (initializedStringPointer)
                reasons.add("exact_initialized_string_pointer_overrides_bare_pointer");
            if (preserveInitializedStringName)
                reasons.add("exact_initialized_string_pointer_name_preserved");
            if (repairInitializedStringName)
                reasons.add("repair_generated_generic_string_pointer_name_from_exact_target");
            if (!extentCompatible) reasons.add("named_type_shorter_than_observed_anonymous_extent");
            if (!currentReplaceable) reasons.add("concrete_existing_data_preserved");
            result.add(new Proposal(address, symbol, data, proposedType, proposedName,
                typeApply, nameApply, typeConflict && !currentTypeDominates ? "conflict" :
                    typeApply || nameApply ? "high" : "review", String.join("; ", reasons), ev.sites));
        }
        result.sort(Comparator.comparing(row -> row.address));
        return result;
    }

    private String dominantNarrowCharType(Map<String, Integer> votes) {
        int chars = votes.getOrDefault("/char", 0);
        if (chars < 3 || !narrowScalarTypesOnly(votes)) return "";
        int alternatives = votes.entrySet().stream()
            .filter(entry -> !"/char".equals(entry.getKey()))
            .mapToInt(Map.Entry::getValue).sum();
        return chars >= Math.max(3, alternatives * 4) ? "/char" : "";
    }

    /**
     * Recover only the storage role of an allocation-backed global byte buffer.
     * Every direct machine-word write must be an exact pointer producer or zero;
     * any address escape must be the independently recovered FreeAndNull contract.
     * Consumer evidence must span functions and consist solely of primitive pointer
     * views, with at least one byte-wide view.  Mixed primitive widths select byte *:
     * they prove byte-addressable storage, not one semantic element type.
     */
    private String inferredBoundaryBytePointerType(Evidence evidence) {
        if (evidence.directWordStores < 1 || evidence.pointerProducerStores < 1 ||
                evidence.unknownWordStores != 0 ||
                evidence.directWordStores != evidence.pointerProducerStores +
                    evidence.nullWordStores ||
                evidence.rawAddressCallSites.size() !=
                    evidence.safeNullingAddressSites.size() ||
                evidence.callBoundaryValueSites.size() < 3 ||
                evidence.callBoundaryValueFunctions.size() < 2 ||
                evidence.callBoundaryValueTypes.isEmpty()) return "";
        Set<Integer> widths = new TreeSet<>();
        boolean allChar = true;
        for (String type : evidence.callBoundaryValueTypes.keySet()) {
            if (!type.startsWith("pointer:")) return "";
            String pointee = type.substring("pointer:".length());
            if ("/void".equals(pointee)) {
                allChar = false;
                continue;
            }
            DataType base = dataTypes.getDataType(pointee);
            while (base instanceof TypeDef typedef) base = typedef.getBaseDataType();
            if (base == null || base instanceof Structure || base instanceof Pointer ||
                    base.getLength() < 1) return "";
            widths.add(base.getLength());
            if (!"/char".equals(pointee)) allChar = false;
        }
        if (!widths.contains(1)) return "";
        return allChar && widths.equals(Set.of(1)) ?
            "pointer:/char" : "pointer:/byte";
    }

    /**
     * A neutral void pointer records only indirection and destroys useful C indexing.
     * Repair only our own previously generated void pointer when every exact machine
     * dereference agrees on one primitive width across several functions.  undefinedN
     * is deliberately a storage-width view, not a semantic element assertion.
     */
    private String inferredGenericPointerWidth(Evidence evidence) {
        if (evidence.pointerDereferences < 3 ||
                evidence.pointerDerefFunctions.size() < 2 ||
                evidence.pointerDerefWidths.size() != 1) return "";
        int width = evidence.pointerDerefWidths.keySet().iterator().next();
        return switch (width) {
            case 1 -> "pointer:/undefined1";
            case 2 -> "pointer:/undefined2";
            case 4 -> "pointer:/undefined4";
            case 8 -> "pointer:/undefined8";
            default -> "";
        };
    }

    private boolean pointerHasKnownPointeeWidth(DataType type) {
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointee = pointer.getDataType();
        while (pointee instanceof TypeDef typedef) pointee = typedef.getBaseDataType();
        return pointee != null && !"/void".equals(pointee.getPathName()) &&
            pointee.getLength() > 0;
    }

    private boolean genericUndefinedPointer(DataType type) {
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointee = pointer.getDataType();
        while (pointee instanceof TypeDef typedef) pointee = typedef.getBaseDataType();
        return pointee != null && Undefined.isUndefined(pointee);
    }

    private String inferredPublishedPointerType(Evidence evidence) {
        if (evidence.pointerProducerStores < 1) return "";
        // A producer store alone proves only that the word temporarily carries
        // an address.  Require an independent dereference before changing the
        // persistent global datatype; allocator and CRT bookkeeping returns are
        // intentionally heterogeneous.
        if (evidence.pointerDerefWidths.isEmpty()) return "";
        if (evidence.pointerDereferences < 2) return "";

        int charVotes = evidence.types.getOrDefault("pointer:/char", 0);
        int byteVotes = evidence.types.getOrDefault("pointer:/byte", 0) +
            evidence.types.getOrDefault("pointer:/uchar", 0) +
            evidence.types.getOrDefault("pointer:/undefined1", 0);
        int pointerVotes = evidence.types.entrySet().stream()
            .filter(entry -> entry.getKey().startsWith("pointer:"))
            .mapToInt(Map.Entry::getValue).sum();
        if (evidence.cstringScans > 0 &&
                evidence.pointerDerefWidths.keySet().equals(Set.of(1)))
            return "pointer:/char";
        if (charVotes >= 3 && charVotes * 3 >= Math.max(1, pointerVotes * 2))
            return "pointer:/char";

        Set<Integer> widths = evidence.pointerDerefWidths.keySet();
        int width = dominantDereferenceWidth(evidence.pointerDerefWidths);
        if (width > 0) {
            if (width == 1 && charVotes >= 2 && charVotes >= byteVotes)
                return "pointer:/char";
            Set<String> primitive = primitivePointerCandidates(evidence, width);
            if (primitive.size() == 1) return primitive.iterator().next();
            return switch (width) {
                case 1 -> "pointer:/undefined1";
                case 2 -> "pointer:/undefined2";
                case 4 -> "pointer:/undefined4";
                case 8 -> "pointer:/undefined8";
                default -> "";
            };
        }
        // A mixed-width root is byte-addressable storage.  This establishes a
        // buffer view only; overlapping fields or a semantic record remain a
        // separate structural-recovery problem.
        if (widths.contains(1)) return "pointer:/byte";
        return "";
    }

    private int dominantDereferenceWidth(Map<Integer, Integer> widths) {
        if (widths.isEmpty()) return 0;
        Map.Entry<Integer, Integer> best = widths.entrySet().stream()
            .max(Map.Entry.<Integer, Integer>comparingByValue()
                .thenComparing(Map.Entry.comparingByKey())).orElse(null);
        if (best == null) return 0;
        int total = widths.values().stream().mapToInt(Integer::intValue).sum();
        // A rare narrow view of an otherwise machine-word array is a cast/view,
        // not evidence that the published base has a narrow element type.
        return widths.size() == 1 || best.getValue() >= 3 &&
            best.getValue() * 4 >= total * 3 ? best.getKey() : 0;
    }

    private Set<String> primitivePointerCandidates(Evidence evidence, int wantedWidth) {
        Set<String> result = new TreeSet<>();
        Map<String, Integer> candidates = new TreeMap<>();
        candidates.putAll(evidence.types);
        for (Map.Entry<String, Integer> entry : evidence.pointerProducerTypes.entrySet())
            candidates.merge(entry.getKey(), entry.getValue(), Integer::sum);
        for (Map.Entry<String, Integer> entry : candidates.entrySet()) {
            String type = entry.getKey();
            if (!type.startsWith("pointer:/") || type.equals("pointer:/void") ||
                    type.matches("pointer:/undefined[1248]?")) continue;
            String pointee = type.substring("pointer:".length());
            DataType base = dataTypes.getDataType(pointee);
            if (base == null || base instanceof Structure || base instanceof Pointer) continue;
            if (wantedWidth > 0 && base.getLength() != wantedWidth) continue;
            result.add(type);
        }
        return result;
    }

    private boolean narrowScalarTypesOnly(Map<String, Integer> votes) {
        return !votes.isEmpty() && votes.keySet().stream().allMatch(type -> Set.of(
            "/char", "/byte", "/uchar", "/undefined1").contains(type));
    }

    /**
     * A library namespace is not a C type identity.  DDX, SND and similar
     * modules may expose several unrelated context structures.  Reuse the short
     * family name only when it is free or already derives from the same
     * anonymous source; otherwise retain the semantic family and append the
     * global address.
     */
    private String libraryContextPath(String family, Address address,
            DataType currentType) {
        String root = "/SubmarineTitans/Recovered/LibraryContexts/";
        String preferred = root + family + "Context";
        DataType existing = dataTypes.getDataType(preferred);
        DataType source = currentType instanceof Pointer pointer ?
            pointer.getDataType() : null;
        if (existing == null || source != null && existing.isEquivalent(source))
            return preferred;
        String description =
            existing.getDescription() == null ? "" : existing.getDescription();
        if (source != null && description.contains("from " + source.getPathName()))
            return preferred;
        return preferred + "_" + addr(address);
    }

    private ContextVote dominantLibraryContext(Evidence evidence) {
        int total = evidence.libraryContextCalls;
        if (total < 8 || evidence.libraryContexts.isEmpty()) return null;
        Map.Entry<String, Integer> winner = evidence.libraryContexts.entrySet().stream()
            .max(Map.Entry.<String, Integer>comparingByValue()
                .thenComparing(Map.Entry.comparingByKey())).orElse(null);
        if (winner == null || winner.getValue() < 8 ||
                winner.getValue() * 5 < total * 4) return null;
        long tied = evidence.libraryContexts.values().stream()
            .filter(value -> value.equals(winner.getValue())).count();
        return tied == 1 ? new ContextVote(winner.getKey(), winner.getValue(), total) : null;
    }

    private void updateRegisters(Instruction instruction, String mnemonic, String[] operands,
            Map<String, GlobalValue> registers) {
        if (operands.length == 0) return;
        String destination = cleanRegister(operands[0]);
        if ("MOV".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            GlobalValue value = globalValue(instruction, 1, operands[1], registers, false);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if ("LEA".equals(mnemonic) && destination != null && operands.length >= 2) {
            if (!isFullRegister(operands[0])) { registers.remove(destination); return; }
            GlobalValue value = globalValue(instruction, 1, operands[1], registers, true);
            if (value == null) registers.remove(destination); else registers.put(destination, value);
            return;
        }
        if (destination != null && !Set.of("CMP", "TEST", "PUSH", "JMP", "RET")
                .contains(mnemonic)) registers.remove(destination);
    }

    private GlobalValue globalValue(Instruction instruction, int operandIndex, String operand,
            Map<String, GlobalValue> registers, boolean addressOf) {
        String register = cleanRegister(operand);
        if (register != null) return isFullRegister(operand) ? registers.get(register) : null;
        return referencedGlobal(instruction, operandIndex, operand, addressOf);
    }

    private GlobalValue referencedGlobal(Instruction instruction, int operandIndex,
            String operand, boolean addressOf) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Address address = reference.getToAddress();
            if (address == null || !currentProgram.getMemory().contains(address)) continue;
            Data data = currentProgram.getListing().getDefinedDataAt(address);
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
            if (data == null || symbol == null || data.hasStringValue() ||
                    !SYNTHETIC.matcher(symbol.getName()).matches() &&
                    !symbol.getName().matches("(?i)g_[A-Za-z0-9_]+_[0-9a-f]{8}") &&
                    !isOwned(address)) continue;
            boolean memoryOperand = operand.contains("[") && operand.contains("]");
            return new GlobalValue(address, addressOf || !memoryOperand);
        }
        return null;
    }

    private Function calledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function == null) continue;
            Set<Address> seen = new HashSet<>();
            while (function.isThunk() && seen.add(function.getEntryPoint())) {
                Function target = function.getThunkedFunction(false);
                if (target == null || target.equals(function)) break;
                function = target;
            }
            return function;
        }
        return null;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }
    private boolean trusted(Parameter parameter) {
        return parameter.getSource() == SourceType.USER_DEFINED ||
            parameter.getSource() == SourceType.IMPORTED || semanticType(parameter.getDataType());
    }
    private boolean meaningfulName(String name) {
        return name != null && !name.matches("(?i)(?:param|arg)_?[0-9]+") &&
            !name.equals("this");
    }

    private String ownerTypePath(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::"); if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        if (owner.startsWith("Library::")) return "";
        int ownerSeparator = owner.lastIndexOf("::");
        String leaf = ownerSeparator < 0 ? owner : owner.substring(ownerSeparator + 2);
        DataType direct = dataTypes.getDataType("/" + leaf);
        if (direct instanceof Structure) return direct.getPathName();
        List<DataType> matches = new ArrayList<>(); dataTypes.findDataTypes(leaf, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return match.getPathName();
        return "";
    }

    private String meaningfulType(DataType type) {
        if (type == null || type.getLength() < 1 || Undefined.isUndefined(type)) return "";
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            if (pointed == null || Undefined.isUndefined(pointed) ||
                    "/void".equals(pointed.getPathName())) return "";
            return "pointer:" + pointed.getPathName();
        }
        if (type instanceof Enum || type instanceof TypeDef || type instanceof Structure ||
                type instanceof AbstractIntegerDataType || type instanceof AbstractFloatDataType)
            return type.getPathName();
        return "";
    }
    private boolean semanticType(DataType type) {
        if (type instanceof Enum || type instanceof TypeDef || type instanceof Structure) return true;
        if (type instanceof Pointer pointer) {
            DataType pointed = pointer.getDataType();
            return pointed != null && !Undefined.isUndefined(pointed) &&
                !"/void".equals(pointed.getPathName());
        }
        return false;
    }
    private String typeSpecification(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + pointer.getDataType().getPathName();
        return type == null ? "" : type.getPathName();
    }
    private DataType resolveBaseType(String specification) {
        if (specification == null || specification.isBlank()) return null;
        String path = specification.startsWith("pointer:") ?
            specification.substring("pointer:".length()) : specification;
        return dataTypes.getDataType(path);
    }
    private int typeLength(String specification) {
        if (specification == null || specification.isBlank()) return -1;
        if (specification.startsWith("pointer:")) return currentProgram.getDefaultPointerSize();
        DataType type = dataTypes.getDataType(specification);
        return type == null ? -1 : type.getLength();
    }
    private boolean sameType(String left, String right) { return left.equals(right); }

    private int accessWidth(String operand) {
        String value = operand.toUpperCase(Locale.ROOT);
        if (value.contains("QWORD PTR")) return 8;
        if (value.contains("DWORD PTR")) return 4;
        if (value.contains("WORD PTR")) return 2;
        if (value.contains("BYTE PTR")) return 1;
        return -1;
    }
    private String signedType(int width) {
        return switch (width) { case 1 -> "/char"; case 2 -> "/short";
            case 4 -> "/int"; case 8 -> "/longlong"; default -> ""; };
    }
    private String unsignedType(int width) {
        return switch (width) { case 1 -> "/byte"; case 2 -> "/ushort";
            case 4 -> "/uint"; case 8 -> "/ulonglong"; default -> ""; };
    }
    private String cleanName(String value) {
        if (value == null) return "";
        String result = value.replaceAll("^(?:m_|p_|g_)+", "")
            .replaceAll("[^A-Za-z0-9_]", "_");
        if (result.isBlank() || result.matches("(?i)(?:param|arg)_?[0-9]+") ||
                (!Character.isLetter(result.charAt(0)) && result.charAt(0) != '_')) return "";
        if (Character.isUpperCase(result.charAt(0))) result =
            Character.toLowerCase(result.charAt(0)) + result.substring(1);
        return result;
    }
    private String structuralName(String typePath, Address address) {
        DataType identity = dataTypes.getDataType(typePath);
        while (identity instanceof TypeDef typedef)
            identity = typedef.getBaseDataType();
        // A primitive pointee proves a storage role, not a semantic global identity.
        // Names such as g_int_* make the corpus noisier and become stale as soon as a
        // later pass recovers the actual handle/record type.  Retain DAT_* until a
        // structure identity or independent parameter-name quorum exists.
        if (!(identity instanceof Structure)) return "";
        String leaf = typePath.substring(typePath.lastIndexOf('/') + 1)
            .replaceAll("(?i)Ty$", "").replaceAll("C$", "")
            .replaceAll("_+$", "");
        if (leaf.matches("ST[A-Z].*")) leaf = leaf.substring(2);
        leaf = cleanName(leaf);
        return leaf.isBlank() ? "" : "g_" + leaf + "_" + addr(address);
    }
    private String unique(Map<String, Integer> values) {
        return values.size() == 1 ? values.keySet().iterator().next() : "";
    }

    private String cleanRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return value.matches("[A-Z][A-Z0-9]{1,3}") ? canonicalRegister(value) : null;
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
    private boolean writesRegister(String mnemonic, String[] operands) {
        return operands.length > 0 && !Set.of("CMP", "TEST", "PUSH", "BT",
            "JMP", "CALL", "RET", "NOP").contains(mnemonic) &&
            !mnemonic.startsWith("J");
    }
    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }
    private boolean isOwned(Address address) {
        String comment = currentProgram.getListing().getComment(CommentType.PLATE, address);
        return comment != null && (comment.contains(MARKER) ||
            comment.contains("[STPointerShapeApplier]") ||
            comment.contains("[STTypeFamilyApplier]"));
    }
    private boolean anonymousPointer(DataType type) {
        if (!(type instanceof Pointer pointer) || !(pointer.getDataType() instanceof Structure))
            return false;
        String path = pointer.getDataType().getPathName();
        return path.contains("/Recovered/PointerShapes/") ||
            path.contains("/Recovered/ClassPointees/") ||
            path.contains("/Recovered/HiddenThis/") ||
            pointer.getDataType().getName().startsWith("Anon");
    }

    private List<PointerAudit> pointerAudit(List<Proposal> proposals) {
        Map<Address, Proposal> proposed = new HashMap<>();
        for (Proposal row : proposals) proposed.put(row.address, row);
        List<PointerAudit> result = new ArrayList<>();
        DataIterator iterator = currentProgram.getListing().getDefinedData(true);
        while (iterator.hasNext()) {
            Data data = iterator.next();
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(data.getAddress());
            if (symbol == null || !symbol.getName().startsWith("PTR_") ||
                    !(data.getDataType() instanceof Pointer pointer) ||
                    data.getLength() != currentProgram.getDefaultPointerSize()) continue;
            long raw;
            try {
                raw = currentProgram.getDefaultPointerSize() == 4 ?
                    Integer.toUnsignedLong(currentProgram.getMemory().getInt(data.getAddress())) :
                    currentProgram.getMemory().getLong(data.getAddress());
            }
            catch (Exception exception) { raw = -1; }
            Address target = raw < 0 ? null : currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(raw);
            Data targetData = target == null ? null :
                currentProgram.getListing().getDefinedDataContaining(target);
            Function targetFunction = target == null ? null :
                currentProgram.getFunctionManager().getFunctionContaining(target);
            Symbol targetSymbol = target == null ? null :
                currentProgram.getSymbolTable().getPrimarySymbol(target);
            String classification;
            if (raw == 0) classification = "zero_initialized_global";
            else if (symbol.getName().matches("(?i)PTR_(?:case|LAB)_.*"))
                classification = "control_flow_table_entry";
            else if (target != null && (targetFunction != null ||
                    currentProgram.getListing().getInstructionContaining(target) != null))
                classification = "code_pointer";
            else if (targetData != null && targetData.hasStringValue())
                classification = "string_pointer";
            else classification = "initialized_data_pointer";
            DataType pointed = pointer.getDataType();
            String pointee = pointed == null ? "" : pointed.getPathName();
            boolean anonymous = pointed instanceof Structure &&
                anonymousPointer(data.getDataType());
            Proposal proposal = proposed.get(data.getAddress());
            Evidence ev = evidence.get(data.getAddress());
            String targetName = targetFunction != null ? targetFunction.getName(true) :
                targetSymbol == null ? "" : targetSymbol.getName(true);
            String targetType = targetData == null ? "" :
                typeSpecification(targetData.getDataType());
            result.add(new PointerAudit(data.getAddress(), symbol.getName(),
                typeSpecification(data.getDataType()), raw < 0 ? "unreadable" :
                    String.format("%08X", raw), classification, targetName, targetType,
                pointee, anonymous, isOwned(data.getAddress()), ev == null ? 0 : ev.sites.size(),
                proposal == null ? "" : proposal.proposedType,
                proposal != null && proposal.typeApply));
        }
        result.sort(Comparator.comparing(row -> row.address));
        return result;
    }
    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName().toUpperCase(Locale.ROOT);
            if (name.equals("LIBRARY") || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }
    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Recovery output directory required");
        return askDirectory("Select recovery output directory", "Select");
    }
    private Path programDirectory(File selected) {
        return selected.getName().equals(currentProgram.getName()) ? selected.toPath() :
            selected.toPath().resolve(currentProgram.getName());
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("type_apply\tname_apply\taddress\texpected_name\t" +
                "expected_name_source\texpected_data_type\texpected_data_length\t" +
                "proposed_name\tproposed_type\tconfidence\tevidence_sites\treason\n");
            for (Proposal p : rows) out.write(bit(p.typeApply) + "\t" + bit(p.nameApply) +
                "\t" + addr(p.address) + "\t" + tsv(p.expectedName) + "\t" +
                p.expectedNameSource + "\t" + tsv(p.expectedType) + "\t" +
                p.expectedLength + "\t" + tsv(p.proposedName) + "\t" +
                tsv(p.proposedType) + "\t" + p.confidence + "\t" +
                tsv(String.join(" | ", p.sites)) + "\t" + tsv(p.reason) + "\n");
        }
    }

    private void writeCallBoundaryAudit(Path path, List<Proposal> proposals)
            throws Exception {
        Map<Address, Proposal> byAddress = new HashMap<>();
        for (Proposal proposal : proposals) byAddress.put(proposal.address, proposal);
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tname\tcurrent_type\tcall_boundary_types\t" +
                "trusted_pointer_return_store_types\tconstructor_store_types\t" +
                "address_of_uses\tproposed_type\ttype_apply\tcall_boundary_sites\t" +
                "trusted_store_sites\n");
            for (Map.Entry<Address, Evidence> entry : evidence.entrySet()) {
                Evidence ev = entry.getValue();
                if (ev.callBoundaryTypes.isEmpty() && ev.typedStoreTypes.isEmpty()) continue;
                Data data = currentProgram.getListing().getDefinedDataAt(entry.getKey());
                Symbol symbol = currentProgram.getSymbolTable()
                    .getPrimarySymbol(entry.getKey());
                if (data == null || symbol == null) continue;
                Proposal proposal = byAddress.get(entry.getKey());
                String trustedStoreSites = String.join(" | ", ev.typedStoreSites);
                if (trustedStoreSites.isBlank()) trustedStoreSites = "-";
                out.write(addr(entry.getKey()) + "\t" + tsv(symbol.getName()) + "\t" +
                    tsv(typeSpecification(data.getDataType())) + "\t" +
                    tsv(ev.callBoundaryTypes.toString()) + "\t" +
                    tsv(ev.typedStoreTypes.toString()) + "\t" +
                    tsv(ev.constructorStores.toString()) + "\t" +
                    ev.addressEvidence + "\t" +
                    tsv(proposal == null ? "" : proposal.proposedType) + "\t" +
                    bit(proposal != null && proposal.typeApply) + "\t" +
                    tsv(String.join(" | ", ev.callBoundarySites)) + "\t" +
                    tsv(trustedStoreSites) + "\n");
            }
        }
    }
    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> lines = new ArrayList<>();
        for (Proposal p : rows) lines.add("{\"type_apply\":" + p.typeApply +
            ",\"name_apply\":" + p.nameApply + ",\"address\":" + q(addr(p.address)) +
            ",\"proposed_name\":" + q(p.proposedName) + ",\"proposed_type\":" +
            q(p.proposedType) + ",\"confidence\":" + q(p.confidence) +
            ",\"reason\":" + q(p.reason) + "}");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }
    private void writePointerAudit(Path path, List<PointerAudit> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tname\tcurrent_type\traw_target\tclassification\t" +
                "target_name\ttarget_data_type\tpointee\t" +
                "anonymous_pointee\tscript_owned\tevidence_sites\tproposed_type\t" +
                "type_apply\n");
            for (PointerAudit row : rows) out.write(addr(row.address) + "\t" +
                tsv(row.name) + "\t" + tsv(row.currentType) + "\t" + row.rawTarget +
                "\t" + row.classification + "\t" + tsv(row.targetName) + "\t" +
                tsv(row.targetDataType) + "\t" + tsv(row.pointee) + "\t" +
                bit(row.anonymousPointee) + "\t" + bit(row.scriptOwned) + "\t" +
                row.evidenceSites + "\t" + tsv(row.proposedType) + "\t" +
                bit(row.typeApply) + "\n");
        }
    }
    private void writePointerSummary(Path path, List<PointerAudit> rows) throws Exception {
        Map<String, Long> classes = new TreeMap<>();
        for (PointerAudit row : rows)
            classes.merge(row.classification, 1L, Long::sum);
        List<String> lines = new ArrayList<>();
        lines.add("program=" + currentProgram.getName());
        lines.add("ptr_symbols=" + rows.size());
        for (Map.Entry<String, Long> entry : classes.entrySet())
            lines.add(entry.getKey() + "=" + entry.getValue());
        lines.add("zero_global_anonymous_pointees=" + rows.stream().filter(row ->
            row.classification.equals("zero_initialized_global") && row.anonymousPointee).count());
        lines.add("named_upgrade_auto_apply=" + rows.stream().filter(row -> row.typeApply).count());
        lines.add("note=Control-flow, code and string table entries retain PTR_* labels; they are not class instances.");
        Files.write(path, lines, StandardCharsets.UTF_8);
    }
    private void writeSummary(Path path, List<Proposal> rows, int functions, int calls)
            throws Exception {
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "functions_scanned=" + functions, "direct_calls_seen=" + calls,
            "globals_with_evidence=" + evidence.size(), "proposals=" + rows.size(),
            "type_auto_apply=" + rows.stream().filter(r -> r.typeApply).count(),
            "name_auto_apply=" + rows.stream().filter(r -> r.nameApply).count(),
            "conflicts=" + rows.stream().filter(r -> r.confidence.equals("conflict")).count(),
            "globals_with_call_boundary_evidence=" + evidence.values().stream()
                .filter(value -> !value.callBoundaryTypes.isEmpty()).count(),
            "globals_with_trusted_pointer_return_store=" + evidence.values().stream()
                .filter(value -> !value.typedStoreTypes.isEmpty()).count(),
            "note=Automatic types require repeated non-address-of evidence and replace only undefined/script-owned data.",
            "note_pointer_return_store=A trusted concrete pointer return stored into an exact " +
                "global is an independent type anchor and dominates weaker use-site spellings.",
            "note_cfg_this_store=An unadjusted named __thiscall receiver stored into an exact " +
                "global is propagated only by all-predecessor CFG agreement through exact " +
                "callee-saved-register and EBP-stack lifetimes.",
            "note_constructor_stores=A unique named constructor result stored into a global " +
                "dominates weaker generic use-site types.",
            "note_names=Automatic names are structural and retain the address suffix.",
            "note_manual=USER_DEFINED symbols and concrete manual data are preserved."),
            StandardCharsets.UTF_8);
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
    private static String q(String value) {
        if (value == null) return "null";
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\"";
    }
    private static class GlobalValue {
        final Address address; final boolean addressOf;
        GlobalValue(Address address, boolean addressOf) {
            this.address = address; this.addressOf = addressOf;
        }
    }
    private static class ThisState {
        final Set<String> registers = new TreeSet<>();
        final Set<Integer> stack = new TreeSet<>();
        ThisState copy() {
            ThisState result = new ThisState();
            result.registers.addAll(registers);
            result.stack.addAll(stack);
            return result;
        }
        ThisState intersection(ThisState other) {
            ThisState result = copy();
            result.registers.retainAll(other.registers);
            result.stack.retainAll(other.stack);
            return result;
        }
        void killVolatile() {
            registers.remove("EAX");
            registers.remove("ECX");
            registers.remove("EDX");
        }
        @Override
        public boolean equals(Object value) {
            return value instanceof ThisState other &&
                registers.equals(other.registers) && stack.equals(other.stack);
        }
        @Override
        public int hashCode() { return registers.hashCode() * 31 + stack.hashCode(); }
    }
    private record StackDefinition(int offset, Address storeSite) {}
    private static class Evidence {
        final Map<String, Integer> types = new TreeMap<>(), names = new TreeMap<>(),
            constructorStores = new TreeMap<>(), typedStoreTypes = new TreeMap<>(),
            callBoundaryTypes = new TreeMap<>(), libraryContexts = new TreeMap<>(),
            callBoundaryValueTypes = new TreeMap<>(), pointerProducerTypes = new TreeMap<>();
        final Map<Integer, Integer> pointerDerefWidths = new TreeMap<>();
        final Set<String> sites = new TreeSet<>(), strongNames = new TreeSet<>(),
            typedStoreSites = new TreeSet<>(), callBoundarySites = new TreeSet<>(),
            callBoundaryValueSites = new TreeSet<>(),
            callBoundaryValueFunctions = new TreeSet<>(),
            initializedStringNames = new TreeSet<>(), pointerDerefSites = new TreeSet<>(),
            pointerDerefFunctions = new TreeSet<>(), bitStringSites = new TreeSet<>(),
            bitStringFunctions = new TreeSet<>(), untypedReceiverSites = new TreeSet<>(),
            untypedReceiverFunctions = new TreeSet<>(),
            untypedReceiverCallees = new TreeSet<>(), pointerProducerSites = new TreeSet<>(),
            rawAddressCallSites = new TreeSet<>(), safeNullingAddressSites = new TreeSet<>();
        final Set<String> addressCrossObjectSites = new TreeSet<>(),
            addressCrossObjectFunctions = new TreeSet<>();
        int strongCount, addressEvidence, typedStores, libraryContextCalls,
            initializedStringPointers, cstringScans, pointerDereferences,
            pointerProducerStores, directWordStores, nullWordStores,
            unknownWordStores;
        boolean pointerDerefWordCompatible = true;
    }
    private record PointerOrigin(String type, String reason) {}
    private record ContextVote(String family, int count, int total) {}
    private record CStringState(Address address, boolean lowAccumulatorZero) {}
    private record TypedValue(String type, String producer, boolean constructorResult) {}
    private enum ReturnOriginKind { GLOBAL, ZERO, UNKNOWN }
    private record ReturnOrigin(ReturnOriginKind kind, Address address) {
        static ReturnOrigin global(Address address) {
            return new ReturnOrigin(ReturnOriginKind.GLOBAL, address);
        }
        static ReturnOrigin zero() {
            return new ReturnOrigin(ReturnOriginKind.ZERO, null);
        }
        static ReturnOrigin unknown() {
            return new ReturnOrigin(ReturnOriginKind.UNKNOWN, null);
        }
    }
    private static class Proposal {
        final Address address; final String expectedName, expectedNameSource, expectedType,
            proposedName, proposedType, confidence, reason; final int expectedLength;
        final boolean typeApply, nameApply; final Set<String> sites;
        Proposal(Address address, Symbol symbol, Data data, String proposedType,
                String proposedName, boolean typeApply, boolean nameApply, String confidence,
                String reason, Set<String> sites) {
            this.address = address; expectedName = symbol.getName();
            expectedNameSource = symbol.getSource().toString();
            expectedType = data.getDataType() instanceof Pointer pointer &&
                pointer.getDataType() != null ? "pointer:" + pointer.getDataType().getPathName() :
                data.getDataType().getPathName();
            expectedLength = data.getLength(); this.proposedType = proposedType;
            this.proposedName = proposedName; this.typeApply = typeApply;
            this.nameApply = nameApply; this.confidence = confidence; this.reason = reason;
            this.sites = new TreeSet<>(sites);
        }
    }
    private record PointerAudit(Address address, String name, String currentType,
        String rawTarget, String classification, String targetName, String targetDataType,
        String pointee, boolean anonymousPointee, boolean scriptOwned, int evidenceSites,
        String proposedType, boolean typeApply) {}
}
