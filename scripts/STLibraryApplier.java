// Apply reviewed library_proposals.tsv produced by STLibraryAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Library Functions

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

public class STLibraryApplier extends GhidraScript {
    private static final String TAG = "LIBRARY";

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed program first."); return; }
        File proposals = proposalFile();
        if (proposals == null) return;
        List<String> lines = Files.readAllLines(proposals.toPath(), StandardCharsets.UTF_8);
        if (lines.isEmpty() || !lines.get(0).startsWith("apply\taddress\told_name\tlibrary\t"))
            throw new IllegalArgumentException("Not an STLibraryAnalyzer library_proposals.tsv file");

        int transaction = currentProgram.startTransaction("Apply library classifications");
        boolean commit = false;
        int applied = 0, namespaced = 0, ownerPreserved = 0, skipped = 0, failed = 0;
        try {
            for (int i = 1; i < lines.size(); i++) {
                monitor.checkCancelled();
                if (lines.get(i).isBlank()) continue;
                String[] c = lines.get(i).split("\t", -1);
                if (c.length < 8 || !"1".equals(c[0])) { skipped++; continue; }
                try {
                    Address address = currentProgram.getAddressFactory().getAddress(c[1]);
                    Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                    if (function == null || function.isExternal()) { failed++; continue; }
                    String oldName = unt(c[2]);
                    String library = unt(c[3]);
                    String namespace = unt(c[4]);
                    String evidence = unt(c[6]);
                    if (!safeToApply(function, oldName)) {
                        printerr("Name changed since analysis; skipping " + c[1] + ": " + function.getName(true));
                        failed++; continue;
                    }
                    Namespace currentParent = function.getParentNamespace();
                    if (currentParent.isGlobal() ||
                            currentParent.getName(true).startsWith("Library::")) {
                        function.setParentNamespace(getOrCreateNamespace(namespace));
                        namespaced++;
                    }
                    else {
                        // A source module is orthogonal to a recovered C++ owner.  Keep
                        // cMf32::RecGet (for example) intact and express the library
                        // classification through tags/comments instead of flattening it.
                        ownerPreserved++;
                    }
                    function.addTag(TAG);
                    function.addTag("LIBRARY_" + library);
                    addComment(function, library, evidence);
                    applied++;
                }
                catch (Exception e) { printerr("Line " + (i + 1) + " failed: " + e.getMessage()); failed++; }
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        println("Library classifications applied: " + applied + ", namespaced: " +
            namespaced + ", class/owner namespaces preserved: " + ownerPreserved +
            ", skipped: " + skipped + ", failed: " + failed);
    }

    private File proposalFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Path to library_proposals.tsv is required");
        return askFile("Select reviewed library_proposals.tsv", "Apply");
    }

    private boolean safeToApply(Function function, String expected) {
        if (function.getName(true).equals(expected)) return true;
        return function.getSymbol().getSource() == SourceType.DEFAULT;
    }

    private Namespace getOrCreateNamespace(String qualified) throws Exception {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        for (String part : qualified.split("::")) {
            Namespace existing = table.getNamespace(part, parent);
            if (existing == null) existing = table.getOrCreateNameSpace(parent, part, SourceType.USER_DEFINED);
            parent = existing;
        }
        return parent;
    }

    private void addComment(Function function, String library, String evidence) {
        String marker = "Statically linked library function [" + library + "]";
        String block = marker + ".\nEvidence: " + evidence +
            "\nImplementation is intentionally excluded from the LLM decompilation corpus.";
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(marker)) function.setComment(old + "\n\n" + block);
        String repeatable = function.getRepeatableComment();
        if (repeatable == null || repeatable.isBlank()) function.setRepeatableComment(marker + ".");
        else if (!repeatable.contains(marker)) function.setRepeatableComment(repeatable + "\n" + marker + ".");
    }

    private static String unt(String value) {
        StringBuilder out = new StringBuilder(); boolean escaped = false;
        for (int i = 0; i < value.length(); i++) {
            char ch = value.charAt(i);
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t'); else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n'); else out.append(ch);
                escaped = false;
            } else out.append(ch);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }
}
