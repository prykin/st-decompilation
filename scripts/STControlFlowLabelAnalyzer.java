// Recover conservative names for decompiler goto targets from CFG structure.
// Read-only: writes control_flow_label_proposals.tsv/jsonl and a summary.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Control Flow Labels

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Deque;
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

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.block.BasicBlockModel;
import ghidra.program.model.block.CodeBlock;
import ghidra.program.model.block.CodeBlockIterator;
import ghidra.program.model.block.CodeBlockReference;
import ghidra.program.model.block.CodeBlockReferenceIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.FlowType;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.SymbolType;

public class STControlFlowLabelAnalyzer extends GhidraScript {
    private static final Pattern GOTO = Pattern.compile(
        "\\bgoto\\s+([A-Za-z_][A-Za-z0-9_]*)\\s*;");
    private static final Pattern ADDRESS_LABEL = Pattern.compile(
        "^(?:LAB_|joined_r0x|code_r0x)([0-9A-Fa-f]{6,16})$");
    private static final Pattern OWNED_LABEL = Pattern.compile(
        "^cf_[A-Za-z0-9_]+_([0-9A-Fa-f]{6,16})$");
    // Keep this aligned with STDecompExport: the two large message dispatchers
    // routinely need much longer than Ghidra's common 30-second script default.
    private static final int DECOMPILE_TIMEOUT_SECONDS = 120;
    private static final int AUTO_COMMON_JOIN_GOTOS = 4;

