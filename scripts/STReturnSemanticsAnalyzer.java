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
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class STReturnSemanticsAnalyzer extends GhidraScript {
    private static final Pattern VALUE_RETURN = Pattern.compile("(?m)\\breturn\\s+([^;\\r\\n]+);");
    private static final Pattern BARE_RETURN = Pattern.compile("(?m)\\breturn\\s*;");
    private final List<Failure> failures = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File selected = outputDirectory(); if (selected == null) return;
        Path directory = programDirectory(selected); Files.createDirectories(directory);
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open the current program");
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
        println("Functions=" + functionsSeen + ", proposals=" + rows.size() + ", apply=" +
            rows.stream().filter(row -> row.apply).count() + ", failures=" + failures.size());
    }

    private Row analyze(Function function, DecompInterface decompiler) throws Exception {
        Body body = body(function);
        String currentType = typeSpec(function.getReturnType());
        Parameter returned = function.getReturn();
        boolean mutable = returned.getSource() != SourceType.USER_DEFINED &&
            returned.getSource() != SourceType.IMPORTED;

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

        if (!mutable || !genericInteger(currentType) || !body.booleanLike ||
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
        if (returns.size() >= 2 && bare == 0 && allBooleanConstants(returns) &&
                genericInteger(currentType))
            return row(function, currentType, "/bool", function.hasNoReturn(), function.hasNoReturn(),
                false, "boolean_return_domain", "review",
                "all explicit return values are constants in {0,1}, but the source domain alone " +
                "does not prove the x86 ABI return width; review STAbiConsistencyAnalyzer evidence: " +
                returns);

        return null;
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
    private boolean genericInteger(String type) {
        return genericUnknown(type) || type.equals("/int") || type.equals("/uint") ||
            type.equals("/char") || type.equals("/byte");
    }
    private Row row(Function function, String current, String proposed, boolean expectedNoReturn,
            boolean proposedNoReturn, boolean apply, String semantic, String confidence, String evidence) {
        return new Row(apply, addr(function.getEntryPoint()), function.getName(true),
            function.getPrototypeString(true, true), current, function.getReturn().getSource().toString(),
            expectedNoReturn, proposed, proposedNoReturn, semantic, confidence, evidence);
    }

    private void writeRows(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tfunction_address\texpected_function\texpected_signature\t" +
                "expected_return_type\texpected_return_source\texpected_noreturn\t" +
                "proposed_return_type\tproposed_noreturn\tsemantic_id\tconfidence\tevidence\n");
            for (Row row : rows) out.write((row.apply ? "1" : "0") + "\t" + row.address +
                "\t" + clean(row.function) + "\t" + clean(row.signature) + "\t" + row.expectedType +
                "\t" + row.source + "\t" + row.expectedNoReturn + "\t" + row.proposedType +
                "\t" + row.proposedNoReturn + "\t" + row.semantic + "\t" + row.confidence +
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
            out.write("ST return semantics\n\nFunctions: " + functions + "\nProposals: " + rows.size() +
                "\nAutomatic: " + rows.stream().filter(row -> row.apply).count() + "\n");
            for (String id : List.of("leaf_void", "boolean_return_domain", "noreturn_terminal_call"))
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
    private record Row(boolean apply, String address, String function, String signature,
        String expectedType, String source, boolean expectedNoReturn, String proposedType,
        boolean proposedNoReturn, String semantic, String confidence, String evidence) {}
    private record Failure(String address, String function, String error) {}
}
