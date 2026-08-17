// Recover void, boolean, and noreturn semantics from conservative body evidence.
// Read-only: writes return_semantics_proposals.tsv and diagnostics.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Return Semantics

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.StackReference;

public class STReturnSemanticsAnalyzer extends GhidraScript {
    private static final Pattern VALUE_RETURN = Pattern.compile("(?m)\\breturn\\s+([^;\\r\\n]+);");
    private static final Pattern BARE_RETURN = Pattern.compile("(?m)\\breturn\\s*;");
    private static final int RETURN_USE_SCAN_LIMIT = 96;
    private static final int RETURN_USE_NODE_LIMIT = 192;
    private final List<Failure> failures = new ArrayList<>();
    private final Map<Address, ReturnUse> returnUses = new HashMap<>();
    private final Map<Address, ParameterReturn> returnedPointerParameterCache =
        new HashMap<>();
    private final Set<Address> returnedPointerParameterMisses = new HashSet<>();
    private boolean repairOnly;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        String[] arguments = getScriptArgs();
        repairOnly = arguments.length > 1 &&
            "repair-only".equalsIgnoreCase(arguments[1]);
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
        if (!repairOnly) collectReturnUses();
        List<Row> rows = new ArrayList<>(); int functionsSeen = 0;
        try {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled(); Function function = functions.next();
                if (function.isExternal() || function.isThunk() || isLibrary(function)) continue;
                functionsSeen++;
                Row row = analyze(function, decompiler);
                if (row != null) rows.add(row);
            }
        }
        finally { decompiler.dispose(); }
        writeRows(directory.resolve("return_semantics_proposals.tsv"), rows);
        writeFailures(directory.resolve("return_semantics_failures.tsv"));
        writeSummary(directory.resolve("return_semantics_summary.txt"), functionsSeen, rows);
        println("Return-semantics analysis complete: " + directory.toAbsolutePath().normalize());
        println("Mode=" + (repairOnly ? "repair-only" : "full") +
            ", functions=" + functionsSeen + ", proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count() + ", failures=" + failures.size());
    }

    private Row analyze(Function function, DecompInterface decompiler) throws Exception {
        String currentType = typeSpec(function.getReturnType());
        Parameter returned = function.getReturn();
        boolean mutable = returned.getSource() != SourceType.USER_DEFINED &&
            returned.getSource() != SourceType.IMPORTED;
        ReturnUse observed = returnUses.get(function.getEntryPoint());
        /*
         * A read of EAX after CALL is necessary evidence for a return value, but it is not
         * sufficient evidence.  Optimized x86 routinely carries a value through EAX across a
         * call whose source-level return type is void, and SSA joins can make that look like a
         * call result.  An older version of this pass automatically changed such functions back
         * to undefined4.  That produced extraout_EAX/in_EAX artifacts in the callee itself.
         *
         * Repair only our own earlier mutation, identified by both persistent comments.  This is
         * not a new semantic guess: it restores the last evidence-backed state and leaves the
         * contradictory callsites in a review-only row below.
         */
        boolean previousUnsafeRollback = mutable && genericUnknown(currentType) &&
            hasMarker(function, "ignored_eax_void") &&
            hasMarker(function, "revert_unsafe_ignored_eax_void");
        if (previousUnsafeRollback)
            return row(function, currentType, "/void", function.hasNoReturn(), false,
                true, "repair_unsafe_eax_rollback", "high",
                "restore the earlier evidence-backed void type after an unsafe automated " +
                "rollback; post-CALL EAX reads alone do not prove a source-level return value" +
                observedEvidence(observed));
        // The export safety pass repairs only a mutation made by this script itself. Ordinary
        // semantic discovery belongs to deep mode; otherwise export can start a transitive
        // void-inference chain and fail its own small ABI stabilization bound.
        if (repairOnly) return null;

        Body body = body(function);
        if (!body.hasRet && body.endsInNoReturnCall && !function.hasNoReturn())
            return row(function, currentType, currentType, false, true, mutable,
                "noreturn_terminal_call", "high",
                "function has no RET and its terminal CALL targets a function marked noreturn");

        // A leaf which never defines any part of the x86 return register cannot return a
        // scalar value. This evidence is stronger than the decompiler's current C return text
        // and needs no expensive decompilation.
        if (body.hasRet && !body.hasCall && !body.writesAccumulator &&
                genericUnknown(currentType))
            return row(function, currentType, "/void", function.hasNoReturn(), false, mutable,
                "leaf_void", "high",
                "leaf function has RET and never writes EAX/AX/AL/AH");

        String forwardedReturn = mutable &&
            (genericUnknown(currentType) || currentType.equals("/void")) &&
            observed != null && observed.used >= 2 ?
                exactForwardedCallReturn(function) : "";
        if (!forwardedReturn.isBlank() && !forwardedReturn.equals(currentType))
            return row(function, currentType, forwardedReturn,
                function.hasNoReturn(), false, true,
                "forwarded_call_return", "high",
                "every reachable RET receives full EAX from a trusted concrete " +
                    "callee with return type " + forwardedReturn +
                    "; every later accumulator definition is an exact full-width " +
                    "integer transform of that value" +
                    observedEvidence(observed));

        RoundTripReturn roundTrip = mutable &&
            (genericUnknown(currentType) || currentType.equals("/void") ||
                hasMarker(function, "pointer_producer_argument_roundtrip")) &&
            observed != null && observed.used >= 2 && observed.unknown == 0 ?
                exactPointerProducerRoundTripReturn(function) : null;
        boolean roundTripOverrideRepair = roundTrip != null &&
            needsRoundTripCallOverride(function, roundTrip);
        if (roundTrip != null &&
                (!roundTrip.type.equals(currentType) || roundTripOverrideRepair))
            return roundTripRow(function, currentType, roundTrip,
                function.hasNoReturn(), false, true,
                "pointer_producer_argument_roundtrip", "high",
                "every reachable RET carries the same trusted pointer-producer ABI " +
                    roundTrip.type + "; at least one path passes that exact live EAX " +
                    "value into a pointer parameter which the helper's complete machine " +
                    "CFG returns unchanged in EAX (roundtrip_calls=" +
                    roundTrip.roundTripCalls + ")" + observedEvidence(observed));

        ParameterReturn returnedParameter = mutable &&
            (genericUnknown(currentType) || currentType.equals("/void")) &&
            observed != null && observed.used >= 2 && observed.unknown == 0 ?
                cachedReturnedPointerParameter(function) : null;
        if (returnedParameter != null)
            return row(function, currentType, returnedParameter.type,
                function.hasNoReturn(), false, true,
                "returned_pointer_parameter", "high",
                "every reachable RET receives full EAX from the same incoming pointer " +
                "parameter " + returnedParameter.name + " (ordinal=" +
                returnedParameter.ordinal + "); no intervening full or partial accumulator " +
                "definition changes that value" + observedEvidence(observed));

        /*
         * Some optimized helpers have a real machine return even though no trusted semantic
         * producer is available yet.  Accept a neutral machine word only when the callee CFG
         * independently defines all 32 EAX bits on every reachable RET and at least two direct
         * callsites consume that register with no unresolved path.  A CALL is a definition only
         * when its result is read inside this function before another accumulator definition;
         * merely observing a CALL does not turn an incidental/clobbered EAX into a return ABI.
         *
         * This deliberately recovers width, not signedness or a domain type.  Later typed-return
         * propagation may refine the neutral word from stronger pointer/enum evidence.
         */
        boolean machineReturnCandidate = mutable &&
            (currentType.equals("/undefined") || currentType.equals("/void")) &&
            observed != null && observed.used >= 2 && observed.unknown == 0;
        if (machineReturnCandidate && allReturnsDefineFullAccumulator(function))
            return row(function, currentType, "/undefined4", function.hasNoReturn(), false,
                true, "machine_eax_return", "high",
                "every reachable RET has a full-width EAX definition established inside the " +
                "callee; at least two direct callers consume it and no caller-use path is " +
                "unresolved" + observedEvidence(observed));

        String sharedTailReturn = machineReturnCandidate ?
            sharedTailReturnType(function) : "";
        if (!sharedTailReturn.isBlank())
            return row(function, currentType, sharedTailReturn,
                function.hasNoReturn(), false, true,
                "shared_tail_return", "high",
                "every reachable exit is the same unconditional jump into a trusted function " +
                "body with concrete return type " + sharedTailReturn +
                observedEvidence(observed));

        boolean scriptVoidWithContradictoryCallsite = mutable && currentType.equals("/void") &&
            hasMarker(function, "ignored_eax_void") && observed != null &&
            (observed.used > 0 || observed.unknown > 0);
        if (scriptVoidWithContradictoryCallsite)
            return row(function, currentType, currentType, function.hasNoReturn(), false,
                false, "void_eax_read_review", "review",
                "void remains unchanged: one or more callsites retain/read EAX, but that alone " +
                "does not prove the callee returned it" + observedEvidence(observed));
        boolean pointerCandidate = genericPointerReturn(currentType) &&
            hasEvidenceBackedPointerVariable(function);
        boolean booleanCandidate = genericInteger(currentType) && body.booleanLike;
        boolean ignoredReturnCandidate = mutable && genericUnknown(currentType) &&
            body.hasRet && observed != null && observed.used == 0 &&
            observed.unknown == 0 && observed.ignored >= 2;
        if (!mutable || (!pointerCandidate && !booleanCandidate && !ignoredReturnCandidate) ||
                function.getBody().getNumAddresses() > 0x800) return null;

        DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
        if (!result.decompileCompleted() || result.getDecompiledFunction() == null) {
            failures.add(new Failure(addr(function.getEntryPoint()), function.getName(true),
                result == null ? "no result" : result.getErrorMessage())); return null;
        }
        String c = result.getDecompiledFunction().getC();
        List<String> returns = new ArrayList<>(); Matcher matcher = VALUE_RETURN.matcher(c);
        while (matcher.find()) returns.add(matcher.group(1).trim());
        int bare = 0; matcher = BARE_RETURN.matcher(c); while (matcher.find()) bare++;
        if (ignoredReturnCandidate && returns.isEmpty())
            return row(function, currentType, "/void", function.hasNoReturn(), false,
                true, "ignored_eax_void", "high",
                "all observed direct callers ignore the return register (ignored=" +
                observed.ignored + ", used=0, unknown=0), and decompilation contains " +
                "no value return");
        Row pointer = pointerCandidate && bare == 0 ?
            typedPointerReturn(function, currentType, returns) : null;
        if (pointer != null) return pointer;
        if (returns.size() >= 2 && bare == 0 && allBooleanConstants(returns) &&
                genericInteger(currentType))
            return row(function, currentType, "/bool", function.hasNoReturn(), function.hasNoReturn(),
                false, "boolean_return_domain", "review",
                "all explicit return values are constants in {0,1}, but the source domain alone " +
                "does not prove the x86 ABI return width; review STAbiConsistencyAnalyzer evidence: " +
                returns);

        return null;
    }

    private void collectReturnUses() throws Exception {
        FunctionIterator callers = currentProgram.getFunctionManager().getFunctions(true);
        while (callers.hasNext()) {
            monitor.checkCancelled();
            Function caller = callers.next();
            if (caller.isExternal()) continue;
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction call = instructions.next();
                if (!"CALL".equalsIgnoreCase(call.getMnemonicString())) continue;
                Function called = resolveThunk(directCalledFunction(call));
                if (called == null || called.isExternal()) continue;
                ReturnUse use = returnUses.computeIfAbsent(called.getEntryPoint(),
                    ignored -> new ReturnUse());
                ReturnDisposition disposition = returnDisposition(caller, call);
                if (disposition == ReturnDisposition.USED) use.used++;
                else if (disposition == ReturnDisposition.IGNORED) use.ignored++;
                else use.unknown++;
            }
        }
    }

    private ReturnDisposition returnDisposition(Function caller, Instruction call) {
        Address start = call.getFallThrough();
        if (start == null || !caller.getBody().contains(start))
            return ReturnDisposition.UNKNOWN;
        Deque<ScanState> pending = new ArrayDeque<>();
        pending.add(new ScanState(start, 0));
        Set<Address> visited = new HashSet<>();
        boolean unknown = false;
        int killedPaths = 0;
        int nodes = 0;
        while (!pending.isEmpty()) {
            ScanState state = pending.removeFirst();
            if (!visited.add(state.address)) continue;
            if (state.distance >= RETURN_USE_SCAN_LIMIT ||
                    ++nodes > RETURN_USE_NODE_LIMIT) {
                unknown = true;
                continue;
            }
            Instruction cursor = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (cursor == null || !caller.getBody().contains(cursor.getAddress())) {
                unknown = true;
                continue;
            }
            if (accumulatorWidth(cursor.getInputObjects()) > 0)
                return ReturnDisposition.USED;
            String mnemonic = cursor.getMnemonicString().toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("RET")) {
                /*
                 * RET does not read EAX at the instruction level.  Treating every tail call as
                 * a used result made generic/incorrect caller return types recursively validate
                 * one another.  Only a protected non-void caller ABI makes the pass-through
                 * semantically meaningful; void callers ignore it and generic callers remain
                 * unknown.
                 */
                if (protectedNonVoidReturn(caller)) return ReturnDisposition.USED;
                if ("/void".equals(typeSpec(caller.getReturnType()))) {
                    killedPaths++;
                    continue;
                }
                unknown = true;
                continue;
            }
            if (accumulatorWidth(cursor.getResultObjects()) > 0 ||
                    "CALL".equals(mnemonic)) {
                killedPaths++;
                continue;
            }
            if (cursor.getFlowType().isTerminal()) {
                killedPaths++;
                continue;
            }
            int successors = 0;
            Address fallThrough = cursor.getFallThrough();
            if (fallThrough != null && caller.getBody().contains(fallThrough)) {
                pending.addLast(new ScanState(fallThrough, state.distance + 1));
                successors++;
            }
            if (cursor.getFlowType().isJump()) {
                for (Address flow : cursor.getFlows()) {
                    if (!caller.getBody().contains(flow)) continue;
                    pending.addLast(new ScanState(flow, state.distance + 1));
                    successors++;
                }
            }
            if (successors == 0) unknown = true;
        }
        return !unknown && killedPaths > 0 ?
            ReturnDisposition.IGNORED : ReturnDisposition.UNKNOWN;
    }

    private boolean hasMarker(Function function, String semantic) {
        String comment = function.getComment();
        return comment != null &&
            comment.contains("[STReturnSemanticsApplier] " + semantic);
    }

    private boolean protectedNonVoidReturn(Function function) {
        SourceType source = function.getReturn().getSource();
        return !"/void".equals(typeSpec(function.getReturnType())) &&
            (source == SourceType.USER_DEFINED || source == SourceType.IMPORTED);
    }

    private String observedEvidence(ReturnUse observed) {
        if (observed == null) return "; no currently resolved direct callsites";
        return "; machine CFG audit: used=" + observed.used + ", ignored=" +
            observed.ignored + ", unknown=" + observed.unknown;
    }

    private int accumulatorWidth(Object[] objects) {
        int width = 0;
        for (Object object : objects) {
            if (!(object instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (Set.of("EAX", "RAX").contains(name)) width = Math.max(width, 4);
            else if ("AX".equals(name)) width = Math.max(width, 2);
            else if (Set.of("AL", "AH").contains(name)) width = Math.max(width, 1);
        }
        return width;
    }

    /**
     * Recover wrappers and branching helpers which return a concrete callee's
     * EAX unchanged.  Caller-side EAX use is only a gate; the proof itself is
     * entirely inside the callee CFG.  All reachable RETs must be dominated by
     * a call returning the same trusted type, and any later call or partial/full
     * accumulator definition rejects the proposal.
     */
    private String exactForwardedCallReturn(Function function) {
        Map<String, DataType> candidates = new HashMap<>();
        InstructionIterator iterator = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        int totalReturns = 0;
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            String mnemonic = instruction.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("RET")) totalReturns++;
            if (!"CALL".equals(mnemonic)) continue;
            Function called = trustedReturnProducer(instruction);
            if (called == null) continue;
            DataType type = called.getReturnType();
            candidates.putIfAbsent(typeSpec(type), type);
        }
        if (totalReturns == 0 || candidates.isEmpty()) return "";
        List<String> proven = new ArrayList<>();
        for (String type : candidates.keySet())
            if (allReturnsForwardType(function, type, totalReturns))
                proven.add(type);
        return proven.size() == 1 ? proven.get(0) : "";
    }

    /**
     * Recover the ordinary MSVC helper idiom {@code return destination;} directly
     * from machine state.  This is deliberately narrower than decompiler text:
     * every reachable RET must carry the same incoming pointer parameter in the
     * complete EAX register.  A CALL, arithmetic operation, partial AL/AX write,
     * unresolved edge, or different parameter on any path rejects the proof.
     */
    private ParameterReturn exactReturnedPointerParameter(Function function) {
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null || function.getBody().getNumAddresses() > 0x4000)
            return null;

        Map<Integer, Parameter> pointerParameters = new HashMap<>();
        for (Parameter parameter : function.getParameters()) {
            DataType type = unwrap(parameter.getFormalDataType());
            if (type instanceof Pointer)
                pointerParameters.put(parameter.getOrdinal(), parameter);
        }
        if (pointerParameters.isEmpty()) return null;

        Deque<ParameterReturnState> pending = new ArrayDeque<>();
        pending.add(new ParameterReturnState(entry.getAddress(), -1));
        Set<ParameterReturnState> visited = new HashSet<>();
        Set<Address> reachedReturns = new HashSet<>();
        Set<Integer> returnedOrdinals = new HashSet<>();
        int totalReturns = 0;
        InstructionIterator count = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (count.hasNext())
            if (count.next().getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET"))
                totalReturns++;
        if (totalReturns == 0) return null;

        int nodes = 0;
        while (!pending.isEmpty()) {
            ParameterReturnState state = pending.removeFirst();
            if (!visited.add(state) || ++nodes > 65536) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress())) return null;
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            int ordinal = state.ordinal;
            int written = accumulatorWidth(instruction.getResultObjects());
            if (written > 0) {
                // Only one exact full-register MOV may establish the identity.
                // Partial writes change the pointer value even if upper EAX bytes survive.
                ordinal = written == 4 && "MOV".equals(mnemonic) ?
                    pointerParameterMovedToEax(function, instruction,
                        pointerParameters) : -1;
            }
            else if ("CALL".equals(mnemonic)) ordinal = -1;

            if (mnemonic.startsWith("RET")) {
                if (ordinal < 0 || !pointerParameters.containsKey(ordinal)) return null;
                reachedReturns.add(instruction.getAddress());
                returnedOrdinals.add(ordinal);
                continue;
            }
            List<Address> successors = instructionSuccessors(function, instruction);
            if (successors.isEmpty()) return null;
            for (Address successor : successors)
                pending.addLast(new ParameterReturnState(successor, ordinal));
        }
        if (reachedReturns.size() != totalReturns || returnedOrdinals.size() != 1)
            return null;
        int ordinal = returnedOrdinals.iterator().next();
        Parameter parameter = pointerParameters.get(ordinal);
        return new ParameterReturn(ordinal, parameter.getName(),
            typeSpec(parameter.getFormalDataType()));
    }

    private ParameterReturn cachedReturnedPointerParameter(Function function) {
        Address address = function.getEntryPoint();
        ParameterReturn cached = returnedPointerParameterCache.get(address);
        if (cached != null) return cached;
        if (returnedPointerParameterMisses.contains(address)) return null;
        ParameterReturn result = exactReturnedPointerParameter(function);
        if (result == null) returnedPointerParameterMisses.add(address);
        else returnedPointerParameterCache.put(address, result);
        return result;
    }

    /**
     * Recover a source-level pointer return across a void-looking copy/initialization helper
     * without changing that helper's C ABI.  The anchor is a trusted pointer producer (for
     * example a verified allocator), not the generic signatures currently assigned to either
     * function.  A helper call preserves the pointer state only when one of its exact stack
     * arguments is the live EAX value and the helper's complete CFG returns that same pointer
     * parameter in full EAX on every RET.
     */
    private RoundTripReturn exactPointerProducerRoundTripReturn(Function function) {
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null || function.getBody().getNumAddresses() > 0x4000)
            return null;
        int totalReturns = 0;
        InstructionIterator count = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (count.hasNext())
            if (count.next().getMnemonicString().toUpperCase(Locale.ROOT)
                    .startsWith("RET")) totalReturns++;
        if (totalReturns == 0) return null;

        Deque<RoundTripState> pending = new ArrayDeque<>();
        pending.add(new RoundTripState(entry.getAddress(), "", 0));
        Set<RoundTripState> visited = new HashSet<>();
        Set<Address> reachedReturns = new HashSet<>();
        Set<String> returnedTypes = new HashSet<>();
        Map<Address, Integer> roundTripSites = new TreeMap<>();
        int maximumRoundTrips = 0;
        int nodes = 0;
        while (!pending.isEmpty()) {
            RoundTripState state = pending.removeFirst();
            if (!visited.add(state) || ++nodes > 65536) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress())) return null;
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String type = state.type;
            int roundTrips = state.roundTripCalls;
            if ("CALL".equals(mnemonic)) {
                String produced = trustedRoundTripPointerProducer(instruction);
                if (!produced.isBlank()) type = produced;
                else if (!type.isBlank()) {
                    int returnedOrdinal = liveEaxArgumentReturnedByCall(instruction);
                    if (returnedOrdinal < 0) {
                        type = "";
                    }
                    else {
                        roundTrips++;
                        Integer previous = roundTripSites.put(instruction.getAddress(),
                            returnedOrdinal);
                        if (previous != null && previous.intValue() != returnedOrdinal)
                            return null;
                    }
                }
            }
            else if (accumulatorWidth(instruction.getResultObjects()) > 0) {
                // Even a partial AL/AX write destroys exact pointer identity.
                type = "";
            }
            if (mnemonic.startsWith("RET")) {
                if (type.isBlank()) return null;
                reachedReturns.add(instruction.getAddress());
                returnedTypes.add(type);
                maximumRoundTrips = Math.max(maximumRoundTrips, roundTrips);
                continue;
            }
            List<Address> successors = instructionSuccessors(function, instruction);
            if (successors.isEmpty()) return null;
            for (Address successor : successors)
                pending.addLast(new RoundTripState(successor, type, roundTrips));
        }
        if (reachedReturns.size() != totalReturns || returnedTypes.size() != 1 ||
                maximumRoundTrips == 0) return null;
        return new RoundTripReturn(returnedTypes.iterator().next(), maximumRoundTrips,
            roundTripSites);
    }

    private boolean needsRoundTripCallOverride(Function function,
            RoundTripReturn proof) {
        for (Address call : proof.callSites.keySet()) {
            String desired = roundTripOverrideFingerprint(call, proof.type);
            if (desired.isBlank() || !desired.equals(existingOverrideFingerprint(function, call)))
                return true;
            // Do not claim an independently installed equivalent override.  Once our own
            // marker exists, however, the returned parameter ordinal is durable exporter
            // input and stale/missing metadata must be repaired.
            if (hasRoundTripCallMarker(call) &&
                    roundTripMarkerOrdinal(call) != proof.callSites.get(call)) return true;
        }
        return false;
    }

    private boolean hasRoundTripCallMarker(Address address) {
        String comment = currentProgram.getListing().getComment(CommentType.EOL, address);
        return comment != null && comment.contains(
            "[STReturnSemanticsApplier] pointer_producer_argument_roundtrip_call");
    }

    private int roundTripMarkerOrdinal(Address address) {
        String comment = currentProgram.getListing().getComment(CommentType.EOL, address);
        if (comment == null) return -1;
        Matcher matcher = Pattern.compile(
            "return_parameter_ordinal=([0-9]+)").matcher(comment);
        return matcher.find() ? Integer.parseInt(matcher.group(1)) : -1;
    }

    private String roundTripOverrideFingerprint(Address callAddress, String returnType) {
        Instruction call = currentProgram.getListing().getInstructionAt(callAddress);
        Function called = call == null ? null : resolveThunk(directCalledFunction(call));
        if (called == null) return "";
        List<String> parts = new ArrayList<>();
        parts.add(called.getCallingConventionName());
        parts.add(returnType);
        for (Parameter parameter : called.getParameters())
            parts.add(typeSpec(parameter.getFormalDataType()));
        return String.join(";", parts);
    }

    private String existingOverrideFingerprint(Function function, Address call) {
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return "none";
        String agreed = "";
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null ||
                    !(value.getDataType() instanceof FunctionDefinition definition)) continue;
            List<String> parts = new ArrayList<>();
            parts.add(definition.getCallingConventionName());
            parts.add(typeSpec(definition.getReturnType()));
            for (ghidra.program.model.data.ParameterDefinition argument :
                    definition.getArguments())
                parts.add(typeSpec(argument.getDataType()));
            String fingerprint = String.join(";", parts);
            if (!agreed.isBlank() && !agreed.equals(fingerprint)) return "ambiguous";
            agreed = fingerprint;
        }
        return agreed.isBlank() ? "none" : agreed;
    }

    private String trustedRoundTripPointerProducer(Instruction instruction) {
        Function called = resolveThunk(directCalledFunction(instruction));
        if (called == null) return "";
        String type = typeSpec(called.getReturnType());
        if (!type.startsWith("pointer:")) return "";
        if (trustedReturnFunction(called) != null) return type;
        if (!"pointer:/void".equals(type)) return "";
        for (ghidra.program.model.listing.FunctionTag tag : called.getTags())
            if ("RECOVERED_UTILITY_MEMORY_ALLOCATE".equals(tag.getName()) ||
                    "RECOVERED_UTILITY_MEMORY_ALLOCATE_ZEROED".equals(tag.getName()))
                return type;
        return "";
    }

    private int liveEaxArgumentReturnedByCall(Instruction call) {
        Function called = resolveThunk(directCalledFunction(call));
        if (called == null || called.hasVarArgs()) return -1;
        ParameterReturn returned = cachedReturnedPointerParameter(called);
        if (returned == null) return -1;
        Parameter parameter = called.getParameter(returned.ordinal);
        if (parameter == null || !parameter.isStackVariable() ||
                parameter.getLength() != currentProgram.getDefaultPointerSize()) return -1;
        int offset = parameter.getStackOffset();
        int pointerSize = currentProgram.getDefaultPointerSize();
        if (offset < pointerSize || (offset - pointerSize) % pointerSize != 0)
            return -1;
        int pushOrdinal = (offset - pointerSize) / pointerSize;
        Instruction cursor = currentProgram.getListing()
            .getInstructionBefore(call.getAddress());
        Address next = call.getAddress();
        int pushes = 0, scanned = 0;
        while (cursor != null && scanned++ < 24) {
            if (!next.equals(cursor.getFallThrough())) return -1;
            String mnemonic = cursor.getMnemonicString().toUpperCase(Locale.ROOT);
            if ("PUSH".equals(mnemonic)) {
                if (pushes == pushOrdinal)
                    return standaloneEaxOperand(cursor, 0) ? returned.ordinal : -1;
                pushes++;
            }
            else if ("CALL".equals(mnemonic) || mnemonic.startsWith("RET") ||
                    cursor.getFlowType().isJump() || writesStackPointer(cursor)) return -1;
            next = cursor.getAddress();
            cursor = currentProgram.getListing().getInstructionBefore(cursor.getAddress());
        }
        return -1;
    }

    private boolean standaloneEaxOperand(Instruction instruction, int operandIndex) {
        Object[] objects = instruction.getOpObjects(operandIndex);
        return objects.length == 1 && objects[0] instanceof Register register &&
            "EAX".equals(register.getName().toUpperCase(Locale.ROOT));
    }

    private boolean writesStackPointer(Instruction instruction) {
        for (Object object : instruction.getResultObjects())
            if (object instanceof Register register &&
                    "ESP".equals(register.getName().toUpperCase(Locale.ROOT)))
                return true;
        return false;
    }

    private int pointerParameterMovedToEax(Function function,
            Instruction instruction, Map<Integer, Parameter> pointerParameters) {
        Register destination = instruction.getRegister(0);
        if (destination == null ||
                !"EAX".equals(destination.getName().toUpperCase(Locale.ROOT))) return -1;

        for (Reference reference : instruction.getOperandReferences(1)) {
            if (!(reference instanceof StackReference stack)) continue;
            for (Parameter parameter : pointerParameters.values())
                if (parameter.isStackVariable() &&
                        parameter.getStackOffset() == stack.getStackOffset())
                    return parameter.getOrdinal();
        }

        Register source = instruction.getRegister(1);
        if (source == null) return -1;
        String sourceName = source.getName().toUpperCase(Locale.ROOT);
        for (Parameter parameter : pointerParameters.values()) {
            Register register = parameter.getRegister();
            if (register != null && sourceName.equals(
                    register.getName().toUpperCase(Locale.ROOT)))
                return parameter.getOrdinal();
        }
        return -1;
    }

    private boolean allReturnsForwardType(Function function, String proposed,
            int totalReturns) {
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null) return false;
        Deque<ForwardState> pending = new ArrayDeque<>();
        pending.add(new ForwardState(entry.getAddress(), false));
        Set<ForwardState> visited = new HashSet<>();
        Set<Address> reachedReturns = new HashSet<>();
        int nodes = 0;
        while (!pending.isEmpty()) {
            ForwardState state = pending.removeFirst();
            if (!visited.add(state) || ++nodes > 32768) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress()))
                return false;
            String mnemonic = instruction.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            boolean hasValue = state.hasValue;
            if ("CALL".equals(mnemonic)) {
                Function producer = trustedReturnProducer(instruction);
                if (producer != null &&
                        proposed.equals(typeSpec(producer.getReturnType())))
                    hasValue = true;
                else if (hasValue) return false;
            }
            else if (hasValue &&
                    accumulatorWidth(instruction.getResultObjects()) > 0 &&
                    !preservesAccumulatorType(instruction, proposed)) return false;
            if (mnemonic.startsWith("RET")) {
                if (!hasValue) return false;
                reachedReturns.add(instruction.getAddress());
                continue;
            }
            for (Address successor : instructionSuccessors(function, instruction))
                pending.addLast(new ForwardState(successor, hasValue));
        }
        return reachedReturns.size() == totalReturns;
    }

    private List<Address> instructionSuccessors(Function function,
            Instruction instruction) {
        List<Address> result = new ArrayList<>();
        Address fallThrough = instruction.getFallThrough();
        if (fallThrough != null && function.getBody().contains(fallThrough))
            result.add(fallThrough);
        if (instruction.getFlowType().isJump()) {
            for (Address flow : instruction.getFlows())
                if (function.getBody().contains(flow) && !result.contains(flow))
                    result.add(flow);
        }
        return result;
    }

    private Function trustedReturnProducer(Instruction instruction) {
        Function direct = directCalledFunction(instruction);
        Function called = resolveThunk(direct);
        return trustedReturnFunction(called);
    }

    private Function trustedReturnFunction(Function called) {
        if (called == null)
            return null;
        String returnType = typeSpec(called.getReturnType());
        /*
         * A neutral dword may be a trusted width anchor without being a semantic type.  Keep
         * this non-recursive: only a call-free callee whose own CFG defines full EAX on every
         * RET can anchor a forwarding wrapper.  Generic callers can therefore never validate
         * one another merely because both currently say undefined4.
         */
        if ("/undefined4".equals(returnType)) {
            Body calledBody = body(called);
            return !calledBody.hasCall && allReturnsDefineFullAccumulator(called) ?
                called : null;
        }
        if (!concreteMachineReturn(called.getReturnType())) return null;
        SourceType source = called.getReturn().getSource();
        if (source == SourceType.USER_DEFINED || source == SourceType.IMPORTED ||
                isLibrary(called)) return called;
        if (typeSpec(called.getReturnType()).equals(
                machineScalarReturnType(called))) return called;
        for (ghidra.program.model.listing.FunctionTag tag : called.getTags())
            if (tag.getName().startsWith("RECOVERED_UTILITY_")) return called;
        String comment = called.getComment();
        return comment != null &&
            (comment.contains("[STPrototypeApplier]") ||
             comment.contains("[STPrototypeRepairApplier]") ||
             comment.contains("[STConstructorApplier]") ||
             comment.contains("[STReturnSemanticsApplier] typed_pointer_return") ||
             comment.contains("[STReturnSemanticsApplier] forwarded_call_return") ||
             comment.contains("[STReturnSemanticsApplier] machine_eax_return") ||
             comment.contains("[STReturnSemanticsApplier] shared_tail_return")) ?
                called : null;
    }

    /**
     * Prove only the existence and width of the return value.  This is stricter than following
     * decompiler return expressions: every machine RET must be reached with all four EAX bytes
     * defined by this invocation.  Partial AL/AX writes preserve a prior full definition but can
     * never establish one.  An unresolved CFG edge rejects the whole function.
     */
    private boolean allReturnsDefineFullAccumulator(Function function) {
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null || function.getBody().getNumAddresses() > 0x4000)
            return false;
        Deque<MachineReturnState> pending = new ArrayDeque<>();
        pending.add(new MachineReturnState(entry.getAddress(), false));
        Set<MachineReturnState> visited = new HashSet<>();
        Set<Address> reachedReturns = new HashSet<>();
        int totalReturns = 0;
        InstructionIterator count = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (count.hasNext())
            if (count.next().getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET"))
                totalReturns++;
        if (totalReturns == 0) return false;

        int nodes = 0;
        while (!pending.isEmpty()) {
            MachineReturnState state = pending.removeFirst();
            if (!visited.add(state) || ++nodes > 65536) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress())) return false;
            String mnemonic = instruction.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            boolean defined = state.fullAccumulator;
            if ("CALL".equals(mnemonic)) {
                Function producer = trustedReturnProducer(instruction);
                defined = producer != null ||
                    returnDisposition(function, instruction) == ReturnDisposition.USED;
            }
            else {
                int written = accumulatorWidth(instruction.getResultObjects());
                if (written == 4) defined = true;
                // A partial write retains already-defined upper bytes, but cannot establish
                // a full machine-word return by itself.
            }
            if (mnemonic.startsWith("RET")) {
                if (!defined) return false;
                reachedReturns.add(instruction.getAddress());
                continue;
            }
            List<Address> successors = instructionSuccessors(function, instruction);
            if (successors.isEmpty()) return false;
            for (Address successor : successors)
                pending.addLast(new MachineReturnState(successor, defined));
        }
        return reachedReturns.size() == totalReturns;
    }

    /**
     * MSVC sometimes emits two public entries which share one arithmetic/epilogue tail. Ghidra
     * keeps the entries as separate functions, so the prefix has no RET in its own body. Recover
     * the return ABI only when every reachable exit is one identical unconditional external jump
     * into another function body whose return has independent trusted provenance.
     */
    private String sharedTailReturnType(Function function) {
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null || function.getBody().getNumAddresses() > 0x1000)
            return "";
        Deque<Address> pending = new ArrayDeque<>();
        pending.add(entry.getAddress());
        Set<Address> visited = new HashSet<>();
        Set<Address> externalTargets = new HashSet<>();
        int nodes = 0;
        while (!pending.isEmpty()) {
            Address address = pending.removeFirst();
            if (!visited.add(address) || ++nodes > 16384) continue;
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null || !function.getBody().contains(address)) return "";
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("RET") || instruction.getFlowType().isTerminal()) return "";

            int successors = 0;
            Address fallThrough = instruction.getFallThrough();
            if (fallThrough != null) {
                if (!function.getBody().contains(fallThrough)) return "";
                pending.addLast(fallThrough);
                successors++;
            }
            if (instruction.getFlowType().isJump()) {
                for (Address flow : instruction.getFlows()) {
                    successors++;
                    if (function.getBody().contains(flow)) pending.addLast(flow);
                    else {
                        if (!"JMP".equals(mnemonic) || fallThrough != null) return "";
                        externalTargets.add(flow);
                    }
                }
            }
            if (successors == 0) return "";
        }
        if (externalTargets.size() != 1) return "";
        Address target = externalTargets.iterator().next();
        Function owner = currentProgram.getFunctionManager().getFunctionContaining(target);
        if (owner == null || owner.equals(function) ||
                currentProgram.getListing().getInstructionAt(target) == null) return "";
        Function trusted = trustedReturnFunction(resolveThunk(owner));
        return trusted == null ? "" : typeSpec(trusted.getReturnType());
    }

    /**
     * Full-width integer arithmetic changes the value but not its return ABI.
     * Pointer results and partial-register operations are never accepted here.
     */
    private boolean preservesAccumulatorType(Instruction instruction,
            String proposed) {
        DataType type = unwrap(currentProgram.getDataTypeManager()
            .getDataType(proposed));
        if (!(type instanceof ghidra.program.model.data.AbstractIntegerDataType) &&
                !(type instanceof ghidra.program.model.data.Enum)) return false;
        if (accumulatorWidth(instruction.getInputObjects()) < 4 ||
                accumulatorWidth(instruction.getResultObjects()) != 4) return false;
        String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
        if ("MOV".equals(mnemonic)) {
            Register destination = instruction.getRegister(0);
            Register source = instruction.getRegister(1);
            return destination != null && source != null &&
                "EAX".equals(destination.getName().toUpperCase(Locale.ROOT)) &&
                "EAX".equals(source.getName().toUpperCase(Locale.ROOT));
        }
        return Set.of("NEG", "NOT", "INC", "DEC", "ADD", "ADC", "SUB",
            "SBB", "AND", "OR", "XOR", "SHL", "SAL", "SHR", "SAR",
            "ROL", "ROR", "RCL", "RCR", "IMUL").contains(mnemonic);
    }

    /**
     * Independently prove a primitive 32-bit integer return from the callee CFG.
     * Only signedness-defining machine operations participate.  Ambiguous MOV,
     * LEA, constants, calls, and partial-register definitions collapse the state
     * to unknown, so Ghidra's current ANALYSIS type cannot validate itself.
     */
    private String machineScalarReturnType(Function function) {
        Instruction entry = currentProgram.getListing()
            .getInstructionAt(function.getEntryPoint());
        if (entry == null || function.getBody().getNumAddresses() > 0x2000)
            return "";
        Deque<ScalarReturnState> pending = new ArrayDeque<>();
        pending.add(new ScalarReturnState(entry.getAddress(), ""));
        Set<ScalarReturnState> visited = new HashSet<>();
        Set<String> returned = new HashSet<>();
        int nodes = 0;
        while (!pending.isEmpty()) {
            ScalarReturnState state = pending.removeFirst();
            if (!visited.add(state) || ++nodes > 32768) continue;
            Instruction instruction = currentProgram.getListing()
                .getInstructionAt(state.address);
            if (instruction == null ||
                    !function.getBody().contains(instruction.getAddress())) return "";
            String mnemonic = instruction.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            if ("CALL".equals(mnemonic)) return "";
            String scalar = state.type;
            int written = accumulatorWidth(instruction.getResultObjects());
            if (written > 0) {
                if (written != 4) scalar = "";
                else if ("MOVZX".equals(mnemonic) || "DIV".equals(mnemonic))
                    scalar = "/uint";
                else if ("MOVSX".equals(mnemonic) || "IDIV".equals(mnemonic))
                    scalar = "/int";
                else if (!scalar.isBlank() &&
                        preservesAccumulatorType(instruction, scalar)) {
                    // Exact full-width transform retains the proven scalar ABI.
                }
                else scalar = "";
            }
            if (mnemonic.startsWith("RET")) {
                if (scalar.isBlank()) return "";
                returned.add(scalar);
                continue;
            }
            for (Address successor : instructionSuccessors(function, instruction))
                pending.addLast(new ScalarReturnState(successor, scalar));
        }
        return returned.size() == 1 ? returned.iterator().next() : "";
    }

    private boolean concreteMachineReturn(DataType type) {
        type = unwrap(type);
        if (type == null || type.getLength() != 4 ||
                Undefined.isUndefined(type) || "/void".equals(type.getPathName()))
            return false;
        if (!(type instanceof Pointer pointer)) return true;
        DataType pointed = unwrap(pointer.getDataType());
        return pointed != null && !Undefined.isUndefined(pointed) &&
            !"/void".equals(pointed.getPathName());
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

    /**
     * Propagate a persistent structured pointer through the return register only when every
     * value-return path forwards the same Listing variable.  This deliberately does not infer
     * a fresh structure from C casts: PointerShape/ClassLayout own layout recovery, while this
     * pass merely connects their already evidence-backed type to the function ABI.
     */
    private Row typedPointerReturn(Function function, String currentType,
            List<String> returns) {
        if (returns.isEmpty()) return null;
        String returnedName = "";
        for (String expression : returns) {
            String name = simpleIdentifier(expression);
            if (name.isBlank()) return null;
            if (returnedName.isBlank()) returnedName = name;
            else if (!returnedName.equals(name)) return null;
        }
        Variable returnedVariable = null;
        for (Variable variable : function.getAllVariables()) {
            if (!returnedName.equals(variable.getName())) continue;
            if (returnedVariable != null) return null;
            returnedVariable = variable;
        }
        if (returnedVariable == null) return null;
        DataType type = unwrap(returnedVariable.getDataType());
        if (!(type instanceof Pointer pointer)) return null;
        DataType pointed = unwrap(pointer.getDataType());
        if (!(pointed instanceof Structure structure) || structure.getLength() < 1 ||
                !evidenceBacked(returnedVariable, structure)) return null;
        String proposed = "pointer:" + structure.getPathName();
        if (proposed.equals(currentType)) return null;
        return row(function, currentType, proposed, function.hasNoReturn(),
            function.hasNoReturn(), true, "typed_pointer_return", "high",
            "all " + returns.size() + " value-return path(s) forward Listing variable " +
            returnedName + " with evidence-backed structure " + structure.getPathName() +
            " (current recovered extent=" + structure.getLength() + ")");
    }

    private String simpleIdentifier(String expression) {
        String value = expression == null ? "" : expression.trim();
        for (int pass = 0; pass < 12 && !value.isBlank(); pass++) {
            if (value.matches("[A-Za-z_$][A-Za-z0-9_$]*")) return value;
            if (value.charAt(0) != '(') return "";
            int close = matchingParen(value, 0);
            if (close < 0) return "";
            if (close == value.length() - 1) {
                value = value.substring(1, close).trim();
                continue;
            }
            String cast = value.substring(1, close).trim();
            if (!cast.matches("(?i)(?:const\\s+|volatile\\s+)*(?:struct\\s+|class\\s+)?" +
                    "[A-Za-z_$][A-Za-z0-9_$: ]*(?:\\s*\\*+)?")) return "";
            value = value.substring(close + 1).trim();
        }
        return "";
    }

    private int matchingParen(String value, int open) {
        int depth = 0;
        for (int index = open; index < value.length(); index++) {
            char ch = value.charAt(index);
            if (ch == '(') depth++;
            else if (ch == ')' && --depth == 0) return index;
        }
        return -1;
    }

    private boolean evidenceBacked(Variable variable, Structure structure) {
        SourceType source = variable.getSource();
        if (source == SourceType.USER_DEFINED || source == SourceType.IMPORTED) return true;
        String variableComment = variable.getComment();
        if (variableComment != null && (variableComment.contains("[STPointerShapeApplier]") ||
                variableComment.contains("[STPrototypeApplier]") ||
                variableComment.contains("[STPrototypeRepairApplier]"))) return true;
        String description = structure.getDescription();
        if (description != null && (description.contains("[STPointerShapeApplier]") ||
                description.contains("[STClassLayoutApplier]") ||
                description.contains("[STHiddenThisApplier]"))) return true;
        // A named class receiver is maintained by Ghidra from the class namespace and is not
        // speculative decompiler-local typing.
        return variable instanceof Parameter parameter && parameter.isAutoParameter() &&
            !structure.getName().startsWith("Anon");
    }

    private boolean hasEvidenceBackedPointerVariable(Function function) {
        for (Variable variable : function.getAllVariables()) {
            DataType type = unwrap(variable.getDataType());
            if (!(type instanceof Pointer pointer)) continue;
            DataType pointed = unwrap(pointer.getDataType());
            if (pointed instanceof Structure structure && structure.getLength() > 0 &&
                    evidenceBacked(variable, structure)) return true;
        }
        return false;
    }

    private DataType unwrap(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    private Body body(Function function) {
        boolean hasRet = false, hasCall = false, writes = false, terminalNoReturn = false;
        boolean setcc = false, returnsZero = false, returnsOne = false;
        Instruction last = null;
        InstructionIterator iterator = currentProgram.getListing().getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next(); last = instruction;
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("RET")) hasRet = true;
            if ("CALL".equals(mnemonic)) hasCall = true;
            String rendered = instruction.toString().replace(" ", "").toUpperCase(Locale.ROOT);
            if (mnemonic.startsWith("SET") && rendered.contains("AL")) setcc = true;
            if (rendered.equals("MOVEAX,0X0") || rendered.equals("MOVEAX,0")) returnsZero = true;
            if (rendered.equals("MOVEAX,0X1") || rendered.equals("MOVEAX,1")) returnsOne = true;
            for (Object result : instruction.getResultObjects()) {
                if (result instanceof Register register) {
                    String name = register.getName().toUpperCase(Locale.ROOT);
                    if (name.equals("EAX") || name.equals("AX") || name.equals("AL") ||
                            name.equals("AH")) writes = true;
                }
            }
        }
        if (last != null && "CALL".equalsIgnoreCase(last.getMnemonicString())) {
            for (Reference reference : last.getReferencesFrom()) {
                Function called = currentProgram.getFunctionManager().getFunctionAt(reference.getToAddress());
                if (called != null && called.hasNoReturn()) terminalNoReturn = true;
            }
        }
        return new Body(hasRet, hasCall, writes, terminalNoReturn,
            setcc || (returnsZero && returnsOne));
    }

    private boolean allBooleanConstants(List<String> values) {
        boolean zero = false, one = false;
        for (String value : values) {
            value = value.replaceAll("\\([^()]*\\)", "").trim();
            if (!value.equals("0") && !value.equals("1") && !value.equals("false") &&
                    !value.equals("true")) return false;
            if (value.equals("0") || value.equals("false")) zero = true;
            if (value.equals("1") || value.equals("true")) one = true;
        }
        return zero && one;
    }
    private boolean genericUnknown(String type) {
        return type.equals("/undefined") || type.equals("/undefined4");
    }
    private boolean genericPointerReturn(String type) {
        if (genericUnknown(type)) return true;
        if (!type.startsWith("pointer:")) return false;
        String pointed = type.substring("pointer:".length()).toLowerCase(Locale.ROOT);
        return pointed.matches("/(?:void|undefined(?:1|2|4|8)?)");
    }
    private boolean genericInteger(String type) {
        return genericUnknown(type) || type.equals("/int") || type.equals("/uint") ||
            type.equals("/char") || type.equals("/byte");
    }
    private Row row(Function function, String current, String proposed, boolean expectedNoReturn,
            boolean proposedNoReturn, boolean apply, String semantic, String confidence, String evidence) {
        return new Row(apply, addr(function.getEntryPoint()), function.getName(true),
            function.getPrototypeString(true, true), current, function.getReturn().getSource().toString(),
            expectedNoReturn, proposed, proposedNoReturn, semantic, confidence, evidence,
            "", "", "");
    }

    private Row roundTripRow(Function function, String current, RoundTripReturn proof,
            boolean expectedNoReturn, boolean proposedNoReturn, boolean apply,
            String semantic, String confidence, String evidence) {
        List<String> calls = new ArrayList<>(), expected = new ArrayList<>();
        List<String> ordinals = new ArrayList<>();
        for (Map.Entry<Address, Integer> item : proof.callSites.entrySet()) {
            Address call = item.getKey();
            calls.add(addr(call));
            expected.add(existingOverrideFingerprint(function, call));
            ordinals.add(Integer.toString(item.getValue()));
        }
        return new Row(apply, addr(function.getEntryPoint()), function.getName(true),
            function.getPrototypeString(true, true), current,
            function.getReturn().getSource().toString(), expectedNoReturn, proof.type,
            proposedNoReturn, semantic, confidence, evidence,
            String.join("|", calls), String.join("|", expected),
            String.join("|", ordinals));
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\texpected_signature\t" +
                "expected_return_type\texpected_return_source\texpected_noreturn\t" +
                "proposed_return_type\tproposed_noreturn\tsemantic_id\tconfidence\t" +
                "roundtrip_call_sites\texpected_call_overrides\t" +
                "roundtrip_return_ordinals\tevidence\n");
            // Call-site columns are populated only for a closed pointer-producer
            // roundtrip.  Ordinary return proposals leave both fields empty.
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.address +
                "\t" + clean(row.function) + "\t" + clean(row.signature) + "\t" + row.expectedType +
                "\t" + row.source + "\t" + row.expectedNoReturn + "\t" + row.proposedType +
                "\t" + row.proposedNoReturn + "\t" + row.semantic + "\t" + row.confidence +
                "\t" + row.roundTripCallSites + "\t" + row.expectedCallOverrides +
                "\t" + row.roundTripReturnOrdinals +
                "\t" + clean(row.evidence) + "\n");
        }
    }
    private void writeFailures(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\terror\n");
            for (Failure row : failures) out.write(row.address + "\t" + clean(row.function) +
                "\t" + clean(row.error) + "\n");
        }
    }
    private void writeSummary(Path path, int functions, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("ST return semantics\n\nMode: " +
                (repairOnly ? "repair-only" : "full") +
                "\nFunctions: " + functions + "\nProposals: " + rows.size() +
                "\nAutomatic: " + rows.stream().filter(row -> row.apply).count() + "\n");
            for (String id : List.of("leaf_void", "ignored_eax_void",
                    "repair_unsafe_eax_rollback", "void_eax_read_review",
                    "typed_pointer_return", "forwarded_call_return",
                    "returned_pointer_parameter", "pointer_producer_argument_roundtrip",
                    "machine_eax_return", "shared_tail_return",
                    "boolean_return_domain", "noreturn_terminal_call"))
                out.write(id + ": " + rows.stream().filter(row -> row.semantic.equals(id)).count() + "\n");
        }
    }
    private boolean isLibrary(Function function) {
        for (ghidra.program.model.listing.FunctionTag tag : function.getTags())
            if (tag.getName().startsWith("LIBRARY")) return true;
        return false;
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private String addr(Address address) { return address.toString().toUpperCase(Locale.ROOT); }
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
    private static String clean(String value) { return value == null ? "" : value.replace('\t',' ').replace('\r',' ').replace('\n',' '); }
    private record Body(boolean hasRet, boolean hasCall, boolean writesAccumulator,
        boolean endsInNoReturnCall, boolean booleanLike) {}
    private static class ReturnUse { int used, ignored, unknown; }
    private record ScanState(Address address, int distance) {}
    private record ForwardState(Address address, boolean hasValue) {}
    private record ScalarReturnState(Address address, String type) {}
    private record MachineReturnState(Address address, boolean fullAccumulator) {}
    private record ParameterReturnState(Address address, int ordinal) {}
    private record ParameterReturn(int ordinal, String name, String type) {}
    private record RoundTripState(Address address, String type, int roundTripCalls) {}
    private record RoundTripReturn(String type, int roundTripCalls,
        Map<Address, Integer> callSites) {}
    private enum ReturnDisposition { USED, IGNORED, UNKNOWN }
    private record Row(boolean apply, String address, String function, String signature,
        String expectedType, String source, boolean expectedNoReturn, String proposedType,
        boolean proposedNoReturn, String semantic, String confidence, String evidence,
        String roundTripCallSites, String expectedCallOverrides,
        String roundTripReturnOrdinals) {}
    private record Failure(String address, String function, String error) {}
}