    private BasicBlockModel blockModel;
    private SymbolTable symbols;
    private DecompInterface decompiler;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        blockModel = new BasicBlockModel(currentProgram);
        symbols = currentProgram.getSymbolTable();
        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Could not open decompiler: " +
                decompiler.getLastMessage());

        List<Proposal> proposals = new ArrayList<>();
        List<Unresolved> unresolved = new ArrayList<>();
        int functionsSeen = 0, candidates = 0, withGotos = 0, failures = 0;
        long gotoStatements = 0;
        try {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                if (function.isExternal() || function.isThunk() || isLibrary(function)) continue;
                functionsSeen++;
                Graph graph = buildGraph(function);
                if (!graph.hasJoinCandidate()) continue;
                candidates++;

                DecompileResults results = decompiler.decompileFunction(function,
                    DECOMPILE_TIMEOUT_SECONDS, monitor);
                if (!results.decompileCompleted() || results.getDecompiledFunction() == null) {
                    failures++;
                    unresolved.add(new Unresolved(function, "", 0,
                        "decompile_failed: " + decompiler.getLastMessage()));
                    continue;
                }
                Map<String, Integer> gotos = gotoCounts(
                    results.getDecompiledFunction().getC());
                if (gotos.isEmpty()) continue;
                withGotos++;
                gotoStatements += gotos.values().stream().mapToInt(Integer::intValue).sum();
                Map<String, Set<Address>> labelAddresses = labelAddresses(function);

                for (Map.Entry<String, Integer> entry : gotos.entrySet()) {
                    monitor.checkCancelled();
                    String decompilerLabel = entry.getKey();
                    int gotoCount = entry.getValue();
                    Address target = resolveLabel(function, decompilerLabel, labelAddresses);
                    if (target == null) {
                        unresolved.add(new Unresolved(function, decompilerLabel, gotoCount,
                            "could_not_resolve_decompiler_label"));
                        continue;
                    }
                    Node node = graph.nodeContaining(target);
                    if (node == null) {
                        unresolved.add(new Unresolved(function, decompilerLabel, gotoCount,
                            "resolved_address_is_not_a_basic_block"));
                        continue;
                    }
                    Classification classification = classify(graph, node, decompilerLabel,
                        gotoCount);
                    Symbol primary = symbols.getPrimarySymbol(target);
                    boolean safe = safePrimary(target, primary);
                    boolean apply = classification.autoApply && safe && gotoCount >= 2;
                    String reason = classification.reason;
                    if (!safe) reason += "; manual_or_non_generated_label_preserved";
                    String proposedName = "cf_" + classification.kind + "_" + addr(target);
                    proposals.add(new Proposal(function, target, decompilerLabel,
                        primary == null ? "" : primary.getName(true),
                        primary == null ? "" : primary.getSource().toString(),
                        proposedName, classification.kind, gotoCount, node.in.size(),
                        graph.backEdgesInto(node), graph.backEdgesFrom(node),
                        apply, classification.confidence, reason, preview(node)));
                }
            }
        }
        finally {
            decompiler.dispose();
        }

        proposals.sort(Comparator.comparing((Proposal p) -> p.function.getEntryPoint())
            .thenComparing(p -> p.address));
        unresolved.sort(Comparator.comparing((Unresolved row) -> row.function.getEntryPoint())
            .thenComparing(row -> row.label));
        writeTsv(directory.resolve("control_flow_label_proposals.tsv"), proposals);
        writeJson(directory.resolve("control_flow_label_proposals.jsonl"), proposals);
        writeUnresolved(directory.resolve("control_flow_label_unresolved.tsv"), unresolved);
        writeSummary(directory.resolve("control_flow_label_summary.txt"), proposals,
            unresolved, functionsSeen, candidates, withGotos, failures, gotoStatements);

        long auto = proposals.stream().filter(row -> row.apply).count();
        println("Control-flow label analysis complete: " +
            directory.toAbsolutePath().normalize());
        println("Functions with gotos: " + withGotos + ", targets: " + proposals.size() +
            ", auto_apply: " + auto + ", unresolved: " + unresolved.size() +
            ", decompile failures: " + failures);
    }

    private Graph buildGraph(Function function) throws Exception {
        Graph graph = new Graph(function);
        CodeBlockIterator iterator = blockModel.getCodeBlocksContaining(function.getBody(), monitor);
        while (iterator.hasNext()) {
            CodeBlock block = iterator.next();
            Address start = block.getFirstStartAddress();
            if (start == null || !function.getBody().contains(start)) continue;
            graph.nodes.put(start, new Node(block, start));
        }
        for (Node node : graph.nodes.values()) {
            CodeBlockReferenceIterator destinations = node.block.getDestinations(monitor);
            while (destinations.hasNext()) {
                CodeBlockReference reference = destinations.next();
                Address destination = reference.getDestinationAddress();
                if (destination == null || !function.getBody().contains(destination)) continue;
                CodeBlock destinationBlock = reference.getDestinationBlock();
                Address destinationStart = destinationBlock == null ? null :
                    destinationBlock.getFirstStartAddress();
                Node target = destinationStart == null ? null : graph.nodes.get(destinationStart);
                if (target == null) {
                    CodeBlock containing = blockModel.getFirstCodeBlockContaining(destination, monitor);
                    if (containing != null) target = graph.nodes.get(containing.getFirstStartAddress());
                }
                if (target == null) continue;
                Edge edge = new Edge(node, target, reference.getFlowType());
                node.out.add(edge);
                target.in.add(edge);
            }
            initializeNodeInstructions(node);
        }
        graph.computeDominators();
        graph.computeStrongComponents();
        return graph;
    }

    private void initializeNodeInstructions(Node node) {
        InstructionIterator iterator = currentProgram.getListing().getInstructions(node.block, true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            node.instructions.add(instruction);
            node.last = instruction;
            if (instruction.getFlowType().isCall()) {
                for (Address flow : instruction.getFlows()) {
                    Function called = currentProgram.getFunctionManager().getFunctionAt(flow);
                    if (called == null) continue;
                    if (called.isThunk()) {
                        Function target = called.getThunkedFunction(true);
                        if (target != null) called = target;
                    }
                    node.calls.add(called.getName(true));
                }
            }
        }
        node.terminal = node.last != null && (node.last.getFlowType().isTerminal() ||
            node.last.getMnemonicString().toUpperCase(Locale.ROOT).startsWith("RET"));
    }

    private Map<String, Integer> gotoCounts(String c) {
        Map<String, Integer> result = new TreeMap<>();
        Matcher matcher = GOTO.matcher(c);
        while (matcher.find()) result.merge(matcher.group(1), 1, Integer::sum);
        return result;
    }

    private Map<String, Set<Address>> labelAddresses(Function function) {
        Map<String, Set<Address>> result = new HashMap<>();
        SymbolIterator iterator = symbols.getSymbols(function.getBody(), SymbolType.LABEL, true);
        while (iterator.hasNext()) {
            Symbol symbol = iterator.next();
            addLabelAddress(result, symbol.getName(), symbol.getAddress());
            addLabelAddress(result, sanitizeIdentifier(symbol.getName(true)), symbol.getAddress());
            if (symbol.getParentNamespace() != null) {
                String parent = symbol.getParentNamespace().getName();
                addLabelAddress(result, sanitizeIdentifier(parent + "_" + symbol.getName()),
                    symbol.getAddress());
            }
        }
        return result;
    }

    private void addLabelAddress(Map<String, Set<Address>> map, String name, Address address) {
        if (name == null || name.isBlank() || address == null) return;
        map.computeIfAbsent(name, ignored -> new TreeSet<>()).add(address);
    }

    private Address resolveLabel(Function function, String label,
            Map<String, Set<Address>> labelAddresses) {
        Set<Address> matches = labelAddresses.get(label);
        if (matches != null && matches.size() == 1) return matches.iterator().next();
        Matcher direct = ADDRESS_LABEL.matcher(label);
        if (!direct.matches()) direct = OWNED_LABEL.matcher(label);
        if (direct.matches()) {
            Address address = currentProgram.getAddressFactory().getAddress(direct.group(1));
            if (address != null && function.getBody().contains(address)) return address;
        }
        return null;
    }

    private Classification classify(Graph graph, Node node, String oldLabel, int gotoCount) {
        boolean error = reachesExceptionSink(node, 2, new HashSet<>());
        boolean commonExit = allPathsTerminate(node, 4, new HashSet<>());
        boolean loopHeader = graph.loopHeaders.contains(node);
        boolean loopLatch = graph.loopLatches.contains(node);
        int loopExitPreds = graph.loopExitPredecessors(node);
        boolean switchGenerated = oldLabel.startsWith("switchD_");

        if (error && gotoCount >= 2)
            return new Classification("error_exit", true, "high",
                "target reaches RaiseInternalException/longjmp/abort/exit");
        if (commonExit && gotoCount >= 2)
            return new Classification("common_exit", true, "high",
                "all short successor paths terminate");
        if ((loopHeader || loopLatch) && gotoCount >= 2)
            return new Classification("continue_loop", true, "high",
                loopHeader ? "target is a natural loop header" :
                    "target is a natural loop latch");
        if (loopExitPreds >= 2)
            return new Classification("break_loop", true, "high",
                "multiple predecessors leave the same strongly-connected loop");
        if (switchGenerated && gotoCount >= AUTO_COMMON_JOIN_GOTOS)
            return new Classification("switch_join", true, "high",
                "generated switch target has high goto fan-in");
        if (gotoCount >= AUTO_COMMON_JOIN_GOTOS)
            return new Classification("common_join", true, "high",
                "high-fan-in control-flow join");
        if (node.in.size() >= 2)
            return new Classification("join", false, "medium",
                "multi-predecessor target; semantic role requires review");
        return new Classification("branch_target", false, "review",
            "single-predecessor unstructured target");
    }

    private boolean reachesExceptionSink(Node node, int depth, Set<Node> seen) {
        if (!seen.add(node)) return false;
        for (String name : node.calls) {
            String lower = name.toLowerCase(Locale.ROOT);
            if (lower.contains("raiseinternalexception") || lower.contains("longjmp") ||
                    lower.endsWith("::abort") || lower.endsWith("::exit") ||
                    lower.contains("terminate")) return true;
        }
        if (depth == 0 || node.out.size() != 1) return false;
        return reachesExceptionSink(node.out.get(0).target, depth - 1, seen);
    }

    private boolean allPathsTerminate(Node node, int depth, Set<Node> path) {
        if (node.terminal) return true;
        if (depth == 0 || node.out.isEmpty() || !path.add(node)) return false;
        for (Edge edge : node.out) {
            if (!allPathsTerminate(edge.target, depth - 1, new HashSet<>(path))) return false;
        }
        return true;
    }

    private boolean safePrimary(Address address, Symbol primary) {
        for (Symbol symbol : symbols.getSymbols(address)) {
            if (symbol.getSymbolType() == SymbolType.LABEL &&
                    symbol.getSource() == SourceType.USER_DEFINED &&
                    !symbol.getName().startsWith("cf_")) return false;
        }
        if (primary == null || primary.isDynamic() || primary.getSource() == SourceType.DEFAULT)
            return true;
        return generatedName(primary.getName()) || generatedName(primary.getName(true));
    }

    private boolean generatedName(String name) {
        if (name == null) return true;
        String leaf = name;
        int separator = leaf.lastIndexOf("::");
        if (separator >= 0) leaf = leaf.substring(separator + 2);
        return leaf.startsWith("LAB_") || leaf.startsWith("switchD_") ||
            leaf.startsWith("caseD_") || leaf.startsWith("joined_r0x") ||
            leaf.startsWith("code_r0x") || leaf.startsWith("cf_");
    }

    private String preview(Node node) {
        List<String> parts = new ArrayList<>();
        for (int i = 0; i < node.instructions.size() && i < 4; i++) {
            Instruction instruction = node.instructions.get(i);
            parts.add(addr(instruction.getAddress()) + " " + instruction.toString());
        }
        if (!node.calls.isEmpty()) parts.add("calls=" + String.join("|", node.calls));
        return String.join("; ", parts);
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\texpected_signature\t" +
                "label_address\tdecompiler_label\texisting_primary_name\t" +
                "existing_primary_source\tproposed_name\tkind\tgoto_count\t" +
                "cfg_incoming\tback_edges_into\tback_edges_from\tconfidence\treason\tpreview\n");
            for (Proposal p : rows) {
                out.write(bit(p.apply) + "\t" + addr(p.function.getEntryPoint()) + "\t" +
                    tsv(p.function.getName(true)) + "\t" +
                    tsv(p.function.getSignature().getPrototypeString(true)) + "\t" +
                    addr(p.address) + "\t" + tsv(p.decompilerLabel) + "\t" +
                    tsv(p.existingPrimaryName) + "\t" + p.existingPrimarySource + "\t" +
                    p.proposedName + "\t" + p.kind + "\t" + p.gotoCount + "\t" +
                    p.cfgIncoming + "\t" + p.backEdgesInto + "\t" + p.backEdgesFrom +
                    "\t" + p.confidence + "\t" + tsv(p.reason) + "\t" +
                    tsv(p.preview) + "\n");
            }
        }
    }

    private void writeJson(Path path, List<Proposal> rows) throws Exception {
        List<String> output = new ArrayList<>();
        for (Proposal p : rows) {
            output.add("{\"apply\":" + p.apply + ",\"function_address\":" +
                q(addr(p.function.getEntryPoint())) + ",\"function\":" +
                q(p.function.getName(true)) + ",\"label_address\":" + q(addr(p.address)) +
                ",\"decompiler_label\":" + q(p.decompilerLabel) +
                ",\"proposed_name\":" + q(p.proposedName) + ",\"kind\":" + q(p.kind) +
                ",\"goto_count\":" + p.gotoCount + ",\"cfg_incoming\":" +
                p.cfgIncoming + ",\"confidence\":" + q(p.confidence) +
                ",\"reason\":" + q(p.reason) + "}");
        }
        Files.write(path, output, StandardCharsets.UTF_8);
    }

    private void writeUnresolved(Path path, List<Unresolved> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tfunction\tdecompiler_label\tgoto_count\treason\n");
            for (Unresolved row : rows) {
                out.write(addr(row.function.getEntryPoint()) + "\t" +
                    tsv(row.function.getName(true)) + "\t" + tsv(row.label) + "\t" +
                    row.gotoCount + "\t" + tsv(row.reason) + "\n");
            }
        }
    }

    private void writeSummary(Path path, List<Proposal> rows, List<Unresolved> unresolved,
            int functions, int candidates, int withGotos, int failures,
            long gotoStatements) throws Exception {
        Map<String, Long> kinds = new TreeMap<>();
        for (Proposal row : rows) kinds.merge(row.kind, 1L, Long::sum);
        long covered = rows.stream().filter(row -> row.apply)
            .mapToLong(row -> row.gotoCount).sum();
        Files.write(path, List.of("program=" + currentProgram.getName(),
            "functions_scanned=" + functions, "cfg_candidates=" + candidates,
            "functions_with_gotos=" + withGotos, "decompile_failures=" + failures,
            "goto_statements=" + gotoStatements, "resolved_targets=" + rows.size(),
            "unresolved_targets=" + unresolved.size(),
            "auto_apply=" + rows.stream().filter(row -> row.apply).count(),
            "auto_apply_gotos_covered=" + covered, "kinds=" + kinds,
            "note=Only labels emitted as goto targets by the decompiler are proposed.",
            "note_apply=Manual labels are preserved; generic low-confidence joins remain apply=0."),
            StandardCharsets.UTF_8);
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (Files.isRegularFile(path.resolve("vtable_proposals.tsv")) ||
                Files.isRegularFile(path.resolve("class_layout_proposals.tsv"))) return path;
        return path.resolve(safe(currentProgram.getName()));
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery directory argument is required");
        return askDirectory("Select recovery output directory", "Analyze control-flow labels");
    }

    private static String sanitizeIdentifier(String value) {
        return value.replace("::", "_").replaceAll("[^A-Za-z0-9_]", "_")
            .replaceAll("_+", "_");
    }
    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        if (value == null) value = "";
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }

    private static class Edge {
        final Node source, target;
        final FlowType flow;
        Edge(Node source, Node target, FlowType flow) {
            this.source = source; this.target = target; this.flow = flow;
        }
    }
    private static class Node {
        final CodeBlock block;
        final Address start;
        final List<Edge> in = new ArrayList<>(), out = new ArrayList<>();
        final List<Instruction> instructions = new ArrayList<>();
        final Set<String> calls = new TreeSet<>();
        Instruction last;
        boolean terminal;
        int component = -1;
        Node(CodeBlock block, Address start) { this.block = block; this.start = start; }
    }
    private static class Graph {
        final Function function;
        final Map<Address, Node> nodes = new LinkedHashMap<>();
        final Map<Node, Set<Node>> dominators = new HashMap<>();
        final Set<Node> loopHeaders = new HashSet<>(), loopLatches = new HashSet<>();
        final Map<Integer, Integer> componentSizes = new HashMap<>();

        Graph(Function function) { this.function = function; }
        boolean hasJoinCandidate() {
            for (Node node : nodes.values()) if (node.in.size() >= 2) return true;
            return false;
        }
        Node nodeContaining(Address address) {
            Node exact = nodes.get(address);
            if (exact != null) return exact;
            for (Node node : nodes.values()) if (node.block.contains(address)) return node;
            return null;
        }
        void computeDominators() {
            if (nodes.isEmpty()) return;
            Node entry = nodeContaining(function.getEntryPoint());
            if (entry == null) entry = nodes.values().iterator().next();
            Set<Node> all = new HashSet<>(nodes.values());
            for (Node node : nodes.values())
                dominators.put(node, node == entry ? new HashSet<>(Set.of(entry)) :
                    new HashSet<>(all));
            boolean changed;
            do {
                changed = false;
                for (Node node : nodes.values()) {
                    if (node == entry) continue;
                    Set<Node> next = null;
                    for (Edge edge : node.in) {
                        Set<Node> pred = dominators.get(edge.source);
                        if (pred == null) continue;
                        if (next == null) next = new HashSet<>(pred);
                        else next.retainAll(pred);
                    }
                    if (next == null) next = new HashSet<>();
                    next.add(node);
                    if (!next.equals(dominators.get(node))) {
                        dominators.put(node, next);
                        changed = true;
                    }
                }
            } while (changed);
            for (Node source : nodes.values()) {
                for (Edge edge : source.out) {
                    if (dominators.getOrDefault(source, Set.of()).contains(edge.target)) {
                        loopHeaders.add(edge.target);
                        loopLatches.add(source);
                    }
                }
            }
        }
        int backEdgesInto(Node node) {
            int count = 0;
            for (Edge edge : node.in)
                if (dominators.getOrDefault(edge.source, Set.of()).contains(node)) count++;
            return count;
        }
        int backEdgesFrom(Node node) {
            int count = 0;
            for (Edge edge : node.out)
                if (dominators.getOrDefault(node, Set.of()).contains(edge.target)) count++;
            return count;
        }
        void computeStrongComponents() {
            // Iterative Kosaraju avoids overflowing the Java stack in ST's very large
            // dispatch functions (some contain thousands of basic blocks).
            List<Node> finishOrder = new ArrayList<>();
            Set<Node> visited = new HashSet<>();
            for (Node root : nodes.values()) {
                if (!visited.add(root)) continue;
                Deque<DfsFrame> dfs = new ArrayDeque<>();
                dfs.push(new DfsFrame(root));
                while (!dfs.isEmpty()) {
                    DfsFrame frame = dfs.peek();
                    if (frame.nextEdge < frame.node.out.size()) {
                        Node target = frame.node.out.get(frame.nextEdge++).target;
                        if (visited.add(target)) dfs.push(new DfsFrame(target));
                    }
                    else {
                        finishOrder.add(frame.node);
                        dfs.pop();
                    }
                }
            }

            int component = 0;
            for (int index = finishOrder.size() - 1; index >= 0; index--) {
                Node root = finishOrder.get(index);
                if (root.component >= 0) continue;
                Deque<Node> pending = new ArrayDeque<>();
                root.component = component;
                pending.push(root);
                while (!pending.isEmpty()) {
                    Node node = pending.pop();
                    for (Edge edge : node.in) {
                        Node predecessor = edge.source;
                        if (predecessor.component >= 0) continue;
                        predecessor.component = component;
                        pending.push(predecessor);
                    }
                }
                component++;
            }
            for (Node node : nodes.values())
                componentSizes.merge(node.component, 1, Integer::sum);
        }
        int loopExitPredecessors(Node target) {
            Map<Integer, Integer> counts = new HashMap<>();
            for (Edge edge : target.in) {
                Node source = edge.source;
                int size = componentSizes.getOrDefault(source.component, 1);
                if (size > 1 && source.component != target.component)
                    counts.merge(source.component, 1, Integer::sum);
            }
            return counts.values().stream().mapToInt(Integer::intValue).max().orElse(0);
        }
    }
    private static class DfsFrame {
        final Node node;
        int nextEdge;
        DfsFrame(Node node) { this.node = node; }
    }
    private static class Classification {
        final String kind, confidence, reason;
        final boolean autoApply;
        Classification(String kind, boolean autoApply, String confidence, String reason) {
            this.kind = kind; this.autoApply = autoApply;
            this.confidence = confidence; this.reason = reason;
        }
    }
    private static class Proposal {
        final Function function;
        final Address address;
        final String decompilerLabel, existingPrimaryName, existingPrimarySource,
            proposedName, kind, confidence, reason, preview;
        final int gotoCount, cfgIncoming, backEdgesInto, backEdgesFrom;
        final boolean apply;
        Proposal(Function function, Address address, String decompilerLabel,
                String existingPrimaryName, String existingPrimarySource, String proposedName,
                String kind, int gotoCount, int cfgIncoming, int backEdgesInto,
                int backEdgesFrom, boolean apply, String confidence, String reason,
                String preview) {
            this.function = function; this.address = address;
            this.decompilerLabel = decompilerLabel;
            this.existingPrimaryName = existingPrimaryName;
            this.existingPrimarySource = existingPrimarySource;
            this.proposedName = proposedName; this.kind = kind;
            this.gotoCount = gotoCount; this.cfgIncoming = cfgIncoming;
            this.backEdgesInto = backEdgesInto; this.backEdgesFrom = backEdgesFrom;
            this.apply = apply; this.confidence = confidence;
            this.reason = reason; this.preview = preview;
        }
    }
    private static class Unresolved {
        final Function function;
        final String label, reason;
        final int gotoCount;
        Unresolved(Function function, String label, int gotoCount, String reason) {
            this.function = function; this.label = label;
            this.gotoCount = gotoCount; this.reason = reason;
        }
    }
}
