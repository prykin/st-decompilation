// Report the persisted/dirty state and a few known recovery canaries from the open Program.
// This script is read-only and is intended to distinguish a stale Decompiler view from a
// pipeline transaction which did not reach the current Ghidra Program.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Audit Project State

import java.time.Instant;

import ghidra.app.script.GhidraScript;
import ghidra.framework.model.DomainFile;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class STProjectStateAudit extends GhidraScript {
    private static final String[] CANARY_ADDRESSES = {
        "0041D2B0", // method-owner recovery
        "0058AF70", // STOctopusC owner propagation
        "006ACF0D"  // return-semantics propagation
    };

    @Override
    protected void run() throws Exception {
        // Read-only script: do not keep an implicit transaction open while reporting state.
        end(true);
        if (currentProgram == null) {
            printerr("Open the ST program first.");
            return;
        }

        DomainFile file = currentProgram.getDomainFile();
        println("Program name: " + currentProgram.getName());
        println("Program changed: " + currentProgram.isChanged());
        println("Program changeable: " + currentProgram.isChangeable());
        println("Program canSave: " + currentProgram.canSave());
        println("Program modification number: " + currentProgram.getModificationNumber());
        if (file == null) {
            println("DomainFile: <none>");
        }
        else {
            println("DomainFile path: " + file.getPathname());
            println("DomainFile changed: " + file.isChanged());
            println("DomainFile canSave: " + file.canSave());
            println("DomainFile readOnly: " + file.isReadOnly());
            println("DomainFile open: " + file.isOpen());
            println("DomainFile lastModified: " +
                Instant.ofEpochMilli(file.getLastModifiedTime()));
        }

        println("Recovery canaries:");
        for (String text : CANARY_ADDRESSES) {
            monitor.checkCancelled();
            Address address = toAddr(text);
            Function function = currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) {
                println("  " + text + " <no function>");
                continue;
            }
            println("  " + text + " " + function.getName(true) + " | " +
                function.getPrototypeString(true, true) + " | signatureSource=" +
                function.getSignatureSource());
        }
    }
}
