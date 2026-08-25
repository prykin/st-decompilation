// Apply element-record and specialized-descriptor types proposed by
// STDArrayElementAnalyzer.  Mutates only hash-owned generated types/classes.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply DArray Element Types

import java.io.BufferedWriter;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.data.Undefined;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.listing.VariableStorage;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class STDArrayElementApplier extends GhidraScript {
    private static final String DARRAY_PATH = "/SubmarineTitans/Recovered/DArrayTy";
    private static final String MARKER = "[STDArrayElementApplier]";
    private static final String CLASS_MARKER = "[STClassLayoutApplier]";
    private static final String HASH_MARKER = "; generated_layout_sha256=";
    private final List<ReportRow> report = new ArrayList<>();
    private final List<LocalReportRow> localReport = new ArrayList<>();
    private final List<AppliedLocal> appliedLocals = new ArrayList<>();
    private final Set<Variable> rejectedLocals = new HashSet<>();
    private final Set<String> verifiedElementPaths = new HashSet<>();
    private final Map<String, Set<Long>> activeDynamicHashes =
        new HashMap<>();
    private DataTypeManager dataTypes;
    private int staleLocalsRemoved;

    @Override
    protected void run() throws Exception {
        // Explicit transaction ownership is required when invoked by the pipeline.
        end(true);
        if (currentProgram == null) {
            printerr("Open the same program that was analyzed.");
            return;
        }
        File proposalFile = inputFile();
        if (proposalFile == null) return;
        if (proposalFile.isDirectory())
            proposalFile = new File(proposalFile, "darray_element_proposals.tsv");
        File directory = proposalFile.getAbsoluteFile().getParentFile();
        File fieldFile = new File(directory, "darray_element_field_proposals.tsv");
        File localFile = new File(directory, "darray_element_local_proposals.tsv");
        if (!proposalFile.isFile())
            throw new IllegalArgumentException("Missing " + proposalFile);
        if (!fieldFile.isFile())
            throw new IllegalArgumentException("Missing sibling " + fieldFile);
        if (!localFile.isFile())
            throw new IllegalArgumentException("Missing sibling " + localFile);

        Tsv proposals = readTsv(proposalFile.toPath());
        Tsv fields = readTsv(fieldFile.toPath());
        Tsv locals = readTsv(localFile.toPath());
        requireColumns(proposals, "apply", "owner", "owner_type_path",
            "field_offset", "field_name", "expected_field_type", "element_size",
            "element_type_path", "descriptor_type_path", "confidence", "reason");
        requireColumns(fields, "apply", "element_type_path", "offset", "size",
            "proposed_name", "proposed_type", "evidence_count", "reason");
        requireColumns(locals, "apply", "function_address", "owner",
            "field_offset", "rendered_alias", "expected_alias_type",
            "element_type_path", "descriptor_type_path", "split_required",
            "confidence", "reason");
        Map<String, List<Map<String, String>>> fieldsByType = new LinkedHashMap<>();
        for (Map<String, String> row : fields.rows)
            fieldsByType.computeIfAbsent(unt(row.get("element_type_path")),
                ignored -> new ArrayList<>()).add(row);

        dataTypes = currentProgram.getDataTypeManager();
        String mode = mode();
        boolean applyLocals = "all".equals(mode);
        boolean cleanupLegacyLocals = "types-only-cleanup".equals(mode);
        if (!applyLocals && !cleanupLegacyLocals && !"types-only".equals(mode))
            throw new IllegalArgumentException("Unknown DArray apply mode: " + mode);

        // Install the element and descriptor layouts first.  Dynamic local
        // hashes are derived from the decompiler syntax tree, and that tree can
        // change when these data types are installed.  Decompiling locals
        // before this transaction would persist hashes for the obsolete tree.
        int typeTransaction =
            currentProgram.startTransaction("Apply recovered DArray element types");
        boolean typeCommit = false;
        try {
            for (Map<String, String> row : proposals.rows) {
                monitor.checkCancelled();
                apply(row, fieldsByType.getOrDefault(
                    unt(row.get("element_type_path")), List.of()));
            }
            typeCommit = true;
        }
        finally {
            currentProgram.endTransaction(typeTransaction, typeCommit);
        }
        currentProgram.flushEvents();

        if (applyLocals) {
            // Re-decompile only after the type transaction is visible. The local
            // transaction therefore commits storage/hash identities belonging to
            // the same tree which the UI will subsequently reconstruct.
            List<PreparedLocal> preparedLocals = prepareLocals(locals.rows);
            int localTransaction = currentProgram.startTransaction(
                "Apply recovered DArray element locals");
            boolean localCommit = false;
            try {
                cleanupStaleElementLocals(preparedLocals);
                for (PreparedLocal local : preparedLocals) {
                    monitor.checkCancelled();
                    applyLocal(local);
                }
                localCommit = true;
            }
            finally {
                currentProgram.endTransaction(localTransaction, localCommit);
            }
            currentProgram.flushEvents();
            verifyAppliedLocals();
        }
        else if (cleanupLegacyLocals) {
            int cleanupTransaction = currentProgram.startTransaction(
                "Retire recovered DArray element locals");
            boolean cleanupCommit = false;
            try {
                cleanupStaleElementLocals(List.of());
                cleanupCommit = true;
            }
            finally {
                currentProgram.endTransaction(cleanupTransaction, cleanupCommit);
            }
            currentProgram.flushEvents();
            report.add(new ReportRow("<legacy-locals>", -1,
                staleLocalsRemoved > 0 ? "updated" : "unchanged",
                "retired persistent DArray locals=" + staleLocalsRemoved));
        }

        Path reportPath = directory.toPath().resolve(
            "darray_element_apply_report.tsv");
        writeReport(reportPath);
        Path localReportPath = directory.toPath().resolve(
            "darray_element_local_apply_report.tsv");
        writeLocalReport(localReportPath);
        println("DArray elements: applied=" + count("applied") + ", updated=" +
            count("updated") + ", unchanged=" + count("unchanged") +
            ", preserved=" + count("preserved") + ", conflicts=" +
            count("conflict") + ", disabled=" + count("disabled"));
        println("DArray element locals: applied=" + localCount("applied") +
            ", unchanged=" + localCount("unchanged") + ", preserved=" +
            localCount("preserved") + ", conflicts=" + localCount("conflict") +
            ", disabled=" + localCount("disabled") + ", stale_removed=" +
            staleLocalsRemoved);
        println("Apply report: " + reportPath.toAbsolutePath().normalize());
        println("Local apply report: " +
            localReportPath.toAbsolutePath().normalize());
    }

    /**
     * Resolve HighSymbols after committing their element structures.  A
     * structure update may legitimately make the decompiler rename piVar10 to
     * puVar6; the analyzer's rendered name is therefore only a locator for this
     * fresh HighFunction, not a persistent identity.
     *
     * Direct HighFunction references are intentionally avoided here.  Ghidra
     * 12's script bundle loader has historically failed to expose that class to
     * standalone scripts even though DecompileResults owns the instance.
     */
    private List<PreparedLocal> prepareLocals(
            List<Map<String, String>> rows) throws Exception {
        List<PreparedLocal> result = new ArrayList<>();
        Map<String, List<Map<String, String>>> byFunction = new LinkedHashMap<>();
        for (Map<String, String> row : rows) {
            if (!enabled(row.get("apply"))) {
                localReport.add(localReport(row, "disabled", "apply=0"));
                continue;
            }
            byFunction.computeIfAbsent(unt(row.get("function_address")),
                ignored -> new ArrayList<>()).add(row);
        }
        if (byFunction.isEmpty()) return result;

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException("Decompiler could not open current program");
        try {
            for (Map.Entry<String, List<Map<String, String>>> entry :
                    byFunction.entrySet()) {
                monitor.checkCancelled();
                Function function = function(entry.getKey());
                if (function == null) {
                    for (Map<String, String> row : entry.getValue())
                        localReport.add(localReport(row, "conflict",
                            "function is missing"));
                    continue;
                }
                DecompileResults decompiled =
                    decompiler.decompileFunction(function, 600, monitor);
                if (!decompiled.decompileCompleted()) {
                    for (Map<String, String> row : entry.getValue())
                        localReport.add(localReport(row, "conflict",
                            "decompile failed: " + text(decompiled.getErrorMessage())));
                    continue;
                }
                Object highFunction = decompiled.getClass()
                    .getMethod("getHighFunction").invoke(decompiled);
                if (highFunction == null) {
                    for (Map<String, String> row : entry.getValue())
                        localReport.add(localReport(row, "conflict",
                            "decompiler returned no HighFunction"));
                    continue;
                }
                Object localMap = highFunction.getClass()
                    .getMethod("getLocalSymbolMap").invoke(highFunction);
                @SuppressWarnings("unchecked")
                Iterator<Object> symbols = (Iterator<Object>)localMap.getClass()
                    .getMethod("getSymbols").invoke(localMap);
                Map<String, List<Object>> byName = new LinkedHashMap<>();
                Set<Long> dynamicHashes = new HashSet<>();
                while (symbols.hasNext()) {
                    Object symbol = symbols.next();
                    Object highVariable = symbol.getClass()
                        .getMethod("getHighVariable").invoke(symbol);
                    Long dynamicHash =
                        highVariable == null ? null : dynamicHash(symbol);
                    if (dynamicHash != null) dynamicHashes.add(dynamicHash);
                    if ((boolean)symbol.getClass().getMethod("isParameter")
                            .invoke(symbol) ||
                            (boolean)symbol.getClass().getMethod("isGlobal")
                                .invoke(symbol))
                        continue;
                    String name = (String)symbol.getClass().getMethod("getName")
                        .invoke(symbol);
                    byName.computeIfAbsent(name, ignored -> new ArrayList<>())
                        .add(symbol);
                }
                activeDynamicHashes.put(entry.getKey(), dynamicHashes);
                for (Map<String, String> row : entry.getValue()) {
                    if (enabled(row.get("split_required"))) {
                        try {
                            result.add(new PreparedLocal(row,
                                splitDArrayLifetime(decompiled, highFunction,
                                    unt(row.get("rendered_alias")),
                                    unt(row.get("assignment_address")))));
                        }
                        catch (Exception exception) {
                            localReport.add(localReport(row, "conflict",
                                "merge-group split failed: " + message(exception)));
                        }
                        continue;
                    }
                    String assignmentAddress =
                        unt(row.get("assignment_address"));
                    if (!assignmentAddress.isBlank()) {
                        try {
                            Object varnode = darrayAssignmentVarnode(
                                decompiled, unt(row.get("rendered_alias")),
                                assignmentAddress);
                            Object high = varnode.getClass()
                                .getMethod("getHigh").invoke(varnode);
                            Object symbol = high == null ? null : high.getClass()
                                .getMethod("getSymbol").invoke(high);
                            if (symbol == null)
                                throw new IllegalStateException(
                                    "DArray assignment has no HighSymbol");
                            result.add(new PreparedLocal(row, symbol));
                        }
                        catch (Exception exception) {
                            localReport.add(localReport(row, "conflict",
                                "assignment-site lookup failed: " +
                                    message(exception)));
                        }
                        continue;
                    }
                    List<Object> matches =
                        byName.getOrDefault(unt(row.get("rendered_alias")), List.of());
                    if (matches.size() != 1) {
                        localReport.add(localReport(row, "conflict",
                            matches.isEmpty() ? "rendered HighSymbol is missing" :
                                "rendered HighSymbol is ambiguous"));
                        continue;
                    }
                    result.add(new PreparedLocal(row, matches.get(0)));
                }
            }
        }
        finally {
            decompiler.dispose();
        }
        return result;
    }

    /**
     * Split only the forced merge group produced by the exact DArray-address
     * assignment.  The same printed local name may be reused later for unrelated
     * pointers, so typing its whole HighVariable would corrupt valid code.
     */
    private Object splitDArrayLifetime(DecompileResults decompiled,
            Object highFunction, String alias, String assignmentAddress)
            throws Exception {
        Object varnode =
            darrayAssignmentVarnode(decompiled, alias, assignmentAddress);
        Object high = varnode.getClass().getMethod("getHigh").invoke(varnode);
        if (high == null)
            throw new IllegalStateException("DArray assignment has no HighVariable");
        java.lang.reflect.Method split = null;
        for (java.lang.reflect.Method method : highFunction.getClass().getMethods()) {
            if (method.getName().equals("splitOutMergeGroup") &&
                    method.getParameterCount() == 2) {
                split = method;
                break;
            }
        }
        if (split == null)
            throw new IllegalStateException("HighFunction split API is unavailable");
        Object separated;
        try {
            separated = split.invoke(highFunction, high, varnode);
        }
        catch (InvocationTargetException exception) {
            Throwable cause = exception.getCause();
            throw new IllegalStateException(cause == null ?
                exception.getMessage() : cause.getMessage(), cause);
        }
        if (separated == high)
            throw new IllegalStateException(
                "mixed rendered local belongs to one inseparable merge group");
        Object symbol = separated.getClass().getMethod("getSymbol")
            .invoke(separated);
        if (symbol == null)
            throw new IllegalStateException("split HighVariable has no HighSymbol");
        return symbol;
    }

    private Object darrayAssignmentVarnode(DecompileResults decompiled,
            String alias, String assignmentAddress) throws Exception {
        Object markup = decompiled.getClass().getMethod("getCCodeMarkup")
            .invoke(decompiled);
        @SuppressWarnings("unchecked")
        Iterator<Object> iterator = (Iterator<Object>)markup.getClass()
            .getMethod("tokenIterator", boolean.class).invoke(markup, true);
        List<Object> tokens = new ArrayList<>();
        List<String> text = new ArrayList<>();
        while (iterator.hasNext()) {
            Object token = iterator.next();
            tokens.add(token);
            text.add((String)token.getClass().getMethod("getText").invoke(token));
        }

        List<Object> allVarnodes = new ArrayList<>();
        List<Object> selectedVarnodes = new ArrayList<>();
        for (int index = 0; index < tokens.size(); index++) {
            String renderedAlias = text.get(index);
            if (!renderedAlias.matches("[A-Za-z_$][A-Za-z0-9_$]*")) continue;
            int equals = nextNonBlank(text, index + 1);
            if (equals < 0 || !"=".equals(text.get(equals))) continue;
            StringBuilder statement = new StringBuilder(renderedAlias).append('=');
            int end = equals + 1;
            for (; end < tokens.size() && end < equals + 800; end++) {
                String item = text.get(end);
                statement.append(item);
                if (";".equals(item)) break;
            }
            String rendered = statement.toString();
            if (!rendered.contains("elementSize") || !rendered.contains("data"))
                continue;
            Object varnode = tokens.get(index).getClass()
                .getMethod("getVarnode").invoke(tokens.get(index));
            if (varnode == null) continue;
            if (!containsIdentity(allVarnodes, varnode))
                allVarnodes.add(varnode);
            String site = tokenAddress(tokens.get(index));
            boolean stableSite = !assignmentAddress.isBlank() &&
                assignmentAddress.equalsIgnoreCase(site);
            boolean legacyAlias = assignmentAddress.isBlank() &&
                alias.equals(renderedAlias);
            if ((stableSite || legacyAlias) &&
                    !containsIdentity(selectedVarnodes, varnode))
                selectedVarnodes.add(varnode);
        }
        // Backward compatibility for one old proposal file: if its rendered
        // alias changed but the function has exactly one DArray assignment,
        // that assignment is still unambiguous.  Newly generated TSVs always
        // carry assignment_address and do not use this fallback.
        if (selectedVarnodes.isEmpty() && assignmentAddress.isBlank() &&
                allVarnodes.size() == 1)
            selectedVarnodes.add(allVarnodes.get(0));
        if (selectedVarnodes.size() != 1)
            throw new IllegalStateException(allVarnodes.isEmpty() ?
                "no exact DArray assignment token" :
                selectedVarnodes.isEmpty() ?
                    "DArray assignment site/alias no longer matches proposal" :
                    "multiple DArray assignment varnodes");
        return selectedVarnodes.get(0);
    }

    private int nextNonBlank(List<String> tokens, int start) {
        for (int index = start; index < tokens.size(); index++)
            if (!tokens.get(index).isBlank()) return index;
        return -1;
    }

    private boolean containsIdentity(List<Object> values, Object candidate) {
        for (Object value : values)
            if (value == candidate) return true;
        return false;
    }

    private String tokenAddress(Object token) {
        try {
            Object op = token.getClass().getMethod("getPcodeOp").invoke(token);
            if (op != null) {
                Object sequence = op.getClass().getMethod("getSeqnum").invoke(op);
                Address result = (Address)sequence.getClass()
                    .getMethod("getTarget").invoke(sequence);
                if (result != null) return addr(result);
            }
        }
        catch (Exception ignored) {
            // Fall through to the defining varnode/token address.
        }
        try {
            Object varnode = token.getClass().getMethod("getVarnode").invoke(token);
            if (varnode != null) {
                Address result = (Address)varnode.getClass()
                    .getMethod("getPCAddress").invoke(varnode);
                if (result != null) return addr(result);
            }
        }
        catch (Exception ignored) {
            // Fall through to the markup address.
        }
        try {
            Address result = (Address)token.getClass()
                .getMethod("getMinAddress").invoke(token);
            return result == null ? "" : addr(result);
        }
        catch (Exception ignored) {
            return "";
        }
    }

    private void applyLocal(PreparedLocal prepared) {
        Map<String, String> row = prepared.row;
        try {
            if (!verifiedElementPaths.contains(unt(row.get("element_type_path")))) {
                localReport.add(localReport(row, "preserved",
                    "owning element proposal was not safely applied"));
                return;
            }
            Object highSymbol = prepared.highSymbol;
            DataType current = (DataType)highSymbol.getClass()
                .getMethod("getDataType").invoke(highSymbol);
            Structure element = structure(unt(row.get("element_type_path")));
            if (element == null)
                throw new IllegalArgumentException("element type is missing");
            DataType proposed = new PointerDataType(element,
                currentProgram.getDefaultPointerSize(), dataTypes);
            Variable databaseVariable = functionVariable(highSymbol);
            if (databaseVariable != null &&
                    (databaseVariable.getSource() == SourceType.USER_DEFINED ||
                     databaseVariable.getSource() == SourceType.IMPORTED) &&
                    !proposed.isEquivalent(databaseVariable.getDataType())) {
                localReport.add(localReport(row, "preserved",
                    "manual/imported local type"));
                return;
            }
            if (proposed.isEquivalent(current) ||
                    (databaseVariable != null &&
                        proposed.isEquivalent(databaseVariable.getDataType()))) {
                if (databaseVariable == null ||
                        (databaseVariable.getSource() != SourceType.USER_DEFINED &&
                         databaseVariable.getSource() != SourceType.IMPORTED))
                    markLocal(databaseVariable, row);
                localReport.add(localReport(row, "unchanged",
                    "element-pointer type already applied"));
                return;
            }
            String currentType = typeSpecification(current);
            String expected = unt(row.get("expected_alias_type"));
            if (!currentType.equals(expected) && !replaceableLocalPointer(current)) {
                localReport.add(localReport(row, "preserved",
                    "stale/concrete HighSymbol type: " + currentType +
                        " != " + expected));
                return;
            }
            ClassLoader loader = highSymbol.getClass().getClassLoader();
            Class<?> utility = Class.forName(
                "ghidra.program.model.pcode.HighFunctionDBUtil", true, loader);
            java.lang.reflect.Method update = null;
            for (java.lang.reflect.Method method : utility.getMethods()) {
                if (method.getName().equals("updateDBVariable") &&
                        method.getParameterCount() == 4) {
                    update = method;
                    break;
                }
            }
            if (update == null)
                throw new IllegalStateException("HighFunctionDBUtil API is unavailable");
            try {
                update.invoke(null, highSymbol, null, proposed, SourceType.ANALYSIS);
            }
            catch (InvocationTargetException exception) {
                Throwable cause = exception.getCause();
                throw new IllegalStateException(cause == null ?
                    exception.getMessage() : cause.getMessage(), cause);
            }
            databaseVariable = functionVariable(highSymbol);
            if (databaseVariable == null ||
                    !proposed.isEquivalent(databaseVariable.getDataType()))
                throw new IllegalStateException(
                    "local type did not persist after updateDBVariable");
            markLocal(databaseVariable, row);
            localReport.add(localReport(row, "pending",
                currentType + " -> " + typeSpecification(proposed)));
            appliedLocals.add(new AppliedLocal(prepared, databaseVariable,
                proposed, currentType + " -> " + typeSpecification(proposed)));
        }
        catch (Exception exception) {
            localReport.add(localReport(row, "conflict", message(exception)));
        }
    }

    private Variable functionVariable(Object highSymbol) throws Exception {
        Object highFunction = highSymbol.getClass()
            .getMethod("getHighFunction").invoke(highSymbol);
        Function function = (Function)highFunction.getClass()
            .getMethod("getFunction").invoke(highFunction);
        VariableStorage storage = (VariableStorage)highSymbol.getClass()
            .getMethod("getStorage").invoke(highSymbol);
        Address pcAddress = (Address)highSymbol.getClass()
            .getMethod("getPCAddress").invoke(highSymbol);
        Object highVariable = highSymbol.getClass()
            .getMethod("getHighVariable").invoke(highSymbol);
        if (highVariable != null && !storage.isHashStorage() &&
                (boolean)highVariable.getClass()
                    .getMethod("requiresDynamicStorage").invoke(highVariable)) {
            Object representative = highVariable.getClass()
                .getMethod("getRepresentative").invoke(highVariable);
            Object entry = buildDynamicEntry(representative);
            storage = (VariableStorage)entry.getClass()
                .getMethod("getStorage").invoke(entry);
            pcAddress = (Address)entry.getClass()
                .getMethod("getPCAdress").invoke(entry);
        }
        if (storage.isHashStorage()) {
            long hash = storage.getFirstVarnode().getOffset();
            for (Variable variable : function.getLocalVariables())
                if (variable.isUniqueVariable() &&
                        variable.getFirstStorageVarnode().getOffset() == hash)
                    return variable;
            return null;
        }
        int firstUse = 0;
        if (pcAddress != null) {
            try {
                firstUse = (int)pcAddress.subtract(function.getEntryPoint());
            }
            catch (Exception ignored) {
                firstUse = 0;
            }
        }
        for (Variable variable : function.getLocalVariables()) {
            if (variable.getFirstUseOffset() == firstUse &&
                    variable.getVariableStorage().equals(storage))
                return variable;
        }
        return null;
    }

    private Object buildDynamicEntry(Object varnode) throws Exception {
        ClassLoader loader = varnode.getClass().getClassLoader();
        Class<?> entryClass = Class.forName(
            "ghidra.program.model.pcode.DynamicEntry", true, loader);
        for (java.lang.reflect.Method method : entryClass.getMethods()) {
            if (method.getName().equals("build") &&
                    method.getParameterCount() == 1)
                return method.invoke(null, varnode);
        }
        throw new IllegalStateException("DynamicEntry.build API is unavailable");
    }

    private Long dynamicHash(Object highSymbol) {
        try {
            Object entry = highSymbol.getClass()
                .getMethod("getFirstWholeMap").invoke(highSymbol);
            if (entry == null ||
                    !entry.getClass().getName().endsWith(".DynamicEntry"))
                return null;
            return ((Number)entry.getClass().getMethod("getHash")
                .invoke(entry)).longValue();
        }
        catch (Exception ignored) {
            return null;
        }
    }

    /**
     * Remove obsolete locals installed by this applier.  Older versions only
     * cleaned hash/unique-storage variables.  A register local could therefore
     * survive after the decompiler split or merged its SSA lifetime and leak an
     * element-record type into a later, unrelated use of the same register.
     *
     * The comment marker proves script ownership; USER_DEFINED/IMPORTED locals
     * remain protected.  Active database variables are resolved from the fresh
     * HighSymbols prepared above and compared by Symbol id (or exact storage +
     * first-use fallback), so a still-valid register local is retained.
     */
    private void cleanupStaleElementLocals(List<PreparedLocal> prepared) {
        Map<Function, List<Variable>> active = new LinkedHashMap<>();
        for (PreparedLocal local : prepared) {
            Function function =
                function(unt(local.row.get("function_address")));
            if (function == null) continue;
            try {
                Variable variable = functionVariable(local.highSymbol);
                if (variable != null)
                    active.computeIfAbsent(function,
                        ignored -> new ArrayList<>()).add(variable);
            }
            catch (Exception ignored) {
                // applyLocal will report the unresolved HighSymbol precisely.
            }
        }

        FunctionIterator functions =
            currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            List<Variable> current =
                active.getOrDefault(function, List.of());
            Set<Long> activeHashes = activeDynamicHashes.getOrDefault(
                addr(function.getEntryPoint()), Set.of());
            for (Variable variable : function.getLocalVariables()) {
                String comment = text(variable.getComment());
                boolean marked =
                    comment.contains(MARKER + " DArray element local;");
                boolean obsoleteHash =
                    activeDynamicHashes.containsKey(
                        addr(function.getEntryPoint())) &&
                    variable.isUniqueVariable() &&
                    !activeHashes.contains(
                        variable.getFirstStorageVarnode().getOffset());
                if ((!marked && !obsoleteHash) ||
                        variable.getSource() == SourceType.USER_DEFINED ||
                        variable.getSource() == SourceType.IMPORTED ||
                        (!marked && !isGeneratedElementPointer(variable.getDataType())))
                    continue;
                boolean retained = false;
                for (Variable candidate : current) {
                    if (sameVariable(candidate, variable)) {
                        retained = true;
                        break;
                    }
                }
                if (!retained) {
                    function.removeVariable(variable);
                    staleLocalsRemoved++;
                }
            }
        }
    }

    private boolean isGeneratedElementPointer(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed != null && pointed.getPathName().contains(
            "/SubmarineTitans/Recovered/DArrayElements/");
    }

    /**
     * The database accepting updateDBVariable is not sufficient proof: a
     * dynamic hash may still fail to attach when the function is decompiled
     * again.  Verify the exact DB Symbol against a brand-new HighFunction and
     * downgrade any false success to a conflict.
     */
    private void verifyAppliedLocals() throws Exception {
        if (appliedLocals.isEmpty()) return;
        Map<String, List<AppliedLocal>> byFunction = new LinkedHashMap<>();
        for (AppliedLocal local : appliedLocals)
            byFunction.computeIfAbsent(
                unt(local.prepared.row.get("function_address")),
                ignored -> new ArrayList<>()).add(local);

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram))
            throw new IllegalStateException(
                "Decompiler could not reopen current program for local verification");
        try {
            for (Map.Entry<String, List<AppliedLocal>> entry :
                    byFunction.entrySet()) {
                monitor.checkCancelled();
                Function function = function(entry.getKey());
                DecompileResults decompiled = function == null ? null :
                    decompiler.decompileFunction(function, 600, monitor);
                if (decompiled == null || !decompiled.decompileCompleted()) {
                    String detail = decompiled == null ? "function is missing" :
                        "fresh decompile failed: " +
                            text(decompiled.getErrorMessage());
                    for (AppliedLocal local : entry.getValue())
                        rejectAppliedLocal(local, detail);
                    continue;
                }
                Object highFunction = decompiled.getClass()
                    .getMethod("getHighFunction").invoke(decompiled);
                Object localMap = highFunction.getClass()
                    .getMethod("getLocalSymbolMap").invoke(highFunction);
                @SuppressWarnings("unchecked")
                Iterator<Object> symbols = (Iterator<Object>)localMap.getClass()
                    .getMethod("getSymbols").invoke(localMap);
                List<Object> freshSymbols = new ArrayList<>();
                while (symbols.hasNext()) freshSymbols.add(symbols.next());
                for (AppliedLocal local : entry.getValue()) {
                    Object attached = attachedSymbol(
                        freshSymbols, local.databaseVariable);
                    if (attached == null) {
                        rejectAppliedLocal(local,
                            "database local did not attach to fresh HighFunction");
                        continue;
                    }
                    Object freshHigh = attached.getClass()
                        .getMethod("getHighVariable").invoke(attached);
                    String assignmentAddress =
                        unt(local.prepared.row.get("assignment_address"));
                    if (!assignmentAddress.isBlank() &&
                            !highContainsAddress(freshHigh, assignmentAddress)) {
                        rejectAppliedLocal(local,
                            "database local attached to a different lifetime; " +
                                "fresh HighVariable does not contain anchor " +
                                assignmentAddress);
                        continue;
                    }
                    int groupCount =
                        freshHigh == null ? 0 : mergeGroups(freshHigh).size();
                    if (enabled(local.prepared.row.get("split_required")) &&
                            groupCount != 1) {
                        rejectAppliedLocal(local,
                            "fresh HighVariable still contains " + groupCount +
                                " merge groups after an exact split");
                        continue;
                    }
                    DataType freshType = (DataType)attached.getClass()
                        .getMethod("getDataType").invoke(attached);
                    if (!equivalentType(local.proposed, freshType)) {
                        rejectAppliedLocal(local,
                            "fresh HighVariable type is " +
                                typeSpecification(freshType) + ", expected " +
                                typeSpecification(local.proposed));
                        continue;
                    }
                    String freshName = (String)attached.getClass()
                        .getMethod("getName").invoke(attached);
                    replaceLocalReport(local.prepared.row, "applied",
                        local.changeDetail + "; fresh HighFunction attached as " +
                            freshName);
                    markOwnerUpdated(local.prepared.row,
                        "typed decompiler local " + freshName);
                }
            }
        }
        finally {
            decompiler.dispose();
        }
        cleanupRejectedLocals();
    }

    /**
     * A database local is valid only if it reattaches to the exact machine
     * lifetime which justified the proposal. Optimized code can reuse the same
     * physical register for several unrelated source variables.
     */
    private boolean highContainsAddress(Object high, String expected) {
        if (high == null || expected.isBlank()) return false;
        try {
            Object[] instances = (Object[])high.getClass()
                .getMethod("getInstances").invoke(high);
            for (Object varnode : instances) {
                Address pc = (Address)varnode.getClass()
                    .getMethod("getPCAddress").invoke(varnode);
                if (pc != null && addr(pc).equalsIgnoreCase(expected))
                    return true;
                Object definition = varnode.getClass()
                    .getMethod("getDef").invoke(varnode);
                if (pcodeAddressEquals(definition, expected)) return true;
                @SuppressWarnings("unchecked")
                Iterator<Object> descendants =
                    (Iterator<Object>)varnode.getClass()
                        .getMethod("getDescendants").invoke(varnode);
                while (descendants.hasNext())
                    if (pcodeAddressEquals(descendants.next(), expected))
                        return true;
            }
        }
        catch (Exception ignored) {
            return false;
        }
        return false;
    }

    private boolean pcodeAddressEquals(Object op, String expected) {
        if (op == null) return false;
        try {
            Object sequence = op.getClass().getMethod("getSeqnum").invoke(op);
            Address address = (Address)sequence.getClass()
                .getMethod("getTarget").invoke(sequence);
            return address != null && addr(address).equalsIgnoreCase(expected);
        }
        catch (Exception ignored) {
            return false;
        }
    }

    private Set<Integer> mergeGroups(Object high) throws Exception {
        Set<Integer> result = new HashSet<>();
        Object[] instances = (Object[])high.getClass()
            .getMethod("getInstances").invoke(high);
        for (Object varnode : instances)
            result.add(((Number)varnode.getClass()
                .getMethod("getMergeGroup").invoke(varnode)).intValue());
        return result;
    }

    private Object attachedSymbol(List<Object> symbols, Variable variable) {
        for (Object symbol : symbols) {
            try {
                if ((boolean)symbol.getClass().getMethod("isParameter")
                        .invoke(symbol) ||
                        (boolean)symbol.getClass().getMethod("isGlobal")
                            .invoke(symbol))
                    continue;
                Object highVariable = symbol.getClass()
                    .getMethod("getHighVariable").invoke(symbol);
                if (highVariable == null) continue;
                Variable candidate = functionVariable(symbol);
                if (sameVariable(candidate, variable)) return symbol;
            }
            catch (Exception ignored) {
                // One malformed decompiler symbol must not hide another match.
            }
        }
        return null;
    }

    private boolean sameVariable(Variable left, Variable right) {
        if (left == null || right == null) return false;
        Symbol leftSymbol = left.getSymbol();
        Symbol rightSymbol = right.getSymbol();
        if (leftSymbol != null && rightSymbol != null)
            return leftSymbol.getID() == rightSymbol.getID();
        return left.getFirstUseOffset() == right.getFirstUseOffset() &&
            left.getVariableStorage().equals(right.getVariableStorage());
    }

    private void rejectAppliedLocal(AppliedLocal local, String detail) {
        replaceLocalReport(local.prepared.row, "conflict",
            local.changeDetail + "; verification failed: " + detail);
        if (local.databaseVariable.getSource() != SourceType.USER_DEFINED &&
                local.databaseVariable.getSource() != SourceType.IMPORTED &&
                isGeneratedElementPointer(local.databaseVariable.getDataType()))
            rejectedLocals.add(local.databaseVariable);
    }

    private void cleanupRejectedLocals() {
        if (rejectedLocals.isEmpty()) return;
        int transaction = currentProgram.startTransaction(
            "Remove unattached DArray element locals");
        boolean commit = false;
        try {
            for (Variable variable : rejectedLocals) {
                Function function = variable.getFunction();
                if (function != null && variable.isValid())
                    function.removeVariable(variable);
            }
            commit = true;
        }
        finally {
            currentProgram.endTransaction(transaction, commit);
        }
        currentProgram.flushEvents();
    }

    private void replaceLocalReport(Map<String, String> row,
            String status, String detail) {
        LocalReportRow replacement = localReport(row, status, detail);
        for (int index = localReport.size() - 1; index >= 0; index--) {
            LocalReportRow current = localReport.get(index);
            if (current.functionAddress.equals(replacement.functionAddress) &&
                    current.owner.equals(replacement.owner) &&
                    current.fieldOffset == replacement.fieldOffset &&
                    current.renderedAlias.equals(replacement.renderedAlias)) {
                localReport.set(index, replacement);
                return;
            }
        }
        localReport.add(replacement);
    }

    private void markLocal(Variable variable, Map<String, String> row) {
        if (variable == null) return;
        String marker = MARKER + " DArray element local; owner=" +
            unt(row.get("owner")) + "; field_offset=" +
            row.get("field_offset") + "; element=" +
            unt(row.get("element_type_path"));
        String old = text(variable.getComment());
        if (!old.contains(marker))
            variable.setComment(old.isBlank() ? marker : old + "\n" + marker);
    }

    private void markOwnerUpdated(Map<String, String> local, String detail) {
        String owner = unt(local.get("owner"));
        long offset = number(local.get("field_offset"));
        for (int index = 0; index < report.size(); index++) {
            ReportRow row = report.get(index);
            if (!row.owner.equals(owner) || row.offset != offset) continue;
            String status = row.status.equals("unchanged") ? "updated" : row.status;
            report.set(index, new ReportRow(row.owner, row.offset, status,
                row.detail + "; " + detail));
            return;
        }
    }

    private boolean replaceableLocalPointer(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return false;
        DataType pointed = untypedef(pointer.getDataType());
        return pointed == null || pointed instanceof Undefined ||
            pointed.getPathName().matches(
                "/(?:void|byte|char|u?short|u?int|u?long|undefined(?:[1248])?)");
    }

    private Function function(String text) {
        try {
            Address address = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(Long.parseUnsignedLong(text, 16));
            return currentProgram.getFunctionManager().getFunctionAt(address);
        }
        catch (Exception ignored) { return null; }
    }

    private String addr(Address address) {
        return address == null ? "" :
            address.toString().toUpperCase(Locale.ROOT);
    }

    private void apply(Map<String, String> row,
            List<Map<String, String>> fieldRows) {
        String owner = unt(row.get("owner"));
        long offset = number(row.get("field_offset"));
        if (!enabled(row.get("apply"))) {
            report.add(new ReportRow(owner, offset, "disabled", "apply=0"));
            return;
        }
        try {
            String ownerPath = unt(row.get("owner_type_path"));
            String elementPath = unt(row.get("element_type_path"));
            String descriptorPath = unt(row.get("descriptor_type_path"));
            int elementSize = positive(row.get("element_size"), "element size");
            Structure ownerType = structure(ownerPath);
            if (ownerType == null)
                throw new IllegalArgumentException("missing owner " + ownerPath);
            Safety ownerSafety = safety(ownerType, CLASS_MARKER);
            if (!ownerSafety.safe) {
                report.add(new ReportRow(owner, offset, "preserved",
                    ownerSafety.reason));
                return;
            }
            DataTypeComponent ownerField = ownerType.getComponentAt((int)offset);
            if (ownerField == null || ownerField.getOffset() != offset ||
                    ownerField.getLength() != currentProgram.getDefaultPointerSize())
                throw new IllegalArgumentException("missing exact owner field");
            String currentFieldType = typeSpecification(ownerField.getDataType());
            String expectedFieldType = unt(row.get("expected_field_type"));
            String proposedFieldType = "pointer:" + descriptorPath;
            if (!currentFieldType.equals(expectedFieldType) &&
                    !currentFieldType.equals(proposedFieldType))
                throw new IllegalArgumentException("stale owner field baseline: " +
                    currentFieldType + " != " + expectedFieldType);
            if (!darrayCompatible(ownerField.getDataType()))
                throw new IllegalArgumentException("owner field is not DArray-compatible");

            Change element = installElement(elementPath, elementSize, fieldRows);
            if (!element.safe) {
                report.add(new ReportRow(owner, offset, "preserved", element.detail));
                return;
            }
            String verifiedFields =
                verifyElement(elementPath, elementSize, fieldRows);
            Structure elementType = structure(elementPath);
            Change descriptor = installDescriptor(descriptorPath, elementType);
            if (!descriptor.safe) {
                report.add(new ReportRow(owner, offset, "preserved",
                    descriptor.detail));
                return;
            }
            verifiedElementPaths.add(elementPath);
            DataType pointer = new PointerDataType(structure(descriptorPath),
                currentProgram.getDefaultPointerSize(), dataTypes);
            boolean ownerChanged =
                !pointer.isEquivalent(ownerField.getDataType());
            if (ownerChanged) {
                ownerType.replaceAtOffset((int)offset, pointer, pointer.getLength(),
                    ownerField.getFieldName(), ownerField.getComment());
                refreshHash(ownerType);
            }
            String status = ownerChanged ? "applied" :
                element.changed || descriptor.changed ? "updated" : "unchanged";
            report.add(new ReportRow(owner, offset, status,
                "element=" + element.detail + "; descriptor=" +
                descriptor.detail + "; verified=" + verifiedFields +
                (ownerChanged ?
                    "; owner field specialized" : "; owner field already specialized")));
        }
        catch (Exception exception) {
            report.add(new ReportRow(owner, offset, "conflict", message(exception)));
        }
    }

    private Change installElement(String path, int length,
            List<Map<String, String>> rows) {
        try {
            Structure existing = structure(path);
            Safety safety = safety(existing, MARKER);
            if (!safety.safe) return new Change(false, false, safety.reason);
            StructureDataType desired = new StructureDataType(
                category(path), leaf(path), length, dataTypes);
            long previousEnd = -1;
            List<Map<String, String>> selected = rows.stream()
                .filter(row -> enabled(row.get("apply")))
                .sorted(Comparator.comparingLong(row -> number(row.get("offset"))))
                .toList();
            for (Map<String, String> row : selected) {
                int offset = (int)number(row.get("offset"));
                int size = positive(row.get("size"), "field size");
                if (offset < previousEnd || offset < 0 || offset + size > length)
                    throw new IllegalArgumentException(
                        "overlapping/out-of-range element field " + offset);
                DataType type = resolveType(unt(row.get("proposed_type")), size);
                desired.replaceAtOffset(offset, type, size,
                    unt(row.get("proposed_name")), MARKER + " evidence_count=" +
                    row.get("evidence_count") + "; " + unt(row.get("reason")));
                previousEnd = (long)offset + size;
            }
            if (existing != null)
                retainProvenGeneratedFields(existing, desired);
            String hash = layoutHash(desired);
            desired.setDescription(MARKER + " Generated DArray element record" +
                HASH_MARKER + hash);
            if (existing == null) {
                DataType installed = dataTypes.resolve(desired,
                    DataTypeConflictHandler.KEEP_HANDLER);
                if (!(installed instanceof Structure structure) ||
                        !structure.getPathName().equals(path))
                    throw new IllegalStateException("could not create " + path);
                structure.setDescription(desired.getDescription());
                return new Change(true, true, "created " + path);
            }
            if (layoutHash(existing).equals(hash)) {
                if (!text(existing.getDescription()).equals(desired.getDescription()))
                    existing.setDescription(desired.getDescription());
                return new Change(true, false, "unchanged " + path);
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            return new Change(true, true, "updated " + path);
        }
        catch (Exception exception) {
            return new Change(false, false, message(exception));
        }
    }

    /**
     * Decompiler output can alternate after applying a field: one pass exposes
     * the raw access, while the next renders only the installed member. Keep the
     * union of components which were independently selected on at least one pass.
     * This is mutation state, not analyzer evidence: it cannot make a weak
     * container eligible, and manual/hash-diverged structures never reach here.
     */
    private void retainProvenGeneratedFields(Structure existing,
            Structure desired) {
        for (DataTypeComponent old : existing.getDefinedComponents()) {
            if (old.getOffset() < 0 ||
                    old.getOffset() + old.getLength() > desired.getLength())
                continue;
            DataTypeComponent exact = exactDefinedComponent(desired,
                old.getOffset());
            if (exact != null && exact.getLength() == old.getLength()) {
                int oldStrength = generatedTypeStrength(old.getDataType());
                int newStrength = generatedTypeStrength(exact.getDataType());
                boolean currentNameUpgrade =
                    semanticFieldName(exact.getFieldName()) &&
                    !semanticFieldName(old.getFieldName());
                boolean keepOldType = oldStrength >= newStrength &&
                    !equivalentType(old.getDataType(), exact.getDataType());
                boolean keepOldPresentation =
                    equivalentType(old.getDataType(), exact.getDataType()) &&
                    !currentNameUpgrade;
                if (keepOldType || keepOldPresentation)
                    desired.replaceAtOffset(old.getOffset(), old.getDataType(),
                        old.getLength(), old.getFieldName(), old.getComment());
                continue;
            }
            if (!overlapsDefinedComponent(desired, old.getOffset(),
                    old.getLength()))
                desired.replaceAtOffset(old.getOffset(), old.getDataType(),
                    old.getLength(), old.getFieldName(), old.getComment());
        }
    }

    private DataTypeComponent exactDefinedComponent(Structure structure,
            int offset) {
        for (DataTypeComponent component : structure.getDefinedComponents())
            if (component.getOffset() == offset) return component;
        return null;
    }

    private boolean overlapsDefinedComponent(Structure structure, int offset,
            int length) {
        int end = offset + length;
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            int otherStart = component.getOffset();
            int otherEnd = otherStart + component.getLength();
            if (offset < otherEnd && otherStart < end) return true;
        }
        return false;
    }

    private boolean semanticFieldName(String name) {
        return name != null && !name.isBlank() &&
            !name.matches("(?:field|value)_(?:0[xX])?[0-9A-Fa-f]+");
    }

    private int generatedTypeStrength(DataType type) {
        type = untypedef(type);
        if (type == null || type instanceof Undefined) return 0;
        if (type instanceof Pointer pointer) {
            DataType pointed = untypedef(pointer.getDataType());
            if (pointed == null || pointed instanceof Undefined ||
                    Set.of("/void", "/byte", "/char").contains(
                        pointed.getPathName())) return 1;
            return 3;
        }
        String path = type.getPathName();
        if (path.matches("/(?:bool|byte|char|u?short|u?int|u?long|float|double|" +
                "dword|word|qword)")) return 1;
        return 2;
    }

    private Change installDescriptor(String path, Structure element) {
        try {
            if (element == null)
                throw new IllegalArgumentException("element type is missing");
            Structure base = structure(DARRAY_PATH);
            if (base == null)
                throw new IllegalArgumentException("missing " + DARRAY_PATH);
            Structure existing = structure(path);
            Safety safety = safety(existing, MARKER);
            if (!safety.safe) return new Change(false, false, safety.reason);
            StructureDataType desired = new StructureDataType(
                category(path), leaf(path), base.getLength(), dataTypes);
            for (DataTypeComponent component : base.getDefinedComponents()) {
                DataType type = component.getDataType();
                if (component.getOffset() == 0x1c)
                    type = new PointerDataType(element,
                        currentProgram.getDefaultPointerSize(), dataTypes);
                desired.replaceAtOffset(component.getOffset(), type,
                    component.getLength(), component.getFieldName(),
                    component.getComment());
            }
            String hash = layoutHash(desired);
            desired.setDescription(MARKER +
                " Generated DArray descriptor specialization; element=" +
                element.getPathName() + HASH_MARKER + hash);
            if (existing == null) {
                DataType installed = dataTypes.resolve(desired,
                    DataTypeConflictHandler.KEEP_HANDLER);
                if (!(installed instanceof Structure structure) ||
                        !structure.getPathName().equals(path))
                    throw new IllegalStateException("could not create " + path);
                structure.setDescription(desired.getDescription());
                return new Change(true, true, "created " + path);
            }
            if (layoutHash(existing).equals(hash)) {
                if (!text(existing.getDescription()).equals(desired.getDescription()))
                    existing.setDescription(desired.getDescription());
                return new Change(true, false, "unchanged " + path);
            }
            existing.replaceWith(desired);
            existing.setDescription(desired.getDescription());
            return new Change(true, true, "updated " + path);
        }
        catch (Exception exception) {
            return new Change(false, false, message(exception));
        }
    }

    private String verifyElement(String path, int length,
            List<Map<String, String>> rows) {
        Structure structure = structure(path);
        if (structure == null || structure.getLength() != length)
            throw new IllegalStateException("installed element did not persist: " + path);
        int verified = 0;
        List<String> members = new ArrayList<>();
        for (Map<String, String> row : rows.stream()
                .filter(value -> enabled(value.get("apply")))
                .sorted(Comparator.comparingLong(value ->
                    number(value.get("offset")))).toList()) {
            int offset = (int)number(row.get("offset"));
            int size = positive(row.get("size"), "field size");
            DataTypeComponent component = structure.getComponentAt(offset);
            String expectedName = unt(row.get("proposed_name"));
            String expectedType = unt(row.get("proposed_type"));
            String actualName = component == null ? "" :
                text(component.getFieldName());
            String actualType = component == null ? "" :
                typeSpecification(component.getDataType());
            boolean compatibleName = expectedName.equals(actualName) ||
                strongerRetainedFieldName(expectedName, actualName);
            boolean compatibleType = expectedType.equals(actualType) ||
                strongerRetainedFieldType(expectedType,
                    component == null ? null : component.getDataType(), size);
            if (component == null || component.getOffset() != offset ||
                    component.getLength() != size ||
                    !compatibleName ||
                    !compatibleType)
                throw new IllegalStateException("installed element verification failed " +
                    path + "+" + String.format("0x%X", offset) + ": expected " +
                    expectedName + " " + expectedType + ", found " +
                    (component == null ? "<missing>" :
                        text(component.getFieldName()) + " " +
                            actualType));
            members.add(String.format("0x%X=%s", offset, actualName));
            verified++;
        }
        return verified + " fields [" + String.join(", ", members) + "]";
    }

    private boolean strongerRetainedFieldName(String proposed, String installed) {
        if (installed == null || installed.isBlank() ||
                proposed == null || proposed.isBlank()) return false;
        if (!semanticFieldName(installed) && semanticFieldName(proposed)) return false;
        if (proposed.matches("(?:field|value)_(?:0[xX])?[0-9A-Fa-f]+"))
            return semanticFieldName(installed);
        // Analyzer passes may first discover a role-qualified offset name and
        // later retain the stronger stable role already installed by this script.
        int suffix = proposed.lastIndexOf('_');
        return suffix > 0 && proposed.substring(suffix + 1)
            .matches("(?:0[xX])?[0-9A-Fa-f]+") &&
            installed.equals(proposed.substring(0, suffix));
    }

    /**
     * retainProvenGeneratedFields() deliberately keeps a stronger exact-width
     * component discovered by an earlier analyzer pass. Verification must
     * honor that contract: a later generic undefinedN observation confirms the
     * storage span and cannot demand erasure of the retained concrete view.
     */
    private boolean strongerRetainedFieldType(String proposed, DataType installed,
            int width) {
        if (installed == null || installed.getLength() != width) return false;
        Matcher generic = Pattern.compile("/undefined(?<width>[1248])")
            .matcher(proposed == null ? "" : proposed);
        return generic.matches() && Integer.parseInt(generic.group("width")) == width &&
            !(untypedef(installed) instanceof Undefined);
    }

    private boolean darrayCompatible(DataType type) {
        Structure pointed = pointedStructure(type);
        if (pointed == null) return false;
        if (pointed.getPathName().equals(DARRAY_PATH)) return true;
        return pointed.getPathName().contains("/DArraySpecializations/") &&
            safety(pointed, MARKER).safe;
    }

    private Safety safety(Structure structure, String marker) {
        if (structure == null) return new Safety(true, "new script-owned type");
        String description = structure.getDescription();
        if (description == null || !description.contains(marker))
            return new Safety(false, "manual/unowned structure");
        String stored = storedHash(description);
        if (stored == null)
            return new Safety(false, "generated structure lacks safety hash");
        if (!stored.equals(layoutHash(structure)))
            return new Safety(false, "manual changes detected; structure preserved");
        return new Safety(true, "unchanged script-owned structure");
    }

    private void refreshHash(Structure structure) {
        String description = structure.getDescription();
        if (description == null || !description.contains(CLASS_MARKER))
            throw new IllegalArgumentException("owner is not class-layout-owned");
        int marker = description.indexOf(HASH_MARKER);
        if (marker < 0)
            throw new IllegalArgumentException("owner lacks generated hash");
        int valueStart = marker + HASH_MARKER.length();
        if (description.length() < valueStart + 64)
            throw new IllegalArgumentException("owner hash is malformed");
        String updated = description.substring(0, valueStart) +
            layoutHash(structure) + description.substring(valueStart + 64);
        structure.setDescription(updated);
    }

    private DataType resolveType(String specification, int size) {
        if (specification.startsWith("pointer:")) {
            String path = specification.substring("pointer:".length());
            DataType pointed = dataTypes.getDataType(path);
            if (pointed == null)
                throw new IllegalArgumentException("missing pointed type " + path);
            return new PointerDataType(pointed,
                currentProgram.getDefaultPointerSize(), dataTypes);
        }
        if (specification.startsWith("/undefined"))
            return Undefined.getUndefinedDataType(size);
        DataType type = dataTypes.getDataType(specification);
        if (type == null)
            throw new IllegalArgumentException("missing type " + specification);
        if (type.getLength() > 0 && type.getLength() != size)
            throw new IllegalArgumentException("type length mismatch " + specification);
        return type;
    }

    private Structure structure(String path) {
        DataType type = dataTypes.getDataType(path);
        return type instanceof Structure structure ? structure : null;
    }

    private Structure pointedStructure(DataType type) {
        type = untypedef(type);
        if (!(type instanceof Pointer pointer)) return null;
        type = untypedef(pointer.getDataType());
        return type instanceof Structure structure ? structure : null;
    }

    private DataType untypedef(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    private String typeSpecification(DataType type) {
        type = untypedef(type);
        if (type instanceof Pointer pointer && pointer.getDataType() != null)
            return "pointer:" + typeSpecification(pointer.getDataType());
        return type == null ? "" : type.getPathName();
    }

    private boolean equivalentType(DataType left, DataType right) {
        if (left == null || right == null) return left == right;
        return left.isEquivalent(right) ||
            typeSpecification(left).equals(typeSpecification(right));
    }

    private String layoutHash(Structure structure) {
        StringBuilder value = new StringBuilder();
        value.append("length=").append(structure.getLength()).append('\n');
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            value.append(component.getOffset()).append('|').append(component.getLength())
                .append('|').append(component.getDataType().getPathName()).append('|')
                .append(component.getFieldName() == null ? "" : component.getFieldName())
                .append('|').append(component.getComment() == null ? "" :
                    component.getComment()).append('\n');
        }
        return sha256(value.toString());
    }

    private String storedHash(String description) {
        if (description == null) return null;
        int index = description.indexOf(HASH_MARKER);
        if (index < 0) return null;
        String value = description.substring(index + HASH_MARKER.length()).trim();
        if (value.length() < 64) return null;
        value = value.substring(0, 64);
        return value.matches("[0-9a-fA-F]{64}") ?
            value.toLowerCase(Locale.ROOT) : null;
    }

    private String sha256(String value) {
        try {
            byte[] digest = MessageDigest.getInstance("SHA-256")
                .digest(value.getBytes(StandardCharsets.UTF_8));
            StringBuilder result = new StringBuilder();
            for (byte item : digest)
                result.append(String.format("%02x", item & 0xff));
            return result.toString();
        }
        catch (Exception exception) {
            throw new IllegalStateException(exception);
        }
    }

    private String mode() {
        String[] args = getScriptArgs();
        return args.length > 1 && !args[1].isBlank() ?
            args[1].trim().toLowerCase(Locale.ROOT) : "all";
    }

    private File inputFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        return askFile("Select darray_element_proposals.tsv or its directory", "Select");
    }

    private Tsv readTsv(Path path) throws Exception {
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        if (lines.isEmpty()) throw new IllegalArgumentException("Empty TSV " + path);
        List<String> header = List.of(lines.get(0).split("\\t", -1));
        List<Map<String, String>> rows = new ArrayList<>();
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            String[] values = lines.get(line).split("\\t", -1);
            if (values.length != header.size())
                throw new IllegalArgumentException("Invalid TSV row " + (line + 1));
            Map<String, String> row = new LinkedHashMap<>();
            for (int index = 0; index < header.size(); index++)
                row.put(header.get(index), values[index]);
            rows.add(row);
        }
        return new Tsv(header, rows);
    }

    private void requireColumns(Tsv tsv, String... columns) {
        for (String column : columns)
            if (!tsv.header.contains(column))
                throw new IllegalArgumentException("Missing TSV column: " + column);
    }

    private void writeReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("owner\tfield_offset\tstatus\tdetail\n");
            for (ReportRow row : report)
                out.write(tsv(row.owner) + "\t" + row.offset + "\t" +
                    row.status + "\t" + tsv(row.detail) + "\n");
        }
    }

    private void writeLocalReport(Path path) throws Exception {
        try (BufferedWriter out = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
            out.write("function_address\towner\tfield_offset\trendered_alias\t" +
                "status\tdetail\n");
            for (LocalReportRow row : localReport)
                out.write(row.functionAddress + "\t" + tsv(row.owner) + "\t" +
                    row.fieldOffset + "\t" + tsv(row.renderedAlias) + "\t" +
                    row.status + "\t" + tsv(row.detail) + "\n");
        }
    }

    private LocalReportRow localReport(Map<String, String> row,
            String status, String detail) {
        return new LocalReportRow(unt(row.get("function_address")),
            unt(row.get("owner")), number(row.get("field_offset")),
            unt(row.get("rendered_alias")), status, detail);
    }

    private long count(String status) {
        return report.stream().filter(row -> row.status.equals(status)).count();
    }
    private long localCount(String status) {
        return localReport.stream().filter(row -> row.status.equals(status)).count();
    }
    private static boolean enabled(String value) {
        return "1".equals(value) || "true".equalsIgnoreCase(value);
    }
    private static String unt(String value) {
        if (value == null) return "";
        return value.replace("\\t", "\t").replace("\\r", "\r")
            .replace("\\n", "\n").replace("\\\\", "\\");
    }
    private static String text(String value) { return value == null ? "" : value; }
    private static String tsv(String value) {
        if (value == null) return "";
        return value.replace("\\", "\\\\").replace("\t", "\\t")
            .replace("\r", "\\r").replace("\n", "\\n");
    }
    private static long number(String value) {
        try { return Long.decode(value); }
        catch (NumberFormatException exception) {
            throw new IllegalArgumentException("Invalid number: " + value);
        }
    }
    private static int positive(String value, String label) {
        int result;
        try { result = Integer.parseInt(value); }
        catch (NumberFormatException exception) {
            throw new IllegalArgumentException("Invalid " + label + ": " + value);
        }
        if (result < 1) throw new IllegalArgumentException("Invalid " + label);
        return result;
    }
    private static CategoryPath category(String path) {
        int separator = path.lastIndexOf('/');
        return new CategoryPath(separator <= 0 ? "/" : path.substring(0, separator));
    }
    private static String leaf(String path) {
        return path.substring(path.lastIndexOf('/') + 1);
    }
    private static String message(Exception exception) {
        return exception.getMessage() == null ?
            exception.getClass().getSimpleName() : exception.getMessage();
    }

    private record Tsv(List<String> header, List<Map<String, String>> rows) {}
    private record Safety(boolean safe, String reason) {}
    private record Change(boolean safe, boolean changed, String detail) {}
    private record ReportRow(String owner, long offset, String status, String detail) {}
    private record PreparedLocal(Map<String, String> row, Object highSymbol) {}
    private record AppliedLocal(PreparedLocal prepared,
        Variable databaseVariable, DataType proposed, String changeDetail) {}
    private record LocalReportRow(String functionAddress, String owner,
        long fieldOffset, String renderedAlias, String status, String detail) {}
}
