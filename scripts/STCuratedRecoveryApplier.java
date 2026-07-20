// Apply reviewed, address-specific recovery proposals without overwriting later manual work.
// Only TSV rows whose first column is 1 are applied.  A report is written next to the TSV.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Curated Recovery

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

public class STCuratedRecoveryApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_CURATED_PROPOSAL";
    private static final String MARKER_PREFIX = "[ST_RECOVERY:";

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the ST program first."); return; }
        File proposal = proposalFile();
        if (proposal == null) return;
        List<String> lines = Files.readAllLines(proposal.toPath(), StandardCharsets.UTF_8);
        if (lines.isEmpty() || !lines.get(0).startsWith(
                "apply\tid\taddress\texpected_name\texpected_signature\t")) {
            throw new IllegalArgumentException("Not an ST curated_recovery.tsv file");
        }

        List<String[]> rows = new ArrayList<>();
        List<String> report = new ArrayList<>();
        report.add("id\taddress\tstatus\tdetail");
        for (int i = 1; i < lines.size(); i++) {
            if (lines.get(i).isBlank()) continue;
            String[] columns = lines.get(i).split("\t", -1);
            if (columns.length < 13) {
                report.add("\t\tinvalid_row\tline " + (i + 1) + " has fewer than 13 columns");
                continue;
            }
            if (!"1".equals(columns[0])) {
                report.add(columns[1] + "\t" + columns[2] + "\tdisabled\tapply is not 1");
                continue;
            }
            rows.add(columns);
        }

        int applied = 0, unchanged = 0, preserved = 0, conflicts = 0;
        for (String[] row : rows) {
            monitor.checkCancelled();
            String id = unt(row[1]);
            String addressText = row[2];
            int transaction = currentProgram.startTransaction("Apply curated recovery " + id);
            boolean commitRow = false;
            try {
                    Address address = currentProgram.getAddressFactory().getAddress(addressText);
                    Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                    if (function == null) {
                        report.add(result(id, addressText, "conflict", "no function at address"));
                        conflicts++;
                        continue;
                    }

                    String expectedName = unt(row[3]);
                    String expectedSignature = unt(row[4]);
                    String owner = unt(row[5]);
                    String method = unt(row[6]);
                    String convention = unt(row[7]);
                    DataType returnType = requireType(unt(row[8]));
                    List<Variable> parameters = parseParameters(unt(row[9]));
                    String sourceFile = unt(row[11]);
                    String comment = unt(row[12]);
                    String desiredName = owner + "::" + method;
                    String marker = MARKER_PREFIX + id + "]";
                    String currentName = function.getName(true);
                    String currentSignature = function.getSignature().getPrototypeString(true);
                    boolean marked = containsMarker(function, marker);

                    if (marked) {
                        if (currentName.equals(desiredName) && signatureMatches(function,
                                convention, returnType, parameters)) {
                            report.add(result(id, addressText, "unchanged", currentSignature));
                            unchanged++;
                        }
                        else {
                            report.add(result(id, addressText, "manual_changes_preserved",
                                currentName + " | " + currentSignature));
                            preserved++;
                        }
                        continue;
                    }

                    // A conservative baseline pass may already have installed the exact
                    // reviewed prototype while leaving the synthetic function name intact.
                    // Accept that state as a valid baseline; no looser signature drift is
                    // permitted, and the address/name guards still apply.
                    boolean desiredSignatureBaseline = signatureMatches(function, convention,
                        returnType, parameters);
                    if (!currentName.equals(expectedName) ||
                            (!currentSignature.equals(expectedSignature) &&
                                !desiredSignatureBaseline)) {
                        report.add(result(id, addressText, "conflict",
                            "expected " + expectedName + " | " + expectedSignature +
                            "; found " + currentName + " | " + currentSignature));
                        conflicts++;
                        continue;
                    }

                    Namespace namespace = getOrCreateClass(owner);
                    function.setParentNamespace(namespace);
                    function.setName(method, SourceType.USER_DEFINED);
                    function.updateFunction(convention,
                        new ReturnParameterImpl(returnType, currentProgram), parameters,
                        FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
                    function.addTag(TAG);
                    addMarkerComment(function, marker, sourceFile, comment);
                    report.add(result(id, addressText, "applied",
                        function.getSignature().getPrototypeString(true)));
                    applied++;
                    commitRow = true;
            }
            catch (Exception exception) {
                report.add(result(id, addressText, "conflict", exception.getMessage()));
                conflicts++;
            }
            finally {
                currentProgram.endTransaction(transaction, commitRow);
            }
        }

        Path reportPath = proposal.toPath().toAbsolutePath().normalize().resolveSibling(
            "curated_recovery_apply_report.tsv");
        Files.write(reportPath, report, StandardCharsets.UTF_8);
        println("Curated recovery: applied=" + applied + ", unchanged=" + unchanged +
            ", manual changes preserved=" + preserved + ", conflicts=" + conflicts);
        println("Report: " + reportPath);
    }

    private File proposalFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to curated_recovery.tsv is required");
        return askFile("Select curated_recovery.tsv", "Apply");
    }

    private DataType requireType(String path) {
        DataType type = currentProgram.getDataTypeManager().getDataType(path);
        if (type == null) throw new IllegalArgumentException("Missing data type: " + path);
        return type;
    }

    private List<Variable> parseParameters(String specification) throws Exception {
        List<Variable> result = new ArrayList<>();
        if (specification.isBlank()) return result;
        for (String item : specification.split(";")) {
            int separator = item.indexOf('=');
            if (separator <= 0 || separator == item.length() - 1)
                throw new IllegalArgumentException("Invalid parameter specification: " + item);
            String name = item.substring(0, separator);
            DataType type = requireType(item.substring(separator + 1));
            result.add(new ParameterImpl(name, type, currentProgram));
        }
        return result;
    }

    private boolean signatureMatches(Function function, String convention, DataType returnType,
            List<Variable> desiredParameters) {
        if (!convention.equals(function.getCallingConventionName())) return false;
        if (!returnType.isEquivalent(function.getReturnType())) return false;
        Parameter[] actual = function.getParameters();
        List<Parameter> explicit = new ArrayList<>();
        for (Parameter parameter : actual) {
            if (!"this".equals(parameter.getName())) explicit.add(parameter);
        }
        if (explicit.size() != desiredParameters.size()) return false;
        for (int i = 0; i < explicit.size(); i++) {
            Variable desired = desiredParameters.get(i);
            if (!explicit.get(i).getName().equals(desired.getName()) ||
                    !explicit.get(i).getDataType().isEquivalent(desired.getDataType())) return false;
        }
        return true;
    }

    private Namespace getOrCreateClass(String owner) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        for (String part : owner.split("::")) {
            Namespace existing = table.getNamespace(part, parent);
            if (existing == null) existing = table.createClass(parent, part, SourceType.USER_DEFINED);
            else if (!(existing instanceof GhidraClass)) existing = table.convertNamespaceToClass(existing);
            parent = existing;
        }
        return parent;
    }

    private boolean containsMarker(Function function, String marker) {
        return (function.getComment() != null && function.getComment().contains(marker)) ||
            (function.getRepeatableComment() != null && function.getRepeatableComment().contains(marker));
    }

    private void addMarkerComment(Function function, String marker, String sourceFile, String comment) {
        String block = marker + "\nSource: " + sourceFile + "\n" + comment;
        String old = function.getComment();
        function.setComment(old == null || old.isBlank() ? block : old + "\n\n" + block);
    }

    private static String result(String id, String address, String status, String detail) {
        return tsv(id) + "\t" + tsv(address) + "\t" + status + "\t" + tsv(detail == null ? "" : detail);
    }

    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }

    private static String unt(String value) {
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            if (!escaped && c == '\\') { escaped = true; continue; }
            if (escaped) {
                if (c == 't') out.append('\t');
                else if (c == 'r') out.append('\r');
                else if (c == 'n') out.append('\n');
                else out.append(c);
                escaped = false;
            }
            else out.append(c);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }
}
