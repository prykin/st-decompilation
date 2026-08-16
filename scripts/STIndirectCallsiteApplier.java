// Apply exact polymorphic indirect-call overrides produced by STIndirectCallsiteAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Indirect Call Sites

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
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;

public class STIndirectCallsiteApplier extends GhidraScript {
    private static final String MARKER = "[STIndirectCallsiteApplier]";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;
    private int pointerSize;

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File file = inputFile();
        if (file == null) return;
        Tsv input = read(file.toPath());
        require(input, "apply", "action", "function_address", "function_name",
            "call_address", "slot_offset", "expected_override",
            "proposed_calling_convention", "receiver_type", "stack_parameter_count",
            "proposed_parameter_types", "proposed_return_type",
            "signature_function_address", "signature_function", "confidence", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        pointerSize = currentProgram.getDefaultPointerSize();
        int transaction = currentProgram.startTransaction("Apply indirect call-site ABIs");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("indirect_callsite_apply_report.tsv");
        writeReport(output);
        println("Indirect call sites: applied=" + count("applied") +
            ", removed=" + count("removed") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String target = row.get("function_address") + "@" + row.get("call_address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(target, row.get("action"), "disabled", "apply=0"));
            return;
        }
        try {
            Address entry = address(row.get("function_address"));
            Address call = address(row.get("call_address"));
            Function function = entry == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(entry);
            if (function == null || call == null || !function.getBody().contains(call)) {
                conflict(target, row, "caller or call instruction is missing");
                return;
            }
            FunctionDefinition existing = existingOverride(function, call);
            String current = existing == null ? "none" : fingerprint(existing);
            if (!current.equals(row.get("expected_override"))) {
                preserve(target, row, "stale call override: expected " +
                    row.get("expected_override") + ", found " + current);
                return;
            }
            boolean marker = hasMarker(call);
            if ("cleanup".equals(row.get("action"))) {
                if (!marker) {
                    preserve(target, row, "cleanup refused for a foreign override");
                    return;
                }
                deleteOverrides(function, call);
                removeMarker(call);
                report.add(new Report(target, "cleanup", "removed",
                    "stale script-owned call-site override removed"));
                return;
            }
            if (!"apply".equals(row.get("action"))) {
                conflict(target, row, "unknown action " + row.get("action"));
                return;
            }
            FunctionDefinitionDataType desired = desired(row);
            String wanted = fingerprint(desired);
            if (existing != null && wanted.equals(current)) {
                report.add(new Report(target, "apply", "unchanged",
                    "exact call-site ABI already present"));
                return;
            }
            if (existing != null && !marker) {
                preserve(target, row, "foreign non-equivalent call override preserved");
                return;
            }
            // HighFunctionDBUtil.writeOverride creates an override symbol; it does
            // not replace a non-equivalent symbol already at the same instruction.
            // Leaving the old script-owned symbol behind makes subsequent reads
            // ambiguous and causes an endless apply loop.  Foreign overrides were
            // rejected above, so only our marked override set may be replaced here.
            if (marker) deleteOverrides(function, call);
            HighFunctionDBUtil.writeOverride(function, call, desired);
            setMarker(call, row, wanted);
            report.add(new Report(target, "apply", "applied",
                "exact " + row.get("proposed_calling_convention") +
                    " call-site ABI; receiver=" + row.get("receiver_type") +
                    ", stack_parameters=" + row.get("stack_parameter_count") +
                    ", return=" + row.get("proposed_return_type")));
        }
        catch (Exception exception) { conflict(target, row, message(exception)); }
    }

    private FunctionDefinitionDataType desired(Map<String, String> row) throws Exception {
        String convention = row.get("proposed_calling_convention");
        int count = Integer.parseInt(row.get("stack_parameter_count"));
        DataType returned = resolve(row.get("proposed_return_type"));
        if (returned == null || count < 0 || count > 64)
            throw new IllegalArgumentException("invalid call-site signature");
        String[] specifications = count == 0 && row.get("proposed_parameter_types").isBlank() ?
            new String[0] : row.get("proposed_parameter_types").split(";", -1);
        if (specifications.length != count)
            throw new IllegalArgumentException("stack parameter count mismatch");
        boolean thiscall = "__thiscall".equals(convention);
        boolean stdcall = "__stdcall".equals(convention);
        if (!thiscall && !stdcall)
            throw new IllegalArgumentException("unsupported convention " + convention);
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            "callsite_" + row.get("call_address"), dataTypes);
        desired.setCallingConvention(convention);
        desired.setReturnType(returned);
        ParameterDefinition[] arguments = new ParameterDefinition[count + (thiscall ? 1 : 0)];
        int base = 0;
        if (thiscall) {
            DataType receiver = resolve(row.get("receiver_type"));
            if (!(receiver instanceof Pointer))
                throw new IllegalArgumentException("thiscall receiver is not a pointer");
            arguments[0] = new ParameterDefinitionImpl("this", receiver,
                "exact unadjusted receiver at this indirect call site");
            base = 1;
        }
        for (int index = 0; index < count; index++) {
            DataType type = resolve(specifications[index]);
            if (type == null)
                throw new IllegalArgumentException("missing type " + specifications[index]);
            arguments[index + base] = new ParameterDefinitionImpl("arg_" + (index + 1),
                type, "machine-width stack argument");
        }
        desired.setArguments(arguments);
        return desired;
    }

