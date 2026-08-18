// Create a portable packed snapshot of the current saved Ghidra Program.
// Usage: STPackedSnapshot.java <output-directory> <semantic-sha256-file>
//        [allow-missing-packed-header-time]
// @author OpenAI
// @category SubmarineTitans.Maintenance
// @menupath Tools.Submarine Titans.Create Packed Snapshot

import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import java.util.regex.Pattern;
import java.util.zip.CRC32;
import java.util.zip.Deflater;
import java.util.zip.DeflaterOutputStream;
import java.util.zip.Inflater;

import ghidra.app.script.GhidraScript;
import ghidra.framework.model.DomainFile;

public class STPackedSnapshot extends GhidraScript {
    private static final Pattern SHA256 = Pattern.compile("[0-9a-f]{64}");
    private static final byte[] ZIP_LOCAL_HEADER = { 0x50, 0x4b, 0x03, 0x04 };
    private static final byte[] PACKED_ENTRY_NAME =
        "FOLDER_ITEM".getBytes(StandardCharsets.US_ASCII);
    private static final byte[] ZIP_DATA_DESCRIPTOR = { 0x50, 0x4b, 0x07, 0x08 };
    private static final byte[][] PRIVATE_PATH_ROOTS = {
        "/Users/".getBytes(StandardCharsets.US_ASCII),
        "/Volumes/".getBytes(StandardCharsets.US_ASCII)
    };
    private static final long OWNER_TIME_MINIMUM = 946684800000L; // 2000-01-01 UTC
    private static final long OWNER_TIME_MAXIMUM = 4102444800000L; // 2100-01-01 UTC
    private static final int MAX_OWNER_LENGTH = 64;
    private static final byte[] PACKED_TIME_PREFIX = {
        (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff,
        (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, 0x00
    };
    private static final byte[] PACKED_TIME_SUFFIX = {
        0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04,
        0x00, 0x00, 0x00, 0x07,
        (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff,
        (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff
    };
    private static final byte[] LEGACY_PACKED_TIME_SUFFIX = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04,
        0x00, 0x00, 0x00, 0x07,
        (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff,
        (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff
    };

    @Override
    protected void run() throws Exception {
        if (currentProgram == null)
            throw new IllegalStateException("Open the analyzed program first");
        String[] args = getScriptArgs();
        if (args.length < 2 || args.length > 3)
            throw new IllegalArgumentException(
                "Usage: <output-directory> <semantic-sha256-file> " +
                "[allow-missing-packed-header-time]");
        boolean allowMissingPackedHeaderTime = args.length == 3;
        if (allowMissingPackedHeaderTime &&
            !"allow-missing-packed-header-time".equals(args[2]))
            throw new IllegalArgumentException("Unsupported packed snapshot option");

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
        PackedNormalization normalization = normalizePackedFile(
            temporary, allowMissingPackedHeaderTime);
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
            "packed_normalization\tzip-dos-time-1980-01-01+private-metadata-v5\n" +
            "packed_file\t" + clean(packedName) + "\n";
        Files.writeString(metadataTemporary, body, StandardCharsets.UTF_8);
        moveReplacing(metadataTemporary, metadata);

        println("Packed snapshot created: " + packed);
        println("Program semantic SHA-256: " + semantic);
        println("Packed file SHA-256: " + packedSha256);
        println("Packed size: " + packedSize);
        println("Private path values redacted: " + normalization.pathCount);
        println("Database owner records normalized: " + normalization.ownerCount);
        println("Database revision times normalized: " + normalization.revisionTimeCount);
        println("Packed header times normalized: " + normalization.headerTimeCount);
    }

    /**
     * ItemSerializer writes one raw-DEFLATE ZIP entry inside the GZF stream.
     * Normalize its wall-clock ZIP timestamp and redact two kinds of non-semantic
     * workstation metadata from the decompressed database payload: absolute
     * macOS host paths and structurally identified database owner names.  Every
     * replacement has the original byte length, and the ZIP descriptor is then
     * rebuilt with the new compressed size and CRC.  The caller independently
     * reimports the result and verifies the semantic Program fingerprint.
     *
     * Fail closed if a future Ghidra release changes this envelope.  In
     * particular, never fall back to publishing the unsanitized packFile output.
     */
    private PackedNormalization normalizePackedFile(Path path,
            boolean allowMissingPackedHeaderTime) throws Exception {
        byte[] packed = Files.readAllBytes(path);
        int header = find(packed, ZIP_LOCAL_HEADER);
        if (header < 0 || header + 30 + PACKED_ENTRY_NAME.length > packed.length)
            throw new IllegalStateException("Unsupported GZF envelope: no ZIP local header");
        int flags = littleEndianUnsignedShort(packed, header + 6);
        int method = littleEndianUnsignedShort(packed, header + 8);
        if ((flags & 0x0008) == 0 || method != 8)
            throw new IllegalStateException(
                "Unsupported GZF ZIP flags/method: flags=" + flags + ", method=" + method);
        int nameLength = littleEndianUnsignedShort(packed, header + 26);
        int extraLength = littleEndianUnsignedShort(packed, header + 28);
        if (nameLength != PACKED_ENTRY_NAME.length || extraLength != 0)
            throw new IllegalStateException(
                "Unsupported GZF ZIP header geometry: name=" + nameLength +
                ", extra=" + extraLength);
        for (int index = 0; index < PACKED_ENTRY_NAME.length; index++) {
            if (packed[header + 30 + index] != PACKED_ENTRY_NAME[index])
                throw new IllegalStateException("Unsupported GZF packed entry name");
        }

        int dataStart = header + 30 + nameLength + extraLength;
        int secondHeader = find(packed, ZIP_LOCAL_HEADER, header + 1);
        if (secondHeader >= 0 && secondHeader < dataStart)
            throw new IllegalStateException("Unsupported GZF envelope: multiple ZIP headers");
        Inflater inflater = new Inflater(true);
        inflater.setInput(packed, dataStart, packed.length - dataStart);
        ByteArrayOutputStream uncompressedOutput = new ByteArrayOutputStream();
        byte[] buffer = new byte[1024 * 1024];
        long compressedLengthLong;
        try {
            while (!inflater.finished()) {
                monitor.checkCancelled();
                int count = inflater.inflate(buffer);
                if (count > 0) {
                    uncompressedOutput.write(buffer, 0, count);
                    continue;
                }
                if (inflater.needsDictionary() || inflater.needsInput())
                    throw new IllegalStateException("Truncated GZF DEFLATE payload");
                throw new IllegalStateException("GZF DEFLATE decoder made no progress");
            }
            compressedLengthLong = inflater.getBytesRead();
        }
        finally {
            inflater.end();
        }
        if (compressedLengthLong > Integer.MAX_VALUE)
            throw new IllegalStateException("GZF compressed payload is too large");
        int compressedLength = (int)compressedLengthLong;
        int descriptor = dataStart + compressedLength;
        if (descriptor + 16 > packed.length ||
            !matches(packed, descriptor, ZIP_DATA_DESCRIPTOR))
            throw new IllegalStateException("Unsupported GZF ZIP data descriptor");

        byte[] uncompressed = uncompressedOutput.toByteArray();
        long storedCrc = littleEndianUnsignedInt(packed, descriptor + 4);
        long storedCompressedSize = littleEndianUnsignedInt(packed, descriptor + 8);
        long storedUncompressedSize = littleEndianUnsignedInt(packed, descriptor + 12);
        CRC32 originalCrc = new CRC32();
        originalCrc.update(uncompressed);
        if (storedCrc != originalCrc.getValue() ||
            storedCompressedSize != compressedLength ||
            storedUncompressedSize != uncompressed.length)
            throw new IllegalStateException("GZF ZIP data descriptor does not match its entry");

        int pathCount = redactPrivatePaths(uncompressed);
        int revisionTimeCount = normalizeDatabaseRevisionTimes(uncompressed);
        int ownerCount = redactDatabaseOwners(uncompressed);
        int headerTimeCount = normalizePackedHeaderTime(
            uncompressed, allowMissingPackedHeaderTime);
        assertPrivateMetadataAbsent(uncompressed);

        byte[] recompressed = deflate(uncompressed);
        CRC32 normalizedCrc = new CRC32();
        normalizedCrc.update(uncompressed);
        ByteArrayOutputStream normalized = new ByteArrayOutputStream(
            packed.length - compressedLength + recompressed.length);
        normalized.write(packed, 0, dataStart);
        normalized.write(recompressed);
        normalized.write(ZIP_DATA_DESCRIPTOR);
        writeLittleEndianInt(normalized, normalizedCrc.getValue());
        writeLittleEndianInt(normalized, recompressed.length);
        writeLittleEndianInt(normalized, uncompressed.length);
        normalized.write(packed, descriptor + 16, packed.length - descriptor - 16);
        byte[] result = normalized.toByteArray();
        // DOS time 00:00:00 and DOS date 1980-01-01, both little-endian.
        result[header + 10] = 0x00;
        result[header + 11] = 0x00;
        result[header + 12] = 0x21;
        result[header + 13] = 0x00;
        Files.write(path, result);
        return new PackedNormalization(
            pathCount, ownerCount, revisionTimeCount, headerTimeCount);
    }

    private int redactPrivatePaths(byte[] bytes) {
        int count = 0;
        for (byte[] root : PRIVATE_PATH_ROOTS) {
            int offset = 0;
            while ((offset = find(bytes, root, offset)) >= 0) {
                int end = offset + root.length;
                while (end < bytes.length && isPathByte(bytes[end])) end++;
                byte[] replacement = repeatedToken(end - offset, "/redacted/");
                System.arraycopy(replacement, 0, bytes, offset, replacement.length);
                count++;
                offset = end;
            }
        }
        return count;
    }

    private int redactDatabaseOwners(byte[] bytes) {
        Map<Integer, Set<String>> owners = selectDatabaseOwners(
            discoverDatabaseOwnerCandidates(bytes));
        if (owners.isEmpty())
            throw new IllegalStateException("No database owner identity found in GZF payload");
        int replacements = redactDatabaseOwners(bytes, owners, true);
        replacements += redactLengthPrefixedOwners(bytes, owners, true);
        replacements += redactCompressedDatabaseOwners(bytes, owners, true);
        int survivors = redactDatabaseOwners(bytes, owners, false);
        survivors += redactLengthPrefixedOwners(bytes, owners, false);
        survivors += redactCompressedDatabaseOwners(bytes, owners, false);
        if (survivors != 0)
            throw new IllegalStateException(
                "Database owner survived GZF normalization (count=" + survivors + ")");
        return replacements;
    }

    /**
     * Some older database pages prefix-compress an owner by storing a one-byte
     * shared-prefix marker followed by all but the first character.  The full
     * owner records elsewhere in the same payload remain the only source of the
     * identity; this method merely removes their exact structurally bound tails.
     */
    private int redactCompressedDatabaseOwners(byte[] bytes,
            Map<Integer, Set<String>> owners, boolean mutate) {
        int matches = 0;
        for (Map.Entry<Integer, Set<String>> byLength : owners.entrySet()) {
            int length = byLength.getKey();
            if (length < 4) continue;
            for (String value : byLength.getValue()) {
                byte[] suffix = value.substring(1).getBytes(StandardCharsets.US_ASCII);
                byte[] replacement = repeatedToken(suffix.length, "user");
                int offset = 5;
                while ((offset = find(bytes, suffix, offset)) >= 0) {
                    int timestamp = offset + suffix.length;
                    boolean exactRecord = bytes[offset - 1] == 0 &&
                        timestamp + 8 <= bytes.length &&
                        isPlausibleOwnerTime(bytes, timestamp);
                    if (exactRecord) {
                        matches++;
                        if (mutate) {
                            System.arraycopy(
                                replacement, 0, bytes, offset, replacement.length);
                            writeBigEndianLong(bytes, timestamp, OWNER_TIME_MINIMUM);
                        }
                    }
                    offset += suffix.length;
                }
            }
        }
        return matches;
    }

    /**
     * Ghidra database revision records carry adjacent creation/modification
     * milliseconds.  Equal adjacent plausible values are a structural time
     * field, unlike an arbitrary eight-byte Program value which happens to fall
     * in the same numeric range.  Normalize only that closed representation.
     */
    private int normalizeDatabaseRevisionTimes(byte[] bytes) {
        int matches = 0;
        for (int offset = 0; offset + 16 <= bytes.length; offset++) {
            if (!isPlausibleOwnerTime(bytes, offset)) continue;
            long value = bigEndianLong(bytes, offset);
            if (bigEndianLong(bytes, offset + 8) != value) continue;
            writeBigEndianLong(bytes, offset, OWNER_TIME_MINIMUM);
            writeBigEndianLong(bytes, offset + 8, OWNER_TIME_MINIMUM);
            matches++;
            offset += 15;
        }
        return matches;
    }

    private int redactLengthPrefixedOwners(byte[] bytes, Map<Integer, Set<String>> owners,
            boolean mutate) {
        int matches = 0;
        for (Map.Entry<Integer, Set<String>> byLength : owners.entrySet()) {
            int length = byLength.getKey();
            byte[] replacement = repeatedToken(length, "user");
            for (String value : byLength.getValue()) {
                byte[] source = value.getBytes(StandardCharsets.US_ASCII);
                if (Arrays.equals(source, replacement)) continue;
                int offset = 4;
                while ((offset = find(bytes, source, offset)) >= 0) {
                    if (bigEndianInt(bytes, offset - 4) == length) {
                        matches++;
                        if (mutate)
                            System.arraycopy(replacement, 0, bytes, offset, replacement.length);
                    }
                    offset += source.length;
                }
            }
        }
        return matches;
    }

    private int normalizePackedHeaderTime(byte[] bytes, boolean allowMissing) {
        int matches = 0;
        int offset = 0;
        while ((offset = find(bytes, PACKED_TIME_PREFIX, offset)) >= 0) {
            int timestamp = offset + PACKED_TIME_PREFIX.length;
            int suffix = timestamp + 8;
            boolean supportedSuffix = matches(bytes, suffix, PACKED_TIME_SUFFIX) ||
                matches(bytes, suffix, LEGACY_PACKED_TIME_SUFFIX);
            if (isPlausibleOwnerTime(bytes, timestamp) && supportedSuffix) {
                writeBigEndianLong(bytes, timestamp, OWNER_TIME_MINIMUM);
                matches++;
            }
            offset = timestamp;
        }
        if (matches > 1 || matches == 0 && !allowMissing)
            throw new IllegalStateException(
                "Unsupported GZF packed-header timestamp count: " + matches);
        return matches;
    }

    private int redactDatabaseOwners(byte[] bytes, Map<Integer, Set<String>> owners,
            boolean mutate) {
        int matches = 0;
        for (int timestamp = 0; timestamp + 8 <= bytes.length; timestamp++) {
            if (!hasPlausibleOwnerTimePrefix(bytes, timestamp) ||
                !isPlausibleOwnerTime(bytes, timestamp))
                continue;
            for (int length = MAX_OWNER_LENGTH; length >= 1; length--) {
                Set<String> values = owners.get(length);
                int text = timestamp - length;
                if (values == null || text < 0 || !isOwnerIdentifier(bytes, text, length))
                    continue;
                String value = new String(bytes, text, length, StandardCharsets.US_ASCII);
                if (!values.contains(value)) continue;
                byte[] replacement = repeatedToken(length, "user");
                boolean privateIdentity =
                    !Arrays.equals(Arrays.copyOfRange(bytes, text, timestamp), replacement);
                if (!mutate && privateIdentity) matches++;
                if (mutate) {
                    if (privateIdentity)
                        System.arraycopy(replacement, 0, bytes, text, replacement.length);
                    writeBigEndianLong(bytes, timestamp, OWNER_TIME_MINIMUM);
                    matches++;
                }
                if (privateIdentity && !mutate)
                    break;
                break;
            }
        }
        return matches;
    }

    private Map<Integer, Map<String, Integer>> discoverDatabaseOwnerCandidates(byte[] bytes) {
        Map<Integer, Map<String, Integer>> owners = new LinkedHashMap<>();
        for (int offset = 0; offset + 4 + 1 + 8 <= bytes.length; offset++) {
            int length = bigEndianInt(bytes, offset);
            addDatabaseOwner(bytes, offset + 4, length, owners);
        }
        return owners;
    }

    private void addDatabaseOwner(byte[] bytes, int text, int length,
            Map<Integer, Map<String, Integer>> owners) {
        if (length < 1 || length > MAX_OWNER_LENGTH || text + length + 8 > bytes.length ||
            !isOwnerIdentifier(bytes, text, length) ||
            !hasPlausibleOwnerTimePrefix(bytes, text + length) ||
            !isPlausibleOwnerTime(bytes, text + length))
            return;
        String value = new String(bytes, text, length, StandardCharsets.US_ASCII);
        owners.computeIfAbsent(length, ignored -> new LinkedHashMap<>()).merge(
            value, 1, Integer::sum);
    }

    private Map<Integer, Set<String>> selectDatabaseOwners(
            Map<Integer, Map<String, Integer>> candidates) {
        int total = 0;
        for (Map<String, Integer> values : candidates.values()) {
            for (int count : values.values()) total += count;
        }
        int dominanceThreshold = Math.max(16, total / 20);
        String runtimeOwner = System.getProperty("user.name", "");
        Map<Integer, Set<String>> owners = new LinkedHashMap<>();
        for (Map.Entry<Integer, Map<String, Integer>> byLength : candidates.entrySet()) {
            for (Map.Entry<String, Integer> candidate : byLength.getValue().entrySet()) {
                if (candidate.getValue() < dominanceThreshold &&
                    !candidate.getKey().equals(runtimeOwner))
                    continue;
                owners.computeIfAbsent(byLength.getKey(), ignored -> new LinkedHashSet<>()).add(
                    candidate.getKey());
            }
        }
        return owners;
    }

    private void assertPrivateMetadataAbsent(byte[] bytes) {
        for (byte[] root : PRIVATE_PATH_ROOTS) {
            if (find(bytes, root) >= 0)
                throw new IllegalStateException("Private host path survived GZF normalization");
        }
    }

    private byte[] deflate(byte[] bytes) throws Exception {
        ByteArrayOutputStream output = new ByteArrayOutputStream();
        Deflater deflater = new Deflater(Deflater.DEFAULT_COMPRESSION, true);
        try (DeflaterOutputStream stream = new DeflaterOutputStream(output, deflater, 1024 * 1024)) {
            stream.write(bytes);
        }
        finally {
            deflater.end();
        }
        return output.toByteArray();
    }

    private boolean isPathByte(byte value) {
        int unsigned = value & 0xff;
        return unsigned >= 0x20 && unsigned < 0x7f && value != '?';
    }

    private boolean isOwnerIdentifier(byte[] bytes, int offset, int length) {
        for (int index = 0; index < length; index++) {
            int value = bytes[offset + index] & 0xff;
            boolean accepted = value >= 'A' && value <= 'Z' ||
                value >= 'a' && value <= 'z' ||
                value >= '0' && value <= '9' ||
                value == '.' || value == '_' || value == '-';
            if (!accepted) return false;
        }
        return true;
    }

    private boolean isPlausibleOwnerTime(byte[] bytes, int offset) {
        long value = bigEndianLong(bytes, offset);
        return value >= OWNER_TIME_MINIMUM && value < OWNER_TIME_MAXIMUM;
    }

    private boolean hasPlausibleOwnerTimePrefix(byte[] bytes, int offset) {
        return offset + 8 <= bytes.length && bytes[offset] == 0 && bytes[offset + 1] == 0 &&
            (bytes[offset + 2] & 0xff) <= 3;
    }

    private byte[] repeatedToken(int length, String token) {
        byte[] seed = token.getBytes(StandardCharsets.US_ASCII);
        byte[] result = new byte[length];
        for (int index = 0; index < length; index++) result[index] = seed[index % seed.length];
        return result;
    }

    private long littleEndianUnsignedInt(byte[] bytes, int offset) {
        return ((long)bytes[offset] & 0xff) |
            (((long)bytes[offset + 1] & 0xff) << 8) |
            (((long)bytes[offset + 2] & 0xff) << 16) |
            (((long)bytes[offset + 3] & 0xff) << 24);
    }

    private int bigEndianInt(byte[] bytes, int offset) {
        return ((bytes[offset] & 0xff) << 24) |
            ((bytes[offset + 1] & 0xff) << 16) |
            ((bytes[offset + 2] & 0xff) << 8) |
            (bytes[offset + 3] & 0xff);
    }

    private long bigEndianLong(byte[] bytes, int offset) {
        long result = 0;
        for (int index = 0; index < 8; index++)
            result = (result << 8) | ((long)bytes[offset + index] & 0xff);
        return result;
    }

    private void writeBigEndianLong(byte[] bytes, int offset, long value) {
        for (int index = 7; index >= 0; index--) {
            bytes[offset + index] = (byte)(value & 0xff);
            value >>>= 8;
        }
    }

    private void writeLittleEndianInt(ByteArrayOutputStream output, long value) {
        output.write((int)(value & 0xff));
        output.write((int)((value >>> 8) & 0xff));
        output.write((int)((value >>> 16) & 0xff));
        output.write((int)((value >>> 24) & 0xff));
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

    private boolean matches(byte[] haystack, int offset, byte[] needle) {
        if (offset < 0 || offset + needle.length > haystack.length) return false;
        for (int index = 0; index < needle.length; index++) {
            if (haystack[offset + index] != needle[index]) return false;
        }
        return true;
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

    private static final class PackedNormalization {
        private final int pathCount;
        private final int ownerCount;
        private final int revisionTimeCount;
        private final int headerTimeCount;

        private PackedNormalization(int pathCount, int ownerCount,
                int revisionTimeCount, int headerTimeCount) {
            this.pathCount = pathCount;
            this.ownerCount = ownerCount;
            this.revisionTimeCount = revisionTimeCount;
            this.headerTimeCount = headerTimeCount;
        }
    }
}
