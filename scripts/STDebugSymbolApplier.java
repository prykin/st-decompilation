// Apply reviewed proposals produced by STDebugSymbolAnalyzer.
// Only TSV rows whose first column is 1 are applied.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Debug Symbols

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
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
                    String sourceLine = columns[9];

                    if (!safeToReplace(function, expectedOldName)) {
                        printerr("Skipping user-named/conflicting function at " + columns[1] +
                            ": " + function.getName(true));
                        failed++;
                        continue;
                    }
                    Namespace namespace = getOrCreateOwner(owner);
                    function.setParentNamespace(namespace);
                    function.setName(method, SourceType.USER_DEFINED);
                    function.addTag(TAG);
                    addRecoveryComment(function, qualified, source, sourceLine);
                    if (!callingConvention.isBlank()) {
                        try {
                            function.setCallingConvention(callingConvention);
                            function.setSignatureSource(SourceType.USER_DEFINED);
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
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        println("Debug symbols applied: " + applied + ", __thiscall: " + thiscalls +
            ", skipped: " + skipped + ", failed: " + failed);
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
        if (function.getSymbol().getSource() == SourceType.DEFAULT) return true;
        return function.getTags().stream().anyMatch(tag -> TAG.equals(tag.getName()));
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

    private void addRecoveryComment(Function function, String qualified, String source,
            String sourceLine) {
        String location = source.isBlank() ? "unknown source" : source +
            (sourceLine.isBlank() ? "" : ":" + sourceLine);
        String block = "Recovered from embedded debug metadata:\n" + location + "\n" + qualified;
        String old = function.getComment();
        if (old == null || old.isBlank()) {
            function.setComment(block);
        }
        else if (!old.contains("Recovered from embedded debug metadata:")) {
            function.setComment(old + "\n\n" + block);
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
