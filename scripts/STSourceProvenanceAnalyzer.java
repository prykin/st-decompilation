// Recover source-file provenance and conservative free-function names from embedded strings.
// Read-only: writes source_provenance_proposals.tsv/jsonl and a summary.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Source Provenance

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.util.DefinedStringIterator;

public class STSourceProvenanceAnalyzer extends GhidraScript {
    private static final Pattern SOURCE = Pattern.compile(
        "(?i)^[A-Za-z]:\\\\.*\\.(?:c|cc|cpp|cxx|h|hh|hpp|hxx)$");
    private static final Pattern IDENTIFIER = Pattern.compile(
        "^_?[A-Za-z~][A-Za-z0-9_~]{2,127}$");
    private static final Pattern PLACEHOLDER = Pattern.compile(
        "(?i)^(?:FUN|LAB|SUB|THUNK_FUN)_[0-9a-f]+$");
    private static final Pattern GENERIC_TOKEN = Pattern.compile(
        "(?i)^(?:true|false|null|none|error|warning|debug|message|version|section|object|" +
        "default|unknown|invalid|success|failed|failure|data|file|line|name|type|value)$");
    private static final String NAME_TAG = "RECOVERED_SOURCE_NAME";
    private static final String COMMENT_MARKER = "[STSourceProvenanceApplier begin]";
    private static final long NAME_PAIR_DISTANCE = 0x100L;

    private Listing listing;

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
        listing = currentProgram.getListing();

        Map<Address, FunctionEvidence> evidence = new TreeMap<>();
        for (Data data : DefinedStringIterator.forProgram(currentProgram)) {
            monitor.checkCancelled();
            String value = stringValue(data);
            boolean source = SOURCE.matcher(value).matches();
            String freeName = source ? null : freeFunctionName(value);
            if (!source && freeName == null) continue;

            ReferenceIterator references = currentProgram.getReferenceManager()
                .getReferencesTo(data.getMinAddress());
            while (references.hasNext()) {
                Reference reference = references.next();
                Function function = listing.getFunctionContaining(reference.getFromAddress());
                if (function == null || function.isThunk() || function.isExternal() ||
                        isLibrary(function)) continue;
                FunctionEvidence item = evidence.computeIfAbsent(function.getEntryPoint(),
                    ignored -> new FunctionEvidence(function));
                if (source) {
                    item.sources.add(value);
                    item.sourceReferences.computeIfAbsent(value, ignored -> new TreeSet<>())
                        .add(reference.getFromAddress());
                }
                else {
                    item.names.add(freeName);
                    item.nameReferences.computeIfAbsent(freeName, ignored -> new TreeSet<>())
                        .add(reference.getFromAddress());
                }
            }
        }

        List<Proposal> rows = new ArrayList<>();
        for (FunctionEvidence item : evidence.values()) {
            monitor.checkCancelled();
            if (item.sources.isEmpty()) continue;
            rows.add(makeProposal(item));
        }
        disableDuplicateNames(rows);
        rows.sort(Comparator.comparing(row -> row.address));

