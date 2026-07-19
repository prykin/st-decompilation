// Recover source paths and C++ method names embedded in Submarine Titans diagnostics.
// This script is read-only: it writes proposals for STDebugSymbolApplier.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Debug Symbols

import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
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
import java.util.regex.Matcher;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.util.DefinedStringIterator;

public class STDebugSymbolAnalyzer extends GhidraScript {
    private static final Pattern METHOD = Pattern.compile(
        "^[A-Za-z_~][A-Za-z0-9_~<>]*(?:::[A-Za-z_~][A-Za-z0-9_~<>]*)+$");
    private static final Pattern METHOD_PREFIX = Pattern.compile(
        "^([A-Za-z_~][A-Za-z0-9_~<>]*(?:::[A-Za-z_~][A-Za-z0-9_~<>]*)+)(?=$|\\s|[-:(])");
    private static final Pattern SOURCE = Pattern.compile(
        "(?i)^[A-Za-z]:\\\\.*\\.(?:c|cc|cpp|cxx|h|hh|hpp|hxx)$");

    private Listing listing;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open a program first.");
            return;
        }
        File root = outputDirectory();
        if (root == null) {
            return;
        }
        listing = currentProgram.getListing();

        Map<Address, FunctionEvidence> evidence = new LinkedHashMap<>();
        for (Data data : DefinedStringIterator.forProgram(currentProgram)) {
            monitor.checkCancelled();
            String value = stringValue(data);
            String recoveredMethod = methodValue(value);
            if (recoveredMethod == null && !SOURCE.matcher(value).matches()) {
                continue;
            }
            ReferenceIterator refs = currentProgram.getReferenceManager()
                .getReferencesTo(data.getMinAddress());
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function function = listing.getFunctionContaining(ref.getFromAddress());
                if (function == null) {
                    continue;
                }
                FunctionEvidence item = evidence.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new FunctionEvidence(function));
                if (recoveredMethod != null) {
                    item.methods.add(recoveredMethod);
                    item.methodRefs.put(recoveredMethod, ref.getFromAddress());
                }
                else {
                    item.sources.add(value);
                    item.sourceRefs.put(value, ref.getFromAddress());
                }
            }
        }

        Path dir = root.toPath().toAbsolutePath().normalize()
            .resolve(safe(currentProgram.getName()));
        Files.createDirectories(dir);
        List<Proposal> proposals = new ArrayList<>();
        List<String> conflicts = new ArrayList<>();

        for (FunctionEvidence item : evidence.values()) {
            monitor.checkCancelled();
            String qualified = selectMethod(item);
            if (qualified == null) {
                if (!item.methods.isEmpty()) conflicts.add(conflictJson(item, "multiple_method_strings"));
                continue;
            }
            int split = qualified.lastIndexOf("::");
            String owner = qualified.substring(0, split);
            String method = qualified.substring(split + 2);
            String source = item.sources.size() == 1 ? item.sources.iterator().next() : "";
            long line = source.isEmpty() ? -1 : recoverLine(item.sourceRefs.get(source));
            boolean defaultName = item.function.getSymbol().getSource().toString().equals("DEFAULT");
            String confidence = item.sources.size() == 1 && defaultName ? "high" :
                item.sources.size() <= 1 ? "medium" : "conflict";
            String reason = item.sources.size() > 1 ? "multiple_source_paths" :
                source.isEmpty() ? "no_source_path" : "unique_method_and_source";
            ThiscallEvidence thiscall = findThiscallEvidence(item.function);
            proposals.add(new Proposal(item.function, qualified, owner, method, source, line,
                confidence, reason, thiscall.convention, thiscall.evidence));
        }
        proposals.sort(Comparator.comparing(p -> p.function.getEntryPoint()));

        writeTsv(dir.resolve("proposals.tsv"), proposals);
        writeJsonl(dir.resolve("proposals.jsonl"), proposals);
        writeLines(dir.resolve("conflicts.jsonl"), conflicts);
        writeSummary(dir.resolve("summary.txt"), proposals, conflicts.size());
        println("Debug-symbol analysis complete: " + dir);
        println("Proposals: " + proposals.size() + ", conflicts: " + conflicts.size());
    }

    private String selectMethod(FunctionEvidence item) {
        if (item.methods.size() == 1) return item.methods.iterator().next();
        // Makes the analyzer idempotent after proposals have already been applied. Diagnostic
        // strings inside a method often mention field-like helpers such as Class::Invalid.
        String current = item.function.getName(true);
        if (item.methods.contains(current)) return current;
        return null;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) {
            return new File(args[0]);
        }
        if (isRunningHeadless()) {
            throw new IllegalArgumentException("Output directory argument is required");
        }
        return askDirectory("Select recovery output directory", "Analyze");
    }

    private long recoverLine(Address sourceReference) {
        if (sourceReference == null) {
            return -1;
        }
        Instruction instruction = listing.getInstructionAt(sourceReference);
        for (int i = 0; i < 3 && instruction != null; i++) {
            instruction = listing.getInstructionAfter(instruction.getAddress());
            if (instruction == null) {
                break;
            }
            if ("PUSH".equalsIgnoreCase(instruction.getMnemonicString())) {
                Scalar scalar = instruction.getScalar(0);
                if (scalar != null) {
                    long value = scalar.getUnsignedValue();
                    if (value > 0 && value < 1000000) {
                        return value;
                    }
                }
            }
        }
        return -1;
    }

    private ThiscallEvidence findThiscallEvidence(Function function) {
        ghidra.program.model.listing.InstructionIterator instructions =
            listing.getInstructions(function.getBody(), true);
        int inspected = 0;
        while (instructions.hasNext() && inspected++ < 24) {
            Instruction instruction = instructions.next();
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String compact = text.replaceAll("\\s+", " ").trim();
            boolean ecxAddressing = compact.contains("[ECX") || compact.contains("[ ECX");
            boolean ecxAsSource = compact.matches("MOV .+, ?ECX$") ||
                compact.matches("(?:PUSH|TEST|CMP|OR|AND) ECX(?:,.*)?$");
            if (ecxAddressing || ecxAsSource) {
                return new ThiscallEvidence("__thiscall",
                    addr(instruction.getAddress()) + ": " + instruction.toString());
            }
        }
        return new ThiscallEvidence("", "no incoming ECX use found in first 24 instructions");
    }

    private static String stringValue(Data data) {
        Object value = data.getValue();
        if (value instanceof String) {
            return (String)value;
        }
        String representation = data.getDefaultValueRepresentation();
        if (representation.length() >= 2 && representation.startsWith("\"") &&
                representation.endsWith("\"")) {
            return representation.substring(1, representation.length() - 1)
                .replace("\\\\", "\\").replace("\\\"", "\"");
        }
        return representation;
    }

    private static String methodValue(String value) {
        if (METHOD.matcher(value).matches()) return value;
        Matcher matcher = METHOD_PREFIX.matcher(value);
        return matcher.find() ? matcher.group(1) : null;
    }

    private String conflictJson(FunctionEvidence item, String reason) {
        return "{\"address\":" + q(addr(item.function.getEntryPoint())) +
            ",\"function\":" + q(item.function.getName(true)) +
            ",\"reason\":" + q(reason) +
            ",\"methods\":" + stringArray(item.methods) +
            ",\"sources\":" + stringArray(item.sources) + "}";
    }

    private void writeTsv(Path path, List<Proposal> proposals) throws IOException {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taddress\told_name\tqualified_name\towner\tmethod\tsuggested_calling_convention\tcalling_convention_evidence\tsource_file\tsource_line\tconfidence\treason\n");
            for (Proposal p : proposals) {
                boolean apply = "high".equals(p.confidence);
                out.write((apply ? "1" : "0") + "\t" + addr(p.function.getEntryPoint()) + "\t" +
                    tsv(p.function.getName(true)) + "\t" + tsv(p.qualified) + "\t" +
                    tsv(p.owner) + "\t" + tsv(p.method) + "\t" + tsv(p.callingConvention) +
                    "\t" + tsv(p.callingConventionEvidence) + "\t" + tsv(p.source) + "\t" +
                    (p.line < 0 ? "" : Long.toString(p.line)) + "\t" + p.confidence + "\t" +
                    p.reason + "\n");
            }
        }
    }

    private void writeJsonl(Path path, List<Proposal> proposals) throws IOException {
        List<String> rows = new ArrayList<>();
        for (Proposal p : proposals) {
            rows.add("{\"apply\":" + ("high".equals(p.confidence) ? "true" : "false") +
                ",\"address\":" + q(addr(p.function.getEntryPoint())) +
                ",\"old_name\":" + q(p.function.getName(true)) +
                ",\"qualified_name\":" + q(p.qualified) +
                ",\"owner\":" + q(p.owner) + ",\"method\":" + q(p.method) +
                ",\"suggested_calling_convention\":" + q(p.callingConvention) +
                ",\"calling_convention_evidence\":" + q(p.callingConventionEvidence) +
                ",\"source_file\":" + q(p.source) +
                ",\"source_line\":" + (p.line < 0 ? "null" : Long.toString(p.line)) +
                ",\"confidence\":" + q(p.confidence) + ",\"reason\":" + q(p.reason) + "}");
        }
        writeLines(path, rows);
    }

    private void writeSummary(Path path, List<Proposal> proposals, int conflicts) throws IOException {
        long high = proposals.stream().filter(p -> p.confidence.equals("high")).count();
        long medium = proposals.stream().filter(p -> p.confidence.equals("medium")).count();
        writeLines(path, List.of("program=" + currentProgram.getName(),
            "proposals=" + proposals.size(), "high=" + high, "medium=" + medium,
            "conflicts=" + conflicts,
            "note=Only rows with apply=1 are consumed by STDebugSymbolApplier."));
    }

    private static void writeLines(Path path, List<String> rows) throws IOException {
        Files.write(path, rows, StandardCharsets.UTF_8);
    }

    private static String addr(Address a) {
        return a.toString().toUpperCase(Locale.ROOT);
    }

    private static String safe(String s) {
        return s.replaceAll("[^A-Za-z0-9._-]+", "_");
    }

    private static String tsv(String s) {
        return s.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String q(String s) {
        return "\"" + s.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n") + "\"";
    }

    private static String stringArray(Set<String> values) {
        List<String> rows = new ArrayList<>();
        for (String value : values) rows.add(q(value));
        return "[" + String.join(",", rows) + "]";
    }

    private static class FunctionEvidence {
        final Function function;
        final Set<String> methods = new TreeSet<>();
        final Set<String> sources = new TreeSet<>();
        final Map<String, Address> methodRefs = new HashMap<>();
        final Map<String, Address> sourceRefs = new HashMap<>();
        FunctionEvidence(Function function) { this.function = function; }
    }

    private static class Proposal {
        final Function function;
        final String qualified, owner, method, source, confidence, reason;
        final String callingConvention, callingConventionEvidence;
        final long line;
        Proposal(Function function, String qualified, String owner, String method, String source,
                long line, String confidence, String reason, String callingConvention,
                String callingConventionEvidence) {
            this.function = function; this.qualified = qualified; this.owner = owner;
            this.method = method; this.source = source; this.line = line;
            this.confidence = confidence; this.reason = reason;
            this.callingConvention = callingConvention;
            this.callingConventionEvidence = callingConventionEvidence;
        }
    }

    private static class ThiscallEvidence {
        final String convention, evidence;
        ThiscallEvidence(String convention, String evidence) {
            this.convention = convention; this.evidence = evidence;
        }
    }
}
