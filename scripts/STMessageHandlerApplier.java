// Apply reviewed message_handler_proposals.tsv from STMessageHandlerAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Message Handlers

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
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.listing.FunctionTag;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.ReturnParameterImpl;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;

public class STMessageHandlerApplier extends GhidraScript {
    private static final String MESSAGE_PATH = "/SubmarineTitans/Recovered/STMessage";
    private static final String TAG = "RECOVERED_MESSAGE_HANDLER";
    private static final String MARKER = "[STMessageHandlerApplier]";
    private final List<Report> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        // Each handler owns an independent top-level transaction.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile();
        if (file == null) return;
        Tsv tsv = readTsv(file.toPath());
        requireColumns(tsv, "apply", "function_address", "expected_function",
            "expected_signature", "expected_signature_source", "expected_calling_convention",
            "expected_return_type", "expected_return_source", "expected_parameter_count",
            "expected_parameter_name", "expected_parameter_type", "expected_parameter_source",
            "proposed_calling_convention", "proposed_return_type", "proposed_parameter_name",
            "proposed_parameter_type", "shared_zero_stub", "confidence", "reason", "evidence");
        DataType message = currentProgram.getDataTypeManager().getDataType(MESSAGE_PATH);
        if (message == null || message.getLength() < 0x20)
            throw new IllegalStateException(
                "STMessage 0x20 layout is missing; run STRecoveredTypesApplier first");

        int applied = 0, unchanged = 0, disabled = 0, preserved = 0, conflicts = 0;
        for (Map<String, String> row : tsv.rows) {
            monitor.checkCancelled();
            String addressText = row.get("function_address");
            if (!enabled(row.get("apply"))) {
                report.add(new Report(addressText, "disabled", row.get("reason")));
                disabled++;
                continue;
            }
            int transaction = currentProgram.startTransaction(
                "Apply recovered message handler " + addressText);
            boolean commit = false;
            try {
                ApplyResult result = applyRow(row, message);
                commit = result.changed;
                report.add(new Report(addressText, result.status, result.detail));
                if ("applied".equals(result.status)) applied++;
                else if ("unchanged".equals(result.status)) unchanged++;
                else if ("preserved".equals(result.status)) preserved++;
                else conflicts++;
            }
            catch (Exception exception) {
                report.add(new Report(addressText, "conflict", message(exception)));
                conflicts++;
            }
            finally {
                currentProgram.endTransaction(transaction, commit);
            }
        }

