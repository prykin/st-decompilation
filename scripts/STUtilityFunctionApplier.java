// Apply verified utility-function semantics produced by STUtilityFunctionAnalyzer.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Utility Functions

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Objects;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinition;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.pcode.DataTypeSymbol;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STUtilityFunctionApplier extends GhidraScript {
    private static final String MARKER = "[STUtilityFunctionApplier]";
    private static final String TAG = "RECOVERED_UTILITY_SEMANTICS";
    private static final String TAG_PREFIX = "RECOVERED_UTILITY_";
    private final List<Report> report = new ArrayList<>();
    private DataTypeManager dataTypes;

    @Override
    protected void run() throws Exception {
        // Explicit per-script transactions must not be nested in GhidraScript's wrapper.
        end(true);
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = inputFile(); if (file == null) return;
        Tsv input = readTsv(file.toPath());
        require(input, "apply", "function_address", "semantic_id", "expected_qualified_name",
            "expected_name", "expected_name_source", "expected_signature", "expected_convention",
            "expected_parameters", "expected_call_fixup", "proposed_name", "proposed_convention",
            "proposed_return_type", "proposed_parameter_types", "proposed_parameter_names",
            "proposed_call_fixup", "consumer_call_views", "semantics", "evidence");
        dataTypes = currentProgram.getDataTypeManager();
        int transaction = currentProgram.startTransaction("Apply utility-function semantics");
        boolean commit = false;
        try {
            for (Map<String, String> row : input.rows) {
                monitor.checkCancelled(); apply(row);
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(transaction, commit); }
        Path output = file.toPath().toAbsolutePath().getParent()
            .resolve("utility_function_apply_report.tsv");
        writeReport(output);
        println("Utility functions: applied=" + count("applied") + ", unchanged=" +
            count("unchanged") + ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        String addressText = row.get("function_address");
        if (!enabled(row.get("apply"))) {
            report.add(new Report(addressText, row.get("semantic_id"), "disabled", "apply=0"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Function function = address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) { conflict(addressText, row, "function missing"); return; }
            List<ConsumerViewPlan> consumerViews =
                planConsumerViews(function, row);
            boolean exact = function.getName(true).equals(unt(row.get("expected_qualified_name"))) &&
                function.getName().equals(unt(row.get("expected_name"))) &&
                function.getSymbol().getSource().toString().equals(row.get("expected_name_source")) &&
                function.getPrototypeString(true, true).equals(unt(row.get("expected_signature"))) &&
                function.getCallingConventionName().equals(row.get("expected_convention")) &&
                parameterBaseline(function).equals(unt(row.get("expected_parameters"))) &&
                callFixup(function).equals(unt(row.get("expected_call_fixup")));
            boolean already = function.getName().equals(row.get("proposed_name")) &&
                function.getCallingConventionName().equals(row.get("proposed_convention")) &&
                typeSpec(function.getReturnType()).equals(row.get("proposed_return_type")) &&
                proposedParametersPresent(function, row) &&
                desiredCallFixupPresent(function, row);
            if (already) {
                // Semantic descriptions evolve independently of the stable
                // prototype.  Refresh our owned block even when no type/name
                // mutation is necessary so stale claims do not survive forever.
                replaceComment(function, row);
                refreshSemanticTags(function, row);
                int viewChanges = applyConsumerViews(function, consumerViews);
                viewChanges += cleanupStaleConsumerViews(function, consumerViews);
                report.add(new Report(addressText, row.get("semantic_id"),
                    viewChanges == 0 ? "unchanged" : "applied",
                    "desired name and prototype already present; consumer_call_views=" +
                        viewChanges));
                return;
            }
            boolean recoveredSourceIdentity =
                hasTag(function, "RECOVERED_SOURCE_NAME");
            if (!exact ||
                    function.getSymbol().getSource() == SourceType.USER_DEFINED &&
                        !recoveredSourceIdentity ||
                    function.getSymbol().getSource() == SourceType.IMPORTED) {
                report.add(new Report(addressText, row.get("semantic_id"), "preserved",
                    "stale baseline or manual function identity")); return;
            }
            String[] types = split(row.get("proposed_parameter_types"));
            String[] names = split(row.get("proposed_parameter_names"));
            List<Parameter> parameters = explicitParameters(function);
            if (types.length != parameters.size() || names.length != parameters.size()) {
                conflict(addressText, row, "parameter count mismatch"); return;
            }
            DataType returnType = resolve(row.get("proposed_return_type"));
            if (returnType == null) { conflict(addressText, row, "return type missing"); return; }
            List<DataType> resolved = new ArrayList<>();
            for (String specification : types) {
                DataType type = resolve(specification);
                if (type == null) { conflict(addressText, row, "parameter type missing: " + specification); return; }
                resolved.add(type);
            }
            function.setCallingConvention(row.get("proposed_convention"));
            function.setReturnType(returnType, SourceType.ANALYSIS);
            for (int index = 0; index < parameters.size(); index++) {
                Parameter parameter = parameters.get(index);
                if (parameter.getSource() == SourceType.USER_DEFINED ||
                        parameter.getSource() == SourceType.IMPORTED) {
                    conflict(addressText, row, "manual parameter " + index + " appeared"); return;
                }
                parameter.setDataType(resolved.get(index), SourceType.ANALYSIS);
                parameter.setName(names[index], SourceType.ANALYSIS);
            }
            if (!function.getName().equals(row.get("proposed_name")))
                function.getSymbol().setName(row.get("proposed_name"), SourceType.ANALYSIS);
            String proposedCallFixup = unt(row.get("proposed_call_fixup"));
            if (!proposedCallFixup.isBlank()) function.setCallFixup(proposedCallFixup);
            refreshSemanticTags(function, row);
            replaceComment(function, row);
            int viewChanges = applyConsumerViews(function, consumerViews);
            viewChanges += cleanupStaleConsumerViews(function, consumerViews);
            report.add(new Report(addressText, row.get("semantic_id"), "applied",
                row.get("proposed_name") + " " + row.get("proposed_convention") +
                    "; consumer_call_views=" + viewChanges));
        }
        catch (PreserveException exception) {
            report.add(new Report(addressText, row.get("semantic_id"),
                "preserved", exception.getMessage()));
        }
        catch (Exception exception) { conflict(addressText, row, message(exception)); }
    }

    private boolean proposedParametersPresent(Function function, Map<String, String> row) {
        String[] types = split(row.get("proposed_parameter_types"));
        String[] names = split(row.get("proposed_parameter_names"));
        List<Parameter> parameters = explicitParameters(function);
        if (types.length != parameters.size() || names.length != parameters.size()) return false;
        for (int index = 0; index < types.length; index++)
            if (!typeSpec(parameters.get(index).getDataType()).equals(types[index]) ||
                    !parameters.get(index).getName().equals(names[index])) return false;
        return true;
    }

    private boolean desiredCallFixupPresent(Function function, Map<String, String> row) {
        String proposed = unt(row.get("proposed_call_fixup"));
        return proposed.isBlank() || callFixup(function).equals(proposed);
    }

    private List<ConsumerViewPlan> planConsumerViews(Function target,
            Map<String, String> row) throws Exception {
        String encoded = unt(row.get("consumer_call_views"));
        if (encoded.isBlank()) return List.of();
        if (!"heterogeneous_payload_loader".equals(row.get("semantic_id")))
            throw new PreserveException(
                "consumer call views attached to unrelated utility semantic");
        List<ConsumerViewPlan> result = new ArrayList<>();
        for (String item : encoded.split("\\|", -1)) {
            String[] parts = item.split(",", 4);
            if (parts.length != 4)
                throw new PreserveException("invalid consumer call-view row");
            Function caller = function(parts[0]);
            Address callAddress = currentProgram.getAddressFactory()
                .getAddress(parts[1]);
            Instruction call = callAddress == null ? null :
                currentProgram.getListing().getInstructionAt(callAddress);
            Function resolved = call == null ? null :
                resolveThunk(directCalledFunction(call));
            if (caller == null || call == null ||
                    !caller.getBody().contains(callAddress) ||
                    !"CALL".equalsIgnoreCase(call.getMnemonicString()) ||
                    resolved == null || !resolved.equals(target))
                throw new PreserveException(
                    "stale heterogeneous consumer call at " + parts[1]);
            DataType returned = resolve(parts[2]);
            if (returned == null ||
                    !(returned instanceof ghidra.program.model.data.Pointer))
                throw new PreserveException(
                    "consumer return view is missing: " + parts[2]);
            FunctionDefinition existing = existingOverride(caller, callAddress);
            String current = existing == null ? "none" : fingerprint(existing);
            if (!current.equals(parts[3]))
                throw new PreserveException(
                    "stale consumer override at " + parts[1] +
                        ": expected " + parts[3] + ", found " + current);
            FunctionDefinitionDataType desired = directCallOverride(target,
                callAddress, returned, row);
            if (existing != null &&
                    !fingerprint(desired).equals(current) &&
                    !hasConsumerViewMarker(callAddress))
                throw new PreserveException(
                    "foreign consumer override preserved at " + parts[1]);
            result.add(new ConsumerViewPlan(caller, callAddress, desired,
                existing));
        }
        return result;
    }

    private int applyConsumerViews(Function target,
            List<ConsumerViewPlan> plans) throws Exception {
        int changed = 0;
        for (ConsumerViewPlan plan : plans) {
            String desired = fingerprint(plan.desired);
            boolean overrideChange = plan.existing == null ||
                !desired.equals(fingerprint(plan.existing));
            if (overrideChange) {
                if (hasConsumerViewMarker(plan.address))
                    deleteOverrides(plan.caller, plan.address);
                HighFunctionDBUtil.writeOverride(plan.caller, plan.address,
                    plan.desired);
            }
            boolean markerChange = setConsumerViewMarker(plan.address,
                target, desired);
            if (overrideChange || markerChange) changed++;
        }
        return changed;
    }

    private int cleanupStaleConsumerViews(Function target,
            List<ConsumerViewPlan> plans) {
        Set<Address> retained = new HashSet<>();
        for (ConsumerViewPlan plan : plans) retained.add(plan.address);
        String targetToken = "target=" + addr(target.getEntryPoint());
        int changed = 0;
        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function caller = functions.next();
            InstructionIterator instructions = currentProgram.getListing()
                .getInstructions(caller.getBody(), true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                Address address = instruction.getAddress();
                String comment = text(currentProgram.getListing()
                    .getComment(CommentType.EOL, address));
                if (!comment.contains(consumerViewPrefix()) ||
                        !comment.contains(targetToken) || retained.contains(address))
                    continue;
                deleteOverrides(caller, address);
                removeConsumerViewMarker(address);
                changed++;
            }
        }
        return changed;
    }

    private FunctionDefinitionDataType directCallOverride(Function target,
            Address call, DataType returned, Map<String, String> row)
            throws Exception {
        FunctionDefinitionDataType desired = new FunctionDefinitionDataType(
            "payload_view_" + call, dataTypes);
        desired.setCallingConvention(row.get("proposed_convention"));
        desired.setReturnType(returned);
        String[] types = split(row.get("proposed_parameter_types"));
        String[] names = split(row.get("proposed_parameter_names"));
        ParameterDefinition[] arguments = new ParameterDefinition[types.length];
        for (int index = 0; index < types.length; index++) {
            DataType type = resolve(types[index]);
            if (type == null)
                throw new IllegalArgumentException(
                    "consumer-call parameter type is missing: " + types[index]);
            arguments[index] = new ParameterDefinitionImpl(names[index], type,
                "consumer-local payload view; shared loader ABI remains byte *");
        }
        desired.setArguments(arguments);
        return desired;
    }

    private FunctionDefinition existingOverride(Function caller, Address call) {
        Namespace root = HighFunction.findOverrideSpace(caller);
        if (root == null) return null;
        FunctionDefinition agreed = null;
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call)) {
            if (!root.equals(symbol.getParentNamespace())) continue;
            DataTypeSymbol value = HighFunctionDBUtil.readOverride(symbol);
            if (value == null ||
                    !(value.getDataType() instanceof FunctionDefinition definition))
                continue;
            if (agreed != null &&
                    !fingerprint(agreed).equals(fingerprint(definition)))
                return null;
            agreed = definition;
        }
        return agreed;
    }

    private String fingerprint(FunctionDefinition definition) {
        List<String> result = new ArrayList<>();
        result.add(definition.getCallingConventionName());
        result.add(typeSpec(definition.getReturnType()));
        for (ParameterDefinition argument : definition.getArguments())
            result.add(typeSpec(argument.getDataType()));
        return String.join(";", result);
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager()
                .getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private Function resolveThunk(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() &&
                seen.add(function.getEntryPoint())) {
            Function next = function.getThunkedFunction(false);
            if (next == null || next.equals(function)) break;
            function = next;
        }
        return function;
    }

    private boolean hasConsumerViewMarker(Address address) {
        return text(currentProgram.getListing()
            .getComment(CommentType.EOL, address)).contains(consumerViewPrefix());
    }

    private String consumerViewPrefix() {
        return MARKER + " heterogeneous_payload_consumer_view";
    }

    private boolean setConsumerViewMarker(Address address, Function target,
            String signature) {
        String marker = consumerViewPrefix() + "; target=" +
            addr(target.getEntryPoint()) + "; signature=" + signature;
        String old = text(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        if (old.contains(marker)) return false;
        removeConsumerViewMarker(address);
        old = text(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        currentProgram.getListing().setComment(address, CommentType.EOL,
            old.isBlank() ? marker : old + " " + marker);
        return true;
    }

    private void removeConsumerViewMarker(Address address) {
        String old = text(currentProgram.getListing()
            .getComment(CommentType.EOL, address));
        if (!old.contains(consumerViewPrefix())) return;
        String cleaned = old.replaceAll("(?:\\s*)\\Q" + consumerViewPrefix() +
            "\\E; target=[0-9A-Fa-f]+; signature=[^\\r\\n]*", "").trim();
        currentProgram.getListing().setComment(address, CommentType.EOL,
            cleaned.isBlank() ? null : cleaned);
    }

    private void deleteOverrides(Function caller, Address call) {
        Namespace root = HighFunction.findOverrideSpace(caller);
        if (root == null) return;
        List<Symbol> remove = new ArrayList<>();
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(call))
            if (root.equals(symbol.getParentNamespace()) &&
                    HighFunctionDBUtil.readOverride(symbol) != null)
                remove.add(symbol);
        for (Symbol symbol : remove) symbol.delete();
    }

    private Function function(String address) {
        Address value = currentProgram.getAddressFactory().getAddress(address);
        return value == null ? null :
            currentProgram.getFunctionManager().getFunctionAt(value);
    }

    private String addr(Address address) {
        return address.toString().toUpperCase(Locale.ROOT);
    }

    private static String text(Object value) {
        return value == null ? "" : value.toString();
    }

    private String callFixup(Function function) {
        String value = function.getCallFixup();
        return value == null ? "" : value;
    }

    private void replaceComment(Function function, Map<String, String> row) {
        String block = MARKER + " " + row.get("semantic_id") + ": " +
            unt(row.get("semantics")) + "\nEvidence: " + unt(row.get("evidence"));
        String old = function.getComment();
        List<String> kept = new ArrayList<>();
        if (old != null) for (String item : old.split("\\n\\s*\\n"))
            if (!item.trim().startsWith(MARKER) && !item.isBlank()) kept.add(item.trim());
        kept.add(block);
        String replacement = String.join("\n\n", kept);
        if (!Objects.equals(old, replacement)) function.setComment(replacement);
    }

    private void refreshSemanticTags(Function function, Map<String, String> row) {
        String desired = semanticTag(row);
        List<String> obsolete = new ArrayList<>();
        for (var tag : function.getTags())
            // TAG is the stable family marker and deliberately shares the
            // RECOVERED_UTILITY_ prefix with the one semantic-specific tag.
            // Treating it as an obsolete semantic tag removed and re-added it
            // on every otherwise no-op pass, advancing Ghidra's modification
            // counter twice per recovered utility without changing the final
            // Program fingerprint.
            if (!tag.getName().equals(TAG) &&
                    tag.getName().startsWith(TAG_PREFIX) &&
                    !tag.getName().equals(desired))
                obsolete.add(tag.getName());
        for (String name : obsolete) function.removeTag(name);
        if (!hasTag(function, TAG)) function.addTag(TAG);
        if (!hasTag(function, desired)) function.addTag(desired);
    }

    private boolean hasTag(Function function, String name) {
        for (var tag : function.getTags())
            if (tag.getName().equals(name)) return true;
        return false;
    }

    private String semanticTag(Map<String, String> row) {
        return TAG_PREFIX + row.get("semantic_id").toUpperCase(Locale.ROOT)
            .replaceAll("[^A-Z0-9]+", "_");
    }

    private DataType resolve(String specification) {
        specification = unt(specification);
        if (specification.startsWith("pointer:")) {
            DataType base = resolve(specification.substring("pointer:".length()));
            return base == null ? null : new PointerDataType(base,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        return dataTypes.getDataType(specification);
    }
    private String typeSpec(DataType type) {
        if (type instanceof ghidra.program.model.data.Pointer pointer &&
                pointer.getDataType() != null)
            return "pointer:" + typeSpec(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }
    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }
    private String parameterBaseline(Function function) {
        List<String> values = new ArrayList<>();
        for (Parameter parameter : explicitParameters(function))
            values.add(parameter.getName() + "=" + typeSpec(parameter.getDataType()) + "@" +
                parameter.getSource());
        return String.join(";", values);
    }
    private static String[] split(String value) {
        value = unt(value); return value.isBlank() ? new String[0] : value.split(";", -1);
    }
    private void conflict(String address, Map<String, String> row, String detail) {
        report.add(new Report(address, row.get("semantic_id"), "conflict", detail));
    }
    private long count(String status) { return report.stream().filter(r -> r.status.equals(status)).count(); }
    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\tsemantic_id\tstatus\tdetail\n");
            for (Report row : report) out.write(row.address + "\t" + row.id + "\t" +
                row.status + "\t" + clean(row.detail) + "\n");
        }
    }

    private static final class PreserveException extends Exception {
        PreserveException(String message) { super(message); }
    }
    private record ConsumerViewPlan(Function caller, Address address,
        FunctionDefinitionDataType desired, FunctionDefinition existing) {}
    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Path to utility_function_proposals.tsv is required");
        return askFile("Select utility_function_proposals.tsv", "Apply");
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
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++) row.put(header[column], values[column]);
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }
    private void require(Tsv input, String... columns) {
        for (String column : columns) if (!input.header.contains(column))
            throw new IllegalArgumentException("Missing TSV column: " + column);
    }
    private static boolean enabled(String value) { return "1".equals(value) || "true".equalsIgnoreCase(value); }
    private static String unt(String value) { return value == null ? "" : value; }
    private static String clean(String value) { return unt(value).replace('\t', ' ').replace('\r', ' ').replace('\n', ' '); }
    private static String message(Exception exception) {
        return exception.getMessage() == null ? exception.getClass().getSimpleName() : exception.getMessage();
    }
    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String address, String id, String status, String detail) {}
}
