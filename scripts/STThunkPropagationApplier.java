// Restore stale-baseline-checked transparent thunk names to Ghidra's dynamic
// target forwarding. Real thunk signatures already delegate to the target.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Thunk Propagation

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STThunkPropagationApplier extends GhidraScript {
    private final List<Report> report = new ArrayList<>();

    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File input = inputFile();
        if (input == null) return;
        Tsv tsv = read(input.toPath());
        require(tsv, "apply", "thunk_address", "expected_qualified_name",
            "expected_name_source", "target_address", "target_qualified_name",
            "target_name_source", "target_signature", "proposed_qualified_name", "reason");

        int transaction =
            currentProgram.startTransaction("Apply transparent thunk propagation");
        boolean commit = false;
        try {
            for (Map<String, String> row : tsv.rows) {
                monitor.checkCancelled();
                apply(row);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }

        Path output = input.toPath().toAbsolutePath().normalize().getParent()
            .resolve("thunk_apply_report.tsv");
        write(output);
        println("Thunk propagation: applied=" + count("applied") +
            ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") +
            ", conflicts=" + count("conflict") +
            ", disabled=" + count("disabled"));
        println("Apply report: " + output);
    }

    private void apply(Map<String, String> row) {
        boolean apply = enabled(row.get("apply"));
        String addressText = row.get("thunk_address");
        if (!apply) {
            report.add(new Report(addressText, "disabled",
                row.get("proposed_qualified_name"), "apply=0"));
            return;
        }
        try {
            Address address = currentProgram.getAddressFactory().getAddress(addressText);
            Address targetAddress =
                currentProgram.getAddressFactory().getAddress(row.get("target_address"));
            Function thunk =
                currentProgram.getFunctionManager().getFunctionAt(address);
            Function target =
                currentProgram.getFunctionManager().getFunctionAt(targetAddress);
            if (thunk == null || target == null || !thunk.isThunk() ||
                    !transparent(thunk) || !target.equals(finalTarget(thunk))) {
                report.add(new Report(addressText, "conflict",
                    row.get("proposed_qualified_name"),
                    "thunk/target relationship changed"));
                return;
            }

            boolean nameBaseline =
                thunk.getName(true).equals(row.get("expected_qualified_name")) &&
                thunk.getSymbol().getSource().toString()
                    .equals(row.get("expected_name_source"));
            boolean targetBaseline =
                target.getName(true).equals(row.get("target_qualified_name")) &&
                target.getSymbol().getSource().toString()
                    .equals(row.get("target_name_source")) &&
                target.getSignature().getPrototypeString(true)
                    .equals(row.get("target_signature"));
            if (!targetBaseline) {
                report.add(new Report(addressText, "preserved",
                    row.get("proposed_qualified_name"), "stale target baseline"));
                return;
            }

            boolean changed = false;
            List<String> details = new ArrayList<>();
            boolean exactRedundantManual =
                thunk.getParentNamespace().equals(target.getParentNamespace()) &&
                thunk.getName().equals(target.getName() + "_thunk") &&
                thunk.getSymbol().getSource() == SourceType.USER_DEFINED;
            boolean generated =
                !protectedSource(thunk.getSymbol().getSource());
            if (thunk.getSymbol().getSource() == SourceType.DEFAULT &&
                    thunk.getName(true).equals(target.getName(true))) {
                details.add("name=unchanged(dynamic target forwarding)");
            }
            else if (!nameBaseline || !equivalentAbi(thunk, target) ||
                    !exactRedundantManual && !generated) {
                details.add("name=preserved(stale/manual/non-equivalent)");
            }
            else {
                // An empty function name is the supported Ghidra operation which
                // restores SourceType.DEFAULT. FunctionSymbol then derives both
                // name and namespace dynamically from the thunk target.
                thunk.setName("", SourceType.DEFAULT);
                if (thunk.getSymbol().getSource() != SourceType.DEFAULT ||
                        !thunk.getName(true).equals(target.getName(true)) ||
                        !thunk.getParentNamespace().equals(target.getParentNamespace()))
                    throw new IllegalStateException(
                        "Ghidra did not restore dynamic thunk target forwarding");
                details.add("name=released_to_dynamic_target(" +
                    thunk.getName(true) + ")");
                changed = true;
            }
            boolean preserved = details.stream().anyMatch(value ->
                value.contains("preserved"));
            report.add(new Report(addressText,
                changed ? preserved ? "partial" : "applied" :
                    preserved ? "preserved" : "unchanged",
                row.get("proposed_qualified_name"), String.join("; ", details)));
        }
        catch (Exception exception) {
            report.add(new Report(addressText, "conflict",
                row.get("proposed_qualified_name"), message(exception)));
        }
    }

    private Function finalTarget(Function thunk) {
        Set<Address> seen = new HashSet<>();
        Function current = thunk;
        for (int depth = 0; depth < 32 && current != null && current.isThunk(); depth++) {
            if (!seen.add(current.getEntryPoint())) return null;
            Function next = current.getThunkedFunction(false);
            if (next == null || next.equals(current)) return null;
            current = next;
        }
        return current;
    }

    private boolean transparent(Function thunk) {
        InstructionIterator iterator =
            currentProgram.getListing().getInstructions(thunk.getBody(), true);
        if (!iterator.hasNext()) return false;
        Instruction instruction = iterator.next();
        return !iterator.hasNext() &&
            "JMP".equalsIgnoreCase(instruction.getMnemonicString()) &&
            instruction.getFlowType().isJump();
    }

    private boolean equivalentAbi(Function left, Function right) {
        if (!left.getCallingConventionName().equals(right.getCallingConventionName()) ||
                left.hasVarArgs() != right.hasVarArgs() ||
                left.hasNoReturn() != right.hasNoReturn() ||
                !equivalent(left.getReturnType(), right.getReturnType())) return false;
        List<Parameter> leftParameters = explicitParameters(left);
        List<Parameter> rightParameters = explicitParameters(right);
        if (leftParameters.size() != rightParameters.size()) return false;
        for (int index = 0; index < leftParameters.size(); index++)
            if (!equivalent(leftParameters.get(index).getDataType(),
                    rightParameters.get(index).getDataType())) return false;
        return true;
    }

    private List<Parameter> explicitParameters(Function function) {
        List<Parameter> result = new ArrayList<>();
        for (Parameter parameter : function.getParameters())
            if (!parameter.isAutoParameter()) result.add(parameter);
        return result;
    }

    private boolean equivalent(DataType left, DataType right) {
        return left != null && right != null &&
            (left.equals(right) || left.isEquivalent(right));
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Proposal file is required");
        return askFile("Select thunk_proposals.tsv", "Select");
    }

    private Tsv read(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV: " + path);
        String[] header = lines.get(0).split("\\t", -1);
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            Map<String, String> row = new LinkedHashMap<>();
            for (int column = 0; column < header.length; column++)
                row.put(header[column],
                    unt(column < values.length ? values[column] : ""));
            rows.add(row);
        }
        return new Tsv(List.of(header), rows);
    }

    private void require(Tsv tsv, String... columns) {
        for (String column : columns)
            if (!tsv.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }

    private void write(Path path) throws Exception {
        try (BufferedWriter out =
                Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("thunk_address\tstatus\tproposed_qualified_name\tdetails\n");
            for (Report row : report)
                out.write(row.address + "\t" + row.status + "\t" +
                    tsv(row.proposed) + "\t" + tsv(row.details) + "\n");
        }
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }

    private boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }

    private String unt(String value) {
        StringBuilder result = new StringBuilder();
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            if (ch != '\\' || index + 1 >= value.length()) {
                result.append(ch);
                continue;
            }
            char next = value.charAt(++index);
            result.append(next == 't' ? '\t' : next == 'n' ? '\n' :
                next == 'r' ? '\r' : next);
        }
        return result.toString();
    }

    private String tsv(String value) {
        return value == null ? "" :
            value.replace("\\", "\\\\").replace("\t", "\\t")
                .replace("\r", "\\r").replace("\n", "\\n");
    }

    private String message(Throwable throwable) {
        String value = throwable.getMessage();
        return value == null || value.isBlank() ?
            throwable.getClass().getSimpleName() : value;
    }

    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Report(String address, String status, String proposed,
        String details) {}
}
