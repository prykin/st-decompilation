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
        "(?i)^(?:_*Crt.*|_*(?:setjmp3|longjmp|exit|ftol|purecall|amsg_exit|initterm|except_handler3)|" +
        "_*(?:malloc|calloc|realloc|free|memcpy|memmove|memset|memcmp|strlen|strcpy|strncpy|" +
        "strcmp|strncmp|strcat|strchr|strrchr|sprintf|vsprintf|printf|fprintf|fopen|fclose))$");
    private static final Pattern DKW_PATH = Pattern.compile(
        "(?i)(?:[A-Z]:\\\\)?D?KW\\\\([A-Z0-9_]+)\\\\");
    // Confirmed contiguous VC6 CRT block in this ST.exe image; end is exclusive.
    private static final String CRT_START = "0072D7F0";
    private static final String CRT_END = "00746BAB";

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open a program first.");
            return;
        }
        File root = outputDirectory();
        if (root == null) return;

        Map<Address, Evidence> found = new LinkedHashMap<>();
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
            }
        }

        // The linked VC6 runtime is contiguous. Names outside it are only hints.
        for (Function function : currentProgram.getFunctionManager().getFunctions(true)) {
            monitor.checkCancelled();
            if (function.isExternal()) continue;
            String address = addr(function.getEntryPoint());
            boolean inCrtBlock = address.compareTo(CRT_START) >= 0 && address.compareTo(CRT_END) < 0;
            boolean knownCrtName = CRT_NAME.matcher(function.getName()).matches();
            if (inCrtBlock || knownCrtName) {
                Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new Evidence(function));
                evidence.add(new Classification("MSVCRT", "Library::MSVCRT"),
                    inCrtBlock ? "confirmed contiguous ST.exe VC6 CRT block " + CRT_START + ".." + CRT_END :
                        "known CRT symbol: " + function.getName(), function.getEntryPoint(), true);
            }
            else if (function.getParentNamespace().isGlobal() && function.getName().startsWith("_")) {
                Evidence evidence = found.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new Evidence(function));
                evidence.add(new Classification("MSVCRT", "Library::MSVCRT"),
                    "global underscore-prefixed symbol: " + function.getName(),
                    function.getEntryPoint(), false);
            }
        }

        List<Proposal> proposals = new ArrayList<>();
        List<String> conflicts = new ArrayList<>();
        for (Evidence evidence : found.values()) {
            monitor.checkCancelled();
            if (evidence.libraries.size() != 1 || evidence.namespaces.size() != 1) {
                conflicts.add(conflictJson(evidence));
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
        writeJsonl(dir.resolve("library_proposals.jsonl"), proposals);
        Files.write(dir.resolve("library_conflicts.jsonl"), conflicts, StandardCharsets.UTF_8);
        Files.write(dir.resolve("library_summary.txt"), List.of(
            "program=" + currentProgram.getName(),
            "proposals=" + proposals.size(),
            "conflicts=" + conflicts.size(),
            "note=Only rows with apply=1 are consumed by STLibraryApplier."),
            StandardCharsets.UTF_8);
        println("Library analysis complete: " + dir);
        println("Proposals: " + proposals.size() + ", conflicts: " + conflicts.size());
    }

    private Classification classifyPath(String value) {
        String path = value.replace('/', '\\').toLowerCase(Locale.ROOT);
        if (path.contains("\\__titans\\crt\\")) return new Classification("MSVCRT", "Library::MSVCRT");
        java.util.regex.Matcher dkw = DKW_PATH.matcher(value.replace('/', '\\'));
        if (dkw.find()) {
            String module = dkw.group(1).toUpperCase(Locale.ROOT);
            return new Classification("DKW_" + module, "Library::DKW::" + module);
        }
        return null;
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
