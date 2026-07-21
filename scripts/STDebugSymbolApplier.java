// Apply reviewed proposals produced by STDebugSymbolAnalyzer.
// Only TSV rows whose first column is 1 are applied.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Debug Symbols

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.TerminatedStringDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

public class STDebugSymbolApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_DEBUG_NAME";

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File proposals = proposalFile();
        if (proposals == null) {
            return;
        }
        List<String> lines = Files.readAllLines(proposals.toPath(), StandardCharsets.UTF_8);
        if (lines.isEmpty() || !lines.get(0).contains("suggested_calling_convention")) {
            throw new IllegalArgumentException("Not an STDebugSymbolAnalyzer proposals.tsv file");
        }

        int transaction = currentProgram.startTransaction("Apply recovered debug symbols");
        boolean commit = false;
        int applied = 0, skipped = 0, failed = 0, thiscalls = 0;
        int conventionsPreserved = 0;
        int stringsApplied = 0, stringsUnchanged = 0, stringsFailed = 0;
        try {
            for (int index = 1; index < lines.size(); index++) {
                monitor.checkCancelled();
                String line = lines.get(index);
                if (line.isBlank()) continue;
                String[] columns = line.split("\t", -1);
                if (columns.length < 12 || !"1".equals(columns[0])) {
                    skipped++;
                    continue;
                }
                try {
                    Address address = currentProgram.getAddressFactory().getAddress(columns[1]);
                    Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                    if (function == null) {
                        printerr("No function at " + columns[1]);
                        failed++;
                        continue;
                    }
                    String expectedOldName = unt(columns[2]);
                    String qualified = unt(columns[3]);
                    String owner = unt(columns[4]);
                    String method = unt(columns[5]);
                    String callingConvention = unt(columns[6]);
                    String source = unt(columns[8]);

                    if (!safeToReplace(function, expectedOldName)) {
                        printerr("Skipping user-named/conflicting function at " + columns[1] +
                            ": " + function.getName(true));
                        failed++;
                        continue;
                    }
                    boolean preserveConvention = !callingConvention.isBlank() &&
                            !callingConvention.equals(function.getCallingConventionName()) &&
                            function.getSignatureSource() == SourceType.USER_DEFINED;
                    if (preserveConvention) {
                        printerr("Preserving manually refined calling convention at " + columns[1] +
                            ": " + function.getCallingConventionName() + " (proposal: " +
                            callingConvention + ")");
                        conventionsPreserved++;
                    }
                    Namespace namespace = getOrCreateOwner(owner);
                    function.setParentNamespace(namespace);
                    function.setName(method, SourceType.USER_DEFINED);
                    function.addTag(TAG);
                    addRecoveryComment(function, qualified, source);
                    if (!callingConvention.isBlank() && !preserveConvention) {
                        try {
                            if ("__thiscall".equals(callingConvention) &&
                                    explicitEcxParameter(function) != null)
                                convertFastcallReceiver(function);
                            else {
                                function.setCallingConvention(callingConvention);
                                function.setSignatureSource(SourceType.USER_DEFINED);
                            }
                            if ("__thiscall".equals(callingConvention)) thiscalls++;
                        }
                        catch (Exception exception) {
                            printerr("Could not set __thiscall at " + columns[1] + ": " +
                                exception.getMessage());
                        }
                    }
                    applied++;
                }
                catch (Exception exception) {
                    printerr("Line " + (index + 1) + " failed: " + exception.getMessage());
                    failed++;
                }
            }
            File stringFile = proposals.toPath().resolveSibling("debug_string_proposals.tsv")
                .toFile();
            if (stringFile.isFile()) {
                for (Map<String, String> row : readRows(stringFile.toPath())) {
                    monitor.checkCancelled();
                    if (!enabled(row.get("apply"))) continue;
                    try {
                        String status = applyShortString(row);
                        if ("applied".equals(status)) stringsApplied++;
                        else stringsUnchanged++;
                    }
                    catch (Exception exception) {
                        printerr("Short string " + row.get("address") + " failed: " +
                            exception.getMessage());
                        stringsFailed++;
                    }
                }
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        println("Debug symbols applied: " + applied + ", __thiscall: " + thiscalls +
            ", conventions preserved: " + conventionsPreserved +
            ", skipped: " + skipped + ", failed: " + failed +
            ", short strings applied: " + stringsApplied + ", unchanged: " +
            stringsUnchanged + ", failed: " + stringsFailed);
    }

    private String applyShortString(Map<String, String> row) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(row.get("address"));
        if (address == null) throw new IllegalArgumentException("invalid address");
        String value = unt(row.get("proposed_value"));
        int length = value.length() + 1;
        Data current = currentProgram.getListing().getDefinedDataAt(address);
        if (current != null && current.hasStringValue() && value.equals(dataStringValue(current)))
            return "unchanged";
        if (current == null) throw new IllegalArgumentException("baseline data is missing");
        if (!current.getDataType().getPathName().equals(unt(row.get("expected_type"))) ||
                current.getLength() != Integer.parseInt(row.get("expected_length")) ||
                !current.getDefaultValueRepresentation().equals(unt(row.get("expected_value"))))
            throw new IllegalArgumentException("stale data baseline");
        for (int index = 0; index < length; index++) {
            int actual = currentProgram.getMemory().getByte(address.add(index)) & 0xff;
            int expected = index == value.length() ? 0 : value.charAt(index) & 0xff;
            if (actual != expected)
                throw new IllegalArgumentException("bytes changed at +" + index);
            if (currentProgram.getListing().getInstructionContaining(address.add(index)) != null)
                throw new IllegalArgumentException("candidate overlaps an instruction");
        }
        currentProgram.getListing().clearCodeUnits(address, address.add(length - 1), false,
            monitor);
        Data created = currentProgram.getListing().createData(address,
            TerminatedStringDataType.dataType, length);
        created.setComment(CommentType.PLATE,
            "[STDebugSymbolApplier] Recovered short ReportDebugMessage printf format.");
        Symbol symbol = currentProgram.getSymbolTable().getPrimarySymbol(address);
        String proposedName = unt(row.get("proposed_name"));
        if (symbol != null && !proposedName.isBlank() &&
                (symbol.getSource() == SourceType.DEFAULT || symbol.getSource() == SourceType.ANALYSIS))
            symbol.setName(proposedName, SourceType.ANALYSIS);
        return "applied";
    }

    private String dataStringValue(Data data) {
        Object value = data.getValue();
        if (value instanceof String) return (String)value;
        String representation = data.getDefaultValueRepresentation();
        if (representation.length() >= 2 && representation.startsWith("\"") &&
                representation.endsWith("\""))
            return representation.substring(1, representation.length() - 1)
                .replace("\\\\", "\\").replace("\\\"", "\"");
        return representation;
    }

    private List<Map<String, String>> readRows(java.nio.file.Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Malformed TSV line " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return rows;
    }

    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }

    private Parameter explicitEcxParameter(Function function) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !parameter.isRegisterVariable() ||
                    parameter.getRegister() == null) continue;
            if ("ECX".equalsIgnoreCase(parameter.getRegister().getName())) return parameter;
        }
        return null;
    }

    private void convertFastcallReceiver(Function function) throws Exception {
        List<Variable> arguments = new ArrayList<>();
        Parameter receiver = explicitEcxParameter(function);
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || parameter.equals(receiver)) continue;
            arguments.add(new ParameterImpl(parameter.getName(), parameter.getFormalDataType(),
                currentProgram, SourceType.USER_DEFINED));
        }
        boolean varargs = function.hasVarArgs();
        boolean noreturn = function.hasNoReturn();
        function.updateFunction("__thiscall",
            new ReturnParameterImpl(function.getReturnType(), currentProgram), arguments,
            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.USER_DEFINED);
        function.setVarArgs(varargs);
        function.setNoReturn(noreturn);
        function.setSignatureSource(SourceType.USER_DEFINED);
    }

    private File proposalFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) {
            throw new IllegalArgumentException("Path to proposals.tsv is required");
        }
        return askFile("Select reviewed proposals.tsv", "Apply");
    }

    private boolean safeToReplace(Function function, String expectedOldName) {
        String current = function.getName(true);
        if (current.equals(expectedOldName)) return true;
        return function.getSymbol().getSource() == SourceType.DEFAULT;
    }

    private Namespace getOrCreateOwner(String owner) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        String[] parts = owner.split("::");
        for (int i = 0; i < parts.length; i++) {
            String part = parts[i];
            Namespace existing = table.getNamespace(part, parent);
            if (existing == null) {
                existing = (i == parts.length - 1)
                    ? table.createClass(parent, part, SourceType.USER_DEFINED)
                    : table.getOrCreateNameSpace(parent, part, SourceType.USER_DEFINED);
            }
            else if (i == parts.length - 1 && !(existing instanceof GhidraClass)) {
                existing = table.convertNamespaceToClass(existing);
            }
            parent = existing;
        }
        return parent;
    }

    private void addRecoveryComment(Function function, String qualified, String source) {
        // source_line identifies the diagnostic statement that emitted the embedded
        // metadata, not the definition of this function.  Keep it in the proposal for
        // auditing, but do not present it as a source location in Ghidra.
        String location = source.isBlank() ? "unknown source" : source;
        String block = "Recovered from embedded debug metadata:\n" + location + "\n" + qualified;
        String old = function.getComment();
        if (old == null || old.isBlank()) {
            function.setComment(block);
        }
        else if (!old.contains("Recovered from embedded debug metadata:")) {
            function.setComment(old + "\n\n" + block);
        }
        else {
            // Replace only the three-line block owned by this script.  Anything the
            // analyst wrote before or after it is preserved byte-for-byte.
            String marker = "Recovered from embedded debug metadata:";
            int start = old.indexOf(marker);
            int markerEnd = old.indexOf('\n', start);
            int locationEnd = markerEnd < 0 ? -1 : old.indexOf('\n', markerEnd + 1);
            int blockEnd = locationEnd < 0 ? -1 : old.indexOf('\n', locationEnd + 1);
            if (markerEnd >= 0 && locationEnd >= 0) {
                if (blockEnd < 0) blockEnd = old.length();
                function.setComment(old.substring(0, start) + block + old.substring(blockEnd));
            }
            else {
                printerr("Malformed recovered-comment block at " + function.getEntryPoint() +
                    "; preserving it without changes");
            }
        }
    }

    private static String unt(String value) {
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            if (!escaped && c == '\\') { escaped = true; continue; }
            if (escaped) {
                switch (c) {
                    case 't': out.append('\t'); break;
                    case 'r': out.append('\r'); break;
                    case 'n': out.append('\n'); break;
                    default: out.append(c); break;
                }
                escaped = false;
            }
            else out.append(c);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }
}
