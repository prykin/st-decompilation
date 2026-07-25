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
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
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

        boolean pointerCandidate = genericPointerReturn(currentType) &&
            hasEvidenceBackedPointerVariable(function);
        boolean booleanCandidate = genericInteger(currentType) && body.booleanLike;
        if (!mutable || (!pointerCandidate && !booleanCandidate) ||
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
            for (String id : List.of("leaf_void", "typed_pointer_return",
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
    private record Row(boolean apply, String address, String function, String signature,
        String expectedType, String source, boolean expectedNoReturn, String proposedType,
        boolean proposedNoReturn, String semantic, String confidence, String evidence) {}
    private record Failure(String address, String function, String error) {}
}
