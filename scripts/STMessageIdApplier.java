// Apply reviewed message_id_proposals.tsv to /SubmarineTitans/Recovered/STMessageId.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Apply Message IDs

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.EnumDataType;

public class STMessageIdApplier extends GhidraScript {
    private static final CategoryPath CATEGORY = new CategoryPath("/SubmarineTitans/Recovered");

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) { printerr("Open the analyzed ST program first."); return; }
        File file = proposalFile();
        if (file == null) return;
        List<String> lines = Files.readAllLines(file.toPath(), StandardCharsets.UTF_8);
        if (lines.isEmpty() || !lines.get(0).startsWith("apply\tname\tvalue_hex\t"))
            throw new IllegalArgumentException("Not an STMessageIdAnalyzer proposals file");

        int tx = currentProgram.startTransaction("Apply recovered message IDs");
        boolean commit = false;
        int applied = 0, same = 0, skipped = 0, conflicts = 0;
        try {
            DataType existingType = currentProgram.getDataTypeManager().getDataType(CATEGORY, "STMessageId");
            Enum enumType;
            if (existingType instanceof Enum) enumType = (Enum)existingType;
            else enumType = (Enum)currentProgram.getDataTypeManager().resolve(
                new EnumDataType(CATEGORY, "STMessageId", 4), DataTypeConflictHandler.REPLACE_HANDLER);

            Map<String, Long> byName = new HashMap<>();
            Map<Long, String> byValue = new HashMap<>();
            for (String name : enumType.getNames()) {
                long value = enumType.getValue(name); byName.put(name, value); byValue.put(value, name);
            }
            for (int i = 1; i < lines.size(); i++) {
                monitor.checkCancelled();
                if (lines.get(i).isBlank()) continue;
                String[] c = lines.get(i).split("\t", -1);
                if (c.length < 9 || !"1".equals(c[0])) { skipped++; continue; }
                String name = c[1];
                long value = Long.decode(c[2]);
                if (byName.containsKey(name)) {
                    if (byName.get(name) == value) same++;
                    else { printerr(name + " already has " + byName.get(name) + ", proposed " + value); conflicts++; }
                    continue;
                }
                if (byValue.containsKey(value)) {
                    printerr(c[2] + " already belongs to " + byValue.get(value) + ", proposed " + name);
                    conflicts++; continue;
                }
                enumType.add(name, value);
                byName.put(name, value); byValue.put(value, name); applied++;
            }
            commit = true;
        }
        finally { currentProgram.endTransaction(tx, commit); }
        println("Message IDs applied: " + applied + ", already present: " + same +
            ", skipped: " + skipped + ", conflicts: " + conflicts);
    }

    private File proposalFile() throws Exception {
        String[] args = getScriptArgs();
        if (args.length > 0 && !args[0].isBlank()) return new File(args[0]);
        if (isRunningHeadless()) throw new IllegalArgumentException("Path to message_id_proposals.tsv required");
        return askFile("Select reviewed message_id_proposals.tsv", "Apply");
    }
}
