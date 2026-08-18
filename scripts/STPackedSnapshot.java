// Create a portable packed snapshot of the current saved Ghidra Program.
// Usage: STPackedSnapshot.java <output-directory> <semantic-sha256-file>
// @author OpenAI
// @category SubmarineTitans.Maintenance
// @menupath Tools.Submarine Titans.Create Packed Snapshot

import java.io.InputStream;
import java.io.RandomAccessFile;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.framework.model.DomainFile;

public class STPackedSnapshot extends GhidraScript {
    private static final Pattern SHA256 = Pattern.compile("[0-9a-f]{64}");
    private static final byte[] ZIP_LOCAL_HEADER = { 0x50, 0x4b, 0x03, 0x04 };
    private static final byte[] PACKED_ENTRY_NAME =
        "FOLDER_ITEM".getBytes(StandardCharsets.US_ASCII);

    @Override
    protected void run() throws Exception {
        if (currentProgram == null)
            throw new IllegalStateException("Open the analyzed program first");
        String[] args = getScriptArgs();
        if (args.length != 2)
            throw new IllegalArgumentException(
                "Usage: <output-directory> <semantic-sha256-file>");

        Path outputDirectory = Path.of(args[0]).toAbsolutePath().normalize();
        Path semanticPath = Path.of(args[1]).toAbsolutePath().normalize();
        String semantic = Files.readString(semanticPath, StandardCharsets.UTF_8).trim();
        if (!SHA256.matcher(semantic).matches())
            throw new IllegalStateException(
                "Invalid semantic SHA-256 in " + semanticPath);

        String programName = currentProgram.getName();
        if (programName.isBlank() || !Path.of(programName).getFileName().toString()
                .equals(programName))
            throw new IllegalStateException("Unsafe program name: " + programName);
        if (currentProgram.isChanged())
            throw new IllegalStateException(
                "Refusing to pack an unsaved in-memory Program");

        Files.createDirectories(outputDirectory);
        String packedName = programName + "." + semantic + ".gzf";
        Path packed = outputDirectory.resolve(packedName);
        Path temporary = outputDirectory.resolve("." + packedName + ".tmp");
        Files.deleteIfExists(temporary);

        DomainFile domainFile = currentProgram.getDomainFile();
        if (domainFile == null)
            throw new IllegalStateException("Current Program has no DomainFile");
        domainFile.packFile(temporary.toFile(), monitor);
        normalizePackedTimestamp(temporary);
        moveReplacing(temporary, packed);

        String packedSha256 = sha256(packed);
        long packedSize = Files.size(packed);
        Path metadata = outputDirectory.resolve(programName + ".snapshot.tsv");
        Path metadataTemporary = metadata.resolveSibling("." + metadata.getFileName() + ".tmp");
        String body = "schema_version\t1\n" +
            "program\t" + clean(programName) + "\n" +
            "semantic_sha256\t" + semantic + "\n" +
            "packed_sha256\t" + packedSha256 + "\n" +
            "packed_size\t" + packedSize + "\n" +
            "packed_normalization\tzip-dos-time-1980-01-01\n" +
            "packed_file\t" + clean(packedName) + "\n";
        Files.writeString(metadataTemporary, body, StandardCharsets.UTF_8);
        moveReplacing(metadataTemporary, metadata);

        println("Packed snapshot created: " + packed);
        println("Program semantic SHA-256: " + semantic);
        println("Packed file SHA-256: " + packedSha256);
        println("Packed size: " + packedSize);
    }

    /**
     * ItemSerializer writes one ZIP local header inside the GZF stream and lets
     * ZipOutputStream fill its DOS modification date/time from the wall clock.
     * Those four header bytes are not covered by the entry CRC and are the only
     * bytes which differ when the same saved DomainFile is packed repeatedly.
     * Pin them to the valid ZIP epoch so a semantic no-op produces one LFS object.
     * Fail closed if a future Ghidra release changes the packed-file envelope.
     */
    private void normalizePackedTimestamp(Path path) throws Exception {
        int scanLength = (int)Math.min(Files.size(path), 64 * 1024);
        byte[] prefix = new byte[scanLength];
        try (InputStream input = Files.newInputStream(path)) {
            int offset = 0;
            while (offset < prefix.length) {
                int read = input.read(prefix, offset, prefix.length - offset);
                if (read < 0) break;
                offset += read;
            }
        }
        int header = find(prefix, ZIP_LOCAL_HEADER);
        if (header < 0 || header + 30 + PACKED_ENTRY_NAME.length > prefix.length)
            throw new IllegalStateException("Unsupported GZF envelope: no ZIP local header");
        int nameLength = littleEndianUnsignedShort(prefix, header + 26);
        int extraLength = littleEndianUnsignedShort(prefix, header + 28);
        if (nameLength != PACKED_ENTRY_NAME.length || extraLength != 0)
            throw new IllegalStateException(
                "Unsupported GZF ZIP header geometry: name=" + nameLength +
                ", extra=" + extraLength);
        for (int index = 0; index < PACKED_ENTRY_NAME.length; index++) {
            if (prefix[header + 30 + index] != PACKED_ENTRY_NAME[index])
                throw new IllegalStateException("Unsupported GZF packed entry name");
        }
        if (find(prefix, ZIP_LOCAL_HEADER, header + 1) >= 0)
            throw new IllegalStateException("Unsupported GZF envelope: multiple ZIP headers");

        try (RandomAccessFile file = new RandomAccessFile(path.toFile(), "rw")) {
            file.seek(header + 10L);
            // DOS time 00:00:00 and DOS date 1980-01-01, both little-endian.
            file.write(new byte[] { 0x00, 0x00, 0x21, 0x00 });
        }
    }

    private int littleEndianUnsignedShort(byte[] bytes, int offset) {
        return (bytes[offset] & 0xff) | ((bytes[offset + 1] & 0xff) << 8);
    }

    private int find(byte[] haystack, byte[] needle) {
        return find(haystack, needle, 0);
    }

    private int find(byte[] haystack, byte[] needle, int start) {
        outer:
        for (int offset = start; offset <= haystack.length - needle.length; offset++) {
            for (int index = 0; index < needle.length; index++) {
                if (haystack[offset + index] != needle[index]) continue outer;
            }
            return offset;
        }
        return -1;
    }

    private void moveReplacing(Path source, Path destination) throws Exception {
        try {
            Files.move(source, destination, StandardCopyOption.REPLACE_EXISTING,
                StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(source, destination, StandardCopyOption.REPLACE_EXISTING);
        }
    }

    private String sha256(Path path) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        try (InputStream input = Files.newInputStream(path)) {
            byte[] buffer = new byte[1024 * 1024];
            int read;
            while ((read = input.read(buffer)) >= 0) {
                monitor.checkCancelled();
                if (read > 0) digest.update(buffer, 0, read);
            }
        }
        return hex(digest.digest());
    }

    private String hex(byte[] bytes) {
        StringBuilder out = new StringBuilder(bytes.length * 2);
        for (byte value : bytes) out.append(String.format("%02x", value & 0xff));
        return out.toString();
    }

    private String clean(String value) {
        return value.replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }
}