    private FunctionDefinition existingOverride(Function function, Address call) {
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return null;
        Symbol[] symbols = currentProgram.getSymbolTable().getSymbols(call);
        FunctionDefinition agreed = null;
        for (Symbol symbol : symbols) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null || !(value.getDataType() instanceof FunctionDefinition definition))
                continue;
            if (agreed != null && !fingerprint(agreed).equals(fingerprint(definition)))
                return null;
            agreed = definition;
        }
        return agreed;
    }

    private void deleteOverrides(Function function, Address call) {
        Namespace root = HighFunction.findOverrideSpace(function);
        if (root == null) return;
        List<Symbol> remove = new ArrayList<>();
        Symbol[] symbols = currentProgram.getSymbolTable().getSymbols(call);
        for (Symbol symbol : symbols) {
            if (root.equals(symbol.getParentNamespace()) &&
                    HighFunctionDBUtil.readOverride(symbol) != null) remove.add(symbol);
        }
        for (Symbol symbol : remove) symbol.delete();
    }

    private void setMarker(Address address, Map<String, String> row, String signature) {
        String old = currentProgram.getListing().getComment(CommentType.EOL, address);
        List<String> lines = keptLines(old);
        boolean machine = row.get("signature_function_address").isBlank() &&
            row.get("evidence").contains("machine callable");
        String mode = machine ?
            ("/void".equals(row.get("proposed_return_type")) ?
                "machine-void" : "machine-word") : "dispatch";
        lines.add(MARKER + " exact slot 0x" +
            Integer.toHexString(Integer.parseInt(row.get("slot_offset")))
                .toUpperCase(Locale.ROOT) + "; mode=" + mode +
                "; signature=" + signature);
        currentProgram.getListing().setComment(address, CommentType.EOL,
            String.join("\n", lines));
    }

    private void removeMarker(Address address) {
        String old = currentProgram.getListing().getComment(CommentType.EOL, address);
        List<String> kept = keptLines(old);
        currentProgram.getListing().setComment(address, CommentType.EOL,
            kept.isEmpty() ? null : String.join("\n", kept));
    }

    private List<String> keptLines(String comment) {
        List<String> result = new ArrayList<>();
        if (comment != null)
            for (String line : comment.split("\\R"))
                if (!line.contains(MARKER) && !line.isBlank()) result.add(line);
        return result;
    }

    private boolean hasMarker(Address address) {
        return text(currentProgram.getListing().getComment(CommentType.EOL, address))
            .contains(MARKER);
    }

    private String fingerprint(FunctionDefinition definition) {
        List<String> parts = new ArrayList<>();
        parts.add(text(definition.getCallingConventionName()));
        parts.add(typeSpec(definition.getReturnType()));
        for (ParameterDefinition argument : definition.getArguments())
            parts.add(typeSpec(argument.getDataType()));
        return String.join(";", parts);
    }

    private DataType resolve(String specification) {
        if (specification == null || specification.isBlank()) return null;
        if (specification.startsWith("pointer:")) {
            DataType pointed = resolve(specification.substring("pointer:".length()));
            return pointed == null ? null :
                new PointerDataType(pointed, pointerSize, dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private String typeSpec(DataType type) {
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("target\taction\tstatus\tdetail\n");
            for (Report row : report)
                out.write(clean(row.target) + "\t" + row.action + "\t" + row.status +
                    "\t" + clean(row.detail) + "\n");
        }
    }
    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private void preserve(String target, Map<String, String> row, String detail) {
        report.add(new Report(target, row.get("action"), "preserved", detail));
    }
    private void conflict(String target, Map<String, String> row, String detail) {
        report.add(new Report(target, row.get("action"), "conflict", detail));
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Proposal TSV required");
        return askFile("Select indirect_callsite_proposals.tsv", "Open");
    }
    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.length)
                throw new IllegalArgumentException("Malformed TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv tsv, String... columns) {
        for (String column : columns)
            if (!tsv.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private Address address(String value) {
        try { return currentProgram.getAddressFactory().getAddress(value); }
        catch (Exception ignored) { return null; }
    }
    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String clean(String value) {
        return text(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
    private static String message(Throwable throwable) {
        return throwable.getMessage() == null ?
            throwable.getClass().getSimpleName() : throwable.getMessage();
    }

    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String target, String action, String status, String detail) { }
}
