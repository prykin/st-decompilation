// Apply reviewed library_proposals.tsv produced by STLibraryAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Library Functions

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

public class STLibraryApplier extends GhidraScript {
    private static final String TAG = "LIBRARY";

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed program first."); return; }
        File proposals = proposalFile();
        if (proposals == null) return;
        List<String> lines = Files.readAllLines(proposals.toPath(), StandardCharsets.UTF_8);
        if (lines.isEmpty() || !lines.get(0).startsWith("apply\taddress\told_name\tlibrary\t"))
            throw new IllegalArgumentException("Not an STLibraryAnalyzer library_proposals.tsv file");

        List<Selection> selections = new ArrayList<>();
        int skipped = 0, failed = 0;
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
                Selection selection = new Selection(function, unt(c[3]), unt(c[4]), unt(c[6]));
                if (!safeToApply(function, oldName) && needsChange(selection)) {
                    printerr("Name changed since analysis; skipping " + c[1] + ": " +
                        function.getName(true));
                    failed++;
                    continue;
                }
                // A proposal can become name-stale after a later, independently safe
                // library demangle.  If namespace/tags/comments already equal the desired
                // classification, retain it as an idempotent unchanged row instead of
                // manufacturing a conflict which no mutation is needed to resolve.
                selections.add(selection);
            }
            catch (Exception e) {
                printerr("Line " + (i + 1) + " failed: " + e.getMessage());
                failed++;
            }
        }

        int applied = 0, unchanged = 0, namespaced = 0, ownerPreserved = 0;
        boolean anyChange = selections.stream().anyMatch(this::needsChange);
        if (anyChange) {
            int transaction = currentProgram.startTransaction("Apply library classifications");
            boolean commit = false;
            try {
                for (Selection selection : selections) {
                    monitor.checkCancelled();
                    if (!needsChange(selection)) { unchanged++; continue; }
                    Function function = selection.function;
                    Namespace currentParent = function.getParentNamespace();
                    if (namespaceEligible(currentParent)) {
                        Namespace desired = getOrCreateNamespace(selection.namespace);
                        if (!currentParent.equals(desired)) {
                            function.setParentNamespace(desired);
                            namespaced++;
                        }
                    }
                    else ownerPreserved++;
                    removeObsoleteScriptLibraryClassifications(function,
                        selection.library);
                    if (!hasTag(function, TAG)) function.addTag(TAG);
                    String libraryTag = "LIBRARY_" + selection.library;
                    if (!hasTag(function, libraryTag)) function.addTag(libraryTag);
                    addComment(function, selection.library, selection.evidence);
                    applied++;
                }
                commit = true;
            }
            finally { currentProgram.endTransaction(transaction, commit); }
        }
        else {
            unchanged = selections.size();
            for (Selection selection : selections)
                if (!namespaceEligible(selection.function.getParentNamespace())) ownerPreserved++;
        }
        println("Library classifications applied: " + applied + ", namespaced: " +
            namespaced + ", class/owner namespaces preserved: " + ownerPreserved +
            ", unchanged: " + unchanged + ", skipped: " + skipped + ", failed: " + failed);
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

    private Namespace findNamespace(String qualified) {
        SymbolTable table = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        for (String part : qualified.split("::")) {
            parent = table.getNamespace(part, parent);
            if (parent == null) return null;
        }
        return parent;
    }

    private boolean needsChange(Selection selection) {
        Function function = selection.function;
        Namespace currentParent = function.getParentNamespace();
        if (namespaceEligible(currentParent)) {
            Namespace desired = findNamespace(selection.namespace);
            if (desired == null || !currentParent.equals(desired)) return true;
        }
        if (!hasTag(function, TAG) || !hasTag(function, "LIBRARY_" + selection.library))
            return true;
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if (name.startsWith("LIBRARY_") &&
                    !name.equals("LIBRARY_" + selection.library) &&
                    hasScriptLibraryMarker(function, name.substring("LIBRARY_".length())))
                return true;
        }
        String marker = "Statically linked library function [" + selection.library + "]";
        String comment = function.getComment();
        String repeatable = function.getRepeatableComment();
        return comment == null || !comment.contains(marker) ||
            repeatable == null || !repeatable.contains(marker);
    }

    private boolean namespaceEligible(Namespace namespace) {
        return namespace.isGlobal() || namespace.getName(true).startsWith("Library::");
    }

    private boolean hasTag(Function function, String name) {
        return function.getTags().stream().anyMatch(tag -> name.equals(tag.getName()));
    }

    private boolean hasScriptLibraryMarker(Function function, String library) {
        String marker = "Statically linked library function [" + library + "]";
        String comment = function.getComment();
        String repeatable = function.getRepeatableComment();
        return comment != null && comment.contains(marker) ||
            repeatable != null && repeatable.contains(marker);
    }

    private void removeObsoleteScriptLibraryClassifications(Function function,
            String desiredLibrary) {
        List<String> obsolete = new ArrayList<>();
        for (FunctionTag tag : function.getTags()) {
            String name = tag.getName();
            if (!name.startsWith("LIBRARY_") ||
                    name.equals("LIBRARY_" + desiredLibrary)) continue;
            String library = name.substring("LIBRARY_".length());
            if (hasScriptLibraryMarker(function, library)) obsolete.add(library);
        }
        for (String library : obsolete) {
            function.removeTag("LIBRARY_" + library);
            String quoted = java.util.regex.Pattern.quote(
                "Statically linked library function [" + library + "].");
            String comment = function.getComment();
            if (comment != null) {
                comment = comment.replaceAll("(?m)^" + quoted +
                    "(?:\\R^Evidence:.*)?(?:\\R^Implementation is intentionally excluded " +
                    "from the LLM decompilation corpus\\.)?(?:\\R\\R)?", "").trim();
                function.setComment(comment.isBlank() ? null : comment);
            }
            String repeatable = function.getRepeatableComment();
            if (repeatable != null) {
                repeatable = repeatable.replaceAll("(?m)^" + quoted + "(?:\\R)?", "")
                    .trim();
                function.setRepeatableComment(repeatable.isBlank() ? null : repeatable);
            }
        }
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

    private record Selection(Function function, String library, String namespace,
        String evidence) { }
}
