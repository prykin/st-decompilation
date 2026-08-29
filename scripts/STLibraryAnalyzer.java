// Find statically linked library functions using embedded source paths and known CRT names.
// Read-only: writes proposals for STLibraryApplier.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Library Functions

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.util.DefinedStringIterator;

public class STLibraryAnalyzer extends GhidraScript {
    private static final Pattern CRT_NAME = Pattern.compile(
        "(?i)^(?:_*Crt.*|_*(?:setjmp3|longjmp|exit|ftol|purecall|amsg_exit|initterm|except_handler3|" +
        "XcptFilter|xcptlookup|ioterm|FF_MSGBANNER|GET_RTERRMSG|rt_probe_read4@4|" +
        "cintrindisp[12]|ctrandisp[12]|fload|trandisp[12]|controlfp|IncMan|CopyMan|" +
        "FillZeroMan|IsZeroMan|ShrMan|fptrap|matherr|dosmaperr|set_osfhnd|isatty|" +
        "allshl|ismbbkana|mbsnbicoll|findenv|copy_environ|__addl|__add_12|__shl_12|__shr_12)|" +
        "_*(?:malloc|calloc|realloc|free|memcpy|memmove|memset|memcmp|strlen|strcpy|strncpy|" +
        "strcmp|strncmp|strcat|strchr|strrchr|sprintf|vsprintf|printf|fprintf|fopen|fclose))$");
    private static final long MAX_CRT_ANCHOR_GAP = 0x4000;
    private static final long MAX_CRT_TAIL_DISTANCE = 0x1000;
    private static final int MIN_CRT_ANCHORS = 8;
    private static final long MAX_INTERFACE_RUNTIME_SPAN = 0x20000;
    private static final int MIN_INTERFACE_RUNTIME_FUNCTIONS = 32;
    private static final int MIN_INTERFACE_DISPATCH_FUNCTIONS = 12;
    private static final int MIN_INTERFACE_DISPATCH_CALLS = 64;
    private static final int MAX_INTERFACE_TAIL_STUB_BYTES = 16;
    private static final Pattern DKW_PATH = Pattern.compile(
        "(?i)(?:[A-Z]:\\\\)?D?KW\\\\([A-Z0-9_]+)\\\\");
    private static final Pattern OURLIB_PATH = Pattern.compile(
        "(?i)(?:[A-Z]:\\\\)?OURLIB\\\\([^\\\\]+?)\\.(?:C|CC|CPP|CXX)(?:$|[^A-Z0-9_])");
    private static final Pattern RECOVERED_SOURCE_COMMENT = Pattern.compile(
        "(?m)^Recovered source file:\\s*([^\\r\\n]+)$");
    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open a program first.");
            return;
        }
        File root = outputDirectory();
        if (root == null) return;

        Map<Address, Evidence> found = new LinkedHashMap<>();
        Map<Address, Set<SourceAnchor>> sourceAnchors = new HashMap<>();
        Set<Address> inferredCrt = inferCrtCluster();
        for (Data data : DefinedStringIterator.forProgram(currentProgram)) {
            monitor.checkCancelled();
            String value = stringValue(data);
            Classification classification = classifyPath(value);
            if (classification == null) continue;
            ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(data.getMinAddress());
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function function = currentProgram.getListing().getFunctionContaining(ref.getFromAddress());
                if (function == null || function.isExternal()) continue;
                Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new Evidence(function));
                evidence.add(classification, value, ref.getFromAddress());
                sourceAnchors.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new TreeSet<>()).add(new SourceAnchor(
                        classification.library, classification.namespace,
                        normalizeSource(value)));
            }
        }

        // The linked VC6 runtime is emitted as a dense function cluster.  Its bounds are
        // inferred from compiler-runtime names, never from an image address. Names outside
        // the inferred cluster remain hints only.
        for (Function function : currentProgram.getFunctionManager().getFunctions(true)) {
            monitor.checkCancelled();
            if (function.isExternal()) continue;
            String comment = function.getComment();
            if (comment != null) {
                java.util.regex.Matcher recovered =
                    RECOVERED_SOURCE_COMMENT.matcher(comment);
                while (recovered.find()) {
                    String path = recovered.group(1).trim();
                    Classification classification = classifyPath(path);
                    if (classification == null) continue;
                    Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                        ignored -> new Evidence(function));
                    evidence.add(classification,
                        "recovered source-provenance comment: " + path,
                        function.getEntryPoint(), true);
                    sourceAnchors.computeIfAbsent(function.getEntryPoint(),
                        ignored -> new TreeSet<>()).add(new SourceAnchor(
                            classification.library, classification.namespace,
                            normalizeSource(path)));
                }
            }
            boolean inCrtBlock = inferredCrt.contains(function.getEntryPoint());
            boolean knownCrtName = CRT_NAME.matcher(function.getName()).matches();
            if (inCrtBlock || knownCrtName) {
                Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new Evidence(function));
                evidence.add(new Classification("MSVCRT", "Library::MSVCRT"),
                    inCrtBlock ? "inferred dense VC6 CRT cluster from named runtime anchors" :
                        "known CRT symbol: " + function.getName(), function.getEntryPoint(), true);
            }
            else if (function.getParentNamespace().isGlobal() && function.getName().startsWith("_") &&
                    !found.containsKey(function.getEntryPoint())) {
                Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new Evidence(function));
                evidence.add(new Classification("MSVCRT", "Library::MSVCRT"),
                    "global underscore-prefixed symbol: " + function.getName(),
                    function.getEntryPoint(), false);
            }
        }

        int intervalHelpers = inferSourceIntervalHelpers(found, sourceAnchors);
        int moduleCallbacks = inferStoredCallbackLibraryOwners(found, sourceAnchors);
        int interfaceRuntime = inferLinkedInterfaceRuntime(found, sourceAnchors);

        List<Proposal> proposals = new ArrayList<>();
        int conflicts = 0;
        for (Evidence evidence : found.values()) {
            monitor.checkCancelled();
            if (evidence.libraries.size() != 1 || evidence.namespaces.size() != 1) {
                conflicts++;
                continue;
            }
            String library = evidence.libraries.iterator().next();
            String namespace = evidence.namespaces.iterator().next();
            proposals.add(new Proposal(evidence.function, library, namespace,
                String.join(" | ", evidence.sources), String.join(" | ", evidence.references),
                evidence.highConfidence));
        }
        proposals.sort(Comparator.comparing(p -> p.function.getEntryPoint()));

        Path dir = root.toPath().toAbsolutePath().normalize()
            .resolve(safe(currentProgram.getName()));
        Files.createDirectories(dir);
        writeTsv(dir.resolve("library_proposals.tsv"), proposals);
        Files.write(dir.resolve("library_summary.txt"), List.of(
            "program=" + currentProgram.getName(),
            "proposals=" + proposals.size(),
            "conflicts=" + conflicts,
            "source_interval_helpers=" + intervalHelpers,
            "module_callback_helpers=" + moduleCallbacks,
            "linked_interface_runtime_functions=" + interfaceRuntime,
            "ourlib_proposals=" + proposals.stream()
                .filter(proposal -> proposal.library.startsWith("OURLIB_")).count(),
            "note=Only rows with apply=1 are consumed by STLibraryApplier."),
            StandardCharsets.UTF_8);
        println("Library analysis complete: " + dir);
        println("Proposals: " + proposals.size() + ", conflicts: " + conflicts);
    }

    private Classification classifyPath(String value) {
        String path = value.replace('/', '\\').toLowerCase(Locale.ROOT);
        if (path.contains("\\__titans\\crt\\")) return new Classification("MSVCRT", "Library::MSVCRT");
        java.util.regex.Matcher dkw = DKW_PATH.matcher(value.replace('/', '\\'));
        if (dkw.find()) {
            String module = dkw.group(1).toUpperCase(Locale.ROOT);
            return new Classification("DKW_" + module, "Library::DKW::" + module);
        }
        java.util.regex.Matcher ourlib = OURLIB_PATH.matcher(value.replace('/', '\\'));
        if (ourlib.find()) {
            String module = moduleName(ourlib.group(1));
            if (!module.isBlank())
                return new Classification("OURLIB_" + module,
                    "Library::Ourlib::" + module);
        }
        return null;
    }

    /**
     * MSVC emits the functions of one object file contiguously, but only functions which
     * directly use an assertion/debug path retain a reference to that source string.  Recover
     * the static helpers and registered callbacks between two exact anchors only when those are
     * also the nearest source anchors on both sides and every direct caller/executable DATA
     * reference stays inside that closed interval (or is already independently classified as
     * the same library).  The DATA-reference case is intentionally limited to exact references
     * whose source belongs to a containing function; it recovers address-installed callbacks
     * without turning arbitrary tables or adjacent code into library ownership.  This
     * deliberately does not grow an arbitrary call-graph closure, and code on either side of a
     * source boundary is rejected.
     */
    private int inferSourceIntervalHelpers(Map<Address, Evidence> found,
            Map<Address, Set<SourceAnchor>> sourceAnchors) throws Exception {
        List<Function> functions = new ArrayList<>();
        for (Function function : currentProgram.getFunctionManager().getFunctions(true))
            if (!function.isExternal()) functions.add(function);
        functions.sort(Comparator.comparing(Function::getEntryPoint));

        SourceAnchor[] exact = new SourceAnchor[functions.size()];
        for (int index = 0; index < functions.size(); index++) {
            Set<SourceAnchor> anchors = sourceAnchors.get(
                functions.get(index).getEntryPoint());
            if (anchors != null && anchors.size() == 1)
                exact[index] = anchors.iterator().next();
        }

        int[] prior = new int[functions.size()], following = new int[functions.size()];
        int nearest = -1;
        for (int index = 0; index < functions.size(); index++) {
            prior[index] = nearest;
            if (exact[index] != null) nearest = index;
        }
        nearest = -1;
        for (int index = functions.size() - 1; index >= 0; index--) {
            following[index] = nearest;
            if (exact[index] != null) nearest = index;
        }

        int inferred = 0;
        for (int index = 0; index < functions.size(); index++) {
            monitor.checkCancelled();
            if (exact[index] != null || prior[index] < 0 || following[index] < 0)
                continue;
            SourceAnchor left = exact[prior[index]], right = exact[following[index]];
            if (!left.equals(right)) continue;
            Function function = functions.get(index);
            Set<Function> callers = function.getCallingFunctions(monitor);
            boolean closed = true;
            boolean hasOwnerReference = !callers.isEmpty();
            for (Function caller : callers) {
                Address entry = caller.getEntryPoint();
                if (entry.compareTo(functions.get(prior[index]).getEntryPoint()) >= 0 &&
                        entry.compareTo(functions.get(following[index]).getEntryPoint()) <= 0)
                    continue;
                Evidence callerEvidence = found.get(entry);
                if (!exactLibrary(callerEvidence, left)) {
                    closed = false;
                    break;
                }
            }
            if (!closed) continue;

            ReferenceIterator incoming = currentProgram.getReferenceManager()
                .getReferencesTo(function.getEntryPoint());
            while (incoming.hasNext()) {
                Reference reference = incoming.next();
                if (reference.getReferenceType().isFlow()) continue;
                Address from = reference.getFromAddress();
                if (!currentProgram.getMemory().contains(from) ||
                        !currentProgram.getMemory().getBlock(from).isExecute()) continue;
                Function owner = currentProgram.getListing().getFunctionContaining(from);
                if (owner == null) {
                    closed = false;
                    break;
                }
                hasOwnerReference = true;
                Address ownerEntry = owner.getEntryPoint();
                if (ownerEntry.compareTo(functions.get(prior[index]).getEntryPoint()) >= 0 &&
                        ownerEntry.compareTo(functions.get(following[index]).getEntryPoint()) <= 0)
                    continue;
                Evidence ownerEvidence = found.get(ownerEntry);
                if (!exactLibrary(ownerEvidence, left)) {
                    closed = false;
                    break;
                }
            }
            if (!closed || !hasOwnerReference) continue;
            Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                ignored -> new Evidence(function));
            boolean already = exactLibrary(evidence, left);
            evidence.add(new Classification(left.library, left.namespace),
                "inferred static helper between nearest exact source anchors: " +
                    left.source, function.getEntryPoint(), true);
            if (!already) inferred++;
        }
        return inferred;
    }

    private boolean exactLibrary(Evidence evidence, SourceAnchor anchor) {
        return evidence != null && evidence.libraries.size() == 1 &&
            evidence.namespaces.size() == 1 &&
            evidence.libraries.contains(anchor.library) &&
            evidence.namespaces.contains(anchor.namespace);
    }

    /**
     * Recover only the library module of an address-installed callback at a source-file
     * boundary. Source ownership remains deliberately stricter in
     * {@link #inferSourceIntervalHelpers}: two normalized source names must agree there.
     *
     * Here the nearest exact source anchors may name different files, but they must name the
     * same library and namespace. At least one exact x86 {@code MOV [memory], imm32} must
     * install the callback address, and every direct caller plus every executable non-flow
     * reference owner must stay in that closed module interval or already have the same exact
     * library classification. This covers compiler-emitted no-op/error callbacks at the tail
     * of one object file without growing library ownership through an unrestricted call graph.
     */
    private int inferStoredCallbackLibraryOwners(Map<Address, Evidence> found,
            Map<Address, Set<SourceAnchor>> sourceAnchors) throws Exception {
        List<Function> functions = new ArrayList<>();
        Map<Address, Integer> indexByEntry = new HashMap<>();
        for (Function function : currentProgram.getFunctionManager().getFunctions(true))
            if (!function.isExternal()) functions.add(function);
        functions.sort(Comparator.comparing(Function::getEntryPoint));
        for (int index = 0; index < functions.size(); index++)
            indexByEntry.put(functions.get(index).getEntryPoint(), index);

        SourceAnchor[] exact = new SourceAnchor[functions.size()];
        for (int index = 0; index < functions.size(); index++) {
            Set<SourceAnchor> anchors = sourceAnchors.get(
                functions.get(index).getEntryPoint());
            if (anchors != null && anchors.size() == 1)
                exact[index] = anchors.iterator().next();
        }
        int[] prior = new int[functions.size()], following = new int[functions.size()];
        int nearest = -1;
        for (int index = 0; index < functions.size(); index++) {
            prior[index] = nearest;
            if (exact[index] != null) nearest = index;
        }
        nearest = -1;
        for (int index = functions.size() - 1; index >= 0; index--) {
            following[index] = nearest;
            if (exact[index] != null) nearest = index;
        }
        Map<Address, SourceAnchor> boundedLibraries = new HashMap<>();
        for (int index = 0; index < functions.size(); index++) {
            if (prior[index] < 0 || following[index] < 0) continue;
            SourceAnchor left = exact[prior[index]], right = exact[following[index]];
            if (sameLibrary(left, right))
                boundedLibraries.put(functions.get(index).getEntryPoint(), left);
        }

        Map<Address, List<StoredCallback>> stores = collectStoredCallbacks();
        int inferred = 0;
        for (Map.Entry<Address, List<StoredCallback>> entry : stores.entrySet()) {
            monitor.checkCancelled();
            Function callback = currentProgram.getFunctionManager()
                .getFunctionAt(entry.getKey());
            if (callback == null || callback.isExternal()) continue;
            Integer callbackIndex = indexByEntry.get(callback.getEntryPoint());
            if (callbackIndex == null || prior[callbackIndex] < 0 ||
                    following[callbackIndex] < 0) continue;
            int leftIndex = prior[callbackIndex], rightIndex = following[callbackIndex];
            SourceAnchor left = exact[leftIndex], right = exact[rightIndex];
            if (!sameLibrary(left, right)) continue;
            if (exactLibrary(found.get(callback.getEntryPoint()), left)) continue;

            boolean closed = true;
            Set<String> references = new TreeSet<>();
            for (StoredCallback store : entry.getValue()) {
                if (!boundedOrExactLibrary(store.owner, boundedLibraries, found, left)) {
                    closed = false;
                    break;
                }
                references.add(addr(store.site));
            }
            if (!closed || references.isEmpty()) continue;

            for (Function caller : callback.getCallingFunctions(monitor)) {
                if (boundedOrExactLibrary(caller, boundedLibraries, found, left)) continue;
                closed = false;
                break;
            }
            if (!closed) continue;

            ReferenceIterator incoming = currentProgram.getReferenceManager()
                .getReferencesTo(callback.getEntryPoint());
            while (incoming.hasNext()) {
                Reference reference = incoming.next();
                if (reference.getReferenceType().isFlow()) continue;
                Address from = reference.getFromAddress();
                if (!currentProgram.getMemory().contains(from)) continue;
                ghidra.program.model.mem.MemoryBlock block =
                    currentProgram.getMemory().getBlock(from);
                if (block == null || !block.isExecute()) continue;
                Function owner = currentProgram.getListing().getFunctionContaining(from);
                Instruction instruction = currentProgram.getListing().getInstructionAt(from);
                if (owner == null || instruction == null ||
                        !callback.getEntryPoint().equals(storedImmediateCodeAddress(instruction)) ||
                        !boundedOrExactLibrary(owner, boundedLibraries, found, left)) {
                    closed = false;
                    break;
                }
            }
            if (!closed) continue;

            Evidence evidence = found.computeIfAbsent(callback.getEntryPoint(),
                ignored -> new Evidence(callback));
            evidence.add(new Classification(left.library, left.namespace),
                "address-installed callback inside closed " + left.library +
                    " source-module envelope",
                entry.getValue().get(0).site, true);
            for (String reference : references) evidence.references.add(reference);
            inferred++;
        }
        return inferred;
    }

    /**
     * Recover an opaque statically linked COM-style implementation block without relying on
     * image addresses, source-library names, or a catalog of API symbols.  Old MSVC linkers
     * keep one group of object files contiguous.  In this binary the group is otherwise easy
     * to mistake for application code because most of its methods are unnamed and call through
     * interface tables.
     *
     * A candidate must sit wholly between two already high-confidence linked-library anchors,
     * begin at a direct external boundary whose imported prototype carries both HRESULT and an
     * IID/IUnknown-family type, contain a dense population of machine-level indirect calls, and
     * contain no exact recovered source anchor or semantic application namespace.  Its end is
     * the final indirect-dispatch function, followed only by consecutive tiny leaf/RET stubs.
     * This last rule prevents an adjacent source-less helper from being swallowed merely because
     * the linker placed it before the next source-bearing object file.
     *
     * The result deliberately asserts only linked-library ownership.  It does not claim a
     * DirectShow class name, interface identity, source file, vtable layout, or callback ABI.
     */
    private int inferLinkedInterfaceRuntime(Map<Address, Evidence> found,
            Map<Address, Set<SourceAnchor>> sourceAnchors) throws Exception {
        List<Function> functions = new ArrayList<>();
        for (Function function : currentProgram.getFunctionManager().getFunctions(true))
            if (!function.isExternal()) functions.add(function);
        functions.sort(Comparator.comparing(Function::getEntryPoint));

        boolean[] highAnchor = new boolean[functions.size()];
        for (int index = 0; index < functions.size(); index++) {
            Evidence evidence = found.get(functions.get(index).getEntryPoint());
            highAnchor[index] = evidence != null && evidence.highConfidence &&
                evidence.libraries.size() == 1 && evidence.namespaces.size() == 1;
        }

        int inferred = 0;
        int left = -1;
        for (int right = 0; right < functions.size(); right++) {
            monitor.checkCancelled();
            if (!highAnchor[right]) continue;
            if (left >= 0 && right - left > MIN_INTERFACE_RUNTIME_FUNCTIONS) {
                inferred += inferLinkedInterfaceRuntimeInterval(functions, left + 1,
                    right, found, sourceAnchors);
            }
            left = right;
        }
        return inferred;
    }

    private int inferLinkedInterfaceRuntimeInterval(List<Function> functions,
            int startInclusive, int endExclusive, Map<Address, Evidence> found,
            Map<Address, Set<SourceAnchor>> sourceAnchors) throws Exception {
        int firstBoundary = -1, lastDispatch = -1;
        Address boundarySite = null;
        int dispatchFunctions = 0, dispatchCalls = 0;
        for (int index = startInclusive; index < endExclusive; index++) {
            monitor.checkCancelled();
            Function function = functions.get(index);
            Address typedBoundary = importedInterfaceBoundary(function);
            if (typedBoundary != null && firstBoundary < 0) {
                firstBoundary = index;
                boundarySite = typedBoundary;
            }
            int calls = indirectMachineCalls(function);
            if (calls != 0) {
                dispatchFunctions++;
                dispatchCalls += calls;
                lastDispatch = index;
            }
        }
        if (endExclusive - startInclusive >= MIN_INTERFACE_RUNTIME_FUNCTIONS &&
                (firstBoundary >= 0 || dispatchCalls >= MIN_INTERFACE_DISPATCH_CALLS)) {
            println("Linked interface interval audit: " +
                addr(functions.get(startInclusive).getEntryPoint()) + ".." +
                addr(functions.get(endExclusive - 1).getEntryPoint()) +
                ", imported_boundary=" +
                (firstBoundary < 0 ? "none" :
                    addr(functions.get(firstBoundary).getEntryPoint())) +
                ", dispatch_functions=" + dispatchFunctions +
                ", dispatch_calls=" + dispatchCalls);
        }
        if (firstBoundary < 0 || lastDispatch < firstBoundary ||
                dispatchFunctions < MIN_INTERFACE_DISPATCH_FUNCTIONS ||
                dispatchCalls < MIN_INTERFACE_DISPATCH_CALLS)
            return 0;

        int last = lastDispatch;
        while (last + 1 < endExclusive && tinyInterfaceTailStub(functions.get(last + 1)))
            last++;
        if (last - firstBoundary + 1 < MIN_INTERFACE_RUNTIME_FUNCTIONS) return 0;
        Address firstAddress = functions.get(firstBoundary).getEntryPoint();
        Address lastAddress = functions.get(last).getBody().getMaxAddress();
        if (lastAddress.subtract(firstAddress) > MAX_INTERFACE_RUNTIME_SPAN) return 0;

        Set<String> enclosedNamedOwners = new TreeSet<>();
        for (int index = firstBoundary; index <= last; index++) {
            Function function = functions.get(index);
            Address entry = function.getEntryPoint();
            if (sourceAnchors.containsKey(entry)) return 0;
            String namedOwner = semanticOwner(function);
            if (namedOwner != null) enclosedNamedOwners.add(namedOwner);
            Evidence existing = found.get(entry);
            if (existing != null && existing.highConfidence &&
                    (!existing.libraries.contains("WIN32_COM_SUPPORT") ||
                        existing.libraries.size() != 1))
                return 0;
        }
        // A real named class inside a linked runtime is useful evidence, not contamination,
        // provided its complete function namespace is enclosed by this same candidate block.
        // A namespace with any method outside the block is an application/source-boundary
        // crossing and cancels the inference.
        if (!enclosedNamedOwners.isEmpty()) {
            for (int index = 0; index < functions.size(); index++) {
                if (index >= firstBoundary && index <= last) continue;
                String namedOwner = semanticOwner(functions.get(index));
                if (namedOwner != null && enclosedNamedOwners.contains(namedOwner)) return 0;
            }
        }

        String evidenceText = "machine-inferred opaque linked interface runtime between " +
            "high-confidence library anchors; imported HRESULT/IID boundary at " +
            addr(boundarySite) + "; functions=" + (last - firstBoundary + 1) +
            "; indirect_dispatch_functions=" + dispatchFunctions +
            "; indirect_dispatch_calls=" + dispatchCalls +
            "; no exact source anchors or semantic application owners";
        Classification classification = new Classification("WIN32_COM_SUPPORT",
            "Library::Win32::COMSupport");
        int inferred = 0;
        for (int index = firstBoundary; index <= last; index++) {
            Function function = functions.get(index);
            Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                ignored -> new Evidence(function));
            boolean already = evidence.libraries.size() == 1 &&
                evidence.libraries.contains(classification.library) &&
                evidence.namespaces.size() == 1 &&
                evidence.namespaces.contains(classification.namespace);
            evidence.add(classification, evidenceText, boundarySite, true);
            if (!already) inferred++;
        }
        return inferred;
    }

    private Address importedInterfaceBoundary(Function function) throws Exception {
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = instructions.next();
            if (!instruction.getFlowType().isCall()) continue;
            Function target = directOrImportedCalledFunction(instruction);
            if (target != null) {
                Function resolved = target.getThunkedFunction(true);
                if (resolved != null) target = resolved;
                if (target.isExternal() && interfacePrototype(
                        target.getPrototypeString(true, true)))
                    return instruction.getAddress();
            }
            // The IAT cell itself normally carries the imported function-definition type
            // even when Ghidra exposes no flow edge to the External function object.
            for (Reference reference : instruction.getReferencesFrom()) {
                Data data = currentProgram.getListing().getDataAt(reference.getToAddress());
                if (data != null && interfacePrototype(data.getDataType()))
                    return instruction.getAddress();
            }
        }
        return null;
    }

    private boolean interfacePrototype(DataType dataType) {
        DataType current = dataType;
        for (int depth = 0; depth < 4 && current instanceof Pointer pointer; depth++)
            current = pointer.getDataType();
        if (!(current instanceof FunctionDefinition definition)) return false;
        StringBuilder signature = new StringBuilder(
            definition.getReturnType().getDisplayName());
        for (ghidra.program.model.data.ParameterDefinition parameter :
                definition.getArguments())
            signature.append(' ').append(parameter.getDataType().getDisplayName());
        return interfacePrototype(signature.toString());
    }

    private boolean interfacePrototype(String signature) {
        String upper = signature.toUpperCase(Locale.ROOT);
        return upper.contains("HRESULT") &&
            (upper.contains("IID") || upper.contains("IUNKNOWN") ||
                upper.contains("LPUNKNOWN") || upper.contains("REFIID"));
    }

    private Function directOrImportedCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        // An x86 PE import call is CALL [IAT].  Ghidra records a DATA reference to the
        // pointer cell rather than a call flow, so follow exactly one defined pointer value.
        for (Reference reference : instruction.getReferencesFrom()) {
            Data data = currentProgram.getListing().getDataAt(reference.getToAddress());
            if (data == null || !(data.getValue() instanceof Address target)) continue;
            Function function = currentProgram.getFunctionManager().getFunctionAt(target);
            if (function != null) return function;
        }
        return null;
    }

    private int indirectMachineCalls(Function function) throws Exception {
        int count = 0;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = instructions.next();
            if (!instruction.getFlowType().isCall()) continue;
            boolean direct = false;
            for (Reference reference : instruction.getReferencesFrom()) {
                if (reference.getReferenceType().isCall() &&
                        currentProgram.getFunctionManager().getFunctionAt(
                            reference.getToAddress()) != null) {
                    direct = true;
                    break;
                }
            }
            if (!direct) count++;
        }
        return count;
    }

    private boolean tinyInterfaceTailStub(Function function) throws Exception {
        if (function.getBody().getNumAddresses() > MAX_INTERFACE_TAIL_STUB_BYTES)
            return false;
        InstructionIterator instructions = currentProgram.getListing()
            .getInstructions(function.getBody(), true);
        boolean hasReturn = false;
        while (instructions.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = instructions.next();
            if (instruction.getFlowType().isCall()) return false;
            hasReturn |= instruction.getFlowType().isTerminal();
        }
        return hasReturn;
    }

    private String semanticOwner(Function function) {
        String namespace = function.getParentNamespace().getName(true);
        if (function.getParentNamespace().isGlobal()) return null;
        String upper = namespace.toUpperCase(Locale.ROOT);
        return upper.startsWith("LIBRARY::") || upper.contains("::RECOVERED::") ||
            upper.startsWith("RECOVERED") || upper.startsWith("ANON") ? null : namespace;
    }

    private Map<Address, List<StoredCallback>> collectStoredCallbacks() throws Exception {
        Map<Address, List<StoredCallback>> result = new LinkedHashMap<>();
        InstructionIterator instructions = currentProgram.getListing().getInstructions(true);
        while (instructions.hasNext()) {
            monitor.checkCancelled();
            Instruction instruction = instructions.next();
            Function owner = currentProgram.getListing()
                .getFunctionContaining(instruction.getAddress());
            if (owner == null || owner.isExternal()) continue;
            Address target = storedImmediateCodeAddress(instruction);
            if (target == null || currentProgram.getFunctionManager().getFunctionAt(target) == null)
                continue;
            result.computeIfAbsent(target, ignored -> new ArrayList<>())
                .add(new StoredCallback(owner, instruction.getAddress()));
        }
        return result;
    }

    private Address storedImmediateCodeAddress(Instruction instruction) {
        try {
            byte[] bytes = instruction.getBytes();
            if (bytes.length < 6 || (bytes[0] & 0xff) != 0xc7) return null;
            int modrm = bytes[1] & 0xff;
            if ((modrm & 0x38) != 0 || (modrm & 0xc0) == 0xc0) return null;
            int value = (bytes[bytes.length - 4] & 0xff) |
                ((bytes[bytes.length - 3] & 0xff) << 8) |
                ((bytes[bytes.length - 2] & 0xff) << 16) |
                ((bytes[bytes.length - 1] & 0xff) << 24);
            Address target = currentProgram.getAddressFactory().getDefaultAddressSpace()
                .getAddress(Integer.toUnsignedLong(value));
            ghidra.program.model.mem.MemoryBlock targetBlock =
                currentProgram.getMemory().getBlock(target);
            if (targetBlock == null || !targetBlock.isExecute()) return null;
            for (Reference reference : instruction.getReferencesFrom())
                if (target.equals(reference.getToAddress()) &&
                        (reference.getReferenceType().isData() ||
                            !reference.getReferenceType().isFlow()))
                    return target;
        }
        catch (Exception ignored) { }
        return null;
    }

    private boolean boundedOrExactLibrary(Function function,
            Map<Address, SourceAnchor> boundedLibraries,
            Map<Address, Evidence> found, SourceAnchor library) {
        Address entry = function.getEntryPoint();
        SourceAnchor bounded = boundedLibraries.get(entry);
        return bounded != null && sameLibrary(bounded, library) ||
            exactLibrary(found.get(entry), library);
    }

    private boolean sameLibrary(SourceAnchor left, SourceAnchor right) {
        return left != null && right != null && left.library.equals(right.library) &&
            left.namespace.equals(right.namespace);
    }

    private String normalizeSource(String value) {
        return value.replace('/', '\\').trim().toLowerCase(Locale.ROOT);
    }

    private Set<Address> inferCrtCluster() throws Exception {
        List<Function> functions = new ArrayList<>();
        for (Function function : currentProgram.getFunctionManager().getFunctions(true))
            if (!function.isExternal()) functions.add(function);
        functions.sort(Comparator.comparing(Function::getEntryPoint));
        List<List<Function>> groups = new ArrayList<>();
        for (Function function : functions) {
            if (!CRT_NAME.matcher(function.getName()).matches()) continue;
            if (groups.isEmpty() || function.getEntryPoint().subtract(
                    groups.get(groups.size() - 1).get(groups.get(groups.size() - 1).size() - 1)
                        .getEntryPoint()) > MAX_CRT_ANCHOR_GAP)
                groups.add(new ArrayList<>());
            groups.get(groups.size() - 1).add(function);
        }
        List<Function> anchors = groups.stream()
            .max(Comparator.comparingInt((List<Function> group) -> group.size()))
            .orElse(List.of());
        Set<Address> result = new TreeSet<>();
        if (anchors.size() < MIN_CRT_ANCHORS) return result;
        Address first = anchors.get(0).getEntryPoint();
        Address last = anchors.get(anchors.size() - 1).getEntryPoint();
        for (Function function : functions)
            if (function.getEntryPoint().compareTo(first) >= 0 &&
                    function.getEntryPoint().compareTo(last) <= 0)
                result.add(function.getEntryPoint());

        // Include only a short anonymous tail which is actually called by the inferred
        // cluster. This rejects adjacent code even when it begins at the very next byte.
        boolean changed;
        do {
            changed = false;
            for (Function function : functions) {
                Address entry = function.getEntryPoint();
                if (result.contains(entry) || entry.compareTo(last) <= 0 ||
                        entry.subtract(last) > MAX_CRT_TAIL_DISTANCE) continue;
                for (Function caller : function.getCallingFunctions(monitor)) {
                    if (!result.contains(caller.getEntryPoint())) continue;
                    result.add(entry); changed = true; break;
                }
            }
        } while (changed);
        return result;
    }

    private String moduleName(String value) {
        return value.toUpperCase(Locale.ROOT).replaceAll("[^A-Z0-9]+", "_")
            .replaceAll("^_+|_+$", "");
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Output directory is required");
        return askDirectory("Select recovery output directory", "Analyze");
    }

    private void writeTsv(Path path, List<Proposal> proposals) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taddress\told_name\tlibrary\tnamespace\tconfidence\tevidence\treferences\n");
            for (Proposal p : proposals) {
                out.write((p.apply ? "1" : "0") + "\t" + addr(p.function.getEntryPoint()) + "\t" + tsv(p.function.getName(true)) +
                    "\t" + p.library + "\t" + p.namespace + "\t" + (p.apply ? "high" : "medium") + "\t" + tsv(p.evidence) +
                    "\t" + tsv(p.references) + "\n");
            }
        }
    }

    private void writeJsonl(Path path, List<Proposal> proposals) throws Exception {
        List<String> rows = new ArrayList<>();
        for (Proposal p : proposals) {
            rows.add("{\"apply\":" + p.apply + ",\"address\":" + q(addr(p.function.getEntryPoint())) +
                ",\"old_name\":" + q(p.function.getName(true)) + ",\"library\":" + q(p.library) +
                ",\"namespace\":" + q(p.namespace) + ",\"confidence\":" + q(p.apply ? "high" : "medium") + ",\"evidence\":" +
                q(p.evidence) + ",\"references\":" + q(p.references) + "}");
        }
        Files.write(path, rows, StandardCharsets.UTF_8);
    }

    private String conflictJson(Evidence evidence) {
        return "{\"address\":" + q(addr(evidence.function.getEntryPoint())) +
            ",\"name\":" + q(evidence.function.getName(true)) + ",\"libraries\":" +
            q(String.join(" | ", evidence.libraries)) + ",\"evidence\":" +
            q(String.join(" | ", evidence.sources)) + "}";
    }

    private static String stringValue(Data data) {
        Object value = data.getValue();
        if (value instanceof String) return (String)value;
        return data.getDefaultValueRepresentation();
    }
    private static String addr(Address a) { return a.toString().toUpperCase(Locale.ROOT); }
    private static String safe(String s) { return s.replaceAll("[^A-Za-z0-9._-]+", "_"); }
    private static String tsv(String s) { return s.replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"); }
    private static String q(String s) { return "\"" + s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n") + "\""; }

    private static class Classification {
        final String library, namespace;
        Classification(String library, String namespace) { this.library = library; this.namespace = namespace; }
    }
    private record SourceAnchor(String library, String namespace, String source)
            implements Comparable<SourceAnchor> {
        @Override
        public int compareTo(SourceAnchor other) {
            int value = library.compareTo(other.library);
            if (value != 0) return value;
            value = namespace.compareTo(other.namespace);
            return value != 0 ? value : source.compareTo(other.source);
        }
    }
    private record StoredCallback(Function owner, Address site) { }
    private static class Evidence {
        final Function function;
        final Set<String> libraries = new TreeSet<>(), namespaces = new TreeSet<>();
        final Set<String> sources = new TreeSet<>(), references = new TreeSet<>();
        boolean highConfidence;
        Evidence(Function function) { this.function = function; }
        void add(Classification c, String source, Address reference) {
            add(c, source, reference, true);
        }
        void add(Classification c, String source, Address reference, boolean high) {
            libraries.add(c.library); namespaces.add(c.namespace); sources.add(source);
            references.add(addr(reference));
            highConfidence |= high;
        }
    }
    private static class Proposal {
        final Function function; final String library, namespace, evidence, references;
        final boolean apply;
        Proposal(Function function, String library, String namespace, String evidence,
                String references, boolean apply) {
            this.function = function; this.library = library; this.namespace = namespace;
            this.evidence = evidence; this.references = references; this.apply = apply;
        }
    }
}