        writeTsv(directory.resolve("source_provenance_proposals.tsv"), rows);
        writeJsonl(directory.resolve("source_provenance_proposals.jsonl"), rows);
        writeSummary(directory.resolve("source_provenance_summary.txt"), rows);
        long sourceApply = rows.stream().filter(row -> row.sourceApply).count();
        long nameApply = rows.stream().filter(row -> row.nameApply).count();
        println("Source-provenance analysis complete: " + directory.toAbsolutePath().normalize());
        println("Functions: " + rows.size() + ", source_apply: " + sourceApply +
            ", free_name_apply: " + nameApply);
    }

    private Proposal makeProposal(FunctionEvidence item) {
        String address = addr(item.function.getEntryPoint());
        String current = item.function.getName(true);
        boolean uniqueSource = item.sources.size() == 1;
        String source = uniqueSource ? item.sources.iterator().next() : "";
        Set<Long> lines = uniqueSource ? recoverLines(item.sourceReferences.get(source)) : Set.of();
        String lineText = joinLongs(lines);
        String existingComment = item.function.getComment();
        boolean ownedComment = existingComment != null && existingComment.contains(COMMENT_MARKER);
        boolean alreadyDocumented = uniqueSource && !ownedComment && existingComment != null &&
            existingComment.contains(source);
        boolean sourceApply = uniqueSource && !alreadyDocumented;
        String sourceConfidence = uniqueSource ? "high" : "conflict";
        String sourceReason = alreadyDocumented ? "source_already_present_in_function_comment" :
            uniqueSource ? "unique_embedded_source_path" :
            "multiple_source_paths=" + String.join("|", item.sources);

        String proposedName = item.names.size() == 1 ? item.names.iterator().next() : "";
        boolean paired = uniqueSource && !proposedName.isBlank() &&
            referencesNear(item.sourceReferences.get(source),
                item.nameReferences.get(proposedName), NAME_PAIR_DISTANCE);
        boolean replaceable = replaceableName(item.function, proposedName);
        boolean nameApply = uniqueSource && item.names.size() == 1 && paired && replaceable;
        String nameConfidence;
        String nameReason;
        if (item.names.isEmpty()) {
            nameConfidence = "none";
            nameReason = "no_strict_free_function_string";
        }
        else if (item.names.size() > 1) {
            nameConfidence = "conflict";
            nameReason = "multiple_free_function_strings=" + String.join("|", item.names);
        }
        else if (!uniqueSource) {
            nameConfidence = "conflict";
            nameReason = "source_path_not_unique";
        }
        else if (!paired) {
            nameConfidence = "review";
            nameReason = "name_and_source_references_not_in_same_diagnostic_neighborhood";
        }
        else if (!replaceable) {
            nameConfidence = "review";
            nameReason = "existing_nonplaceholder_name_preserved";
        }
        else {
            nameConfidence = "high";
            nameReason = "unique_nearby_name_and_source_metadata";
        }
        return new Proposal(address, current, sourceApply, source, lineText,
            sourceConfidence, sourceReason, nameApply, proposedName, nameConfidence,
            nameReason, item.names);
    }

    private String freeFunctionName(String value) {
        String candidate = value == null ? "" : value.trim();
        if (!IDENTIFIER.matcher(candidate).matches() || candidate.contains("::") ||
                SOURCE.matcher(candidate).matches() || PLACEHOLDER.matcher(candidate).matches() ||
                GENERIC_TOKEN.matcher(candidate).matches()) return null;
        String core = candidate.startsWith("_") ? candidate.substring(1) : candidate;
        if (core.isBlank() || core.equals(core.toUpperCase(Locale.ROOT)) ||
                core.equals(core.toLowerCase(Locale.ROOT))) return null;
        // Function diagnostics in this executable use mixed-case identifiers.  Requiring a
        // case transition excludes resource keys and ordinary one-word UI strings.
        if (!core.matches(".*[a-z][A-Z].*") && !core.matches("[A-Z][a-z]+[A-Z].*") &&
                !core.matches("[A-Z][a-z]+")) return null;
        return candidate;
    }

    private Set<Long> recoverLines(Set<Address> references) {
        if (references == null) return Set.of();
        Set<Long> result = new TreeSet<>();
        for (Address reference : references) {
            long line = recoverLine(reference);
            if (line > 0) result.add(line);
        }
        return result;
    }

    private long recoverLine(Address sourceReference) {
        Instruction instruction = listing.getInstructionAt(sourceReference);
        if (instruction == null) instruction = listing.getInstructionContaining(sourceReference);
        // MSVC pushes the line literal immediately before materializing/pushing the source
        // pointer in ReportDebugMessage/RaiseInternalException call sequences.
        for (int i = 0; i < 5 && instruction != null; i++) {
            instruction = listing.getInstructionBefore(instruction.getAddress());
            if (instruction == null) break;
            if (!"PUSH".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Scalar scalar = instruction.getScalar(0);
            if (scalar == null) continue;
            long value = scalar.getUnsignedValue();
            if (value > 0 && value < 1000000) return value;
        }
        return -1;
    }

    private boolean referencesNear(Set<Address> left, Set<Address> right, long maximumDistance) {
        if (left == null || right == null) return false;
        for (Address a : left) {
            for (Address b : right) {
                try {
                    if (a.getAddressSpace().equals(b.getAddressSpace()) &&
                            Math.abs(a.subtract(b)) <= maximumDistance) return true;
                }
                catch (Exception ignored) {
                    // Different/unsupported address spaces cannot form a diagnostic pair.
                }
            }
        }
        return false;
    }

    private boolean replaceableName(Function function, String proposedName) {
        String leaf = function.getName();
        if (PLACEHOLDER.matcher(leaf).matches() || function.getSymbol().getSource() == SourceType.DEFAULT)
            return true;
        boolean previouslyApplied = function.getTags().stream()
            .anyMatch(tag -> NAME_TAG.equals(tag.getName()));
        return previouslyApplied && !proposedName.isBlank() && leaf.equals(proposedName) &&
            function.getParentNamespace().isGlobal();
    }

    private void disableDuplicateNames(List<Proposal> rows) {
        Map<String, Integer> counts = new TreeMap<>();
        for (Proposal row : rows) {
            if (!row.proposedName.isBlank()) counts.merge(row.proposedName, 1, Integer::sum);
        }
        for (Proposal row : rows) {
            if (row.nameApply && counts.getOrDefault(row.proposedName, 0) > 1) {
                row.nameApply = false;
                row.nameConfidence = "review";
                row.nameReason = "free_function_name_is_not_unique_in_program";
            }
        }
    }

    private boolean isLibrary(Function function) {
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if ("LIBRARY".equals(name) || name.startsWith("LIBRARY_")) return true;
        }
        return false;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Recovery output directory argument is required");
        return askDirectory("Select recovery output directory", "Analyze source provenance");
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (Files.isRegularFile(path.resolve("vtable_proposals.tsv")) ||
                Files.isRegularFile(path.resolve("proposals.tsv"))) return path;
        return path.resolve(safe(currentProgram.getName()));
    }

    private void writeTsv(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("source_apply\tname_apply\taddress\told_name\tsource_file\t" +
                "diagnostic_lines\tsource_confidence\tsource_reason\tproposed_name\t" +
                "name_confidence\tname_reason\tfree_name_candidates\n");
            for (Proposal row : rows) {
                out.write(bit(row.sourceApply) + "\t" + bit(row.nameApply) + "\t" +
                    row.address + "\t" + tsv(row.oldName) + "\t" + tsv(row.source) + "\t" +
                    tsv(row.lines) + "\t" + row.sourceConfidence + "\t" +
                    tsv(row.sourceReason) + "\t" + tsv(row.proposedName) + "\t" +
                    row.nameConfidence + "\t" + tsv(row.nameReason) + "\t" +
                    tsv(String.join(" | ", row.candidates)) + "\n");
            }
        }
    }

    private void writeJsonl(Path path, List<Proposal> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            for (Proposal row : rows) {
                out.write("{\"source_apply\":" + row.sourceApply +
                    ",\"name_apply\":" + row.nameApply +
                    ",\"address\":" + q(row.address) +
                    ",\"old_name\":" + q(row.oldName) +
                    ",\"source_file\":" + q(row.source) +
                    ",\"diagnostic_lines\":" + q(row.lines) +
                    ",\"source_confidence\":" + q(row.sourceConfidence) +
                    ",\"source_reason\":" + q(row.sourceReason) +
                    ",\"proposed_name\":" + q(row.proposedName) +
                    ",\"name_confidence\":" + q(row.nameConfidence) +
                    ",\"name_reason\":" + q(row.nameReason) + "}\n");
            }
        }
    }

    private void writeSummary(Path path, List<Proposal> rows) throws Exception {
        Files.write(path, List.of(
            "program=" + currentProgram.getName(),
            "functions_with_source_evidence=" + rows.size(),
            "source_auto_apply=" + rows.stream().filter(row -> row.sourceApply).count(),
            "functions_with_free_name_candidates=" +
                rows.stream().filter(row -> !row.proposedName.isBlank()).count(),
            "free_name_auto_apply=" + rows.stream().filter(row -> row.nameApply).count(),
            "source_already_documented=" + rows.stream()
                .filter(row -> row.sourceReason.equals("source_already_present_in_function_comment"))
                .count(),
            "source_conflicts=" + rows.stream()
                .filter(row -> row.sourceConfidence.equals("conflict")).count(),
            "note=Source comments and function names have independent apply flags.",
            "note_lines=Diagnostic lines identify metadata/report sites, not function definitions.",
            "note_names=Automatic names require one strict mixed-case identifier near one source path."
        ), StandardCharsets.UTF_8);
    }

    private static String stringValue(Data data) {
        Object value = data.getValue();
        if (value instanceof String) return (String)value;
        String representation = data.getDefaultValueRepresentation();
        if (representation.length() >= 2 && representation.startsWith("\"") &&
                representation.endsWith("\"")) {
            return representation.substring(1, representation.length() - 1)
                .replace("\\\\", "\\").replace("\\\"", "\"");
        }
        return representation;
    }

    private static String addr(Address address) {
        return address.toString().toUpperCase(Locale.ROOT);
    }
    private static String joinLongs(Set<Long> values) {
        List<String> result = new ArrayList<>();
        for (long value : values) result.add(Long.toString(value));
        return String.join(" | ", result);
    }
    private static String safe(String value) {
        return value.replaceAll("[^A-Za-z0-9._-]+", "_");
    }
    private static String bit(boolean value) { return value ? "1" : "0"; }
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String q(String value) {
        return "\"" + value.replace("\\", "\\\\").replace("\"", "\\\"")
            .replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\"";
    }

    private static class FunctionEvidence {
        final Function function;
        final Set<String> sources = new LinkedHashSet<>();
        final Set<String> names = new LinkedHashSet<>();
        final Map<String, Set<Address>> sourceReferences = new LinkedHashMap<>();
        final Map<String, Set<Address>> nameReferences = new LinkedHashMap<>();
        FunctionEvidence(Function function) { this.function = function; }
    }

    private static class Proposal {
        final String address, oldName, source, lines, sourceConfidence, sourceReason,
            proposedName;
        String nameConfidence, nameReason;
        final Set<String> candidates;
        final boolean sourceApply;
        boolean nameApply;
        Proposal(String address, String oldName, boolean sourceApply, String source,
                String lines, String sourceConfidence, String sourceReason, boolean nameApply,
                String proposedName, String nameConfidence, String nameReason,
                Set<String> candidates) {
            this.address = address; this.oldName = oldName; this.sourceApply = sourceApply;
            this.source = source; this.lines = lines; this.sourceConfidence = sourceConfidence;
            this.sourceReason = sourceReason; this.nameApply = nameApply;
            this.proposedName = proposedName; this.nameConfidence = nameConfidence;
            this.nameReason = nameReason; this.candidates = new TreeSet<>(candidates);
        }
    }
}
