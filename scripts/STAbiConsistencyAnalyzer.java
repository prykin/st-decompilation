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
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
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
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STAbiConsistencyAnalyzer extends GhidraScript {
    private static final int CALL_USE_SCAN_LIMIT = 8;
    private static final int COMPLETE_CALL_USE_SCAN_LIMIT = 32;
    private static final int COMPLETE_CALL_USE_NODE_LIMIT = 256;
    private static final int POINTER_RETURN_SCAN_LIMIT = 32;
    private static final int RETURN_DEFINITION_SCAN_LIMIT = 12;
    private static final int PARAMETER_MASK_SCAN_LIMIT = 8;
    private static final Pattern STACK_MEMORY = Pattern.compile(
        "^\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
    private static final Pattern ESP_MEMORY = Pattern.compile(
        "^\\[ESP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$");
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
            addLegacyMachineArityReturnMigration(function, rows);
            if (addEbpContextRegisterRepair(function, rows)) continue;
            // A freshly discovered callee-cleaned function can still have Ghidra's
            // placeholder `unknown f(void)` Listing signature even though its machine
            // body reads the complete incoming stack range.  Recover that boundary before
            // the ordinary parameter-width passes need Listing parameters to exist.
            if (addDefaultEspStackPrototype(function, rows)) continue;
            if (addDiagnosticStackPrototype(function, rows)) continue;
            // A full prototype rewrite changes ordinals.  Do not emit stale
            // per-parameter rows for the same baseline in this pass.
            if (addMachineStackArityExpansion(function, rows)) continue;
            if (addX87DoubleParameterRepair(function, rows)) continue;
            if (addMachineThiscallArityRepair(function, rows)) continue;
            addUnsafeUnknownConventionReturnRevert(function, rows);
            addNarrowAccumulatorReturnRepair(function, rows);
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
                ReturnUse aggregate = returnUses.computeIfAbsent(called.getEntryPoint(),
                    ignored -> new ReturnUse());
                if (use.width >= 4) aggregate.full++;
                else if (use.width > 0) {
                    aggregate.narrow++;
                    aggregate.narrowWidths.add(use.width);
                }
                else {
                    if (use.evidence.startsWith("killed:")) aggregate.ignored++;
                    else aggregate.unknown++;
                }
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
            if (independentAccumulatorDefinition(instruction))
                return new RegisterUse(0, "killed: " +
                    instruction.getMnemonicString().toUpperCase(Locale.ROOT) +
                    " " + instruction);
            int input = semanticAccumulatorInputWidth(instruction);
            if (input > 0)
                return new RegisterUse(input, instruction.getMnemonicString().toUpperCase(Locale.ROOT) +
                    " " + instruction.toString());
            if (accumulatorWidth(instruction.getResultObjects()) > 0 ||
                    "CALL".equalsIgnoreCase(instruction.getMnemonicString()))
                return new RegisterUse(0, "killed: " +
                    instruction.getMnemonicString().toUpperCase(Locale.ROOT) +
                    " " + instruction);
            if (instruction.getFlowType().isTerminal())
                return new RegisterUse(0, "unknown: terminal before explicit EAX kill");
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return new RegisterUse(0, "unknown: no EAX read/kill within scan limit");
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

    /** A mask such as `AND EAX,0xff` consumes only the low byte even though
     * Ghidra reports EAX as the input register. This is the compiler's ordinary
     * zero-extension idiom and is exact width evidence, not a full-EAX use. */
    private int semanticAccumulatorInputWidth(Instruction instruction) {
        int raw = accumulatorWidth(instruction.getInputObjects());
        if (raw < 4) return raw;
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        if (!Set.of("AND", "TEST").contains(mnemonic) ||
                instruction.getNumOperands() < 2 ||
                !instruction.getDefaultOperandRepresentation(0)
                    .trim().equalsIgnoreCase("EAX")) return raw;
        Scalar mask = instruction.getScalar(1);
        if (mask == null) return raw;
        long value = mask.getUnsignedValue();
        if ((value & ~0xffL) == 0) return 1;
        if ((value & ~0xffffL) == 0) return 2;
        return raw;
    }

    /** Some x86 read-modify-write spellings do not depend on the old EAX
     * value. They kill a callee return even though Ghidra lists EAX among the
     * inputs. Keep this list to exact algebraic identities only. */
    private boolean independentAccumulatorDefinition(Instruction instruction) {
        if (instruction.getNumOperands() < 2 ||
                !instruction.getDefaultOperandRepresentation(0)
                    .trim().equalsIgnoreCase("EAX")) return false;
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        String second = instruction.getDefaultOperandRepresentation(1).trim();
        if (Set.of("XOR", "SUB", "SBB").contains(mnemonic) &&
                second.equalsIgnoreCase("EAX")) return true;
        Scalar scalar = instruction.getScalar(1);
        if (scalar == null) return false;
        long value = scalar.getUnsignedValue() & 0xffffffffL;
        return ("OR".equals(mnemonic) && value == 0xffffffffL) ||
            ("AND".equals(mnemonic) && value == 0);
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

    /**
     * Some compiler/runtime helpers in this binary form a closed machine ABI which carries a
     * large codec state record in EBP.  Ghidra's ordinary fastcall model mistakes preserved or
     * immediately overwritten ECX/EDX for parameters and leaves the real EBP value as unaff_EBP.
     * Recover only the exact non-frame-pointer case: EBP is read before any definition, every
     * current explicit parameter is a generic ECX/EDX register word, and neither register is
     * semantically read before being overwritten (push/pop preservation does not count).
     */
    private boolean addEbpContextRegisterRepair(Function function, List<Row> rows)
            throws Exception {
        if (pointerSize != 4 || function.hasVarArgs() ||
                manual(function.getSignatureSource()) ||
                manual(function.getReturn().getSource()) ||
                !incomingEbpContextUse(function)) return false;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.isEmpty() || parameters.stream().anyMatch(parameter ->
                manual(parameter.getSource()) || parameter.hasStackStorage() ||
                !genericDword(parameter.getFormalDataType()) ||
                !Set.of("ECX:4", "EDX:4").contains(
                    parameter.getVariableStorage().toString()))) return false;
        if (semanticIncomingRegisterUse(function, "ECX") ||
                semanticIncomingRegisterUse(function, "EDX")) return false;

        String returned = null;
        DataType currentReturn = unwrap(function.getReturnType());
        if (currentReturn instanceof VoidDataType) returned = "/void";
        else {
            ReturnUse use = returnUses.get(function.getEntryPoint());
            if (use != null && use.full > 0 && use.narrow == 0 &&
                    allReturnsDefineFullAccumulator(function)) returned = "/int";
            else if (use != null && use.ignored > 0 && use.full == 0 &&
                    use.narrow == 0 && use.unknown == 0) returned = "/void";
        }
        if (returned == null) return false;
        Register ebp = currentProgram.getRegister("EBP");
        if (ebp == null) return false;
        String storage = new VariableStorage(currentProgram, ebp)
            .getSerializationString();
        rows.add(Row.fullCustom(function, "ebp_context_register", true,
            returned, "unknown", false, "pointer:/void", "context", storage,
            "high", "incoming EBP is dereferenced before any EBP definition; " +
                "all current explicit parameters are generic ECX/EDX words; ECX/EDX " +
                "are overwritten or preserved without semantic incoming use; return=" +
                returned + (returnUses.get(function.getEntryPoint()) == null ? "" :
                    "; caller_return_uses=" +
                    returnUses.get(function.getEntryPoint()).full +
                    ", ignored=" +
                    returnUses.get(function.getEntryPoint()).ignored)));
        return true;
    }

    private boolean incomingEbpContextUse(Function function) {
        boolean live = true;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext() && live) {
            Instruction instruction = instructions.next();
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                String rendered = instruction.getDefaultOperandRepresentation(operand)
                    .toUpperCase(Locale.ROOT);
                if (rendered.contains("[") && containsRegister(rendered, "EBP"))
                    return true;
            }
            for (Object output : instruction.getResultObjects())
                if (output instanceof Register register &&
                        "EBP".equals(register.getName().toUpperCase(Locale.ROOT)))
                    live = false;
        }
        return false;
    }

    private boolean semanticIncomingRegisterUse(Function function, String wanted) {
        boolean live = true;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext() && live) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            boolean preservationPush = "PUSH".equals(mnemonic) &&
                instruction.getNumOperands() > 0 &&
                wanted.equals(fullRegister(
                    instruction.getDefaultOperandRepresentation(0)));
            if (!preservationPush) {
                for (Object input : instruction.getInputObjects())
                    if (input instanceof Register register &&
                            wanted.equals(register.getName().toUpperCase(Locale.ROOT)))
                        return true;
            }
            for (Object output : instruction.getResultObjects())
                if (output instanceof Register register &&
                        wanted.equals(register.getName().toUpperCase(Locale.ROOT)))
                    live = false;
        }
        return false;
    }

    /**
     * Embedded debug strings prove names, but some historical debug-symbol imports also
     * installed a guessed trailing parameter.  For x86 __thiscall the immediate on every
     * RET is the exact number of explicit stack bytes removed by the callee.  A smaller,
     * unanimous RET purge therefore disproves trailing parameters in the current signature.
     *
     * This repair is deliberately limited to debug-named functions and removes only a
     * complete trailing suffix whose incoming stack slots are never referenced.  It does
     * not infer argument types and it does not trust a single caller's current prototype.
     */
    private boolean addMachineThiscallArityRepair(Function function, List<Row> rows)
            throws Exception {
        if (!"__thiscall".equals(function.getCallingConventionName()) ||
                function.hasVarArgs() || !hasTag(function, "RECOVERED_DEBUG_NAME") ||
                function.getSignatureSource() != SourceType.USER_DEFINED)
            return false;
        List<Parameter> parameters = explicitParameters(function);
        if (parameters.isEmpty() || parameters.stream().anyMatch(parameter ->
                !parameter.hasStackStorage())) return false;
        RetPurge purge = uniformRetPurge(function);
        if (purge == null) return false;

        int consumed = 0, keep = 0;
        while (keep < parameters.size() && consumed < purge.bytes) {
            int span = parameterSpan(parameters.get(keep));
            if (consumed + span > purge.bytes) return false;
            consumed += span;
            keep++;
        }
        if (consumed != purge.bytes || keep == parameters.size()) return false;
        for (int index = keep; index < parameters.size(); index++)
            if (incomingStackSlotReferenced(function, parameters.get(index))) return false;

        List<String> types = new ArrayList<>(), names = new ArrayList<>();
        for (int index = 0; index < keep; index++) {
            Parameter parameter = parameters.get(index);
            types.add(typeSpec(parameter.getFormalDataType()));
            names.add(parameter.getName());
        }
        rows.add(Row.full(function, "machine_thiscall_arity", true,
            typeSpec(function.getReturnType()), function.getCallingConventionName(), false,
            String.join(";", types), String.join(";", names), "high",
            "every machine RET purges exactly " + purge.bytes +
            " explicit stack bytes; current signature describes " +
            parameters.stream().mapToInt(this::parameterSpan).sum() +
            "; removed trailing parameter slots have no listing references; ret_sites=" +
            String.join(" | ", purge.sites)));
        return true;
    }

    private RetPurge uniformRetPurge(Function function) {
        Integer bytes = null;
        List<String> sites = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.startsWith("RET")) continue;
            int current = 0;
            if (instruction.getNumOperands() > 0) {
                Scalar scalar = instruction.getScalar(0);
                if (scalar == null || scalar.getUnsignedValue() > Integer.MAX_VALUE)
                    return null;
                current = (int)scalar.getUnsignedValue();
            }
            if (bytes != null && bytes != current) return null;
            bytes = current;
            sites.add(addr(instruction.getAddress()) + " " + instruction);
        }
        return bytes == null ? null : new RetPurge(bytes, sites);
    }

    /**
     * Recover the compact MSVC diagnostic-wrapper ABI without trusting its
     * callers.  These wrappers read one callee-cleaned stack word, forward it
     * as the substitution for an immutable {@code %s} diagnostic format, test
     * the reporting result, optionally execute INT3, and return.  EAX is merely
     * the reporter's physical residue: the source operation is void.
     *
     * The exact RET 4, complete pre-write EBP+8 read, register-to-PUSH flow,
     * immutable format, library call, and trap are all required.  This is a
     * typed machine-width anchor for the otherwise truncated stack prototype;
     * ordinary RET 4 helpers remain untouched.
     */
    private boolean addDiagnosticStackPrototype(Function function, List<Row> rows)
            throws Exception {
        if (pointerSize != 4 || function.hasVarArgs() ||
                !"__stdcall".equals(function.getCallingConventionName()) ||
                manual(function.getSignatureSource()) ||
                manual(function.getReturn().getSource()) ||
                !explicitParameters(function).isEmpty()) return false;
        RetPurge purge = uniformRetPurge(function);
        if (purge == null || purge.bytes != pointerSize) return false;
        IncomingStackEvidence incoming = incomingStackEvidence(function,
            pointerSize * 2L, pointerSize);
        for (long offset = pointerSize * 2L;
                offset < pointerSize * 3L; offset++)
            if (!incoming.readBytes.contains(offset)) return false;

        String incomingRegister = "";
        boolean pushedIncoming = false, diagnosticFormat = false;
        boolean libraryCall = false, trap = false;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if ("MOV".equals(mnemonic) && instruction.getNumOperands() >= 2 &&
                    Long.valueOf(pointerSize * 2L).equals(stackOffset(instruction, 1)))
                incomingRegister = fullRegister(
                    instruction.getDefaultOperandRepresentation(0));
            else if ("PUSH".equals(mnemonic) && !incomingRegister.isBlank() &&
                    incomingRegister.equals(fullRegister(
                        instruction.getDefaultOperandRepresentation(0))))
                pushedIncoming = true;
            if ("PUSH".equals(mnemonic)) {
                for (Reference reference : instruction.getOperandReferences(0)) {
                    Data data = listing.getDataAt(reference.getToAddress());
                    Object value = data == null ? null : data.getValue();
                    if (value instanceof String string && string.contains("%s"))
                        diagnosticFormat = true;
                }
            }
            if ("CALL".equals(mnemonic)) {
                Function called = resolveThunk(directCalledFunction(instruction));
                if (called != null && isLibrary(called)) libraryCall = true;
            }
            if ("INT3".equals(mnemonic)) trap = true;
        }
        if (!pushedIncoming || !diagnosticFormat || !libraryCall || !trap) return false;

        rows.add(Row.full(function, "machine_diagnostic_stack_prototype", true,
            "/void", "__stdcall", false, "pointer:/char", "diagnosticName", "high",
            "exact RET 4 diagnostic wrapper reads EBP+8 before overlap, forwards " +
            "that complete word through one register PUSH to a library reporter with " +
            "an immutable %s format, tests the reporter result, and contains INT3; " +
            "the reporter's residual EAX is not a source return; read_sites=" +
            String.join(" | ", incoming.sites) + "; ret_sites=" +
            String.join(" | ", purge.sites)));
        return true;
    }

    /**
     * Recover a missing stack prototype for a newly claimed x86 function from the callee
     * alone.  The rule is intentionally narrower than decompiler parameter recovery:
     * every byte purged by one unanimous {@code RET n} must be read from its exact entry-SP
     * coordinate before an overlapping write, stack movement must remain mechanically
     * balanced, and at least one qword x87 read must prove a non-word boundary.  A dword
     * whose loaded register is subsequently dereferenced is emitted as {@code void *}; no
     * nominal structure or semantic scalar type is guessed here.
     *
     * This handles optimized frameless stdcall methods such as a stack-passed object plus
     * a double, for which Ghidra can render temporary decompiler parameters while leaving
     * the persistent Function signature as {@code void(void)}.  Callers are deliberately
     * not evidence, so a bad call-site prototype cannot validate itself.
     */
    private boolean addDefaultEspStackPrototype(Function function, List<Row> rows)
            throws Exception {
        if (pointerSize != 4 || function.hasVarArgs() ||
                manual(function.getSignatureSource()) ||
                manual(function.getReturn().getSource()) ||
                !"unknown".equalsIgnoreCase(function.getCallingConventionName()))
            return false;
        List<Parameter> current = explicitParameters(function);
        if (!current.isEmpty()) return false;
        RetPurge purge = uniformRetPurge(function);
        if (purge == null || purge.bytes <= 0 || purge.bytes > 0x100 ||
                purge.bytes % pointerSize != 0) return false;

        EspStackEvidence evidence = espStackEvidence(function, purge.bytes);
        if (evidence == null || !evidence.balanced) return false;
        for (long offset = pointerSize; offset < pointerSize + purge.bytes; offset++)
            if (!evidence.readBytes.contains(offset)) return false;
        if (evidence.doubleStarts.isEmpty()) return false;

        List<String> types = new ArrayList<>(), names = new ArrayList<>(),
            selected = new ArrayList<>();
        long offset = pointerSize;
        int ordinal = 1;
        while (offset < pointerSize + purge.bytes) {
            String type;
            int length;
            if (evidence.doubleStarts.contains(offset)) {
                type = "/double";
                length = 8;
            }
            else {
                type = evidence.pointerStarts.contains(offset) ?
                    "pointer:/void" : "/undefined4";
                length = pointerSize;
            }
            if (offset + length > pointerSize + purge.bytes) return false;
            types.add(type);
            names.add("param_" + ordinal++);
            selected.add("entry_sp+0x" + Long.toHexString(offset)
                .toUpperCase(Locale.ROOT) + "=" + type);
            offset += length;
        }
        rows.add(Row.full(function, "machine_esp_stack_prototype", true,
            typeSpec(function.getReturnType()), "__stdcall", false,
            String.join(";", types), String.join(";", names), "high",
            "placeholder unknown signature; every machine RET purges exactly " +
            purge.bytes + " byte(s); a balanced frameless ESP trace reads every " +
            "incoming byte before overlap; at least one exact x87 qword fixes the " +
            "slot partition; inferred=" + selected + "; sites=" +
            String.join(" | ", evidence.sites) + "; ret_sites=" +
            String.join(" | ", purge.sites)));
        return true;
    }

    private EspStackEvidence espStackEvidence(Function function, int purgeBytes) {
        long start = pointerSize, end = pointerSize + purgeBytes;
        long espBias = 0;
        Set<Long> read = new HashSet<>(), written = new HashSet<>(),
            doubles = new HashSet<>(), pointers = new HashSet<>();
        Map<String, Long> registerOrigins = new HashMap<>();
        List<String> sites = new ArrayList<>();
        boolean balanced = true;
        int pushesSinceCall = 0;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operandRepresentations(instruction);

            // A register carrying one exact incoming dword becomes pointer evidence only
            // after it is actually used as a memory base.  Register spelling and the
            // source stack coordinate are both machine facts.
            for (String operand : operands) {
                if (!operand.contains("[") || !operand.contains("]")) continue;
                BaseMemory memory = baseMemory(operand);
                if (memory != null && registerOrigins.containsKey(memory.base))
                    pointers.add(registerOrigins.get(memory.base));
            }

            for (int operand = 0; operand < operands.size(); operand++) {
                Long relative = espOffset(operands.get(operand));
                if (relative == null) continue;
                long entryOffset = relative + espBias;
                if (entryOffset < start || entryOffset >= end) continue;
                int width = memoryWidth(operands.get(operand));
                if (width <= 0) width = pointerSize;
                width = (int)Math.min(width, end - entryOffset);
                boolean write = operand == 0 && writesStackMemory(mnemonic);
                boolean isRead = !write || readsFirstOperand(mnemonic);
                if (isRead && !stackRangeWritten(written, entryOffset, width)) {
                    for (int index = 0; index < width; index++)
                        read.add(entryOffset + index);
                    if (width == 8 && x87MemoryRead(mnemonic) &&
                            (operands.get(operand).contains("DOUBLE PTR") ||
                                operands.get(operand).contains("QWORD PTR")))
                        doubles.add(entryOffset);
                    if (sites.size() < 32)
                        sites.add(addr(instruction.getAddress()) + " " + instruction +
                            " [entry_sp+0x" + Long.toHexString(entryOffset)
                                .toUpperCase(Locale.ROOT) + "]");
                }
                if (write)
                    for (int index = 0; index < width; index++)
                        written.add(entryOffset + index);
            }

            String destination = operands.isEmpty() ? "" : fullRegister(operands.get(0));
            String source = operands.size() < 2 ? "" : fullRegister(operands.get(1));
            Long sourceStack = operands.size() < 2 ? null : espOffset(operands.get(1));
            if (!destination.isBlank() && writesFirstOperand(mnemonic)) {
                Long origin = null;
                if ("MOV".equals(mnemonic) && sourceStack != null) {
                    long entryOffset = sourceStack + espBias;
                    if (entryOffset >= start && entryOffset + pointerSize <= end)
                        origin = entryOffset;
                }
                else if ("MOV".equals(mnemonic) && !source.isBlank())
                    origin = registerOrigins.get(source);
                if (origin == null) registerOrigins.remove(destination);
                else registerOrigins.put(destination, origin);
            }

            if ("PUSH".equals(mnemonic)) {
                espBias -= pointerSize;
                pushesSinceCall++;
            }
            else if ("POP".equals(mnemonic)) espBias += pointerSize;
            else if (("SUB".equals(mnemonic) || "ADD".equals(mnemonic)) &&
                    operands.size() >= 2 && "ESP".equals(fullRegister(operands.get(0)))) {
                Long amount = immediate(operands.get(1));
                if (amount == null) return null;
                espBias += "ADD".equals(mnemonic) ? amount : -amount;
            }
            else if ("CALL".equals(mnemonic)) {
                Function called = directCalledFunction(instruction);
                int calleePurge = calleeStackPurge(called);
                // An indirect call with no outgoing push since the preceding call has
                // zero caller-visible stack effect.  The callee cannot purge this
                // function's saved registers or incoming arguments and still return here.
                if (calleePurge < 0 && called == null && pushesSinceCall == 0)
                    calleePurge = 0;
                if (calleePurge < 0) return null;
                espBias += calleePurge;
                pushesSinceCall = 0;
                registerOrigins.remove("EAX");
                registerOrigins.remove("ECX");
                registerOrigins.remove("EDX");
            }
            else if ("LEAVE".equals(mnemonic) ||
                    ("MOV".equals(mnemonic) && operands.size() >= 2 &&
                        "ESP".equals(fullRegister(operands.get(0))) &&
                        !"ESP".equals(fullRegister(operands.get(1))))) return null;

            if (mnemonic.startsWith("RET") && espBias != 0) balanced = false;
        }
        return new EspStackEvidence(read, doubles, pointers, sites, balanced);
    }

    private int calleeStackPurge(Function called) {
        if (called == null) return -1;
        if (called.isStackPurgeSizeValid()) return called.getStackPurgeSize();
        String convention = called.getCallingConventionName();
        if ("__cdecl".equals(convention)) return 0;
        if (!Set.of("__stdcall", "__thiscall", "__fastcall").contains(convention))
            return -1;
        int bytes = 0;
        for (Parameter parameter : explicitParameters(called))
            if (parameter.hasStackStorage()) bytes += parameterSpan(parameter);
        return bytes;
    }

    private Long espOffset(String operand) {
        String value = operand.toUpperCase(Locale.ROOT).replace("DOUBLE PTR", "")
            .replace("QWORD PTR", "").replace("DWORD PTR", "")
            .replace("FLOAT PTR", "").replace("WORD PTR", "")
            .replace("BYTE PTR", "").replace(" ", "");
        Matcher matcher = ESP_MEMORY.matcher(value);
        if (!matcher.matches()) return null;
        if (matcher.group(2) == null) return 0L;
        Long parsed = immediate(matcher.group(2));
        if (parsed == null) return null;
        return "-".equals(matcher.group(1)) ? -parsed : parsed;
    }

    /**
     * Expand a truncated callee-cleaned x86 prototype from the callee itself.
     * A unanimous {@code RET n} fixes the explicit stack byte count, while
     * complete pre-write reads of that incoming range prove that the bytes are
     * real arguments rather than an unusual cleanup convention.  At least one
     * newly exposed x87 qword is required: this keeps the rule focused on the
     * common failure mode where an old one-dword signature hid later doubles.
     *
     * Callers are deliberately not evidence here.  Their decompilation already
     * depends on the bad prototype and would make the inference circular.
     */
    private boolean addMachineStackArityExpansion(Function function, List<Row> rows)
            throws Exception {
        if (pointerSize != 4 || function.hasVarArgs() ||
                !("__thiscall".equals(function.getCallingConventionName()) ||
                    "__stdcall".equals(function.getCallingConventionName())) ||
                manual(function.getSignatureSource()) ||
                manual(function.getReturn().getSource())) return false;

        List<Parameter> parameters = explicitParameters(function).stream()
            .sorted(Comparator.comparingInt(Parameter::getOrdinal)).toList();
        if (parameters.stream().anyMatch(parameter ->
                manual(parameter.getSource()) || !parameter.hasStackStorage())) return false;
        RetPurge purge = uniformRetPurge(function);
        if (purge == null || purge.bytes <= 0 || purge.bytes > 0x100 ||
                purge.bytes % pointerSize != 0) return false;

        int declaredBytes = parameters.stream().mapToInt(this::parameterSpan).sum();
        if (declaredBytes >= purge.bytes || declaredBytes % pointerSize != 0) return false;

        IncomingStackEvidence incoming = incomingStackEvidence(function,
            pointerSize * 2L, purge.bytes);
        for (long offset = pointerSize * 2L;
                offset < pointerSize * 2L + purge.bytes; offset++)
            if (!incoming.readBytes.contains(offset)) return false;

        long missingStart = pointerSize * 2L + declaredBytes;
        boolean newX87Double = incoming.doubleStarts.stream()
            .anyMatch(offset -> offset >= missingStart);
        if (!newX87Double) return false;

        List<String> types = new ArrayList<>(), names = new ArrayList<>(),
            storages = new ArrayList<>(), selected = new ArrayList<>();
        Set<String> usedNames = new HashSet<>();
        long frameOffset = pointerSize * 2L;
        for (Parameter parameter : parameters) {
            int span = parameterSpan(parameter);
            types.add(typeSpec(parameter.getFormalDataType()));
            names.add(parameter.getName());
            usedNames.add(parameter.getName());
            int storageLength = parameter.getFormalDataType().getLength() > 0 ?
                parameter.getFormalDataType().getLength() : parameter.getLength();
            storages.add(new VariableStorage(currentProgram,
                (int)(frameOffset - pointerSize), storageLength)
                .getSerializationString());
            frameOffset += span;
        }

        int nextName = parameters.size() + 1;
        while (frameOffset < pointerSize * 2L + purge.bytes) {
            String type;
            int length;
            if (incoming.doubleStarts.contains(frameOffset)) {
                type = "/double";
                length = 8;
            }
            else {
                type = incoming.floatPointerStarts.contains(frameOffset) ?
                    "pointer:/float" : "/undefined4";
                length = pointerSize;
            }
            // A qword may begin only on the current dword boundary and must fit
            // wholly inside the exact RET purge.
            if (frameOffset + length > pointerSize * 2L + purge.bytes) return false;
            String name;
            do name = "param_" + nextName++; while (!usedNames.add(name));
            types.add(type);
            names.add(name);
            storages.add(new VariableStorage(currentProgram,
                (int)(frameOffset - pointerSize), length).getSerializationString());
            selected.add("EBP+0x" + Long.toHexString(frameOffset).toUpperCase(Locale.ROOT) +
                "=" + type);
            frameOffset += length;
        }

        StoragePlan customPlan = withAutoParameters(function,
            new StoragePlan(types, names, storages));
        rows.add(Row.fullCustom(function, "machine_stack_arity_expansion", true,
            typeSpec(function.getReturnType()), function.getCallingConventionName(), false,
            String.join(";", customPlan.types), String.join(";", customPlan.names),
            String.join(";", customPlan.storages), "high",
            "every machine RET purges exactly " + purge.bytes +
            " explicit stack bytes while the current signature describes " +
            declaredBytes + "; every incoming byte is read before an overlapping " +
            "listing write; newly exposed x87 double slot(s)=" +
            incoming.doubleStarts.stream().filter(offset -> offset >= missingStart).toList() +
            "; inferred=" + selected + "; sites=" +
            String.join(" | ", incoming.sites) + "; ret_sites=" +
            String.join(" | ", purge.sites)));
        return true;
    }

    private IncomingStackEvidence incomingStackEvidence(Function function,
            long start, int byteCount) {
        long end = start + byteCount;
        Set<Long> readBytes = new HashSet<>(), writtenBytes = new HashSet<>(),
            doubleStarts = new HashSet<>(), floatPointerStarts = new HashSet<>();
        List<String> sites = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                Long offset = stackOffset(instruction, operand);
                if (offset == null || offset < start || offset >= end) continue;
                String rendered = instruction.getDefaultOperandRepresentation(operand)
                    .toUpperCase(Locale.ROOT);
                int width = memoryWidth(rendered);
                if (width <= 0) width = pointerSize;
                width = (int)Math.min(width, end - offset);
                boolean write = operand == 0 && writesStackMemory(mnemonic);
                boolean read = !write || readsFirstOperand(mnemonic);
                if (read && !stackRangeWritten(writtenBytes, offset, width)) {
                    for (int index = 0; index < width; index++)
                        readBytes.add(offset + index);
                    if (width == 8 && x87MemoryRead(mnemonic) &&
                            (rendered.contains("DOUBLE PTR") ||
                                rendered.contains("QWORD PTR")))
                        doubleStarts.add(offset);
                    if (sites.size() < 32)
                        sites.add(addr(instruction.getAddress()) + " " + instruction);
                }
                if (write)
                    for (int index = 0; index < width; index++)
                        writtenBytes.add(offset + index);
            }
        }
        for (long offset = start; offset < end; offset += pointerSize)
            if (floatPointerParameter(function, offset)) floatPointerStarts.add(offset);
        return new IncomingStackEvidence(readBytes, doubleStarts,
            floatPointerStarts, sites);
    }

    /** Exact MOV from one incoming dword followed by at least two distinct
     * float dereferences through that register proves a float-vector pointer. */
    private boolean floatPointerParameter(Function function, long frameOffset) {
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction load = instructions.next();
            if (!"MOV".equalsIgnoreCase(load.getMnemonicString()) ||
                    load.getNumOperands() < 2 ||
                    !Long.valueOf(frameOffset).equals(stackOffset(load, 1))) continue;
            String register = fullRegister(load.getDefaultOperandRepresentation(0));
            if (register.isBlank()) continue;
            Set<Long> offsets = new HashSet<>();
            boolean conflict = false;
            Instruction use = listing.getInstructionAfter(load.getAddress());
            while (use != null && function.getBody().contains(use.getAddress())) {
                String mnemonic = use.getMnemonicString().toUpperCase(Locale.ROOT);
                List<String> operands = operandRepresentations(use);
                for (String operand : operands) {
                    if (!memoryUsesUnscaledRegister(operand, register)) continue;
                    if (!operand.contains("FLOAT PTR")) { conflict = true; break; }
                    BaseMemory memory = baseMemory(operand);
                    if (memory != null && register.equals(memory.base))
                        offsets.add(memory.offset);
                }
                if (conflict || "CALL".equals(mnemonic)) break;
                String destination = operands.isEmpty() ? "" : fullRegister(operands.get(0));
                if (register.equals(destination) && writesFirstOperand(mnemonic)) break;
                use = listing.getInstructionAfter(use.getAddress());
            }
            if (!conflict && offsets.size() >= 2) return true;
        }
        return false;
    }

    private boolean incomingStackSlotReferenced(Function function, Parameter parameter) {
        long expectedOffset = (long)parameter.getStackOffset() + pointerSize;
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                Long offset = stackOffset(instruction, operand);
                if (offset != null && offset == expectedOffset) return true;
            }
        }
        return false;
    }

    /**
     * A semantic return propagated through a wrapper is unsafe while the wrapper's own
     * calling convention is still unknown: Ghidra locks an incomplete prototype and turns
     * real live-in registers/stack slots into unaff_/in_stack_ artifacts.  Retire only the
     * exact automation-owned state; a later convention recovery can infer it again.
     */
    private void addUnsafeUnknownConventionReturnRevert(Function function, List<Row> rows) {
        if (!"unknown".equalsIgnoreCase(function.getCallingConventionName()) ||
                !hasTag(function, "RECOVERED_PROTOTYPE") ||
                "/undefined".equals(typeSpec(function.getReturnType()))) return;
        String comment = function.getComment();
        if (comment == null || !comment.contains("[STPrototypeApplier] Propagated return."))
            return;
        Parameter returned = function.getReturn();
        if (manual(returned.getSource())) return;
        rows.add(Row.target(function, "unknown_convention_return_revert", true,
            "return", -1, returned, "", "/undefined", "high",
            "automation-owned propagated return is deferred until the wrapper calling " +
            "convention and live-in parameter storage are recovered"));
    }

    /** One-time lifecycle repair for databases touched by the earlier applier which
     * accidentally materialized Ghidra's unsized `/undefined` as `/undefined1` while
     * removing phantom parameters.  The exact automation marker is the ownership proof. */
    private void addLegacyMachineArityReturnMigration(Function function, List<Row> rows) {
        if (!hasTag(function, "RECOVERED_ABI_CONSISTENCY")) return;
        if (function.getReturn().getVariableStorage().isUnassignedStorage()) return;
        // This migration repairs only the legacy materialized undefined1 return.
        // Once another analyzer has established a concrete return (notably void),
        // the historical comment remains as provenance and must not resurrect the
        // obsolete unsized return on every fixed-point pass.
        if (!Undefined.isUndefined(unwrap(function.getReturnType()))) return;
        String comment = function.getComment();
        if (comment == null || !comment.contains(
                "[STAbiConsistencyApplier] machine_thiscall_arity ") ||
                !comment.contains("machine_thiscall_arity target=function:-1: " +
                    "prototype=undefined1 "))
            return;
        rows.add(Row.target(function, "machine_thiscall_unsized_return_migration", true,
            "return", -1, function.getReturn(), "", "/undefined", "high",
            "legacy ABI applier materialized the unsized return as undefined1 while " +
            "changing only function arity; restore Ghidra DefaultDataType"));
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
     * Recover an AL/AX source-level return only when both sides of the ABI agree.
     * Every resolved direct caller must either consume the same narrow register
     * width or explicitly kill the result, and reverse CFG traversal from every
     * RET must encounter a write of that exact low accumulator width on every
     * predecessor path before any wider write. A narrow source load alone is
     * deliberately insufficient.
     */
    private void addNarrowAccumulatorReturnRepair(Function function, List<Row> rows) {
        Parameter returned = function.getReturn();
        if (manual(function.getSignatureSource()) || manual(returned.getSource()) ||
                !genericDword(returned.getFormalDataType())) return;
        ReturnUse use = returnUses.get(function.getEntryPoint());
        if (use == null || use.full != 0 || use.narrow < 2 ||
                use.narrowWidths.size() != 1) return;
        CallerWidthAudit audit = completeCallerWidthAudit(function);
        if (audit == null || audit.narrowCalls < 2) return;
        int width = audit.width;
        if ((width != 1 && width != 2) ||
                exactReturnAccumulatorWidth(function) != width) return;
        String proposed = width == 1 ? "/byte" : "/ushort";
        rows.add(Row.target(function, "narrow_accumulator_return", true,
            "return", -1, returned, "", proposed, "high",
            "all resolved direct callers consume only " +
            (width == 1 ? "AL" : "AX") + " or kill the result; narrow_uses=" +
            audit.narrowCalls + ", ignored=" + audit.killedCalls +
            ", full=0, unknown=0; reverse CFG traversal from every RET finds " +
            "the same exact low-accumulator definition width on every path; sites=" +
            String.join(" | ", audit.sites)));
    }

    /** Audit every CFG path following every resolved direct call. A call is
     * accepted only when every path reaches an EAX read of one unanimous width
     * or an explicit EAX kill before the scan bound. */
    private CallerWidthAudit completeCallerWidthAudit(Function target) {
        CallerWidthAudit aggregate = new CallerWidthAudit();
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            Function caller = callers.next();
            if (caller.isExternal()) continue;
            InstructionIterator instructions = listing.getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction call = instructions.next();
                if (!"CALL".equalsIgnoreCase(call.getMnemonicString())) continue;
                Function called = resolveThunk(directCalledFunction(call));
                if (called == null || !called.equals(target)) continue;
                RegisterUse use = completeAccumulatorUse(caller, call);
                if (use.width < 0) return null;
                if (use.width == 0) aggregate.killedCalls++;
                else {
                    if (aggregate.width != 0 && aggregate.width != use.width) return null;
                    aggregate.width = use.width;
                    aggregate.narrowCalls++;
                }
                if (aggregate.sites.size() < 24)
                    aggregate.sites.add(addr(caller.getEntryPoint()) + " @ " +
                        addr(call.getAddress()) + " -> " + use.evidence);
            }
        }
        return aggregate.width == 0 ? null : aggregate;
    }

    /** -1 is unresolved, zero is killed on every path, otherwise the exact
     * unanimous accumulator read width. */
    private RegisterUse completeAccumulatorUse(Function caller, Instruction call) {
        Address start = call.getFallThrough();
        if (start == null || !caller.getBody().contains(start))
            return new RegisterUse(-1, "unknown: no in-function fallthrough");
        ArrayDeque<WidthScanState> pending = new ArrayDeque<>();
        pending.add(new WidthScanState(start, 0));
        Set<Address> visited = new HashSet<>();
        Set<Integer> widths = new HashSet<>();
        int killed = 0, nodes = 0;
        while (!pending.isEmpty()) {
            WidthScanState state = pending.removeFirst();
            if (!visited.add(state.address)) continue;
            if (state.distance >= COMPLETE_CALL_USE_SCAN_LIMIT ||
                    ++nodes > COMPLETE_CALL_USE_NODE_LIMIT)
                return new RegisterUse(-1, "unknown: CFG scan limit");
            Instruction cursor = listing.getInstructionAt(state.address);
            if (cursor == null || !caller.getBody().contains(cursor.getAddress()))
                return new RegisterUse(-1, "unknown: missing instruction");
            if (independentAccumulatorDefinition(cursor)) {
                killed++;
                continue;
            }
            int input = semanticAccumulatorInputWidth(cursor);
            if (input > 0) {
                widths.add(input);
                continue;
            }
            String mnemonic = cursor.getMnemonicString().toUpperCase(Locale.ROOT);
            if (accumulatorWidth(cursor.getResultObjects()) > 0 ||
                    "CALL".equals(mnemonic)) {
                killed++;
                continue;
            }
            if (cursor.getFlowType().isTerminal())
                return new RegisterUse(-1,
                    "unknown: terminal before explicit accumulator kill");
            int successors = 0;
            Address fallThrough = cursor.getFallThrough();
            if (fallThrough != null && caller.getBody().contains(fallThrough)) {
                pending.addLast(new WidthScanState(fallThrough, state.distance + 1));
                successors++;
            }
            if (cursor.getFlowType().isJump()) {
                for (Address flow : cursor.getFlows()) {
                    if (!caller.getBody().contains(flow)) continue;
                    pending.addLast(new WidthScanState(flow, state.distance + 1));
                    successors++;
                }
            }
            if (successors == 0)
                return new RegisterUse(-1, "unknown: no successor");
        }
        if (widths.size() > 1)
            return new RegisterUse(-1, "unknown: mixed accumulator widths " + widths);
        if (widths.isEmpty())
            return killed > 0 ? new RegisterUse(0, "killed on every CFG path") :
                new RegisterUse(-1, "unknown: empty CFG audit");
        int width = widths.iterator().next();
        return new RegisterUse(width, "read as " +
            (width == 1 ? "AL" : width == 2 ? "AX" : "EAX") +
            (killed == 0 ? " on every CFG path" : "; remaining paths kill EAX"));
    }

    private int exactReturnAccumulatorWidth(Function function) {
        Map<Address, Set<Address>> predecessors = new HashMap<>();
        List<Instruction> returns = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("RET")) returns.add(instruction);
            Address fallThrough = instruction.getFallThrough();
            if (fallThrough != null && function.getBody().contains(fallThrough))
                predecessors.computeIfAbsent(fallThrough, ignored -> new HashSet<>())
                    .add(instruction.getAddress());
            for (Address flow : instruction.getFlows())
                if (flow != null && function.getBody().contains(flow))
                    predecessors.computeIfAbsent(flow, ignored -> new HashSet<>())
                        .add(instruction.getAddress());
        }
        if (returns.isEmpty()) return 0;
        Integer agreed = null;
        for (Instruction returned : returns) {
            Set<Integer> widths = new HashSet<>();
            Set<Address> visited = new HashSet<>();
            ArrayDeque<Address> pending = new ArrayDeque<>(
                predecessors.getOrDefault(returned.getAddress(), Set.of()));
            if (pending.isEmpty()) return 0;
            while (!pending.isEmpty()) {
                Address address = pending.removeFirst();
                if (!visited.add(address)) continue;
                Instruction instruction = listing.getInstructionAt(address);
                if (instruction == null) return 0;
                int width = lowAccumulatorDefinitionWidth(instruction);
                if (width < 0) return 0;
                if (width > 0) {
                    widths.add(width);
                    continue;
                }
                Set<Address> prior = predecessors.get(address);
                if (prior == null || prior.isEmpty()) return 0;
                pending.addAll(prior);
            }
            if (widths.size() != 1) return 0;
            int width = widths.iterator().next();
            if (agreed != null && agreed != width) return 0;
            agreed = width;
        }
        return agreed == null ? 0 : agreed;
    }

    private int lowAccumulatorDefinitionWidth(Instruction instruction) {
        int result = 0;
        for (Object object : instruction.getResultObjects()) {
            if (!(object instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (Set.of("EAX", "RAX").contains(name)) result = Math.max(result, 4);
            else if ("AX".equals(name)) result = Math.max(result, 2);
            else if ("AL".equals(name)) result = Math.max(result, 1);
            else if ("AH".equals(name)) return -1;
        }
        return result;
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
        Map<Long, List<String>> typedForwards =
            typedDoubleForwardEvidence(function, slots);
        for (Map.Entry<Long, List<String>> entry : typedForwards.entrySet())
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
        Set<Long> qwordStarts = candidateQwordStarts(slots);
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

    /**
     * A wrapper often forwards one incoming double as two ordinary PUSHes to a
     * callee whose prototype is already typed.  Follow only exact EBP-slot to
     * register to PUSH copies inside one straight-line block.  This turns the
     * common `0, 0x40240000` spelling back into one `double` argument without
     * learning anything from the constant itself.
     */
    private Map<Long, List<String>> typedDoubleForwardEvidence(Function function,
            List<ParameterSlot> slots) {
        Map<Long, List<String>> result = new TreeMap<>();
        Set<Long> qwordStarts = candidateQwordStarts(slots);
        if (qwordStarts.isEmpty()) return result;

        Map<String, Long> origins = new TreeMap<>();
        List<Long> pushed = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operandRepresentations(instruction);
            if ("PUSH".equals(mnemonic) && !operands.isEmpty()) {
                String sourceRegister = fullRegister(operands.get(0));
                Long origin = sourceRegister.isBlank() ?
                    incomingCandidateWord(instruction, 0, qwordStarts) :
                    origins.get(sourceRegister);
                pushed.add(origin);
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                Function target = directCalledFunction(instruction);
                if (target != null) target = resolveThunk(target);
                collectTypedDoubleForwardEvidence(function, instruction, target,
                    pushed, qwordStarts, result);
                pushed.clear();
                for (String register : List.of("EAX", "ECX", "EDX"))
                    origins.remove(register);
                continue;
            }
            if (instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) {
                origins.clear();
                pushed.clear();
                continue;
            }
            if ("MOV".equals(mnemonic) && operands.size() >= 2) {
                String destination = fullRegister(operands.get(0));
                if (!destination.isBlank()) {
                    String source = fullRegister(operands.get(1));
                    Long origin = source.isBlank() ?
                        incomingCandidateWord(instruction, 1, qwordStarts) :
                        origins.get(source);
                    if (origin == null) origins.remove(destination);
                    else origins.put(destination, origin);
                    continue;
                }
            }
            if (!operands.isEmpty()) {
                String destination = fullRegister(operands.get(0));
                if (!destination.isBlank() && writesFirstOperand(mnemonic))
                    origins.remove(destination);
            }
            // Any explicit ESP adjustment or stack restore makes older PUSHes
            // ambiguous; ordinary register scheduling between PUSHes remains OK.
            if (instruction.toString().toUpperCase(Locale.ROOT).contains("ESP"))
                pushed.clear();
        }
        return result;
    }

    private void collectTypedDoubleForwardEvidence(Function function,
            Instruction call, Function target, List<Long> pushed,
            Set<Long> qwordStarts, Map<Long, List<String>> result) {
        if (target == null || target.hasVarArgs() || pushed.isEmpty()) return;
        List<Parameter> stack = explicitParameters(target).stream()
            .filter(Parameter::hasStackStorage)
            .sorted(Comparator.comparingInt(Parameter::getStackOffset)).toList();
        if (stack.isEmpty()) return;
        int base = stack.get(0).getStackOffset();
        if (base < 0 || base % pointerSize != 0) return;
        int end = base;
        Set<Integer> occupied = new HashSet<>();
        List<Integer> doubleWords = new ArrayList<>();
        for (Parameter parameter : stack) {
            int offset = parameter.getStackOffset();
            int span = parameterSpan(parameter);
            if (offset < base || offset % pointerSize != 0 || span % pointerSize != 0)
                return;
            int firstWord = (offset - base) / pointerSize;
            for (int word = 0; word < span / pointerSize; word++)
                if (!occupied.add(firstWord + word)) return;
            end = Math.max(end, offset + span);
            DataType type = unwrap(parameter.getFormalDataType());
            if (type != null && type.getLength() == 8 &&
                    "/double".equals(type.getPathName())) doubleWords.add(firstWord);
        }
        int wordCount = (end - base) / pointerSize;
        if (wordCount < 2 || pushed.size() < wordCount) return;
        for (int word = 0; word < wordCount; word++)
            if (!occupied.contains(word)) return;

        int pushedBase = pushed.size() - wordCount;
        for (int lowWord : doubleWords) {
            int lowPush = pushedBase + wordCount - 1 - lowWord;
            int highPush = pushedBase + wordCount - 1 - (lowWord + 1);
            if (lowPush < pushedBase || highPush < pushedBase) continue;
            Long low = pushed.get(lowPush), high = pushed.get(highPush);
            if (low == null || high == null || high != low + pointerSize ||
                    !qwordStarts.contains(low)) continue;
            result.computeIfAbsent(low, ignored -> new ArrayList<>()).add(
                addr(call.getAddress()) + " forwards adjacent incoming dwords to " +
                target.getName(true) + " parameter stack slot +0x" +
                Integer.toHexString(lowWord * pointerSize) + " typed /double");
        }
    }

    private Long incomingCandidateWord(Instruction instruction, int operand,
            Set<Long> qwordStarts) {
        Long offset = stackOffset(instruction, operand);
        if (offset == null) return null;
        return qwordStarts.contains(offset) || qwordStarts.contains(offset - pointerSize) ?
            offset : null;
    }

    private Set<Long> candidateQwordStarts(List<ParameterSlot> slots) {
        Set<Long> result = new HashSet<>();
        for (int index = 0; index < slots.size(); index++) {
            ParameterSlot first = slots.get(index);
            if (first.offset < pointerSize * 2L) continue;
            if (first.span == 8 && genericQword(first.parameter.getFormalDataType())) {
                result.add(first.offset);
                continue;
            }
            if (first.span != 4 || !genericDword(first.parameter.getFormalDataType()) ||
                    index + 1 >= slots.size()) continue;
            ParameterSlot second = slots.get(index + 1);
            if (second.offset == first.offset + pointerSize && second.span == 4 &&
                    genericDword(second.parameter.getFormalDataType()))
                result.add(first.offset);
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
                    manual(parameter.getSource())) continue;
            String previousGeneratedType = previousGeneratedWidthType(function, parameter);
            boolean generic = genericDword(parameter.getFormalDataType());
            boolean generatedNarrow = !previousGeneratedType.isBlank() &&
                parameter.getFormalDataType().getLength() > 0 &&
                parameter.getFormalDataType().getLength() < pointerSize;
            if (!generic && !generatedNarrow) continue;
            WidthEvidence evidence = parameterWidth(function, parameter);
            if (evidence == null || evidence.proposedType.isBlank() || evidence.conflict) {
                if (generatedNarrow) {
                    rows.add(Row.target(function, "stack_parameter_width_revert", true,
                        "parameter", parameter.getOrdinal(), parameter,
                        parameter.getName(), previousGeneratedType, "high",
                        "previous automatic narrow-width proof no longer qualifies; " +
                        "restoring generated baseline " + previousGeneratedType));
                }
                continue;
            }
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
                    !(genericPointer(parameter.getFormalDataType()) ||
                        generatedPointerShape(parameter.getFormalDataType()))) continue;
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
        // Ghidra's ordinary x86 stack storage is expressed in entry-SP coordinates,
        // while the Listing below uses the post-prologue EBP frame.  Derive the
        // physical EBP slot from ABI argument order.  Trying both coordinates and
        // selecting the stronger-looking row can silently borrow evidence from the
        // adjacent argument, especially when both are generic machine words.
        List<ScalarRoleEvidence> candidates = new ArrayList<>();
        Set<Long> offsets = new LinkedHashSet<>();
        Long ordinalOffset = abiFrameOffset(function, parameter);
        if (ordinalOffset != null) offsets.add(ordinalOffset);
        else offsets.add((long)parameter.getStackOffset() + pointerSize);
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
        ScalarRoleEvidence selected = candidates.size() == 1 ? candidates.get(0) : null;
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
        Map<Long, Address> derivedSpills = new HashMap<>();
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
                Long destinationOffset = stackOffset(instruction, 0);
                if (destinationOffset != null && destinationOffset != expectedOffset &&
                        !sourceRegister.isBlank() && aliases.contains(sourceRegister))
                    derivedSpills.putIfAbsent(destinationOffset,
                        instruction.getAddress());
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
        collectDerivedScalarUses(function, evidence, derivedSpills);
        return evidence.directReads == 0 ? null : evidence;
    }

    /**
     * A pre-overwrite scalar lifetime may be copied to a true local before the
     * incoming argument slot is reused as a pointer.  Reads of that exact local
     * remain evidence about the incoming value, while post-overwrite accesses
     * through the argument slot do not.  Stop each derived local at its first
     * subsequent write and record only exact-width comparisons/truncations.
     */
    private void collectDerivedScalarUses(Function function,
            ScalarRoleEvidence evidence, Map<Long, Address> spills) {
        if (spills.isEmpty()) return;
        Map<Long, Address> active = new HashMap<>(spills);
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext() && !active.isEmpty()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operandRepresentations(instruction);
            for (int index = 0; index < operands.size(); index++) {
                Long offset = stackOffset(instruction, index);
                if (offset == null || !active.containsKey(offset) ||
                        instruction.getAddress().compareTo(active.get(offset)) <= 0)
                    continue;
                boolean write = index == 0 && writesFirstOperand(mnemonic);
                if (write) {
                    active.remove(offset);
                    continue;
                }
                int width = memoryWidth(operands.get(index));
                if (width > 0 && width < pointerSize) {
                    evidence.unsignedBounds++;
                    if (evidence.sites.size() < 16)
                        evidence.sites.add(addr(instruction.getAddress()) +
                            " derived narrow scalar use: " + instruction);
                }
                if (!"CMP".equals(mnemonic) && !"TEST".equals(mnemonic)) continue;
                Instruction next = listing.getInstructionAfter(instruction.getAddress());
                String jump = next == null ? "" :
                    next.getMnemonicString().toUpperCase(Locale.ROOT);
                if (Set.of("JL", "JLE", "JG", "JGE").contains(jump))
                    evidence.signedComparisons++;
                else if (Set.of("JA", "JAE", "JB", "JBE", "JC", "JNC",
                        "JNA", "JNAE", "JNB", "JNBE").contains(jump))
                    evidence.unsignedBounds++;
                if (evidence.sites.size() < 16)
                    evidence.sites.add(addr(instruction.getAddress()) +
                        " derived scalar comparison: " + instruction +
                        (jump.isBlank() ? "" : "; " + jump));
            }
        }
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
                    if (proposed.isBlank())
                        proposed = forwardedNarrowParameterType(function, instruction);
                    if (proposed.isBlank()) unmaskedDwordReads++;
                }
                else if (upperSource.contains("DWORD PTR")) unmaskedDwordReads++;
                if (!proposed.isBlank()) {
                    candidates.add(proposed);
                    if (sites.size() < 12) sites.add(addr(instruction.getAddress()) + " " +
                        instruction.toString() +
                        ("MOV".equals(mnemonic) ?
                            "; first-use mask or exact narrow callee formal" : ""));
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

    /**
     * A 32-bit x86 stack slot is often loaded with MOV even when the source-level
     * parameter is byte/word-sized.  In a transparent one-call wrapper the callee's
     * independently recovered narrow formal is the only observable consumer of that
     * slot.  Treat it like an immediate mask, but only when the load is pushed intact,
     * the complete push vector matches the callee, and no control-flow split intervenes.
     */
    private String forwardedNarrowParameterType(Function wrapper, Instruction load) {
        if (wrapper.getBody().getNumAddresses() > 64) return "";
        String register = fullRegister(load.getDefaultOperandRepresentation(0));
        if (register.isBlank()) return "";
        List<String> pushes = new ArrayList<>();
        boolean pushedLoadedValue = false;
        int calls = 0;
        Instruction instruction = listing.getInstructionAfter(load.getAddress());
        for (int count = 0; instruction != null && count < 24 &&
                wrapper.getBody().contains(instruction.getAddress()); count++) {
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            List<String> operands = operandRepresentations(instruction);
            if (instruction.getFlowType().isJump() ||
                    instruction.getFlowType().isTerminal()) return "";
            if ("PUSH".equals(mnemonic)) {
                String source = operands.isEmpty() ? "" : fullRegister(operands.get(0));
                pushes.add(source);
                if (register.equals(source)) pushedLoadedValue = true;
                instruction = listing.getInstructionAfter(instruction.getAddress());
                continue;
            }
            if ("CALL".equals(mnemonic)) {
                calls++;
                Function called = resolveThunk(directCalledFunction(instruction));
                if (called == null || !pushedLoadedValue || calls != 1) return "";
                List<Parameter> targets = new ArrayList<>();
                for (Parameter parameter : explicitParameters(called))
                    if (parameter.hasStackStorage()) targets.add(parameter);
                if (pushes.size() != targets.size()) return "";
                String selected = "";
                int matches = 0;
                for (int index = 0; index < targets.size(); index++) {
                    String pushed = pushes.get(pushes.size() - 1 - index);
                    if (!register.equals(pushed)) continue;
                    DataType targetType = unwrap(targets.get(index).getFormalDataType());
                    if (targetType == null || targetType.getLength() < 1 ||
                            targetType.getLength() >= pointerSize ||
                            targetType instanceof Pointer || Undefined.isUndefined(targetType))
                        return "";
                    selected = typeSpec(targetType);
                    matches++;
                }
                if (matches != 1) return "";
                // A call destroys EAX/ECX/EDX, so any later spelling of those registers
                // is a new SSA value.  Callee-saved registers retain the forwarded input;
                // reject the narrowing if that old value has another downstream use.
                if (Set.of("EAX", "ECX", "EDX").contains(register)) return selected;
                return registerValueUsedAfterCall(wrapper, instruction, register) ? "" : selected;
            }
            // Before the value is copied to the outgoing stack, any other use or
            // redefinition of its register means this is not a transparent forward.
            if (!pushedLoadedValue &&
                    (mentionsRegister(instruction.getInputObjects(), register) ||
                     mentionsRegister(instruction.getResultObjects(), register))) return "";
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return "";
    }

    private boolean registerValueUsedAfterCall(Function function, Instruction call,
            String register) {
        Instruction instruction = listing.getInstructionAfter(call.getAddress());
        while (instruction != null && function.getBody().contains(instruction.getAddress())) {
            boolean input = mentionsRegister(instruction.getInputObjects(), register);
            boolean output = mentionsRegister(instruction.getResultObjects(), register);
            if (input) return true;
            if (output) return false;
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return false;
    }

    private String previousGeneratedWidthType(Function function, Parameter parameter) {
        String comment = function.getComment();
        if (comment == null || comment.isBlank()) return "";
        String prefix = "[STAbiConsistencyApplier] stack_parameter_width target=parameter:" +
            parameter.getOrdinal() + ":";
        for (String line : comment.split("\\R")) {
            String trimmed = line.trim();
            if (!trimmed.startsWith(prefix)) continue;
            Matcher matcher = Pattern.compile(
                "(?:^|\\s)previous_type=([^\\s;]+)").matcher(trimmed);
            if (matcher.find()) return matcher.group(1);
        }
        return "";
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

    private boolean generatedPointerShape(DataType type) {
        DataType current = unwrap(type);
        if (!(current instanceof Pointer pointer)) return false;
        DataType pointed = unwrap(pointer.getDataType());
        if (!(pointed instanceof Structure structure) ||
                !structure.getPathName().contains("/Recovered/PointerShapes/"))
            return false;
        String description = structure.getDescription();
        return description != null && description.contains("[STPointerShapeApplier]");
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
                    "ebp_context_register",
                    "machine_esp_stack_prototype",
                    "x87_double_parameter_slots", "x87_stack_storage_migration",
                    "full_eax_return", "narrow_accumulator_return",
                    "stack_parameter_width",
                    "stack_parameter_scalar_role", "pointer_return_element_width"))
                out.write(kind + ": " + rows.stream().filter(row ->
                    row.repairKind.equals(kind)).count() + "\n");
            out.write("note=USER_DEFINED and IMPORTED target types are never selected for automatic repair.\n");
            out.write("note_returns=Full-EAX repairs require full-width caller use and a full EAX definition on every RET path. AL/AX repairs require a unanimous bounded CFG caller-use audit, including exact zero-extension masks, and an exact low-accumulator definition on every callee RET path.\n");
            out.write("note_parameters=Narrow stack parameters require consistent MOVSX/MOVZX or an immediate AND mask and no unmasked dword reads.\n");
            out.write("note_x87_doubles=An exact x87 double-width EBP read before any overlapping stack write may merge adjacent generic dwords; one generic qword may also be retyped when its exact halves are stored into an independently typed double class field. Stack byte count is preserved.\n");
            out.write("note_stack_arity_expansion=A truncated non-manual __thiscall/__stdcall signature may expand to an exact unanimous RET purge only when every incoming byte is read before overlap and the missing suffix contains an exact x87 double slot; callers are not evidence.\n");
            out.write("note_esp_stack_prototype=A placeholder unknown frameless function may become __stdcall only when a balanced entry-SP trace covers the unanimous RET purge byte-for-byte and an exact x87 qword fixes the slot partition; callers and semantic names are not evidence.\n");
            out.write("note_ebp_context=Non-frame helpers may receive one neutral context pointer in EBP only when EBP is read before definition and generic ECX/EDX inputs have no semantic use.\n");
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
        int full, narrow, ignored, unknown;
        final Set<Integer> narrowWidths = new HashSet<>();
        final List<String> sites = new ArrayList<>();
    }
    private static class CallerWidthAudit {
        int width, narrowCalls, killedCalls;
        final List<String> sites = new ArrayList<>();
    }
    private record WidthScanState(Address address, int distance) { }
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
    private record RetPurge(int bytes, List<String> sites) { }
    private record IncomingStackEvidence(Set<Long> readBytes,
        Set<Long> doubleStarts, Set<Long> floatPointerStarts,
        List<String> sites) { }
    private record EspStackEvidence(Set<Long> readBytes, Set<Long> doubleStarts,
        Set<Long> pointerStarts, List<String> sites, boolean balanced) { }
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
