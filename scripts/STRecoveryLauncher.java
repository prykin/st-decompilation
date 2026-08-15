// Compile and launch STRecoveryPipeline while retaining bootstrap compiler diagnostics.
// @author OpenAI
// @category SubmarineTitans.Recovery
// @menupath Tools.Submarine Titans.Run Recovery Pipeline

import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.Writer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.nio.file.StandardOpenOption;
import java.security.MessageDigest;

import ghidra.app.script.GhidraScript;

public class STRecoveryLauncher extends GhidraScript {
    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            printerr("Open the ST program before running the recovery pipeline.");
            return;
        }
        Path repository = inferredRepository();
        Path programRecovery = repository.resolve("recovery")
            .resolve(currentProgram.getName());
        Files.createDirectories(programRecovery);
        Path bootstrap = programRecovery.resolve("pipeline_bootstrap.log");
        Path stagedBootstrap = bootstrap.resolveSibling(
            bootstrap.getFileName() + ".tmp");
        Path pipelineSource = repository.resolve("scripts/STRecoveryPipeline.java");

        PrintWriter previousWriter = writer;
        PrintWriter previousErrorWriter = errorWriter;
        BufferedWriter file = Files.newBufferedWriter(stagedBootstrap,
            StandardCharsets.UTF_8, StandardOpenOption.CREATE,
            StandardOpenOption.TRUNCATE_EXISTING);
        Object logLock = new Object();
        PrintWriter captured = new PrintWriter(
            new TeeWriter(previousWriter, file, logLock), true);
        PrintWriter capturedError = new PrintWriter(
            new TeeWriter(previousErrorWriter, file, logLock), true);
        writer = captured;
        errorWriter = capturedError;
        Throwable failure = null;
        try {
            println("ST recovery launcher");
            println("Ghidra version: " + getGhidraVersion());
            println("Repository: " + repository);
            println("Pipeline source: " + pipelineSource);
            println("Pipeline source SHA-256: " + sha256(pipelineSource));
            println("Bootstrap log: " + bootstrap);
            // Do not hold the launcher's implicit transaction around the pipeline. The child
            // owns and audits all of its script transactions.
            end(true);
            runScript("STRecoveryPipeline.java", getScriptArgs());
            Path latest = programRecovery.resolve("latest_run.txt");
            if (Files.isRegularFile(latest))
                println("Latest archived run: " +
                    Files.readString(latest, StandardCharsets.UTF_8).trim());
            println("ST recovery launcher completed.");
        }
        catch (Throwable problem) {
            failure = problem;
            printerr("ST recovery launcher failed: " + message(problem));
            problem.printStackTrace(errorWriter);
        }
        finally {
            captured.flush();
            capturedError.flush();
            writer = previousWriter;
            errorWriter = previousErrorWriter;
            file.close();
        }
        if (failure == null) promote(stagedBootstrap, bootstrap);
        else {
            printerr("Incomplete bootstrap log retained at ignored staging path: " +
                stagedBootstrap);
            rethrow(failure);
        }
    }

    private Path inferredRepository() {
        File source = new File(getSourceFile().getAbsolutePath()).getAbsoluteFile();
        File scripts = source.getParentFile();
        if (scripts == null || scripts.getParentFile() == null)
            throw new IllegalStateException(
                "Cannot infer repository from launcher path " + source);
        return scripts.getParentFile().toPath().toAbsolutePath().normalize();
    }

    private String sha256(Path path) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        try (InputStream input = Files.newInputStream(path)) {
            byte[] buffer = new byte[65536];
            int count;
            while ((count = input.read(buffer)) >= 0)
                if (count > 0) digest.update(buffer, 0, count);
        }
        StringBuilder result = new StringBuilder();
        for (byte value : digest.digest())
            result.append(String.format("%02x", value & 0xff));
        return result.toString();
    }

    private void promote(Path staged, Path target) throws Exception {
        try {
            Files.move(staged, target, StandardCopyOption.REPLACE_EXISTING,
                StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(staged, target, StandardCopyOption.REPLACE_EXISTING);
        }
    }

    private static String message(Throwable throwable) {
        String value = throwable.getMessage();
        return value == null || value.isBlank() ?
            throwable.getClass().getSimpleName() : value;
    }

    private static void rethrow(Throwable failure) throws Exception {
        if (failure instanceof Exception exception) throw exception;
        if (failure instanceof Error error) throw error;
        throw new RuntimeException(failure);
    }

    private static final class TeeWriter extends Writer {
        private final Writer console;
        private final Writer log;
        private final Object logLock;

        TeeWriter(Writer console, Writer log, Object logLock) {
            this.console = console;
            this.log = log;
            this.logLock = logLock;
        }

        @Override
        public void write(char[] buffer, int offset, int length) throws IOException {
            if (console != null) console.write(buffer, offset, length);
            synchronized (logLock) {
                log.write(buffer, offset, length);
            }
        }

        @Override
        public void flush() throws IOException {
            if (console != null) console.flush();
            synchronized (logLock) {
                log.flush();
            }
        }

        @Override
        public void close() throws IOException {
            flush();
        }
    }
}