        Path reportPath = file.toPath().toAbsolutePath().normalize()
            .resolveSibling("message_handler_apply_report.tsv");
        writeReport(reportPath);
        println("Message handlers: applied=" + applied + ", unchanged=" + unchanged +
            ", disabled=" + disabled + ", manual/stale preserved=" + preserved +
            ", conflicts=" + conflicts);
        println("Apply report: " + reportPath);
    }

    private ApplyResult applyRow(Map<String, String> row, DataType message) throws Exception {
        Address address = currentProgram.getAddressFactory().getAddress(row.get("function_address"));
        if (address == null) return ApplyResult.conflict("invalid function address");
        Function function = currentProgram.getFunctionManager().getFunctionAt(address);
        if (function == null) return ApplyResult.conflict("function missing");

        String currentSignature = function.getSignature().getPrototypeString(true);
        String currentConvention = function.getCallingConventionName();
        String currentName = function.getName(true);
        String currentSignatureSource = function.getSignatureSource().toString();
        boolean baseline = currentName.equals(unt(row.get("expected_function"))) &&
            currentSignature.equals(unt(row.get("expected_signature"))) &&
            currentConvention.equals(unt(row.get("expected_calling_convention"))) &&
            currentSignatureSource.equals(row.get("expected_signature_source"));
        if (!baseline && !hasTag(function, TAG))
            return ApplyResult.preserved("stale baseline; current " + currentSignature);

        DataType returnType = currentProgram.getDataTypeManager().getDataType(
            unt(row.get("proposed_return_type")));
        if (returnType == null) return ApplyResult.conflict("missing proposed return type");
        DataType messagePointer = new PointerDataType(message,
            currentProgram.getDefaultPointerSize(), currentProgram.getDataTypeManager());
        List<Parameter> explicit = explicitParameters(function);
        if (manualConflict(function, explicit, returnType, messagePointer))
            return ApplyResult.preserved("USER_DEFINED/IMPORTED semantic signature preserved");

        boolean desired = "__thiscall".equals(function.getCallingConventionName()) &&
            returnType.isEquivalent(function.getReturnType()) && explicit.size() == 1 &&
            messagePointer.isEquivalent(explicit.get(0).getDataType()) &&
            "message".equals(explicit.get(0).getName());
        if (desired) return ApplyResult.unchanged("desired signature already present");

        List<Variable> parameters = List.of(new ParameterImpl("message", messagePointer,
            currentProgram, SourceType.ANALYSIS));
        function.updateFunction("__thiscall",
            new ReturnParameterImpl(returnType, currentProgram), parameters,
            FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, true, SourceType.ANALYSIS);
        function.setSignatureSource(SourceType.ANALYSIS);
        verify(function, returnType, messagePointer);
        function.addTag(TAG);
        addComment(function, row);
        return ApplyResult.applied(function.getSignature().getPrototypeString(true));
    }

    private boolean manualConflict(Function function, List<Parameter> explicit,
            DataType proposedReturn, DataType proposedParameter) {
        Parameter returnParameter = function.getReturn();
        if (protectedSource(returnParameter.getSource()) &&
                !proposedReturn.isEquivalent(returnParameter.getDataType())) return true;
        for (Parameter parameter : explicit) {
            if (protectedSource(parameter.getSource()) &&
                    !proposedParameter.isEquivalent(parameter.getDataType())) return true;
        }
        return false;
    }

    private void verify(Function function, DataType returnType, DataType messagePointer) {
        List<Parameter> explicit = explicitParameters(function);
        if (!"__thiscall".equals(function.getCallingConventionName()) ||
                !returnType.isEquivalent(function.getReturnType()) || explicit.size() != 1 ||
                !messagePointer.isEquivalent(explicit.get(0).getDataType()))
            throw new IllegalArgumentException("Ghidra did not retain the proposed message signature");
        Parameter autoThis = null;
        for (Parameter parameter : function.getParameters())
            if (parameter.isAutoParameter()) { autoThis = parameter; break; }
        if (autoThis == null)
            throw new IllegalArgumentException("Ghidra did not synthesize the __thiscall receiver");
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private void addComment(Function function, Map<String, String> row) {
        String block = MARKER + " Recovered common GetMessage envelope/signature.\n" +
            "Evidence: " + unt(row.get("evidence"));
        String old = function.getComment();
        if (old == null || old.isBlank()) function.setComment(block);
        else if (!old.contains(MARKER)) function.setComment(old + "\n\n" + block);
    }

    private boolean hasTag(Function function, String tagName) {
        for (FunctionTag tag : function.getTags()) if (tagName.equals(tag.getName())) return true;
        return false;
    }
    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to message_handler_proposals.tsv is required");
        return askFile("Select message_handler_proposals.tsv", "Apply message handlers");
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
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1) +
                    ": expected " + header.length + " columns, got " + values.length);
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
            out.write("function_address\tstatus\tdetail\n");
            for (Report row : report)
                out.write(row.address + "\t" + row.status + "\t" + tsv(row.detail) + "\n");
        }
    }

    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value) ||
            "yes".equalsIgnoreCase(value);
    }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static String unt(String value) {
        if (value == null) return "";
        StringBuilder out = new StringBuilder();
        boolean escaped = false;
        for (char ch : value.toCharArray()) {
            if (!escaped && ch == '\\') { escaped = true; continue; }
            if (escaped) {
                if (ch == 't') out.append('\t');
                else if (ch == 'r') out.append('\r');
                else if (ch == 'n') out.append('\n');
                else out.append(ch);
                escaped = false;
            }
            else out.append(ch);
        }
        if (escaped) out.append('\\');
        return out.toString();
    }
    private static String message(Exception exception) {
        String value = exception.getMessage();
        return value == null || value.isBlank() ? exception.getClass().getSimpleName() : value;
    }

    private record Tsv(List<String> header, List<Map<String, String>> rows) { }
    private record Report(String address, String status, String detail) { }
    private record ApplyResult(String status, String detail, boolean changed) {
        static ApplyResult applied(String detail) { return new ApplyResult("applied", detail, true); }
        static ApplyResult unchanged(String detail) { return new ApplyResult("unchanged", detail, false); }
        static ApplyResult preserved(String detail) { return new ApplyResult("preserved", detail, false); }
        static ApplyResult conflict(String detail) { return new ApplyResult("conflict", detail, false); }
    }
}
