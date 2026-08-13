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
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
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
     * the static helpers between two exact anchors only when those are also the nearest source
     * anchors on both sides and every direct caller stays inside that closed interval (or is
     * already independently classified as the same library).  This deliberately does not grow
     * an arbitrary call-graph closure: application callbacks invoked indirectly by a library
     * receive no direct caller edge and code on either side of a source boundary is rejected.
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
            if (callers.isEmpty()) continue;
            boolean closed = true;
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
