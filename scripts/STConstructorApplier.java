// Apply reviewed constructor proposals produced by STConstructorAnalyzer.
// Names and calling conventions are independent; manual signatures and names are preserved.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Constructors

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
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.listing.AutoParameterType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

public class STConstructorApplier extends GhidraScript {
    private static final String TAG = "RECOVERED_CONSTRUCTOR";
    private static final String COMMENT_MARKER = "[STConstructorApplier]";
    private final List<ReportRow> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File proposalFile = inputFile();
        if (proposalFile == null) return;
        Tsv tsv = readTsv(proposalFile.toPath());
        requireColumns(tsv, "name_apply", "convention_apply", "function_address",
            "expected_name", "expected_name_source", "expected_signature",
            "expected_signature_source", "owner", "proposed_name", "table_address",
            "store_address", "confidence", "reason");
        dataTypes = currentProgram.getDataTypeManager();

        int transaction = currentProgram.startTransaction("Apply recovered constructors");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled();
                applyRow(row);
            }
            applyHierarchyComments(proposalFile.getAbsoluteFile().getParentFile().toPath()
                .resolve("constructor_hierarchy.tsv"));
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path reportPath = proposalFile.getAbsoluteFile().getParentFile().toPath()
            .resolve("constructor_apply_report.tsv");
        writeReport(reportPath);
        long applied = report.stream().filter(row -> row.status.equals("applied")).count();
        long partial = report.stream().filter(row -> row.status.equals("partial")).count();
        long unchanged = report.stream().filter(row -> row.status.equals("unchanged")).count();
        long preserved = report.stream().filter(row -> row.status.equals("preserved")).count();
        long disabled = report.stream().filter(row -> row.status.equals("disabled")).count();
        long conflicts = report.stream().filter(row -> row.status.equals("conflict")).count();
        println("Constructors: applied=" + applied + ", partial=" + partial +
            ", unchanged=" + unchanged + ", preserved=" + preserved +
            ", conflicts=" + conflicts + ", disabled=" + disabled);
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
    }

    private void applyRow(Map<String, String> row) throws Exception {
        boolean nameApply = enabled(row.get("name_apply"));
        boolean conventionApply = enabled(row.get("convention_apply"));
        Address address = address(row.get("function_address"));
        if (!nameApply && !conventionApply) {
            report.add(new ReportRow(addr(address), "disabled", unt(row.get("proposed_name")),
                "name_apply=0; convention_apply=0"));
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) {
            report.add(new ReportRow(addr(address), "conflict", unt(row.get("proposed_name")),
                "no function at analyzed address"));
            return;
        }

        String initialName = function.getName(true);
        SourceType initialNameSource = function.getSymbol().getSource();
        String initialSignature = function.getSignature().getPrototypeString(true);
        SourceType initialSignatureSource = function.getSignatureSource();
        String expectedName = unt(row.get("expected_name"));
        String expectedNameSource = row.get("expected_name_source");
        String expectedSignature = unt(row.get("expected_signature"));
        String expectedSignatureSource = row.get("expected_signature_source");
        String owner = unt(row.get("owner"));
        String proposed = unt(row.get("proposed_name"));

        List<String> details = new ArrayList<>();
        boolean changed = false, preserved = false, conflict = false;
        boolean nameBaseline = initialName.equals(expectedName) &&
            initialNameSource.toString().equals(expectedNameSource);
        boolean scriptOwnedName = hasTag(function, TAG);
        if (nameApply) {
            if (initialName.equals(proposed)) details.add("name=unchanged");
            else if (!nameBaseline || (initialNameSource == SourceType.USER_DEFINED &&
                    !scriptOwnedName)) {
                details.add("name=preserved(current " + initialName + " [" +
                    initialNameSource + "])" );
                preserved = true;
            }
            else if (owner.isBlank() || proposed.isBlank()) {
                details.add("name=conflict(missing owner/proposal)");
                conflict = true;
            }
            else {
                setQualifiedConstructorName(function, owner);
                details.add("name=applied(" + function.getName(true) + ")");
                changed = true;
            }
        }

        boolean signatureBaseline = initialSignature.equals(expectedSignature) &&
            initialSignatureSource.toString().equals(expectedSignatureSource);
        boolean manualSignature = initialSignatureSource == SourceType.USER_DEFINED &&
            !hasTag(function, TAG);
        if (conventionApply) {
            if ("__thiscall".equals(function.getCallingConventionName()) &&
                    thisTypeMatches(function, owner)) {
                details.add("convention=unchanged");
            }
            else if (manualSignature) {
                details.add("convention=preserved(USER_DEFINED signature)");
                preserved = true;
            }
            else if (!signatureBaseline) {
                details.add("convention=preserved(stale signature baseline)");
                preserved = true;
            }
            else {
                function.setCallingConvention("__thiscall");
                function.setSignatureSource(SourceType.ANALYSIS);
                setThisType(function, owner);
                details.add("convention=applied(__thiscall, " + owner + " *this)");
                changed = true;
            }
        }

        if (changed) {
            function.addTag(TAG);
            addRecoveryComment(function, row);
        }
        String status = conflict && !changed ? "conflict" :
            changed && (conflict || preserved) ? "partial" : changed ? "applied" :
            preserved ? "preserved" : "unchanged";
        report.add(new ReportRow(addr(address), status, proposed, String.join("; ", details)));
    }

    private void setQualifiedConstructorName(Function function, String owner) throws Exception {
        Namespace namespace = getOrCreateClass(owner);
        function.setParentNamespace(namespace);
        function.setName(leaf(owner), SourceType.ANALYSIS);
    }

    private Namespace getOrCreateClass(String owner) throws Exception {
        SymbolTable symbols = currentProgram.getSymbolTable();
        Namespace parent = currentProgram.getGlobalNamespace();
        String[] parts = owner.split("::");
        for (int index = 0; index < parts.length; index++) {
            String part = parts[index];
            Namespace existing = symbols.getNamespace(part, parent);
            if (existing == null) {
                existing = index == parts.length - 1 ?
                    symbols.createClass(parent, part, SourceType.USER_DEFINED) :
                    symbols.getOrCreateNameSpace(parent, part, SourceType.USER_DEFINED);
            }
            else if (index == parts.length - 1 && !(existing instanceof GhidraClass)) {
                existing = symbols.convertNamespaceToClass(existing);
            }
            parent = existing;
        }
        ensureOwnerType(owner);
        return parent;
    }

    private DataType ensureOwnerType(String owner) {
        DataType existing = findOwnerType(owner);
        if (existing != null) return existing;
        String name = leaf(owner);
        Structure placeholder = new StructureDataType(name, 1, dataTypes);
        placeholder.setDescription("PlaceHolder Class Structure");
        return dataTypes.resolve(placeholder,
            ghidra.program.model.data.DataTypeConflictHandler.KEEP_HANDLER);
    }

    private DataType findOwnerType(String owner) {
        String name = leaf(owner);
        DataType direct = dataTypes.getDataType("/" + name);
        if (direct instanceof Structure) return direct;
        List<DataType> matches = new ArrayList<>();
        dataTypes.findDataTypes(name, matches);
        for (DataType match : matches) {
            if (match instanceof Structure &&
                    !match.getPathName().contains("/Recovered/VTables/")) return match;
        }
        return null;
    }

    private void setThisType(Function function, String owner) throws Exception {
        if (!"__thiscall".equals(function.getCallingConventionName())) return;
        DataType ownerType = ensureOwnerType(owner);
        Parameter parameter = thisParameter(function);
        if (parameter == null) return;
        if (parameter.getDataType() instanceof Pointer pointer &&
                ownerType.isEquivalent(pointer.getDataType())) return;
        parameter.setDataType(new PointerDataType(ownerType,
            currentProgram.getDefaultPointerSize(), dataTypes), SourceType.ANALYSIS);
    }

    private boolean thisTypeMatches(Function function, String owner) {
        Parameter parameter = thisParameter(function);
        DataType ownerType = findOwnerType(owner);
        return parameter != null && ownerType != null &&
            parameter.getDataType() instanceof Pointer pointer &&
            ownerType.isEquivalent(pointer.getDataType());
    }

    private Parameter thisParameter(Function function) {
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() &&
                    parameter.getAutoParameterType() == AutoParameterType.THIS) return parameter;
        }
        return null;
    }

    private void addRecoveryComment(Function function, Map<String, String> row) {
        String block = COMMENT_MARKER + " Recovered constructor candidate.\n" +
            "VTable: " + row.get("table_address") + " (store " + row.get("store_address") +
            ")\nEvidence: " + unt(row.get("reason"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(COMMENT_MARKER)) function.setComment(old + "\n\n" + block);
    }

    private void applyHierarchyComments(Path path) throws Exception {
        if (!Files.isRegularFile(path)) return;
        Tsv tsv = readTsv(path);
        if (!tsv.header.contains("base_owner") || !tsv.header.contains("derived_owner")) return;
        for (Map<String, String> row : tsv.rows) {
            if (!enabled(row.get("apply"))) continue;
            DataType type = findOwnerType(unt(row.get("derived_owner")));
            if (!(type instanceof Structure structure)) continue;
            String marker = COMMENT_MARKER + " Direct base evidence: " +
                unt(row.get("base_owner")) + " -> " + unt(row.get("derived_owner"));
            String description = structure.getDescription();
            if (description == null || description.isBlank()) structure.setDescription(marker);
            else if (!description.contains(marker)) structure.setDescription(description + "\n" + marker);
        }
    }

    private boolean hasTag(Function function, String name) {
        for (FunctionTag tag : function.getTags()) if (name.equals(tag.getName())) return true;
        return false;
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to constructor_proposals.tsv is required");
        return askFile("Select constructor_proposals.tsv", "Apply constructors");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException(path.getFileName() + " line " + (line + 1) +
                    " has " + values.length + " columns; expected " + header.length);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void requireColumns(Tsv tsv, String... names) {
        for (String name : names)
            if (!tsv.header.contains(name))
                throw new IllegalArgumentException("Missing TSV column: " + name);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("address\tstatus\tproposed_name\tdetail\n");
            for (ReportRow row : report) out.write(tsv(row.address) + "\t" + row.status + "\t" +
                tsv(row.name) + "\t" + tsv(row.detail) + "\n");
        }
    }

    private Address address(String value) {
        Address result = currentProgram.getAddressFactory().getAddress(value);
        if (result == null) throw new IllegalArgumentException("Invalid address: " + value);
        return result;
    }
    private static String leaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String addr(Address value) {
        return value == null ? "" : value.toString().toUpperCase(Locale.ROOT);
    }
    private static String tsv(String value) {
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder result = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') result.append('\t');
                else if (ch == 'r') result.append('\r');
                else if (ch == 'n') result.append('\n');
                else result.append(ch);
                escaped = false;
            }
            else result.append(ch);
        }
        if (escaped) result.append('\\');
        return result.toString();
    }

    private static class Tsv {
        final List<String> header;
        final List<Map<String, String>> rows;
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
