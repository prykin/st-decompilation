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
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.util.DefinedStringIterator;

public class STDebugSymbolAnalyzer extends GhidraScript {
    private static final Pattern METHOD = Pattern.compile(
        "^[A-Za-z_~][A-Za-z0-9_~<>]*(?:::[A-Za-z_~][A-Za-z0-9_~<>]*)+$");
    private static final Pattern METHOD_ANYWHERE = Pattern.compile(
        "(?<![A-Za-z0-9_~])([A-Za-z_~][A-Za-z0-9_~<>]*" +
        "(?:::[A-Za-z_~][A-Za-z0-9_~<>]*)+)(?=$|[^A-Za-z0-9_~:])");
    private static final Pattern SOURCE = Pattern.compile(
        "(?i)^[A-Za-z]:\\\\.*\\.(?:c|cc|cpp|cxx|h|hh|hpp|hxx)$");
    private static final Pattern PRINTF_FORMAT = Pattern.compile(
        ".*%(?:[-+ #0]*(?:[0-9]+|\\*)?(?:\\.(?:[0-9]+|\\*))?" +
        "(?:hh|h|ll|l|I32|I64|L|z|t|j)?[diuoxXfFeEgGaAcspn%]).*",
        Pattern.DOTALL);

    private Listing listing;

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
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
            boolean exactCurrentName = item.function.getName(true).equals(qualified);
            boolean previouslyApplied = exactCurrentName &&
                item.function.getTags().stream()
                    .anyMatch(tag -> "RECOVERED_DEBUG_NAME".equals(tag.getName()));
            String confidence = item.sources.size() == 1 && (defaultName || exactCurrentName) ? "high" :
                item.sources.size() <= 1 ? "medium" : "conflict";
            String reason = item.sources.size() > 1 ? "multiple_source_paths" :
                source.isEmpty() ? "no_source_path" : previouslyApplied ?
                    "previously_applied_debug_symbol" : exactCurrentName ?
                    "already_matches_debug_symbol" : "unique_method_and_source";
            ThiscallEvidence thiscall = findThiscallEvidence(item.function);
            proposals.add(new Proposal(item.function, qualified, owner, method, source, line,
                confidence, reason, thiscall.convention, thiscall.evidence));
        }
        proposals.sort(Comparator.comparing(p -> p.function.getEntryPoint()));

        writeTsv(dir.resolve("proposals.tsv"), proposals);
        writeJsonl(dir.resolve("proposals.jsonl"), proposals);
        writeLines(dir.resolve("conflicts.jsonl"), conflicts);
        List<ShortStringProposal> shortStrings = recoverShortDiagnosticStrings();
        writeShortStrings(dir.resolve("debug_string_proposals.tsv"), shortStrings);
        writeConventionReview(dir.resolve("debug_calling_convention_review.tsv"), proposals);
        writeSummary(dir.resolve("summary.txt"), proposals, conflicts.size(), shortStrings);
        println("Debug-symbol analysis complete: " + dir);
        println("Proposals: " + proposals.size() + ", conflicts: " + conflicts.size() +
            ", short diagnostic strings: " + shortStrings.size());
    }

    private List<ShortStringProposal> recoverShortDiagnosticStrings() throws Exception {
        List<ShortStringProposal> result = new ArrayList<>();
        DataIterator dataItems = listing.getDefinedData(true);
        while (dataItems.hasNext()) {
            monitor.checkCancelled();
            Data data = dataItems.next();
            if (data.hasStringValue()) continue;
            String value = asciiCString(data.getMinAddress(), 128);
            if (value == null || value.length() < 2 || !PRINTF_FORMAT.matcher(value).matches())
                continue;
            int references = 0, diagnosticReferences = 0;
            ReferenceIterator iterator = currentProgram.getReferenceManager()
                .getReferencesTo(data.getMinAddress());
            while (iterator.hasNext()) {
                Reference reference = iterator.next();
                Function containing = listing.getFunctionContaining(reference.getFromAddress());
                if (containing == null) continue;
                references++;
                if (nearReportDebugMessage(reference.getFromAddress())) diagnosticReferences++;
            }
            if (diagnosticReferences < 2) continue;
            Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(data.getMinAddress());
            String oldName = symbol == null ? "" : symbol.getName();
            result.add(new ShortStringProposal(data, oldName, value, references,
                diagnosticReferences));
        }
        result.sort(Comparator.comparing(row -> row.data.getMinAddress()));
        return result;
    }

    private String asciiCString(Address address, int maximum) {
        StringBuilder value = new StringBuilder();
        try {
            for (int index = 0; index < maximum; index++) {
                int item = currentProgram.getMemory().getByte(address.add(index)) & 0xff;
                if (item == 0) return value.toString();
                if (item < 0x20 || item > 0x7e) return null;
                value.append((char)item);
            }
        }
        catch (Exception ignored) { }
        return null;
    }

    private boolean nearReportDebugMessage(Address referenceAddress) {
        Instruction instruction = listing.getInstructionContaining(referenceAddress);
        for (int inspected = 0; instruction != null && inspected < 20; inspected++) {
            if (instruction.getAddress().subtract(referenceAddress) > 0x60) break;
            if ("CALL".equalsIgnoreCase(instruction.getMnemonicString())) {
                for (Address flow : instruction.getFlows()) {
                    Function called = currentProgram.getFunctionManager().getFunctionAt(flow);
                    if (called == null) continue;
                    Function target = called.isThunk() ? called.getThunkedFunction(true) : called;
                    if (target != null && "ReportDebugMessage".equals(target.getName())) return true;
                }
            }
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return false;
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
        // In this binary the reference often points at an address materialization rather
        // than at the final PUSH itself.  The matching line literal is immediately before
        // that materialization in the ReportDebugMessage/RaiseInternalException sequences.
        for (int i = 0; i < 3 && instruction != null; i++) {
            instruction = listing.getInstructionBefore(instruction.getAddress());
            if (instruction == null) break;
            if ("PUSH".equalsIgnoreCase(instruction.getMnemonicString())) {
                Scalar scalar = instruction.getScalar(0);
                if (scalar != null) {
                    long value = scalar.getUnsignedValue();
                    if (value > 0 && value < 1000000) return value;
                }
            }
        }
        return -1;
    }

    private ThiscallEvidence findThiscallEvidence(Function function) {
        ghidra.program.model.listing.InstructionIterator instructions =
            listing.getInstructions(function.getBody(), true);
        int inspected = 0;
        String ecxEvidence = "";
        boolean ecxLive = true, edxLive = true;
        while (instructions.hasNext() && inspected++ < 24) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String text = instruction.toString().toUpperCase(Locale.ROOT);
            String[] operands = splitOperands(text);
            if (edxLive && readsIncomingRegister(mnemonic, operands, "EDX"))
                return new ThiscallEvidence("", "incoming EDX is used at " +
                    addr(instruction.getAddress()) + ": " + instruction);
            if (ecxLive && readsIncomingRegister(mnemonic, operands, "ECX") &&
                    ecxEvidence.isBlank())
                ecxEvidence = addr(instruction.getAddress()) + ": " + instruction;
            if (pureRegisterOverwrite(mnemonic, operands, "ECX")) ecxLive = false;
            if (pureRegisterOverwrite(mnemonic, operands, "EDX")) edxLive = false;
            if ("CALL".equals(mnemonic)) break;
        }
        return ecxEvidence.isBlank() ?
            new ThiscallEvidence("", "no live incoming ECX use found before clobber/call") :
            new ThiscallEvidence("__thiscall", ecxEvidence);
    }

    private String[] splitOperands(String instruction) {
        int space = instruction.indexOf(' ');
        if (space < 0) return new String[0];
        String operands = instruction.substring(space + 1).trim();
        return operands.isEmpty() ? new String[0] : operands.split("\\s*,\\s*", -1);
    }

    private boolean readsIncomingRegister(String mnemonic, String[] operands, String register) {
        boolean selfZero = operands.length >= 2 &&
            ("XOR".equals(mnemonic) || "SUB".equals(mnemonic) || "SBB".equals(mnemonic)) &&
            sameRegisterFamily(operands[0], register) && operands[0].equals(operands[1]);
        if (selfZero) return false;
        for (int index = 0; index < operands.length; index++) {
            if (!mentionsRegister(operands[index], register)) continue;
            boolean overwrite = index == 0 && sameRegisterFamily(operands[index], register) &&
                isWriteOnlyDestination(mnemonic, operands);
            if (!overwrite) return true;
        }
        return false;
    }

    private boolean pureRegisterOverwrite(String mnemonic, String[] operands, String register) {
        if ("EDX".equals(register) && Set.of("CDQ", "CWD").contains(mnemonic)) return true;
        if (operands.length == 0 || !sameRegisterFamily(operands[0], register)) return false;
        return isWriteOnlyDestination(mnemonic, operands);
    }

    private boolean isWriteOnlyDestination(String mnemonic, String[] operands) {
        if (Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP").contains(mnemonic) ||
                mnemonic.startsWith("SET")) return true;
        if (operands.length < 2) return false;
        if (("XOR".equals(mnemonic) || "SUB".equals(mnemonic) || "SBB".equals(mnemonic)) &&
                operands[0].equals(operands[1])) return true;
        String immediate = operands[1].replace("+", "");
        if ("OR".equals(mnemonic) && immediate.matches("(?:-0X?1|0X?F+|F+H?)")) return true;
        return "AND".equals(mnemonic) && immediate.matches("(?:0X?0+|0+H?)");
    }

    private boolean sameRegisterFamily(String operand, String register) {
        if ("ECX".equals(register)) return operand.matches("(?:ECX|CX|CH|CL)");
        if ("EDX".equals(register)) return operand.matches("(?:EDX|DX|DH|DL)");
        return register.equals(operand);
    }

    private boolean mentionsRegister(String operand, String register) {
        String aliases = "ECX".equals(register) ? "ECX|CX|CH|CL" :
            "EDX".equals(register) ? "EDX|DX|DH|DL" : register;
        return operand.matches(".*(?<![A-Z0-9])(?:" + aliases + ")(?![A-Z0-9]).*");
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
        // Parse the decoded string value, never Ghidra's automatic s_* symbol.  Those
        // labels replace spaces and punctuation with underscores, so trimming the
        // address suffix would turn diagnostics such as "Class::Bad direction" into
        // invented method names such as "Class::Bad_direction".
        if (METHOD.matcher(value).matches()) return value;
        // Diagnostics are not consistent: most begin with Class::Method, but some use
        // "Class::Method, details" and a few prepend a return type (for example
        // "Int TLOEmbryoTy::Create(...)").  Search the whole diagnostic while keeping
        // identifier boundaries strict; selectMethod() still rejects conflicting evidence.
        Matcher matcher = METHOD_ANYWHERE.matcher(value);
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

    private void writeConventionReview(Path path, List<Proposal> proposals) throws IOException {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tfunction\tcurrent_calling_convention\tsignature_source\t" +
                "evidence\taction\n");
            for (Proposal proposal : proposals) {
                Function function = proposal.function;
                if (!proposal.callingConvention.isBlank() ||
                        !"__thiscall".equals(function.getCallingConventionName()) ||
                        function.getTags().stream().noneMatch(tag ->
                            "RECOVERED_DEBUG_NAME".equals(tag.getName()))) continue;
                out.write(addr(function.getEntryPoint()) + "\t" +
                    tsv(function.getName(true)) + "\t__thiscall\t" +
                    function.getSignatureSource() + "\t" +
                    tsv(proposal.callingConventionEvidence) +
                    "\treview_only; analyzer never reverts an existing signature\n");
            }
        }
    }

    private void writeShortStrings(Path path, List<ShortStringProposal> proposals)
            throws IOException {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\taddress\texpected_name\texpected_type\texpected_length\t" +
                "expected_value\tproposed_name\tproposed_value\treferences\t" +
                "diagnostic_references\tconfidence\treason\n");
            for (ShortStringProposal row : proposals) {
                out.write("1\t" + addr(row.data.getMinAddress()) + "\t" + tsv(row.oldName) +
                    "\t" + tsv(row.data.getDataType().getPathName()) + "\t" +
                    row.data.getLength() + "\t" +
                    tsv(row.data.getDefaultValueRepresentation()) + "\t" +
                    tsv("s_fmt_" + addr(row.data.getMinAddress()).toLowerCase(Locale.ROOT)) +
                    "\t" + tsv(row.value) + "\t" + row.references + "\t" +
                    row.diagnosticReferences + "\thigh\tshort NUL-terminated printf format " +
                    "used by ReportDebugMessage\n");
            }
        }
    }

    private void writeSummary(Path path, List<Proposal> proposals, int conflicts,
            List<ShortStringProposal> shortStrings) throws IOException {
        long high = proposals.stream().filter(p -> p.confidence.equals("high")).count();
        long medium = proposals.stream().filter(p -> p.confidence.equals("medium")).count();
        long thiscalls = proposals.stream()
            .filter(proposal -> "__thiscall".equals(proposal.callingConvention)).count();
        long conventionReview = proposals.stream().filter(proposal ->
            proposal.callingConvention.isBlank() &&
            "__thiscall".equals(proposal.function.getCallingConventionName()) &&
            proposal.function.getTags().stream().anyMatch(tag ->
                "RECOVERED_DEBUG_NAME".equals(tag.getName()))).count();
        writeLines(path, List.of("program=" + currentProgram.getName(),
            "proposals=" + proposals.size(), "high=" + high, "medium=" + medium,
            "conflicts=" + conflicts,
            "thiscall_auto_apply=" + thiscalls,
            "existing_thiscall_without_live_ecx_evidence=" + conventionReview,
            "short_diagnostic_string_proposals=" + shortStrings.size(),
            "note_conventions=Review debug_calling_convention_review.tsv; existing signatures " +
                "are never reverted automatically.",
            "note_strings=Short printf formats missed by minimum-length string discovery are " +
                "written to debug_string_proposals.tsv.",
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

    private static class ShortStringProposal {
        final Data data;
        final String oldName, value;
        final int references, diagnosticReferences;
        ShortStringProposal(Data data, String oldName, String value, int references,
                int diagnosticReferences) {
            this.data = data; this.oldName = oldName; this.value = value;
            this.references = references; this.diagnosticReferences = diagnosticReferences;
        }
    }
}
