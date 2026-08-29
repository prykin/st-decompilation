// Audit transparent Ghidra thunks and propose removal of stale wrapper-local
// names when the final target already carries the truth.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Analyze Thunk Propagation

import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.SourceType;

public class STThunkPropagationAnalyzer extends GhidraScript {
    @Override
    protected void run() throws Exception {
        end(true);
        if (currentProgram == null) {
            printerr("Open the analyzed ST program first.");
            return;
        }
        File selected = outputDirectory();
        if (selected == null) return;
        Path directory = programDirectory(selected);
        Files.createDirectories(directory);

        List<Row> rows = new ArrayList<>();
        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            monitor.checkCancelled();
            Function thunk = functions.next();
            if (!thunk.isThunk() || thunk.isExternal()) continue;
            Function target = finalTarget(thunk);
            if (target == null || target.equals(thunk)) continue;

            boolean transparent = transparent(thunk);
            boolean semanticTarget = !synthetic(target.getName());
            boolean alreadyForwarded =
                thunk.getName(true).equals(target.getName(true));
            boolean redundantManualSuffix =
                thunk.getParentNamespace().equals(target.getParentNamespace()) &&
                thunk.getName().equals(target.getName() + "_thunk") &&
                thunk.getSymbol().getSource() == SourceType.USER_DEFINED;
            boolean generatedStale =
                !protectedSource(thunk.getSymbol().getSource()) &&
                !alreadyForwarded;
            boolean abiEquivalent = equivalentAbi(thunk, target);
            boolean signatureApply = transparent && !abiEquivalent &&
                !protectedSource(thunk.getSignatureSource());
            boolean nameApply = transparent && semanticTarget && abiEquivalent &&
                (redundantManualSuffix || generatedStale);
            String reason = "transparent=" + bit(transparent) +
                "; semantic_target=" + bit(semanticTarget) +
                "; already_forwarded=" + bit(alreadyForwarded) +
                "; redundant_manual_suffix=" + bit(redundantManualSuffix) +
                "; generated_stale=" + bit(generatedStale) +
                "; abi_equivalent=" + bit(abiEquivalent) +
                "; signature_apply=" + bit(signatureApply);
            rows.add(new Row(nameApply || signatureApply, nameApply,
                signatureApply, thunk, target, reason));
        }
        rows.sort(Comparator.comparing(row -> row.thunkAddress));

        Path proposals = directory.resolve("thunk_proposals.tsv");
        write(proposals, rows);
        long nameApply = rows.stream().filter(row -> row.nameApply).count();
        long signatureApply = rows.stream().filter(row -> row.signatureApply).count();
        Files.write(directory.resolve("thunk_summary.txt"), List.of(
            "program=" + currentProgram.getName(),
            "thunks=" + rows.size(),
            "apply=" + nameApply,
            "note=Only one-instruction direct JMP thunks can mutate. A USER_DEFINED " +
                "name is released only when it is exactly TargetName_thunk in the " +
                "target namespace and its ABI is already equivalent to the target. " +
                "A weak non-equivalent thunk signature is copied from its exact final " +
                "target; manual/imported thunk signatures remain protected."),
        StandardCharsets.UTF_8);
        println("Thunk propagation: thunks=" + rows.size() +
            ", name_apply=" + nameApply + ", signature_apply=" + signatureApply);
        println("Proposals: " + proposals.toAbsolutePath().normalize());
    }

    private Function finalTarget(Function thunk) {
        Set<ghidra.program.model.address.Address> seen = new HashSet<>();
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

    private boolean synthetic(String name) {
        return name == null || name.matches(
            "(?i)(?:FUN|SUB|LAB|thunk_FUN|thunk_SUB)_[0-9a-f]+");
    }

    private boolean protectedSource(SourceType source) {
        return source == SourceType.USER_DEFINED || source == SourceType.IMPORTED;
    }

    private File outputDirectory() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless())
            throw new IllegalArgumentException("Output directory is required");
        return askDirectory("Select recovery output directory", "Select");
    }

    private Path programDirectory(File selected) {
        Path path = selected.toPath().toAbsolutePath().normalize();
        if (path.getFileName() != null &&
                path.getFileName().toString().equals(currentProgram.getName()))
            return path;
        return path.resolve(currentProgram.getName());
    }

    private void write(Path path, List<Row> rows) throws Exception {
        try (BufferedWriter out =
                Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("apply\tname_apply\tsignature_apply\tthunk_address\t" +
                "expected_qualified_name\texpected_name_source\t" +
                "expected_signature\texpected_signature_source\t" +
                "target_address\ttarget_qualified_name\t" +
                "target_name_source\ttarget_signature\tproposed_qualified_name\treason\n");
            for (Row row : rows) {
                out.write(bit(row.apply) + "\t" + bit(row.nameApply) + "\t" +
                    bit(row.signatureApply) + "\t" +
                    row.thunkAddress + "\t" + tsv(row.expectedQualifiedName) + "\t" +
                    row.expectedNameSource + "\t" + tsv(row.expectedSignature) + "\t" +
                    row.expectedSignatureSource + "\t" + row.targetAddress + "\t" +
                    tsv(row.targetQualifiedName) + "\t" + row.targetNameSource + "\t" +
                    tsv(row.targetSignature) + "\t" +
                    tsv(row.proposedQualifiedName) + "\t" + tsv(row.reason) + "\n");
            }
        }
    }

    private String tsv(String value) {
        return value == null ? "" :
            value.replace("\\", "\\\\").replace("\t", "\\t")
                .replace("\r", "\\r").replace("\n", "\\n");
    }

    private String bit(boolean value) { return value ? "1" : "0"; }
    private String addr(ghidra.program.model.address.Address value) {
        return value.toString().toUpperCase();
    }

    private class Row {
        final boolean apply, nameApply, signatureApply;
        final String thunkAddress, expectedQualifiedName, expectedNameSource,
            expectedSignature, expectedSignatureSource,
            targetAddress, targetQualifiedName, targetNameSource, targetSignature,
            proposedQualifiedName, reason;

        Row(boolean apply, boolean nameApply, boolean signatureApply,
                Function thunk, Function target, String reason) {
            this.apply = apply;
            this.nameApply = nameApply;
            this.signatureApply = signatureApply;
            thunkAddress = addr(thunk.getEntryPoint());
            expectedQualifiedName = thunk.getName(true);
            expectedNameSource = thunk.getSymbol().getSource().toString();
            expectedSignature = thunk.getSignature().getPrototypeString(true);
            expectedSignatureSource = thunk.getSignatureSource().toString();
            targetAddress = addr(target.getEntryPoint());
            targetQualifiedName = target.getName(true);
            targetNameSource = target.getSymbol().getSource().toString();
            targetSignature = target.getSignature().getPrototypeString(true);
            proposedQualifiedName = targetQualifiedName;
            this.reason = reason;
        }
    }
}
