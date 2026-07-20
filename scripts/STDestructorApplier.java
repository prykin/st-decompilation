// Apply reviewed destructor_proposals.tsv while preserving manual names and signatures.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Destructors

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.AutoParameterType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

public class STDestructorApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_DESTRUCTOR";
    private static final String MARKER = "[STDestructorApplier]";
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "name_apply", "convention_apply", "this_type_apply", "return_apply",
            "parameter_apply",
            "address", "expected_name", "expected_name_source", "expected_signature",
            "expected_signature_source", "kind", "owner", "proposed_name",
            "owner_type_path", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();
        int transaction = currentProgram.startTransaction("Apply recovered destructors");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled(); applyRow(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.getAbsoluteFile().getParentFile().toPath()
            .resolve("destructor_apply_report.tsv");
        writeReport(output);
        println("Destructors: applied=" + count("applied") + ", partial=" +
            count("partial") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output.toAbsolutePath().normalize());
    }

    private void applyRow(Map<String, String> row) {
        boolean nameApply = enabled(row.get("name_apply"));
        boolean conventionApply = enabled(row.get("convention_apply"));
        boolean thisTypeApply = enabled(row.get("this_type_apply"));
        boolean returnApply = enabled(row.get("return_apply"));
        boolean parameterApply = enabled(row.get("parameter_apply"));
        Address address = address(row.get("address"));
        String proposed = unt(row.get("proposed_name"));
        if (!nameApply && !conventionApply && !thisTypeApply && !returnApply && !parameterApply) {
            report.add(new ReportRow(addr(address), "disabled", proposed, "all apply flags are 0"));
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            report.add(new ReportRow(addr(address), "conflict", proposed,
                "no function at analyzed address")); return;
        }
        try {
            boolean scriptOwned = hasTag(function, TAG);
            boolean nameBaseline = function.getName(true).equals(unt(row.get("expected_name"))) &&
                function.getSymbol().getSource().toString().equals(row.get("expected_name_source"));
            boolean signatureBaseline = function.getSignature().getPrototypeString(true)
                .equals(unt(row.get("expected_signature"))) &&
                function.getSignatureSource().toString().equals(row.get("expected_signature_source"));
            boolean manualName = protectedSource(function.getSymbol().getSource());
            boolean manualSignature = protectedSource(function.getSignatureSource());
            String owner = unt(row.get("owner"));
            String typePath = unt(row.get("owner_type_path"));
            DataType ownerType = dataTypes.getDataType(typePath);
            List<String> details = new ArrayList<>();
            boolean changed = false, preserved = false, conflict = false;
            if (nameApply) {
                if (function.getName(true).equals(proposed)) details.add("name=unchanged");
                else if (manualName || !nameBaseline) {
                    details.add("name=preserved(stale/manual name)"); preserved = true;
                }
                else {
                    setQualifiedName(function, owner, leaf(proposed));
                    details.add("name=applied(" + function.getName(true) + ")"); changed = true;
                }
            }
            if (conventionApply || parameterApply) {
                boolean conventionMatches = "__thiscall".equals(
                    function.getCallingConventionName());
                boolean parametersMatch = !parameterApply || explicitParameters(function).isEmpty();
                if (conventionMatches && parametersMatch) {
                    if (conventionApply) details.add("convention=unchanged");
                    if (parameterApply) details.add("parameters=unchanged");
                }
                else if (manualSignature || !signatureBaseline) {
                    details.add("signature_shape=preserved(stale/manual signature)");
                    preserved = true;
                }
                else {
                    if (parameterApply) {
                        normalizeReceiverOnlyDestructor(function);
                        details.add("parameters=applied(no explicit parameters)");
                    }
                    else {
                        function.setCallingConvention("__thiscall");
                        function.setSignatureSource(SourceType.ANALYSIS);
                    }
                    if (conventionApply) details.add("convention=applied(__thiscall)");
                    changed = true;
                }
            }
            if (thisTypeApply) {
                if (ownerType == null) {
                    details.add("this_type=conflict(missing " + typePath + ")"); conflict = true;
                }
                else if (manualSignature && !thisTypeMatches(function, ownerType)) {
                    details.add("this_type=preserved(USER_DEFINED signature)"); preserved = true;
                }
                else if (!signatureBaseline && !scriptOwned &&
                        !thisTypeMatches(function, ownerType)) {
                    details.add("this_type=preserved(stale signature)"); preserved = true;
                }
                else if (thisTypeMatches(function, ownerType)) details.add("this_type=unchanged");
                else {
                    Parameter parameter = thisParameter(function);
                    if (parameter == null) {
                        details.add("this_type=conflict(no auto this parameter)"); conflict = true;
                    }
                    else {
                        parameter.setDataType(new PointerDataType(ownerType,
                            currentProgram.getDefaultPointerSize(), dataTypes), SourceType.ANALYSIS);
                        details.add("this_type=applied(" + typePath + " *)"); changed = true;
                    }
                }
            }
            if (returnApply) {
                DataType voidType = dataTypes.getDataType("/void");
                if (voidType == null) {
                    details.add("return=conflict(missing /void)"); conflict = true;
                }
                else if (voidType.isEquivalent(function.getReturnType()))
                    details.add("return=unchanged");
                else if (manualSignature || !signatureBaseline && !scriptOwned) {
                    details.add("return=preserved(stale/manual signature)"); preserved = true;
                }
                else {
                    function.setReturnType(voidType, SourceType.ANALYSIS);
                    details.add("return=applied(void)"); changed = true;
                }
            }
            if (changed) { function.addTag(TAG); addComment(function, row); }
            String status = conflict && !changed ? "conflict" :
                changed && (conflict || preserved) ? "partial" : changed ? "applied" :
                preserved ? "preserved" : "unchanged";
            report.add(new ReportRow(addr(address), status, proposed, String.join("; ", details)));
        }
        catch (Exception exception) {
            report.add(new ReportRow(addr(address), "conflict", proposed, message(exception)));
        }
    }

    private void setQualifiedName(Function function, String owner, String method) throws Exception {
        function.setParentNamespace(getOrCreateClass(owner));
        function.setName(method, SourceType.ANALYSIS);
    }
    private Namespace getOrCreateClass(String owner) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        String[] parts = owner.split("::");
        for (int index = 0; index < parts.length; index++) {
            Namespace existing = table.getNamespace(parts[index], parent);
            if (existing == null) existing = index == parts.length - 1 ?
                table.createClass(parent, parts[index], SourceType.USER_DEFINED) :
                table.getOrCreateNameSpace(parent, parts[index], SourceType.USER_DEFINED);
            else if (index == parts.length - 1 && !(existing instanceof GhidraClass))
                existing = table.convertNamespaceToClass(existing);
            parent = existing;
        }
        return parent;
    }
    private Parameter thisParameter(Function function) {
        for (Parameter parameter : function.getParameters())
            if (parameter.isAutoParameter() &&
                    parameter.getAutoParameterType() == AutoParameterType.THIS) return parameter;
        return null;
    }
    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }
    private void normalizeReceiverOnlyDestructor(Function function) throws Exception {
        boolean varargs = function.hasVarArgs();
        function.updateFunction("__thiscall",
            new ReturnParameterImpl(function.getReturnType(), currentProgram),
            List.<Variable>of(), FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
            true, SourceType.ANALYSIS);
        function.setVarArgs(varargs);
        function.setSignatureSource(SourceType.ANALYSIS);
    }
    private boolean thisTypeMatches(Function function, DataType ownerType) {
        Parameter parameter = thisParameter(function);
        return parameter != null && parameter.getDataType() instanceof Pointer pointer &&
            ownerType.isEquivalent(pointer.getDataType());
    }
    private void addComment(Function function, Map<String, String> row) {
        String block = MARKER + " Recovered " + row.get("kind") + " for " +
            unt(row.get("owner")) + ".\nEvidence: " + unt(row.get("reason"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(MARKER)) function.setComment(old + "\n\n" + block);
    }
    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to destructor_proposals.tsv is required");
        return askFile("Select destructor_proposals.tsv", "Apply destructors");
    }
    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names) if (!tsv.header.contains(name))
            throw new IllegalArgumentException("Missing TSV column: " + name);
    }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tstatus\tproposed_name\tdetail\n");
            for (ReportRow row : report) out.write(row.address + "\t" + row.status + "\t" +
                tsv(row.name) + "\t" + tsv(row.detail) + "\n");
        }
    }
    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }
    private static String leaf(String value) {
        int separator = value.lastIndexOf("::");
        return separator < 0 ? value : value.substring(separator + 2);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder(); boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t'); else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n'); else out.append(ch); escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\'); return out.toString();
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }
    private static class Tsv {
        final List<String> header; final List<Map<String, String>> rows;
        Tsv(List<String> header, List<Map<String, String>> rows) {
            this.header = header; this.rows = rows;
        }
    }
    private static class ReportRow {
        final String address, status, name, detail;
        ReportRow(String address, String status, String name, String detail) {
            this.address = address; this.status = status; this.name = name; this.detail = detail;
        }
    }
}
