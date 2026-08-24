// Export a Ghidra program as a compact, address-stable corpus for LLM-assisted decompilation.
// @author OpenAI
// @category SubmarineTitans.Export
// @keybinding
// @menupath Tools.Submarine Titans.Export LLM Corpus
// @toolbar

import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.security.MessageDigest;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Base64;
import java.util.Arrays;
import java.util.Collection;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.UUID;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Stream;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.ClangLine;
import ghidra.app.decompiler.ClangToken;
import ghidra.app.decompiler.ClangTokenGroup;
import ghidra.app.decompiler.PrettyPrinter;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.AbstractIntegerDataType;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Bookmark;
import ghidra.program.model.listing.BookmarkManager;
import ghidra.program.model.listing.CodeUnitIterator;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.ExternalLocation;
import ghidra.program.model.symbol.ExternalManager;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.StackReference;
import ghidra.program.util.DefinedStringIterator;

public class STDecompExport extends GhidraScript {
    private static final int DECOMPILE_TIMEOUT_SECONDS = 600;
    private static final int MAX_FILENAME_COMPONENT = 96;
    private static final int COVERAGE_PADDING_RUN = 16;
    private static final int COVERAGE_MAX_RANGE = 0x10000;
    private static final String FUNCTION_ANALYSIS_CACHE_SCHEMA = "2";
    private static final int FUNCTION_ANALYSIS_SCHEMA = 43;
    // Bump only when normalize/catalogue semantics change. Hashing this entire source file
    // made an unrelated manifest or I/O edit rescan all 5,000+ bodies.
    private static final String FUNCTION_ANALYSIS_LOGIC_ID =
        "st-function-analysis-v" + FUNCTION_ANALYSIS_SCHEMA +
            "-exact-stack-slot-origin";
    private static final Pattern NARROW_RETURN_PIECE_ASSIGNMENT = Pattern.compile(
        "(?<variable>[A-Za-z_$][A-Za-z0-9_$]*)\\._0_(?<width>[12])_\\s*=\\s*" +
        "(?<callee>[A-Za-z_$][A-Za-z0-9_$]*(?:::[A-Za-z_$][A-Za-z0-9_$]*)*)" +
        "\\s*\\(");
    private static final Pattern INT3_ASSIGNMENT = Pattern.compile(
        "^(\\s*)([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*\\(code \\*\\)swi\\(3\\);\\s*$");
    private static final Pattern ASSIGNED_INDIRECT_CALL = Pattern.compile(
        "^(\\s*)([A-Za-z_][A-Za-z0-9_]*)\\s*=\\s*" +
        "(?:\\([^()]+\\)\\s*)?\\(\\*([A-Za-z_][A-Za-z0-9_]*)\\)\\(\\);\\s*$");
    private static final Pattern PLAIN_INDIRECT_CALL = Pattern.compile(
        "^(\\s*)\\(\\*([A-Za-z_][A-Za-z0-9_]*)\\)\\(\\);\\s*$");
    private static final Pattern RENDERED_MEMBER_ACCESS = Pattern.compile(
        "(?:->|\\.)\\s*([A-Za-z_$][A-Za-z0-9_$]*)");
    private static final Pattern RENDERED_SCALED_MEMBER_ACCESS = Pattern.compile(
        "(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*->\\s*" +
        "(?<member>[A-Za-z_$][A-Za-z0-9_$]*)\\s*\\[\\s*" +
        "(?<index>(?:0[xX])?[0-9A-Fa-f]+)\\s*\\]");
    private static final Pattern EXPLICIT_THIS_VIRTUAL_CALL = Pattern.compile(
        "\\(\\*([A-Za-z_][A-Za-z0-9_]*)->vtable->" +
        "([A-Za-z_][A-Za-z0-9_]*)\\)\\s*\\(");
    private static final Pattern BULK_ZERO_SIMPLE = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)(?<pointer>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<target>[^;\\r\\n]+);[ \\t]*\\R" +
        "\\k<indent>for[ \\t]*\\((?<counter>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<count>0x[0-9A-Fa-f]+|[0-9]+);[ \\t]*\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*" +
        "\\k<counter>[ \\t]*=[ \\t]*\\k<counter>[ \\t]*\\+[ \\t]*-1\\)[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+\\*\\k<pointer>[ \\t]*=[ \\t]*0;[ \\t]*\\R" +
        "[ \\t]+\\k<pointer>[ \\t]*=[ \\t]*\\k<pointer>[ \\t]*\\+[ \\t]*1;[ \\t]*\\R" +
        "\\k<indent>\\}(?:[ \\t]*\\R\\k<indent>\\*\\(undefined(?<tail>[1248])[ \\t]*\\*\\)" +
        "\\k<pointer>[ \\t]*=[ \\t]*0;)?");
    private static final Pattern BULK_ZERO_BYTE_POINTER = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)(?<pointer>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<target>[^;\\r\\n]+);[ \\t]*\\R" +
        "\\k<indent>for[ \\t]*\\((?<counter>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<count>0x[0-9A-Fa-f]+|[0-9]+);[ \\t]*\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*" +
        "\\k<counter>[ \\t]*=[ \\t]*\\k<counter>[ \\t]*\\+[ \\t]*-1\\)[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+\\*\\(undefined4[ \\t]*\\*\\)\\k<pointer>[ \\t]*=[ \\t]*0;[ \\t]*\\R" +
        "[ \\t]+\\k<pointer>[ \\t]*=[ \\t]*\\k<pointer>[ \\t]*\\+[ \\t]*4;[ \\t]*\\R" +
        "\\k<indent>\\}");
    private static final Pattern BULK_ZERO_NULL_SELECT = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)if[ \\t]*\\([^\\r\\n]+==[ \\t]*\\([^\\r\\n]+\\)0x0\\)[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+(?<pointer>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*\\(undefined4[ \\t]*\\*\\)0x0;[ \\t]*\\R" +
        "\\k<indent>\\}[ \\t]*\\R\\k<indent>else[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+\\k<pointer>[ \\t]*=[ \\t]*(?<target>[^;\\r\\n]+);[ \\t]*\\R" +
        "\\k<indent>\\}[ \\t]*\\R" +
        "\\k<indent>for[ \\t]*\\((?<counter>[A-Za-z_][A-Za-z0-9_]*)[ \\t]*=[ \\t]*" +
        "(?<count>0x[0-9A-Fa-f]+|[0-9]+);[ \\t]*\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*" +
        "\\k<counter>[ \\t]*=[ \\t]*\\k<counter>[ \\t]*\\+[ \\t]*-1\\)[ \\t]*\\{[ \\t]*\\R" +
        "[ \\t]+\\*\\k<pointer>[ \\t]*=[ \\t]*0;[ \\t]*\\R" +
        "[ \\t]+\\k<pointer>[ \\t]*=[ \\t]*\\k<pointer>[ \\t]*\\+[ \\t]*1;[ \\t]*\\R" +
        "\\k<indent>\\}(?:[ \\t]*\\R\\k<indent>\\*\\(undefined(?<tail>[1248])[ \\t]*\\*\\)" +
        "\\k<pointer>[ \\t]*=[ \\t]*0;)?");
    private static final String BULK_ZERO_MARKER =
        "/* compiler bulk-zero initialization */";
    private static final String STACK_SLOT_SPLIT_MARKER =
        "/* compiler stack-slot lifetime split */";
    private static final String OUTPUT_CALL_SLOT_SPLIT_MARKER =
        "/* compiler output-call stack-slot lifetime split */";
    private static final Pattern PACKED_BIT_SET = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)(?<base>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "\\[\\(int\\)(?<index>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*>>[ \\t]*3\\]" +
        "[ \\t]*=\\s*(?<rhsBase>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "\\[\\(int\\)(?<rhsIndex>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*>>[ \\t]*3\\]" +
        "[ \\t]*\\|\\s*(?:'\\\\x01'|1)[ \\t]*<<[ \\t]*" +
        "\\((?:\\(uint\\))?(?<bitIndex>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*&[ \\t]*7\\);"
    );
    private static final Pattern PACKED_BIT_CLEAR = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)(?<base>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "\\[\\(int\\)(?<index>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*>>[ \\t]*3\\]" +
        "[ \\t]*=\\s*(?<rhsBase>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "\\[\\(int\\)(?<rhsIndex>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*>>[ \\t]*3\\]" +
        "[ \\t]*&\\s*~\\((?:'\\\\x01'|1)[ \\t]*<<[ \\t]*" +
        "\\((?:\\(uint\\))?(?<bitIndex>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*&[ \\t]*7\\)\\);"
    );
    private static final Pattern PACKED_BIT_TEST = Pattern.compile(
        "(?<base>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "\\[\\(int\\)(?<index>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*>>[ \\t]*3\\]" +
        "[ \\t]*>>[ \\t]*\\((?:\\(uint\\))?\\k<index>[ \\t]*&[ \\t]*7\\)" +
        "[ \\t]*&[ \\t]*1"
    );
    private static final String SIMPLE_ARITHMETIC_VALUE =
        "\\*?[A-Za-z_$][A-Za-z0-9_$]*(?:\\[[^\\]\\r\\n]+\\])?";
    private static final Pattern SIGNED_DIVIDE_BY_FOUR = Pattern.compile(
        "\\(int\\)\\([ \\t]*(?<value>" + SIMPLE_ARITHMETIC_VALUE + ")" +
        "[ \\t]*\\+[ \\t]*\\([ \\t]*(?:\\(int\\)[ \\t]*)?\\k<value>" +
        "[ \\t]*>>[ \\t]*0x1f[ \\t]*&[ \\t]*3U\\)[ \\t]*\\)" +
        "[ \\t]*>>[ \\t]*2"
    );
    private static final Pattern FIXED_16_ROUND = Pattern.compile(
        "(?<value>" + SIMPLE_ARITHMETIC_VALUE + ")" +
        "[ \\t]*\\+[ \\t]*0x8000[ \\t]*>>[ \\t]*0x10"
    );
    private static final Pattern BULK_ZERO_MEMSET_LINE = Pattern.compile(
        "^(?<indent>[ \\t]*)memset\\((?<pointer>[A-Za-z_$][A-Za-z0-9_$]*),[ \\t]*0,[ \\t]*" +
        "(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)\\);[ \\t]*" +
        Pattern.quote(BULK_ZERO_MARKER) + "[ \\t]*$");
    private static final Pattern RAW_STACK_ZERO_OBJECT = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)memset\\(&stack0x(?<offset>[0-9A-Fa-f]{8}),[ \\t]*0,[ \\t]*" +
        "(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)\\);[ \\t]*" +
        Pattern.quote(BULK_ZERO_MARKER) + "[ \\t]*$");
    private static final Pattern BULK_ZERO_POINTER_ADVANCE = Pattern.compile(
        "^[ \\t]*(?<pointer>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*" +
        "\\(undefined4[ \\t]*\\*\\)\\(\\(byte[ \\t]*\\*\\)\\k<pointer>[ \\t]*\\+[ \\t]*" +
        "(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)\\);[ \\t]*$");
    private static final Pattern BULK_COPY_WORD_HEADER = Pattern.compile(
        "^(?<indent>[ \\t]*)for[ \\t]*\\((?<counter>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*=[ \\t]*(?:\\(uint\\)[ \\t]*)?(?<bytes>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*>>[ \\t]*2;[ \\t]*\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*" +
        "\\k<counter>[ \\t]*=[ \\t]*\\k<counter>[ \\t]*-[ \\t]*1\\)[ \\t]*\\{[ \\t]*$");
    private static final Pattern BULK_COPY_TAIL_HEADER = Pattern.compile(
        "^(?<indent>[ \\t]*)for[ \\t]*\\((?<counter>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*=[ \\t]*(?<bytes>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*&[ \\t]*3;" +
        "[ \\t]*\\k<counter>" +
        "[ \\t]*!=[ \\t]*0;[ \\t]*\\k<counter>[ \\t]*=[ \\t]*\\k<counter>" +
        "[ \\t]*-[ \\t]*1\\)[ \\t]*\\{[ \\t]*$");
    private static final Pattern BULK_COPY_FIXED_HEADER = Pattern.compile(
        "^(?<indent>[ \\t]*)for[ \\t]*\\((?<counter>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "[ \\t]*=[ \\t]*(?<count>0x[0-9A-Fa-f]+|[0-9]+);[ \\t]*" +
        "\\k<counter>[ \\t]*!=[ \\t]*0;[ \\t]*\\k<counter>[ \\t]*=[ \\t]*" +
        "\\k<counter>[ \\t]*(?:\\+[ \\t]*-1|-[ \\t]*1)\\)[ \\t]*\\{[ \\t]*$");
    private static final Pattern POINTER_INCREMENT = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*\\k<name>" +
        "[ \\t]*\\+[ \\t]*1;$");
    private static final Pattern BYTE_POINTER_INCREMENT = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*" +
        "\\([^;]+\\)[ \\t]*\\(\\(int\\)[ \\t]*\\k<name>[ \\t]*\\+[ \\t]*1\\);$");
    private static final Pattern BYTE_POINTER_INCREMENT_FOUR = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*\\k<name>" +
        "[ \\t]*\\+[ \\t]*4;$");
    private static final Pattern STRUCTURAL_FIELD_POINTER_INCREMENT = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*" +
        "\\([^;]+?\\*+\\)[ \\t]*(?:" +
        "&[ \\t]*\\k<name>->[ \\t]*field_(?:0[xX])?(?<direct>[0-9A-Fa-f]+)|" +
        "\\(\\(int\\)[ \\t]*&[ \\t]*\\k<name>->[ \\t]*" +
        "field_(?:0[xX])?(?<base>[0-9A-Fa-f]+)[ \\t]*\\+[ \\t]*" +
        "(?<delta>0[xX][0-9A-Fa-f]+|[0-9]+)\\))" +
        ";$");
    private static final Pattern GRID_CELL_ACCESS = Pattern.compile(
        "(?<![A-Za-z0-9_$:])(?<grid>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "\\.cells\\s*\\[");
    private static final Pattern BYTE_ZERO_ELEMENT = Pattern.compile(
        "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\[(?<index>[0-3])\\]" +
        "[ \\t]*=[ \\t]*(?:\\([^)]*\\)[ \\t]*)?0;$");
    private static final String BULK_COPY_MARKER =
        "/* compiler REP MOVS byte copy */";
    private static final Pattern LEGACY_BULK_COPY = Pattern.compile(
        "^(?<indent>[ \\t]*)memmove\\(" +
        "(?<destination>[A-Za-z_$][A-Za-z0-9_$]*),[ \\t]*" +
        "(?<source>[A-Za-z_$][A-Za-z0-9_$]*),[ \\t]*" +
        "(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)\\);[ \\t]*" +
        Pattern.quote(BULK_COPY_MARKER) + "$");
    private static final Pattern AFFINE_SELF_CANCELLATION = Pattern.compile(
        "(?<cast>\\([A-Za-z_$][A-Za-z0-9_$: ]*\\s*\\*+\\))\\s*" +
        "\\(\\s*\\(int\\)\\s*\\(\\s*(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*" +
        "\\+\\s*(?<index>0x[0-9A-Fa-f]+|[0-9]+)\\s*\\)\\s*\\+\\s*" +
        "\\(\\s*-(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)\\s*-\\s*" +
        "\\(int\\)\\s*\\k<base>\\s*\\)\\s*\\)");
    private static final Pattern PARTIAL_AL_ZERO_RETURN = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)return\\s+\\(uint\\)\\(uint3\\)" +
        "\\([^;\\r\\n]+>>\\s*(?:7|0x7)\\s*\\)\\s*<<\\s*(?:8|0x8)\\s*;[ \\t]*$");
    private static final Pattern HEX_ADDRESS = Pattern.compile("0x([0-9A-Fa-f]{6,8})");
    private static final Pattern INTEGER_LITERAL = Pattern.compile(
        "(?i)(?<![A-Za-z0-9_])(?:0x([0-9a-f]+)|(\\d+))(?![A-Za-z0-9_])");
    private static final Pattern SCIENTIFIC_LITERAL = Pattern.compile(
        "(?<![A-Za-z0-9_.])[-+]?(?:[0-9]+\\.[0-9]*|[0-9]*\\.[0-9]+)" +
        "(?:[eE][-+]?[0-9]+)(?![A-Za-z0-9_.])");
    private static final Pattern TYPED_NULL_POINTER = Pattern.compile(
        "\\((?:const\\s+)?(?:struct\\s+|class\\s+)?" +
        "[A-Za-z_$][A-Za-z0-9_$:<>]*(?:\\s+[A-Za-z_$][A-Za-z0-9_$:<>]*)*" +
        "\\s*\\*+\\s*\\)\\s*0x0\\b");
    private static final Pattern SIMPLE_PARTIAL_PIECE = Pattern.compile(
        "(?<![A-Za-z0-9_$])(?<base>[A-Za-z_$][A-Za-z0-9_$]*" +
        "(?:(?:->|\\.)[A-Za-z_$][A-Za-z0-9_$]*|\\[[^]\\r\\n]+\\])*)" +
        "\\._(?<offset>[0-9]+)_(?<width>[0-9]+)_");
    private static final Pattern EXPLICIT_BYTE_OFFSET_FIELD = Pattern.compile(
        "\\*\\s*\\(\\s*(?<cast>[A-Za-z_$][A-Za-z0-9_$:<> ]*(?:\\s*\\*\\s*)+)\\)" +
        "\\s*\\(\\s*\\(int\\)\\s*(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*" +
        "\\+\\s*(?<offset>0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
    private static final Pattern CASTED_GENERIC_FIELD_VALUE = Pattern.compile(
        "\\*\\s*\\(\\s*(?<type>[A-Za-z_$][A-Za-z0-9_$:<> ]*)\\s*\\*\\s*\\)\\s*" +
        "(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*->\\s*field_(?:0[xX])?" +
        // The offset token must be consumed in full and must terminate the
        // postfix expression.  Without the possessive quantifier/boundary this
        // pattern could match the prefix of
        //   *(T *)owner->field_000A->member
        // and turn it into the invalid `*STField<T *>(owner,0xA)->member`.
        "(?<offset>[0-9A-Fa-f]++)(?![0-9A-Fa-f])(?!(?:\\s*)(?:->|\\.|\\[))");
    private static final Pattern LEGACY_TRUNCATED_CASTED_FIELD = Pattern.compile(
        "\\*STField<(?<type>[A-Za-z_$][A-Za-z0-9_$:<> ]*)\\s*\\*>\\(" +
        "(?<base>[A-Za-z_$][A-Za-z0-9_$]*),\\s*0[xX](?<offset>[0-9A-Fa-f]++)\\)" +
        "(?<suffix>\\s*(?:->|\\.|\\[))");
    private static final Pattern LEGACY_TRUNCATED_CODE_FIELD = Pattern.compile(
        "\\*STField<code\\s*\\*>\\((?<base>[A-Za-z_$][A-Za-z0-9_$]*),\\s*" +
        "0[xX](?<ownerOffset>[0-9A-Fa-f]++)\\)\\s*->\\s*field_(?:0[xX])?" +
        "(?<slotOffset>[0-9A-Fa-f]++)(?![0-9A-Fa-f])");
    private static final Pattern RAW_CODE_FIELD_CHAIN = Pattern.compile(
        "\\*\\s*\\(\\s*code\\s*\\*\\s*\\)\\s*" +
        "(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*->\\s*field_(?:0[xX])?" +
        "(?<ownerOffset>[0-9A-Fa-f]++)(?![0-9A-Fa-f])\\s*->\\s*" +
        "field_(?:0[xX])?(?<slotOffset>[0-9A-Fa-f]++)(?![0-9A-Fa-f])");
    private static final Pattern RAW_INDIRECT_CALL = Pattern.compile(
        "\\(\\*\\*?\\(code \\*\\*?\\)|\\(\\*\\(code \\*\\)");
    private static final Pattern EXPLICIT_TYPED_VTABLE_DISPATCH = Pattern.compile(
        "\\(\\*[A-Za-z_$][A-Za-z0-9_$]*->vtable->" +
        "[A-Za-z_$][A-Za-z0-9_$]*\\)\\s*\\(");
    private static final Pattern DEGRADED_EXACT_INDIRECT_CALL = Pattern.compile(
        "\\bexact_indirect_callee\\s*<");
    private static final Pattern EXCESSIVE_POINTER_DEPTH = Pattern.compile(
        "\\b(?:undefined(?:[0-9]+)?|void|byte|char|u?short|u?int|u?long|" +
        "[A-Za-z_$][A-Za-z0-9_$:]*)\\s+(?:\\*\\s*){4,}" +
        "[A-Za-z_$][A-Za-z0-9_$]*\\b");
    private static final Pattern NULLPTR_DEDUCED_LOCAL = Pattern.compile(
        "\\bauto\\s+[A-Za-z_$][A-Za-z0-9_$]*\\s*=\\s*nullptr\\s*;");
    private static final Pattern NULLPTR_SWITCH_CASE = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)case[ \\t]+nullptr[ \\t]*:");
    private static final Pattern RAW_OFFSET_DEREFERENCE = Pattern.compile(
        "\\*\\([^)]*\\*\\)\\([^;]*(?:param_|local_|->)[^;]*[+-]\\s*0x[0-9A-Fa-f]+");
    private static final Pattern SIMPLE_BYTE_OFFSET_DEREFERENCE = Pattern.compile(
        "\\*\\s*\\(\\s*(?<type>byte|char|undefined1)\\s*\\*\\s*\\)\\s*" +
        "\\(\\s*(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*" +
        "(?<operator>[+-])\\s*(?<offset>0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
    private static final Pattern PACKED_PIECE = Pattern.compile(
        "(?:\\._[0-9]+_[0-9]+_|\\.\\*[0-9]+_[0-9]+\\*|" +
        "(?:->|\\.)packed\\b)");
    private static final Pattern TAGGED_24_COMPOSE = Pattern.compile(
        "CONCAT22\\s*\\(\\s*CONCAT11\\s*\\(\\s*([^,]+?)\\s*,\\s*" +
        "\\(char\\)\\s*\\(\\s*([A-Za-z_$][A-Za-z0-9_$]*" +
        "(?:(?:->|\\.)[A-Za-z_$][A-Za-z0-9_$]*)+)\\s*>>\\s*" +
        "(?:0x10|16)\\s*\\)\\s*\\)\\s*,\\s*\\(short\\)\\s*\\2\\s*\\)");
    private static final Pattern DARRAY_ELEMENT_ADDRESS = Pattern.compile(
        "\\b([A-Za-z_][A-Za-z0-9_]*)->elementSize\\s*\\*\\s*([^+;]+?)\\s*\\+\\s*" +
        "(?:\\(int\\)\\s*)?\\1->data\\b");
    private static final Pattern DARRAY_TYPED_ELEMENT_ADDRESS = Pattern.compile(
        "\\((?<type>[A-Za-z_$][A-Za-z0-9_$: ]*)\\s*\\*\\)\\s*\\(\\s*" +
        "(?<array>[A-Za-z_$][A-Za-z0-9_$]*)->elementSize\\s*\\*\\s*" +
        "(?<index>[^+;]+?)\\s*\\+\\s*\\(int\\)\\s*\\k<array>->data\\s*\\)",
        Pattern.MULTILINE);
    private static final String SIMPLE_RECORD_INDEX =
        "(?:\\([^()\\r\\n]+\\)\\s*)*[A-Za-z_$][A-Za-z0-9_$]*" +
        "(?:(?:->|\\.)[A-Za-z_$][A-Za-z0-9_$]*|\\[[^]\\r\\n]+\\])*";
    private static final Pattern TYPED_MEMBER_BYTE_OFFSET_FORWARD = Pattern.compile(
        "\\*\\s*\\(\\s*(?<cast>[A-Za-z_$][A-Za-z0-9_$:<> ]*\\s*\\*)\\s*\\)\\s*" +
        "\\(\\s*\\(int\\)\\s*&\\s*(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*" +
        "->\\s*(?<field>[A-Za-z_$][A-Za-z0-9_$]*)\\s*\\+\\s*" +
        "(?<offset>" + SIMPLE_RECORD_INDEX + ")\\s*\\)");
    private static final Pattern TYPED_MEMBER_BYTE_OFFSET_REVERSE = Pattern.compile(
        "\\*\\s*\\(\\s*(?<cast>[A-Za-z_$][A-Za-z0-9_$:<> ]*\\s*\\*)\\s*\\)\\s*" +
        "\\(\\s*(?<offset>" + SIMPLE_RECORD_INDEX + ")\\s*\\+\\s*" +
        "\\(int\\)\\s*&\\s*(?<base>[A-Za-z_$][A-Za-z0-9_$]*)\\s*" +
        "->\\s*(?<field>[A-Za-z_$][A-Za-z0-9_$]*)\\s*\\)");
    private static final Pattern GLOBAL_RECORD_ADDRESS_FORWARD = Pattern.compile(
        "(?<index>" + SIMPLE_RECORD_INDEX + ")\\s*\\*\\s*" +
        "(?<stride>0x[0-9A-Fa-f]+|[0-9]+)\\s*\\+\\s*" +
        "(?<address>0x[0-9A-Fa-f]+)");
    private static final Pattern GLOBAL_RECORD_ADDRESS_REVERSE = Pattern.compile(
        "(?<address>0x[0-9A-Fa-f]+)\\s*\\+\\s*" +
        "(?<index>" + SIMPLE_RECORD_INDEX + ")\\s*\\*\\s*" +
        "(?<stride>0x[0-9A-Fa-f]+|[0-9]+)");
    private static final Pattern SIMPLE_POINTER_DECLARATION = Pattern.compile(
        "(?m)^(?<indent>[ \\t]*)(?<type>[A-Za-z_$][A-Za-z0-9_$: ]*)" +
        "\\s*(?<stars>\\*+)\\s*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*;$");
    private static final Pattern SIMPLE_POINTER_PARAMETER = Pattern.compile(
        "(?:\\(|,)\\s*(?<type>[A-Za-z_$][A-Za-z0-9_$: ]*)" +
        "\\s*(?<stars>\\*+)\\s*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
        "(?=\\s*[,\\)])");
    private static final Pattern DARRAY_DESCRIPTOR_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?<type>[A-Za-z_$][A-Za-z0-9_$:]*DArray)\\s*\\*+\\s*" +
        "(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*;$");
    private static final Pattern SIMPLE_IDENTIFIER = Pattern.compile(
        "[A-Za-z_$][A-Za-z0-9_$]*");
    private static final String DARRAY_DESCRIPTOR_MARKER =
        "[STDArrayElementApplier] Generated DArray descriptor specialization";
    private static final Pattern RESIDUAL_STRING_SYMBOL = Pattern.compile(
        "\\bs_[A-Za-z0-9_$]*_[0-9A-Fa-f]{8}\\b");
    private static final Pattern STRING_BASED_AGGREGATE = Pattern.compile(
        "(?:\\bs_[A-Za-z0-9_$]*_[0-9A-Fa-f]{8}\\b\\s*[+-]|" +
        "[+-]\\s*\\bs_[A-Za-z0-9_$]*_[0-9A-Fa-f]{8}\\b)");
    private static final Pattern RESIDUAL_CASTED_FIELD = Pattern.compile(
        "\\*\\s*\\(\\s*(?:undefined(?:[0-9]+)?|u?int|u?long|u?short|char|byte|" +
        "float|double|void)[^()\\r\\n]{0,48}?\\*\\s*\\)\\s*&?[^;\\r\\n]*?" +
        "(?:->|\\.)field_(?:0x)?[0-9A-Fa-f]+\\b");
    private static final Pattern RESIDUAL_GENERIC_FIELD = Pattern.compile(
        "(?:->|\\.)field_(?:0x)?[0-9A-Fa-f]+\\b");
    private static final Pattern RESIDUAL_GLOBAL_AGGREGATE = Pattern.compile(
        "\\b(?:PTR|DAT)_[0-9A-Fa-f]{8}(?:->|\\.)field_(?:0x)?[0-9A-Fa-f]+\\b");
    private static final Pattern RESIDUAL_ANONYMOUS_SHAPE = Pattern.compile(
        "\\bAnon(?:Shape|Nested|Receiver)_[A-Za-z0-9_$]+\\b");
    private static final Pattern RESIDUAL_GENERIC_DATA = Pattern.compile(
        "(?<![A-Za-z0-9_$])_?(?:DAT|PTR|UNK)_[0-9A-Fa-f]{8}\\b");
    private static final Pattern RESIDUAL_UNDEFINED_TYPE = Pattern.compile(
        "\\bundefined(?:[0-9]+)?\\b");
    private static final Pattern GENERIC_UNDEFINED_DECLARATION = Pattern.compile(
        "\\bundefined(?:1|2|4|8)?\\b\\s*(?:\\*+\\s*)?(?:" +
        "(?:__(?:cdecl|stdcall|thiscall|fastcall)\\s+)?" +
        "[A-Za-z_$][A-Za-z0-9_$:]*\\s*(?=\\()|" +
        "[A-Za-z_$][A-Za-z0-9_$]*\\s*(?=[;,\\[\\)=]))");
    private static final Pattern CASTED_CALL_RESULT = Pattern.compile(
        "\\(\\s*[A-Za-z_$][A-Za-z0-9_$: ]*\\s*\\*+\\s*\\)\\s*" +
        "(?:[A-Za-z_$][A-Za-z0-9_$]*::)*[A-Za-z_$][A-Za-z0-9_$]*\\s*\\(");
    private static final Pattern ROUNDTRIP_RETURN_ORDINAL = Pattern.compile(
        "\\[STReturnSemanticsApplier] pointer_producer_argument_roundtrip_call;" +
        "\\s*return_parameter_ordinal=([0-9]+)");
    private static final Pattern RETURNED_POINTER_PARAMETER_ORDINAL = Pattern.compile(
        "\\[STReturnSemanticsApplier] returned_pointer_parameter\\..*?" +
        "ordinal=([0-9]+)", Pattern.DOTALL);
    private static final Pattern RESIDUAL_CONTROL_FLOW = Pattern.compile(
        "\\b(?:goto|LAB_[0-9A-Fa-f]+)\\b");
    private static final Pattern GENERATED_ENUM_COMPOSITION = Pattern.compile(
        "\\bCASE_(?:NEG_)?[0-9A-Fa-f]+\\s*\\|\\s*CASE_(?:NEG_)?[0-9A-Fa-f]+\\b");
    private static final Pattern PARAMETER_ASSIGNMENT = Pattern.compile(
        "\\b(_?param_[0-9]+)\\s*(?:[+\\-*/&|^]?=)");
    private static final String GENERATED_ENUM_MARKER = "[STSwitchEnumApplier]";
    private static final String CASE_NAME = "CASE_(?:NEG_)?[0-9A-Fa-f]+";
    private static final Pattern FULL_ENUM_COMPOSITION = Pattern.compile(
        "\\b(" + CASE_NAME + "(?:\\s*\\|\\s*" + CASE_NAME + ")+)\\b");
    private static final Pattern ENUM_LOCAL_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?:const\\s+)?(?:enum\\s+)?" +
        "([A-Za-z_][A-Za-z0-9_:]*)\\s*(?:\\*+\\s*)?" +
        "([A-Za-z_][A-Za-z0-9_]*)\\s*(?:\\[[^;\\r\\n]+\\])?\\s*;");
    private static final Pattern ENUM_POINTER_DECLARATION = Pattern.compile(
        "(?m)^\\s*(?:const\\s+)?(?:struct\\s+|class\\s+)?" +
        "([A-Za-z_][A-Za-z0-9_:]*)\\s*\\*+\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*;");
    private static final Pattern ENUM_FIELD_USE = Pattern.compile(
        "\\b([A-Za-z_][A-Za-z0-9_]*)->([A-Za-z_][A-Za-z0-9_]*)\\b");
    private static final String PSEUDOCODE_COMMENT_MARKER = "/* ST_PSEUDO[";
    private static final String PSEUDOCODE_RUNTIME_INCLUDE =
        "#include \"../../pseudocode_runtime.h\"";
    private Path programRoot;
    private Path functionsRoot;
    private Listing listing;
    private ReferenceManager references;
    private SymbolTable symbols;
    private DecompInterface decompiler;
    private int programFunctionCount;
    private int exportedFunctionCount;
    private int externalFunctionCount;
    private int libraryFunctionCount;
    private int thunkFunctionCount;
    private int bodyFunctionCount;
    private int pseudocodeNormalizationCount;
    private int fingerprintCfgFallbackCount;
    private long executableByteCount;
    private long coveredExecutableByteCount;
    private long unclaimedExecutableByteCount;
    private long unclaimedPaddingByteCount;
    private long unclaimedMeaningfulByteCount;
    private int unclaimedRangeCount;
    private int exportedUnclaimedRangeCount;
    private final List<String> fingerprintCfgFallbackFunctions = new ArrayList<>();
    private final List<String> pseudocodeIdiomRows = new ArrayList<>();
    private final Set<String> pseudocodeIdiomFunctions = new HashSet<>();
    private final Map<Address, Set<String>> stackSlotReuseCache = new HashMap<>();
    private final List<String> qualityIssueRows = new ArrayList<>();
    private final Set<String> qualityIssueFunctions = new HashSet<>();
    private final Map<String, QualityAggregate> qualityAggregates = new TreeMap<>();
    private Map<String, DArrayDescriptor> darrayDescriptors = Map.of();
    private Set<Long> globalRecordStrides = Set.of();
    private List<GlobalRecordDescriptor> globalRecordDescriptors = List.of();
    private Map<String, Structure> globalPointerStructures = Map.of();
    private Map<String, Integer> narrowReturnWidths = Map.of();
    private Map<String, Integer> qualifiedFunctionNameCounts = Map.of();
    private Map<String, List<RenderedCallableDependency>> renderedCallableMembers;
    private Map<String, List<ghidra.program.model.data.Structure>> renderedStructureTypes;
    private String functionAnalysisSourceHash = "";

    @Override
    protected void run() throws Exception {
        // Read-only script: do not leave GhidraScript's implicit transaction around runScript().
        end(true);
        if (currentProgram == null) {
            printerr("Open a program before running STDecompExport.");
            return;
        }

        String[] args = getScriptArgs();
        File outputRoot;
        if (args.length > 0 && !args[0].isBlank()) {
            outputRoot = new File(args[0]);
        }
        else if (isRunningHeadless()) {
            throw new IllegalArgumentException("Headless use requires an output directory argument");
        }
        else {
            outputRoot = askDirectory("Select corpus output directory", "Export");
        }

        listing = currentProgram.getListing();
        references = currentProgram.getReferenceManager();
        symbols = currentProgram.getSymbolTable();
        qualifiedFunctionNameCounts = qualifiedFunctionNameCounts();
        functionAnalysisSourceHash = sha256Text(FUNCTION_ANALYSIS_LOGIC_ID);
        darrayDescriptors = recoveredDArrayDescriptors();
        globalRecordDescriptors = recoveredGlobalRecordDescriptors();
        globalPointerStructures = recoveredGlobalPointerStructures();
        globalRecordStrides = globalRecordDescriptors.stream()
            .map(GlobalRecordDescriptor::stride).collect(java.util.stream.Collectors.toUnmodifiableSet());
        narrowReturnWidths = recoveredNarrowReturnWidths();
        Path outputDirectory = outputRoot.toPath().toAbsolutePath().normalize();
        Path finalProgramRoot =
            outputDirectory.resolve(safeFileName(currentProgram.getName()));
        Path stagingProgramRoot = outputDirectory.resolve("." +
            safeFileName(currentProgram.getName()) + ".export-" +
            UUID.randomUUID());
        prepareStagingCorpus(finalProgramRoot, stagingProgramRoot);
        programRoot = stagingProgramRoot;
        functionsRoot = programRoot.resolve("functions");
        Files.createDirectories(functionsRoot);

        decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        boolean promoted = false;
        try {
            if (!decompiler.openProgram(currentProgram))
                throw new IOException(
                    "Decompiler could not open " + currentProgram.getName());
            println("Exporting " + currentProgram.getName() + " to " +
                finalProgramRoot + " via transactional staging");
            exportProgram();
            exportMemoryMap();
            exportImports();
            exportExports();
            exportStrings();
            exportGlobals();
            exportSymbols();
            exportDataTypes();
            exportBookmarks();
            exportFunctions();
            exportCoverage();
            exportManifest();
            promoteStagingCorpus(stagingProgramRoot, finalProgramRoot);
            promoted = true;
            programRoot = finalProgramRoot;
            functionsRoot = programRoot.resolve("functions");
            println("STDecompExport complete: " + finalProgramRoot);
        }
        finally {
            decompiler.dispose();
            if (!promoted) {
                try {
                    deleteTree(stagingProgramRoot);
                }
                catch (IOException cleanup) {
                    printerr("Could not remove failed export staging tree " +
                        stagingProgramRoot + ": " + cleanup.getMessage());
                }
            }
        }
    }

    /**
     * A function-by-function export may run for hours. Per-file atomic writes
     * are not sufficient: an exception near the end otherwise leaves a corpus
     * containing a mixture of old and new Program states. Seed a sibling
     * staging tree with hard links to the accepted corpus so unchanged
     * fingerprints remain reusable without duplicating its disk footprint.
     * Exporter writes replace paths atomically and therefore never mutate a
     * linked source file in place. Fall back to a copy when links are not
     * supported by the filesystem.
     */
    private void prepareStagingCorpus(Path source, Path staging)
            throws IOException {
        deleteTree(staging);
        Files.createDirectories(staging);
        if (!Files.isDirectory(source)) return;
        try (Stream<Path> stream = Files.walk(source)) {
            for (Path item : stream.toList()) {
                Path destination = staging.resolve(source.relativize(item));
                if (Files.isDirectory(item)) {
                    Files.createDirectories(destination);
                    continue;
                }
                if (!Files.isRegularFile(item)) continue;
                Files.createDirectories(destination.getParent());
                try {
                    Files.createLink(destination, item);
                }
                catch (UnsupportedOperationException | IOException exception) {
                    Files.copy(item, destination,
                        StandardCopyOption.REPLACE_EXISTING,
                        StandardCopyOption.COPY_ATTRIBUTES);
                }
            }
        }
    }

    /**
     * Promote a complete staging tree only after every corpus artifact has
     * been written. If the second rename fails, restore the preceding corpus.
     */
    private void promoteStagingCorpus(Path staging, Path destination)
            throws IOException {
        Path backup = destination.resolveSibling("." +
            destination.getFileName() + ".previous-" + UUID.randomUUID());
        boolean hadDestination = Files.exists(destination);
        if (hadDestination) movePath(destination, backup);
        try {
            movePath(staging, destination);
        }
        catch (IOException exception) {
            if (hadDestination && !Files.exists(destination) &&
                    Files.exists(backup)) {
                try {
                    movePath(backup, destination);
                }
                catch (IOException restore) {
                    exception.addSuppressed(restore);
                }
            }
            throw exception;
        }
        if (hadDestination) {
            try {
                deleteTree(backup);
            }
            catch (IOException cleanup) {
                printerr("Export succeeded, but the preceding corpus backup " +
                    backup + " could not be removed: " + cleanup.getMessage());
            }
        }
    }

    private void movePath(Path source, Path destination) throws IOException {
        try {
            Files.move(source, destination, StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(source, destination);
        }
    }

    private void deleteTree(Path root) throws IOException {
        if (root == null || !Files.exists(root)) return;
        try (Stream<Path> stream = Files.walk(root)) {
            for (Path item : stream.sorted(Comparator.reverseOrder()).toList())
                Files.deleteIfExists(item);
        }
    }

    private void exportProgram() throws IOException {
        writeJson(programRoot.resolve("program.json"), jsonObject(
            field("schema_version", "1"),
            field("program", currentProgram.getName()),
            field("executable_path", portableExecutablePath()),
            field("executable_format", currentProgram.getExecutableFormat()),
            field("language_id", currentProgram.getLanguageID().toString()),
            field("compiler_spec_id", currentProgram.getCompilerSpec().getCompilerSpecID().toString()),
            field("image_base", addr(currentProgram.getImageBase())),
            rawField("pointer_size", Integer.toString(currentProgram.getDefaultPointerSize())),
            field("md5", nullToEmpty(currentProgram.getExecutableMD5())),
            field("sha256", nullToEmpty(currentProgram.getExecutableSHA256()))
        ));
    }

    private String portableExecutablePath() {
        // DomainFile.packFile snapshots deliberately redact workstation paths with a
        // fixed-width token.  After hydration getExecutablePath() therefore remains useful
        // only as private import provenance and its apparent basename can be a token suffix
        // such as "r".  The Ghidra Program name is the portable executable identity used by
        // every other corpus artifact, so never derive committed metadata from that path.
        return currentProgram.getName();
    }

    private void exportMemoryMap() throws IOException {
        List<String> rows = new ArrayList<>();
        Memory memory = currentProgram.getMemory();
        for (MemoryBlock block : memory.getBlocks()) {
            checkCancelled();
            rows.add(jsonObject(
                field("name", block.getName()),
                field("start", addr(block.getStart())),
                field("end", addr(block.getEnd())),
                rawField("size", Long.toString(block.getSize())),
                rawField("read", Boolean.toString(block.isRead())),
                rawField("write", Boolean.toString(block.isWrite())),
                rawField("execute", Boolean.toString(block.isExecute())),
                rawField("initialized", Boolean.toString(block.isInitialized())),
                rawField("volatile", Boolean.toString(block.isVolatile())),
                field("source", nullToEmpty(block.getSourceName()))
            ));
        }
        writeJsonArray(programRoot.resolve("memory_map.json"), rows);
    }

    private void exportImports() throws IOException {
        List<String> rows = new ArrayList<>();
        ExternalManager externalManager = currentProgram.getExternalManager();
        for (String library : externalManager.getExternalLibraryNames()) {
            checkCancelled();
            Iterator<ExternalLocation> locations = externalManager.getExternalLocations(library);
            while (locations.hasNext()) {
                ExternalLocation location = locations.next();
                Symbol symbol = location.getSymbol();
                rows.add(jsonObject(
                    field("library", library),
                    field("name", location.getLabel()),
                    field("address", addr(location.getAddress())),
                    field("original_imported_name", nullToEmpty(location.getOriginalImportedName())),
                    rawField("function", Boolean.toString(location.isFunction())),
                    field("source", symbol == null ? "" : symbol.getSource().toString())
                ));
            }
        }
        rows.sort(Comparator.naturalOrder());
        writeJsonArray(programRoot.resolve("imports.json"), rows);
    }

    private void exportExports() throws IOException {
        List<String> rows = new ArrayList<>();
        AddressIterator iterator = symbols.getExternalEntryPointIterator();
        while (iterator.hasNext()) {
            checkCancelled();
            Address address = iterator.next();
            Symbol symbol = symbols.getPrimarySymbol(address);
            rows.add(jsonObject(
                field("address", addr(address)),
                field("name", symbol == null ? "" : symbol.getName(true)),
                field("source", symbol == null ? "" : symbol.getSource().toString())
            ));
        }
        writeJsonArray(programRoot.resolve("exports.json"), rows);
    }

    private void exportStrings() throws IOException {
        Path path = programRoot.resolve("strings.jsonl");
        atomicWrite(path, writer -> {
            for (Data data : DefinedStringIterator.forProgram(currentProgram)) {
                checkCancelled();
                List<String> from = referenceSources(data.getMinAddress());
                writer.write(jsonObject(
                    field("address", addr(data.getMinAddress())),
                    field("type", data.getDataType().getDisplayName()),
                    rawField("length", Integer.toString(data.getLength())),
                    field("value", data.getDefaultValueRepresentation()),
                    rawField("referenced_from", jsonStringArray(from))
                ));
                writer.newLine();
            }
        });
    }

    private void exportSymbols() throws IOException {
        Path path = programRoot.resolve("symbols.jsonl");
        atomicWrite(path, writer -> {
            SymbolIterator iterator = symbols.getAllSymbols(true);
            while (iterator.hasNext()) {
                checkCancelled();
                Symbol symbol = iterator.next();
                writer.write(jsonObject(
                    field("address", addr(symbol.getAddress())),
                    field("name", symbol.getName()),
                    field("qualified_name", symbol.getName(true)),
                    field("type", symbol.getSymbolType().toString()),
                    field("source", symbol.getSource().toString()),
                    field("namespace", namespaceName(symbol.getParentNamespace())),
                    rawField("primary", Boolean.toString(symbol.isPrimary())),
                    rawField("external", Boolean.toString(symbol.isExternal())),
                    rawField("pinned", Boolean.toString(symbol.isPinned()))
                ));
                writer.newLine();
            }
        });
    }

    private void exportGlobals() throws IOException {
        Path path = programRoot.resolve("globals.jsonl");
        atomicWrite(path, writer -> {
            for (Data data : listing.getDefinedData(true)) {
                checkCancelled();
                if (data.hasStringValue() && !mutableEmptyStringStorage(data)) {
                    continue;
                }
                Symbol symbol = symbols.getPrimarySymbol(data.getMinAddress());
                writer.write(jsonObject(
                    field("address", addr(data.getMinAddress())),
                    field("name", symbol == null ? data.getPathName() : symbol.getName(true)),
                    field("type", data.getDataType().getDisplayName()),
                    rawField("length", Integer.toString(data.getLength())),
                    field("value", data.getDefaultValueRepresentation()),
                    rawField("referenced_from", jsonStringArray(referenceSources(data.getMinAddress())))
                ));
                writer.newLine();
            }
        });
    }

    /**
     * Ghidra represents a zero-filled writable char array as the empty string
     * even when its full array datatype is a mutable scratch arena.  Such an
     * object is both string-decodable and a real global; omitting it from
     * globals.jsonl leaves generated C++ with no declaration for indexed writes.
     */
    private boolean mutableEmptyStringStorage(Data data) {
        if (!data.hasStringValue() || data.getLength() <= 1 ||
                !(data.getValue() instanceof String value) || !value.isEmpty())
            return false;
        MemoryBlock block = currentProgram.getMemory().getBlock(data.getMinAddress());
        return block != null && block.isWrite();
    }

    private void exportDataTypes() throws IOException {
        DataTypeManager manager = currentProgram.getDataTypeManager();
        Path path = programRoot.resolve("types.jsonl");
        atomicWrite(path, writer -> {
            Iterator<DataType> iterator = manager.getAllDataTypes();
            while (iterator.hasNext()) {
                checkCancelled();
                DataType type = iterator.next();
                writer.write(jsonObject(
                    field("path", type.getPathName()),
                    field("name", type.getName()),
                    field("display_name", type.getDisplayName()),
                    field("class", type.getClass().getSimpleName()),
                    rawField("length", Integer.toString(type.getLength())),
                    field("description", nullToEmpty(type.getDescription())),
                    rawField("detail", dataTypeDetailJson(type))
                ));
                writer.newLine();
            }
        });
    }

    private void exportBookmarks() throws IOException {
        List<String> rows = new ArrayList<>();
        BookmarkManager manager = currentProgram.getBookmarkManager();
        Iterator<Bookmark> iterator = manager.getBookmarksIterator();
        while (iterator.hasNext()) {
            checkCancelled();
            Bookmark bookmark = iterator.next();
            rows.add(jsonObject(
                field("address", addr(bookmark.getAddress())),
                field("type", bookmark.getTypeString()),
                field("category", bookmark.getCategory()),
                field("comment", bookmark.getComment())
            ));
        }
        writeJsonArray(programRoot.resolve("bookmarks.json"), rows);
    }

    private void exportFunctions() throws Exception {
        List<String> indexRows = new ArrayList<>();
        List<String> libraryRows = new ArrayList<>();
        List<String> thunkRows = new ArrayList<>();
        List<String> graphRows = new ArrayList<>();
        List<String> callRelationRows = new ArrayList<>();
        programFunctionCount = currentProgram.getFunctionManager().getFunctionCount();
        exportedFunctionCount = 0;
        FunctionIterator counter = currentProgram.getFunctionManager().getFunctions(true);
        while (counter.hasNext()) {
            counter.next();
            exportedFunctionCount++;
        }
        externalFunctionCount = Math.max(0, programFunctionCount - exportedFunctionCount);
        libraryFunctionCount = 0;
        thunkFunctionCount = 0;
        bodyFunctionCount = 0;
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        int total = exportedFunctionCount;
        int number = 0;
        int reused = 0;
        pseudocodeNormalizationCount = 0;
        pseudocodeIdiomRows.clear();
        pseudocodeIdiomFunctions.clear();
        Set<String> liveFunctionIds = new TreeSet<>();
        qualityIssueRows.clear();
        qualityIssueFunctions.clear();
        qualityAggregates.clear();
        Map<String, CachedFunctionAnalysis> cachedFunctionAnalysis =
            readFunctionAnalysisCache();
        Map<String, CachedFunctionAnalysis> currentFunctionAnalysis = new TreeMap<>();
        int analysisCacheHits = 0;

        while (iterator.hasNext()) {
            checkCancelled();
            Function function = iterator.next();
            number++;
            monitor.setMessage("Exporting function " + number + "/" + total + ": " + function.getName());
            monitor.setMaximum(total);
            monitor.setProgress(number);

            String id = addr(function.getEntryPoint());
            liveFunctionIds.add(id);
            Path dir = functionsRoot.resolve(id);
            Files.createDirectories(dir);

            List<String> tags = new ArrayList<>();
            function.getTags().forEach(tag -> tags.add(tag.getName()));
            tags.sort(Comparator.naturalOrder());
            boolean library = tags.contains("LIBRARY");
            boolean thunk = function.isThunk();
            Function thunkTarget = thunk ? function.getThunkedFunction(true) : null;
            boolean bodyExported = !library && !thunk;
            if (library) libraryFunctionCount++;
            if (thunk) thunkFunctionCount++;
            if (bodyExported) bodyFunctionCount++;
            if (!bodyExported) {
                Files.deleteIfExists(dir.resolve("decomp.c"));
                Files.deleteIfExists(dir.resolve("listing.asm"));
            }

            Set<Function> callingFunctions = function.getCallingFunctions(monitor);
            Set<Function> calledFunctions = new HashSet<>(function.getCalledFunctions(monitor));
            if (thunkTarget != null && !thunkTarget.equals(function)) calledFunctions.add(thunkTarget);
            List<String> callers = functionSet(callingFunctions);
            List<String> callees = functionSet(calledFunctions);
            List<String> stringsUsed = new ArrayList<>();
            List<String> globalsUsed = new ArrayList<>();
            collectReferencedData(function, stringsUsed, globalsUsed);
            List<String> comments = collectComments(function);
            callRelationRows.addAll(functionCallRelations(function));
            Path decompPath = dir.resolve("decomp.c");
            FunctionFingerprints fingerprints = functionFingerprints(function, tags, callers,
                callees, stringsUsed, globalsUsed, comments, calledFunctions, decompPath);
            String fingerprint = fingerprints.canonical;
            Path fingerprintPath = dir.resolve("fingerprint.sha256");
            Path metaPath = dir.resolve("meta.json");
            String storedFingerprint = Files.exists(fingerprintPath) ?
                Files.readString(fingerprintPath, StandardCharsets.UTF_8).trim() : "";
            boolean reusable = Files.exists(metaPath) &&
                (fingerprint.equals(storedFingerprint) ||
                    fingerprints.paddedCallFixup.equals(storedFingerprint)) &&
                (!bodyExported ||
                    (Files.exists(decompPath) && Files.exists(dir.resolve("listing.asm")) &&
                        cachedDecompileSucceeded(metaPath)));
            if (reusable && bodyExported &&
                    requiresFreshDecompilerBody(function, decompPath)) {
                reusable = false;
                println("Discarding exporter-contaminated cached body: " + id);
            }

            if (reusable) {
                if (bodyExported) {
                    String originalBody = Files.readString(decompPath,
                        StandardCharsets.UTF_8);
                    String normalizedBody = normalizedFunctionText(function,
                        originalBody);
                    boolean presentationChanged = !normalizedBody.equals(originalBody);
                    if (presentationChanged) writeText(decompPath, normalizedBody);
                    CachedFunctionAnalysis cached = cachedFunctionAnalysis.get(id);
                    if (!presentationChanged && cached != null &&
                            cached.fingerprint.equals(fingerprint)) {
                        replayFunctionAnalysis(function, cached);
                        currentFunctionAnalysis.put(id, cached);
                        analysisCacheHits++;
                    }
                    else catalogAndCache(function, normalizedBody, fingerprint,
                        currentFunctionAnalysis);
                }
                String meta = Files.readString(metaPath, StandardCharsets.UTF_8).trim();
                indexRows.add(meta);
                if (library) libraryRows.add(meta);
                if (thunk) thunkRows.add(meta);
                for (String callee : callees) {
                    graphRows.add(jsonObject(field("from", functionId(function)), field("to", callee)));
                }
                // Canonical fingerprints omit absent optional dependencies.  Accept the
                // exactly equivalent historical form which padded an empty call-fixup,
                // then migrate it in place without forcing a decompile of unrelated code.
                if (!fingerprint.equals(storedFingerprint))
                    writeText(fingerprintPath, fingerprint + System.lineSeparator());
                reused++;
                continue;
            }

            String status;
            if (library) {
                status = "skipped_library";
            }
            else if (thunk) {
                status = "skipped_thunk";
            }
            else {
                DecompileResults result = decompiler.decompileFunction(
                    function, decompileTimeoutSeconds(function), monitor);
                String cCode = "";
                if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    status = "ok";
                    cCode = result.getDecompiledFunction().getC();
                    cCode = annotateExactIndirectCallsites(function, result, cCode);
                }
                else {
                    status = result == null ? "no_result" : nullToEmpty(result.getErrorMessage());
                }
                cCode = literalizeReferencedStrings(function, cCode);
                NormalizedCode normalized = normalizePseudocode(cCode);
                NormalizedCode machineNormalized =
                    normalizeMachinePseudocode(function, normalized.code);
                NormalizedCode enumNormalized =
                    normalizeKnownEnumCompositions(function, machineNormalized.code);
                cCode = annotatePseudocode(function, enumNormalized.code);
                writeText(decompPath, cCode);
                // A decompiler-only receiver/local is not present in Listing variables, but
                // its rendered virtual member still depends on the nested FunctionDefinition.
                // Recompute after writing so a first export records those scoped dependencies
                // immediately instead of requiring a second pass.
                fingerprint = functionFingerprints(function, tags, callers, callees,
                    stringsUsed, globalsUsed, comments, calledFunctions, decompPath).canonical;
                catalogAndCache(function, cCode, fingerprint, currentFunctionAnalysis);
                writeFunctionListing(function, dir.resolve("listing.asm"));
            }

            String meta = jsonObject(
                field("id", id),
                field("program", currentProgram.getName()),
                field("address", addr(function.getEntryPoint())),
                field("name", function.getName()),
                field("qualified_name", function.getName(true)),
                field("namespace", namespaceName(function.getParentNamespace())),
                field("source", function.getSymbol().getSource().toString()),
                rawField("size", Long.toString(function.getBody().getNumAddresses())),
                field("signature", function.getSignature().getPrototypeString(true)),
                field("calling_convention", nullToEmpty(function.getCallingConventionName())),
                rawField("parameter_count", Integer.toString(function.getParameterCount())),
                rawField("local_variable_count", Integer.toString(function.getLocalVariables().length)),
                rawField("stack_frame_size", Integer.toString(function.getStackFrame().getFrameSize())),
                rawField("thunk", Boolean.toString(thunk)),
                field("thunk_target", thunkTarget == null ? "" : functionId(thunkTarget)),
                rawField("external", Boolean.toString(function.isExternal())),
                rawField("inline", Boolean.toString(function.isInline())),
                rawField("noreturn", Boolean.toString(function.hasNoReturn())),
                rawField("varargs", Boolean.toString(function.hasVarArgs())),
                rawField("library", Boolean.toString(library)),
                rawField("body_exported", Boolean.toString(bodyExported)),
                field("decompile_status", status),
                rawField("tags", jsonStringArray(tags)),
                rawField("callers", jsonStringArray(callers)),
                rawField("callees", jsonStringArray(callees)),
                rawField("referenced_strings", jsonStringArray(stringsUsed)),
                rawField("referenced_globals", jsonStringArray(globalsUsed)),
                rawField("comments", jsonStringArray(comments)),
                rawField("parameters", variablesJson(function.getParameters())),
                rawField("locals", variablesJson(function.getLocalVariables()))
            );
            writeJson(metaPath, meta);
            writeText(fingerprintPath, fingerprint + System.lineSeparator());
            indexRows.add(meta);
            if (library) libraryRows.add(meta);
            if (thunk) thunkRows.add(meta);

            for (String callee : callees) {
                graphRows.add(jsonObject(
                    field("from", functionId(function)),
                    field("to", callee)
                ));
            }
        }

        writeJsonArray(programRoot.resolve("functions.json"), indexRows);
        writeJsonArray(programRoot.resolve("library_functions.json"), libraryRows);
        writeJsonArray(programRoot.resolve("thunk_functions.json"), thunkRows);
        writeJsonArray(programRoot.resolve("callgraph.json"), graphRows);
        atomicWrite(programRoot.resolve("call_relations.jsonl"), writer -> {
            for (String row : callRelationRows) {
                writer.write(row);
                writer.newLine();
            }
        });
        writePseudocodeArtifacts();
        writeCompileReadinessArtifacts(liveFunctionIds);
        writeFunctionAnalysisCache(currentFunctionAnalysis);
        pruneStaleFunctionDirectories(liveFunctionIds);
        println("Functions reused without decompilation: " + reused + "/" + total);
        println("Function quality/idiom analyses reused: " + analysisCacheHits + "/" +
            bodyFunctionCount);
        if (fingerprintCfgFallbackCount > 0)
            println("Fingerprint CFG fallbacks: " + fingerprintCfgFallbackCount +
                " (first: " + String.join(", ", fingerprintCfgFallbackFunctions) + ")");
    }

    private int decompileTimeoutSeconds(Function function) {
        return DECOMPILE_TIMEOUT_SECONDS;
    }

    /** A timed-out cached body must never become permanently reusable. */
    private boolean cachedDecompileSucceeded(Path metaPath) {
        try {
            String meta = Files.readString(metaPath, StandardCharsets.UTF_8);
            return Pattern.compile("\\\"decompile_status\\\"\\s*:\\s*\\\"ok\\\"")
                .matcher(meta).find();
        }
        catch (IOException ignored) {
            return false;
        }
    }

    private void normalizeAndCatalog(Function function, Path path, String fingerprint,
            Map<String, CachedFunctionAnalysis> cache) throws IOException {
        String original = Files.readString(path, StandardCharsets.UTF_8);
        String annotated = normalizedFunctionText(function, original);
        if (!annotated.equals(original)) writeText(path, annotated);
        catalogAndCache(function, annotated, fingerprint, cache);
    }

    /**
     * Cached bodies are a performance artifact, not a frozen presentation layer.  Run the
     * current idempotent normalizers over every reused body and invalidate only its cheap
     * text-quality cache when the spelling changes; never force a Ghidra decompile merely
     * because an exporter rule improved.
     */
    private String normalizedFunctionText(Function function, String original) {
        String literalized = literalizeReferencedStrings(function,
            stripExporterPseudocodeComments(original));
        NormalizedCode normalized = normalizePseudocode(literalized);
        NormalizedCode machineNormalized =
            normalizeMachinePseudocode(function, normalized.code);
        NormalizedCode enumNormalized =
            normalizeKnownEnumCompositions(function, machineNormalized.code);
        return annotatePseudocode(function, enumNormalized.code);
    }

    /** Cached bodies retain presentation hints, but every pass must derive them anew. */
    private String stripExporterPseudocodeComments(String code) {
        if (code == null || code.isEmpty() || !code.contains("ST_PSEUDO[")) return code;
        return Pattern.compile(
            "(?ms)^[ \\t]*/\\*\\s*ST_PSEUDO\\[.*?\\*/[ \\t]*(?:\\R|$)")
            .matcher(code).replaceAll("");
    }

    private void catalogAndCache(Function function, String code, String fingerprint,
            Map<String, CachedFunctionAnalysis> cache) {
        int pseudocodeStart = pseudocodeIdiomRows.size();
        int qualityStart = qualityIssueRows.size();
        int normalizationStart = pseudocodeNormalizationCount;
        catalogPseudocodeIdioms(function, code);
        catalogQualityIssues(function, code);
        List<String> pseudocodeRows = List.copyOf(
            pseudocodeIdiomRows.subList(pseudocodeStart, pseudocodeIdiomRows.size()));
        List<String> qualityRows = List.copyOf(
            qualityIssueRows.subList(qualityStart, qualityIssueRows.size()));
        cache.put(addr(function.getEntryPoint()), new CachedFunctionAnalysis(
            fingerprint, pseudocodeNormalizationCount - normalizationStart,
            pseudocodeRows, qualityRows, cachedQualityAggregates(qualityRows)));
    }

    private void replayFunctionAnalysis(Function function, CachedFunctionAnalysis cached) {
        String functionAddress = addr(function.getEntryPoint());
        pseudocodeNormalizationCount += cached.normalizationCount;
        pseudocodeIdiomRows.addAll(cached.pseudocodeRows);
        qualityIssueRows.addAll(cached.qualityRows);
        if (!cached.pseudocodeRows.isEmpty()) pseudocodeIdiomFunctions.add(functionAddress);
        if (!cached.qualityRows.isEmpty()) qualityIssueFunctions.add(functionAddress);
        for (Map.Entry<String, Integer> item : cached.qualityOccurrences.entrySet()) {
            QualityAggregate aggregate = qualityAggregates.computeIfAbsent(item.getKey(),
                ignored -> new QualityAggregate());
            aggregate.functions++;
            aggregate.occurrences += item.getValue();
        }
    }

    private Map<String, Integer> cachedQualityAggregates(List<String> rows) {
        Map<String, Integer> result = new TreeMap<>();
        for (String row : rows) {
            String kind = jsonStringMember(row, "kind");
            int occurrences = jsonIntegerMember(row, "occurrences");
            if (!kind.isBlank() && occurrences >= 0)
                result.merge(kind, occurrences, Integer::sum);
        }
        return result;
    }

    private String jsonStringMember(String json, String name) {
        String prefix = "\"" + name + "\":\"";
        int start = json.indexOf(prefix);
        if (start < 0) return "";
        start += prefix.length();
        int end = json.indexOf('"', start);
        return end < 0 ? "" : json.substring(start, end);
    }

    private int jsonIntegerMember(String json, String name) {
        String prefix = "\"" + name + "\":";
        int start = json.indexOf(prefix);
        if (start < 0) return -1;
        start += prefix.length();
        int end = start;
        while (end < json.length() && Character.isDigit(json.charAt(end))) end++;
        try { return Integer.parseInt(json.substring(start, end)); }
        catch (RuntimeException exception) { return -1; }
    }

    private Map<String, CachedFunctionAnalysis> readFunctionAnalysisCache()
            throws IOException {
        Map<String, CachedFunctionAnalysis> result = new HashMap<>();
        Path path = programRoot.resolve(".function_analysis_cache.tsv");
        if (!Files.isRegularFile(path)) return result;
        List<String> lines = Files.readAllLines(path, StandardCharsets.UTF_8);
        String header = "schema_version\tfunction_address\tfingerprint\t" +
            "analysis_source_sha256\tnormalization_count\t" +
            "pseudocode_rows_b64\tquality_rows_b64\tquality_aggregates_b64";
        if (lines.isEmpty() || !header.equals(lines.get(0))) return result;
        int stale = 0;
        int malformed = 0;
        for (int line = 1; line < lines.size(); line++) {
            if (lines.get(line).isBlank()) continue;
            try {
                String[] fields = lines.get(line).split("\t", -1);
                if (fields.length != 8 ||
                        !fields[1].matches("[0-9A-Fa-f]{8,16}") ||
                        !fields[2].matches("[0-9a-f]{64}")) {
                    malformed++;
                    continue;
                }
                if (!FUNCTION_ANALYSIS_CACHE_SCHEMA.equals(fields[0]) ||
                        !functionAnalysisSourceHash.equals(fields[3])) {
                    stale++;
                    continue;
                }
                int normalizationCount = Integer.parseInt(fields[4]);
                if (normalizationCount < 0) throw new IllegalArgumentException(
                    "negative normalization count");
                List<String> pseudocodeRows = decodeCacheRows(fields[5]);
                List<String> qualityRows = decodeCacheRows(fields[6]);
                Map<String, Integer> aggregates = decodeCacheAggregates(fields[7]);
                if (!aggregates.equals(cachedQualityAggregates(qualityRows))) {
                    malformed++;
                    continue;
                }
                result.put(fields[1].toUpperCase(Locale.ROOT),
                    new CachedFunctionAnalysis(fields[2], normalizationCount,
                        pseudocodeRows, qualityRows, aggregates));
            }
            catch (RuntimeException exception) { malformed++; }
        }
        if (stale > 0)
            println("Ignored stale function-analysis cache rows: " + stale);
        if (malformed > 0)
            println("Ignored malformed function-analysis cache rows: " + malformed);
        return result;
    }

    private void writeFunctionAnalysisCache(Map<String, CachedFunctionAnalysis> cache)
            throws IOException {
        Path path = programRoot.resolve(".function_analysis_cache.tsv");
        atomicWrite(path, writer -> {
            writer.write("schema_version\tfunction_address\tfingerprint\t" +
                "analysis_source_sha256\tnormalization_count\t" +
                "pseudocode_rows_b64\tquality_rows_b64\tquality_aggregates_b64\n");
            for (Map.Entry<String, CachedFunctionAnalysis> item : cache.entrySet()) {
                CachedFunctionAnalysis value = item.getValue();
                writer.write(FUNCTION_ANALYSIS_CACHE_SCHEMA + "\t" + item.getKey() +
                    "\t" + value.fingerprint + "\t" + functionAnalysisSourceHash +
                    "\t" + value.normalizationCount + "\t" +
                    encodeCacheRows(value.pseudocodeRows) + "\t" +
                    encodeCacheRows(value.qualityRows) + "\t" +
                    encodeCacheAggregates(value.qualityOccurrences) + "\n");
            }
        });
    }

    private String encodeCacheRows(List<String> rows) {
        return Base64.getEncoder().encodeToString(
            String.join("\n", rows).getBytes(StandardCharsets.UTF_8));
    }

    private List<String> decodeCacheRows(String encoded) {
        if (encoded.isBlank()) return List.of();
        String decoded = new String(Base64.getDecoder().decode(encoded),
            StandardCharsets.UTF_8);
        return decoded.isEmpty() ? List.of() : List.of(decoded.split("\n", -1));
    }

    private String encodeCacheAggregates(Map<String, Integer> values) {
        List<String> rows = new ArrayList<>();
        for (Map.Entry<String, Integer> item : values.entrySet())
            rows.add(item.getKey() + "=" + item.getValue());
        return Base64.getEncoder().encodeToString(
            String.join("\n", rows).getBytes(StandardCharsets.UTF_8));
    }

    private Map<String, Integer> decodeCacheAggregates(String encoded) {
        Map<String, Integer> result = new TreeMap<>();
        for (String row : decodeCacheRows(encoded)) {
            int separator = row.lastIndexOf('=');
            if (separator <= 0) throw new IllegalArgumentException("invalid aggregate");
            result.put(row.substring(0, separator),
                Integer.parseInt(row.substring(separator + 1)));
        }
        return result;
    }

    /**
     * Ghidra renders a terminal x86 INT3 as a call through the value returned by
     * swi(3).  That is not a real indirect call.  In this corpus there is no
     * attached debugger and continuation is deliberately unsupported, so expose
     * the intended standalone behavior as a noreturn helper.
     */
    private NormalizedCode normalizePseudocode(String code) {
        if (code == null || code.isEmpty()) return new NormalizedCode("", 0);
        NormalizedCode legacyScalarLifetimes =
            normalizeLegacyMalformedScalarLifetimes(code);
        NormalizedCode legacyBulkCopy =
            normalizeLegacyBulkCopyLiveouts(legacyScalarLifetimes.code);
        NormalizedCode bulkZero = normalizeBulkZeroLoops(legacyBulkCopy.code);
        NormalizedCode bulkCopy = normalizeBulkCopyLoops(bulkZero.code);
        NormalizedCode stackObjects = normalizeRawStackZeroObjects(bulkCopy.code);
        NormalizedCode darrayAliases = normalizeDArrayElementAliases(stackObjects.code);
        NormalizedCode darrayAddresses =
            normalizeDArrayElementAddresses(darrayAliases.code);
        NormalizedCode virtualCalls =
            normalizeExplicitThisVirtualCalls(darrayAddresses.code);
        NormalizedCode affineCancellation =
            normalizeAffineSelfCancellation(virtualCalls.code);
        NormalizedCode gridIndexing =
            normalizeGridCellIndexing(affineCancellation.code);
        NormalizedCode objectByteOffsets =
            normalizeTypedMemberByteOffsets(gridIndexing.code);
        NormalizedCode recordAddresses =
            normalizeGlobalRecordAddresses(objectByteOffsets.code);
        NormalizedCode narrowReturns =
            normalizeNarrowReturnPieceAssignments(recordAddresses.code);
        NormalizedCode lowPieces =
            normalizeLowPieceCompositions(narrowReturns.code);
        NormalizedCode partialPieces =
            normalizePartialPieceSyntax(lowPieces.code);
        NormalizedCode typedFields =
            normalizeExplicitByteOffsetFields(partialPieces.code);
        NormalizedCode castedFields =
            normalizeCastedGenericFieldValues(typedFields.code);
        NormalizedCode byteOffsets =
            normalizeSimpleByteOffsetDereferences(castedFields.code);
        NormalizedCode packedBits =
            normalizePackedBitOperations(byteOffsets.code);
        NormalizedCode signedQuartering =
            normalizeSignedQuartering(packedBits.code);
        NormalizedCode fixedRounding =
            normalizeFixed16Rounding(signedQuartering.code);
        code = fixedRounding.code;
        String[] lines = code.split("\\R", -1);
        List<String> output = new ArrayList<>();
        int replacements = legacyScalarLifetimes.replacements +
            legacyBulkCopy.replacements +
            bulkZero.replacements + bulkCopy.replacements +
            stackObjects.replacements +
            darrayAliases.replacements + darrayAddresses.replacements +
            virtualCalls.replacements + affineCancellation.replacements +
            gridIndexing.replacements + objectByteOffsets.replacements +
            recordAddresses.replacements +
            narrowReturns.replacements + lowPieces.replacements +
            partialPieces.replacements + typedFields.replacements +
            castedFields.replacements +
            byteOffsets.replacements + packedBits.replacements + signedQuartering.replacements +
            fixedRounding.replacements;
        for (int index = 0; index < lines.length; index++) {
            Matcher assignment = INT3_ASSIGNMENT.matcher(lines[index]);
            if (!assignment.matches() || index + 1 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String variable = assignment.group(2);
            Matcher assignedCall = ASSIGNED_INDIRECT_CALL.matcher(lines[index + 1]);
            Matcher plainCall = PLAIN_INDIRECT_CALL.matcher(lines[index + 1]);
            String returnedVariable = "";
            boolean matched = false;
            if (assignedCall.matches() && variable.equals(assignedCall.group(3))) {
                returnedVariable = assignedCall.group(2);
                matched = true;
            }
            else if (plainCall.matches() && variable.equals(plainCall.group(2))) matched = true;
            if (!matched) {
                output.add(lines[index]);
                continue;
            }
            output.add(assignment.group(1) +
                "STDebugBreak(); /* noreturn in standalone pseudocode */");
            replacements++;
            index++;
            if (index + 1 < lines.length) {
                String next = lines[index + 1].trim();
                if ((!returnedVariable.isBlank() && next.equals("return " + returnedVariable + ";")) ||
                        (returnedVariable.isBlank() && next.equals("return;"))) index++;
            }
        }
        String normalized = String.join(System.lineSeparator(), output);
        NormalizedCode nullPointers = normalizeTypedNullPointers(normalized);
        NormalizedCode nullCases = normalizeNullSwitchCases(nullPointers.code);
        NormalizedCode scalarSwitches =
            normalizePointerTypedSwitchDomains(nullCases.code);
        NormalizedCode semicolons =
            normalizeDetachedSemicolons(scalarSwitches.code);
        NormalizedCode scalarLifetimes =
            normalizeIntegerStoredInPointerLifetimes(semicolons.code);
        NormalizedCode narrowPromotions =
            normalizeRedundantNarrowToDoublePromotions(scalarLifetimes.code);
        NormalizedCode biasedDivisions =
            normalizeBiasedNarrowDivisions(narrowPromotions.code);
        NormalizedCode deadCodePointers =
            removeDeadCodePointerDeclarations(biasedDivisions.code);
        NormalizedCode deadSynthetics =
            removeDeadSyntheticDeclarations(deadCodePointers.code);
        return new NormalizedCode(deadSynthetics.code,
            replacements + nullPointers.replacements + nullCases.replacements +
                scalarSwitches.replacements + semicolons.replacements +
                scalarLifetimes.replacements + deadCodePointers.replacements +
                narrowPromotions.replacements + biasedDivisions.replacements +
                deadSynthetics.replacements);
    }

    /**
     * A fixed EBP-relative REP STOS span is a real local storage object even when
     * Ghidra cannot create one Listing variable because another lexical lifetime
     * overlaps the same bytes.  The preceding bulk-zero pass has already proved
     * the exact machine span.  Give only one unanimous, entirely local raw stack
     * root an explicit byte-array identity; the byte element type deliberately
     * asserts extent and aliasable storage, not a semantic record layout.
     */
    private NormalizedCode normalizeRawStackZeroObjects(String code) {
        if (code == null || code.isEmpty() || !code.contains("&stack0x") ||
                !code.contains(BULK_ZERO_MARKER))
            return new NormalizedCode(code, 0);
        Map<String, Set<Long>> observed = new TreeMap<>();
        Matcher matcher = RAW_STACK_ZERO_OBJECT.matcher(code);
        while (matcher.find()) {
            long bytes = parseIntegerLiteral(matcher.group("bytes"));
            if (bytes > 1 && bytes <= 0x100000)
                observed.computeIfAbsent(matcher.group("offset").toLowerCase(Locale.ROOT),
                    ignored -> new TreeSet<>()).add(bytes);
        }
        if (observed.isEmpty()) return new NormalizedCode(code, 0);

        Map<String, StackObjectPresentation> objects = new TreeMap<>();
        for (Map.Entry<String, Set<Long>> entry : observed.entrySet()) {
            if (entry.getValue().size() != 1) continue;
            long unsigned;
            try { unsigned = Long.parseUnsignedLong(entry.getKey(), 16); }
            catch (NumberFormatException exception) { continue; }
            long offset = unsigned >= 0x80000000L ? unsigned - 0x100000000L : unsigned;
            long bytes = entry.getValue().iterator().next();
            if (offset >= 0 || offset + bytes > 0) continue;
            String name = "stack_bytes_neg_" +
                Long.toHexString(-offset).toUpperCase(Locale.ROOT);
            if (Pattern.compile("\\b" + Pattern.quote(name) + "\\b").matcher(code).find())
                continue;
            objects.put(entry.getKey(), new StackObjectPresentation(name, bytes));
        }
        if (objects.isEmpty()) return new NormalizedCode(code, 0);

        String normalized = code;
        int replacements = 0;
        for (Map.Entry<String, StackObjectPresentation> entry : objects.entrySet()) {
            Pattern raw = Pattern.compile("&stack0x" + Pattern.quote(entry.getKey()),
                Pattern.CASE_INSENSITIVE);
            Matcher references = raw.matcher(normalized);
            StringBuffer rewritten = new StringBuffer();
            int count = 0;
            while (references.find()) {
                references.appendReplacement(rewritten,
                    Matcher.quoteReplacement(entry.getValue().name));
                count++;
            }
            references.appendTail(rewritten);
            if (count == 0) continue;
            normalized = rewritten.toString();
            replacements += count;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);

        // A recovered comment may itself contain braces (for example a set of
        // direct offsets).  Only a brace occupying its own source line can be
        // the opening brace emitted by the decompiler for this function body.
        Matcher bodyBrace = Pattern.compile("(?m)^\\{[ \\t]*$").matcher(normalized);
        if (!bodyBrace.find()) return new NormalizedCode(code, 0);
        int newline = normalized.indexOf('\n', bodyBrace.end());
        if (newline < 0) return new NormalizedCode(code, 0);
        StringBuilder declarations = new StringBuilder();
        for (StackObjectPresentation object : objects.values())
            declarations.append("  byte ").append(object.name).append('[')
                .append("0x").append(Long.toHexString(object.bytes)).append("];")
                .append(" /* exact EBP-relative stack object */")
                .append(System.lineSeparator());
        normalized = normalized.substring(0, newline + 1) + declarations +
            normalized.substring(newline + 1);
        return new NormalizedCode(normalized, replacements + objects.size());
    }

    /**
     * MSVC lowers the game's signed world-coordinate division to a 16-bit quotient plus an
     * explicit negative-value bias.  Ghidra recognizes the constant division itself but leaves
     * the redundant sign/magic-product correction in place.  Fold only the complete canonical
     * three-statement shape, including one of the two exact divisor/multiplier pairs present in
     * the image.  The helper deliberately preserves the source's `negative => quotient - 1`
     * boundary behavior; it is not mislabeled as mathematical floor division.
     */
    private NormalizedCode normalizeBiasedNarrowDivisions(String code) {
        if (code == null || code.isEmpty() ||
                (!code.contains("0x28c1979") && !code.contains("0x51eb851f") &&
                    !code.contains("/ 200") && !code.contains("/200")))
            return new NormalizedCode(code, 0);
        Pattern signAssignment = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)(?<sign>[A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*" +
            "\\(short\\)\\((?<value>[A-Za-z_$][A-Za-z0-9_$]*)\\s*>>\\s*0x1f\\);" +
            "[ \\t]*\\R");
        Matcher assignments = signAssignment.matcher(code);
        StringBuilder output = new StringBuilder(code.length());
        int copiedThrough = 0, replacements = 0;
        while (assignments.find()) {
            if (assignments.start() < copiedThrough) continue;
            String value = assignments.group("value");
            String sign = assignments.group("sign");
            String quotedValue = Pattern.quote(value);
            Pattern branch = Pattern.compile(
                "\\G[ \\t]*if\\s*\\(\\s*" + quotedValue +
                "\\s*<\\s*0\\s*\\)\\s*\\{\\s*" +
                "(?<negativeComments>(?:/\\*.*?\\*/\\s*)*)" +
                "(?<target>[A-Za-z_$][A-Za-z0-9_$]*)" +
                "\\s*=\\s*(?<negative>[^;]+);\\s*\\}\\s*else\\s*\\{\\s*" +
                "(?<positiveComments>(?:/\\*.*?\\*/\\s*)*)" +
                "\\k<target>\\s*=\\s*(?<positive>[^;]+);\\s*\\}",
                Pattern.DOTALL);
            Matcher branches = branch.matcher(code);
            branches.region(assignments.end(), code.length());
            if (!branches.find()) continue;
            String negative = compactExpression(branches.group("negative"));
            String positive = compactExpression(branches.group("positive"));
            String divisor = matchingBiasedDivisor(value, sign, negative, positive);
            if (divisor.isBlank()) continue;
            output.append(code, copiedThrough, assignments.start());
            String comments = branches.group("negativeComments") +
                branches.group("positiveComments");
            if (comments.contains("ST_PSEUDO[stack_slot_reuse]"))
                output.append(assignments.group("indent"))
                    .append("/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */")
                    .append(System.lineSeparator());
            output.append(assignments.group("indent")).append(branches.group("target"))
                .append(" = STBiasedDiv16(").append(value).append(", ")
                .append(divisor)
                .append("); /* exact signed 16-bit grid-index division */");
            copiedThrough = branches.end();
            replacements++;
        }
        String magicNormalized = code;
        if (replacements != 0) {
            output.append(code, copiedThrough, code.length());
            magicNormalized = output.toString();
        }
        NormalizedCode direct = normalizeDirectBiasedNarrowDivisions(magicNormalized);
        NormalizedCode inline = normalizeInlineBiasedNarrowDivisions(direct.code);
        return new NormalizedCode(inline.code,
            replacements + direct.replacements + inline.replacements);
    }

    /** Fold the same exact branch when Ghidra kept the sign correction inline. */
    private NormalizedCode normalizeInlineBiasedNarrowDivisions(String code) {
        Pattern branch = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)if\\s*\\(\\s*" +
            "(?<value>[A-Za-z_$][A-Za-z0-9_$]*)\\s*<\\s*0\\s*\\)\\s*\\{\\s*" +
            "(?<negativeComments>(?:/\\*.*?\\*/\\s*)*)" +
            "(?<target>[A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*(?<negative>[^;]+);" +
            "\\s*\\}\\s*else\\s*\\{\\s*" +
            "(?<positiveComments>(?:/\\*.*?\\*/\\s*)*)" +
            "\\k<target>\\s*=\\s*(?<positive>[^;]+);\\s*\\}",
            Pattern.DOTALL);
        Matcher matcher = branch.matcher(code);
        StringBuilder output = new StringBuilder(code.length());
        int copiedThrough = 0, replacements = 0;
        while (matcher.find()) {
            String divisor = matchingInlineBiasedDivisor(matcher.group("value"),
                compactExpression(matcher.group("negative")),
                compactExpression(matcher.group("positive")));
            if (divisor.isBlank()) continue;
            output.append(code, copiedThrough, matcher.start());
            String comments = matcher.group("negativeComments") +
                matcher.group("positiveComments");
            if (comments.contains("ST_PSEUDO[stack_slot_reuse]"))
                output.append(matcher.group("indent"))
                    .append("/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */")
                    .append(System.lineSeparator());
            output.append(matcher.group("indent")).append(matcher.group("target"))
                .append(" = STBiasedDiv16(").append(matcher.group("value"))
                .append(", ").append(divisor)
                .append("); /* exact signed 16-bit grid-index division */");
            copiedThrough = matcher.end();
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        output.append(code, copiedThrough, code.length());
        return new NormalizedCode(output.toString(), replacements);
    }

    private NormalizedCode normalizeDirectBiasedNarrowDivisions(String code) {
        Pattern branch = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)if\\s*\\(\\s*" +
            "(?<value>[A-Za-z_$][A-Za-z0-9_$]*)\\s*<\\s*0\\s*\\)\\s*\\{\\s*" +
            "(?<negativeComments>(?:/\\*.*?\\*/\\s*)*)" +
            "(?<target>[A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*" +
            "\\(short\\)\\(\\s*\\k<value>\\s*/\\s*200\\s*\\)\\s*\\+\\s*-1\\s*;" +
            "\\s*\\}\\s*else\\s*\\{\\s*" +
            "(?<positiveComments>(?:/\\*.*?\\*/\\s*)*)" +
            "\\k<target>\\s*=\\s*(?:\\(int\\))?\\(short\\)\\(" +
            "\\s*\\k<value>\\s*/\\s*200\\s*\\)\\s*;\\s*\\}",
            Pattern.DOTALL);
        Matcher matcher = branch.matcher(code);
        StringBuilder output = new StringBuilder(code.length());
        int copiedThrough = 0, replacements = 0;
        while (matcher.find()) {
            output.append(code, copiedThrough, matcher.start());
            String comments = matcher.group("negativeComments") +
                matcher.group("positiveComments");
            if (comments.contains("ST_PSEUDO[stack_slot_reuse]"))
                output.append(matcher.group("indent"))
                    .append("/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */")
                    .append(System.lineSeparator());
            output.append(matcher.group("indent")).append(matcher.group("target"))
                .append(" = STBiasedDiv16(").append(matcher.group("value"))
                .append(", 200); /* exact signed 16-bit grid-index division */");
            copiedThrough = matcher.end();
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        output.append(code, copiedThrough, code.length());
        return new NormalizedCode(output.toString(), replacements);
    }

    private String matchingBiasedDivisor(String value, String sign,
            String negative, String positive) {
        String compactValue = compactExpression(value);
        String compactSign = compactExpression(sign);
        String negativeCore = biasedBranchCore(negative, true);
        String positiveCore = biasedBranchCore(positive, false);
        if (negativeCore.isBlank() || !negativeCore.equals(positiveCore)) return "";
        for (String[] pair : List.of(
                new String[] { "0xc9", "0x28c1979" },
                new String[] { "200", "0x51eb851f" })) {
            String division = "((short)(" + compactValue + "/" + pair[0] + ")+" +
                compactSign + ")-(short)((longlong)" + compactValue + "*" + pair[1] +
                ">>0x3f)";
            if (negativeCore.equals(division)) return pair[0];
        }
        return "";
    }

    private String matchingInlineBiasedDivisor(String value,
            String negative, String positive) {
        String compactValue = compactExpression(value);
        String negativeCore = biasedBranchCore(negative, true);
        String positiveCore = biasedBranchCore(positive, false);
        if (negativeCore.isBlank() || !negativeCore.equals(positiveCore)) return "";
        for (String[] pair : List.of(
                new String[] { "0xc9", "0x28c1979" },
                new String[] { "200", "0x51eb851f" })) {
            if (negativeCore.equals(compactValue + "/" + pair[0])) return pair[0];
            for (String cast : List.of("", "(int)")) {
                String correction = "(short)((longlong)" + cast + compactValue + "*" +
                    pair[1] + ">>0x3f)";
                for (String shift : List.of("0xf", "0x1f")) {
                    String core = "(" + compactValue + "/" + pair[0] + "+(" +
                        compactValue + ">>" + shift + "))-" + correction;
                    if (negativeCore.equals(core)) return pair[0];
                    core = "((short)(" + compactValue + "/" + pair[0] + ")+(short)(" +
                        compactValue + ">>" + shift + "))-" + correction;
                    if (negativeCore.equals(core)) return pair[0];
                }
            }
        }
        return "";
    }

    /** Remove only result-width casts/parentheses which STBiasedDiv16 itself preserves. */
    private String biasedBranchCore(String expression, boolean negative) {
        String value = compactExpression(expression);
        value = stripBalancedOuterParentheses(value);
        if (negative) {
            if (value.endsWith("+-1")) value = value.substring(0, value.length() - 3);
            else if (value.endsWith("-1")) value = value.substring(0, value.length() - 2);
            else return "";
        }
        boolean changed;
        do {
            changed = false;
            String stripped = stripBalancedOuterParentheses(value);
            if (!stripped.equals(value)) {
                value = stripped;
                changed = true;
            }
            for (String cast : List.of("(int)", "(short)")) {
                if (!value.startsWith(cast)) continue;
                String remainder = value.substring(cast.length());
                if (remainder.startsWith("(") &&
                        matchingDelimiter(remainder, 0, '(', ')') ==
                            remainder.length() - 1)
                    value = remainder.substring(1, remainder.length() - 1);
                else if ("(int)".equals(cast) && remainder.startsWith("(short)")) {
                    String nested = remainder.substring("(short)".length());
                    if (!nested.startsWith("(") ||
                            matchingDelimiter(nested, 0, '(', ')') != nested.length() - 1)
                        continue;
                    value = remainder;
                }
                else continue;
                changed = true;
                break;
            }
        } while (changed);
        return value;
    }

    private int matchingDelimiter(String value, int start, char open, char close) {
        int depth = 0;
        for (int index = start; index < value.length(); index++) {
            char current = value.charAt(index);
            if (current == open) depth++;
            else if (current == close && --depth == 0) return index;
        }
        return -1;
    }

    private String compactExpression(String expression) {
        return expression == null ? "" : expression.replaceAll("\\s+", "");
    }

    /**
     * Repair exporter-owned scalar-lifetime lines written by the pre-v15
     * normalizer.  That implementation removed the first and last parenthesis
     * whenever an expression happened to start and end with one, without
     * proving that they formed one balanced outer pair.  Casts and indirect
     * calls consequently survived in the cache as, for example,
     * `int)(short)(value` or `**(code **)*slot)(argument`.
     *
     * The lifetime marker is emitted only by this exporter.  Reinsert the pair
     * only when the expression is balanced overall but its prefix goes below
     * zero: that is the exact signature of the removed enclosing pair.  Fresh
     * Ghidra output and user comments cannot enter this migration accidentally.
     */
    private NormalizedCode normalizeLegacyMalformedScalarLifetimes(String code) {
        final String marker =
            "/* split integer lifetime from pointer-typed SSA storage */";
        if (code == null || code.isEmpty() || !code.contains(marker))
            return new NormalizedCode(code, 0);
        String[] lines = code.split("\\R", -1);
        Pattern declaration = Pattern.compile(
            "^(?<prefix>[ \\t]*int[ \\t]+scalar_[A-Za-z_$][A-Za-z0-9_$]*" +
            "[ \\t]*=[ \\t]*)(?<expr>.+);[ \\t]*" +
            Pattern.quote(marker) + "[ \\t]*$");
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher matcher = declaration.matcher(lines[index]);
            if (!matcher.matches()) continue;
            String expression = matcher.group("expr").trim();
            int depth = 0;
            int minimumDepth = 0;
            for (int offset = 0; offset < expression.length(); offset++) {
                char value = expression.charAt(offset);
                if (value == '(') depth++;
                else if (value == ')') depth--;
                minimumDepth = Math.min(minimumDepth, depth);
            }
            if (depth != 0 || minimumDepth >= 0) continue;
            lines[index] = matcher.group("prefix") + "(" + expression + "); " + marker;
            replacements++;
        }
        return replacements == 0 ? new NormalizedCode(code, 0) :
            new NormalizedCode(String.join(System.lineSeparator(), lines), replacements);
    }

    /**
     * An older scalar-lifetime pass accepted '*' tokens inside a raw callback
     * expression as multiplication.  Parenthesis repair can make that cached
     * text syntactically valid, but it cannot recover the original Ghidra SSA
     * lifetime which the pass replaced.  Re-decompile only this exact
     * exporter-owned contamination pattern; ordinary raw indirect calls and
     * valid scalar splits continue to use the address-stable cache.
     */
    private boolean requiresFreshDecompilerBody(Function function, Path path)
            throws IOException {
        if (!Files.isRegularFile(path)) return false;
        final String marker =
            "/* split integer lifetime from pointer-typed SSA storage */";
        String code = Files.readString(path, StandardCharsets.UTF_8);
        int expectedCallsites = indirectCallsiteAddresses(function).size();
        if (expectedCallsites > 0) {
            int renderedCallsites = 0;
            Matcher callsite = Pattern.compile(
                "ST_CALLSITE\\[[0-9A-Fa-f]{8,16}\\]").matcher(code);
            while (callsite.find()) renderedCallsites++;
            // Older exporter revisions could place the same CALLIND marker on
            // every wrapped argument line because several Clang tokens shared
            // one p-code op.  Require exactly one marker per machine callsite;
            // this is a bounded one-time cache migration, not a semantic
            // whole-program invalidation.
            if (renderedCallsites != expectedCallsites) return true;
        }
        if (code.contains(marker) && code.lines().anyMatch(line ->
                line.contains(marker) && line.contains("scalar_") &&
                    line.contains("code **"))) return true;
        if (Pattern.compile("(?m)^\\s*otherwise retain buffer arithmetic \\*/\\s*$")
                .matcher(code).find()) return true;
        Matcher reused = Pattern.compile(
            "\\b(?<name>param_[0-9]+_after_write(?:_[0-9]+)?)\\b").matcher(code);
        Set<String> reusedNames = new HashSet<>();
        while (reused.find()) reusedNames.add(reused.group("name"));
        for (String name : reusedNames) {
            Pattern declaration = Pattern.compile(
                "(?m)^\\s*(?:auto|void|byte|char|u?short|u?int|u?long|undefined[1248]?|" +
                "[A-Za-z_$][A-Za-z0-9_$:]*)\\s*(?:\\*+\\s*)?" +
                Pattern.quote(name) + "\\s*(?:=|;)");
            if (!declaration.matcher(code).find()) return true;
        }
        int stackDeclaration = code.indexOf("byte stack_bytes_neg_");
        if (stackDeclaration >= 0) {
            Matcher bodyBrace = Pattern.compile("(?m)^\\{[ \\t]*$").matcher(code);
            if (!bodyBrace.find() || stackDeclaration < bodyBrace.start()) return true;
        }
        return malformedDArrayAtCall(code);
    }

    /**
     * Preserve the exact machine address of every CALLIND in the textual corpus.
     * Ghidra's C spelling can perform structure-pointer arithmetic over an
     * incomplete physical vtable, so the rendered member path alone is not an
     * address-stable callsite identity.  Clang tokens retain the originating
     * p-code sequence address; place one exporter-owned marker immediately
     * before the corresponding source line.  Downstream source assembly may
     * then bind the physical slot and any per-instruction override without
     * matching C lines to assembly by order.
     */
    private String annotateExactIndirectCallsites(Function function,
            DecompileResults result, String code) {
        Map<Address, String> exact = indirectCallsiteAddresses(function);
        ClangTokenGroup markup = result.getCCodeMarkup();
        if (exact.isEmpty() || markup == null || code == null || code.isEmpty())
            return code;
        Map<Address, Integer> firstLineByAddress = new TreeMap<>();
        PrettyPrinter printer = new PrettyPrinter(function, markup, null);
        for (ClangLine line : printer.getLines()) {
            for (ClangToken token : line.getAllTokens()) {
                PcodeOp op = token.getPcodeOp();
                if (op == null || (op.getOpcode() != PcodeOp.CALLIND &&
                        op.getOpcode() != PcodeOp.CALL)) continue;
                Address address = op.getSeqnum().getTarget();
                if (exact.containsKey(address))
                    firstLineByAddress.merge(address, line.getLineNumber(), Math::min);
            }
        }
        Map<Integer, Map<Address, String>> byLine = new TreeMap<>();
        for (Map.Entry<Address, Integer> entry : firstLineByAddress.entrySet())
            byLine.computeIfAbsent(entry.getValue(), ignored -> new TreeMap<>())
                .put(entry.getKey(), exact.get(entry.getKey()));
        if (byLine.isEmpty()) return code;
        String[] lines = code.split("\\R", -1);
        StringBuilder annotated = new StringBuilder(code.length() + byLine.size() * 128);
        for (int index = 0; index < lines.length; index++) {
            Map<Address, String> markers = byLine.get(index + 1);
            if (markers != null) {
                String indent = lines[index].replaceFirst("^(\\s*).*$", "$1");
                for (Map.Entry<Address, String> marker : markers.entrySet())
                    annotated.append(indent).append("/* ST_CALLSITE[")
                        .append(addr(marker.getKey())).append("]: ")
                        .append(oneLine(marker.getValue()).replace("*/", "* /"))
                        .append(" */").append(System.lineSeparator());
            }
            annotated.append(lines[index]);
            if (index + 1 < lines.length) annotated.append(System.lineSeparator());
        }
        return annotated.toString();
    }

    private Map<Address, String> indirectCallsiteAddresses(Function function) {
        Map<Address, String> result = new TreeMap<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            boolean indirect = false;
            boolean direct = false;
            for (PcodeOp op : instruction.getPcode()) {
                if (op.getOpcode() == PcodeOp.CALLIND) {
                    indirect = true;
                    break;
                }
                if (op.getOpcode() == PcodeOp.CALL) direct = true;
            }
            Function directTarget = null;
            if (!indirect && direct) {
                Address[] flows = instruction.getFlows();
                if (flows.length == 1)
                    directTarget = currentProgram.getFunctionManager()
                        .getFunctionAt(flows[0]);
                if (directTarget == null || qualifiedFunctionNameCounts.getOrDefault(
                        directTarget.getSymbol().getName(true), 0) < 2) continue;
            }
            else if (!indirect) continue;
            String detail = instruction.toString();
            if (directTarget != null)
                detail += "; direct=" + addr(directTarget.getEntryPoint()) + " " +
                    directTarget.getSymbol().getName(true);
            String comment = listing.getComment(CommentType.EOL, instruction.getAddress());
            if (comment != null && !comment.isBlank())
                detail += "; " + oneLine(comment);
            result.put(instruction.getAddress(), detail);
        }
        return result;
    }

    /** Count exact qualified spellings once so ambiguous direct-call marking is O(n). */
    private Map<String, Integer> qualifiedFunctionNameCounts() {
        Map<String, Integer> result = new HashMap<>();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            String name = function.getSymbol().getName(true);
            result.put(name, result.getOrDefault(name, 0) + 1);
        }
        return Map.copyOf(result);
    }

    private boolean malformedDArrayAtCall(String code) {
        int search = 0;
        while ((search = code.indexOf("DArrayAt<", search)) >= 0) {
            int templateEnd = code.indexOf('>', search + 9);
            if (templateEnd < 0) return true;
            int open = templateEnd + 1;
            while (open < code.length() && Character.isWhitespace(code.charAt(open))) open++;
            if (open >= code.length() || code.charAt(open) != '(') return true;
            int depth = 0;
            int commas = 0;
            boolean closed = false;
            for (int index = open; index < code.length(); index++) {
                char value = code.charAt(index);
                if (value == '(') depth++;
                else if (value == ')' && --depth == 0) {
                    closed = true;
                    search = index + 1;
                    break;
                }
                else if (value == ',' && depth == 1) commas++;
                if (depth < 0) return true;
            }
            if (!closed || commas != 1) return true;
        }
        return false;
    }

    /**
     * Ghidra's value._OFFSET_WIDTH_ spelling is not C or C++. Keep the exact
     * byte-level operation, but render simple lvalue bases through the generated
     * runtime proxy. Complex expressions remain visible for the readiness audit.
     */
    private NormalizedCode normalizePartialPieceSyntax(String code) {
        if (code == null || code.isEmpty() || !code.contains("._"))
            return new NormalizedCode(code, 0);
        NormalizedCode literalPieces = normalizeStringLiteralPartialPieces(code);
        int replacements = literalPieces.replacements;
        String literalNormalized = literalPieces.code;
        Matcher matcher = SIMPLE_PARTIAL_PIECE.matcher(literalNormalized);
        StringBuffer output = new StringBuffer();
        while (matcher.find()) {
            int width;
            try { width = Integer.parseInt(matcher.group("width")); }
            catch (NumberFormatException ignored) { continue; }
            if (width < 1 || width > 8) continue;
            String replacement = "STPiece<" + matcher.group("offset") + "," +
                matcher.group("width") + ">(" + matcher.group("base") + ")";
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(replacements == 0 ? code : output.toString(), replacements);
    }

    /**
     * Parse quoted literals linearly instead of using a repeated-alternation regex.
     * Java's regex engine consumes one native stack frame per character for patterns
     * such as {@code "(?:\\.|[^"\\])*"}; resource-sized literals can therefore abort
     * an otherwise valid whole-corpus export with StackOverflowError.
     */
    private NormalizedCode normalizeStringLiteralPartialPieces(String code) {
        StringBuilder output = new StringBuilder(code.length());
        int copiedThrough = 0;
        int replacements = 0;
        for (int quote = code.indexOf('"'); quote >= 0 && quote < code.length(); ) {
            int close = closingStringLiteral(code, quote);
            if (close < 0) break;
            int suffix = close + 1;
            if (suffix + 2 > code.length() || !code.startsWith("._", suffix)) {
                quote = code.indexOf('"', close + 1);
                continue;
            }
            int offsetStart = suffix + 2;
            int offsetEnd = decimalEnd(code, offsetStart);
            if (offsetEnd == offsetStart || offsetEnd >= code.length() ||
                    code.charAt(offsetEnd) != '_') {
                quote = code.indexOf('"', close + 1);
                continue;
            }
            int widthStart = offsetEnd + 1;
            int widthEnd = decimalEnd(code, widthStart);
            if (widthEnd == widthStart || widthEnd >= code.length() ||
                    code.charAt(widthEnd) != '_') {
                quote = code.indexOf('"', close + 1);
                continue;
            }
            int width;
            try { width = Integer.parseInt(code.substring(widthStart, widthEnd)); }
            catch (NumberFormatException ignored) {
                quote = code.indexOf('"', close + 1);
                continue;
            }
            if (width < 1 || width > 8) {
                quote = code.indexOf('"', close + 1);
                continue;
            }
            output.append(code, copiedThrough, quote)
                .append("STLiteralPiece<")
                .append(code, offsetStart, offsetEnd).append(',')
                .append(code, widthStart, widthEnd).append(">(")
                .append(code, quote, close + 1).append(')');
            copiedThrough = widthEnd + 1;
            replacements++;
            quote = code.indexOf('"', copiedThrough);
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        output.append(code, copiedThrough, code.length());
        return new NormalizedCode(output.toString(), replacements);
    }

    private int closingStringLiteral(String text, int quote) {
        boolean escaped = false;
        for (int index = quote + 1; index < text.length(); index++) {
            char value = text.charAt(index);
            if (escaped) escaped = false;
            else if (value == '\\') escaped = true;
            else if (value == '"') return index;
        }
        return -1;
    }

    private int decimalEnd(String text, int start) {
        int end = start;
        while (end < text.length() && Character.isDigit(text.charAt(end))) end++;
        return end;
    }

    /**
     * Preserve a proven byte-relative load/store without the target-specific `(int)`
     * pointer truncation emitted by the 32-bit decompiler. This is a presentation
     * helper, not a claim that the receiver has a recovered semantic class.
     */
    private NormalizedCode normalizeExplicitByteOffsetFields(String code) {
        if (code == null || code.isEmpty() || !code.contains("(int)"))
            return new NormalizedCode(code, 0);
        Matcher matcher = EXPLICIT_BYTE_OFFSET_FIELD.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String cast = matcher.group("cast").trim();
            int star = cast.lastIndexOf('*');
            if (star < 0) continue;
            String fieldType = cast.substring(0, star).trim();
            if (fieldType.isBlank()) continue;
            String replacement = "STField<" + fieldType + ">(" +
                matcher.group("base") + "," + matcher.group("offset") + ")";
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(replacements == 0 ? code : output.toString(), replacements);
    }

    /**
     * A generated field name is an exact byte offset even when its storage type is still a
     * generic word. Preserve a casted pointee view without spelling it as raw pointer
     * arithmetic; this is the same byte-exact STField projection used for explicit offsets.
     */
    private NormalizedCode normalizeCastedGenericFieldValues(String code) {
        if (code == null || code.isEmpty() || !code.contains("->field_"))
            return new NormalizedCode(code, 0);
        // Repair bodies cached by the pre-boundary implementation.  That rule
        // consumed only the first member of a longer postfix expression and
        // left the suffix attached to the scalar/function value returned by
        // STField, yielding uncompilable text.  Restore the exact Ghidra cast
        // spelling first; the guarded current rule below deliberately leaves
        // the complete postfix expression alone.
        Matcher rawCode = RAW_CODE_FIELD_CHAIN.matcher(code);
        StringBuffer repairedRawCode = new StringBuffer();
        int replacements = 0;
        while (rawCode.find()) {
            long ownerOffset;
            try {
                ownerOffset = Long.parseUnsignedLong(
                    rawCode.group("ownerOffset"), 16);
            }
            catch (NumberFormatException ignored) { continue; }
            String ownerField = String.format(Locale.ROOT, "field_%04X", ownerOffset);
            String replacement = "*STField<code *>(" + rawCode.group("base") +
                "->" + ownerField + ",0x" +
                rawCode.group("slotOffset").toUpperCase(Locale.ROOT) + ")";
            rawCode.appendReplacement(repairedRawCode,
                Matcher.quoteReplacement(replacement));
            replacements++;
        }
        rawCode.appendTail(repairedRawCode);

        Matcher legacyCode = LEGACY_TRUNCATED_CODE_FIELD.matcher(
            repairedRawCode.toString());
        StringBuffer repairedCode = new StringBuffer();
        while (legacyCode.find()) {
            long ownerOffset;
            try {
                ownerOffset = Long.parseUnsignedLong(
                    legacyCode.group("ownerOffset"), 16);
            }
            catch (NumberFormatException ignored) { continue; }
            String ownerField = String.format(Locale.ROOT, "field_%04X", ownerOffset);
            String replacement = "*STField<code *>(" + legacyCode.group("base") +
                "->" + ownerField + ",0x" +
                legacyCode.group("slotOffset").toUpperCase(Locale.ROOT) + ")";
            legacyCode.appendReplacement(repairedCode,
                Matcher.quoteReplacement(replacement));
            replacements++;
        }
        legacyCode.appendTail(repairedCode);

        Matcher legacy = LEGACY_TRUNCATED_CASTED_FIELD.matcher(repairedCode.toString());
        StringBuffer repaired = new StringBuffer();
        while (legacy.find()) {
            long offset;
            try { offset = Long.parseUnsignedLong(legacy.group("offset"), 16); }
            catch (NumberFormatException ignored) { continue; }
            String field = String.format(Locale.ROOT, "field_%04X", offset);
            String replacement = "*(" + legacy.group("type").trim() + " *)" +
                legacy.group("base") + "->" + field + legacy.group("suffix");
            legacy.appendReplacement(repaired, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        legacy.appendTail(repaired);

        Matcher matcher = CASTED_GENERIC_FIELD_VALUE.matcher(repaired.toString());
        StringBuffer output = new StringBuffer();
        while (matcher.find()) {
            String type = matcher.group("type").trim();
            if (type.isBlank()) continue;
            long offset;
            try { offset = Long.parseUnsignedLong(matcher.group("offset"), 16); }
            catch (NumberFormatException ignored) { continue; }
            String replacement = "*STField<" + type + " *>(" +
                matcher.group("base") + ",0x" +
                Long.toHexString(offset).toUpperCase(Locale.ROOT) + ")";
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        matcher.appendTail(output);
        return replacements == 0 ? new NormalizedCode(code, 0) :
            new NormalizedCode(output.toString(), replacements);
    }

    /**
     * A byte cursor remains byte-addressed even when Ghidra keeps its physical
     * storage in a recycled scalar stack slot.  The decompiler then spells one
     * ordinary subscript as {@code *(byte *)(cursor + 2)}.  Preserve the exact
     * one-byte type and signed offset while emitting the source-equivalent
     * lvalue {@code ((byte *)cursor)[2]}.  Wider accesses are deliberately left
     * alone because they may be packed transport words or real record fields.
     */
    private NormalizedCode normalizeSimpleByteOffsetDereferences(String code) {
        if (code == null || code.isEmpty()) return new NormalizedCode(code, 0);
        Matcher matcher = SIMPLE_BYTE_OFFSET_DEREFERENCE.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String offset = matcher.group("offset");
            if (matcher.group("operator").equals("-")) offset = "-" + offset;
            String replacement = "((" + matcher.group("type") + " *)" +
                matcher.group("base") + ")[" + offset + "]";
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * A direct cast from an 8/16-bit integer member to double already performs the C integer
     * promotion. Ghidra may spell that as `(double)(int)object->member`. Remove only the
     * redundant inner cast when the pointer declaration resolves to one structure and that
     * exact member is a concrete one- or two-byte integer. Complex expressions and generic,
     * enum, union, or ambiguous members remain untouched.
     */
    private NormalizedCode normalizeRedundantNarrowToDoublePromotions(String code) {
        if (code == null || code.isEmpty() || !code.contains("(double)(int)"))
            return new NormalizedCode(code, 0);
        Map<String, Structure> owners = new HashMap<>();
        Matcher declarations = SIMPLE_POINTER_DECLARATION.matcher(code);
        while (declarations.find()) {
            Structure owner = uniqueStructure(declarations.group("type").trim());
            if (owner != null) owners.put(declarations.group("name"), owner);
        }
        if (owners.isEmpty()) return new NormalizedCode(code, 0);
        Pattern promotion = Pattern.compile(
            "\\(double\\)\\s*\\(int\\)\\s*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "->(?<field>[A-Za-z_$][A-Za-z0-9_$]*)");
        Matcher matcher = promotion.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            Structure owner = owners.get(matcher.group("name"));
            DataTypeComponent component = owner == null ? null :
                componentByName(owner, matcher.group("field"));
            DataType type = component == null ? null : unwrapTypeDef(component.getDataType());
            if (!(type instanceof AbstractIntegerDataType) ||
                    component.getLength() < 1 || component.getLength() > 2) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            matcher.appendReplacement(output, Matcher.quoteReplacement(
                "(double)" + matcher.group("name") + "->" + matcher.group("field")));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    private Structure uniqueStructure(String rendered) {
        if (rendered == null || rendered.isBlank()) return null;
        String name = rendered;
        int separator = name.lastIndexOf("::");
        if (separator >= 0) name = name.substring(separator + 2);
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(name, matches);
        Structure result = null;
        for (DataType candidate : matches) {
            if (!(candidate instanceof Structure structure) ||
                    !structure.getName().equals(name)) continue;
            if (result != null && !result.getPathName().equals(structure.getPathName()))
                return null;
            result = structure;
        }
        return result;
    }

    private DataTypeComponent componentByName(Structure structure, String name) {
        DataTypeComponent result = null;
        for (DataTypeComponent component : structure.getDefinedComponents()) {
            if (!name.equals(component.getFieldName())) continue;
            if (result != null) return null;
            result = component;
        }
        return result;
    }

    private DataType unwrapTypeDef(DataType type) {
        while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
        return type;
    }

    /** The corpus is a C++ projection; every typed `(T *)0x0` is the same null value. */
    private NormalizedCode normalizeTypedNullPointers(String code) {
        Matcher matcher = TYPED_NULL_POINTER.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            matcher.appendReplacement(output, "nullptr");
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * A C/C++ switch condition is integral or enum-valued.  Ghidra can preserve a
     * pointer-shaped cast on a zero case value; the preceding null normalization then
     * turns that exact zero into `nullptr`, which is not a valid case constant.  The
     * machine value and original source-level case are unambiguously integer zero.
     */
    private NormalizedCode normalizeNullSwitchCases(String code) {
        if (code == null || code.isEmpty() || !code.contains("case nullptr"))
            return new NormalizedCode(code, 0);
        Matcher matcher = NULLPTR_SWITCH_CASE.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            matcher.appendReplacement(output,
                Matcher.quoteReplacement(matcher.group("indent") + "case 0:"));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Ghidra can assign a pointer type to an integer switch lifetime when the
     * same Listing local is a real pointer elsewhere.  Prove the presentation
     * domain from the complete switch itself: at least two case constants and
     * at least one explicit pointer-cast constant must occur inside the matched
     * brace range.  Convert only the selector and those constants through the
     * runtime's exact machine-word view; the persistent pointer declaration and
     * every pointer-semantic lifetime remain untouched.
     */
    private NormalizedCode normalizePointerTypedSwitchDomains(String code) {
        if (code == null || code.isEmpty() || !code.contains("switch") ||
                !Pattern.compile("case\\s+\\([^:\\r\\n]*\\*+\\s*\\)")
                    .matcher(code).find())
            return new NormalizedCode(code, 0);
        Pattern pointerCase = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)case\\s+\\([^:\\r\\n()]*\\*+\\s*\\)\\s*" +
            "(?<value>(?:0[xX][0-9A-Fa-f]+|[0-9]+))\\s*:");
        String normalized = code;
        int replacements = 0;
        int search = 0;
        while (true) {
            Matcher keyword = Pattern.compile("\\bswitch\\s*\\(")
                .matcher(normalized);
            if (!keyword.find(search)) break;
            int open = normalized.indexOf('(', keyword.start());
            int close = matchingParenthesis(normalized, open);
            if (close < 0) break;
            int brace = skipHorizontalWhitespace(normalized, close + 1);
            if (brace >= normalized.length() || normalized.charAt(brace) != '{') {
                search = close + 1;
                continue;
            }
            int bodyEnd = matchingDelimiter(normalized, brace, '{', '}');
            if (bodyEnd < 0) break;
            String expression = normalized.substring(open + 1, close).trim();
            if (expression.contains("STRawWord(")) {
                search = bodyEnd + 1;
                continue;
            }
            String body = normalized.substring(brace + 1, bodyEnd);
            Matcher cases = Pattern.compile("(?m)^\\s*case\\b[^:]*:")
                .matcher(body);
            int caseCount = 0;
            while (cases.find()) caseCount++;
            Matcher castCases = pointerCase.matcher(body);
            int castCount = 0;
            StringBuffer rewrittenBody = new StringBuffer();
            while (castCases.find()) {
                castCases.appendReplacement(rewrittenBody,
                    Matcher.quoteReplacement(castCases.group("indent") +
                        "case " + castCases.group("value") + ":"));
                castCount++;
            }
            if (caseCount < 2 || castCount == 0) {
                search = bodyEnd + 1;
                continue;
            }
            castCases.appendTail(rewrittenBody);
            String selector = "static_cast<uint32_t>(STRawWord(" +
                expression + "))";
            normalized = normalized.substring(0, open + 1) + selector +
                normalized.substring(close, brace + 1) + rewrittenBody +
                normalized.substring(bodyEnd);
            replacements += castCount + 1;
            search = open + selector.length() + 2;
        }
        return new NormalizedCode(normalized, replacements);
    }

    /** Remove Ghidra's unprototyped executable-pointer locals after another
     * projection (most often terminal INT3 normalization) removed their only use. */
    private NormalizedCode removeDeadCodePointerDeclarations(String code) {
        if (code == null || code.isEmpty() || !code.contains("code *"))
            return new NormalizedCode(code, 0);
        Pattern declaration = Pattern.compile(
            "(?m)^[ \\t]*code[ \\t]*\\*[ \\t]*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "[ \\t]*;[ \\t]*(?:\\R|$)");
        Matcher matcher = declaration.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String name = matcher.group("name");
            Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
                Pattern.quote(name) + "(?![A-Za-z0-9_$])");
            int occurrences = 0;
            Matcher uses = token.matcher(code);
            while (uses.find() && occurrences < 2) occurrences++;
            if (occurrences == 1) {
                matcher.appendReplacement(output, "");
                replacements++;
            }
            else matcher.appendReplacement(output,
                Matcher.quoteReplacement(matcher.group()));
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Ghidra creates extraout_* locals for register pieces whose producer is unresolved.  If a
     * later normalization removed the only expression which mentioned one, retaining the bare
     * declaration falsely advertises unresolved return/register state.  Remove only a synthetic
     * declaration whose identifier has no second occurrence; live extraout values remain visible
     * ABI debt and are never guessed away.
     */
    private NormalizedCode removeDeadSyntheticDeclarations(String code) {
        if (code == null || code.isEmpty() || !code.contains("extraout_"))
            return new NormalizedCode(code, 0);
        Pattern declaration = Pattern.compile(
            "(?m)^[ \\t]*(?:[A-Za-z_$][A-Za-z0-9_$:]*[ \\t]+)+" +
            "(?:\\*+[ \\t]*)?(?<name>extraout_[A-Za-z0-9_$]+)" +
            "[ \\t]*;[ \\t]*(?:\\R|$)");
        Matcher matcher = declaration.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String name = matcher.group("name");
            Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
                Pattern.quote(name) + "(?![A-Za-z0-9_$])");
            int occurrences = 0;
            Matcher uses = token.matcher(code);
            while (uses.find() && occurrences < 2) occurrences++;
            if (occurrences == 1) {
                matcher.appendReplacement(output, "");
                replacements++;
            }
            else matcher.appendReplacement(output,
                Matcher.quoteReplacement(matcher.group()));
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Optimized x86 frequently reuses one register/stack merge for a pointer and
     * later for a pure integer product. Ghidra must keep one Listing type and can
     * consequently render `short *p = (short *)(x * y)`. Split only the textual
     * lifetime whose complete downstream use is an explicit `(int)p` conversion
     * (plus an equally constrained pointer-to-pointer copy). The database type
     * and every real dereference remain untouched.
     */
    private NormalizedCode normalizeIntegerStoredInPointerLifetimes(String code) {
        if (code == null || code.isEmpty()) return new NormalizedCode(code, 0);
        Map<String, PointerDeclaration> pointers = pointerDeclarations(code);
        if (pointers.isEmpty()) return new NormalizedCode(code, 0);
        String[] lines = code.split("\\R", -1);
        Pattern assignment = Pattern.compile(
            "^(?<indent>[ \\t]*)(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*" +
            "\\([A-Za-z_$][A-Za-z0-9_$: ]*[ \\t]*\\*+\\)[ \\t]*" +
            "(?<expr>.+);[ \\t]*$");
        Set<String> introduced = new HashSet<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher candidate = assignment.matcher(lines[index]);
            if (!candidate.matches()) continue;
            String name = candidate.group("name");
            if (!pointers.containsKey(name)) continue;
            String expression = stripBalancedOuterParentheses(
                candidate.group("expr").trim());
            if (!integerProductExpression(expression)) continue;
            int end = nextDirectAssignment(lines, name, index + 1);
            List<ScalarPointerCopy> copies = new ArrayList<>();
            if (!scalarOnlyPointerUses(lines, name, index + 1, end,
                    pointers, copies)) continue;
            String scalar = "scalar_" + name;
            if (identifierOccurs(code, scalar, 0, code.length()) ||
                    !introduced.add(scalar)) continue;
            boolean copiesSafe = true;
            for (ScalarPointerCopy copy : copies) {
                String targetScalar = "scalar_" + copy.target;
                if (identifierOccurs(code, targetScalar, 0, code.length()) ||
                        !introduced.add(targetScalar)) {
                    copiesSafe = false;
                    break;
                }
            }
            if (!copiesSafe) continue;

            lines[index] = candidate.group("indent") + "int " + scalar + " = " +
                expression + "; /* split integer lifetime from pointer-typed SSA storage */";
            replaceExplicitIntCasts(lines, name, scalar, index + 1, end);
            for (ScalarPointerCopy copy : copies) {
                lines[copy.line] = copy.indent + "int scalar_" + copy.target +
                    " = " + scalar + ";";
                replaceExplicitIntCasts(lines, copy.target,
                    "scalar_" + copy.target, copy.line + 1, copy.end);
            }
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        String normalized = String.join(System.lineSeparator(), lines);
        for (String name : pointers.keySet())
            normalized = removeUnusedPointerDeclaration(normalized, name);
        return new NormalizedCode(normalized, replacements);
    }

    private boolean integerProductExpression(String expression) {
        if (expression.contains("&") || expression.contains("nullptr")) return false;
        String withoutCasts = expression.replaceAll(
            "\\([A-Za-z_$][A-Za-z0-9_$: ]*[ \\t]*\\*+\\)", "")
            .replaceAll("\\((?:u?int|u?short|byte|char|long|ulong)\\)", "");
        // Require the decompiler's binary-operator spacing.  A permissive '*'
        // test also matches **(code **) callback calls and used to turn them
        // into syntactically broken integer lifetimes.
        return Pattern.compile("\\S[ \\t]+\\*[ \\t]+\\S")
            .matcher(withoutCasts).find();
    }

    private String stripBalancedOuterParentheses(String expression) {
        if (expression.length() < 2 || expression.charAt(0) != '(' ||
                expression.charAt(expression.length() - 1) != ')') return expression;
        int depth = 0;
        for (int index = 0; index < expression.length(); index++) {
            char value = expression.charAt(index);
            if (value == '(') depth++;
            else if (value == ')' && --depth == 0)
                return index == expression.length() - 1 ?
                    expression.substring(1, expression.length() - 1).trim() : expression;
            if (depth < 0) return expression;
        }
        return expression;
    }

    private int nextDirectAssignment(String[] lines, String name, int start) {
        Pattern assignment = Pattern.compile("^[ \\t]*" + Pattern.quote(name) +
            "[ \\t]*=(?!=)");
        for (int index = start; index < lines.length; index++)
            if (assignment.matcher(lines[index]).find()) return index;
        return lines.length;
    }

    private boolean scalarOnlyPointerUses(String[] lines, String name, int start,
            int end, Map<String, PointerDeclaration> pointers,
            List<ScalarPointerCopy> copies) {
        Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])");
        Pattern cast = Pattern.compile("\\(int\\)[ \\t]*" + Pattern.quote(name) +
            "(?![A-Za-z0-9_$])");
        Pattern copy = Pattern.compile(
            "^(?<indent>[ \\t]*)(?<target>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "[ \\t]*=[ \\t]*" + Pattern.quote(name) + ";[ \\t]*$");
        boolean used = false;
        for (int index = start; index < end; index++) {
            if (!token.matcher(lines[index]).find()) continue;
            used = true;
            String remainder = cast.matcher(lines[index]).replaceAll("");
            if (!token.matcher(remainder).find()) continue;
            Matcher copied = copy.matcher(lines[index]);
            if (!copied.matches() || !pointers.containsKey(copied.group("target")))
                return false;
            String target = copied.group("target");
            int targetEnd = nextDirectAssignment(lines, target, index + 1);
            if (!onlyExplicitIntCasts(lines, target, index + 1, targetEnd)) return false;
            copies.add(new ScalarPointerCopy(index, targetEnd,
                copied.group("indent"), target));
        }
        return used;
    }

    private boolean onlyExplicitIntCasts(String[] lines, String name,
            int start, int end) {
        Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])");
        Pattern cast = Pattern.compile("\\(int\\)[ \\t]*" + Pattern.quote(name) +
            "(?![A-Za-z0-9_$])");
        boolean used = false;
        for (int index = start; index < end; index++) {
            if (!token.matcher(lines[index]).find()) continue;
            used = true;
            if (token.matcher(cast.matcher(lines[index]).replaceAll("")).find())
                return false;
        }
        return used;
    }

    private void replaceExplicitIntCasts(String[] lines, String name,
            String scalar, int start, int end) {
        Pattern cast = Pattern.compile("\\(int\\)[ \\t]*" + Pattern.quote(name) +
            "(?![A-Za-z0-9_$])");
        for (int index = start; index < end; index++)
            lines[index] = cast.matcher(lines[index])
                .replaceAll(Matcher.quoteReplacement(scalar));
    }

    private String removeUnusedPointerDeclaration(String code, String name) {
        Pattern declaration = Pattern.compile(
            "(?m)^[ \\t]*[A-Za-z_$][A-Za-z0-9_$: ]*[ \\t]*\\*+[ \\t]*" +
            Pattern.quote(name) + "[ \\t]*;[ \\t]*(?:\\R|$)");
        Matcher matcher = declaration.matcher(code);
        if (!matcher.find()) return code;
        String without = code.substring(0, matcher.start()) + code.substring(matcher.end());
        return identifierOccurs(without, name, 0, without.length()) ? code : without;
    }

    /** Exact runtime-stride element address. The descriptor remains generic;
     * only the consumer's already rendered pointee type becomes a template view. */
    private NormalizedCode normalizeDArrayElementAddresses(String code) {
        Matcher matcher = DARRAY_TYPED_ELEMENT_ADDRESS.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String type = matcher.group("type").trim();
            String array = matcher.group("array");
            String index = oneLine(matcher.group("index"));
            if (type.isBlank() || index.isBlank() || index.contains(",")) {
                matcher.appendReplacement(output,
                    Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            matcher.appendReplacement(output, Matcher.quoteReplacement(
                "DArrayAt<" + type + ">(" + array + ", " + index + ")"));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /** Fold an absolute interior address only when it lies in a generated,
     * exact-stride global record array and the multiplied stride agrees. */
    private NormalizedCode normalizeGlobalRecordAddresses(String code) {
        RewriteAccumulator rewrite = new RewriteAccumulator(code);
        ReplacementFunction replacement = matcher -> {
            Long stride = fingerprintImmediate(matcher.group("stride"));
            Long address = fingerprintImmediate(matcher.group("address"));
            if (stride == null || address == null) return null;
            for (GlobalRecordDescriptor descriptor : globalRecordDescriptors) {
                long end = descriptor.base + descriptor.stride * descriptor.count;
                if (stride != descriptor.stride || address < descriptor.base ||
                        address >= end) continue;
                long offset = (address - descriptor.base) % descriptor.stride;
                // An address in a later physical record is equivalent to an
                // adjusted index, not to the original expression; retain it.
                if (address - descriptor.base >= descriptor.stride) return null;
                return "STRecordByteAddress(" + descriptor.name + ", " +
                    oneLine(matcher.group("index")) + ", 0x" +
                    Long.toHexString(offset).toUpperCase(Locale.ROOT) + ")";
            }
            return null;
        };
        rewrite.replace(GLOBAL_RECORD_ADDRESS_FORWARD, replacement);
        rewrite.replace(GLOBAL_RECORD_ADDRESS_REVERSE, replacement);
        return new NormalizedCode(rewrite.code, rewrite.replacements);
    }

    /**
     * Ghidra sometimes keeps an induction variable in bytes even after both
     * endpoints have the same recovered structure type:
     *
     *   *(int *)((int)&records->field_0004 + byteOffset)
     *
     * The cast is not missing layout evidence: it is the decompiler spelling
     * for a pointer walk over equally-sized records.  Preserve the exact byte
     * arithmetic, but recover the already-proven member selection as:
     *
     *   STObjectAtByteOffset(records, byteOffset).field_0004
     *
     * This is deliberately not rewritten to records[index].  Divisibility of
     * a live byte offset is a separate induction proof, while the helper below
     * is bit-for-bit equivalent for every offset.  Only one-star pointers to a
     * unique concrete Structure and an exact same-width named component are
     * eligible.
     */
    private NormalizedCode normalizeTypedMemberByteOffsets(String code) {
        if (code == null || code.isEmpty() || !code.contains("(int)&") ||
                !code.contains("->")) return new NormalizedCode(code, 0);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        RewriteAccumulator rewrite = new RewriteAccumulator(code);
        ReplacementFunction replacement = matcher -> {
            String base = matcher.group("base");
            Structure structure = null;
            PointerDeclaration declaration = declarations.get(base);
            if (declaration != null && declaration.stars == 1)
                structure = uniqueStructure(declaration.type);
            if (structure == null) structure = globalPointerStructures.get(base);
            if (structure == null) return null;
            DataTypeComponent component = componentByName(structure,
                matcher.group("field"));
            if (component == null || component.getLength() < 1) return null;
            String cast = matcher.group("cast").trim();
            int star = cast.lastIndexOf('*');
            if (star < 1 || renderedTypeWidth(cast.substring(0, star).trim()) !=
                    component.getLength()) return null;
            return "STObjectAtByteOffset(" + base + ", " +
                oneLine(matcher.group("offset")) + ")." + matcher.group("field");
        };
        rewrite.replace(TYPED_MEMBER_BYTE_OFFSET_FORWARD, replacement);
        rewrite.replace(TYPED_MEMBER_BYTE_OFFSET_REVERSE, replacement);
        return new NormalizedCode(rewrite.code, rewrite.replacements);
    }

    /**
     * Once the database ABI says that a callee returns a byte or word, its source-level
     * result is that complete scalar.  Ghidra may still preserve the machine fact that
     * only AL/AX was written by assigning the call to {@code value._0_1_} or
     * {@code value._0_2_}.  That spelling is neither C nor the recovered source ABI.
     * Fold only a one-line direct call whose rendered name is unambiguous across the
     * entire program and whose piece width exactly matches the callee return width.
     */
    private NormalizedCode normalizeNarrowReturnPieceAssignments(String code) {
        String normalized = code;
        int replacements = 0;
        int search = 0;
        while (true) {
            Matcher matcher = NARROW_RETURN_PIECE_ASSIGNMENT.matcher(normalized);
            if (!matcher.find(search)) break;
            int width = Integer.parseInt(matcher.group("width"));
            if (!Integer.valueOf(width).equals(
                    narrowReturnWidths.get(matcher.group("callee")))) {
                search = matcher.end();
                continue;
            }
            int open = matcher.end() - 1;
            int close = matchingParenthesis(normalized, open);
            if (close < 0) {
                search = matcher.end();
                continue;
            }
            int after = close + 1;
            while (after < normalized.length() &&
                    Character.isWhitespace(normalized.charAt(after))) after++;
            if (after >= normalized.length() ||
                    ";,)".indexOf(normalized.charAt(after)) < 0) {
                search = close + 1;
                continue;
            }
            String replacement = matcher.group("variable") + " = " +
                matcher.group("callee") + normalized.substring(open, close + 1);
            normalized = normalized.substring(0, matcher.start()) + replacement +
                normalized.substring(close + 1);
            replacements++;
            search = matcher.start() + replacement.length();
        }
        return new NormalizedCode(normalized, replacements);
    }

    /** Name collisions are accepted only when every function with that rendered name
     * has the same concrete narrow return width. Wide, void, undefined, aggregate, and
     * pointer returns deliberately poison the short name. */
    private Map<String, Integer> recoveredNarrowReturnWidths() {
        Map<String, Integer> widths = new HashMap<>();
        FunctionIterator iterator = listing.getFunctions(true);
        while (iterator.hasNext()) {
            Function function = iterator.next();
            int width = concreteNarrowScalarWidth(function.getReturnType());
            mergeRenderedReturnWidth(widths, function.getName(), width);
            mergeRenderedReturnWidth(widths, function.getName(true), width);
        }
        widths.entrySet().removeIf(entry -> entry.getValue() <= 0);
        return Map.copyOf(widths);
    }

    private void mergeRenderedReturnWidth(Map<String, Integer> widths, String name, int width) {
        if (name == null || name.isBlank()) return;
        Integer existing = widths.get(name);
        if (existing == null) widths.put(name, width);
        else if (existing != width) widths.put(name, -1);
    }

    private int concreteNarrowScalarWidth(DataType type) {
        while (type instanceof TypeDef typeDef) type = typeDef.getBaseDataType();
        if (type == null || type instanceof Pointer || type instanceof Array ||
                type instanceof Structure) return 0;
        String name = type.getName().toLowerCase(Locale.ROOT);
        if (name.contains("undefined") || name.equals("void")) return 0;
        int length = type.getLength();
        return length == 1 || length == 2 ? length : 0;
    }

    /** Replace Ghidra's exact CONCAT spelling for preservation of the high
     * bytes with an ordinary low-byte/low-word update. Unknown extraout/uStack
     * high pieces intentionally remain visible. */
    private NormalizedCode normalizeLowPieceCompositions(String code) {
        String normalized = code;
        int replacements = 0;
        for (String operation : List.of("CONCAT31", "CONCAT22", "CONCAT11")) {
            int search = 0;
            while (true) {
                int start = normalized.indexOf(operation + "(", search);
                if (start < 0) break;
                int open = start + operation.length();
                int close = matchingParenthesis(normalized, open);
                if (close < 0) break;
                List<String> arguments = splitTopLevelArguments(
                    normalized.substring(open + 1, close));
                if (arguments.size() != 2) {
                    search = close + 1;
                    continue;
                }
                String base = lowPieceBase(operation, arguments.get(0));
                if (base == null) {
                    search = close + 1;
                    continue;
                }
                String helper = operation.equals("CONCAT31") ? "STReplaceLowByte" :
                    operation.equals("CONCAT22") ? "STReplaceLowWord" :
                    "STReplaceLowByte16";
                String replacement = helper + "((uint32_t)(" + base + "), " +
                    (operation.equals("CONCAT22") ? "(uint16_t)(" : "(uint8_t)(") +
                    oneLine(arguments.get(1)) + "))";
                normalized = normalized.substring(0, start) + replacement +
                    normalized.substring(close + 1);
                replacements++;
                search = start + replacement.length();
            }
        }
        return new NormalizedCode(normalized, replacements);
    }

    private String lowPieceBase(String operation, String highArgument) {
        String high = highArgument.trim();
        String piece = operation.equals("CONCAT31") ? "_1_3_" :
            operation.equals("CONCAT22") ? "_2_2_" : "_1_1_";
        Matcher field = Pattern.compile("^(.+)\\." + Pattern.quote(piece) + "$")
            .matcher(high);
        if (field.matches() && simplePieceBase(field.group(1)))
            return field.group(1).trim();

        String compact = high.replaceAll("\\s+", "");
        String shift = operation.equals("CONCAT22") ? "(?:16|0x10)" : "(?:8|0x8)";
        for (Pattern pattern : List.of(
                Pattern.compile("^\\((?:int3|short|char)\\)\\(\\(uint\\)(.+)>>" +
                    shift + "\\)$"),
                Pattern.compile("^\\((?:int3|short|char)\\)\\((.+)>>" +
                    shift + "\\)$"),
                Pattern.compile("^\\(uint\\)(.+)>>" + shift + "$"),
                Pattern.compile("^(.+)>>" + shift + "$"))) {
            Matcher matcher = pattern.matcher(compact);
            if (matcher.matches() && simplePieceBase(matcher.group(1)))
                return matcher.group(1);
        }
        return null;
    }

    private boolean simplePieceBase(String value) {
        return value != null && value.matches(
            "[A-Za-z_$][A-Za-z0-9_$]*(?:(?:->|\\.)[A-Za-z_$][A-Za-z0-9_$]*|" +
            "\\[[^]\\r\\n]+\\])*");
    }

    private int matchingParenthesis(String text, int open) {
        if (open < 0 || open >= text.length() || text.charAt(open) != '(') return -1;
        int depth = 0;
        boolean string = false, character = false, escaped = false;
        for (int index = open; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(') depth++;
            else if (ch == ')' && --depth == 0) return index;
        }
        return -1;
    }

    private List<String> splitTopLevelArguments(String text) {
        List<String> result = new ArrayList<>();
        int parentheses = 0, brackets = 0;
        boolean string = false, character = false, escaped = false;
        int start = 0;
        for (int index = 0; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(') parentheses++;
            else if (ch == ')') parentheses--;
            else if (ch == '[') brackets++;
            else if (ch == ']') brackets--;
            else if (ch == ',' && parentheses == 0 && brackets == 0) {
                result.add(text.substring(start, index).trim());
                start = index + 1;
            }
        }
        result.add(text.substring(start).trim());
        return result;
    }

    /**
     * Fold only an exact same-base cancellation:
     *
     *   (T *)((int)(p + N) + (-BYTES - (int)p))
     *
     * when N*sizeof(*p) == BYTES.  Similar expressions involving two distinct
     * pointers encode relative offsets and must remain intact.
     */
    private NormalizedCode normalizeAffineSelfCancellation(String code) {
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        if (declarations.isEmpty()) return new NormalizedCode(code, 0);
        Matcher matcher = AFFINE_SELF_CANCELLATION.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            PointerDeclaration declaration = declarations.get(matcher.group("base"));
            Long index = fingerprintImmediate(matcher.group("index"));
            Long bytes = fingerprintImmediate(matcher.group("bytes"));
            if (declaration == null || declaration.width <= 0 ||
                    index == null || bytes == null ||
                    index > Long.MAX_VALUE / declaration.width ||
                    index * declaration.width != bytes) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            matcher.appendReplacement(output,
                Matcher.quoteReplacement(matcher.group("cast") + "0x0"));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Recover the exact row-major spelling already proven by STWorldGrid and
     * STPathingGrid layouts.  This is deliberately structural: any recovered
     * aggregate with cells, sizeX and planeStride participates, and the three
     * coordinate terms may appear in any additive order.
     */
    private NormalizedCode normalizeGridCellIndexing(String code) {
        Matcher matcher = GRID_CELL_ACCESS.matcher(code);
        StringBuilder output = new StringBuilder(code.length());
        int search = 0, copied = 0, replacements = 0;
        while (matcher.find(search)) {
            int open = matcher.end() - 1;
            int close = matchingBracket(code, open);
            if (close < 0) break;
            String grid = matcher.group("grid");
            GridCoordinates coordinates = gridCoordinates(
                code.substring(open + 1, close), grid);
            if (coordinates == null) {
                search = close + 1;
                continue;
            }
            output.append(code, copied, matcher.start());
            output.append("STGridAt3D(").append(grid).append(", ")
                .append(coordinates.x).append(", ")
                .append(coordinates.y).append(", ")
                .append(coordinates.z).append(')');
            copied = close + 1;
            search = close + 1;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        output.append(code, copied, code.length());
        return new NormalizedCode(output.toString(), replacements);
    }

    private GridCoordinates gridCoordinates(String expression, String grid) {
        List<String> terms = splitTopLevel(expression, '+');
        if (terms.size() != 3) return null;
        String x = null, y = null, z = null;
        for (String term : terms) {
            List<String> factors = splitTopLevel(stripOuterParentheses(term), '*');
            if (factors.size() == 1) {
                if (x != null) return null;
                x = cleanGridCoordinate(factors.get(0));
                continue;
            }
            if (factors.size() != 2) return null;
            String left = scalarCastless(factors.get(0));
            String right = scalarCastless(factors.get(1));
            String sizeX = grid + ".sizeX";
            String planeStride = grid + ".planeStride";
            if (left.equals(sizeX) || right.equals(sizeX)) {
                if (y != null) return null;
                y = cleanGridCoordinate(left.equals(sizeX) ? factors.get(1) : factors.get(0));
            }
            else if (left.equals(planeStride) || right.equals(planeStride)) {
                if (z != null) return null;
                z = cleanGridCoordinate(left.equals(planeStride) ? factors.get(1) : factors.get(0));
            }
            else return null;
        }
        return x == null || y == null || z == null ? null :
            new GridCoordinates(x, y, z);
    }

    private String cleanGridCoordinate(String expression) {
        String value = stripOuterParentheses(expression);
        String castless = scalarCastless(value);
        return castless.isBlank() ? value.trim() : castless;
    }

    private String scalarCastless(String expression) {
        String value = stripOuterParentheses(expression).trim();
        while (true) {
            Matcher cast = Pattern.compile(
                "^\\(\\s*(?:char|byte|u?short|u?int|long|ulong|word|dword)\\s*\\)\\s*(.+)$",
                Pattern.CASE_INSENSITIVE).matcher(value);
            if (!cast.matches()) return stripOuterParentheses(value).trim();
            value = stripOuterParentheses(cast.group(1)).trim();
        }
    }

    private int matchingBracket(String text, int open) {
        if (open < 0 || open >= text.length() || text.charAt(open) != '[') return -1;
        int depth = 0;
        boolean string = false, character = false, escaped = false;
        for (int index = open; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '[') depth++;
            else if (ch == ']' && --depth == 0) return index;
        }
        return -1;
    }

    /**
     * Ghidra represents an x86 `xor al,al` return while preserving the upper
     * EAX bytes as a uint3 shift.  Under an immediately preceding `cmp eax,0xff`
     * guard those upper bytes are proven zero.  Require the exact machine-code
     * pattern before replacing the presentation artifact with `return 0`.
     */
    private NormalizedCode normalizeMachinePseudocode(Function function, String code) {
        if (function == null || code == null || code.isEmpty())
            return new NormalizedCode(code, 0);
        String normalized = code;
        int replacements = 0;
        if (code.contains("(uint3)") && hasGuardedPartialAlZeroReturn(function)) {
            Matcher matcher = PARTIAL_AL_ZERO_RETURN.matcher(code);
            int candidates = 0;
            while (matcher.find()) candidates++;
            if (candidates == 1) {
                matcher.reset();
                StringBuffer output = new StringBuffer();
                while (matcher.find()) {
                    matcher.appendReplacement(output, Matcher.quoteReplacement(
                        matcher.group("indent") +
                        "return 0; /* cmp eax,0xff; xor al,al */"));
                    replacements++;
                }
                matcher.appendTail(output);
                normalized = output.toString();
            }
        }
        NormalizedCode x87 = normalizeSavedX87AcrossFtol(function, normalized);
        NormalizedCode stackFloats = normalizeMachineStackFloatLocals(
            function, x87.code);
        NormalizedCode storageViews = normalizeGenericMachineStorageViews(
            function, stackFloats.code);
        NormalizedCode anonymousScalars = normalizeAnonymousPointerScalarViews(
            storageViews.code);
        NormalizedCode physicalX87 = normalizePhysicalX87CallResults(
            function, anonymousScalars.code);
        NormalizedCode stackSlots = normalizeReusedParameterLifetimes(
            function, physicalX87.code);
        NormalizedCode roundTrips = normalizeRoundTripCallResults(function,
            stackSlots.code);
        NormalizedCode returnedParameters = normalizeReturnedParameterCallResults(
            function, roundTrips.code);
        NormalizedCode reusedAliasOrder =
            repairPredeclarationReusedParameterAliases(returnedParameters.code);
        return new NormalizedCode(reusedAliasOrder.code,
            replacements + x87.replacements + stackFloats.replacements +
                storageViews.replacements +
                anonymousScalars.replacements +
                physicalX87.replacements +
                stackSlots.replacements + roundTrips.replacements +
                returnedParameters.replacements + reusedAliasOrder.replacements);
    }

    /**
     * Undo a decompiler-only anonymous pointer view when the complete rendered
     * lifetime is an ordered machine-word domain.  Pointer-shape inference can
     * leak through an untyped output call and make offsets/cursors look like
     * {@code AnonShape *}; repeated comparisons with independently declared
     * integer words prove the opposite domain.  No candidate with a member,
     * subscript, or dereference use is changed, and the scalar proof propagates
     * only through direct comparisons/assignments between candidate locals.
     */
    private NormalizedCode normalizeAnonymousPointerScalarViews(String code) {
        Pattern declaration = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)(?<type>Anon(?:Shape|Nested)_[A-Za-z0-9_$]+)" +
            "\\s*\\*\\s*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*;\\s*$");
        Matcher declarations = declaration.matcher(code);
        Map<String, String> candidates = new LinkedHashMap<>();
        while (declarations.find())
            candidates.putIfAbsent(declarations.group("name"), declarations.group("type"));
        if (candidates.isEmpty()) return new NormalizedCode(code, 0);

        Set<String> scalarNames = new LinkedHashSet<>();
        Matcher scalars = Pattern.compile(
            "(?m)^\\s*(?:u?int|dword|DWORD|size_t|undefined4)\\s+" +
            "(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*(?:[;=,])")
            .matcher(code);
        while (scalars.find()) scalarNames.add(scalars.group("name"));

        Map<String, Set<String>> peers = new LinkedHashMap<>();
        for (String name : candidates.keySet()) peers.put(name, new LinkedHashSet<>());
        Set<String> selected = new LinkedHashSet<>();
        Pattern comparison = Pattern.compile(
            "(?<left>[A-Za-z_$][A-Za-z0-9_$]*)\\s*(?:<=|>=|<|>)\\s*" +
            "(?<right>[A-Za-z_$][A-Za-z0-9_$]*|0x[0-9A-Fa-f]+|[0-9]+)");
        Matcher compared = comparison.matcher(code);
        while (compared.find()) {
            String left = compared.group("left");
            String right = compared.group("right");
            if (candidates.containsKey(left) && candidates.containsKey(right)) {
                peers.get(left).add(right);
                peers.get(right).add(left);
            }
            else if (candidates.containsKey(left) &&
                    (scalarNames.contains(right) || Character.isDigit(right.charAt(0))))
                selected.add(left);
            else if (candidates.containsKey(right) && scalarNames.contains(left))
                selected.add(right);
        }
        Pattern assignment = Pattern.compile(
            "(?m)^\\s*(?<left>[A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*" +
            "(?:\\([^;=]+?\\*\\)\\s*)?(?<right>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "\\s*;\\s*$");
        Matcher assigned = assignment.matcher(code);
        while (assigned.find()) {
            String left = assigned.group("left");
            String right = assigned.group("right");
            if (candidates.containsKey(left) && candidates.containsKey(right)) {
                peers.get(left).add(right);
                peers.get(right).add(left);
            }
            else if (candidates.containsKey(left) && scalarNames.contains(right))
                selected.add(left);
        }
        boolean changed;
        do {
            changed = false;
            for (String name : new ArrayList<>(selected))
                for (String peer : peers.getOrDefault(name, Set.of()))
                    changed |= selected.add(peer);
        } while (changed);

        String usesOnly = declaration.matcher(code).replaceAll("");
        Set<String> pointerRole = new LinkedHashSet<>();
        for (String name : candidates.keySet()) {
            String token = Pattern.quote(name);
            String withoutZeroMemberAddress = Pattern.compile("&\\s*\\b" + token +
                "\\s*->\\s*field_(?:0x)?0+\\b").matcher(usesOnly)
                .replaceAll("");
            boolean structuralUse = Pattern.compile("\\b" + token +
                "\\s*->|\\b" + token + "\\s*\\[|\\*\\s*\\(?\\s*" +
                token + "\\b").matcher(withoutZeroMemberAddress).find();
            if (structuralUse) pointerRole.add(name);
        }
        /*
         * Do not poison a complete comparison/assignment family merely because one peer has
         * a genuine pointer lifetime.  Optimized x86 commonly reuses the same register across
         * a scalar coordinate and a later pointer; the explicit cast at that boundary is the
         * evidence for keeping the boundary, not for turning every scalar peer back into an
         * anonymous pointer.  Only the variable with the actual dereference/member use is
         * retained as a pointer.
         */
        selected.removeAll(pointerRole);
        if (selected.isEmpty()) return new NormalizedCode(code, 0);

        String normalized = code;
        int replacements = 0;
        for (String name : selected) {
            String type = candidates.get(name);
            Pattern declared = Pattern.compile(
                "(?m)^(?<indent>[ \\t]*)" + Pattern.quote(type) +
                "\\s*\\*\\s*" + Pattern.quote(name) + "\\s*;\\s*$");
            Matcher declaredMatcher = declared.matcher(normalized);
            if (declaredMatcher.find()) {
                normalized = declaredMatcher.replaceFirst(Matcher.quoteReplacement(
                    declaredMatcher.group("indent") + "uint " + name + ";"));
                replacements++;
            }
            Pattern pointerLoad = Pattern.compile(
                "(?m)^(?<indent>[ \\t]*)" + Pattern.quote(name) +
                "\\s*=\\s*\\*\\s*\\(\\s*" + Pattern.quote(type) +
                "\\s*\\*\\*\\s*\\)\\s*(?<address>[^;]+);\\s*$");
            Matcher loaded = pointerLoad.matcher(normalized);
            StringBuffer loadOutput = new StringBuffer();
            while (loaded.find()) {
                loaded.appendReplacement(loadOutput, Matcher.quoteReplacement(
                    loaded.group("indent") + name + " = *(uint *)" +
                    loaded.group("address").trim() + ";"));
                replacements++;
            }
            loaded.appendTail(loadOutput);
            normalized = loadOutput.toString();
            Pattern castAssignment = Pattern.compile(
                "(?m)^(?<indent>[ \\t]*)" + Pattern.quote(name) +
                "\\s*=\\s*\\(\\s*" + Pattern.quote(type) +
                "\\s*\\*\\s*\\)\\s*(?<value>[^;]+);\\s*$");
            Matcher casted = castAssignment.matcher(normalized);
            StringBuffer castOutput = new StringBuffer();
            while (casted.find()) {
                casted.appendReplacement(castOutput, Matcher.quoteReplacement(
                    casted.group("indent") + name + " = " +
                    casted.group("value").trim() + ";"));
                replacements++;
            }
            casted.appendTail(castOutput);
            normalized = castOutput.toString();
            Pattern nullUse = Pattern.compile("(?m)(\\b" + Pattern.quote(name) +
                "\\b\\s*(?:=|==|!=)\\s*)nullptr\\b");
            Matcher nullMatcher = nullUse.matcher(normalized);
            StringBuffer nullOutput = new StringBuffer();
            while (nullMatcher.find()) {
                nullMatcher.appendReplacement(nullOutput,
                    Matcher.quoteReplacement(nullMatcher.group(1) + "0"));
                replacements++;
            }
            nullMatcher.appendTail(nullOutput);
            normalized = nullOutput.toString();
            Pattern zeroMemberAddress = Pattern.compile("&\\s*\\b" +
                Pattern.quote(name) + "\\s*->\\s*field_(?:0x)?0+\\b");
            Matcher zeroMemberMatcher = zeroMemberAddress.matcher(normalized);
            StringBuffer zeroMemberOutput = new StringBuffer();
            while (zeroMemberMatcher.find()) {
                zeroMemberMatcher.appendReplacement(zeroMemberOutput,
                    Matcher.quoteReplacement("(byte *)" + name));
                replacements++;
            }
            zeroMemberMatcher.appendTail(zeroMemberOutput);
            normalized = zeroMemberOutput.toString();
        }
        return replacements == 0 ? new NormalizedCode(code, 0) :
            new NormalizedCode(normalized, replacements);
    }

    /**
     * Cached normalized bodies can be projected again after a parameter type
     * changes.  Never let an exporter-owned post-write alias leak backwards
     * across its own declaration: the entry lifetime still belongs to the ABI
     * parameter.  This is an idempotence repair over our exact marker and
     * deterministic alias spelling, not a new lifetime inference.
     */
    private NormalizedCode repairPredeclarationReusedParameterAliases(String code) {
        if (code == null || !code.contains(STACK_SLOT_SPLIT_MARKER))
            return new NormalizedCode(code, 0);
        List<String> lines = new ArrayList<>(Arrays.asList(code.split("\\R", -1)));
        Pattern declaration = Pattern.compile(
            "^\\s*(?:auto|void|byte|char|u?short|u?int|u?long|undefined[1248]?|" +
            "[A-Za-z_$][A-Za-z0-9_$:]*)\\s*(?:\\*+\\s*)?" +
            "(?<alias>(?<parameter>param_[0-9]+)_after_write(?:_[0-9]+)?)" +
            "\\s*=.*" + Pattern.quote(STACK_SLOT_SPLIT_MARKER) + "\\s*$");
        int replacements = 0;
        for (int declarationLine = 0; declarationLine < lines.size(); declarationLine++) {
            Matcher matcher = declaration.matcher(lines.get(declarationLine));
            if (!matcher.matches()) continue;
            String alias = matcher.group("alias");
            String parameter = matcher.group("parameter");
            for (int index = 0; index < declarationLine; index++) {
                String repaired = replaceIdentifier(lines.get(index), alias, parameter);
                if (!repaired.equals(lines.get(index))) {
                    lines.set(index, repaired);
                    replacements++;
                }
            }
        }
        return replacements == 0 ? new NormalizedCode(code, 0) :
            new NormalizedCode(String.join(System.lineSeparator(), lines), replacements);
    }

    /**
     * Spell exact-width decompiler storage without claiming a semantic domain. Ghidra may keep
     * a four-byte Listing local as undefined4 after a callee is correctly refined to a short
     * output pointer; the same slot is then transported as a dword for packed composition.
     * Exact word+dword machine accesses prove a neutral uint transport view. A one-byte generic
     * pointee is equivalently the already defined neutral byte type.
     */
    private NormalizedCode normalizeGenericMachineStorageViews(Function function,
            String code) {
        if (function == null || code == null || code.isEmpty())
            return new NormalizedCode(code, 0);
        String normalized = code;
        int replacements = 0;

        /*
         * A machine-proven ``return param_N`` retains the formal pointer's exact storage
         * contract in Ghidra.  ``undefinedN`` and the corresponding unsigned fixed-width
         * spelling are the same executable C++ alias in pseudocode_runtime.h; use the latter
         * only for the newly exposed return declaration so restoring that ABI does not add a
         * generic declaration to the text corpus.
         */
        int returnedOrdinal = returnedPointerParameterOrdinal(function);
        if (returnedOrdinal >= 0) {
            Pattern returnedPointer = Pattern.compile(
                "(?m)^(?<indent>[ \\t]*)undefined(?<width>[1248])" +
                "(?<tail>[ \\t]*\\*+[ \\t]*(?:(?:__cdecl|__stdcall|" +
                "__thiscall|__fastcall)[ \\t\\r\\n]+)?" +
                "(?:[A-Za-z_$][A-Za-z0-9_$]*::)*" +
                Pattern.quote(function.getName()) + "[ \\t\\r\\n]*\\()");
            Matcher returnedMatcher = returnedPointer.matcher(normalized);
            if (returnedMatcher.find() && !returnedMatcher.find()) {
                returnedMatcher.reset();
                StringBuffer returnedOutput = new StringBuffer();
                while (returnedMatcher.find()) {
                    returnedMatcher.appendReplacement(returnedOutput,
                        Matcher.quoteReplacement(returnedMatcher.group("indent") +
                            neutralUnsignedType(returnedMatcher.group("width")) +
                            returnedMatcher.group("tail")));
                    replacements++;
                }
                returnedMatcher.appendTail(returnedOutput);
                normalized = returnedOutput.toString();
            }
        }

        Pattern bytePointer = Pattern.compile(
            "(?m)^(\\s*)undefined1\\s*\\*\\s*([A-Za-z_$][A-Za-z0-9_$]*)\\s*;\\s*$");
        Matcher byteMatcher = bytePointer.matcher(normalized);
        StringBuffer byteOutput = new StringBuffer();
        while (byteMatcher.find()) {
            byteMatcher.appendReplacement(byteOutput, Matcher.quoteReplacement(
                byteMatcher.group(1) + "byte *" + byteMatcher.group(2) + ";"));
            replacements++;
        }
        byteMatcher.appendTail(byteOutput);
        normalized = byteOutput.toString();

        // Ghidra's uVar/puVar spelling already records an unsigned machine-width
        // transport role. Preserve that exact width in ordinary C++ instead of
        // carrying an undefinedN declaration into the generated source.
        Pattern unsignedPointer = Pattern.compile(
            "(?m)^(\\s*)undefined(?<width>[1248])\\s*(?<stars>\\*+)\\s*" +
            "(?<name>puVar[0-9]+(?:_mg[0-9]+)?)\\s*;\\s*$");
        Matcher unsignedPointerMatcher = unsignedPointer.matcher(normalized);
        StringBuffer unsignedPointerOutput = new StringBuffer();
        while (unsignedPointerMatcher.find()) {
            String type = neutralUnsignedType(unsignedPointerMatcher.group("width"));
            unsignedPointerMatcher.appendReplacement(unsignedPointerOutput,
                Matcher.quoteReplacement(unsignedPointerMatcher.group(1) + type + " " +
                    unsignedPointerMatcher.group("stars") +
                    unsignedPointerMatcher.group("name") + ";"));
            replacements++;
        }
        unsignedPointerMatcher.appendTail(unsignedPointerOutput);
        normalized = unsignedPointerOutput.toString();

        Pattern unsignedScalar = Pattern.compile(
            "(?m)^(\\s*)undefined(?<width>[1248])\\s+" +
            "(?<name>uVar[0-9]+(?:_mg[0-9]+)?)\\s*;\\s*$");
        Matcher unsignedScalarMatcher = unsignedScalar.matcher(normalized);
        StringBuffer unsignedScalarOutput = new StringBuffer();
        while (unsignedScalarMatcher.find()) {
            String type = neutralUnsignedType(unsignedScalarMatcher.group("width"));
            unsignedScalarMatcher.appendReplacement(unsignedScalarOutput,
                Matcher.quoteReplacement(unsignedScalarMatcher.group(1) + type + " " +
                    unsignedScalarMatcher.group("name") + ";"));
            replacements++;
        }
        unsignedScalarMatcher.appendTail(unsignedScalarOutput);
        normalized = unsignedScalarOutput.toString();

        NormalizedCode wordArrayCursors = normalizeMachineWordStackArrayCursors(normalized);
        normalized = wordArrayCursors.code;
        replacements += wordArrayCursors.replacements;

        Map<String, Variable> locals = new LinkedHashMap<>();
        for (Variable variable : function.getLocalVariables())
            if (variable.isStackVariable() && variable.getName() != null)
                locals.putIfAbsent(variable.getName(), variable);
        Pattern declaration = Pattern.compile(
            "(?m)^(\\s*)undefined4\\s+([A-Za-z_$][A-Za-z0-9_$]*)\\s*;\\s*$");
        Matcher matcher = declaration.matcher(normalized);
        StringBuffer output = new StringBuffer();
        Set<String> narrowOutputLocals = new LinkedHashSet<>();
        while (matcher.find()) {
            String name = matcher.group(2);
            int narrowAddressUses = patternOccurrences(normalized, Pattern.compile(
                "\\(\\s*short\\s*\\*\\s*\\)\\s*&\\s*" +
                Pattern.quote(name) + "(?![A-Za-z0-9_$])"));
            int narrowValueUses = patternOccurrences(normalized, Pattern.compile(
                "\\(\\s*short\\s*\\)\\s*" + Pattern.quote(name) +
                "(?![A-Za-z0-9_$])"));
            int totalUses = identifierOccurrences(normalized, name);
            if (narrowAddressUses > 0 &&
                    totalUses == 1 + narrowAddressUses + narrowValueUses) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(
                    matcher.group(1) + "short " + name + ";"));
                narrowOutputLocals.add(name);
                replacements++;
                continue;
            }
            Variable variable = locals.get(matcher.group(2));
            Set<Integer> widths = variable == null ? Set.of() :
                exactStackAccessWidths(function, variable.getStackOffset());
            if (!widths.contains(2) || !widths.contains(4)) continue;
            matcher.appendReplacement(output, Matcher.quoteReplacement(
                matcher.group(1) + "uint " + matcher.group(2) + ";"));
            replacements++;
        }
        matcher.appendTail(output);
        normalized = output.toString();
        for (String name : narrowOutputLocals) {
            Pattern redundant = Pattern.compile(
                "\\(\\s*short\\s*\\*\\s*\\)\\s*&\\s*" +
                Pattern.quote(name) + "(?![A-Za-z0-9_$])");
            normalized = redundant.matcher(normalized).replaceAll(
                Matcher.quoteReplacement("&" + name));
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        return new NormalizedCode(normalized, replacements);
    }

    /**
     * Ghidra sometimes loses the inferred unsigned transport view of a stack
     * word array after an unrelated SSA lifetime is split.  Restore only the
     * closed LIFO/cursor shape: one generic dword pointer is initialized from
     * one generic dword array, is advanced by whole elements, and stores an
     * independently pointer-typed value.  This proves machine-word transport,
     * not a semantic element type, so both declarations become neutral uint.
     */
    private NormalizedCode normalizeMachineWordStackArrayCursors(String code) {
        Pattern arrayDeclaration = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)undefined4\\s+(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "(?<suffix>\\s*\\[\\s*[1-9][0-9]*\\s*\\]\\s*;)\\s*$");
        Pattern cursorDeclaration = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)undefined4\\s*\\*\\s*" +
            "(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*;\\s*$");
        Matcher arrays = arrayDeclaration.matcher(code);
        Matcher cursors = cursorDeclaration.matcher(code);
        Map<String, String> arrayLines = new LinkedHashMap<>();
        Map<String, String> cursorLines = new LinkedHashMap<>();
        while (arrays.find()) arrayLines.putIfAbsent(arrays.group("name"), arrays.group());
        while (cursors.find()) cursorLines.putIfAbsent(cursors.group("name"), cursors.group());
        if (arrayLines.isEmpty() || cursorLines.isEmpty())
            return new NormalizedCode(code, 0);

        Set<String> pointerValues = pointerDeclarations(code).keySet();
        Set<String> selectedArrays = new LinkedHashSet<>();
        Set<String> selectedCursors = new LinkedHashSet<>();
        for (String cursor : cursorLines.keySet()) {
            for (String array : arrayLines.keySet()) {
                Pattern initialization = Pattern.compile(
                    "(?m)^\\s*" + Pattern.quote(cursor) + "\\s*=\\s*(?:&\\s*" +
                    Pattern.quote(array) + "\\s*\\[\\s*0\\s*\\]|" +
                    Pattern.quote(array) + ")\\s*;\\s*$");
                if (!initialization.matcher(code).find()) continue;
                Pattern step = Pattern.compile(
                    "(?m)^\\s*" + Pattern.quote(cursor) + "\\s*=\\s*" +
                    Pattern.quote(cursor) + "\\s*[+-]\\s*(?:0x[0-9a-fA-F]+|[1-9][0-9]*)\\s*;\\s*$");
                if (!step.matcher(code).find()) continue;
                boolean pointerStore = false;
                for (String value : pointerValues) {
                    if (value.equals(cursor)) continue;
                    Pattern store = Pattern.compile(
                        "(?m)^\\s*\\*\\s*" + Pattern.quote(cursor) +
                        "\\s*=\\s*" + Pattern.quote(value) + "\\s*;\\s*$");
                    if (store.matcher(code).find()) {
                        pointerStore = true;
                        break;
                    }
                }
                if (!pointerStore) continue;
                selectedArrays.add(array);
                selectedCursors.add(cursor);
            }
        }
        if (selectedArrays.isEmpty()) return new NormalizedCode(code, 0);

        String normalized = code;
        int replacements = 0;
        for (String array : selectedArrays) {
            Pattern declaration = Pattern.compile(
                "(?m)^(?<indent>[ \\t]*)undefined4\\s+" + Pattern.quote(array) +
                "(?<suffix>\\s*\\[\\s*[1-9][0-9]*\\s*\\]\\s*;)\\s*$");
            Matcher matcher = declaration.matcher(normalized);
            if (matcher.find()) {
                normalized = matcher.replaceFirst(Matcher.quoteReplacement(
                    matcher.group("indent") + "uint " + array + matcher.group("suffix")));
                replacements++;
            }
        }
        for (String cursor : selectedCursors) {
            Pattern declaration = Pattern.compile(
                "(?m)^(?<indent>[ \\t]*)undefined4\\s*\\*\\s*" +
                Pattern.quote(cursor) + "\\s*;\\s*$");
            Matcher matcher = declaration.matcher(normalized);
            if (matcher.find()) {
                normalized = matcher.replaceFirst(Matcher.quoteReplacement(
                    matcher.group("indent") + "uint *" + cursor + ";"));
                replacements++;
            }
        }
        return new NormalizedCode(normalized, replacements);
    }

    private String neutralUnsignedType(String width) {
        return switch (width) {
            case "1" -> "byte";
            case "2" -> "ushort";
            case "4" -> "uint";
            case "8" -> "ulonglong";
            default -> throw new IllegalArgumentException("unsupported width " + width);
        };
    }

    private int patternOccurrences(String text, Pattern pattern) {
        int result = 0;
        Matcher matcher = pattern.matcher(text == null ? "" : text);
        while (matcher.find()) result++;
        return result;
    }

    private Set<Integer> exactStackAccessWidths(Function function, int stackOffset) {
        Set<Integer> widths = new HashSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                boolean exact = false;
                for (Reference reference : instruction.getOperandReferences(operand))
                    if (reference instanceof StackReference stack &&
                            stack.getStackOffset() == stackOffset) {
                        exact = true;
                        break;
                    }
                if (!exact) continue;
                String rendered = instruction.getDefaultOperandRepresentation(operand)
                    .toUpperCase(Locale.ROOT);
                if (rendered.contains("BYTE PTR")) widths.add(1);
                else if (rendered.contains("WORD PTR") &&
                        !rendered.contains("DWORD PTR")) widths.add(2);
                else if (rendered.contains("DWORD PTR")) widths.add(4);
                else if (rendered.contains("QWORD PTR")) widths.add(8);
            }
        }
        return widths;
    }

    /**
     * Ghidra can retain a pointer declaration for one address-taken stack slot
     * even when the machine code consistently reads that exact storage with x87
     * single-precision operations.  Recover only a whole rendered lifetime: the
     * slot must have repeated exact {@code float ptr [EBP+off]} evidence, every
     * address use must already carry a {@code float *} cast, and no pointer
     * dereference/arithmetic/null role may remain.  Mixed stack slots are left to
     * the interval splitter below instead of receiving a misleading whole-local
     * type.
     */
    private NormalizedCode normalizeMachineStackFloatLocals(Function function,
            String code) {
        if (function == null || code == null || code.isEmpty() ||
                !code.contains("(float)")) return new NormalizedCode(code, 0);
        Map<Integer, Integer> floatAccesses = new HashMap<>();
        Set<Integer> conflictingX87Widths = new HashSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (!mnemonic.startsWith("FLD") && !mnemonic.startsWith("FST")) continue;
            String rendered = instruction.toString().toLowerCase(Locale.ROOT);
            for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                for (Reference reference : instruction.getOperandReferences(operand)) {
                    if (!(reference instanceof StackReference stack)) continue;
                    int offset = stack.getStackOffset();
                    if (rendered.contains("float ptr"))
                        floatAccesses.merge(offset, 1, Integer::sum);
                    else if (rendered.contains("double ptr") ||
                            rendered.contains("tbyte ptr"))
                        conflictingX87Widths.add(offset);
                }
            }
        }
        if (floatAccesses.isEmpty()) return new NormalizedCode(code, 0);

        String normalized = code;
        int replacements = 0;
        for (Variable variable : function.getLocalVariables()) {
            if (!variable.isStackVariable() || variable.getLength() != 4 ||
                    floatAccesses.getOrDefault(variable.getStackOffset(), 0) < 2 ||
                    conflictingX87Widths.contains(variable.getStackOffset())) continue;
            String name = variable.getName();
            PointerDeclaration declaration = pointerDeclarations(normalized).get(name);
            if (declaration == null) continue;
            Pattern declarationLine = Pattern.compile(
                "(?m)^" + Pattern.quote(declaration.indent) +
                Pattern.quote(declaration.type) + "\\s*" +
                Pattern.quote("*".repeat(declaration.stars)) + "\\s*" +
                Pattern.quote(name) + "\\s*;$");
            Matcher declared = declarationLine.matcher(normalized);
            if (!declared.find() || declared.find()) continue;
            String withoutDeclaration = declarationLine.matcher(normalized)
                .replaceFirst("");
            Pattern addressUse = Pattern.compile("&\\s*" + Pattern.quote(name) + "\\b");
            Matcher addresses = addressUse.matcher(withoutDeclaration);
            boolean badAddress = false;
            while (addresses.find()) {
                int start = Math.max(0, addresses.start() - 24);
                String prefix = withoutDeclaration.substring(start, addresses.start());
                if (!prefix.matches("(?s).*\\(\\s*float\\s*\\*\\s*\\)\\s*$")) {
                    badAddress = true;
                    break;
                }
            }
            if (badAddress || pointerSemanticUse(withoutDeclaration, name) ||
                    Pattern.compile("(?m)^\\s*" + Pattern.quote(name) +
                        "\\s*=").matcher(withoutDeclaration).find()) continue;
            String rewritten = declarationLine.matcher(normalized)
                .replaceFirst(Matcher.quoteReplacement(
                    declaration.indent + "float " + name + ";"));
            rewritten = rewritten.replaceAll(
                "\\(\\s*float\\s*\\*\\s*\\)\\s*&\\s*" +
                    Pattern.quote(name) + "\\b", "&" + name);
            rewritten = rewritten.replaceAll(
                "\\(\\s*float\\s*\\)\\s*" + Pattern.quote(name) + "\\b",
                name);
            normalized = rewritten;
            replacements++;
        }
        NormalizedCode intervals = normalizeExplicitFloatPointerLifetimes(normalized);
        return new NormalizedCode(intervals.code,
            replacements + intervals.replacements);
    }

    private boolean pointerSemanticUse(String code, String name) {
        String token = Pattern.quote(name);
        return Pattern.compile("\\b" + token + "\\s*(?:->|\\[)").matcher(code).find() ||
            Pattern.compile("\\*\\s*" + token + "\\b").matcher(code).find() ||
            Pattern.compile("\\b" + token + "\\s*(?:\\+|-)=?").matcher(code).find() ||
            Pattern.compile("\\b" + token +
                "\\s*(?:==|!=)\\s*(?:nullptr|\\([^)]*\\*\\)\\s*0x0|0x0)")
                .matcher(code).find();
    }

    /**
     * Split an explicitly floating value which Ghidra stores in a pointer-typed
     * SSA local.  The alias declarations live at function scope without an
     * initializer: placing an initialized declaration inside a switch arm makes
     * otherwise valid compiler-generated gotos cross that initialization.  A
     * lifetime starts only at an explicit pointer-cast-from-float or an
     * assignment whose expression contains an independently declared floating
     * value.  It ends before the next pointer-semantic definition/use.  Null in
     * an already proven floating branch is the machine zero value, not a new
     * pointer lifetime.
     */
    private NormalizedCode normalizeExplicitFloatPointerLifetimes(String code) {
        NormalizedCode migrated = migrateInvalidFloatingLifetimeAliases(code);
        code = migrated.code;
        Map<String, PointerDeclaration> pointers = pointerDeclarations(code);
        if (pointers.isEmpty()) return new NormalizedCode(code, 0);
        List<String> lines = new ArrayList<>(Arrays.asList(code.split("\\R", -1)));
        Set<String> floatingNames = new HashSet<>();
        Pattern floatingDeclaration = Pattern.compile(
            "^\\s*(?:float|double|float10)\\s+" +
            "(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*(?:[;=]).*$");
        for (String line : lines) {
            Matcher declaration = floatingDeclaration.matcher(line);
            if (declaration.matches()) floatingNames.add(declaration.group("name"));
        }

        Set<String> declarations = new java.util.LinkedHashSet<>();
        int replacements = migrated.replacements;
        int ordinal = 1;
        final String marker =
            "/* split floating lifetime from pointer-typed SSA storage */";

        // Migrate bodies cached by the earlier inline-declaration rule.
        Pattern oldDeclaration = Pattern.compile(
            "^(?<indent>[ \\t]*)float\\s+(?<alias>float_(?<name>" +
            "[A-Za-z_$][A-Za-z0-9_$]*)_[0-9]+)\\s*=\\s*(?<rhs>.+);\\s*" +
            Pattern.quote(marker) + "\\s*$");
        for (int index = 0; index < lines.size(); index++) {
            Matcher old = oldDeclaration.matcher(lines.get(index));
            if (!old.matches() || !pointers.containsKey(old.group("name"))) continue;
            declarations.add(old.group("alias"));
            floatingNames.add(old.group("alias"));
            lines.set(index, old.group("indent") + old.group("alias") + " = " +
                old.group("rhs").trim() + "; " + marker);
            replacements++;
        }

        Pattern assignment = Pattern.compile(
            "^(?<indent>[ \\t]*)(?<name>[A-Za-z_$][A-Za-z0-9_$]*)\\s*=\\s*" +
            "(?<rhs>.+);\\s*$");
        for (String name : pointers.keySet()) {
            String alias = null;
            boolean active = false;
            for (int index = 0; index < lines.size(); index++) {
                String line = lines.get(index);
                Matcher candidate = assignment.matcher(line);
                if (candidate.matches() && name.equals(candidate.group("name"))) {
                    String rhs = candidate.group("rhs").trim();
                    boolean explicit = explicitPointerFloatCast(rhs);
                    boolean floating = explicit || explicitFloatingResult(rhs) ||
                        !outerPointerCast(rhs) && !topLevelCallExpression(rhs) &&
                            floatingExpression(rhs, floatingNames);
                    if (active && nullPointerExpression(rhs)) {
                        lines.set(index, candidate.group("indent") + alias +
                            " = 0.0f; " + marker);
                        replacements++;
                        continue;
                    }
                    if (!floating) {
                        active = false;
                        alias = null;
                        continue;
                    }
                    if (!active) {
                        alias = "float_" + name + "_" + ordinal++;
                        while (identifierOccurrences(code, alias) != 0 ||
                                declarations.contains(alias))
                            alias = "float_" + name + "_" + ordinal++;
                        declarations.add(alias);
                        floatingNames.add(alias);
                        active = true;
                    }
                    String value = explicit ? stripPointerFloatCast(rhs) : rhs;
                    lines.set(index, candidate.group("indent") + alias + " = " +
                        value + "; " + marker);
                    replacements++;
                    continue;
                }
                if (!active) continue;
                if (!identifierToken(line, name)) {
                    if (line.strip().matches(
                            "(?:break|continue|return|goto)\\b.*")) {
                        active = false;
                        alias = null;
                    }
                    continue;
                }
                if (pointerSemanticLifetimeUse(line, name)) {
                    active = false;
                    alias = null;
                    continue;
                }
                lines.set(index, replaceIdentifier(line, name, alias)
                    .replaceAll("\\(\\s*float\\s*\\)\\s*" +
                        Pattern.quote(alias) + "\\b", alias));
                replacements++;
                if (line.strip().matches("(?:break|continue|return|goto)\\b.*")) {
                    active = false;
                    alias = null;
                }
            }
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        String normalized = String.join(System.lineSeparator(), lines);
        if (!declarations.isEmpty()) {
            Matcher body = Pattern.compile("(?m)^\\{[ \\t]*$").matcher(normalized);
            if (!body.find()) return new NormalizedCode(code, 0);
            int newline = normalized.indexOf('\n', body.end());
            if (newline < 0) return new NormalizedCode(code, 0);
            StringBuilder inserted = new StringBuilder();
            for (String declaration : declarations)
                if (!Pattern.compile("(?m)^\\s*float\\s+" +
                        Pattern.quote(declaration) + "\\s*;").matcher(normalized).find())
                    inserted.append("  float ").append(declaration).append(";")
                        .append(System.lineSeparator());
            normalized = normalized.substring(0, newline + 1) + inserted +
                normalized.substring(newline + 1);
            replacements += declarations.size();
        }
        return new NormalizedCode(normalized, replacements);
    }

    private boolean explicitPointerFloatCast(String expression) {
        return Pattern.compile(
            "^\\([^;()]+\\*+\\)\\s*\\(*\\s*\\(float\\)")
            .matcher(expression).find();
    }

    private String stripPointerFloatCast(String expression) {
        return expression.replaceFirst(
            "^\\([^;()]+\\*+\\)\\s*", "");
    }

    private boolean explicitFloatingResult(String expression) {
        return Pattern.compile("^\\(*\\s*\\(\\s*(?:float|double|float10)\\s*\\)")
            .matcher(expression).find();
    }

    private boolean outerPointerCast(String expression) {
        return Pattern.compile("^\\(\\s*[^;()]+\\*+\\s*\\)")
            .matcher(expression).find();
    }

    private boolean topLevelCallExpression(String expression) {
        String value = expression.stripLeading();
        while (value.startsWith("(")) {
            int close = matchingDelimiter(value, 0, '(', ')');
            if (close <= 0 || close == value.length() - 1) break;
            String prefix = value.substring(1, close).trim();
            if (prefix.matches("(?:const\\s+)?[A-Za-z_$][A-Za-z0-9_$:<> ]*\\*+"))
                value = value.substring(close + 1).stripLeading();
            else break;
        }
        return Pattern.compile("^[A-Za-z_$][A-Za-z0-9_$:]*\\s*\\(")
            .matcher(value).find();
    }

    /**
     * Reverse cached aliases created by the former expression-wide float test.
     * A pointer cast is a pointer result even when its operand mentions a float;
     * a call is restored only when the alias is subsequently consumed as a
     * pointer.  The exact exporter marker and deterministic alias make this a
     * bounded migration rather than a semantic guess.
     */
    private NormalizedCode migrateInvalidFloatingLifetimeAliases(String code) {
        final String marker =
            "/* split floating lifetime from pointer-typed SSA storage */";
        Map<String, PointerDeclaration> pointers = pointerDeclarations(code);
        if (pointers.isEmpty() || !code.contains(marker))
            return new NormalizedCode(code, 0);
        List<String> lines = new ArrayList<>(Arrays.asList(code.split("\\R", -1)));
        Set<String> invalid = new LinkedHashSet<>();
        Map<String, String> originals = new LinkedHashMap<>();
        Pattern assignment = Pattern.compile(
            "^\\s*(?<alias>float_[A-Za-z_$][A-Za-z0-9_$]*_[0-9]+)" +
            "\\s*=\\s*(?<rhs>.+);\\s*" + Pattern.quote(marker) + "\\s*$");
        for (int index = 0; index < lines.size(); index++) {
            Matcher candidate = assignment.matcher(lines.get(index));
            if (!candidate.matches()) continue;
            String alias = candidate.group("alias");
            String original = null;
            for (String pointer : pointers.keySet()) {
                if (alias.matches("float_" + Pattern.quote(pointer) + "_[0-9]+")) {
                    original = pointer;
                    break;
                }
            }
            if (original == null) continue;
            String rhs = candidate.group("rhs").trim();
            String suffix = String.join(System.lineSeparator(),
                lines.subList(index + 1, lines.size()));
            boolean pointerUse = Pattern.compile(
                "\\(\\s*[A-Za-z_$][A-Za-z0-9_$:<> ]*\\*+\\s*\\)\\s*" +
                    Pattern.quote(alias) + "\\b|\\breturn\\s+" +
                    Pattern.quote(alias) + "\\s*;")
                .matcher(suffix).find() || pointerSemanticUse(suffix, alias);
            if (outerPointerCast(rhs) && !explicitPointerFloatCast(rhs) ||
                    topLevelCallExpression(rhs) && pointerUse) {
                invalid.add(alias);
                originals.put(alias, original);
            }
        }
        if (invalid.isEmpty()) return new NormalizedCode(code, 0);
        int replacements = 0;
        Pattern declaration = Pattern.compile(
            "^\\s*float\\s+(?<alias>float_[A-Za-z_$][A-Za-z0-9_$]*_[0-9]+)" +
            "\\s*;\\s*$");
        List<String> repaired = new ArrayList<>();
        for (String line : lines) {
            Matcher declared = declaration.matcher(line);
            if (declared.matches() && invalid.contains(declared.group("alias"))) {
                replacements++;
                continue;
            }
            String value = line;
            for (String alias : invalid) {
                String replaced = replaceIdentifier(value, alias, originals.get(alias));
                if (!replaced.equals(value)) {
                    value = replaced;
                    replacements++;
                }
            }
            if (value.contains(marker) && invalid.stream().anyMatch(alias ->
                    line.contains(alias + " =")))
                value = value.replace(marker, "").stripTrailing();
            repaired.add(value);
        }
        return new NormalizedCode(String.join(System.lineSeparator(), repaired), replacements);
    }

    private boolean floatingExpression(String expression,
            Set<String> floatingNames) {
        if (Pattern.compile("\\(\\s*(?:float|double|float10)\\s*\\)")
                .matcher(expression).find()) return true;
        for (String name : floatingNames)
            if (identifierToken(expression, name)) return true;
        return Pattern.compile("(?<![A-Za-z0-9_$])(?:[0-9]+\\.[0-9]*|" +
            "\\.[0-9]+)(?:[eE][+-]?[0-9]+)?[fFlL]?(?![A-Za-z0-9_$])")
            .matcher(expression).find();
    }

    private boolean identifierToken(String text, String name) {
        return Pattern.compile("(?<![A-Za-z0-9_$])" + Pattern.quote(name) +
            "(?![A-Za-z0-9_$])").matcher(text).find();
    }

    private boolean pointerSemanticLifetimeUse(String line, String name) {
        String token = Pattern.quote(name);
        String withoutFloatCast = line.replaceAll(
            "\\(\\s*float\\s*\\)\\s*" + token + "\\b", name);
        return Pattern.compile("\\b" + token + "\\s*(?:->|\\[)")
                .matcher(withoutFloatCast).find() ||
            Pattern.compile("(?:^|[=,(])\\s*\\*\\s*" + token + "\\b")
                .matcher(withoutFloatCast).find() ||
            Pattern.compile("&\\s*" + token + "\\b")
                .matcher(withoutFloatCast).find() ||
            Pattern.compile("\\b" + token +
                "\\s*(?:==|!=)\\s*(?:nullptr|0x0)")
                .matcher(withoutFloatCast).find();
    }

    /**
     * Ghidra 12.1 can retain an artificial {@code extraout_ST0} even after the
     * physical vtable member has acquired an exact scalar x87 return ABI. Fold
     * only a call whose first bounded x87 consumer is an FSTP of the same
     * concrete width.
     */
    private NormalizedCode normalizePhysicalX87CallResults(Function function,
            String code) {
        if (function == null || code == null || !code.contains("extraout_ST0") ||
                !code.contains("ST_CALLSITE[")) return new NormalizedCode(code, 0);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        Pattern pair = Pattern.compile(
            "(?s)(?<prefix>/\\*\\s*ST_CALLSITE\\[(?<address>[0-9A-Fa-f]+)\\]:" +
            "(?:(?!\\*/).)*\\*/\\s*)(?<call>(?<receiver>[A-Za-z_$][A-Za-z0-9_$]*)->" +
            "(?<slot>[A-Za-z_$][A-Za-z0-9_$]*)\\s*\\([^;]*?\\))\\s*;" +
            "\\s*(?:/\\*\\s*ST_PSEUDO\\[.*?\\*/\\s*)?" +
            "(?<lvalue>[^;=]+?)\\s*=\\s*\\(float\\)\\s*extraout_ST0\\s*;");
        Matcher matcher = pair.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            Address call;
            try {
                call = currentProgram.getAddressFactory().getAddress(
                    matcher.group("address"));
            }
            catch (Exception ignored) { call = null; }
            Instruction instruction = call == null ? null : listing.getInstructionAt(call);
            ghidra.program.model.data.FunctionDefinition definition =
                vtableSlotDefinition(declarations, matcher.group("receiver"),
                    matcher.group("slot"));
            if (instruction == null || !function.getBody().contains(call) ||
                    !"CALL".equalsIgnoreCase(instruction.getMnemonicString()) ||
                    !"/float".equals(boundedX87StoredType(call)) ||
                    definition == null ||
                    !"/float".equals(
                        unwrapTypeDef(definition.getReturnType()).getPathName()) ||
                    Set.of("__cdecl", "__stdcall").contains(
                        definition.getCallingConventionName())) continue;
            String replacement = matcher.group("prefix") +
                matcher.group("lvalue").trim() + " = " +
                matcher.group("call").trim() + ";";
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        matcher.appendTail(output);
        String rewritten = output.toString();
        Pattern declaration = Pattern.compile(
            "(?m)^\\s*float10\\s+extraout_ST0\\s*;\\s*(?:\\R|$)");
        String withoutDeclaration = declaration.matcher(rewritten).replaceFirst("");
        if (!Pattern.compile("\\bextraout_ST0\\b").matcher(withoutDeclaration).find())
            return new NormalizedCode(withoutDeclaration, replacements + 1);
        return new NormalizedCode(rewritten, replacements);
    }

    private String boundedX87StoredType(Address call) {
        Instruction instruction = listing.getInstructionAfter(call);
        for (int count = 0; instruction != null && count < 6; count++) {
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            if (mnemonic.equals("FSTP")) {
                String rendered = instruction.toString().toLowerCase(Locale.ROOT);
                if (rendered.contains("float ptr")) return "/float";
                if (rendered.contains("double ptr")) return "/double";
                return "";
            }
            if (mnemonic.startsWith("F") || mnemonic.startsWith("CALL") ||
                    mnemonic.startsWith("J") || mnemonic.startsWith("RET")) return "";
            instruction = listing.getInstructionAfter(instruction.getAddress());
        }
        return "";
    }

    /**
     * Render an exact machine-proven helper roundtrip as source-level sequencing.
     *
     * A per-call override is necessary for Ghidra's SSA, but the target helper may
     * deliberately retain its honest source-level void return.  In that case Ghidra
     * prints `result = helper(..., buffer, ...); return result;`, which is neither
     * valid source nor a faithful description of the original operation.  The
     * analyzer/applier marker records the exact formal parameter which the helper's
     * complete CFG leaves in EAX.  Fold only an immediately returned simple actual:
     *
     *     helper(..., buffer, ...);
     *     return buffer;
     *
     * An unrenderable marked call is kept visible as a strict-zero quality issue so
     * exporter drift cannot silently reintroduce an invalid cast/assignment.
     */
    private NormalizedCode normalizeRoundTripCallResults(Function function,
            String code) {
        List<RoundTripPresentation> proofs = new ArrayList<>();
        InstructionIterator iterator = listing.getInstructions(function.getBody(), true);
        while (iterator.hasNext()) {
            Instruction instruction = iterator.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            String comment = listing.getComment(CommentType.EOL,
                instruction.getAddress());
            if (comment == null) continue;
            Matcher marker = ROUNDTRIP_RETURN_ORDINAL.matcher(comment);
            if (!marker.find()) continue;
            Function called = directCalledFunction(instruction);
            if (called == null) continue;
            int ordinal = Integer.parseInt(marker.group(1));
            proofs.add(new RoundTripPresentation(instruction.getAddress(),
                called.getName(), ordinal));
        }
        if (proofs.isEmpty()) return new NormalizedCode(code, 0);

        String normalized = code;
        int replacements = 0;
        List<String> failures = new ArrayList<>();
        for (RoundTripPresentation proof : proofs) {
            RoundTripRewrite rewrite = rewriteRoundTripCallResult(normalized, proof);
            if (!rewrite.matched) failures.add(addr(proof.callAddress));
            else {
                normalized = rewrite.code;
                replacements += rewrite.replacements;
            }
        }
        if (failures.isEmpty()) {
            NormalizedCode deadResults = removeDeadRoundTripDeclarations(normalized);
            normalized = deadResults.code;
            replacements += deadResults.replacements;
        }
        if (!failures.isEmpty()) {
            normalized = "/* ST_PSEUDO[roundtrip_call_presentation_failure]: " +
                "machine-proven returned-parameter callsite(s) could not be rendered: " +
                String.join(",", failures) + " */\n" + normalized;
        }
        return new NormalizedCode(normalized, replacements);
    }

    private RoundTripRewrite rewriteRoundTripCallResult(String code,
            RoundTripPresentation proof) {
        Pattern callName = Pattern.compile("(?<![A-Za-z0-9_$])" +
            "(?<name>(?:[A-Za-z_$][A-Za-z0-9_$]*::)*" +
            Pattern.quote(proof.calleeName) + ")\\s*\\(");
        Matcher matcher = callName.matcher(code);
        List<RoundTripRewriteCandidate> candidates = new ArrayList<>();
        while (matcher.find()) {
            int open = matcher.end() - 1;
            int close = matchingParenthesis(code, open);
            if (close < 0) continue;
            int semicolon = skipHorizontalWhitespace(code, close + 1);
            if (semicolon >= code.length() || code.charAt(semicolon) != ';') continue;
            List<String> arguments = splitTopLevelArguments(
                code.substring(open + 1, close));
            if (proof.returnedOrdinal < 0 ||
                    proof.returnedOrdinal >= arguments.size()) continue;
            String returned = arguments.get(proof.returnedOrdinal).trim();
            if (!SIMPLE_IDENTIFIER.matcher(returned).matches()) continue;

            int lineStart = code.lastIndexOf('\n', matcher.start()) + 1;
            String prefix = code.substring(lineStart, matcher.start());
            Matcher assignment = Pattern.compile(
                "^(?<indent>[ \\t]*)(?<result>[A-Za-z_$][A-Za-z0-9_$]*)" +
                "[ \\t]*=[ \\t]*$").matcher(prefix);
            Matcher plain = Pattern.compile("^(?<indent>[ \\t]*)$").matcher(prefix);
            String result;
            String indent;
            if (assignment.matches()) {
                result = assignment.group("result");
                indent = assignment.group("indent");
            }
            else if (plain.matches()) {
                result = returned;
                indent = plain.group("indent");
            }
            else continue;

            Matcher terminal = Pattern.compile("\\G\\s*return\\s+" +
                Pattern.quote(result) + "\\s*;").matcher(code);
            terminal.region(semicolon + 1, code.length());
            if (!terminal.find()) continue;
            if (plain.matches()) {
                candidates.add(new RoundTripRewriteCandidate(lineStart,
                    terminal.end(), code.substring(lineStart, terminal.end()), true));
                continue;
            }
            String call = code.substring(matcher.start(), semicolon + 1);
            String replacement = indent + call + "\n" + indent +
                "return " + returned + ";";
            candidates.add(new RoundTripRewriteCandidate(lineStart,
                terminal.end(), replacement, false));
        }
        if (candidates.size() != 1)
            return new RoundTripRewrite(code, 0, false);
        RoundTripRewriteCandidate candidate = candidates.get(0);
        if (candidate.alreadyNormalized)
            return new RoundTripRewrite(code, 0, true);
        String rewritten = code.substring(0, candidate.start) +
            candidate.replacement + code.substring(candidate.end);
        rewritten = removeDeadRoundTripResultDeclaration(rewritten, code,
            candidate.start);
        return new RoundTripRewrite(rewritten, 1, true);
    }

    private int skipHorizontalWhitespace(String text, int start) {
        int index = start;
        while (index < text.length() &&
                (text.charAt(index) == ' ' || text.charAt(index) == '\t')) index++;
        return index;
    }

    private String removeDeadRoundTripResultDeclaration(String rewritten,
            String original, int originalAssignmentStart) {
        int lineEnd = original.indexOf('\n', originalAssignmentStart);
        if (lineEnd < 0) lineEnd = original.length();
        Matcher assignment = Pattern.compile(
            "^[ \\t]*(?<result>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=")
            .matcher(original.substring(originalAssignmentStart, lineEnd));
        if (!assignment.find()) return rewritten;
        String name = assignment.group("result");
        Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])");
        int occurrences = 0;
        Matcher uses = token.matcher(rewritten);
        while (uses.find() && occurrences < 2) occurrences++;
        if (occurrences != 1) return rewritten;
        Pattern declaration = Pattern.compile(
            "(?m)^[ \\t]*(?:[A-Za-z_$][A-Za-z0-9_$:]*[ \\t]+)+" +
            "(?:\\*+[ \\t]*)?" + Pattern.quote(name) +
            "[ \\t]*;[ \\t]*(?:\\R|$)");
        Matcher declared = declaration.matcher(rewritten);
        return declared.find() ? declared.replaceFirst("") : rewritten;
    }

    private NormalizedCode removeDeadRoundTripDeclarations(String code) {
        Pattern declaration = Pattern.compile(
            "(?m)^[ \\t]*(?:[A-Za-z_$][A-Za-z0-9_$:]*[ \\t]+)+" +
            "(?:\\*+[ \\t]*)?(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "[ \\t]*;[ \\t]*(?:\\R|$)");
        Matcher matcher = declaration.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String name = matcher.group("name");
            Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
                Pattern.quote(name) + "(?![A-Za-z0-9_$])");
            int occurrences = 0;
            Matcher uses = token.matcher(code);
            while (uses.find() && occurrences < 2) occurrences++;
            if (occurrences == 1) {
                matcher.appendReplacement(output, "");
                replacements++;
            }
            else matcher.appendReplacement(output,
                Matcher.quoteReplacement(matcher.group()));
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Keep a returned-parameter helper as ordinary source sequencing when one caller needs a
     * different pointer view.  Ghidra's C printer legally emits
     * {@code result = (T *)helper(..., storage, ...)}, but wrapping the call itself in a cast is
     * a readability regression in the C++ source tree.  The callee marker and complete machine
     * CFG prove that the result is the exact actual at {@code ordinal}; therefore render:
     *
     * <pre>
     * helper(..., storage, ...);
     * result = (T *)storage;
     * </pre>
     *
     * Only a simple actual and one complete assignment statement are accepted.  Argument
     * evaluation order and the call side effects remain unchanged, while the representation
     * boundary is attached to storage rather than obscuring the call.
     */
    private NormalizedCode normalizeReturnedParameterCallResults(Function function,
            String code) {
        if (function == null || code == null || code.isEmpty())
            return new NormalizedCode(code, 0);
        Map<String, Integer> returnedOrdinals = new LinkedHashMap<>();
        Set<String> conflicts = new HashSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function direct = directCalledFunction(instruction);
            Function target = resolvedThunkTarget(direct);
            int ordinal = returnedPointerParameterOrdinal(target);
            if (direct == null || ordinal < 0) continue;
            Integer previous = returnedOrdinals.putIfAbsent(direct.getName(), ordinal);
            if (previous != null && previous.intValue() != ordinal)
                conflicts.add(direct.getName());
        }
        for (String conflict : conflicts) returnedOrdinals.remove(conflict);
        if (returnedOrdinals.isEmpty()) return new NormalizedCode(code, 0);

        String normalized = code;
        int replacements = 0;
        for (Map.Entry<String, Integer> proof : returnedOrdinals.entrySet()) {
            Pattern callName = Pattern.compile("(?<![A-Za-z0-9_$])" +
                "(?<name>(?:[A-Za-z_$][A-Za-z0-9_$]*::)*" +
                Pattern.quote(proof.getKey()) + ")\\s*\\(");
            Matcher matcher = callName.matcher(normalized);
            List<ReturnedParameterAssignment> edits = new ArrayList<>();
            while (matcher.find()) {
                int open = matcher.end() - 1;
                int close = matchingParenthesis(normalized, open);
                if (close < 0) continue;
                int semicolon = skipHorizontalWhitespace(normalized, close + 1);
                if (semicolon >= normalized.length() ||
                        normalized.charAt(semicolon) != ';') continue;
                List<String> arguments = splitTopLevelArguments(
                    normalized.substring(open + 1, close));
                int ordinal = proof.getValue();
                if (ordinal < 0 || ordinal >= arguments.size()) continue;
                String returned = arguments.get(ordinal).trim();
                boolean simpleReturned = SIMPLE_IDENTIFIER.matcher(returned).matches();
                boolean addressedReturned = Pattern.compile(
                    "&\\s*[A-Za-z_$][A-Za-z0-9_$]*").matcher(returned).matches();
                if (!simpleReturned && !addressedReturned) continue;

                int lineStart = normalized.lastIndexOf('\n', matcher.start()) + 1;
                String prefix = normalized.substring(lineStart, matcher.start());
                Matcher assignment = Pattern.compile(
                    "^(?<indent>[ \\t]*)(?<result>[A-Za-z_$][A-Za-z0-9_$]*)" +
                    "[ \\t]*=[ \\t]*(?<cast>\\([A-Za-z_$][A-Za-z0-9_$: ]*" +
                    "\\s*\\*+\\))[ \\t]*$").matcher(prefix);
                Matcher plainAssignment = Pattern.compile(
                    "^(?<indent>[ \\t]*)(?<result>[A-Za-z_$][A-Za-z0-9_$]*)" +
                    "[ \\t]*=[ \\t]*$").matcher(prefix);
                boolean casted = assignment.matches();
                if (!casted && (!addressedReturned || !plainAssignment.matches()))
                    continue;
                String call = normalized.substring(matcher.start(), close + 1);
                String indent = casted ? assignment.group("indent") :
                    plainAssignment.group("indent");
                String result = casted ? assignment.group("result") :
                    plainAssignment.group("result");
                String projected = casted ? assignment.group("cast") + returned :
                    returned;
                String replacement = indent + call + ";\n" + indent +
                    result + " = " + projected + ";";
                edits.add(new ReturnedParameterAssignment(lineStart, semicolon + 1,
                    replacement));
            }
            for (ReturnedParameterAssignment edit : edits.reversed()) {
                normalized = normalized.substring(0, edit.start) + edit.replacement +
                    normalized.substring(edit.end);
                replacements++;
            }
        }
        return new NormalizedCode(normalized, replacements);
    }

    private int returnedPointerParameterOrdinal(Function function) {
        if (function == null) return -1;
        String comment = listing.getComment(CommentType.PLATE,
            function.getEntryPoint());
        if (comment == null) return -1;
        Matcher matcher = RETURNED_POINTER_PARAMETER_ORDINAL.matcher(comment);
        if (!matcher.find()) return -1;
        try { return Integer.parseInt(matcher.group(1)); }
        catch (NumberFormatException exception) { return -1; }
    }

    private Function resolvedThunkTarget(Function function) {
        Set<Address> seen = new HashSet<>();
        while (function != null && function.isThunk() &&
                seen.add(function.getEntryPoint())) {
            Function target = function.getThunkedFunction(false);
            if (target == null || target.equals(function)) break;
            function = target;
        }
        return function;
    }

    /**
     * Split a compiler-recycled incoming stack slot in the text projection.
     *
     * The Listing must keep the entry parameter because it is part of the ABI.
     * When the machine code fully overwrites that physical slot with an
     * independently defined value after the entry value's last use, Ghidra can
     * nevertheless render both SSA domains with the same parameter name.  A
     * source local is safe only for one exact assignment whose lexical block
     * contains every post-write use and has no label which can jump across the
     * initializer.
     */
    private NormalizedCode normalizeReusedParameterLifetimes(Function function,
            String code) {
        if (function == null || code == null || code.isEmpty())
            return new NormalizedCode(code, 0);
        Set<String> candidates = reusedParameterNames(function);
        if (candidates.isEmpty()) return new NormalizedCode(code, 0);
        NormalizedCode migrated = migrateLegacyOutputCallLifetimes(candidates, code);
        NormalizedCode outputCalls = normalizeOutputCallReusedParameters(
            candidates, migrated.code);
        List<String> lines = new ArrayList<>(Arrays.asList(
            outputCalls.code.split("\\R", -1)));
        int replacements = migrated.replacements + outputCalls.replacements +
            repairExistingReusedLifetimeDeclarations(
            function, candidates, lines);
        for (String name : candidates) {
            Pattern assignment = Pattern.compile("^(?<indent>[ \\t]*)" +
                Pattern.quote(name) + "[ \\t]*=[ \\t]*(?<rhs>[^;\\r\\n]+);[ \\t]*$");
            int assignmentLine = -1;
            Matcher selected = null;
            for (int index = 0; index < lines.size(); index++) {
                Matcher matcher = assignment.matcher(lines.get(index));
                if (!matcher.matches()) continue;
                assignmentLine = index;
                selected = matcher;
                break;
            }
            if (assignmentLine < 0 || selected == null) continue;

            int depth = 0;
            for (int index = 0; index < assignmentLine; index++)
                depth += braceDelta(lines.get(index));
            int assignmentDepth = depth;
            int end = lines.size();
            int running = assignmentDepth;
            boolean labelled = false;
            for (int index = assignmentLine + 1; index < lines.size(); index++) {
                String stripped = lines.get(index).stripLeading();
                if (running == assignmentDepth &&
                        (stripped.matches("(?:LAB_|cf_)[A-Za-z0-9_$]+:.*") ||
                         stripped.matches("(?:case\\b.*|default\\s*:.*)")))
                    labelled = true;
                int next = running + braceDelta(lines.get(index));
                if (next < assignmentDepth) {
                    end = index;
                    break;
                }
                running = next;
            }
            if (labelled) continue;
            String afterBlock = String.join(System.lineSeparator(),
                lines.subList(end, lines.size()));
            if (identifierOccurrences(afterBlock, name) != 0) continue;
            String interval = String.join(System.lineSeparator(),
                lines.subList(assignmentLine + 1, end));
            if (identifierOccurrences(interval, name) == 0) continue;

            String local = name + "_after_write";
            int suffix = 2;
            String currentProjection = String.join(System.lineSeparator(), lines);
            while (identifierOccurrences(currentProjection, local) != 0)
                local = name + "_after_write_" + suffix++;
            String rhs = selected.group("rhs").trim();
            String declarationType = reusedLifetimeDeclarationType(function, name, rhs);
            lines.set(assignmentLine, selected.group("indent") + declarationType + " " + local +
                " = " + rhs + "; " +
                STACK_SLOT_SPLIT_MARKER);
            for (int index = assignmentLine + 1; index < end; index++)
                lines.set(index, replaceIdentifier(lines.get(index), name, local));
            replacements++;
        }
        return new NormalizedCode(String.join(System.lineSeparator(), lines), replacements);
    }

    /**
     * Migrate the first output-call projection, which used the same
     * {@code param_N_after_write} spelling as ordinary explicit assignments.
     * When an ordinary split shadows it, the outer declaration is dead and can
     * be removed.  Otherwise invert the old mechanical rewrite, then let the
     * current evidence-gated pass decide whether the value is really a pointer
     * lifetime or merely a scalar output.
     */
    private NormalizedCode migrateLegacyOutputCallLifetimes(Set<String> candidates,
            String code) {
        String migrated = code;
        int replacements = 0;
        for (String parameter : candidates) {
            String legacy = parameter + "_after_write";
            Pattern declaration = Pattern.compile(
                "(?m)^[ \\t]*void[ \\t]*\\*[ \\t]*" + Pattern.quote(legacy) +
                "[ \\t]*=[ \\t]*nullptr;[ \\t]*" +
                Pattern.quote(OUTPUT_CALL_SLOT_SPLIT_MARKER) + "[ \\t]*(?:\\R|$)");
            Matcher declared = declaration.matcher(migrated);
            if (!declared.find()) continue;
            String withoutOuter = migrated.substring(0, declared.start()) +
                migrated.substring(declared.end());
            Pattern shadow = Pattern.compile(
                "(?m)^[ \\t]*(?:auto|void|byte|char|u?short|u?int|u?long|" +
                "undefined[1248]?|[A-Za-z_$][A-Za-z0-9_$:]*)[ \\t]*" +
                "(?:\\*+[ \\t]*)?" + Pattern.quote(legacy) +
                "[ \\t]*(?:=|;)");
            if (shadow.matcher(withoutOuter).find()) {
                migrated = withoutOuter;
                replacements++;
                continue;
            }

            // Restore the exact pre-normalization parameter spelling.  This
            // reverses only an exporter-owned identifier and address operand;
            // the current pass below will create `_after_output` again when
            // fixed-offset pointer evidence still exists.
            migrated = replaceIdentifier(withoutOuter, legacy, parameter);
            replacements++;
        }
        return new NormalizedCode(migrated, replacements);
    }

    /**
     * A callee may overwrite an incoming scalar parameter slot through `&param` rather than an
     * explicit assignment visible in decompiler text.  The repair applier's exact marker proves
     * that lifetime boundary.  Materialize a neutral pointer local only when all later uses are
     * fixed byte-offset dereferences and no label can bypass the defining call.
     */
    private NormalizedCode normalizeOutputCallReusedParameters(Set<String> candidates,
            String code) {
        String normalized = code;
        int replacements = 0;
        for (String name : candidates) {
            Pattern address = Pattern.compile(
                "\\(\\s*(?<word>int|uint|undefined4)\\s*\\*\\s*\\)\\s*&\\s*" +
                Pattern.quote(name) + "(?![A-Za-z0-9_$])");
            Matcher matcher = address.matcher(normalized);
            if (!matcher.find()) continue;
            if (!hasOutputPointerLifetime(normalized, name, matcher.end())) continue;
            String local = name + "_after_output";
            int suffix = 2;
            while (identifierOccurrences(normalized, local) != 0)
                local = name + "_after_output_" + suffix++;

            String word = matcher.group("word");
            normalized = address.matcher(normalized).replaceAll(Matcher.quoteReplacement(
                "(" + word + " *)&" + local));
            normalized = normalizeFixedPointerParameterFields(normalized, name, local);
            normalized = replacePointerCasts(normalized, name, local);
            normalized = normalizeOutputCallPointerAliases(normalized, name, local);

            int body = Pattern.compile("(?m)^\\{[ \\t]*$").matcher(normalized).find() ?
                bodyBraceStart(normalized) : -1;
            if (body < 0) continue;
            int insert = normalized.indexOf('\n', body);
            if (insert < 0) continue;
            insert++;
            normalized = normalized.substring(0, insert) + "  void *" + local +
                " = nullptr; " + OUTPUT_CALL_SLOT_SPLIT_MARKER +
                System.lineSeparator() + normalized.substring(insert);
            replacements++;
        }
        return new NormalizedCode(normalized, replacements);
    }

    private boolean hasOutputPointerLifetime(String code, String parameter,
            int afterAddress) {
        String suffix = code.substring(Math.min(afterAddress, code.length()));
        if (hasFixedPointerOffsetUse(suffix, parameter)) return true;
        Matcher aliases = Pattern.compile("(?m)^\\s*(?<alias>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "\\s*=\\s*" + Pattern.quote(parameter) + "\\s*;\\s*$").matcher(suffix);
        while (aliases.find()) {
            if (hasFixedPointerOffsetUse(suffix.substring(aliases.end()),
                    aliases.group("alias"))) return true;
        }
        return false;
    }

    /**
     * Ghidra may copy the overwritten parameter slot through an integer-typed
     * HighVariable before using that copy as a pointer.  The output-call proof
     * already split the physical slot; carry that split through an exact alias
     * only when the alias has no earlier value use and its remaining uses are
     * fixed-offset pointer dereferences.  This is lifetime presentation, not a
     * semantic pointee inference, so the alias deliberately stays {@code void *}.
     */
    private String normalizeOutputCallPointerAliases(String code, String parameter,
            String local) {
        Pattern declaration = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)(?<type>int|uint|undefined4)[ \\t]+" +
            "(?<alias>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*;[ \\t]*$");
        Matcher declarations = declaration.matcher(code);
        while (declarations.find()) {
            String alias = declarations.group("alias");
            Pattern assignment = Pattern.compile(
                "(?m)^(?<indent>[ \\t]*)" + Pattern.quote(alias) +
                "[ \\t]*=[ \\t]*" + Pattern.quote(parameter) +
                "[ \\t]*;[ \\t]*$");
            Matcher assignments = assignment.matcher(code);
            if (!assignments.find(declarations.end())) continue;
            int outputBoundary = code.lastIndexOf("&" + local, assignments.start());
            if (outputBoundary < declarations.end()) continue;
            String beforeAssignment = code.substring(declarations.end(), assignments.start());
            if (identifierOccurrences(beforeAssignment, alias) != 0) continue;

            int nextDefinition = nextSimpleAssignment(code, alias, assignments.end());
            String afterAssignment = code.substring(assignments.end(),
                nextDefinition < 0 ? code.length() : nextDefinition);
            if (!hasFixedPointerOffsetUse(afterAssignment, alias)) continue;

            String rewrittenDeclaration = declarations.group("indent") + "void *" + alias + ";";
            code = code.substring(0, declarations.start()) + rewrittenDeclaration +
                code.substring(declarations.end());
            int assignmentShift = rewrittenDeclaration.length() -
                (declarations.end() - declarations.start());
            int assignmentStart = assignments.start() + assignmentShift;
            Matcher rewrittenAssignment = assignment.matcher(code);
            if (!rewrittenAssignment.find(Math.max(0, assignmentStart - 2))) continue;
            String replacement = rewrittenAssignment.group("indent") + alias + " = " + local + ";";
            code = code.substring(0, rewrittenAssignment.start()) + replacement +
                code.substring(rewrittenAssignment.end());
            code = normalizeFixedPointerParameterFields(code, alias, alias);
            declarations = declaration.matcher(code);
        }
        return code;
    }

    private int nextSimpleAssignment(String code, String name, int start) {
        Matcher matcher = Pattern.compile("(?m)^\\s*" + Pattern.quote(name) +
            "\\s*=").matcher(code);
        return matcher.find(start) ? matcher.start() : -1;
    }

    private boolean hasFixedPointerOffsetUse(String code, String name) {
        Pattern raw = Pattern.compile(
            "\\*\\s*\\(\\s*[A-Za-z_$][A-Za-z0-9_$:<> ]*\\s*\\*+\\s*\\)\\s*" +
            "\\(\\s*(?:\\(\\s*(?:int|uint|undefined4)\\s*\\)\\s*)?" +
            Pattern.quote(name) + "\\s*\\+\\s*(?:0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
        if (raw.matcher(code).find()) return true;
        return Pattern.compile("STField<[^>]+>\\(\\s*" + Pattern.quote(name) +
            "\\s*,").matcher(code).find();
    }

    private int bodyBraceStart(String code) {
        Matcher matcher = Pattern.compile("(?m)^\\{[ \\t]*$").matcher(code);
        return matcher.find() ? matcher.start() : -1;
    }

    private String normalizeFixedPointerParameterFields(String code, String parameter,
            String local) {
        Pattern access = Pattern.compile(
            "\\*\\s*\\(\\s*(?<type>[A-Za-z_$][A-Za-z0-9_$:]*(?:\\s*\\*+)?)" +
            "\\s*\\*\\s*\\)\\s*\\(\\s*(?:\\(\\s*(?:int|uint|undefined4)\\s*\\)\\s*)?" +
            Pattern.quote(parameter) + "\\s*\\+\\s*" +
            "(?<offset>0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
        Matcher matcher = access.matcher(code);
        StringBuffer output = new StringBuffer();
        while (matcher.find()) matcher.appendReplacement(output, Matcher.quoteReplacement(
            "STField<" + matcher.group("type").trim() + ">(" + local + "," +
            matcher.group("offset") + ")"));
        matcher.appendTail(output);
        String rewritten = output.toString();
        return rewritten.replaceAll(
            "(STField<[^>]+>\\(\\s*)" + Pattern.quote(parameter) + "(\\s*,)",
            "$1" + Matcher.quoteReplacement(local) + "$2");
    }

    private String replacePointerCasts(String code, String parameter, String local) {
        Pattern cast = Pattern.compile(
            "(?<cast>\\(\\s*[A-Za-z_$][A-Za-z0-9_$:<> ]*\\s*\\*+\\s*\\))\\s*" +
            Pattern.quote(parameter) + "(?![A-Za-z0-9_$])");
        Matcher matcher = cast.matcher(code);
        StringBuffer output = new StringBuffer();
        while (matcher.find()) matcher.appendReplacement(output, Matcher.quoteReplacement(
            matcher.group("cast") + local));
        matcher.appendTail(output);
        return output.toString();
    }

    /**
     * Function bodies are cached after normalization.  Therefore a newer
     * presentation rule must be able to migrate an exporter-owned declaration
     * without requiring a fresh Ghidra decompile.  Only our exact marker and a
     * local mechanically derived from the same parameter name are eligible.
     */
    private int repairExistingReusedLifetimeDeclarations(Function function,
            Set<String> candidates, List<String> lines) {
        Pattern declaration = Pattern.compile(
            "^(?<indent>[ \\t]*)auto[ \\t]+(?<local>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "[ \\t]*=[ \\t]*(?<rhs>[^;\\r\\n]+);[ \\t]*" +
            Pattern.quote(STACK_SLOT_SPLIT_MARKER) + "[ \\t]*$");
        int replacements = 0;
        for (int index = 0; index < lines.size(); index++) {
            Matcher matcher = declaration.matcher(lines.get(index));
            if (!matcher.matches()) continue;
            String parameterName = null;
            for (String candidate : candidates) {
                if (matcher.group("local").matches(Pattern.quote(candidate) +
                        "_after_write(?:_[0-9]+)?")) {
                    parameterName = candidate;
                    break;
                }
            }
            if (parameterName == null) continue;
            String rhs = matcher.group("rhs").trim();
            String type = reusedLifetimeDeclarationType(function, parameterName, rhs);
            if ("auto".equals(type)) continue;
            lines.set(index, matcher.group("indent") + type + " " +
                matcher.group("local") + " = " + rhs + "; " +
                STACK_SLOT_SPLIT_MARKER);
            replacements++;
        }
        return replacements;
    }

    /**
     * `auto x = nullptr` does not produce a pointer: C++ deduces
     * `std::nullptr_t`, after which every later pointer assignment is invalid.
     * A recycled stack slot still has the entry parameter's exact declared
     * storage view, so retain that pointer type for a null initializer.  This
     * is deliberately not a semantic pointee inference; non-null initializers
     * continue to use their independently rendered expression type.
     */
    private String reusedLifetimeDeclarationType(Function function, String name,
            String rhs) {
        // This pass runs before normalizeTypedNullPointers(), so the raw
        // decompiler spelling is normally `(T *)0x0`, not `nullptr` yet.
        if (!nullPointerExpression(rhs)) return "auto";
        for (Parameter parameter : function.getParameters()) {
            if (parameter.isAutoParameter() || !name.equals(parameter.getName())) continue;
            // getFormalDataType() may retain the pre-recovery transport word;
            // the Listing/decompiler contract is the currently applied type.
            DataType type = parameter.getDataType();
            DataType base = unwrapTypeDef(type);
            if (base instanceof Pointer) return type.getDisplayName();
            break;
        }
        // The proof must never turn an untyped null initializer into an
        // invented machine word merely to satisfy the host compiler.
        return "auto";
    }

    private int braceDelta(String line) {
        int result = 0;
        boolean string = false, character = false, escaped = false;
        for (int index = 0; index < line.length(); index++) {
            char value = line.charAt(index);
            if (string || character) {
                if (escaped) escaped = false;
                else if (value == '\\') escaped = true;
                else if (string && value == '"') string = false;
                else if (character && value == '\'') character = false;
                continue;
            }
            if (value == '"') string = true;
            else if (value == '\'') character = true;
            else if (value == '{') result++;
            else if (value == '}') result--;
            else if (value == '/' && index + 1 < line.length() &&
                    line.charAt(index + 1) == '/') break;
        }
        return result;
    }

    /**
     * Fold the exact byte-addressed packed-bit operations emitted by x86 code.
     * This is deliberately independent of any global name or recovered game
     * type: byte index is signed index / 8 and bit index is index & 7.  An XOR
     * used to reverse bit numbering remains outside the helper and therefore
     * remains visible in the exported source.
     */
    private NormalizedCode normalizePackedBitOperations(String code) {
        Matcher set = PACKED_BIT_SET.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (set.find()) {
            if (!set.group("base").equals(set.group("rhsBase")) ||
                    !set.group("index").equals(set.group("rhsIndex")) ||
                    !set.group("index").equals(set.group("bitIndex"))) {
                set.appendReplacement(output, Matcher.quoteReplacement(set.group()));
                continue;
            }
            String replacement = set.group("indent") + "STBitSet(" +
                set.group("base") + ", " + set.group("index") + ");";
            set.appendReplacement(output, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        set.appendTail(output);
        Matcher clear = PACKED_BIT_CLEAR.matcher(output.toString());
        StringBuffer cleared = new StringBuffer();
        while (clear.find()) {
            if (!clear.group("base").equals(clear.group("rhsBase")) ||
                    !clear.group("index").equals(clear.group("rhsIndex")) ||
                    !clear.group("index").equals(clear.group("bitIndex"))) {
                clear.appendReplacement(cleared,
                    Matcher.quoteReplacement(clear.group()));
                continue;
            }
            String replacement = clear.group("indent") + "STBitClear(" +
                clear.group("base") + ", " + clear.group("index") + ");";
            clear.appendReplacement(cleared, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        clear.appendTail(cleared);
        Matcher test = PACKED_BIT_TEST.matcher(cleared.toString());
        StringBuffer tested = new StringBuffer();
        while (test.find()) {
            String replacement = "STBitTest(" + test.group("base") + ", " +
                test.group("index") + ")";
            test.appendReplacement(tested, Matcher.quoteReplacement(replacement));
            replacements++;
        }
        test.appendTail(tested);
        return new NormalizedCode(tested.toString(), replacements);
    }

    /**
     * MSVC implements signed division by four with truncation toward zero as
     * (value + ((value >> 31) & 3)) >> 2.  Fold only an exactly repeated simple
     * operand; the helper first narrows to the original 32-bit machine word.
     */
    private NormalizedCode normalizeSignedQuartering(String code) {
        Matcher matcher = SIGNED_DIVIDE_BY_FOUR.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            matcher.appendReplacement(output, Matcher.quoteReplacement(
                "STSignedDiv4(" + matcher.group("value") + ")"));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Fold the exact 16.16 fixed-point rounding expression.  The runtime helper
     * preserves 32-bit addition wrap and arithmetic right-shift behavior; this
     * is presentation recovery, not a claim about the value's game semantics.
     */
    private NormalizedCode normalizeFixed16Rounding(String code) {
        Matcher matcher = FIXED_16_ROUND.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            matcher.appendReplacement(output, Matcher.quoteReplacement(
                "STRoundFixed16(" + matcher.group("value") + ")"));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * VC6 `_ftol` consumes only the x87 top value. A value below it remains live and is
     * commonly saved with FST (without pop) before the call. Ghidra can spell that proven
     * survivor as extraout_ST0 after field typing changes. Replace it only for the exact
     * FST -> __ftol -> FILD -> FMUL ST1 -> FSTP sequence on one receiver.
     */
    private NormalizedCode normalizeSavedX87AcrossFtol(Function function, String code) {
        if (!code.contains("extraout_ST0")) return new NormalizedCode(code, 0);
        X87SavedValue proof = savedX87Value(function);
        if (proof == null) return new NormalizedCode(code, 0);
        Structure owner = firstPointerStructure(function);
        if (owner == null) return new NormalizedCode(code, 0);
        DataTypeComponent saved = owner.getComponentAt(proof.savedOffset);
        DataTypeComponent destination = owner.getComponentAt(proof.destinationOffset);
        if (saved == null || destination == null ||
                saved.getOffset() != proof.savedOffset ||
                destination.getOffset() != proof.destinationOffset ||
                saved.getLength() != 8 || destination.getLength() != 8 ||
                saved.getFieldName() == null || destination.getFieldName() == null)
            return new NormalizedCode(code, 0);
        Pattern assignment = Pattern.compile("(?m)^\\s*([A-Za-z_$][A-Za-z0-9_$]*)->" +
            Pattern.quote(destination.getFieldName()) + "\\s*=.*extraout_ST0.*;$");
        Matcher use = assignment.matcher(code);
        if (!use.find() || use.find()) return new NormalizedCode(code, 0);
        use.reset();
        if (!use.find()) return new NormalizedCode(code, 0);
        String receiver = use.group(1);
        if (receiver.isBlank()) return new NormalizedCode(code, 0);
        String replacement = receiver + "->" + saved.getFieldName();
        int occurrences = 0;
        Matcher raw = Pattern.compile("\\bextraout_ST0\\b").matcher(code);
        while (raw.find()) occurrences++;
        Pattern declaration = Pattern.compile(
            "(?m)^\\s*float10\\s+extraout_ST0\\s*;\\s*(?:\\R|$)");
        Matcher declared = declaration.matcher(code);
        if (occurrences != 2 || !declared.find() || declared.find())
            return new NormalizedCode(code, 0);
        String assignmentLine = code.substring(use.start(), use.end());
        String rewrittenLine = assignmentLine.replaceFirst("\\bextraout_ST0\\b",
            Matcher.quoteReplacement(replacement));
        String rewritten = code.substring(0, use.start()) + rewrittenLine +
            code.substring(use.end());
        Matcher remainingDeclaration = declaration.matcher(rewritten);
        if (!remainingDeclaration.find()) return new NormalizedCode(code, 0);
        rewritten = rewritten.substring(0, remainingDeclaration.start()) +
            rewritten.substring(remainingDeclaration.end());
        if (Pattern.compile("\\bextraout_ST0\\b").matcher(rewritten).find())
            return new NormalizedCode(code, 0);
        return new NormalizedCode(rewritten, 2);
    }

    private X87SavedValue savedX87Value(Function function) {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = listing.getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());
        for (int call = 0; call < instructions.size(); call++) {
            Instruction instruction = instructions.get(call);
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function target = directCalledFunction(instruction);
            if (target == null || !target.getName(true).toLowerCase(Locale.ROOT)
                    .contains("__ftol")) continue;
            X87Memory saved = null;
            for (int index = call - 1; index >= 0 && index >= call - 80; index--) {
                String mnemonic = instructions.get(index).getMnemonicString()
                    .toUpperCase(Locale.ROOT);
                if (mnemonic.equals("FST")) {
                    saved = x87Memory(instructions.get(index));
                    if (saved != null) break;
                }
            }
            if (saved == null) continue;
            boolean fild = false, multiplyLower = false;
            X87Memory destination = null;
            for (int index = call + 1; index < instructions.size() && index <= call + 12;
                    index++) {
                Instruction next = instructions.get(index);
                String mnemonic = next.getMnemonicString().toUpperCase(Locale.ROOT);
                if (mnemonic.equals("FILD")) fild = true;
                else if (fild && mnemonic.equals("FMUL") &&
                        next.toString().toUpperCase(Locale.ROOT).contains("ST1"))
                    multiplyLower = true;
                else if (multiplyLower && mnemonic.equals("FSTP")) {
                    destination = x87Memory(next);
                    break;
                }
                else if (mnemonic.equals("CALL") || next.getFlowType().isJump()) break;
            }
            if (destination != null && saved.base.equals(destination.base))
                return new X87SavedValue((int)saved.offset, (int)destination.offset);
        }
        return null;
    }

    private X87Memory x87Memory(Instruction instruction) {
        if (!instruction.toString().toLowerCase(Locale.ROOT)
                .contains("double ptr")) return null;
        Matcher matcher = Pattern.compile(
            "(?i)\\[([A-Z][A-Z0-9]{1,3})(?:\\s*\\+\\s*(0x[0-9a-f]+|[0-9]+))?\\]")
            .matcher(instruction.toString());
        if (!matcher.find()) return null;
        Long offset = fingerprintImmediate(matcher.group(2) == null ? "0" : matcher.group(2));
        return offset == null || offset > Integer.MAX_VALUE ? null :
            new X87Memory(matcher.group(1).toUpperCase(Locale.ROOT), offset);
    }

    private Structure firstPointerStructure(Function function) {
        for (Parameter parameter : function.getParameters())
            if (parameter.getDataType() instanceof Pointer pointer &&
                    pointer.getDataType() instanceof Structure structure)
                return structure;
        return null;
    }

    private Function directCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function != null) return function;
        }
        return null;
    }

    private boolean hasGuardedPartialAlZeroReturn(Function function) {
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction compare = instructions.next();
            if (!"CMP".equalsIgnoreCase(compare.getMnemonicString()) ||
                    compare.getNumOperands() < 2 ||
                    !"EAX".equalsIgnoreCase(
                        compare.getDefaultOperandRepresentation(0).trim()))
                continue;
            Long immediate = fingerprintImmediate(
                compare.getDefaultOperandRepresentation(1));
            if (immediate == null || immediate != 0xffL) continue;
            Instruction branch = listing.getInstructionAfter(compare.getAddress());
            if (branch == null || !branch.getFlowType().isConditional()) continue;
            Instruction clear = listing.getInstructionAfter(branch.getAddress());
            if (clear == null || !"XOR".equalsIgnoreCase(clear.getMnemonicString()) ||
                    clear.getNumOperands() < 2 ||
                    !"AL".equalsIgnoreCase(
                        clear.getDefaultOperandRepresentation(0).trim()) ||
                    !"AL".equalsIgnoreCase(
                        clear.getDefaultOperandRepresentation(1).trim()))
                continue;
            Instruction next = listing.getInstructionAfter(clear.getAddress());
            for (int count = 0; count < 4 && next != null &&
                    function.getBody().contains(next.getAddress()); count++) {
                String mnemonic = next.getMnemonicString().toUpperCase(Locale.ROOT);
                if (mnemonic.startsWith("RET")) return true;
                if ("CALL".equals(mnemonic) || next.getFlowType().isJump() ||
                        accumulatorResultWidth(next) > 0) break;
                next = listing.getInstructionAfter(next.getAddress());
            }
        }
        return false;
    }

    private int accumulatorResultWidth(Instruction instruction) {
        int width = 0;
        for (Object object : instruction.getResultObjects()) {
            if (!(object instanceof Register register)) continue;
            String name = register.getName().toUpperCase(Locale.ROOT);
            if (Set.of("EAX", "RAX").contains(name)) width = Math.max(width, 4);
            else if ("AX".equals(name)) width = Math.max(width, 2);
            else if (Set.of("AL", "AH").contains(name)) width = Math.max(width, 1);
        }
        return width;
    }

    /**
     * Ghidra occasionally wraps a completed call before its terminating
     * semicolon.  Later identifier/type substitutions preserve that legal but
     * very misleading spelling as a standalone empty-looking statement.
     * Joining the semicolon to the preceding non-empty line is semantics
     * preserving, including for an intentionally empty while/for body.
     */
    private NormalizedCode normalizeDetachedSemicolons(String code) {
        String[] lines = code.split("\\R", -1);
        List<String> output = new ArrayList<>();
        int replacements = 0;
        for (String line : lines) {
            if (line.trim().equals(";")) {
                int previous = output.size() - 1;
                while (previous >= 0 && output.get(previous).trim().isEmpty())
                    previous--;
                if (previous >= 0 && output.get(previous).stripTrailing().endsWith(")")) {
                    output.set(previous, output.get(previous).stripTrailing() + ";");
                    replacements++;
                    continue;
                }
            }
            output.add(line);
        }
        return new NormalizedCode(
            String.join(System.lineSeparator(), output), replacements);
    }

    /**
     * A recovered descriptor specialization gives Ghidra the correct type for
     * array->data, but the decompiler can still materialize the result of the
     * runtime-stride expression in a primitive SSA temporary:
     *
     *     undefined4 *puVar;
     *     puVar = (undefined4 *)(array->elementSize * i + (int)array->data);
     *
     * Listing cannot type one SSA lifetime independently when the same stack or
     * register variable is reused later.  Keep the original variable for those
     * other lifetimes and introduce an export-only typed alias for the bounded
     * interval ending at its next non-DArray definition.  Only exact descriptor
     * and element structures installed by STDArrayElementApplier participate.
     */
    private NormalizedCode normalizeDArrayElementAliases(String code) {
        if (code == null || code.isEmpty() || darrayDescriptors.isEmpty() ||
                !code.contains("->elementSize") || !code.contains("->data"))
            return new NormalizedCode(code, 0);

        Map<String, PointerDeclaration> pointers = pointerDeclarations(code);
        Map<String, DArrayDescriptor> descriptorVariables =
            darrayDescriptorVariables(code);
        if (pointers.isEmpty() || descriptorVariables.isEmpty())
            return new NormalizedCode(code, 0);

        Set<String> usedNames = new HashSet<>();
        Matcher words = SIMPLE_IDENTIFIER.matcher(code);
        while (words.find()) usedNames.add(words.group());

        String normalized = code;
        int replacements = 0;
        for (Map.Entry<String, PointerDeclaration> pointer : pointers.entrySet()) {
            DArrayAliasNormalization result = normalizeDArrayAlias(normalized,
                pointer.getKey(), pointer.getValue(), descriptorVariables, usedNames);
            normalized = result.code;
            replacements += result.replacements;
        }
        return new NormalizedCode(normalized, replacements);
    }

    private Map<String, PointerDeclaration> pointerDeclarations(String code) {
        Map<String, PointerDeclaration> result = new LinkedHashMap<>();
        Matcher matcher = SIMPLE_POINTER_DECLARATION.matcher(code);
        while (matcher.find()) {
            String name = matcher.group("name");
            String type = matcher.group("type").trim();
            int stars = matcher.group("stars").length();
            int width = pointerArithmeticWidth(type, stars);
            if (width > 0 && !result.containsKey(name))
                result.put(name, new PointerDeclaration(type,
                    matcher.group("indent"), stars, width));
        }
        int body = code.indexOf('{');
        String signature = body < 0 ? code : code.substring(0, body);
        matcher = SIMPLE_POINTER_PARAMETER.matcher(signature);
        while (matcher.find()) {
            String name = matcher.group("name");
            String type = matcher.group("type").trim();
            int stars = matcher.group("stars").length();
            int width = pointerArithmeticWidth(type, stars);
            if (width > 0 && !result.containsKey(name))
                result.put(name, new PointerDeclaration(type, "", stars, width));
        }
        return result;
    }

    private Map<String, DArrayDescriptor> darrayDescriptorVariables(String code) {
        Map<String, DArrayDescriptor> result = new LinkedHashMap<>();
        Matcher matcher = DARRAY_DESCRIPTOR_DECLARATION.matcher(code);
        while (matcher.find()) {
            DArrayDescriptor descriptor = darrayDescriptors.get(matcher.group("type"));
            if (descriptor != null) result.put(matcher.group("name"), descriptor);
        }
        return result;
    }

    private DArrayAliasNormalization normalizeDArrayAlias(String code, String alias,
            PointerDeclaration declaration,
            Map<String, DArrayDescriptor> descriptorVariables, Set<String> usedNames) {
        List<AliasAssignment> assignments = aliasAssignments(code, alias);
        if (assignments.isEmpty()) return new DArrayAliasNormalization(code, 0);

        List<DArrayAliasSegment> segments = new ArrayList<>();
        int ordinal = 1;
        for (int index = 0; index < assignments.size();) {
            AliasAssignment assignment = assignments.get(index);
            DArrayAccess access = "=".equals(assignment.operator) ?
                darrayAccess(assignment.expression, descriptorVariables) : null;
            if (access == null) { index++; continue; }
            int end = code.length();
            int next = index + 1;
            while (next < assignments.size()) {
                AliasAssignment candidate = assignments.get(next);
                DArrayAccess nextAccess = "=".equals(candidate.operator) ?
                    darrayAccess(candidate.expression, descriptorVariables) : null;
                if (nextAccess != null &&
                        nextAccess.descriptor.elementName.equals(
                            access.descriptor.elementName)) {
                    next++;
                    continue;
                }
                if ("=".equals(candidate.operator) &&
                        nullPointerExpression(candidate.expression)) {
                    next++;
                    continue;
                }
                end = candidate.start;
                break;
            }
            String interval = code.substring(assignment.start, end);
            int controlBoundary = firstRawControlBoundary(interval);
            int lastUse = lastIdentifierEnd(interval, alias);
            if (controlBoundary >= 0 && controlBoundary < lastUse) {
                index = Math.max(index + 1, next);
                continue;
            }
            if (controlBoundary >= 0) {
                end = assignment.start + controlBoundary;
                interval = code.substring(assignment.start, end);
            }
            String baseName = darrayElementAliasName(access.descriptor);
            String typedName = uniqueIdentifier(baseName, ordinal++, usedNames);
            segments.add(new DArrayAliasSegment(assignment.start, end, typedName,
                access.descriptor));
            index = Math.max(index + 1, next);
        }
        if (segments.isEmpty()) return new DArrayAliasNormalization(code, 0);

        String normalized = code;
        int replacements = 0;
        List<TypedAlias> typedAliases = new ArrayList<>();
        for (int index = segments.size() - 1; index >= 0; index--) {
            DArrayAliasSegment segment = segments.get(index);
            String interval = normalized.substring(segment.start, segment.end);
            interval = replaceIdentifier(interval, alias, segment.typedName);
            DArrayIntervalNormalization rewritten = normalizeDArrayInterval(interval,
                segment.typedName, declaration, segment.descriptor, descriptorVariables);
            if (rewritten.replacements == 0) continue;
            normalized = normalized.substring(0, segment.start) + rewritten.code +
                normalized.substring(segment.end);
            replacements += rewritten.replacements;
            typedAliases.add(new TypedAlias(segment.typedName,
                segment.descriptor.elementName));
        }
        if (typedAliases.isEmpty()) return new DArrayAliasNormalization(code, 0);

        typedAliases.sort(Comparator.comparing(aliasValue -> aliasValue.name));
        String declarations = typedAliases.stream()
            .map(value -> declaration.indent + value.elementName + " *" + value.name + ";")
            .reduce((left, right) -> left + System.lineSeparator() + right).orElse("");
        Pattern declarationLine = Pattern.compile("(?m)^" +
            Pattern.quote(declaration.indent) +
            Pattern.quote(declaration.type) + "\\s*\\*+\\s*" +
            Pattern.quote(alias) + "\\s*;$");
        Matcher declarationMatcher = declarationLine.matcher(normalized);
        if (!declarationMatcher.find())
            return new DArrayAliasNormalization(code, 0);
        int remainingUses = identifierOccurrences(normalized, alias);
        String replacement = remainingUses == 1 ? declarations :
            declarationMatcher.group() + System.lineSeparator() + declarations;
        normalized = declarationMatcher.replaceFirst(Matcher.quoteReplacement(replacement));
        return new DArrayAliasNormalization(normalized, replacements + 1);
    }

    private String darrayElementAliasName(DArrayDescriptor descriptor) {
        Matcher ownerField = Pattern.compile(
            "_field_([0-9A-Fa-f]+)Element$").matcher(descriptor.elementName);
        if (ownerField.find())
            return "element_" + ownerField.group(1).toLowerCase(Locale.ROOT);
        return "element";
    }

    private int firstRawControlBoundary(String text) {
        Matcher matcher = Pattern.compile(
            "(?m)^\\s*(?:goto\\s+LAB_[0-9A-Fa-f]+\\s*;|LAB_[0-9A-Fa-f]+:)").matcher(text);
        return matcher.find() ? matcher.start() : -1;
    }

    private int lastIdentifierEnd(String text, String name) {
        Matcher matcher = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])").matcher(text);
        int result = -1;
        while (matcher.find()) result = matcher.end();
        return result;
    }

    private List<AliasAssignment> aliasAssignments(String code, String alias) {
        Pattern pattern = Pattern.compile("(?ms)^[ \\t]*(?<alias>" +
            Pattern.quote(alias) + ")\\s*" +
            "(?<operator>(?:<<|>>|[+\\-*/&|^])?=)(?!=)\\s*" +
            "(?<expression>[^;]{0,700});");
        Matcher matcher = pattern.matcher(code);
        List<AliasAssignment> result = new ArrayList<>();
        while (matcher.find())
            result.add(new AliasAssignment(matcher.start("alias"), matcher.end(),
                matcher.group("operator"), matcher.group("expression").trim()));
        return result;
    }

    private DArrayIntervalNormalization normalizeDArrayInterval(String interval,
            String alias, PointerDeclaration declaration, DArrayDescriptor descriptor,
            Map<String, DArrayDescriptor> descriptorVariables) {
        Pattern assignments = Pattern.compile("(?ms)^(?<indent>[ \\t]*)" +
            Pattern.quote(alias) + "\\s*=(?!=)\\s*(?<expression>[^;]{0,700});");
        Matcher matcher = assignments.matcher(interval);
        StringBuffer assignmentsOut = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            String expression = matcher.group("expression").trim();
            DArrayAccess access = darrayAccess(expression, descriptorVariables);
            String replacement = matcher.group();
            if (access != null &&
                    access.descriptor.elementName.equals(descriptor.elementName)) {
                replacement = matcher.group("indent") + alias + " = DArrayAt<" +
                    descriptor.elementName + ">(" +
                    access.base + ", " + access.index + ");";
                replacements++;
            }
            else if (nullPointerExpression(expression)) {
                replacement = matcher.group("indent") + alias + " = (" +
                    descriptor.elementName + " *)0x0;";
                replacements++;
            }
            matcher.appendReplacement(assignmentsOut, Matcher.quoteReplacement(replacement));
        }
        matcher.appendTail(assignmentsOut);
        FieldRewrite fields = rewriteDArrayFields(assignmentsOut.toString(), alias,
            declaration, descriptor);
        return new DArrayIntervalNormalization(fields.code,
            replacements + fields.replacements);
    }

    private FieldRewrite rewriteDArrayFields(String code, String alias,
            PointerDeclaration declaration, DArrayDescriptor descriptor) {
        RewriteAccumulator result = new RewriteAccumulator(code);
        int pointerWidth = declaration.width;

        Pattern bare = Pattern.compile("(?<![A-Za-z0-9_$*])\\*\\s*" +
            Pattern.quote(alias) +
            "(?![A-Za-z0-9_$]|->|\\s*\\[)");
        result.replace(bare, matcher -> {
            DArrayElementField field = descriptor.field(0, pointerWidth);
            return field == null ? null : alias + "->" + field.name;
        });

        Pattern raw = Pattern.compile("\\*\\s*\\(\\s*" +
            "(?<type>[^()\\r\\n]{1,80}?)\\s*\\*\\s*\\)\\s*\\(\\s*" +
            "(?<bytecast>\\(\\s*int\\s*\\)\\s*)?" + Pattern.quote(alias) +
            "\\s*\\+\\s*(?<offset>0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\)");
        result.replace(raw, matcher -> {
            int width = renderedTypeWidth(matcher.group("type"));
            long offset = unsignedNumber(matcher.group("offset"));
            if (matcher.group("bytecast") == null) offset *= pointerWidth;
            DArrayElementField field = descriptor.field(offset, width);
            return field == null ? null : alias + "->" + field.name;
        });

        Pattern index = Pattern.compile("(?<![A-Za-z0-9_$:])" +
            Pattern.quote(alias) + "\\s*\\[\\s*" +
            "(?<index>0[xX][0-9A-Fa-f]+|[0-9]+)\\s*\\]");
        result.replace(index, matcher -> {
            long offset = unsignedNumber(matcher.group("index")) * pointerWidth;
            DArrayElementField field = descriptor.field(offset, pointerWidth);
            return field == null ? null : alias + "->" + field.name;
        });

        Pattern nullRight = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(alias) + "\\s*(?<operator>==|!=)\\s*\\(\\s*" +
            Pattern.quote(declaration.type) + "\\s*\\*+\\s*\\)\\s*0x0");
        result.replace(nullRight, matcher -> alias + " " + matcher.group("operator") +
            " (" + descriptor.elementName + " *)0x0");
        Pattern nullLeft = Pattern.compile("\\(\\s*" +
            Pattern.quote(declaration.type) + "\\s*\\*+\\s*\\)\\s*0x0\\s*" +
            "(?<operator>==|!=)\\s*" + Pattern.quote(alias) +
            "(?![A-Za-z0-9_$])");
        result.replace(nullLeft, matcher -> "(" + descriptor.elementName + " *)0x0 " +
            matcher.group("operator") + " " + alias);

        // Do not rewrite arbitrary casts from the primitive lifetime: only the
        // exact null comparisons tied to this alias are type-neutral.
        return new FieldRewrite(result.code, result.replacements);
    }

    private DArrayAccess darrayAccess(String expression,
            Map<String, DArrayDescriptor> descriptorVariables) {
        for (Map.Entry<String, DArrayDescriptor> entry : descriptorVariables.entrySet()) {
            String base = entry.getKey();
            if (!expression.contains(base + "->elementSize") ||
                    !expression.contains(base + "->data")) continue;
            String value = stripExpressionWrappers(expression);
            List<String> terms = splitTopLevel(value, '+');
            if (terms.size() != 2) continue;
            String data = null, index = null;
            for (String term : terms) {
                if (darrayDataTerm(term, base, entry.getValue())) data = term;
                String candidate = darrayStrideIndex(term, base);
                if (candidate != null) index = candidate;
            }
            if (data != null && index != null && !index.isBlank())
                return new DArrayAccess(base, index, entry.getValue());
        }
        return null;
    }

    private boolean darrayDataTerm(String expression, String base,
            DArrayDescriptor descriptor) {
        String value = stripExpressionWrappers(expression);
        while (true) {
            String stripped = stripLeadingCast(value);
            if (stripped.equals(value)) break;
            value = stripExpressionWrappers(stripped);
        }
        value = value.replaceAll("\\s+", "");
        if (value.equals(base + "->data") ||
            value.equals("&" + base + "->data->field_0000") ||
            value.equals("&(" + base + "->data->field_0000).field_0x0"))
            return true;
        // Once the element record itself is typed, Ghidra often canonicalizes
        // the same byte address through its first named component:
        //
        //   (T *)((int)&array->data->firstMember + array->elementSize * index)
        //
        // This is still the address of the complete element iff firstMember is
        // the exact offset-zero component.  Accept its generated/current name
        // instead of regressing to the primitive pointer chosen for that member.
        DArrayElementField first = descriptor.fields.get(0L);
        return first != null &&
            value.equals("&" + base + "->data->" + first.name);
    }

    private String darrayStrideIndex(String expression, String base) {
        String value = stripOuterParentheses(expression).trim();
        String token = base + "->elementSize";
        if (value.startsWith(token)) {
            String rest = value.substring(token.length()).stripLeading();
            if (!rest.startsWith("*")) return null;
            return stripOuterParentheses(rest.substring(1)).trim();
        }
        if (value.endsWith(token)) {
            String rest = value.substring(0, value.length() - token.length()).stripTrailing();
            if (!rest.endsWith("*")) return null;
            return stripOuterParentheses(rest.substring(0, rest.length() - 1)).trim();
        }
        return null;
    }

    private String stripOuterParentheses(String expression) {
        String result = expression == null ? "" : expression.trim();
        while (result.startsWith("(")) {
            int close = matchingParen(result, 0);
            if (close != result.length() - 1) break;
            result = result.substring(1, close).trim();
        }
        return result;
    }

    private String stripExpressionWrappers(String expression) {
        String result = expression == null ? "" : expression.trim();
        boolean changed;
        do {
            changed = false;
            String castless = stripLeadingCast(result);
            if (!castless.equals(result)) {
                result = castless.trim();
                changed = true;
            }
            if (result.startsWith("(")) {
                int close = matchingParen(result, 0);
                if (close == result.length() - 1) {
                    result = result.substring(1, close).trim();
                    changed = true;
                }
            }
        } while (changed && !result.isEmpty());
        return result;
    }

    private String stripLeadingCast(String expression) {
        String value = expression.trim();
        if (!value.startsWith("(")) return value;
        int close = matchingParen(value, 0);
        if (close < 1 || close == value.length() - 1) return value;
        String inside = value.substring(1, close).trim();
        if (!inside.matches("(?:const\\s+)?[A-Za-z_$][A-Za-z0-9_$: ]*(?:\\s*\\*+)?"))
            return value;
        return value.substring(close + 1).trim();
    }

    private List<String> splitTopLevel(String expression, char separator) {
        List<String> result = new ArrayList<>();
        int depth = 0, start = 0;
        boolean string = false, character = false, escaped = false;
        for (int index = 0; index < expression.length(); index++) {
            char ch = expression.charAt(index);
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(' || ch == '[' || ch == '{') depth++;
            else if (ch == ')' || ch == ']' || ch == '}') depth--;
            else if (ch == separator && depth == 0) {
                result.add(expression.substring(start, index).trim());
                start = index + 1;
            }
        }
        result.add(expression.substring(start).trim());
        return result;
    }

    private boolean nullPointerExpression(String expression) {
        String value = stripExpressionWrappers(expression);
        while (true) {
            String stripped = stripLeadingCast(value);
            if (stripped.equals(value)) break;
            value = stripExpressionWrappers(stripped);
        }
        return Set.of("0", "0x0", "NULL", "nullptr").contains(value.trim());
    }

    private String replaceIdentifier(String text, String oldName, String newName) {
        return Pattern.compile("(?<![A-Za-z0-9_$])" + Pattern.quote(oldName) +
            "(?![A-Za-z0-9_$])").matcher(text)
            .replaceAll(Matcher.quoteReplacement(newName));
    }

    private int identifierOccurrences(String text, String name) {
        Matcher matcher = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(name) + "(?![A-Za-z0-9_$])").matcher(text);
        int result = 0;
        while (matcher.find()) result++;
        return result;
    }

    private String uniqueIdentifier(String base, int ordinal, Set<String> used) {
        String candidate = ordinal <= 1 ? base : base + "_" + ordinal;
        int suffix = Math.max(2, ordinal);
        while (used.contains(candidate)) candidate = base + "_" + suffix++;
        used.add(candidate);
        return candidate;
    }

    private int pointerArithmeticWidth(String type, int stars) {
        if (stars != 1)
            return currentProgram == null ? -1 :
                currentProgram.getDefaultPointerSize();
        return renderedTypeWidth(type);
    }

    private int renderedTypeWidth(String rendered) {
        String value = rendered == null ? "" :
            rendered.replaceAll("\\b(?:const|volatile|signed|unsigned)\\b", "")
                .replaceAll("\\s+", " ").trim();
        if (value.contains("*"))
            return currentProgram == null ? 4 :
                currentProgram.getDefaultPointerSize();
        if (Set.of("char", "byte", "undefined", "undefined1", "bool").contains(value))
            return 1;
        if (Set.of("short", "ushort", "word", "undefined2").contains(value))
            return 2;
        if (Set.of("int", "uint", "long", "ulong", "dword", "float",
                "undefined4").contains(value)) return 4;
        if (Set.of("long long", "ulonglong", "qword", "double",
                "undefined8").contains(value)) return 8;
        if (currentProgram == null) return -1;
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(value, matches);
        int result = -1;
        for (DataType match : matches) {
            int length = match.getLength();
            if (length < 1) continue;
            if (result >= 0 && result != length) return -1;
            result = length;
        }
        return result;
    }

    private long unsignedNumber(String value) {
        try {
            String text = value.trim();
            return text.startsWith("0x") || text.startsWith("0X") ?
                Long.parseUnsignedLong(text.substring(2), 16) :
                Long.parseLong(text);
        }
        catch (Exception ignored) { return Long.MIN_VALUE; }
    }

    private Map<String, DArrayDescriptor> recoveredDArrayDescriptors() {
        Map<String, DArrayDescriptor> result = new LinkedHashMap<>();
        Set<String> ambiguous = new HashSet<>();
        Iterator<DataType> iterator =
            currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            DataType type = iterator.next();
            if (!(type instanceof Structure descriptor) ||
                    !nullToEmpty(descriptor.getDescription())
                        .startsWith(DARRAY_DESCRIPTOR_MARKER))
                continue;
            DataTypeComponent data = descriptor.getComponentAt(0x1c);
            if (data == null || data.getOffset() != 0x1c ||
                    !"data".equals(data.getFieldName())) continue;
            DataType pointed = data.getDataType();
            while (pointed instanceof TypeDef typedef)
                pointed = typedef.getBaseDataType();
            if (!(pointed instanceof Pointer pointer)) continue;
            pointed = pointer.getDataType();
            while (pointed instanceof TypeDef typedef)
                pointed = typedef.getBaseDataType();
            if (!(pointed instanceof Structure element)) continue;
            Map<Long, DArrayElementField> fields = new TreeMap<>();
            for (DataTypeComponent component : element.getDefinedComponents()) {
                String name = nullToEmpty(component.getFieldName());
                if (name.isBlank()) continue;
                fields.put((long)component.getOffset(), new DArrayElementField(
                    component.getOffset(), component.getLength(), name));
            }
            DArrayDescriptor value = new DArrayDescriptor(descriptor.getName(),
                element.getName(), fields);
            DArrayDescriptor old = result.putIfAbsent(descriptor.getName(), value);
            if (old != null && !old.elementName.equals(value.elementName))
                ambiguous.add(descriptor.getName());
        }
        for (String name : ambiguous) result.remove(name);
        return result;
    }

    private List<GlobalRecordDescriptor> recoveredGlobalRecordDescriptors() {
        List<GlobalRecordDescriptor> result = new ArrayList<>();
        DataIterator iterator = listing.getDefinedData(true);
        while (iterator.hasNext()) {
            Data data = iterator.next();
            DataType type = data.getDataType();
            while (type instanceof TypeDef typedef) type = typedef.getBaseDataType();
            if (!(type instanceof Array array)) continue;
            DataType element = array.getDataType();
            while (element instanceof TypeDef typedef) element = typedef.getBaseDataType();
            if (!(element instanceof Structure structure) || structure.getLength() < 0x40 ||
                    !nullToEmpty(structure.getDescription()).contains(
                        "[STGlobalRecordApplier] Generated packed global record")) continue;
            Symbol symbol = symbols.getPrimarySymbol(data.getAddress());
            String name = symbol == null ? "" : symbol.getName();
            if (!name.matches("[A-Za-z_$][A-Za-z0-9_$]*")) continue;
            long base = data.getAddress().getOffset();
            result.add(new GlobalRecordDescriptor(name, base,
                structure.getLength(), array.getNumElements()));
        }
        result.sort(Comparator.comparingLong(GlobalRecordDescriptor::base));
        return List.copyOf(result);
    }

    /** Index global pointer symbols by their concrete pointee structure for
     * source-level byte-offset member recovery.  Ambiguous rendered names are
     * discarded rather than selected by data or namespace iteration order. */
    private Map<String, Structure> recoveredGlobalPointerStructures() {
        Map<String, Structure> result = new LinkedHashMap<>();
        Set<String> ambiguous = new HashSet<>();
        DataIterator iterator = listing.getDefinedData(true);
        while (iterator.hasNext()) {
            Data data = iterator.next();
            DataType type = unwrapTypeDef(data.getDataType());
            if (!(type instanceof Pointer pointer)) continue;
            DataType pointed = unwrapTypeDef(pointer.getDataType());
            if (!(pointed instanceof Structure structure)) continue;
            Symbol symbol = symbols.getPrimarySymbol(data.getAddress());
            if (symbol == null || !symbol.getName().matches(
                    "[A-Za-z_$][A-Za-z0-9_$]*")) continue;
            String name = symbol.getName();
            Structure old = result.putIfAbsent(name, structure);
            if (old != null && !old.getPathName().equals(structure.getPathName()))
                ambiguous.add(name);
        }
        for (String name : ambiguous) result.remove(name);
        return Map.copyOf(result);
    }

    private boolean containsRecoveredGlobalRecordStride(String line) {
        if (line == null || globalRecordStrides.isEmpty()) return false;
        Matcher matcher = INTEGER_LITERAL.matcher(line);
        while (matcher.find()) {
            try {
                String hex = matcher.group(1);
                long value = hex == null ?
                    Long.parseLong(matcher.group(2)) :
                    Long.parseUnsignedLong(hex, 16);
                if (globalRecordStrides.contains(value)) return true;
            }
            catch (NumberFormatException ignored) { }
        }
        return false;
    }

    /**
     * A typed Ghidra vtable slot is still rendered as a C function-pointer call:
     *
     *     (*object->vtable->method)(object, arg)
     *
     * For the future C++ source projection, the exact duplicated receiver is
     * safely equivalent to object->method(arg).  Fold only a simple receiver
     * identifier whose first top-level argument is the same identifier.  Calls
     * with a missing, cast, adjusted, or different receiver remain untouched
     * because they may represent bad prototypes or secondary-base dispatch.
     */
    private NormalizedCode normalizeExplicitThisVirtualCalls(String code) {
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        Matcher matcher = EXPLICIT_THIS_VIRTUAL_CALL.matcher(code);
        StringBuilder output = new StringBuilder(code.length());
        int cursor = 0;
        int search = 0;
        int replacements = 0;
        while (matcher.find(search)) {
            int open = matcher.end() - 1;
            int close = matchingParen(code, open);
            if (close < 0) break;
            String receiver = matcher.group(1);
            if (!receiverAwareVtableSlot(declarations, receiver, matcher.group(2))) {
                search = matcher.end();
                continue;
            }
            String arguments = code.substring(open + 1, close);
            int separator = topLevelComma(arguments);
            String first = (separator < 0 ? arguments :
                arguments.substring(0, separator)).trim();
            if (!receiver.equals(first)) {
                search = matcher.end();
                continue;
            }
            String remaining = separator < 0 ? "" :
                arguments.substring(separator + 1).stripLeading();
            output.append(code, cursor, matcher.start());
            output.append(receiver).append("->").append(matcher.group(2))
                .append("(").append(remaining).append(")");
            cursor = close + 1;
            search = cursor;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        output.append(code, cursor, code.length());
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * Physical tables can contain both receiver-aware virtual methods and
     * receiver-less __cdecl/__stdcall callbacks.  Only the former are eligible
     * for C++ member-call sugar or for the explicit-receiver readability debt.
     * An unresolved path stays conservative and is treated as receiver-aware.
     */
    private boolean receiverAwareVtableSlot(Map<String, PointerDeclaration> declarations,
            String receiver, String slot) {
        ghidra.program.model.data.FunctionDefinition definition =
            vtableSlotDefinition(declarations, receiver, slot);
        if (definition == null) return true;
        String convention = definition.getCallingConventionName();
        return !"__cdecl".equals(convention) && !"__stdcall".equals(convention);
    }

    private ghidra.program.model.data.FunctionDefinition vtableSlotDefinition(
            Map<String, PointerDeclaration> declarations, String receiver, String slot) {
        PointerDeclaration declaration = declarations.get(receiver);
        if (declaration == null || declaration.stars != 1) return null;
        Structure owner = uniqueStructure(declaration.type);
        DataTypeComponent vptr = owner == null ? null : componentByName(owner, "vtable");
        DataType vtableType = vptr == null ? null : unwrapTypeDef(vptr.getDataType());
        if (vtableType instanceof Pointer pointer)
            vtableType = unwrapTypeDef(pointer.getDataType());
        if (!(vtableType instanceof Structure vtable)) return null;
        DataTypeComponent member = componentByName(vtable, slot);
        return member == null ? null : callableDefinition(member.getDataType());
    }

    private int matchingParen(String text, int open) {
        int depth = 0;
        boolean string = false, character = false, escaped = false;
        boolean lineComment = false, blockComment = false;
        for (int index = open; index < text.length(); index++) {
            char ch = text.charAt(index);
            char next = index + 1 < text.length() ? text.charAt(index + 1) : '\0';
            if (lineComment) {
                if (ch == '\n') lineComment = false;
                continue;
            }
            if (blockComment) {
                if (ch == '*' && next == '/') { blockComment = false; index++; }
                continue;
            }
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '/' && next == '/') { lineComment = true; index++; continue; }
            if (ch == '/' && next == '*') { blockComment = true; index++; continue; }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(') depth++;
            else if (ch == ')' && --depth == 0) return index;
        }
        return -1;
    }

    private int topLevelComma(String text) {
        int parentheses = 0, brackets = 0, braces = 0;
        boolean string = false, character = false, escaped = false;
        for (int index = 0; index < text.length(); index++) {
            char ch = text.charAt(index);
            if (string || character) {
                if (escaped) { escaped = false; continue; }
                if (ch == '\\') { escaped = true; continue; }
                if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '"') { string = true; continue; }
            if (ch == '\'') { character = true; continue; }
            if (ch == '(') parentheses++;
            else if (ch == ')') parentheses--;
            else if (ch == '[') brackets++;
            else if (ch == ']') brackets--;
            else if (ch == '{') braces++;
            else if (ch == '}') braces--;
            else if (ch == ',' && parentheses == 0 && brackets == 0 && braces == 0)
                return index;
        }
        return -1;
    }

    /**
     * Ghidra may prefer a flags-style spelling such as CASE_4|CASE_1 even
     * after the same generated enum contains the exact CASE_5 member.  Fold
     * only that proven presentation artifact.  Missing values, ambiguous
     * operand types, semantic/manual enums, and mixed-enum expressions remain
     * untouched so the strict quality gate can still reject them.
     */
    private NormalizedCode normalizeKnownEnumCompositions(Function function, String code) {
        if (code == null || code.isEmpty()) return new NormalizedCode("", 0);
        Map<String, Enum> variables = new LinkedHashMap<>();
        for (Parameter parameter : function.getParameters()) {
            Enum type = generatedExportEnum(parameter.getDataType());
            if (type != null) variables.put(parameter.getName(), type);
        }
        Matcher declaration = ENUM_LOCAL_DECLARATION.matcher(code);
        while (declaration.find()) {
            Enum type = generatedExportEnumNamed(declaration.group(1));
            if (type != null) variables.put(declaration.group(2), type);
        }
        Map<String, String> pointerOwners = exportPointerOwners(function, code);

        int replacements = 0;
        String[] lines = code.split("\\R", -1);
        List<String> output = new ArrayList<>();
        for (String line : lines) {
            Matcher composition = FULL_ENUM_COMPOSITION.matcher(line);
            StringBuilder rewritten = new StringBuilder();
            int cursor = 0;
            while (composition.find()) {
                rewritten.append(line, cursor, composition.start());
                String exact = exactEnumCompositionName(line, composition.group(1),
                    variables, pointerOwners);
                if (exact == null) rewritten.append(composition.group());
                else {
                    rewritten.append(exact);
                    replacements++;
                }
                cursor = composition.end();
            }
            rewritten.append(line, cursor, line.length());
            output.add(rewritten.toString());
        }
        return new NormalizedCode(String.join(System.lineSeparator(), output), replacements);
    }

    private String exactEnumCompositionName(String line, String expression,
            Map<String, Enum> variables, Map<String, String> pointerOwners) {
        Map<String, Enum> candidates = new LinkedHashMap<>();
        for (Map.Entry<String, Enum> entry : variables.entrySet())
            if (containsExportIdentifier(line, entry.getKey()))
                candidates.put(entry.getValue().getPathName(), entry.getValue());

        Matcher field = ENUM_FIELD_USE.matcher(line);
        while (field.find()) {
            Structure structure = exportOwnerStructure(pointerOwners.get(field.group(1)));
            if (structure == null) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                if (!field.group(2).equals(component.getFieldName())) continue;
                Enum type = generatedExportEnum(component.getDataType());
                if (type != null) candidates.put(type.getPathName(), type);
                break;
            }
        }

        Set<String> exactNames = new TreeSet<>();
        for (Enum candidate : candidates.values()) {
            String exact = exactEnumValueName(candidate, expression);
            if (exact != null) exactNames.add(exact);
        }
        return exactNames.size() == 1 ? exactNames.iterator().next() : null;
    }

    private String exactEnumValueName(Enum type, String expression) {
        Set<String> names = Set.of(type.getNames());
        long value = 0;
        boolean found = false;
        for (String item : expression.split("\\s*\\|\\s*")) {
            int separator = item.lastIndexOf("::");
            String name = separator < 0 ? item : item.substring(separator + 2);
            if (!names.contains(name)) return null;
            value |= type.getValue(name);
            found = true;
        }
        if (!found) return null;
        String preferred = value < 0 ?
            "CASE_NEG_" + Long.toHexString(-value).toUpperCase(Locale.ROOT) :
            "CASE_" + Long.toHexString(value).toUpperCase(Locale.ROOT);
        return names.contains(preferred) && type.getValue(preferred) == value ?
            preferred : null;
    }

    private Map<String, String> exportPointerOwners(Function function, String code) {
        Map<String, String> result = new LinkedHashMap<>();
        String owner = exportFunctionOwner(function);
        if (!owner.isBlank()) result.put("this", owner);
        for (Parameter parameter : function.getParameters()) {
            String pointed = pointedExportOwner(parameter.getDataType());
            if (pointed != null) result.put(parameter.getName(), pointed);
        }
        Matcher declaration = ENUM_POINTER_DECLARATION.matcher(code);
        while (declaration.find()) {
            String declared = declaration.group(1);
            if (exportOwnerStructure(declared) != null)
                result.put(declaration.group(2), declared);
        }
        return result;
    }

    private String pointedExportOwner(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        if (!(type instanceof Pointer pointer)) return null;
        DataType pointed = pointer.getDataType();
        while (pointed instanceof TypeDef value) pointed = value.getBaseDataType();
        return pointed instanceof Structure ? pointed.getName() : null;
    }

    private Enum generatedExportEnum(DataType type) {
        while (type instanceof TypeDef value) type = value.getBaseDataType();
        if (type instanceof Pointer pointer) {
            type = pointer.getDataType();
            while (type instanceof TypeDef value) type = value.getBaseDataType();
        }
        if (!(type instanceof Enum value)) return null;
        String description = value.getDescription();
        return description != null && description.contains(GENERATED_ENUM_MARKER) ?
            value : null;
    }

    private Enum generatedExportEnumNamed(String name) {
        String simple = exportLeaf(name);
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(simple, matches);
        for (DataType match : matches) {
            Enum type = generatedExportEnum(match);
            if (type != null && type.getName().equals(simple)) return type;
        }
        return null;
    }

    private Structure exportOwnerStructure(String owner) {
        if (owner == null || owner.isBlank()) return null;
        String name = exportLeaf(owner);
        DataType direct = currentProgram.getDataTypeManager().getDataType("/" + name);
        if (direct instanceof Structure) return (Structure)direct;
        List<DataType> matches = new ArrayList<>();
        currentProgram.getDataTypeManager().findDataTypes(name, matches);
        for (DataType match : matches)
            if (match instanceof Structure && !match.getPathName().contains("/VTables/"))
                return (Structure)match;
        return null;
    }

    private String exportFunctionOwner(Function function) {
        String qualified = function.getName(true);
        int separator = qualified.lastIndexOf("::");
        if (separator <= 0) return "";
        String owner = qualified.substring(0, separator);
        return owner.equals("Global") || owner.startsWith("Library::") ? "" : owner;
    }

    private String exportLeaf(String owner) {
        int separator = owner.lastIndexOf("::");
        return separator < 0 ? owner : owner.substring(separator + 2);
    }

    private boolean containsExportIdentifier(String text, String name) {
        int index = -1;
        while ((index = text.indexOf(name, index + 1)) >= 0) {
            boolean before = index == 0 ||
                !Character.isJavaIdentifierPart(text.charAt(index - 1));
            int afterIndex = index + name.length();
            boolean after = afterIndex >= text.length() ||
                !Character.isJavaIdentifierPart(text.charAt(afterIndex));
            if (before && after) return true;
        }
        return false;
    }

    /**
     * Migrate cached output produced by older exporter revisions.  Those
     * revisions sometimes folded the REP MOVSD loop but retained its artificial
     * pointer live-outs and the final one-to-three byte copy:
     *
     *   memmove(dst, src, 0x40);
     *   dst = (T *)((byte *)dst + 0x40);
     *   src = (T *)((byte *)src + 0x40);
     *   *(short *)dst = (short)*src;
     *   *((byte *)dst + 2) = *((byte *)src + 2);
     *
     * Reused function bodies are normalized again without being decompiled, so
     * recognize that exporter-owned representation and extend the memmove over
     * the exact contiguous tail.  The marker byte count from some intermediate
     * revisions already includes a prefix of the tail; therefore the new size
     * is the maximum of that count and advance+tail, never their sum.
     */
    private NormalizedCode normalizeLegacyBulkCopyLiveouts(String code) {
        if (code == null || code.isEmpty() ||
                !code.contains(BULK_COPY_MARKER) ||
                !code.contains("((byte *)"))
            return new NormalizedCode(code, 0);
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher copy = LEGACY_BULK_COPY.matcher(lines[index]);
            if (!copy.matches() || index + 3 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String indent = copy.group("indent");
            String destinationName = copy.group("destination");
            String sourceName = copy.group("source");
            Long copiedBytes = unsignedLiteral(copy.group("bytes"));
            Long destinationAdvance = legacyPointerAdvanceBytes(
                lines[index + 1], indent, destinationName);
            Long sourceAdvance = legacyPointerAdvanceBytes(
                lines[index + 2], indent, sourceName);
            if (copiedBytes == null || destinationAdvance == null ||
                    sourceAdvance == null ||
                    copiedBytes <= 0 || copiedBytes > 0x1000000L ||
                    destinationAdvance <= 0 ||
                    destinationAdvance > 0x1000000L ||
                    !destinationAdvance.equals(sourceAdvance) ||
                    copiedBytes < destinationAdvance ||
                    copiedBytes - destinationAdvance > 3) {
                output.add(lines[index]);
                continue;
            }

            CopyBody body = new CopyBody(destinationName, sourceName);
            long coveredTail = copiedBytes - destinationAdvance;
            int cursor = index + 3;
            List<String> interstitial = new ArrayList<>();
            while (cursor < lines.length && interstitial.size() < 4 &&
                    safeLegacyCopyInterstitial(lines[cursor], indent,
                        destinationName, sourceName)) {
                interstitial.add(lines[cursor]);
                cursor++;
            }
            int lastTail = cursor - 1;
            boolean consumedTail = false;
            while (cursor < lines.length && coveredTail < 3) {
                String line = lines[cursor];
                String stripped = line.stripLeading();
                String tailIndent =
                    line.substring(0, line.length() - stripped.length());
                if (!tailIndent.equals(indent)) break;
                TailCopy tail = fixedTailCopy(stripped, body, declarations);
                if (tail == null || tail.offset != coveredTail ||
                        coveredTail + tail.width > 3)
                    break;
                coveredTail += tail.width;
                lastTail = cursor++;
                consumedTail = true;
            }
            if (!consumedTail) {
                output.add(lines[index]);
                continue;
            }

            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, lastTail + 1, lines.length));
            boolean destinationLive = identifierValueLiveAfter(after,
                destinationName, 0, indent.length());
            boolean sourceLive = identifierValueLiveAfter(after,
                sourceName, 0, indent.length());
            PointerDeclaration destination = declarations.get(destinationName);
            PointerDeclaration source = declarations.get(sourceName);
            if ((destinationLive && destination == null) ||
                    (sourceLive && source == null)) {
                output.add(lines[index]);
                continue;
            }

            long totalBytes = Math.max(copiedBytes,
                destinationAdvance + coveredTail);
            output.add(indent + "memmove(" + destinationName + ", " +
                sourceName + ", " + hexLiteral(totalBytes) + "); " +
                BULK_COPY_MARKER);
            if (destinationLive)
                output.add(pointerAdvance(indent, destinationName, destination,
                    hexLiteral(destinationAdvance)));
            if (sourceLive)
                output.add(pointerAdvance(indent, sourceName, source,
                    hexLiteral(sourceAdvance)));
            output.addAll(interstitial);
            index = lastTail;
            replacements++;
        }
        return replacements == 0 ? new NormalizedCode(code, 0) :
            new NormalizedCode(
                String.join(System.lineSeparator(), output), replacements);
    }

    private Long legacyPointerAdvanceBytes(String line, String indent,
            String name) {
        String literal = "(?<bytes>0x[0-9A-Fa-f]+|[0-9]+)";
        Pattern pattern = Pattern.compile("^" + Pattern.quote(indent) +
            Pattern.quote(name) + "[ \\t]*=[ \\t]*\\([^;]+\\)[ \\t]*" +
            "\\(\\(byte[ \\t]*\\*\\)[ \\t]*" + Pattern.quote(name) +
            "[ \\t]*\\+[ \\t]*" + literal + "\\);[ \\t]*$");
        Matcher matcher = pattern.matcher(line);
        return matcher.matches() ? unsignedLiteral(matcher.group("bytes")) :
            null;
    }

    private boolean safeLegacyCopyInterstitial(String line, String indent,
            String destination, String source) {
        if (!line.startsWith(indent)) return false;
        String statement = line.substring(indent.length());
        if (!statement.matches(
                "[A-Za-z_$][A-Za-z0-9_$]*(?:\\[[^]]+\\])?[ \\t]*=" +
                "[ \\t]*[^;]+;[ \\t]*"))
            return false;
        if (statement.contains("*") || statement.contains("(") ||
                statement.contains("->") ||
                containsExportIdentifier(statement, destination) ||
                containsExportIdentifier(statement, source))
            return false;
        return true;
    }

    /**
     * MSVC lowers many fixed-direction byte copies to REP MOVSD followed by
     * REP MOVSB.  Ghidra expands those two instructions into a pair of source
     * loops whose counters are byte_count >> 2 and byte_count & 3.  Those
     * counters are not source-level array indices and their undefined4/
     * undefined1 pointer spelling creates a large amount of false type debt.
     *
     * Fold only the exact two-loop form with one copy plus the matching source
     * and destination increments in each body.  If an advanced pointer or
     * exhausted counter remains live, reproduce that exact live-out state after
     * the memmove.  This admits row/pitch copy loops without silently changing
     * later pointer arithmetic.  memmove is deliberately used instead of
     * memcpy: the DArray erase helper copies an overlapping tail toward a lower
     * address.
     */
    private NormalizedCode normalizeBulkCopyLoops(String code) {
        if (code == null || code.isEmpty())
            return new NormalizedCode(code, 0);
        boolean dynamicCandidate =
            code.contains(">> 2") && code.contains("& 3");
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        Set<String> bytePointers = new LinkedHashSet<>();
        Set<String> deadLocals = new LinkedHashSet<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher words = BULK_COPY_WORD_HEADER.matcher(lines[index]);
            if (!dynamicCandidate || !words.matches() ||
                    index + 9 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String indent = words.group("indent");
            String wordCounter = words.group("counter");
            String byteCounter = words.group("bytes");
            CopyBody wordBody = copyBody(lines, index + 1, 4, declarations, false);
            int wordClose = index + 4;
            int tailHeaderIndex = index + 5;
            Matcher tail = BULK_COPY_TAIL_HEADER.matcher(lines[tailHeaderIndex]);
            CopyBody byteBody = copyBody(lines, tailHeaderIndex + 1, 1,
                declarations, true);
            int tailClose = tailHeaderIndex + 4;
            boolean exact = wordBody != null && byteBody != null &&
                !wordCounter.equals(byteCounter) &&
                lines[wordClose].equals(indent + "}") &&
                tail.matches() && tail.group("indent").equals(indent) &&
                tail.group("bytes").equals(byteCounter) &&
                lines[tailClose].equals(indent + "}") &&
                wordBody.destination.equals(byteBody.destination) &&
                wordBody.source.equals(byteBody.source);
            if (!exact) {
                output.add(lines[index]);
                continue;
            }
            String tailCounter = tail.group("counter");
            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, tailClose + 1, lines.length));
            boolean wordCounterLive = identifierValueLiveAfter(after,
                wordCounter, 0, indent.length());
            boolean tailCounterLive = identifierValueLiveAfter(after,
                tailCounter, 0, indent.length());
            boolean destinationLive = identifierValueLiveAfter(after,
                wordBody.destination, 0, indent.length());
            boolean sourceLive = identifierValueLiveAfter(after,
                wordBody.source, 0, indent.length());
            PointerDeclaration destination =
                declarations.get(wordBody.destination);
            PointerDeclaration source = declarations.get(wordBody.source);
            if ((destinationLive && destination == null) ||
                    (sourceLive && source == null)) {
                output.add(lines[index]);
                continue;
            }
            output.add(indent + "memmove(" + wordBody.destination + ", " +
                wordBody.source + ", " + byteCounter + "); " + BULK_COPY_MARKER);
            if (destinationLive)
                output.add(pointerAdvance(indent, wordBody.destination,
                    destination, byteCounter));
            if (sourceLive)
                output.add(pointerAdvance(indent, wordBody.source, source,
                    byteCounter));
            if (wordCounterLive)
                output.add(indent + wordCounter + " = 0;");
            else deadLocals.add(wordCounter);
            if (!tailCounter.equals(wordCounter)) {
                if (tailCounterLive)
                    output.add(indent + tailCounter + " = 0;");
                else if (!tailCounter.equals(byteCounter))
                    deadLocals.add(tailCounter);
            }
            if (!destinationLive && destination != null &&
                    destination.width == 4 &&
                    destination.type.trim().equals("undefined4"))
                bytePointers.add(wordBody.destination);
            if (!sourceLive && source != null && source.width == 4 &&
                    source.type.trim().equals("undefined4"))
                bytePointers.add(wordBody.source);
            index = tailClose;
            replacements++;
        }
        String normalized = replacements == 0 ? code :
            String.join(System.lineSeparator(), output);
        for (String pointer : bytePointers)
            normalized = normalizeBulkCopyBytePointer(normalized, pointer);
        NormalizedCode fixed =
            normalizeFixedBulkCopyLoops(normalized, deadLocals);
        normalized = removeDeadBulkZeroLocals(fixed.code, deadLocals);
        return new NormalizedCode(normalized,
            replacements + fixed.replacements);
    }

    /**
     * A constant-size REP MOVSD followed by one non-dword tail transfer is the
     * fixed-size sibling of the dynamic two-loop form.  The exact loop body,
     * optional equal-width source/destination tail, and dead temporaries make
     * the byte count provable without assigning an artificial undefined4 array.
     */
    private NormalizedCode normalizeFixedBulkCopyLoops(String code,
            Set<String> deadLocals) {
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        Set<String> bytePointers = new LinkedHashSet<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher header = BULK_COPY_FIXED_HEADER.matcher(lines[index]);
            if (!header.matches() || index + 4 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            CopyBody body = copyBody(lines, index + 1, 4,
                declarations, false);
            String indent = header.group("indent");
            int close = index + 4;
            if (body == null || !lines[close].equals(indent + "}")) {
                output.add(lines[index]);
                continue;
            }
            long tailWidth = 0;
            int end = close;
            while (end + 1 < lines.length && tailWidth < 3) {
                String tailLine = lines[end + 1];
                String stripped = tailLine.stripLeading();
                String tailIndent = tailLine.substring(
                    0, tailLine.length() - stripped.length());
                if (!tailIndent.equals(indent)) break;
                TailCopy tail = fixedTailCopy(stripped, body, declarations);
                if (tail == null || tail.offset != tailWidth ||
                        tailWidth + tail.width > 3)
                    break;
                tailWidth += tail.width;
                end++;
            }
            long count;
            try {
                String value = header.group("count");
                count = value.regionMatches(true, 0, "0x", 0, 2) ?
                    Long.parseUnsignedLong(value.substring(2), 16) :
                    Long.parseLong(value);
            }
            catch (RuntimeException exception) {
                output.add(lines[index]);
                continue;
            }
            long bytes;
            try {
                bytes = Math.addExact(Math.multiplyExact(count, 4L),
                    tailWidth);
            }
            catch (ArithmeticException exception) {
                output.add(lines[index]);
                continue;
            }
            if (bytes <= 0 || bytes > 0x1000000L) {
                output.add(lines[index]);
                continue;
            }
            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, end + 1, lines.length));
            String counter = header.group("counter");
            boolean counterLive = identifierValueLiveAfter(after, counter, 0,
                indent.length());
            boolean destinationLive = identifierValueLiveAfter(after,
                body.destination, 0, indent.length());
            boolean sourceLive = identifierValueLiveAfter(after, body.source,
                0, indent.length());
            PointerDeclaration destination =
                declarations.get(body.destination);
            PointerDeclaration source = declarations.get(body.source);
            if ((destinationLive && destination == null) ||
                    (sourceLive && source == null)) {
                output.add(lines[index]);
                continue;
            }
            output.add(indent + "memmove(" + body.destination + ", " +
                body.source + ", " + hexLiteral(bytes) + "); " +
                BULK_COPY_MARKER);
            long advancedBytes = count * 4L;
            if (destinationLive)
                output.add(pointerAdvance(indent, body.destination,
                    destination, hexLiteral(advancedBytes)));
            if (sourceLive)
                output.add(pointerAdvance(indent, body.source, source,
                    hexLiteral(advancedBytes)));
            if (counterLive)
                output.add(indent + counter + " = 0;");
            else deadLocals.add(counter);
            if (!destinationLive && destination != null &&
                    destination.width == 4 &&
                    destination.type.trim().equals("undefined4"))
                bytePointers.add(body.destination);
            if (!sourceLive && source != null && source.width == 4 &&
                    source.type.trim().equals("undefined4"))
                bytePointers.add(body.source);
            index = end;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        String normalized = String.join(System.lineSeparator(), output);
        for (String pointer : bytePointers)
            normalized = normalizeBulkCopyBytePointer(normalized, pointer);
        return new NormalizedCode(normalized, replacements);
    }

    private String pointerAdvance(String indent, String name,
            PointerDeclaration declaration, String byteCount) {
        Long bytes = unsignedLiteral(byteCount);
        if (bytes != null && declaration.width > 0 &&
                bytes % declaration.width == 0) {
            long elements = bytes / declaration.width;
            return indent + name + " = " + name + " + " +
                hexLiteral(elements) + ";";
        }
        String stars = "*".repeat(Math.max(1, declaration.stars));
        return indent + name + " = (" + declaration.type + " " + stars +
            ")((byte *)" + name + " + " + byteCount + ");";
    }

    /**
     * MSVC's fixed REP MOVSD expansion commonly leaves a two-byte and/or
     * one-byte tail after the dword loop. Ghidra spells those accesses through
     * the already advanced source/destination temporaries. Treat a contiguous
     * exact tail as part of the same byte copy so the export does not invent
     * otherwise dead live-out pointer arithmetic.
     */
    private TailCopy fixedTailCopy(String statement, CopyBody body,
            Map<String, PointerDeclaration> declarations) {
        Matcher assignment =
            Pattern.compile("^(.+?)[ \\t]*=[ \\t]*(.+);$").matcher(statement);
        if (!assignment.matches()) return null;
        for (int width : List.of(2, 1)) {
            TailAccess destination =
                fixedTailAccess(assignment.group(1), width, declarations);
            TailAccess source =
                fixedTailAccess(assignment.group(2), width, declarations);
            if (destination == null || source == null ||
                    destination.offset != source.offset ||
                    !destination.pointer.equals(body.destination) ||
                    !source.pointer.equals(body.source))
                continue;
            return new TailCopy(destination.offset, width);
        }
        return null;
    }

    private TailAccess fixedTailAccess(String expression, int width,
            Map<String, PointerDeclaration> declarations) {
        String value = expression.trim();
        boolean explicitlyNarrowed = false;
        Matcher narrowed = Pattern.compile(
            "^\\((char|byte|undefined1|short|ushort|undefined2)\\)" +
            "[ \\t]*(.+)$").matcher(value);
        if (narrowed.matches()) {
            if (renderedTypeWidth(narrowed.group(1)) != width) return null;
            value = narrowed.group(2).trim();
            explicitlyNarrowed = true;
        }
        Matcher cast = Pattern.compile(
            "^\\*\\(([^)]+)\\*\\)[ \\t]*(.+)$").matcher(value);
        if (cast.matches()) {
            if (pointerArithmeticWidth(cast.group(1).trim(), 1) != width)
                return null;
            return fixedTailAddress(cast.group(2));
        }
        Matcher direct = Pattern.compile(
            "^\\*([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
        if (direct.matches()) {
            PointerDeclaration declaration = declarations.get(direct.group(1));
            return explicitlyNarrowed ||
                    (declaration != null && declaration.width == width) ?
                new TailAccess(direct.group(1), 0) : null;
        }
        Matcher indexed = Pattern.compile(
            "^([A-Za-z_$][A-Za-z0-9_$]*)\\[" +
            "(0x[0-9A-Fa-f]+|[0-9]+)\\]$").matcher(value);
        if (!indexed.matches()) return null;
        PointerDeclaration declaration = declarations.get(indexed.group(1));
        Long element = unsignedLiteral(indexed.group(2));
        if (declaration == null || declaration.width != width ||
                element == null || element > 3)
            return null;
        long offset = element * declaration.width;
        return offset <= 3 ?
            new TailAccess(indexed.group(1), (int)offset) : null;
    }

    private TailAccess fixedTailAddress(String expression) {
        String value = expression.trim();
        Matcher direct = Pattern.compile(
            "^([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
        if (direct.matches()) return new TailAccess(direct.group(1), 0);
        Matcher offset = Pattern.compile(
            "^\\(\\(int\\)[ \\t]*(?<name>[A-Za-z_$][A-Za-z0-9_$]*)" +
            "[ \\t]*\\+[ \\t]*(?<offset>0x[0-9A-Fa-f]+|[0-9]+)\\)$")
            .matcher(value);
        if (!offset.matches()) return null;
        Long amount = unsignedLiteral(offset.group("offset"));
        return amount != null && amount <= 3 ?
            new TailAccess(offset.group("name"), amount.intValue()) : null;
    }

    private Long unsignedLiteral(String value) {
        if (value == null) return null;
        String text = value.trim();
        try {
            if (text.regionMatches(true, 0, "0x", 0, 2))
                return Long.parseUnsignedLong(text.substring(2), 16);
            if (text.matches("[0-9]+")) return Long.parseLong(text);
            return null;
        }
        catch (NumberFormatException ignored) {
            return null;
        }
    }

    private CopyBody copyBody(String[] lines, int start, int width,
            Map<String, PointerDeclaration> declarations, boolean byteIncrements) {
        if (start < 0 || start + 2 >= lines.length) return null;
        CopyBody copy = null;
        Set<String> increments = new LinkedHashSet<>();
        for (int index = start; index < start + 3; index++) {
            String statement = lines[index].trim();
            String increment = incrementedPointer(statement, width,
                declarations, byteIncrements);
            if (increment != null) {
                increments.add(increment);
                continue;
            }
            CopyBody found = copyStatement(statement, width, declarations);
            if (found == null || copy != null) return null;
            copy = found;
        }
        if (copy == null || increments.size() != 2 ||
                !increments.contains(copy.destination) ||
                !increments.contains(copy.source))
            return null;
        return copy;
    }

    private String incrementedPointer(String statement, int transferWidth,
            Map<String, PointerDeclaration> declarations,
            boolean allowByteCast) {
        String direct = incrementedPointer(statement, allowByteCast);
        if (direct != null) return direct;
        Matcher structural = STRUCTURAL_FIELD_POINTER_INCREMENT.matcher(statement);
        if (structural.matches()) {
            Long base = structural.group("direct") != null ?
                hexDigits(structural.group("direct")) : hexDigits(structural.group("base"));
            Long delta = structural.group("delta") == null ? 0L :
                unsignedLiteral(structural.group("delta"));
            if (base != null && delta != null && base <= Long.MAX_VALUE - delta &&
                    base + delta == transferWidth &&
                    declarations.containsKey(structural.group("name")))
                return structural.group("name");
        }
        if (transferWidth <= 1) return null;
        Matcher bytes = Pattern.compile(
            "^(?<name>[A-Za-z_$][A-Za-z0-9_$]*)[ \\t]*=[ \\t]*\\k<name>" +
            "[ \\t]*\\+[ \\t]*" + transferWidth + ";$").matcher(statement);
        if (!bytes.matches()) return null;
        PointerDeclaration declaration = declarations.get(bytes.group("name"));
        return declaration != null && declaration.width == 1 ?
            bytes.group("name") : null;
    }

    private Long hexDigits(String value) {
        if (value == null || value.isBlank()) return null;
        try { return Long.parseUnsignedLong(value, 16); }
        catch (NumberFormatException ignored) { return null; }
    }

    private String incrementedPointer(String statement,
            boolean allowByteCast) {
        if (allowByteCast) {
            Matcher cast = BYTE_POINTER_INCREMENT.matcher(statement);
            if (cast.matches()) return cast.group("name");
        }
        Matcher direct = POINTER_INCREMENT.matcher(statement);
        return direct.matches() ? direct.group("name") : null;
    }

    private CopyBody copyStatement(String statement, int width,
            Map<String, PointerDeclaration> declarations) {
        Matcher assignment =
            Pattern.compile("^(.+?)[ \\t]*=[ \\t]*(.+);$").matcher(statement);
        if (!assignment.matches()) return null;
        String destination =
            dereferencedVariable(assignment.group(1), width, declarations);
        String source =
            dereferencedVariable(assignment.group(2), width, declarations);
        return destination == null || source == null ?
            null : new CopyBody(destination, source);
    }

    private String dereferencedVariable(String expression, int width,
            Map<String, PointerDeclaration> declarations) {
        String value = expression.trim();
        Matcher direct = Pattern.compile(
            "^\\*([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
        if (direct.matches()) {
            PointerDeclaration declaration = declarations.get(direct.group(1));
            return declaration != null && declaration.width == width ?
                direct.group(1) : null;
        }
        Matcher cast = Pattern.compile(
            "^\\*\\(([^)]+)\\*\\)[ \\t]*([A-Za-z_$][A-Za-z0-9_$]*)$")
            .matcher(value);
        if (cast.matches())
            return pointerArithmeticWidth(cast.group(1).trim(), 1) == width ?
                cast.group(2) : null;
        if (width == 1) {
            Matcher narrowed = Pattern.compile(
                "^\\((?:char|byte|undefined1)\\)[ \\t]*" +
                "\\*([A-Za-z_$][A-Za-z0-9_$]*)$").matcher(value);
            if (narrowed.matches()) return narrowed.group(1);
        }
        return null;
    }

    private String normalizeBulkCopyBytePointer(String code, String pointer) {
        Pattern declaration = Pattern.compile(
            "(?m)^(?<indent>[ \\t]*)undefined4[ \\t]*\\*[ \\t]*" +
            Pattern.quote(pointer) + "[ \\t]*;$");
        Matcher declared = declaration.matcher(code);
        if (!declared.find()) return code;
        String normalized = declared.replaceFirst(
            Matcher.quoteReplacement(declared.group("indent") +
                "byte *" + pointer + ";"));
        Pattern assignmentCast = Pattern.compile(
            "(?m)^(?<prefix>[ \\t]*" + Pattern.quote(pointer) +
            "[ \\t]*=[ \\t]*)\\(undefined4[ \\t]*\\*\\)");
        Matcher cast = assignmentCast.matcher(normalized);
        normalized = cast.replaceAll(match ->
            Matcher.quoteReplacement(match.group("prefix") + "(byte *)"));
        Pattern directAssignment = Pattern.compile(
            "(?m)^(?<prefix>[ \\t]*" + Pattern.quote(pointer) +
            "[ \\t]*=[ \\t]*)(?<value>[^;\\r\\n]+);$");
        Matcher direct = directAssignment.matcher(normalized);
        return direct.replaceAll(match -> {
            String value = match.group("value").trim();
            if (value.matches("^\\(byte[ \\t]*\\*\\).*"))
                return Matcher.quoteReplacement(match.group());
            return Matcher.quoteReplacement(match.group("prefix") +
                "(byte *)(" + value + ");");
        });
    }

    /**
     * MSVC emits REP STOSD followed by an optional STOSB for many aggregate and
     * object-tail initializers.  Ghidra expands that instruction pair into an
     * undefined4-pointer loop and an undefined1 tail store.  The widths describe
     * the transfer instructions, not the logical fields being initialized.  Fold
     * only the exact zero-fill loop so independently recovered fields can remain
     * represented in the structure without inventing an overlapping array.
     */
    private NormalizedCode normalizeBulkZeroLoops(String code) {
        Set<String> candidates = new LinkedHashSet<>();
        NormalizedCode selected = normalizeBulkZeroPattern(
            code, BULK_ZERO_NULL_SELECT, candidates, true);
        NormalizedCode simple = normalizeBulkZeroPattern(
            selected.code, BULK_ZERO_SIMPLE, candidates, false);
        NormalizedCode bytePointer = normalizeBytePointerBulkZero(
            simple.code, candidates);
        NormalizedCode dynamic =
            normalizeDynamicBulkZeroLoops(bytePointer.code, candidates);
        NormalizedCode residual = normalizeBulkZeroResidualTails(dynamic.code);
        String normalized = removeDeadBulkZeroLocals(residual.code, candidates);
        return new NormalizedCode(normalized,
            selected.replacements + simple.replacements +
                bytePointer.replacements + dynamic.replacements +
                residual.replacements);
    }

    /**
     * Fold REP STOSD when Ghidra keeps the destination as a byte pointer.
     * Pointer addition is then rendered as +4 and the store retains an
     * undefined4 cast.  The transfer width still proves one contiguous zero
     * span; it does not prove that the underlying aggregate contains dword
     * members.
     */
    private NormalizedCode normalizeBytePointerBulkZero(String code,
            Set<String> deadLocals) {
        Matcher matcher = BULK_ZERO_BYTE_POINTER.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            long count = parseIntegerLiteral(matcher.group("count"));
            long bytes;
            try { bytes = Math.multiplyExact(count, 4L); }
            catch (ArithmeticException exception) { bytes = -1; }
            String pointer = matcher.group("pointer");
            String counter = matcher.group("counter");
            boolean pointerLive = identifierValueLiveAfter(
                code, pointer, matcher.end(), matcher.group("indent").length());
            boolean counterLive = identifierValueLiveAfter(
                code, counter, matcher.end(), matcher.group("indent").length());
            if (bytes <= 0 || bytes > 0x1000000L || pointerLive || counterLive) {
                matcher.appendReplacement(output,
                    Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            String target = bulkZeroTarget(matcher.group("target").trim());
            String replacement = matcher.group("indent") + "memset(" + target +
                ", 0, " + hexLiteral(bytes) + "); " + BULK_ZERO_MARKER;
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
            deadLocals.add(pointer);
            deadLocals.add(counter);
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    /**
     * The fixed-loop normalizer can consume REP STOSD and its first STOSW tail
     * while Ghidra leaves a final STOSB rendered through the already advanced
     * undefined4 pointer. Extend the same memset only when the following fixed
     * zero stores form a contiguous byte span. Intervening statements are kept;
     * computed/nonzero stores and pointer redefinitions terminate the scan.
     */
    private NormalizedCode normalizeBulkZeroResidualTails(String code) {
        if (code == null || code.isEmpty() || !code.contains(BULK_ZERO_MARKER))
            return new NormalizedCode(code, 0);
        String[] lines = code.split("\\R", -1);
        boolean[] remove = new boolean[lines.length];
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher memset = BULK_ZERO_MEMSET_LINE.matcher(lines[index]);
            if (!memset.matches() || index + 1 >= lines.length) continue;
            String pointer = memset.group("pointer");
            Matcher advance = BULK_ZERO_POINTER_ADVANCE.matcher(lines[index + 1]);
            if (!advance.matches() || !pointer.equals(advance.group("pointer"))) continue;
            long covered = parseIntegerLiteral(memset.group("bytes"));
            long base = parseIntegerLiteral(advance.group("bytes"));
            if (covered < 0 || base < 0 || base > covered) continue;

            List<Integer> absorbed = new ArrayList<>();
            long extended = covered;
            for (int cursor = index + 2;
                    cursor < lines.length && cursor <= index + 9; cursor++) {
                String line = lines[cursor];
                if (directAssignmentTo(line, pointer)) break;
                FixedZeroStore store = fixedZeroStore(line, pointer, base);
                if (store != null) {
                    if (store.offset > extended || store.offset + store.width < 0) break;
                    if (store.offset + store.width <= extended || store.offset == extended) {
                        extended = Math.max(extended, store.offset + store.width);
                        absorbed.add(cursor);
                        continue;
                    }
                    break;
                }
                if (identifierOccurs(line, pointer, 0, line.length())) break;
            }
            if (absorbed.isEmpty() || extended <= covered) continue;
            lines[index] = memset.group("indent") + "memset(" + pointer +
                ", 0, " + hexLiteral(extended) + "); " + BULK_ZERO_MARKER;
            for (int line : absorbed) remove[line] = true;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        List<String> output = new ArrayList<>();
        for (int index = 0; index < lines.length; index++)
            if (!remove[index]) output.add(lines[index]);
        return new NormalizedCode(String.join(System.lineSeparator(), output), replacements);
    }

    private FixedZeroStore fixedZeroStore(String line, String pointer, long base) {
        Pattern pattern = Pattern.compile("^[ \\t]*\\*\\(undefined(?<width>[1248])[ \\t]*\\*\\)" +
            "(?:(?<direct>" + Pattern.quote(pointer) + ")|" +
            "\\(\\(int\\)" + Pattern.quote(pointer) +
            "(?:[ \\t]*\\+[ \\t]*(?<offset>0x[0-9A-Fa-f]+|[0-9]+))?\\))" +
            "[ \\t]*=[ \\t]*0;[ \\t]*$");
        Matcher matcher = pattern.matcher(line);
        if (!matcher.matches()) return null;
        long relative = matcher.group("offset") == null ? 0 :
            parseIntegerLiteral(matcher.group("offset"));
        int width = Integer.parseInt(matcher.group("width"));
        return relative < 0 ? null : new FixedZeroStore(base + relative, width);
    }

    private boolean directAssignmentTo(String line, String identifier) {
        return Pattern.compile("^[ \\t]*" + Pattern.quote(identifier) +
            "[ \\t]*=(?!=)").matcher(line).find();
    }

    private long parseIntegerLiteral(String value) {
        try {
            return value.regionMatches(true, 0, "0x", 0, 2) ?
                Long.parseUnsignedLong(value.substring(2), 16) : Long.parseLong(value);
        }
        catch (RuntimeException exception) { return -1; }
    }

    /**
     * Dynamic allocation sizes produce the same REP STOSD/REP STOSB pair as
     * fixed object tails, but the fill length is a variable.  Fold only the
     * exact two-loop form.  When the advanced pointer or exhausted counters are
     * live, reproduce their exact post-loop values after memset.
     */
    private NormalizedCode normalizeDynamicBulkZeroLoops(String code,
            Set<String> deadLocals) {
        if (code == null || code.isEmpty() || !code.contains(">> 2") ||
                !code.contains("& 3"))
            return new NormalizedCode(code, 0);
        String[] lines = code.split("\\R", -1);
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        List<String> output = new ArrayList<>();
        Set<String> bytePointers = new LinkedHashSet<>();
        int replacements = 0;
        for (int index = 0; index < lines.length; index++) {
            Matcher words = BULK_COPY_WORD_HEADER.matcher(lines[index]);
            if (!words.matches() || index + 7 >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            String indent = words.group("indent");
            String wordCounter = words.group("counter");
            String byteCount = words.group("bytes");
            ZeroLoopBody wordBody = zeroBody(lines, index + 1, 4,
                declarations, false);
            if (wordBody == null) {
                output.add(lines[index]);
                continue;
            }
            String pointer = wordBody.pointer;
            int wordClose = index + wordBody.lineCount + 1;
            int tailHeaderIndex = wordClose + 1;
            if (tailHeaderIndex >= lines.length) {
                output.add(lines[index]);
                continue;
            }
            Matcher tail =
                BULK_COPY_TAIL_HEADER.matcher(lines[tailHeaderIndex]);
            ZeroLoopBody tailBody = zeroBody(lines, tailHeaderIndex + 1, 1,
                declarations, true);
            if (tailBody == null) {
                output.add(lines[index]);
                continue;
            }
            String bytePointer = tailBody.pointer;
            int tailClose = tailHeaderIndex + tailBody.lineCount + 1;
            boolean exact = tailClose < lines.length &&
                !wordCounter.equals(byteCount) &&
                pointer.equals(bytePointer) &&
                lines[wordClose].equals(indent + "}") &&
                tail.matches() && tail.group("indent").equals(indent) &&
                tail.group("bytes").equals(byteCount) &&
                lines[tailClose].equals(indent + "}");
            if (!exact) {
                output.add(lines[index]);
                continue;
            }
            String tailCounter = tail.group("counter");
            String after = String.join(System.lineSeparator(),
                Arrays.copyOfRange(lines, tailClose + 1, lines.length));
            boolean pointerLive = identifierValueLiveAfter(after, pointer, 0,
                indent.length());
            boolean wordCounterLive = identifierValueLiveAfter(after,
                wordCounter, 0, indent.length());
            boolean tailCounterLive = identifierValueLiveAfter(after,
                tailCounter, 0, indent.length());
            PointerDeclaration declaration = declarations.get(pointer);
            if (pointerLive && declaration == null) {
                output.add(lines[index]);
                continue;
            }
            output.add(indent + "memset(" + pointer + ", 0, " +
                byteCount + "); " + BULK_ZERO_MARKER);
            if (pointerLive)
                output.add(pointerAdvance(indent, pointer, declaration,
                    byteCount));
            if (wordCounterLive)
                output.add(indent + wordCounter + " = 0;");
            else deadLocals.add(wordCounter);
            if (!tailCounter.equals(wordCounter)) {
                if (tailCounterLive)
                    output.add(indent + tailCounter + " = 0;");
                else if (!tailCounter.equals(byteCount))
                    deadLocals.add(tailCounter);
            }
            if (!pointerLive && declaration != null &&
                    declaration.width == 4 &&
                    declaration.type.trim().equals("undefined4"))
                bytePointers.add(pointer);
            index = tailClose;
            replacements++;
        }
        if (replacements == 0) return new NormalizedCode(code, 0);
        String normalized = String.join(System.lineSeparator(), output);
        for (String pointer : bytePointers)
            normalized = normalizeBulkCopyBytePointer(normalized, pointer);
        return new NormalizedCode(normalized, replacements);
    }

    private ZeroLoopBody zeroBody(String[] lines, int start, int width,
            Map<String, PointerDeclaration> declarations,
            boolean byteIncrement) {
        if (start < 0 || start + 1 >= lines.length) return null;
        String pointer = zeroStatement(lines[start].trim(), width,
            declarations);
        String increment = incrementedPointer(lines[start + 1].trim(),
            byteIncrement);
        if (pointer != null && pointer.equals(increment))
            return new ZeroLoopBody(pointer, 2);
        if (width != 4 || start + 4 >= lines.length) return null;

        String bytePointer = null;
        for (int offset = 0; offset < 4; offset++) {
            Matcher store =
                BYTE_ZERO_ELEMENT.matcher(lines[start + offset].trim());
            if (!store.matches() ||
                    Integer.parseInt(store.group("index")) != offset ||
                    (bytePointer != null &&
                        !bytePointer.equals(store.group("name"))))
                return null;
            bytePointer = store.group("name");
        }
        Matcher advance = BYTE_POINTER_INCREMENT_FOUR.matcher(
            lines[start + 4].trim());
        PointerDeclaration declaration = declarations.get(bytePointer);
        return bytePointer != null && advance.matches() &&
            advance.group("name").equals(bytePointer) &&
            declaration != null && declaration.width == 1 ?
                new ZeroLoopBody(bytePointer, 5) : null;
    }

    private String zeroStatement(String statement, int width,
            Map<String, PointerDeclaration> declarations) {
        Matcher assignment = Pattern.compile(
            "^(.+?)[ \\t]*=[ \\t]*(?:\\([^)]*\\)[ \\t]*)?0;$")
            .matcher(statement);
        return assignment.matches() ?
            dereferencedVariable(assignment.group(1), width, declarations) :
            null;
    }

    private NormalizedCode normalizeBulkZeroPattern(String code, Pattern pattern,
            Set<String> candidates, boolean nullSelect) {
        Matcher matcher = pattern.matcher(code);
        StringBuffer output = new StringBuffer();
        int replacements = 0;
        while (matcher.find()) {
            long count;
            try {
                String countText = matcher.group("count");
                count = countText.regionMatches(true, 0, "0x", 0, 2) ?
                    Long.parseUnsignedLong(countText.substring(2), 16) :
                    Long.parseLong(countText);
            }
            catch (RuntimeException exception) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            long tail = 0;
            String tailText = matcher.group("tail");
            if (tailText != null) tail = Long.parseLong(tailText);
            long bytes;
            try {
                bytes = Math.addExact(Math.multiplyExact(count, 4L), tail);
            }
            catch (ArithmeticException exception) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }
            if (bytes <= 0 || bytes > 0x1000000L) {
                matcher.appendReplacement(output, Matcher.quoteReplacement(matcher.group()));
                continue;
            }

            String indent = matcher.group("indent");
            String pointer = matcher.group("pointer");
            String counter = matcher.group("counter");
            String rawTarget = matcher.group("target").trim();
            String target = bulkZeroTarget(rawTarget);
            boolean pointerLiveAfter = identifierValueLiveAfter(
                code, pointer, matcher.end(), indent.length());
            boolean counterLiveAfter = identifierValueLiveAfter(
                code, counter, matcher.end(), indent.length());
            StringBuilder replacement = new StringBuilder();
            if (pointerLiveAfter) {
                if (nullSelect) {
                    // Preserve the explicit nullable selection if later code uses
                    // the advanced temporary.  Constructors normally take the
                    // cleaner target-only path below because `this` cannot be null.
                    String prefix = matcher.group().substring(0,
                        matcher.group().indexOf(indent + "for"));
                    replacement.append(prefix);
                }
                else {
                    replacement.append(indent).append(pointer).append(" = ")
                        .append(rawTarget).append(';').append(System.lineSeparator());
                }
                replacement.append(indent).append("memset(").append(pointer)
                    .append(", 0, ").append(hexLiteral(bytes)).append("); ")
                    .append(BULK_ZERO_MARKER).append(System.lineSeparator());
                replacement.append(indent).append(pointer)
                    .append(" = (undefined4 *)((byte *)").append(pointer)
                    .append(" + ").append(hexLiteral(count * 4L)).append(");");
            }
            else {
                replacement.append(indent).append("memset(").append(target)
                    .append(", 0, ").append(hexLiteral(bytes)).append("); ")
                    .append(BULK_ZERO_MARKER);
                candidates.add(pointer);
            }
            if (counterLiveAfter) {
                replacement.append(System.lineSeparator()).append(indent)
                    .append(counter).append(" = 0;");
            }
            else candidates.add(counter);
            matcher.appendReplacement(output, Matcher.quoteReplacement(replacement.toString()));
            replacements++;
        }
        matcher.appendTail(output);
        return new NormalizedCode(output.toString(), replacements);
    }

    private boolean identifierOccurs(String text, String identifier, int start, int end) {
        Matcher matcher = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(identifier) + "(?![A-Za-z0-9_$])").matcher(text);
        matcher.region(Math.max(0, start), Math.min(text.length(), end));
        return matcher.find();
    }

    private boolean identifierValueLiveAfter(String text, String identifier, int start,
            int sourceIndent) {
        Pattern token = Pattern.compile("(?<![A-Za-z0-9_$])" +
            Pattern.quote(identifier) + "(?![A-Za-z0-9_$])");
        Matcher occurrence = token.matcher(text);
        occurrence.region(Math.max(0, start), text.length());
        if (!occurrence.find()) return false;
        String intervening = text.substring(Math.max(0, start), occurrence.start());
        for (String line : intervening.split("\\R", -1)) {
            String stripped = line.stripLeading();
            int indent = line.length() - stripped.length();
            if (indent <= sourceIndent && stripped.matches("return(?:\\s+[^;]*)?;\\s*"))
                return false;
        }
        int lineStart = text.lastIndexOf('\n', occurrence.start()) + 1;
        int lineEnd = text.indexOf('\n', occurrence.end());
        if (lineEnd < 0) lineEnd = text.length();
        String line = text.substring(lineStart, lineEnd);
        Matcher assignment = Pattern.compile("^[ \\t]*" + Pattern.quote(identifier) +
            "[ \\t]*=(?!=)").matcher(line);
        if (!assignment.find()) return true;
        // A plain later definition kills the value left by the zeroing loop.  If
        // the right-hand side mentions the temporary, it is still a live read.
        return token.matcher(line.substring(assignment.end())).find();
    }

    private String removeDeadBulkZeroLocals(String code, Set<String> candidates) {
        String result = code;
        for (String candidate : candidates) {
            Pattern declaration = Pattern.compile(
                "(?m)^[ \\t]+(?:int|uint|long|ulong|undefined4)[ \\t]+\\*?[ \\t]*" +
                Pattern.quote(candidate) + "[ \\t]*;[ \\t]*(?:\\R|$)");
            Matcher matcher = declaration.matcher(result);
            if (!matcher.find()) continue;
            String withoutDeclaration = result.substring(0, matcher.start()) +
                result.substring(matcher.end());
            if (!identifierOccurs(withoutDeclaration, candidate, 0, withoutDeclaration.length()))
                result = withoutDeclaration;
        }
        return result;
    }

    private String bulkZeroTarget(String target) {
        Matcher address = Pattern.compile(
            "^\\(undefined4[ \\t]*\\*\\)[ \\t]*&(.+)$").matcher(target);
        if (address.matches()) return "&" + address.group(1).trim();
        Matcher cast = Pattern.compile(
            "^\\(undefined4[ \\t]*\\*\\)[ \\t]*(.+)$").matcher(target);
        if (cast.matches()) return "(void *)" + cast.group(1).trim();
        return target;
    }

    private String hexLiteral(long value) {
        return "0x" + Long.toHexString(value);
    }

    /**
     * Ghidra deliberately emits a symbol instead of a quoted string when the PE
     * memory block is writable, even if the bytes are defined as a string and flow
     * to a char pointer.  ST stores immutable diagnostics in such a block beside
     * genuinely mutable globals, so changing the block permissions would corrupt
     * analysis.  For the text corpus, inline every referenced, NUL-terminated string
     * which has no write reference.  Address-stable metadata retains the symbol.
     *
     * Very short printf formats are accepted before the
     * debug-string applier has retyped them.  Replacements are lexical: comments,
     * existing string/character literals, and larger identifiers are untouched.
     */
    private String literalizeReferencedStrings(Function function, String code) {
        if (code == null || code.isEmpty()) return code;
        Map<String, String> literals = referencedStringLiterals(function);
        if (literals.isEmpty()) return code;
        StringBuilder output = new StringBuilder();
        boolean string = false, character = false, lineComment = false;
        boolean blockComment = false, escaped = false;
        for (int index = 0; index < code.length();) {
            char ch = code.charAt(index);
            char next = index + 1 < code.length() ? code.charAt(index + 1) : '\0';
            if (lineComment) {
                output.append(ch); index++;
                if (ch == '\n') lineComment = false;
                continue;
            }
            if (blockComment) {
                output.append(ch); index++;
                if (ch == '*' && next == '/') {
                    output.append('/'); index++; blockComment = false;
                }
                continue;
            }
            if (string || character) {
                output.append(ch); index++;
                if (escaped) escaped = false;
                else if (ch == '\\') escaped = true;
                else if (string && ch == '"') string = false;
                else if (character && ch == '\'') character = false;
                continue;
            }
            if (ch == '/' && next == '/') {
                output.append("//"); index += 2; lineComment = true; continue;
            }
            if (ch == '/' && next == '*') {
                output.append("/*"); index += 2; blockComment = true; continue;
            }
            if (ch == '"') { output.append(ch); index++; string = true; continue; }
            if (ch == '\'') { output.append(ch); index++; character = true; continue; }

            int ampersand = ch == '&' ? index : -1;
            int start = ampersand >= 0 ? index + 1 : index;
            while (ampersand >= 0 && start < code.length() &&
                    Character.isWhitespace(code.charAt(start))) start++;
            if (start < code.length() && identifierStart(code.charAt(start))) {
                int end = qualifiedIdentifierEnd(code, start);
                String literal = literals.get(code.substring(start, end));
                if (literal != null) {
                    output.append(literal); index = end; continue;
                }
                if (ampersand < 0) {
                    output.append(code, start, end); index = end; continue;
                }
            }
            output.append(ch); index++;
        }
        return output.toString();
    }

    private Map<String, String> referencedStringLiterals(Function function) {
        Map<String, String> result = new LinkedHashMap<>();
        CodeUnitIterator units = listing.getCodeUnits(function.getBody(), true);
        while (units.hasNext()) {
            Address from = units.next().getMinAddress();
            for (Reference reference : references.getReferencesFrom(from)) {
                Address to = reference.getToAddress();
                if (to == null || !to.isMemoryAddress()) continue;
                Data data = listing.getDataContaining(to);
                if (data == null || !to.equals(data.getMinAddress())) continue;
                if (!data.hasStringValue() && !rawStringStorage(data.getDataType())) continue;
                String value = data.hasStringValue() && data.getValue() instanceof String ?
                    (String)data.getValue() : asciiCString(data.getMinAddress(), 128);
                if (value == null || value.isEmpty()) continue;
                if (!data.hasStringValue() && !value.contains("%")) continue;
                if (hasWriteReference(data)) continue;
                Symbol symbol = symbols.getPrimarySymbol(data.getMinAddress());
                if (symbol == null) continue;
                String literal = cString(value);
                putLiteralName(result, symbol.getName(), literal);
                putLiteralName(result, symbol.getName(true), literal);
                putLiteralName(result, decompilerIdentifier(symbol.getName()), literal);
                putLiteralName(result, decompilerIdentifier(symbol.getName(true)), literal);
            }
        }
        result.values().removeIf(value -> value == null);
        return result;
    }

    /**
     * A vtable or packed record can begin with bytes which accidentally decode as a tiny
     * printf string.  Raw literal recovery is valid only for scalar byte/char/undefined
     * storage; structured, pointer, array, enum, and callable data retain their symbol.
     */
    private boolean rawStringStorage(DataType type) {
        DataType current = type;
        Set<String> seen = new HashSet<>();
        while (current instanceof ghidra.program.model.data.TypeDef typedef &&
                seen.add(current.getPathName())) current = typedef.getBaseDataType();
        String name = current == null ? "" : current.getName().toLowerCase(Locale.ROOT);
        return name.equals("char") || name.equals("signed char") ||
            name.equals("unsigned char") || name.equals("byte") ||
            name.startsWith("undefined");
    }

    private String compositeStringCandidateFingerprint(Function function) {
        Set<String> rows = new TreeSet<>();
        CodeUnitIterator units = listing.getCodeUnits(function.getBody(), true);
        while (units.hasNext()) {
            Address from = units.next().getMinAddress();
            for (Reference reference : references.getReferencesFrom(from)) {
                Address to = reference.getToAddress();
                if (to == null || !to.isMemoryAddress()) continue;
                Data data = listing.getDataContaining(to);
                if (data == null || !to.equals(data.getMinAddress()) ||
                        data.hasStringValue() || rawStringStorage(data.getDataType())) continue;
                String value = asciiCString(data.getMinAddress(), 128);
                if (value == null || !value.contains("%")) continue;
                rows.add("structured_raw_string_rejected_v1\u0000" +
                    addr(data.getMinAddress()) + "\u0000" + data.getDataType().getPathName());
            }
        }
        return String.join("\n", rows);
    }

    private void putLiteralName(Map<String, String> literals, String name, String literal) {
        if (name == null || name.isBlank()) return;
        String old = literals.get(name);
        if (old == null && !literals.containsKey(name)) literals.put(name, literal);
        else if (!literal.equals(old)) literals.put(name, null); // ambiguous unqualified name
    }

    private boolean hasWriteReference(Data data) {
        int length = Math.max(1, data.getLength());
        for (int offset = 0; offset < length; offset++) {
            ReferenceIterator iterator = references.getReferencesTo(data.getMinAddress().add(offset));
            while (iterator.hasNext())
                if (iterator.next().getReferenceType().isWrite()) return true;
        }
        return false;
    }

    private boolean identifierStart(char value) {
        return Character.isLetter(value) || value == '_' || value == '$';
    }

    private boolean identifierPart(char value) {
        return Character.isLetterOrDigit(value) || value == '_' || value == '$';
    }

    private int qualifiedIdentifierEnd(String text, int start) {
        int end = start + 1;
        while (true) {
            while (end < text.length() && identifierPart(text.charAt(end))) end++;
            if (end + 2 >= text.length() || text.charAt(end) != ':' ||
                    text.charAt(end + 1) != ':' || !identifierStart(text.charAt(end + 2)))
                return end;
            end += 3;
        }
    }

    private String decompilerIdentifier(String value) {
        StringBuilder result = new StringBuilder();
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            result.append(Character.isLetterOrDigit(ch) || ch == '_' || ch == '$' ? ch : '_');
        }
        return result.toString();
    }

    private String asciiCString(Address address, int maximum) {
        StringBuilder value = new StringBuilder();
        try {
            for (int index = 0; index < maximum; index++) {
                int item = currentProgram.getMemory().getByte(address.add(index)) & 0xff;
                if (item == 0) return value.toString();
                if (item < 0x20 || item > 0x7e) return null;
                value.append((char)item);
            }
        }
        catch (Exception ignored) { }
        return null;
    }

    private String cString(String value) {
        StringBuilder result = new StringBuilder("\"");
        for (int index = 0; index < value.length(); index++) {
            char ch = value.charAt(index);
            switch (ch) {
                case '\\' -> result.append("\\\\");
                case '"' -> result.append("\\\"");
                case '\n' -> result.append("\\n");
                case '\r' -> result.append("\\r");
                case '\t' -> result.append("\\t");
                default -> {
                    if (ch < 0x20 || ch == 0x7f)
                        result.append(String.format("\\x%02X", (int)ch));
                    else result.append(ch);
                }
            }
        }
        return result.append('"').toString();
    }

    private String annotatePseudocode(Function function, String code) {
        if (code == null || code.isEmpty()) return "";
        Set<String> reusedParameters = new HashSet<>(reusedParameterNames(function));
        String[] lines = code.split("\\R", -1);
        List<String> clean = new ArrayList<>();
        boolean needsRuntime = needsPseudocodeRuntime(code);
        boolean hasRuntimeInclude = false;
        for (String line : lines) {
            if (line.contains(PSEUDOCODE_COMMENT_MARKER)) continue;
            if (line.strip().equals(PSEUDOCODE_RUNTIME_INCLUDE)) {
                if (needsRuntime) {
                    clean.add(PSEUDOCODE_RUNTIME_INCLUDE);
                    hasRuntimeInclude = true;
                }
                continue;
            }
            clean.add(line.stripTrailing());
        }
        List<String> output = new ArrayList<>();
        int coveredUntil = -1;
        for (int index = 0; index < clean.size(); index++) {
            String line = clean.get(index);
            String stripped = line.stripLeading();
            if (stripped.isBlank() || stripped.startsWith("/*") || stripped.startsWith("*") ||
                    stripped.startsWith("//") || stripped.startsWith("#")) {
                output.add(line);
                continue;
            }
            // Export-owned hints are regenerated from the current logical C
            // statement.  A bounded forward window catches expressions which
            // Ghidra wrapped across several physical lines.
            StatementWindow statement = statementWindow(clean, index);
            List<String> kinds = index <= coveredUntil ? new ArrayList<>() :
                lineIdiomKinds(statement.text, reusedParameters);
            kinds.remove("terminal_debug_trap");
            if (!kinds.isEmpty()) {
                String indent = line.substring(0, line.length() - line.stripLeading().length());
                List<String> suggestions = new ArrayList<>();
                for (String kind : kinds) suggestions.add(inlineTransform(kind, statement.text));
                output.add(indent + PSEUDOCODE_COMMENT_MARKER + String.join(",", kinds) +
                    "]: " + String.join("; ", suggestions) + " */");
                coveredUntil = statement.endIndex;
            }
            output.add(line);
        }
        if (needsRuntime && !hasRuntimeInclude) {
            output.add(0, "");
            output.add(0, PSEUDOCODE_RUNTIME_INCLUDE);
        }
        return String.join(System.lineSeparator(), output);
    }

    private boolean needsPseudocodeRuntime(String code) {
        if (code == null || code.isEmpty()) return false;
        return code.contains("STDebugBreak()") || code.contains(BULK_ZERO_MARKER) ||
            code.contains(BULK_COPY_MARKER) || code.contains("DArrayAt<") ||
            code.contains("STBitTest(") || code.contains("STBitSet(") ||
            code.contains("STBitClear(") ||
            code.contains("STSignedDiv4(") || code.contains("STRoundFixed16(") ||
            code.contains("STGridAt3D(") || code.contains("STPiece<") ||
            code.contains("STLiteralPiece<") ||
            code.contains("STField<") ||
            code.contains("STObjectAtByteOffset(") ||
            code.contains("STRecordByteAddress(") ||
            code.contains("STReplaceLowByte(") ||
            code.contains("STReplaceLowByte16(") ||
            code.contains("STReplaceLowWord(") ||
            code.contains("STPackTagged24(") ||
            code.contains("STBiasedDiv16(") ||
            code.matches("(?s).*\\b(?:undefined(?:[0-9]+)?|int3|uint3|float10|" +
                "unkbyte10|longlong|ulonglong|code)\\b.*") ||
            code.matches("(?s).*\\b(?:CONCAT|SUB|CARRY|SCARRY|SBORROW|SEXT)[0-9]+\\s*\\(.*") ||
            code.matches("(?s).*\\b(?:fsin|fcos|fpatan)\\s*\\(.*") ||
            code.matches("(?s).*\\b__(?:thiscall|stdcall|cdecl|fastcall)\\b.*");
    }

    private void catalogPseudocodeIdioms(Function function, String code) {
        Map<String, IdiomEvidence> evidence = new LinkedHashMap<>();
        String[] lines = code == null ? new String[0] : code.split("\\R", -1);
        List<String> finalLines = List.of(lines);
        for (int index = 0; index < lines.length; index++) {
            String line = lines[index];
            if (line.contains(PSEUDOCODE_COMMENT_MARKER)) {
                int start = line.indexOf(PSEUDOCODE_COMMENT_MARKER) +
                    PSEUDOCODE_COMMENT_MARKER.length();
                int end = line.indexOf("]:", start);
                if (end > start && index + 1 < lines.length) {
                    StatementWindow statement = statementWindow(finalLines, index + 1);
                    for (String kind : line.substring(start, end).split(",", -1))
                        if (!kind.isBlank())
                            addIdiom(evidence, kind, index + 2, statement.text);
                }
                continue;
            }
            if (line.contains("STDebugBreak()"))
                addIdiom(evidence, "terminal_debug_trap", index + 1, line);
            if (line.contains(BULK_ZERO_MARKER))
                addIdiom(evidence, "bulk_zero_initialization", index + 1, line);
            if (line.contains(BULK_COPY_MARKER))
                addIdiom(evidence, "bulk_byte_copy", index + 1, line);
            if (line.contains(STACK_SLOT_SPLIT_MARKER) ||
                    line.contains(OUTPUT_CALL_SLOT_SPLIT_MARKER))
                addIdiom(evidence, "stack_slot_reuse", index + 1, line);
            if (line.contains("DArrayAt<"))
                addIdiom(evidence, "dynamic_array_indexing", index + 1, line);
        }

        // The instruction listing is authoritative even when an older reused body
        // was already normalized by a previous export.
        List<String> int3Addresses = int3Addresses(function);
        if (!int3Addresses.isEmpty() && !evidence.containsKey("terminal_debug_trap"))
            addIdiom(evidence, "terminal_debug_trap", 0,
                "machine code contains terminal INT3; no decompiler body was available");

        if (evidence.isEmpty()) return;
        pseudocodeIdiomFunctions.add(addr(function.getEntryPoint()));
        for (Map.Entry<String, IdiomEvidence> item : evidence.entrySet()) {
            String kind = item.getKey();
            IdiomEvidence value = item.getValue();
            boolean normalizedSite =
                (kind.equals("terminal_debug_trap") && code != null &&
                    code.contains("STDebugBreak()")) ||
                (kind.equals("bulk_zero_initialization") && code != null &&
                    code.contains(BULK_ZERO_MARKER)) ||
                (kind.equals("bulk_byte_copy") && code != null &&
                    code.contains(BULK_COPY_MARKER)) ||
                (kind.equals("stack_slot_reuse") && code != null &&
                    (code.contains(STACK_SLOT_SPLIT_MARKER) ||
                     code.contains(OUTPUT_CALL_SLOT_SPLIT_MARKER))) ||
                (kind.equals("dynamic_array_indexing") && code != null &&
                    code.contains("DArrayAt<"));
            if (normalizedSite) pseudocodeNormalizationCount += value.occurrences;
            String status = normalizedSite ? "normalized" : "catalogued";
            List<String> hints = new TreeSet<>(value.addressHints).stream().toList();
            if (kind.equals("terminal_debug_trap")) hints = int3Addresses;
            pseudocodeIdiomRows.add(jsonObject(
                field("function_address", addr(function.getEntryPoint())),
                field("function_name", function.getName(true)),
                field("source_file", "functions/" + addr(function.getEntryPoint()) + "/decomp.c"),
                field("kind", kind),
                field("status", status),
                rawField("occurrences", Integer.toString(value.occurrences)),
                rawField("lines", integerArray(value.lines)),
                rawField("excerpts", jsonStringArray(value.excerpts)),
                field("intended_transform", intendedTransform(kind)),
                rawField("metadata", jsonObject(
                    rawField("address_hints", jsonStringArray(hints)),
                    field("detector", detector(kind))
                ))
            ));
        }
    }

    /**
     * Produce a corpus-wide quality inventory independently of the narrower
     * pseudocode-idiom catalogue.  These records deliberately include unresolved
     * naming/type debt (field_*, DAT_*, AnonShape_*) which is valid C but still poor
     * decompilation.  One JSONL row represents one issue kind in one function.
     */
    private void catalogQualityIssues(Function function, String code) {
        Map<String, QualityEvidence> evidence = new LinkedHashMap<>();
        Set<String> reusedParameters = new HashSet<>(reusedParameterNames(function));
        Map<String, PointerDeclaration> pointerDeclarations = pointerDeclarations(code);
        String[] lines = code == null ? new String[0] : code.split("\\R", -1);
        for (int index = 0; index < lines.length; index++) {
            String line = lines[index];
            String stripped = line.stripLeading();
            if (line.contains("ST_PSEUDO[roundtrip_call_presentation_failure]"))
                addQuality(evidence, "roundtrip_call_presentation_failure", 1,
                    index + 1, line);
            if (line.contains(PSEUDOCODE_COMMENT_MARKER) || stripped.startsWith("/*") ||
                    stripped.startsWith("*") || stripped.startsWith("*/") ||
                    stripped.startsWith("//") || stripped.startsWith("#")) continue;
            if (STRING_BASED_AGGREGATE.matcher(line).find())
                addQualityMatches(evidence, "string_based_aggregate_address",
                    RESIDUAL_STRING_SYMBOL, line, index + 1);
            else addQualityMatches(evidence, "unexpanded_string_symbol",
                RESIDUAL_STRING_SYMBOL, line, index + 1);
            addQualityMatches(evidence, "casted_generic_field",
                RESIDUAL_CASTED_FIELD, line, index + 1);
            addQualityMatches(evidence, "generic_global_aggregate",
                RESIDUAL_GLOBAL_AGGREGATE, line, index + 1);
            addQualityMatches(evidence, "generic_field_name",
                RESIDUAL_GENERIC_FIELD, line, index + 1);
            addQualityMatches(evidence, "anonymous_shape_type",
                RESIDUAL_ANONYMOUS_SHAPE, line, index + 1);
            addQualityMatches(evidence, "generic_data_symbol",
                RESIDUAL_GENERIC_DATA, line, index + 1);
            addQualityMatches(evidence, "undefined_type",
                RESIDUAL_UNDEFINED_TYPE, line, index + 1);
            addQualityMatches(evidence, "generic_undefined_declaration",
                GENERIC_UNDEFINED_DECLARATION, line, index + 1);
            addQualityMatches(evidence, "casted_call_result",
                CASTED_CALL_RESULT, line, index + 1);
            addQualityMatches(evidence, "control_flow_label",
                RESIDUAL_CONTROL_FLOW, line, index + 1);
            addQualityMatches(evidence, "generated_enum_bitwise_composition",
                GENERATED_ENUM_COMPOSITION, line, index + 1);
            addQualityMatches(evidence, "raw_indirect_call",
                RAW_INDIRECT_CALL, line, index + 1);
            Matcher typedDispatch = EXPLICIT_TYPED_VTABLE_DISPATCH.matcher(line);
            while (typedDispatch.find()) {
                Matcher slot = EXPLICIT_THIS_VIRTUAL_CALL.matcher(typedDispatch.group());
                if (slot.find() && receiverAwareVtableSlot(pointerDeclarations,
                        slot.group(1), slot.group(2)))
                    addQuality(evidence, "explicit_typed_vtable_dispatch", 1,
                        index + 1, line);
            }
            addQualityMatches(evidence, "degraded_exact_indirect_call",
                DEGRADED_EXACT_INDIRECT_CALL, line, index + 1);
            addQualityMatches(evidence, "excessive_pointer_depth",
                EXCESSIVE_POINTER_DEPTH, line, index + 1);
            addQualityMatches(evidence, "nullptr_deduced_local",
                NULLPTR_DEDUCED_LOCAL, line, index + 1);
            addQualityMatches(evidence, "nullptr_switch_case",
                NULLPTR_SWITCH_CASE, line, index + 1);
            addQualityMatches(evidence, "packed_or_unaligned_piece",
                PACKED_PIECE, line, index + 1);
            if (containsSuspiciousSubnormal(line))
                addQuality(evidence, "suspicious_subnormal_literal", 1,
                    index + 1, line);
            addQualityMatches(evidence, "raw_pointer_offset",
                RAW_OFFSET_DEREFERENCE, line, index + 1);
            if (line.matches(".*\\b(?:unaff_|in_)[A-Za-z0-9_]+.*"))
                addQuality(evidence, "unresolved_register_input", 1, index + 1, line);
            // A declaration and its use are not two independent failures. More
            // importantly, extraout_EDX/ECX/... is not an EAX return-width fact:
            // it is Ghidra preserving a caller-visible volatile-register piece
            // across a call. Keep that SSA/clobber debt visible, but do not let
            // a corrected callee return type manufacture a false ABI regression.
            if (hasLiveExtraoutUse(line, stripped)) {
                if (hasReturnRegisterExtraout(line))
                    addQuality(evidence, "return_width_artifact", 1,
                        index + 1, line);
                if (hasVolatileRegisterExtraout(line))
                    addQuality(evidence, "call_clobber_piece", 1,
                        index + 1, line);
            }
            if ((line.contains("->elementSize") || line.contains(".elementSize")) &&
                    (line.contains("->data") || line.contains(".data")))
                addQuality(evidence, "dynamic_array_indexing", 1, index + 1, line);
            if (containsRecoveredGlobalRecordStride(line))
                addQuality(evidence, "flattened_global_record_array", 1, index + 1, line);
            Matcher assignment = PARAMETER_ASSIGNMENT.matcher(line);
            while (assignment.find()) {
                String name = assignment.group(1).replaceFirst("^_", "");
                if (reusedParameters.contains(name)) {
                    addQuality(evidence, "stack_slot_reuse", 1, index + 1, line);
                    reusedParameters.remove(name);
                    break;
                }
            }
        }
        if (containsOutputCallScalarAlias(code))
            addQuality(evidence, "output_call_scalar_alias", 1, 1,
                "integer local aliases a pointer-valued output-call stack-slot lifetime");
        // The legacy casted_call_result inventory is deliberately retained for
        // corpus compatibility, but it scans one rendered line at a time.  A
        // harmless decompiler wrapping change can therefore turn an existing
        // cast into an apparent new occurrence.  Record a canonical companion
        // over comment-free logical text so the regression gate compares the
        // same expression regardless of line wrapping or inserted ST_CALLSITE
        // comments.  Newlines are preserved to retain an exact source line.
        StringBuilder canonicalCode = new StringBuilder(code == null ? 0 : code.length());
        for (String line : lines) {
            String stripped = line.stripLeading();
            if (line.contains(PSEUDOCODE_COMMENT_MARKER) || stripped.startsWith("/*") ||
                    stripped.startsWith("*") || stripped.startsWith("*/") ||
                    stripped.startsWith("//") || stripped.startsWith("#")) {
                canonicalCode.append('\n');
            }
            else canonicalCode.append(line).append('\n');
        }
        Matcher canonicalCasts = CASTED_CALL_RESULT.matcher(canonicalCode);
        int previousStart = 0;
        int currentLine = 1;
        while (canonicalCasts.find()) {
            for (int i = previousStart; i < canonicalCasts.start(); i++)
                if (canonicalCode.charAt(i) == '\n') currentLine++;
            previousStart = canonicalCasts.start();
            addQuality(evidence, "canonical_casted_call_result", 1, currentLine,
                canonicalCasts.group().replaceAll("\\s+", " ").strip());
        }
        if (evidence.isEmpty()) return;
        String functionAddress = addr(function.getEntryPoint());
        qualityIssueFunctions.add(functionAddress);
        for (Map.Entry<String, QualityEvidence> item : evidence.entrySet()) {
            String kind = item.getKey();
            QualityEvidence value = item.getValue();
            qualityIssueRows.add(jsonObject(
                field("function_address", functionAddress),
                field("function_name", function.getName(true)),
                field("source_file", "functions/" + functionAddress + "/decomp.c"),
                field("kind", kind),
                field("severity", qualitySeverity(kind)),
                field("quality_stage", qualityStage(kind)),
                field("regression_policy", qualityRegressionPolicy(kind)),
                rawField("occurrences", Integer.toString(value.occurrences)),
                rawField("lines", integerArray(value.lines)),
                rawField("excerpts", jsonStringArray(value.excerpts)),
                field("recommended_resolution", qualityResolution(kind))
            ));
            QualityAggregate aggregate = qualityAggregates.computeIfAbsent(kind,
                ignored -> new QualityAggregate());
            aggregate.functions++;
            aggregate.occurrences += value.occurrences;
        }
    }

    private boolean containsOutputCallScalarAlias(String code) {
        if (code == null || !code.contains(OUTPUT_CALL_SLOT_SPLIT_MARKER)) return false;
        Pattern declaration = Pattern.compile(
            "(?m)^\\s*(?:int|uint|undefined4)\\s+" +
            "(?<alias>[A-Za-z_$][A-Za-z0-9_$]*)\\s*;\\s*$");
        Matcher declarations = declaration.matcher(code);
        while (declarations.find()) {
            String alias = declarations.group("alias");
            Matcher assignment = Pattern.compile("(?m)^\\s*" + Pattern.quote(alias) +
                "\\s*=\\s*param_[0-9]+\\s*;\\s*$").matcher(code);
            assignment.region(declarations.end(), code.length());
            while (assignment.find()) {
                if (hasFixedPointerOffsetUse(code.substring(assignment.end()), alias)) return true;
            }
        }
        return false;
    }

    private void addQualityMatches(Map<String, QualityEvidence> evidence, String kind,
            Pattern pattern, String line, int lineNumber) {
        Matcher matcher = pattern.matcher(line);
        int count = 0;
        while (matcher.find()) count++;
        if (count > 0) addQuality(evidence, kind, count, lineNumber, line);
    }

    private void addQuality(Map<String, QualityEvidence> evidence, String kind, int count,
            int lineNumber, String excerpt) {
        QualityEvidence value = evidence.computeIfAbsent(kind,
            ignored -> new QualityEvidence());
        value.occurrences += count;
        if (value.lines.size() < 24) value.lines.add(lineNumber);
        if (value.excerpts.size() < 6) value.excerpts.add(oneLine(excerpt));
    }

    private String qualitySeverity(String kind) {
        return switch (kind) {
            case "unexpanded_string_symbol", "casted_generic_field", "raw_indirect_call",
                 "unresolved_register_input", "return_width_artifact",
                 "generated_enum_bitwise_composition", "degraded_exact_indirect_call",
                 "excessive_pointer_depth", "nullptr_deduced_local",
                 "nullptr_switch_case", "generic_undefined_declaration",
                 "casted_call_result", "canonical_casted_call_result",
                 "roundtrip_call_presentation_failure", "output_call_scalar_alias" -> "high";
            case "raw_pointer_offset", "packed_or_unaligned_piece",
                 "generic_global_aggregate", "undefined_type",
                 "flattened_global_record_array", "dynamic_array_indexing",
                 "string_based_aggregate_address", "stack_slot_reuse",
                 "suspicious_subnormal_literal", "call_clobber_piece" -> "medium";
            default -> "low";
        };
    }

    private String qualityStage(String kind) {
        return switch (kind) {
            case "return_width_artifact", "unresolved_register_input" -> "abi_recovery";
            case "suspicious_subnormal_literal" -> "abi_recovery";
            case "stack_slot_reuse", "call_clobber_piece", "output_call_scalar_alias" ->
                "ssa_lifetime_presentation";
            case "nullptr_deduced_local", "nullptr_switch_case" ->
                "source_declaration_recovery";
            case "raw_indirect_call", "explicit_typed_vtable_dispatch",
                 "degraded_exact_indirect_call" -> "call_signature_recovery";
            case "casted_call_result", "canonical_casted_call_result" ->
                "call_signature_recovery";
            case "roundtrip_call_presentation_failure" ->
                "return_semantics_recovery";
            case "raw_pointer_offset", "anonymous_shape_type" -> "layout_recovery";
            case "casted_generic_field", "packed_or_unaligned_piece",
                 "dynamic_array_indexing" -> "field_type_refinement";
            case "generic_undefined_declaration" -> "general_type_recovery";
            case "generic_field_name" -> "semantic_naming_after_layout";
            case "generated_enum_bitwise_composition" -> "enum_domain_recovery";
            case "control_flow_label" -> "control_flow_presentation";
            case "generic_global_aggregate", "flattened_global_record_array",
                 "string_based_aggregate_address" -> "aggregate_recovery";
            default -> "general_type_recovery";
        };
    }

    private String qualityRegressionPolicy(String kind) {
        return switch (kind) {
            case "generated_enum_bitwise_composition", "degraded_exact_indirect_call",
                 "excessive_pointer_depth", "nullptr_deduced_local",
                 "nullptr_switch_case", "roundtrip_call_presentation_failure",
                 "output_call_scalar_alias" ->
                "strict_zero";
            case "generic_undefined_declaration" -> "nonincreasing";
            case "casted_call_result", "canonical_casted_call_result" -> "nonincreasing";
            case "generic_field_name", "casted_generic_field", "anonymous_shape_type",
                 "generic_data_symbol" -> "stage_transition";
            case "control_flow_label", "call_clobber_piece" -> "informational";
            default -> "nonincreasing";
        };
    }

    private long qualityOccurrencesForPolicy(String policy) {
        long result = 0;
        for (Map.Entry<String, QualityAggregate> item : qualityAggregates.entrySet())
            if (policy.equals(qualityRegressionPolicy(item.getKey())))
                result += item.getValue().occurrences;
        return result;
    }

    private String qualityResolution(String kind) {
        return switch (kind) {
            case "unexpanded_string_symbol" ->
                "define the immutable NUL-terminated data and let the exporter inline it; writable buffers stay symbolic";
            case "string_based_aggregate_address" ->
                "recover the adjacent record table and its index bias; the decompiler folded the table base onto a neighboring string symbol";
            case "casted_generic_field" ->
                "repair receiver/pointer-family ownership, then make the field width and signedness match the machine access";
            case "generated_enum_bitwise_composition" ->
                "grow the generated enum domain from the exact OR-composed value before applying it again";
            case "generic_global_aggregate" ->
                "recover the singleton or aggregate structure behind the global pointer and name stable semantic fields";
            case "generic_field_name" ->
                "layout is partly recovered; infer semantic name from accessors, callees, comparisons, and neighboring fields";
            case "anonymous_shape_type" ->
                "merge compatible cross-function shapes into a named type family after offset/type agreement";
            case "generic_data_symbol" ->
                "classify as scalar, string, singleton pointer, array, table, or record before assigning a semantic name";
            case "undefined_type" ->
                "recover width, signedness, pointer target, enum, or function prototype from definitions and consumers";
            case "generic_undefined_declaration" ->
                "recover the declared local, parameter, return, or pointee type; boundary casts alone are not declaration regressions";
            case "casted_call_result", "canonical_casted_call_result" ->
                "propagate the concrete return ABI or install an exact use-site override; a new pointer cast around a call is a readability regression";
            case "roundtrip_call_presentation_failure" ->
                "repair the machine-proven returned-parameter call projection; never assign the result of a source-level void helper";
            case "output_call_scalar_alias" ->
                "carry the proven output-call stack-slot lifetime through the exact local alias instead of retaining integer pointer arithmetic";
            case "control_flow_label" ->
                "restructure only after CFG/post-dominator proof; optimized shared tails may legitimately require a label";
            case "raw_indirect_call" ->
                "apply a callback or vtable-slot FunctionDefinition with the correct receiver and calling convention";
            case "explicit_typed_vtable_dispatch" ->
                "retain the explicit form only for adjusted, missing, or secondary receivers; exact duplicated receivers should render as member calls";
            case "degraded_exact_indirect_call" ->
                "restore the previously proven typed member/callback call instead of exposing the source-generator compatibility cast";
            case "excessive_pointer_depth" ->
                "split merged SSA lifetimes or recover the actual nested record; four-or-more generic pointer layers are never accepted as a readability improvement";
            case "nullptr_deduced_local" ->
                "declare the recycled stack-slot lifetime with its exact pointer view; C++ auto would incorrectly deduce std::nullptr_t";
            case "nullptr_switch_case" ->
                "render the exact zero case as integral 0; nullptr is not a valid switch label";
            case "packed_or_unaligned_piece" ->
                "model a packed field when proven; otherwise emit an explicit unaligned load/store helper";
            case "raw_pointer_offset" ->
                "propagate a compatible structure through the pointer family and materialize the fixed-offset field";
            case "unresolved_register_input" ->
                "repair function boundary, ABI, or SEH/setjmp live-in register semantics";
            case "return_width_artifact" ->
                "repair the callee return width/register model and propagate it to callers";
            case "call_clobber_piece" ->
                "split the post-CALL partial-register lifetime or prove a per-function preserved-register model";
            case "dynamic_array_indexing" ->
                "recover element type or render DArrayAt<T>; runtime elementSize is not a native C array stride";
            case "flattened_global_record_array" ->
                "apply the inferred packed record and its nested arrays after base/stride proof";
            case "stack_slot_reuse" ->
                "retain the ABI parameter type, but split the post-overwrite stack-slot lifetime into a source-level local";
            case "suspicious_subnormal_literal" ->
                "recover an adjacent split-dword double ABI/storage slot; do not classify printable bytes as text without an independent pointer/string use";
            default -> "review machine-code evidence before changing the Ghidra database";
        };
    }

    private List<String> lineIdiomKinds(String line, Set<String> reusedParameters) {
        List<String> kinds = new ArrayList<>();
        if (line.contains("STDebugBreak()")) kinds.add("terminal_debug_trap");
        if (line.matches(".*\\b(?:unaff_|in_)[A-Za-z0-9_]+.*"))
            kinds.add("unresolved_register_input");
        boolean returnExtraout = hasReturnRegisterExtraout(line);
        boolean volatileExtraout = hasVolatileRegisterExtraout(line);
        boolean concat = line.matches(".*\\bCONCAT[0-9]+\\s*\\(.*");
        if (returnExtraout)
            kinds.add("return_width_artifact");
        if (volatileExtraout)
            kinds.add("call_clobber_piece");
        if ((line.contains("->elementSize") || line.contains(".elementSize")) &&
                (line.contains("->data") || line.contains(".data")))
            kinds.add("dynamic_array_indexing");
        if (containsRecoveredGlobalRecordStride(line))
            kinds.add("flattened_global_record_array");
        if (RAW_INDIRECT_CALL.matcher(line).find()) kinds.add("raw_indirect_call");
        Matcher parameterAssignment = PARAMETER_ASSIGNMENT.matcher(line);
        while (parameterAssignment.find()) {
            String name = parameterAssignment.group(1).replaceFirst("^_", "");
            if (reusedParameters.contains(name)) {
                kinds.add("stack_slot_reuse");
                reusedParameters.remove(name);
                break;
            }
        }
        if (PACKED_PIECE.matcher(line).find() ||
                (concat && !returnExtraout && !volatileExtraout))
            kinds.add("packed_or_unaligned_piece");
        if (containsSuspiciousSubnormal(line))
            kinds.add("suspicious_subnormal_literal");
        // Prefer a more specific diagnosis over an additional generic offset hint.
        if (RAW_OFFSET_DEREFERENCE.matcher(line).find() &&
                !kinds.contains("dynamic_array_indexing") &&
                !kinds.contains("flattened_global_record_array") &&
                !kinds.contains("raw_indirect_call") &&
                !kinds.contains("packed_or_unaligned_piece"))
            kinds.add("raw_pointer_offset");
        return kinds;
    }

    private boolean hasLiveExtraoutUse(String line, String stripped) {
        return line.matches(".*\\bextraout_[A-Za-z0-9_$]+.*") &&
            !stripped.matches("[A-Za-z_$][A-Za-z0-9_$:<>]*" +
                "(?:\\s*\\*+)?\\s+extraout_[A-Za-z0-9_$]+\\s*;");
    }

    /**
     * EAX (and Ghidra's unnamed/x87 synthetic pieces) can describe a real
     * return-width problem. Other x86 registers are volatile call-clobber SSA
     * values and must not be counted as evidence about the callee's return ABI.
     */
    private boolean hasReturnRegisterExtraout(String line) {
        Matcher matcher = Pattern.compile("\\bextraout_([A-Za-z0-9_$]+)")
            .matcher(line == null ? "" : line);
        while (matcher.find()) {
            String suffix = matcher.group(1).toUpperCase(Locale.ROOT);
            if (suffix.startsWith("VAR") || suffix.startsWith("EAX") ||
                    suffix.startsWith("AX") || suffix.startsWith("AL") ||
                    suffix.startsWith("AH") || suffix.startsWith("ST0")) return true;
        }
        return false;
    }

    private boolean hasVolatileRegisterExtraout(String line) {
        Matcher matcher = Pattern.compile("\\bextraout_([A-Za-z0-9_$]+)")
            .matcher(line == null ? "" : line);
        while (matcher.find()) {
            String suffix = matcher.group(1).toUpperCase(Locale.ROOT);
            if (!(suffix.startsWith("VAR") || suffix.startsWith("EAX") ||
                    suffix.startsWith("AX") || suffix.startsWith("AL") ||
                    suffix.startsWith("AH") || suffix.startsWith("ST0"))) return true;
        }
        return false;
    }

    private StatementWindow statementWindow(List<String> lines, int startIndex) {
        StringBuilder text = new StringBuilder();
        int endIndex = startIndex;
        for (int index = startIndex; index < lines.size() && index < startIndex + 12; index++) {
            String line = lines.get(index);
            if (line.contains(PSEUDOCODE_COMMENT_MARKER)) continue;
            if (text.length() > 0) text.append(' ');
            text.append(line.strip());
            endIndex = index;
            String trimmed = line.stripTrailing();
            if (trimmed.contains(";") || trimmed.endsWith("{") ||
                    trimmed.stripLeading().equals("}")) break;
        }
        return new StatementWindow(text.toString(), endIndex);
    }

    /**
     * Identify physical incoming stack slots which MSVC turns into scratch locals
     * after their original value dies.  This is presentation evidence only: the
     * exporter does not mutate the Listing variable or pretend the two SSA
     * lifetimes have one source-level type.
     */
    private Set<String> reusedParameterNames(Function function) {
        if (function == null) return Set.of();
        Set<String> cached = stackSlotReuseCache.get(function.getEntryPoint());
        if (cached != null) return cached;
        long frameBias = currentProgram.getDefaultPointerSize();
        Map<Long, StackSlotLifetime> slots = new HashMap<>();
        Map<String, Set<Long>> registerOrigins = new HashMap<>();
        Set<String> definedRegisters = new HashSet<>(List.of("EBP", "ESP"));
        List<Parameter> parameters = Arrays.stream(function.getParameters())
            .filter(parameter -> !parameter.isAutoParameter())
            .sorted(Comparator.comparingInt(Parameter::getOrdinal)).toList();
        long abiOffset = frameBias * 2;
        for (Parameter parameter : parameters) {
            if (parameter.isAutoParameter() || !parameter.hasStackStorage()) continue;
            StackSlotLifetime lifetime = new StackSlotLifetime(parameter.getName());
            slots.putIfAbsent((long)parameter.getStackOffset() + frameBias, lifetime);
            if (frameBias == 4) slots.putIfAbsent(abiOffset, lifetime);
            int length = Math.max((int)frameBias,
                Math.max(parameter.getLength(), parameter.getFormalDataType().getLength()));
            abiOffset += (length + frameBias - 1) / frameBias * frameBias;
        }
        InstructionIterator instructions = listing.getInstructions(
            function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            String mnemonic = instruction.getMnemonicString()
                .toUpperCase(Locale.ROOT);
            for (int operandIndex = 0;
                    operandIndex < instruction.getNumOperands(); operandIndex++) {
                Long offset = ebpStackOffset(instruction, operandIndex);
                StackSlotLifetime slot = offset == null ? null : slots.get(offset);
                if (slot == null) continue;
                boolean write = operandIndex == 0 &&
                    instructionWritesFirstOperand(mnemonic);
                boolean read = !write || instructionReadsFirstOperand(mnemonic);
                if (read) {
                    if (slot.written) slot.readAfterWrite = true;
                    else slot.readBeforeWrite = true;
                }
                // Read/modify/write arithmetic is ordinary mutation of the
                // parameter, not proof that MSVC recycled its physical slot.
                // For a full overwrite, require a value whose tracked incoming
                // parameter origins exclude this same slot.  This retains the
                // useful cross-parameter reuse cases while rejecting clamps,
                // coordinate transforms, and other source-level param updates.
                if (write && !read && slot.readBeforeWrite &&
                        operandIndex == 0 && instruction.getNumOperands() >= 2) {
                    Set<Long> sourceOrigins = operandOrigins(instruction, 1,
                        registerOrigins);
                    boolean sourceDefined = operandValueDefined(
                        instruction, 1, definedRegisters);
                    if (!sourceOrigins.contains(offset) &&
                            (!sourceOrigins.isEmpty() || sourceDefined))
                        slot.written = true;
                }
            }
            updateParameterOrigins(instruction, mnemonic, registerOrigins,
                definedRegisters);
        }
        Set<String> result = new TreeSet<>();
        for (StackSlotLifetime slot : slots.values())
            if (slot.readBeforeWrite && slot.written && slot.readAfterWrite)
                result.add(slot.parameterName);
        String comment = function.getComment();
        if (comment != null) {
            Matcher repair = Pattern.compile(
                "\\[STPrototypeRepairApplier\\] Propagated parameter ([0-9]+)\\." +
                "\\s*Evidence: incoming stack slot is read as a [^\\r\\n]+ before its " +
                "address is passed as a distinct output lifetime")
                .matcher(comment);
            while (repair.find()) {
                int ordinal = Integer.parseInt(repair.group(1));
                for (Parameter parameter : function.getParameters())
                    if (!parameter.isAutoParameter() &&
                            parameter.getOrdinal() == ordinal)
                        result.add(parameter.getName());
            }
        }
        Set<String> immutable = Set.copyOf(result);
        stackSlotReuseCache.put(function.getEntryPoint(), immutable);
        return immutable;
    }

    private Set<Long> operandOrigins(Instruction instruction, int operandIndex,
            Map<String, Set<Long>> registerOrigins) {
        Set<Long> result = new TreeSet<>();
        Long stack = ebpStackOffset(instruction, operandIndex);
        if (stack != null) result.add(stack);
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return result;
        // Address-register participation is not value provenance.  For
        // example MOV EAX,[table + param_5*8] loads a table element, not a
        // transformed param_5 value.  Only a direct register operand carries
        // an incoming-slot value through this detector.
        String direct = directRegister(instruction, operandIndex);
        if (!direct.isBlank())
            result.addAll(registerOrigins.getOrDefault(direct, Set.of()));
        return result;
    }

    private void updateParameterOrigins(Instruction instruction, String mnemonic,
            Map<String, Set<Long>> registerOrigins, Set<String> definedRegisters) {
        if ("CALL".equals(mnemonic)) {
            for (String register : List.of("EAX", "ECX", "EDX")) {
                registerOrigins.remove(register);
                definedRegisters.remove(register);
            }
            return;
        }
        if (instruction.getNumOperands() == 0) return;
        String destination = directRegister(instruction, 0);
        if (destination.isBlank() || !instructionWritesFirstOperand(mnemonic) ||
                !fullMachineRegister(instruction, 0)) return;
        boolean wasDefined = definedRegisters.contains(destination);
        boolean sourceDefined = instruction.getNumOperands() >= 2 &&
            operandValueDefined(instruction, 1, definedRegisters);
        boolean selfClear = Set.of("XOR", "SUB").contains(mnemonic) &&
            instruction.getNumOperands() >= 2 && destination.equals(
                directRegister(instruction, 1));
        boolean defined = selfClear ||
            (Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP").contains(mnemonic) &&
                ("POP".equals(mnemonic) || sourceDefined)) ||
            (instructionReadsFirstOperand(mnemonic) && wasDefined &&
                (instruction.getNumOperands() < 2 || sourceDefined));
        if (defined) definedRegisters.add(destination);
        else definedRegisters.remove(destination);
        Set<Long> origins;
        if (instruction.getNumOperands() >= 2 &&
                Set.of("MOV", "MOVSX", "MOVZX").contains(mnemonic)) {
            origins = operandOrigins(instruction, 1, registerOrigins);
        }
        // Arithmetic, LEA, and partial updates change the value domain.  They
        // cannot prove that a later stack overwrite is the exact lifetime of
        // another ABI parameter, even if an input parameter helped calculate
        // the result.
        else origins = Set.of();
        if (origins.isEmpty()) registerOrigins.remove(destination);
        else registerOrigins.put(destination, Set.copyOf(origins));
    }

    private boolean operandValueDefined(Instruction instruction, int operandIndex,
            Set<String> definedRegisters) {
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return false;
        String direct = directRegister(instruction, operandIndex);
        if (!direct.isBlank()) return definedRegisters.contains(direct);
        Object[] objects = instruction.getOpObjects(operandIndex);
        boolean value = false;
        for (Object object : objects) {
            if (object instanceof Register register) {
                if (!definedRegisters.contains(x86RootRegister(register.getName())))
                    return false;
                value = true;
            }
            else if (object instanceof Scalar ||
                    object instanceof ghidra.program.model.address.Address)
                value = true;
        }
        int type = instruction.getOperandType(operandIndex);
        return value || OperandType.isScalar(type) || OperandType.isAddress(type) ||
            OperandType.isIndirect(type);
    }

    private boolean fullMachineRegister(Instruction instruction, int operandIndex) {
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return false;
        Object[] objects = instruction.getOpObjects(operandIndex);
        return objects.length == 1 && objects[0] instanceof Register register &&
            register.getBitLength() == currentProgram.getDefaultPointerSize() * 8;
    }

    private String directRegister(Instruction instruction, int operandIndex) {
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return "";
        Object[] objects = instruction.getOpObjects(operandIndex);
        if (objects.length != 1 || !(objects[0] instanceof Register register)) return "";
        return x86RootRegister(register.getName());
    }

    private String x86RootRegister(String name) {
        String value = name == null ? "" : name.toUpperCase(Locale.ROOT);
        return switch (value) {
            case "EAX", "AX", "AL", "AH" -> "EAX";
            case "EBX", "BX", "BL", "BH" -> "EBX";
            case "ECX", "CX", "CL", "CH" -> "ECX";
            case "EDX", "DX", "DL", "DH" -> "EDX";
            case "ESI", "SI" -> "ESI";
            case "EDI", "DI" -> "EDI";
            case "EBP", "BP" -> "EBP";
            case "ESP", "SP" -> "ESP";
            default -> value;
        };
    }

    private Long ebpStackOffset(String operand) {
        if (operand == null) return null;
        String value = operand.toUpperCase(Locale.ROOT).replace("BYTE PTR", "")
            .replace("WORD PTR", "").replace("DWORD PTR", "")
            .replace("QWORD PTR", "").replace(" ", "");
        Matcher matcher = Pattern.compile(
            "^\\[EBP(?:([+-])(0X[0-9A-F]+|[0-9]+))?\\]$").matcher(value);
        if (!matcher.matches()) return null;
        if (matcher.group(2) == null) return 0L;
        try {
            long parsed = matcher.group(2).startsWith("0X") ?
                Long.parseUnsignedLong(matcher.group(2).substring(2), 16) :
                Long.parseLong(matcher.group(2));
            return "-".equals(matcher.group(1)) ? -parsed : parsed;
        }
        catch (NumberFormatException ignored) { return null; }
    }

    private Long ebpStackOffset(Instruction instruction, int operandIndex) {
        if (instruction == null || operandIndex < 0 ||
                operandIndex >= instruction.getNumOperands()) return null;
        String representation =
            instruction.getDefaultOperandRepresentation(operandIndex);
        Long rendered = ebpStackOffset(representation);
        if (rendered != null) return rendered;
        String instructionText = instruction.toString();
        int separator = instructionText.indexOf(' ');
        if (separator >= 0) {
            String[] listingOperands =
                instructionText.substring(separator + 1).split("\\s*,\\s*");
            if (operandIndex < listingOperands.length) {
                rendered = ebpStackOffset(listingOperands[operandIndex]);
                if (rendered != null) return rendered;
            }
        }
        int operandType = instruction.getOperandType(operandIndex);
        if (!OperandType.isIndirect(operandType) &&
                (representation == null || !representation.contains("["))) return null;
        boolean ebp = false;
        long displacement = 0;
        int scalars = 0;
        for (Object object : instruction.getOpObjects(operandIndex)) {
            if (object instanceof Register register) {
                String name = register.getName().toUpperCase(Locale.ROOT);
                if (!"EBP".equals(name) && !"RBP".equals(name) && !"BP".equals(name))
                    return null;
                ebp = true;
            }
            else if (object instanceof Scalar scalar) {
                displacement += scalar.getSignedValue();
                scalars++;
            }
        }
        return ebp && scalars <= 1 ? displacement : null;
    }

    private boolean instructionWritesFirstOperand(String mnemonic) {
        return Set.of("MOV", "MOVSX", "MOVZX", "LEA", "POP", "XOR", "SUB", "SBB",
            "ADD", "ADC", "AND", "OR", "IMUL", "SHL", "SHR", "SAR", "SAL", "INC",
            "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private boolean instructionReadsFirstOperand(String mnemonic) {
        return Set.of("XOR", "SUB", "SBB", "ADD", "ADC", "AND", "OR", "IMUL",
            "SHL", "SHR", "SAR", "SAL", "INC", "DEC", "NEG", "NOT").contains(mnemonic);
    }

    private String inlineTransform(String kind, String line) {
        return switch (kind) {
            case "unresolved_register_input" ->
                "candidate live-in register: verify boundary, SEH/setjmp ABI, or convention";
            case "return_width_artifact" ->
                "candidate call-output artifact: verify return width, clobbers, or x87 state";
            case "call_clobber_piece" ->
                "candidate volatile-register merge after CALL: split the partial-register lifetime";
            case "dynamic_array_indexing" -> darrayInlineTransform(line);
            case "flattened_global_record_array" ->
                "expected typedRecordArray[index].field after inferred base/stride proof";
            case "raw_indirect_call" ->
                "expected typed vtable or function-table callback call with the machine-proven calling convention";
            case "packed_or_unaligned_piece" -> packedInlineTransform(line);
            case "raw_pointer_offset" ->
                "candidate structure field after proof; otherwise retain buffer arithmetic";
            case "stack_slot_reuse" ->
                "compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable";
            case "suspicious_subnormal_literal" -> subnormalInlineTransform(line);
            default -> intendedTransform(kind);
        };
    }

    private String packedInlineTransform(String line) {
        Matcher tagged = TAGGED_24_COMPOSE.matcher(line);
        if (tagged.find()) {
            String tag = oneLine(tagged.group(1));
            String value = tagged.group(2);
            return "expected STPackTagged24(" + tag + ", " + value +
                ") == (((uint32_t)(" + value + ") & 0x00ffffffu) | " +
                "((uint32_t)(" + tag + ") << 24))";
        }
        return "expected named packed member, bit extract/compose, or unaligned load";
    }

    private String darrayInlineTransform(String line) {
        Matcher matcher = DARRAY_ELEMENT_ADDRESS.matcher(line);
        if (matcher.find())
            return "expected DArrayAt<T>(" + matcher.group(1) + ", " +
                oneLine(matcher.group(2)) + ") (runtime stride)";
        return "expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array)";
    }

    private boolean containsSuspiciousSubnormal(String line) {
        Matcher matcher = SCIENTIFIC_LITERAL.matcher(line == null ? "" : line);
        while (matcher.find()) {
            try {
                double value = Double.parseDouble(matcher.group());
                if (value != 0.0 && Double.isFinite(value) &&
                        Math.abs(value) < Double.MIN_NORMAL) return true;
            }
            catch (NumberFormatException ignored) { }
        }
        return false;
    }

    private String subnormalInlineTransform(String line) {
        Matcher matcher = SCIENTIFIC_LITERAL.matcher(line == null ? "" : line);
        while (matcher.find()) {
            try {
                double value = Double.parseDouble(matcher.group());
                if (value == 0.0 || !Double.isFinite(value) ||
                        Math.abs(value) >= Double.MIN_NORMAL) continue;
                long bits = Double.doubleToRawLongBits(value);
                long swapped = bits << 32 | bits >>> 32;
                double candidate = Double.longBitsToDouble(swapped);
                String suffix = Double.isFinite(candidate) && candidate != 0.0 &&
                    Math.abs(candidate) >= Double.MIN_NORMAL ?
                    "; swapping its 32-bit halves yields " + candidate : "";
                return "suspicious IEEE-754 subnormal raw_bits=0x" +
                    String.format("%016X", bits) + suffix +
                    "; recover split qword ABI/storage before accepting the literal";
            }
            catch (NumberFormatException ignored) { }
        }
        return "suspicious subnormal literal; review split qword ABI/storage";
    }

    private void addIdiom(Map<String, IdiomEvidence> evidence, String kind, int lineNumber,
            String excerpt) {
        IdiomEvidence value = evidence.computeIfAbsent(kind, ignored -> new IdiomEvidence());
        value.occurrences++;
        if (lineNumber > 0 && value.lines.size() < 16) value.lines.add(lineNumber);
        if (value.excerpts.size() < 4) value.excerpts.add(oneLine(excerpt));
        if (!kind.equals("terminal_debug_trap")) value.addressHints.addAll(addressHints(excerpt));
    }

    private List<String> int3Addresses(Function function) {
        List<String> result = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            try {
                byte[] bytes = instruction.getBytes();
                if (bytes.length > 0 && (bytes[0] & 0xff) == 0xcc)
                    result.add(addr(instruction.getAddress()));
            }
            catch (ghidra.program.model.mem.MemoryAccessException ignored) { }
        }
        return result;
    }

    private List<String> addressHints(String line) {
        List<String> result = new ArrayList<>();
        Matcher matcher = HEX_ADDRESS.matcher(line == null ? "" : line);
        while (matcher.find() && result.size() < 8) {
            try {
                long offset = Long.parseUnsignedLong(matcher.group(1), 16);
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(offset);
                Symbol symbol = symbols.getPrimarySymbol(address);
                if (symbol != null) result.add(addr(address) + " " + symbol.getName(true));
                else {
                    Data data = listing.getDefinedDataContaining(address);
                    result.add(addr(address) + (data == null ? "" :
                        " inside " + data.getPathName() + " @ " + addr(data.getMinAddress())));
                }
            }
            catch (Exception ignored) { }
        }
        return result;
    }

    private String intendedTransform(String kind) {
        return switch (kind) {
            case "terminal_debug_trap" ->
                "replace swi(3) plus synthetic indirect call/return with noreturn STDebugBreak()";
            case "bulk_zero_initialization" ->
                "replace the REP STOSD/STOSB decompiler loop with memset(destination, 0, byte_count)";
            case "bulk_byte_copy" ->
                "replace the exact dead REP MOVSD/MOVSB decompiler loops with overlap-safe memmove(destination, source, byte_count)";
            case "unresolved_register_input" ->
                "verify function boundary, calling convention, and SEH/setjmp live-in state before replacing unaff_/in_";
            case "return_width_artifact" ->
                "repair the proven call output: return width, register clobber, x87 stack state, or split high variable";
            case "call_clobber_piece" ->
                "split the volatile-register SSA lifetime after CALL; do not infer a return value from ECX/EDX alone";
            case "dynamic_array_indexing" ->
                "render DArrayGet(array, index) or typed array->data[index]; runtime elementSize prevents a static C array type";
            case "flattened_global_record_array" ->
                "recompose as typedRecordArray[index].field using the inferred record stride and component metadata";
            case "raw_indirect_call" ->
                "apply a function-pointer or vtable-slot prototype; add an explicit receiver only when the machine ABI proves __thiscall";
            case "packed_or_unaligned_piece" ->
                "replace piece syntax with a named packed field, bit extract/compose, memcpy, or explicit unaligned load";
            case "raw_pointer_offset" ->
                "propagate a compatible structure type across the pointer family and render a named field access";
            case "stack_slot_reuse" ->
                "split the optimized physical argument-slot reuse into the original parameter and a distinct local variable";
            case "suspicious_subnormal_literal" ->
                "merge the proven adjacent dword halves into one double ABI/storage slot";
            default -> "review and express the machine operation as typed, compilable source";
        };
    }

    private String detector(String kind) {
        return switch (kind) {
            case "terminal_debug_trap" -> "x86 opcode CC plus decompiler swi(3) call idiom";
            case "bulk_zero_initialization" ->
                "exact decrementing undefined4 zero loop with an optional undefined1/2/4/8 tail store";
            case "bulk_byte_copy" ->
                "exact paired REP MOVSD/REP MOVSB copy loops with dead advanced pointers and counters";
            case "unresolved_register_input" -> "unaff_*/in_* high-variable name";
            case "return_width_artifact" ->
                "extraout_* high variable, possibly consumed by CONCAT*";
            case "call_clobber_piece" ->
                "extraout_ECX/EDX/... value not belonging to the x86 EAX return register";
            case "dynamic_array_indexing" -> "same expression uses DArrayTy.elementSize and .data";
            case "flattened_global_record_array" -> "literal matching an inferred packed-record stride";
            case "raw_indirect_call" -> "cast to code* or code** at call site";
            case "packed_or_unaligned_piece" ->
                "Ghidra piece/CONCAT syntax or packed member arithmetic";
            case "raw_pointer_offset" -> "typed dereference over param/local plus constant offset";
            case "stack_slot_reuse" ->
                "machine reads an incoming EBP argument slot, later overwrites it, and reads the post-write lifetime";
            case "suspicious_subnormal_literal" ->
                "finite nonzero scientific literal below Double.MIN_NORMAL; report raw qword and swapped-dword interpretation";
            default -> "text pattern";
        };
    }

    private String integerArray(Collection<Integer> values) {
        List<String> strings = new ArrayList<>();
        for (Integer value : values) strings.add(Integer.toString(value));
        return "[" + String.join(",", strings) + "]";
    }

    private void writePseudocodeArtifacts() throws IOException {
        pseudocodeIdiomRows.sort(Comparator.naturalOrder());
        atomicWrite(programRoot.resolve("pseudocode_idioms.jsonl"), writer -> {
            for (String row : pseudocodeIdiomRows) {
                writer.write(row);
                writer.newLine();
            }
        });
        qualityIssueRows.sort(Comparator.naturalOrder());
        atomicWrite(programRoot.resolve("decomp_quality_issues.jsonl"), writer -> {
            for (String row : qualityIssueRows) {
                writer.write(row);
                writer.newLine();
            }
        });
        List<String> categories = new ArrayList<>();
        for (Map.Entry<String, QualityAggregate> item : qualityAggregates.entrySet()) {
            categories.add(jsonObject(
                field("kind", item.getKey()),
                field("severity", qualitySeverity(item.getKey())),
                field("quality_stage", qualityStage(item.getKey())),
                field("regression_policy", qualityRegressionPolicy(item.getKey())),
                rawField("functions", Integer.toString(item.getValue().functions)),
                rawField("occurrences", Integer.toString(item.getValue().occurrences)),
                field("recommended_resolution", qualityResolution(item.getKey()))
            ));
        }
        writeJson(programRoot.resolve("decomp_quality_summary.json"), jsonObject(
            field("schema", "st-decomp-quality-summary"),
            rawField("schema_version", "1"),
            field("scope", "all exported functions/**/decomp.c bodies"),
            rawField("body_function_count", Integer.toString(bodyFunctionCount)),
            rawField("functions_with_issues", Integer.toString(qualityIssueFunctions.size())),
            rawField("issue_record_count", Integer.toString(qualityIssueRows.size())),
            rawField("strict_zero_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("strict_zero"))),
            rawField("nonincreasing_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("nonincreasing"))),
            rawField("stage_transition_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("stage_transition"))),
            rawField("informational_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("informational"))),
            rawField("categories", "[" + String.join(",", categories) + "]")
        ));
        writeText(programRoot.resolve("pseudocode_runtime.h"),
            "#ifndef ST_PSEUDOCODE_RUNTIME_H\n" +
            "#define ST_PSEUDOCODE_RUNTIME_H\n\n" +
            "/* Standalone corpus code has no debugger continuation path. */\n" +
            "#include <stddef.h>\n" +
            "#include <stdint.h>\n" +
            "#include <stdlib.h>\n" +
            "#include <string.h>\n" +
            "#if defined(__cplusplus)\n" +
            "#include <cmath>\n" +
            "#include <type_traits>\n" +
            "template <size_t Bytes>\n" +
            "struct STUnsignedBytes {\n" +
            "    uint8_t bytes[Bytes]{};\n" +
            "    STUnsignedBytes() = default;\n" +
            "    template <typename Value> STUnsignedBytes(Value value) {\n" +
            "        uint64_t raw = static_cast<uint64_t>(value);\n" +
            "        for (size_t index = 0; index < Bytes; ++index)\n" +
            "            bytes[index] = static_cast<uint8_t>(raw >> (index * 8));\n" +
            "    }\n" +
            "    operator uint64_t() const {\n" +
            "        uint64_t raw = 0;\n" +
            "        for (size_t index = 0; index < Bytes; ++index)\n" +
            "            raw |= uint64_t(bytes[index]) << (index * 8);\n" +
            "        return raw;\n" +
            "    }\n" +
            "};\n" +
            "using undefined = uint8_t;\n" +
            "using undefined1 = uint8_t;\n" +
            "using undefined2 = uint16_t;\n" +
            "using undefined3 = STUnsignedBytes<3>;\n" +
            "using undefined4 = uint32_t;\n" +
            "using undefined6 = STUnsignedBytes<6>;\n" +
            "using undefined8 = uint64_t;\n" +
            "static_assert(sizeof(undefined3) == 3);\n" +
            "static_assert(sizeof(undefined6) == 6);\n" +
            "using byte = uint8_t;\n" +
            "using ushort = uint16_t;\n" +
            "using uint = uint32_t;\n" +
            // Ghidra spells this scalar "ulong".  On 32-bit MSVC and the
            // audit's i386/ILP32 target it is an unsigned long, not the
            // distinct unsigned-int typedef selected by glibc for uint32_t.
            "using ulong = unsigned long;\n" +
            "static_assert(sizeof(ulong) == 4, \"ST requires 32-bit ulong\");\n" +
            "using int3 = int32_t;   /* logical signed 24-bit value */\n" +
            "using uint3 = uint32_t; /* logical unsigned 24-bit value */\n" +
            "using float10 = long double;\n" +
            "using unkbyte10 = long double; /* unresolved x87 register value */\n" +
            "using longlong = int64_t;\n" +
            "using ulonglong = uint64_t;\n" +
            "using code = uintptr_t(...);\n" +
            "#endif\n" +
            "#if !defined(_MSC_VER)\n" +
            "#ifndef __thiscall\n#define __thiscall\n#endif\n" +
            "#ifndef __stdcall\n#define __stdcall\n#endif\n" +
            "#ifndef __cdecl\n#define __cdecl\n#endif\n" +
            "#ifndef __fastcall\n#define __fastcall\n#endif\n" +
            "#endif\n" +
            "static inline uint32_t STPackTagged24(uint32_t tag, uint32_t value) {\n" +
            "    return (value & 0x00ffffffu) | ((tag & 0xffu) << 24);\n" +
            "}\n" +
            "static inline uint32_t STReplaceLowByte(uint32_t original, uint8_t low) {\n" +
            "    return (original & 0xffffff00u) | (uint32_t)low;\n" +
            "}\n" +
            "static inline uint32_t STReplaceLowWord(uint32_t original, uint16_t low) {\n" +
            "    return (original & 0xffff0000u) | (uint32_t)low;\n" +
            "}\n" +
            "static inline uint16_t STReplaceLowByte16(uint16_t original, uint8_t low) {\n" +
            "    return (uint16_t)((original & 0xff00u) | (uint16_t)low);\n" +
            "}\n" +
            "#if defined(__cplusplus)\n" +
            "template <size_t Bytes>\n" +
            "using STUnsigned = std::conditional_t<(Bytes <= 1), uint8_t,\n" +
            "    std::conditional_t<(Bytes <= 2), uint16_t,\n" +
            "    std::conditional_t<(Bytes <= 4), uint32_t, uint64_t>>>;\n" +
            "template <typename Value>\n" +
            "static inline uint64_t STRawWord(Value value) {\n" +
            "    using Plain = std::remove_cv_t<std::remove_reference_t<Value>>;\n" +
            "    if constexpr (std::is_pointer_v<Plain>)\n" +
            "        return static_cast<uint64_t>(reinterpret_cast<uintptr_t>(value));\n" +
            "    else return static_cast<uint64_t>(value);\n" +
            "}\n" +
            "template <size_t Bytes>\n" +
            "static constexpr uint64_t STByteMask() {\n" +
            "    if constexpr (Bytes >= 8) return UINT64_MAX;\n" +
            "    else return (uint64_t{1} << (Bytes * 8)) - 1;\n" +
            "}\n" +
            "template <size_t HighBytes, size_t LowBytes, typename High, typename Low>\n" +
            "static inline STUnsigned<HighBytes + LowBytes> STConcat(High high, Low low) {\n" +
            "    uint64_t value = ((STRawWord(high) & STByteMask<HighBytes>()) <<\n" +
            "        (LowBytes * 8)) | (STRawWord(low) & STByteMask<LowBytes>());\n" +
            "    return static_cast<STUnsigned<HighBytes + LowBytes>>(value);\n" +
            "}\n" +
            "template <size_t ResultBytes, typename Value, typename Offset>\n" +
            "static inline STUnsigned<ResultBytes> STSubpiece(Value value, Offset offset) {\n" +
            "    return static_cast<STUnsigned<ResultBytes>>(\n" +
            "        (STRawWord(value) >> (static_cast<unsigned>(offset) * 8)) &\n" +
            "        STByteMask<ResultBytes>());\n" +
            "}\n" +
            "template <typename Value>\n" +
            "static inline int32_t STSignExtend24(Value value) {\n" +
            "    uint32_t raw = static_cast<uint32_t>(STRawWord(value)) & 0x00ffffffu;\n" +
            "    return static_cast<int32_t>(raw << 8) >> 8;\n" +
            "}\n" +
            "/* Exact source convention: signed /, narrowed to 16 bits, then negative values\n" +
            "   are biased down once. This intentionally differs from floor division at exact\n" +
            "   negative multiples. */\n" +
            "template <typename Value, typename Divisor>\n" +
            "static inline int16_t STBiasedDiv16(Value value, Divisor divisor) {\n" +
            "    int32_t source = static_cast<int32_t>(value);\n" +
            "    int16_t quotient = static_cast<int16_t>(source / static_cast<int32_t>(divisor));\n" +
            "    return static_cast<int16_t>(quotient - (source < 0 ? 1 : 0));\n" +
            "}\n" +
            "template <typename Value>\n" +
            "static inline int32_t STSignedDiv4(Value value) {\n" +
            "    return static_cast<int32_t>(STRawWord(value)) / 4;\n" +
            "}\n" +
            "template <typename Value>\n" +
            "static inline int32_t STRoundFixed16(Value value) {\n" +
            "    uint32_t wrapped = static_cast<uint32_t>(STRawWord(value)) + 0x8000u;\n" +
            "    using Plain = std::remove_cv_t<std::remove_reference_t<Value>>;\n" +
            "    if constexpr (std::is_unsigned_v<Plain>)\n" +
            "        return static_cast<int32_t>(wrapped >> 16);\n" +
            "    int32_t rounded = static_cast<int32_t>(wrapped);\n" +
            "    return rounded >= 0 ? rounded / 0x10000 :\n" +
            "        -static_cast<int32_t>((-static_cast<int64_t>(rounded) + 0xffff) / 0x10000);\n" +
            "}\n" +
            "template <typename Bits, typename Index>\n" +
            "static inline bool STBitTest(Bits bits, Index index) {\n" +
            "    int32_t bit = static_cast<int32_t>(STRawWord(index));\n" +
            "    return ((static_cast<uint8_t>(bits[bit >> 3]) >> (bit & 7)) & 1u) != 0;\n" +
            "}\n" +
            "template <typename Bits, typename Index>\n" +
            "static inline void STBitSet(Bits bits, Index index) {\n" +
            "    int32_t bit = static_cast<int32_t>(STRawWord(index));\n" +
            "    bits[bit >> 3] |= static_cast<uint8_t>(1u << (bit & 7));\n" +
            "}\n" +
            "template <typename Bits, typename Index>\n" +
            "static inline void STBitClear(Bits bits, Index index) {\n" +
            "    int32_t bit = static_cast<int32_t>(STRawWord(index));\n" +
            "    bits[bit >> 3] &= static_cast<uint8_t>(~(1u << (bit & 7)));\n" +
            "}\n" +
            "template <typename Value>\n" +
            "static inline long double fsin(Value value) {\n" +
            "    return std::sin(static_cast<long double>(value));\n" +
            "}\n" +
            "template <typename Value>\n" +
            "static inline long double fcos(Value value) {\n" +
            "    return std::cos(static_cast<long double>(value));\n" +
            "}\n" +
            "template <typename Left, typename Right>\n" +
            "static inline long double fpatan(Left left, Right right) {\n" +
            "    return std::atan2(static_cast<long double>(left),\n" +
            "        static_cast<long double>(right));\n" +
            "}\n" +
            "template <typename Word, typename Left, typename Right>\n" +
            "static inline bool STCarry(Left left, Right right) {\n" +
            "    Word a = static_cast<Word>(left), b = static_cast<Word>(right);\n" +
            "    return static_cast<Word>(a + b) < a;\n" +
            "}\n" +
            "template <typename Word, typename Left, typename Right>\n" +
            "static inline bool STSignedCarry(Left left, Right right) {\n" +
            "    using Unsigned = std::make_unsigned_t<Word>;\n" +
            "    Unsigned a = static_cast<Unsigned>(static_cast<Word>(left));\n" +
            "    Unsigned b = static_cast<Unsigned>(static_cast<Word>(right));\n" +
            "    Unsigned result = a + b, sign = Unsigned{1} << (sizeof(Word) * 8 - 1);\n" +
            "    return ((~(a ^ b) & (a ^ result)) & sign) != 0;\n" +
            "}\n" +
            "template <typename Word, typename Left, typename Right>\n" +
            "static inline bool STSignedBorrow(Left left, Right right) {\n" +
            "    using Unsigned = std::make_unsigned_t<Word>;\n" +
            "    Unsigned a = static_cast<Unsigned>(static_cast<Word>(left));\n" +
            "    Unsigned b = static_cast<Unsigned>(static_cast<Word>(right));\n" +
            "    Unsigned result = a - b, sign = Unsigned{1} << (sizeof(Word) * 8 - 1);\n" +
            "    return (((a ^ b) & (a ^ result)) & sign) != 0;\n" +
            "}\n" +
            "template <size_t Offset, size_t Width, typename Value>\n" +
            "class STPieceProxy {\n" +
            "public:\n" +
            "    explicit STPieceProxy(Value &value) : value_(&value) {}\n" +
            "    operator STUnsigned<Width>() const {\n" +
            "        const volatile uint8_t *bytes = reinterpret_cast<const volatile uint8_t *>(value_);\n" +
            "        uint64_t result = 0;\n" +
            "        for (size_t index = 0; index < Width; ++index)\n" +
            "            result |= uint64_t(bytes[Offset + index]) << (index * 8);\n" +
            "        return static_cast<STUnsigned<Width>>(result);\n" +
            "    }\n" +
            "    template <typename Source> STPieceProxy &operator=(Source source) {\n" +
            "        volatile uint8_t *bytes = reinterpret_cast<volatile uint8_t *>(value_);\n" +
            "        uint64_t raw = STRawWord(source);\n" +
            "        for (size_t index = 0; index < Width; ++index)\n" +
            "            bytes[Offset + index] = static_cast<uint8_t>(raw >> (index * 8));\n" +
            "        return *this;\n" +
            "    }\n" +
            "private:\n" +
            "    Value *value_;\n" +
            "};\n" +
            "template <size_t Offset, size_t Width, typename Value>\n" +
            "static inline STPieceProxy<Offset, Width, Value> STPiece(Value &value) {\n" +
            "    return STPieceProxy<Offset, Width, Value>(value);\n" +
            "}\n" +
            "template <size_t Offset, size_t Width, size_t Count>\n" +
            "static inline STUnsigned<Width> STLiteralPiece(const char (&literal)[Count]) {\n" +
            "    static_assert(Offset + Width <= Count, \"literal piece exceeds storage\");\n" +
            "    uint64_t result = 0;\n" +
            "    for (size_t index = 0; index < Width; ++index)\n" +
            "        result |= uint64_t(uint8_t(literal[Offset + index])) << (index * 8);\n" +
            "    return static_cast<STUnsigned<Width>>(result);\n" +
            "}\n" +
            "template <typename Field, typename Base>\n" +
            "static inline Field &STField(Base base, size_t byteOffset) {\n" +
            "    uintptr_t address;\n" +
            "    using Plain = std::remove_cv_t<std::remove_reference_t<Base>>;\n" +
            "    if constexpr (std::is_pointer_v<Plain>)\n" +
            "        address = reinterpret_cast<uintptr_t>(base);\n" +
            "    else address = static_cast<uintptr_t>(base);\n" +
            "    return *reinterpret_cast<Field *>(address + byteOffset);\n" +
            "}\n" +
            "template <typename Record, typename Offset>\n" +
            "static inline Record &STObjectAtByteOffset(Record *base, Offset byteOffset) {\n" +
            "    return *reinterpret_cast<Record *>(\n" +
            "        reinterpret_cast<uintptr_t>(base) + static_cast<intptr_t>(byteOffset));\n" +
            "}\n" +
            "template <typename High, typename Low> static inline auto CONCAT11(High high, Low low) { return STConcat<1, 1>(high, low); }\n" +
            "template <typename High, typename Low> static inline auto CONCAT12(High high, Low low) { return STConcat<1, 2>(high, low); }\n" +
            "template <typename High, typename Low> static inline auto CONCAT13(High high, Low low) { return STConcat<1, 3>(high, low); }\n" +
            "template <typename High, typename Low> static inline auto CONCAT21(High high, Low low) { return STConcat<2, 1>(high, low); }\n" +
            "template <typename High, typename Low> static inline auto CONCAT22(High high, Low low) { return STConcat<2, 2>(high, low); }\n" +
            "template <typename High, typename Low> static inline auto CONCAT26(High high, Low low) { return STConcat<2, 6>(high, low); }\n" +
            "template <typename High, typename Low> static inline auto CONCAT31(High high, Low low) { return STConcat<3, 1>(high, low); }\n" +
            "template <typename High, typename Low> static inline auto CONCAT44(High high, Low low) { return STConcat<4, 4>(high, low); }\n" +
            "template <typename Value, typename Offset> static inline auto SUB21(Value value, Offset offset) { return STSubpiece<1>(value, offset); }\n" +
            "template <typename Value, typename Offset> static inline auto SUB41(Value value, Offset offset) { return STSubpiece<1>(value, offset); }\n" +
            "template <typename Value, typename Offset> static inline auto SUB42(Value value, Offset offset) { return STSubpiece<2>(value, offset); }\n" +
            "template <typename Value, typename Offset> static inline auto SUB43(Value value, Offset offset) { return STSubpiece<3>(value, offset); }\n" +
            "template <typename Value, typename Offset> static inline auto SUB84(Value value, Offset offset) { return STSubpiece<4>(value, offset); }\n" +
            "template <typename Value> static inline int32_t SEXT24(Value value) { return STSignExtend24(value); }\n" +
            "template <typename Left, typename Right> static inline bool CARRY4(Left left, Right right) { return STCarry<uint32_t>(left, right); }\n" +
            "template <typename Left, typename Right> static inline bool SCARRY4(Left left, Right right) { return STSignedCarry<int32_t>(left, right); }\n" +
            "template <typename Left, typename Right> static inline bool SBORROW4(Left left, Right right) { return STSignedBorrow<int32_t>(left, right); }\n" +
            "template <typename Value> static inline auto SQRT(Value value) { using std::sqrt; return sqrt(value); }\n" +
            "template <typename Value> static inline auto ABS(Value value) { using std::abs; return abs(value); }\n" +
            "template <typename Element, typename Array>\n" +
            "static inline Element *DArrayAt(Array *array, uint32_t index) {\n" +
            "    return reinterpret_cast<Element *>(\n" +
            "        reinterpret_cast<uint8_t *>(array->data) + array->elementSize * index);\n" +
            "}\n" +
            "template <typename Record, size_t Count, typename Index>\n" +
            "static inline uintptr_t STRecordByteAddress(Record (&records)[Count], Index index,\n" +
            "        uint32_t byteOffset) {\n" +
            "    return reinterpret_cast<uintptr_t>(\n" +
            "        &records[static_cast<int>(index)]) + byteOffset;\n" +
            "}\n" +
            "template <typename Grid, typename X, typename Y, typename Z>\n" +
            "static inline auto &STGridAt3D(Grid &grid, X x, Y y, Z z) {\n" +
            "    return grid.cells[static_cast<int>(x) +\n" +
            "        static_cast<int>(grid.sizeX) * static_cast<int>(y) +\n" +
            "        static_cast<int>(grid.planeStride) * static_cast<int>(z)];\n" +
            "}\n" +
            "#endif\n" +
            "#if defined(_MSC_VER)\n" +
            "__declspec(noreturn) static __inline void STDebugBreak(void) { abort(); }\n" +
            "#else\n" +
            "static inline __attribute__((noreturn)) void STDebugBreak(void) { abort(); }\n" +
            "#endif\n\n" +
            "#endif\n");
    }

    /**
     * Quality debt and compile readiness are deliberately separate. A generic
     * field name is valid C++, while a residual ._0_2_ token is not; conversely a
     * runtime-covered undefined4 is syntactically harmless but still semantic
     * reconstruction debt. This pass scans the final promoted body spelling and
     * records both the compatibility surface and the still-hard blockers.
     */
    private void writeCompileReadinessArtifacts(Set<String> liveFunctionIds)
            throws IOException {
        List<CompileRule> rules = List.of(
            new CompileRule("runtime_piece_access", "compatibility_shim", "implemented",
                Pattern.compile("\\bSTPiece\\s*<"),
                "replace the proxy with a named field, union facet, or explicit packed helper"),
            new CompileRule("runtime_literal_piece_access", "compatibility_shim", "implemented",
                Pattern.compile("\\bSTLiteralPiece\\s*<"),
                "replace the exact literal-storage read with the intended aggregate initializer"),
            new CompileRule("runtime_typed_byte_offset_field", "compatibility_shim",
                "implemented", Pattern.compile("\\bSTField\\s*<"),
                "replace the typed byte-offset view with a named member after owner/layout proof"),
            new CompileRule("runtime_typed_object_byte_offset", "compatibility_shim",
                "implemented", Pattern.compile("\\bSTObjectAtByteOffset\\s*\\("),
                "replace the exact byte induction variable with a recovered record index"),
            new CompileRule("runtime_record_byte_address", "compatibility_shim",
                "implemented", Pattern.compile("\\bSTRecordByteAddress\\s*\\("),
                "replace the exact record-byte address with a proven typed record index"),
            new CompileRule("runtime_low_piece_update", "compatibility_shim",
                "implemented", Pattern.compile(
                    "\\b(?:STReplaceLowByte(?:16)?|STReplaceLowWord|STPackTagged24)\\s*\\("),
                "replace the exact packed scalar update with a recovered field or bit expression"),
            new CompileRule("runtime_biased_div16", "compatibility_shim",
                "implemented", Pattern.compile("\\bSTBiasedDiv16\\s*\\("),
                "retain the exact VC6 signed grid quotient until its source arithmetic type is recovered"),
            new CompileRule("runtime_packed_bit_access", "compatibility_shim",
                "implemented", Pattern.compile("\\bSTBit(?:Test|Set|Clear)\\s*\\("),
                "retain the packed-bit helper or recover a semantic bitset owner"),
            new CompileRule("runtime_signed_divide_by_four", "compatibility_shim",
                "implemented", Pattern.compile("\\bSTSignedDiv4\\s*\\("),
                "retain exact signed truncation or recover the source arithmetic domain"),
            new CompileRule("runtime_fixed16_round", "compatibility_shim",
                "implemented", Pattern.compile("\\bSTRoundFixed16\\s*\\("),
                "retain exact 16.16 rounding or recover the source fixed-point type"),
            new CompileRule("residual_partial_piece_syntax", "hard_blocker", "unresolved",
                Pattern.compile("(?:\\._[0-9]+_[0-9]+_|\\.\\*[0-9]+_[0-9]+\\*)"),
                "extend the exact lvalue piece rewrite or recover the containing aggregate"),
            new CompileRule("runtime_concat_intrinsic", "compatibility_shim", "implemented",
                Pattern.compile("\\bCONCAT[0-9]+\\s*\\("),
                "replace byte composition with the recovered packed field or bit expression"),
            new CompileRule("runtime_subpiece_intrinsic", "compatibility_shim", "implemented",
                Pattern.compile("\\bSUB[0-9]+\\s*\\("),
                "replace byte extraction with a named field or explicit mask/shift"),
            new CompileRule("runtime_carry_intrinsic", "compatibility_shim", "implemented",
                Pattern.compile("\\b(?:CARRY|SCARRY|SBORROW)[0-9]+\\s*\\("),
                "retain the checked arithmetic helper or recover the source comparison"),
            new CompileRule("runtime_undefined_scalar", "compatibility_shim", "implemented",
                Pattern.compile("\\bundefined(?:[0-9]+)?\\b"),
                "infer signedness, enum, pointer target, field, parameter, or return type"),
            new CompileRule("runtime_nonstandard_width", "compatibility_shim", "implemented",
                Pattern.compile("\\b(?:int3|uint3|float10|unkbyte10|longlong|ulonglong)\\b"),
                "recover the 24-bit piece operation or preserve x87 extended precision explicitly"),
            new CompileRule("runtime_sign_extend_intrinsic", "compatibility_shim", "implemented",
                Pattern.compile("\\bSEXT24\\s*\\("),
                "replace the exact 24-bit sign extension with the recovered scalar expression"),
            new CompileRule("runtime_x87_math_intrinsic", "compatibility_shim", "implemented",
                Pattern.compile("\\b(?:fsin|fcos|fpatan)\\s*\\("),
                "retain the long-double helper until x87 stack semantics are fully reconstructed"),
            new CompileRule("runtime_opaque_code_type", "compatibility_shim", "implemented",
                Pattern.compile("\\bcode\\s*\\*"),
                "install the exact callback or vtable-slot FunctionDefinition"),
            new CompileRule("unresolved_register_value", "semantic_debt", "unresolved",
                Pattern.compile("\\b(?:unaff_|in_stack_|extraout_)[A-Za-z0-9_$]*"),
                "repair the function boundary, calling convention, return width, or SSA lifetime"),
            new CompileRule("raw_indirect_call", "semantic_debt", "unresolved",
                RAW_INDIRECT_CALL,
                "recover the callback, COM, or virtual slot prototype before source extraction")
        );
        Map<String, CompileAggregate> aggregates = new LinkedHashMap<>();
        for (CompileRule rule : rules) aggregates.put(rule.kind, new CompileAggregate(rule));
        List<String> rows = new ArrayList<>();
        Set<String> hardFunctions = new HashSet<>();
        int bodyCount = 0;
        int defaultNames = 0;
        int undefinedSignatures = 0;
        int ownerlessThiscalls = 0;

        for (String id : new TreeSet<>(liveFunctionIds)) {
            Path body = programRoot.resolve("functions").resolve(id).resolve("decomp.c");
            if (!Files.isRegularFile(body)) continue;
            bodyCount++;
            Function function = functionAt(id);
            String functionName = function == null ? "" : function.getName(true);
            if (function != null && function.getSymbol().getSource() ==
                    ghidra.program.model.symbol.SourceType.DEFAULT) defaultNames++;
            if (function != null && RESIDUAL_UNDEFINED_TYPE.matcher(
                    function.getSignature().getPrototypeString(true)).find())
                undefinedSignatures++;
            if (function != null && "__thiscall".equals(function.getCallingConventionName()) &&
                    function.getParentNamespace().isGlobal()) {
                ownerlessThiscalls++;
                rows.add(compileIssue(id, functionName, 0, "ownerless_thiscall",
                    "source_assembly", "generator_required", "",
                    "attach a proven receiver class/record or emit a free-function ABI wrapper"));
            }
            List<String> lines = Files.readAllLines(body, StandardCharsets.UTF_8);
            boolean runtime = lines.stream().anyMatch(line ->
                line.strip().equals(PSEUDOCODE_RUNTIME_INCLUDE));
            boolean requiresRuntime = false;
            for (int lineNumber = 0; lineNumber < lines.size(); lineNumber++) {
                String line = lines.get(lineNumber);
                String stripped = line.stripLeading();
                if (stripped.startsWith("#") || stripped.startsWith("/*") ||
                        stripped.startsWith("*") || stripped.startsWith("//")) continue;
                for (CompileRule rule : rules) {
                    Matcher matcher = rule.pattern.matcher(line);
                    int count = 0;
                    while (matcher.find()) count++;
                    if (count == 0) continue;
                    CompileAggregate aggregate = aggregates.get(rule.kind);
                    aggregate.occurrences += count;
                    if (aggregate.functionIds.add(id)) aggregate.functions++;
                    if (rule.impact.equals("hard_blocker")) hardFunctions.add(id);
                    if (rule.impact.equals("compatibility_shim")) requiresRuntime = true;
                    rows.add(compileIssue(id, functionName, lineNumber + 1, rule.kind,
                        rule.impact, rule.status, oneLine(line), rule.resolution));
                }
            }
            if (requiresRuntime && !runtime) {
                hardFunctions.add(id);
                rows.add(compileIssue(id, functionName, 0, "runtime_include_missing",
                    "hard_blocker", "unresolved", "",
                    "include ../../pseudocode_runtime.h before the function body"));
                CompileRule missing = new CompileRule("runtime_include_missing",
                    "hard_blocker", "unresolved", Pattern.compile("$^"),
                    "include ../../pseudocode_runtime.h before the function body");
                CompileAggregate aggregate = aggregates.computeIfAbsent(missing.kind,
                    ignored -> new CompileAggregate(missing));
                aggregate.occurrences++;
                if (aggregate.functionIds.add(id)) aggregate.functions++;
            }
        }

        List<String> categories = new ArrayList<>();
        addCompileCategory(categories, "missing_declaration_assembly", "source_assembly",
            "generator_required", bodyCount, bodyCount,
            "generate address-stable declarations, namespaces, class declarations, globals, and dependency-ordered headers from types.jsonl, globals.jsonl, functions.json, imports.json, and call_relations.jsonl");
        addCompileCategory(categories, "default_function_name", "semantic_debt",
            "unresolved", defaultNames, defaultNames,
            "recover semantic names where evidence exists; FUN_ADDRESS remains a compilable stable fallback");
        addCompileCategory(categories, "undefined_function_signature", "semantic_debt",
            "unresolved", undefinedSignatures, undefinedSignatures,
            "repair return and parameter ABI types before exposing a public source declaration");
        addCompileCategory(categories, "ownerless_thiscall", "source_assembly",
            "partially_automated", ownerlessThiscalls, ownerlessThiscalls,
            "materialize a deterministic receiver record from complete fields or emit a free-function ABI wrapper");
        for (CompileAggregate aggregate : aggregates.values())
            addCompileCategory(categories, aggregate.rule.kind, aggregate.rule.impact,
                aggregate.rule.status, aggregate.functions, aggregate.occurrences,
                aggregate.rule.resolution);

        rows.sort(Comparator.naturalOrder());
        atomicWrite(programRoot.resolve("compile_readiness_issues.jsonl"), writer -> {
            for (String row : rows) { writer.write(row); writer.newLine(); }
        });
        long runtimeOccurrences = aggregates.values().stream()
            .filter(value -> value.rule.impact.equals("compatibility_shim"))
            .mapToLong(value -> value.occurrences).sum();
        long hardOccurrences = aggregates.values().stream()
            .filter(value -> value.rule.impact.equals("hard_blocker"))
            .mapToLong(value -> value.occurrences).sum();
        writeJson(programRoot.resolve("compile_readiness_summary.json"), jsonObject(
            field("schema", "st-compile-readiness-summary"),
            rawField("schema_version", "1"),
            field("scope", "all exported functions/**/decomp.c bodies"),
            rawField("body_function_count", Integer.toString(bodyCount)),
            rawField("body_functions_without_hard_text_blockers",
                Integer.toString(Math.max(0, bodyCount - hardFunctions.size()))),
            rawField("hard_text_blocker_functions", Integer.toString(hardFunctions.size())),
            rawField("hard_text_blocker_occurrences", Long.toString(hardOccurrences)),
            rawField("runtime_compatibility_occurrences", Long.toString(runtimeOccurrences)),
            rawField("source_assembly_required", "true"),
            field("reconstruction_quality_summary", "decomp_quality_summary.json"),
            rawField("categories", "[" + String.join(",", categories) + "]")
        ));
    }

    private Function functionAt(String id) {
        try {
            Address address = currentProgram.getAddressFactory().getAddress(id);
            return address == null ? null :
                currentProgram.getFunctionManager().getFunctionAt(address);
        }
        catch (Exception ignored) { return null; }
    }

    private String compileIssue(String address, String name, int line, String kind,
            String impact, String status, String excerpt, String resolution) {
        return jsonObject(field("function_address", address), field("function_name", name),
            field("source_file", "functions/" + address + "/decomp.c"),
            rawField("line", Integer.toString(line)), field("kind", kind),
            field("compile_impact", impact), field("automation_status", status),
            field("excerpt", excerpt), field("recommended_resolution", resolution));
    }

    private void addCompileCategory(List<String> categories, String kind, String impact,
            String status, long functions, long occurrences, String resolution) {
        categories.add(jsonObject(field("kind", kind), field("compile_impact", impact),
            field("automation_status", status), rawField("functions", Long.toString(functions)),
            rawField("occurrences", Long.toString(occurrences)),
            field("recommended_resolution", resolution)));
    }

    private FunctionFingerprints functionFingerprints(Function function, List<String> tags,
            List<String> callers,
            List<String> callees, List<String> stringsUsed, List<String> globalsUsed,
            List<String> comments, Set<Function> calledFunctions, Path renderedCode)
            throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        MessageDigest padded = MessageDigest.getInstance("SHA-256");
        String typeFingerprint =
            functionDataTypesFingerprint(function, calledFunctions, renderedCode);
        updateDigests(digest, padded, typeFingerprint);
        updateDigests(digest, padded, function.getName(true));
        updateDigests(digest, padded, function.getSignature().getPrototypeString(true));
        updateDigests(digest, padded, nullToEmpty(function.getCallingConventionName()));
        String callFixup = nullToEmpty(function.getCallFixup());
        if (!callFixup.isEmpty()) updateDigests(digest, padded, callFixup);
        else updateDigest(padded, "");
        updateDigests(digest, padded, Boolean.toString(function.isThunk()));
        if (function.isThunk()) {
            Function target = function.getThunkedFunction(true);
            updateDigests(digest, padded, target == null ? "" : functionId(target));
        }
        updateDigests(digest, padded, Boolean.toString(function.hasNoReturn()));
        updateDigests(digest, padded, Boolean.toString(function.hasVarArgs()));
        updateDigests(digest, padded, nullToEmpty(function.getComment()));
        updateDigests(digest, padded, nullToEmpty(function.getRepeatableComment()));
        updateDigests(digest, padded, variablesJson(function.getParameters()));
        updateDigests(digest, padded, variablesJson(function.getLocalVariables()));
        updateDigests(digest, padded, String.join("\n", tags));
        updateDigests(digest, padded, String.join("\n", callers));
        updateDigests(digest, padded, String.join("\n", callees));
        List<String> calleeSignatures = new ArrayList<>();
        List<String> paddedCalleeSignatures = new ArrayList<>();
        for (Function callee : calledFunctions) {
            String base = functionId(callee) + "\u0000" +
                callee.getSignature().getPrototypeString(true) + "\u0000" +
                nullToEmpty(callee.getCallingConventionName());
            String calleeFixup = nullToEmpty(callee.getCallFixup());
            calleeSignatures.add(calleeFixup.isEmpty() ? base : base + "\u0000" + calleeFixup);
            paddedCalleeSignatures.add(base + "\u0000" + calleeFixup);
        }
        calleeSignatures.sort(Comparator.naturalOrder());
        paddedCalleeSignatures.sort(Comparator.naturalOrder());
        updateDigest(digest, String.join("\n", calleeSignatures));
        updateDigest(padded, String.join("\n", paddedCalleeSignatures));
        updateDigests(digest, padded, String.join("\n", stringsUsed));
        updateDigests(digest, padded, String.join("\n", globalsUsed));
        updateDigests(digest, padded, String.join("\n", comments));
        updateDigests(digest, padded, functionSymbolsFingerprint(function));
        String compositeStringGuard = compositeStringCandidateFingerprint(function);
        if (!compositeStringGuard.isEmpty())
            updateDigests(digest, padded, compositeStringGuard);
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            checkCancelled();
            Instruction instruction = instructions.next();
            updateDigests(digest, padded, addr(instruction.getAddress()));
            try {
                byte[] bytes = instruction.getBytes();
                digest.update(bytes);
                padded.update(bytes);
            }
            catch (ghidra.program.model.mem.MemoryAccessException exception) {
                updateDigests(digest, padded, instruction.toString());
            }
        }
        return new FunctionFingerprints(hexDigest(digest), hexDigest(padded));
    }

    private void updateDigests(MessageDigest first, MessageDigest second, String value) {
        updateDigest(first, value);
        updateDigest(second, value);
    }

    private String hexDigest(MessageDigest digest) {
        StringBuilder hex = new StringBuilder();
        for (byte value : digest.digest()) hex.append(String.format("%02x", value & 0xff));
        return hex.toString();
    }

    private String functionSymbolsFingerprint(Function function) {
        Set<String> related = new TreeSet<>();
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            Symbol local = symbols.getPrimarySymbol(instruction.getAddress());
            if (local != null) related.add(addr(local.getAddress()) + " " + local.getName(true));
            for (Reference reference : references.getReferencesFrom(instruction.getAddress())) {
                Symbol target = symbols.getPrimarySymbol(reference.getToAddress());
                if (target != null)
                    related.add(addr(target.getAddress()) + " " + target.getName(true));
            }
        }
        return String.join("\n", related);
    }

    private void pruneStaleFunctionDirectories(Set<String> liveIds) throws IOException {
        if (!Files.isDirectory(functionsRoot)) return;
        try (Stream<Path> entries = Files.list(functionsRoot)) {
            for (Path entry : entries.toList()) {
                String name = entry.getFileName().toString();
                if (!Files.isDirectory(entry) || !name.matches("[0-9A-Fa-f]{8,16}") ||
                        liveIds.contains(name.toUpperCase(Locale.ROOT))) continue;
                try (Stream<Path> tree = Files.walk(entry)) {
                    for (Path path : tree.sorted(Comparator.reverseOrder()).toList())
                        Files.deleteIfExists(path);
                }
            }
        }
    }

    private String functionDataTypesFingerprint(Function function, Set<Function> calledFunctions,
            Path renderedCode) throws Exception {
        Set<String> related = new TreeSet<>();
        collectTypeIdentity(function.getReturnType(), related);
        for (Variable variable : function.getParameters()) collectTypeIdentity(variable.getDataType(), related);
        for (Variable variable : function.getLocalVariables()) collectTypeIdentity(variable.getDataType(), related);
        for (Function callee : calledFunctions) {
            collectTypeIdentity(callee.getReturnType(), related);
            for (Variable variable : callee.getParameters())
                collectTypeIdentity(variable.getDataType(), related);
        }
        collectReferencedDataTypes(function, related);
        collectAccessedCompositeFields(function, related);
        collectRenderedCompositeMembers(renderedCode, related);
        collectRenderedCallableMembers(renderedCode, related);
        collectRenderedScaledTypeDependencies(renderedCode, related);
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        for (String item : related) updateDigest(digest, item);
        StringBuilder hex = new StringBuilder();
        for (byte value : digest.digest()) hex.append(String.format("%02x", value & 0xff));
        return hex.toString();
    }

    /**
     * A decompiler-only local may acquire a structure type through SSA propagation without
     * becoming a persistent Listing local.  Machine-level tracking then cannot always link a
     * later field access back to the structure, so a newly recovered component could leave an
     * otherwise reusable body stale.  Use the previous rendering only as a dependency locator:
     * a structure type must be named in that body and the exact rendered member name/offset must
     * also occur.  This keeps the fingerprint scoped to components capable of changing that one
     * body instead of making it depend on every field or every data type in the program.
     */
    private void collectRenderedCompositeMembers(Path renderedCode, Set<String> result)
            throws IOException {
        if (renderedCode == null || !Files.isRegularFile(renderedCode)) return;
        String code = Files.readString(renderedCode, StandardCharsets.UTF_8);
        if (code.indexOf("->") < 0 && code.indexOf('.') < 0) return;
        ensureRenderedStructureTypeIndex();

        Set<String> identifiers = new HashSet<>();
        Matcher identifier = SIMPLE_IDENTIFIER.matcher(code);
        while (identifier.find()) identifiers.add(identifier.group());

        Set<String> memberNames = new HashSet<>();
        Set<Integer> genericOffsets = new HashSet<>();
        Matcher member = RENDERED_MEMBER_ACCESS.matcher(code);
        while (member.find()) {
            String name = member.group(1);
            memberNames.add(name);
            Integer offset = renderedGenericFieldOffset(name);
            if (offset != null) genericOffsets.add(offset);
        }

        for (String typeName : identifiers) {
            List<ghidra.program.model.data.Structure> structures =
                renderedStructureTypes.get(typeName);
            if (structures == null) continue;
            for (ghidra.program.model.data.Structure structure : structures) {
                for (ghidra.program.model.data.DataTypeComponent component :
                        structure.getDefinedComponents()) {
                    String fieldName = nullToEmpty(component.getFieldName());
                    if (!memberNames.contains(fieldName) &&
                            !genericOffsets.contains(component.getOffset())) continue;
                    addRenderedCompositeDependency(structure, component, result);
                }
                // An old rendering may spell a newly recovered component as field_0xNN even
                // when it used to be an undefined filler and therefore was not defined.
                for (int offset : genericOffsets) {
                    if (offset < 0 || offset >= structure.getLength()) continue;
                    ghidra.program.model.data.DataTypeComponent component =
                        structure.getComponentContaining(offset);
                    if (component != null && component.getOffset() == offset)
                        addRenderedCompositeDependency(structure, component, result);
                }
            }
        }
    }

    private void ensureRenderedStructureTypeIndex() throws IOException {
        if (renderedStructureTypes != null) return;
        Map<String, List<ghidra.program.model.data.Structure>> index = new HashMap<>();
        Iterator<DataType> iterator = currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            checkCancelled();
            DataType type = iterator.next();
            if (!(type instanceof ghidra.program.model.data.Structure structure)) continue;
            index.computeIfAbsent(structure.getName(), ignored -> new ArrayList<>())
                .add(structure);
        }
        for (List<ghidra.program.model.data.Structure> structures : index.values())
            structures.sort(Comparator.comparing(DataType::getPathName));
        renderedStructureTypes = index;
    }

    private Integer renderedGenericFieldOffset(String name) {
        Matcher matcher = Pattern.compile("^field_(?:0x)?([0-9A-Fa-f]+)$").matcher(name);
        if (!matcher.matches()) return null;
        try {
            return Integer.parseUnsignedInt(matcher.group(1), 16);
        }
        catch (NumberFormatException exception) {
            return null;
        }
    }

    private void addRenderedCompositeDependency(
            ghidra.program.model.data.Structure structure,
            ghidra.program.model.data.DataTypeComponent component, Set<String> result) {
        DataType type = component.getDataType();
        result.add("rendered_field\u0000" + structure.getPathName() + "\u0000" +
            component.getOffset() + "\u0000" + component.getLength() + "\u0000" +
            nullToEmpty(component.getFieldName()) + "\u0000" + type.getPathName() +
            "\u0000" + nullToEmpty(component.getComment()));
        collectTypeIdentity(type, result);
    }

    /**
     * The Listing does not always retain the receiver that the decompiler derives from a
     * saved ECX value.  In that case machine-level composite tracking cannot associate an
     * indirect call with its vtable slot, even though the previous C rendering can.  Record
     * only callable members which the function actually rendered.  This closes the cache
     * hole without making every function depend on every vtable or on unrelated new types.
     */
    private void collectRenderedCallableMembers(Path renderedCode, Set<String> result)
            throws IOException {
        if (renderedCode == null || !Files.isRegularFile(renderedCode)) return;
        String code = Files.readString(renderedCode, StandardCharsets.UTF_8);
        if (code.indexOf("->") < 0 && code.indexOf('.') < 0) return;
        ensureRenderedCallableMemberIndex();
        Set<String> names = new HashSet<>();
        Matcher matcher = RENDERED_MEMBER_ACCESS.matcher(code);
        while (matcher.find()) names.add(matcher.group(1));
        for (String name : names) {
            List<RenderedCallableDependency> dependencies =
                renderedCallableMembers.get(name);
            if (dependencies == null) continue;
            for (RenderedCallableDependency dependency : dependencies) {
                result.add("rendered_callable_member\u0000" + dependency.ownerPath +
                    "\u0000" + dependency.offset + "\u0000" + dependency.length +
                    "\u0000" + dependency.fieldName + "\u0000" +
                    dependency.type.getPathName() + "\u0000" + dependency.comment);
                collectTypeIdentity(dependency.type, result);
            }
        }
    }

    /**
     * A rendered member subscript is scaled by the pointed structure's complete
     * length.  Component-scoped fingerprints are insufficient for expressions
     * such as {@code object->vtable[1].slot}: extending the physical vtable can
     * change which byte slot that old text denotes even when the named slot's own
     * definition did not change.  Bind only the exact owner member and pointee
     * length which the cached body already rendered; unrelated structure growth
     * remains outside the function fingerprint.
     */
    private void collectRenderedScaledTypeDependencies(Path renderedCode,
            Set<String> result) throws IOException {
        if (renderedCode == null || !Files.isRegularFile(renderedCode)) return;
        String code = Files.readString(renderedCode, StandardCharsets.UTF_8);
        if (code.indexOf('[') < 0 || code.indexOf("->") < 0) return;
        Map<String, PointerDeclaration> declarations = pointerDeclarations(code);
        if (declarations.isEmpty()) return;
        Matcher access = RENDERED_SCALED_MEMBER_ACCESS.matcher(code);
        while (access.find()) {
            PointerDeclaration declaration = declarations.get(access.group("base"));
            if (declaration == null || declaration.stars != 1) continue;
            Structure owner = uniqueStructure(declaration.type);
            if (owner == null) continue;
            DataTypeComponent component = componentByName(owner,
                access.group("member"));
            if (component == null) continue;
            DataType memberType = unwrapTypeDef(component.getDataType());
            if (!(memberType instanceof Pointer pointer)) continue;
            DataType pointed = unwrapTypeDef(pointer.getDataType());
            if (!(pointed instanceof Structure structure)) continue;
            result.add("rendered_scaled_member\u0000" + owner.getPathName() +
                "\u0000" + component.getOffset() + "\u0000" +
                nullToEmpty(component.getFieldName()) + "\u0000" +
                structure.getPathName() + "\u0000length=" + structure.getLength());
            collectTypeIdentity(pointed, result);
        }
    }

    private void ensureRenderedCallableMemberIndex() throws IOException {
        if (renderedCallableMembers != null) return;
        Map<String, List<RenderedCallableDependency>> index = new HashMap<>();
        Iterator<DataType> iterator = currentProgram.getDataTypeManager().getAllDataTypes();
        while (iterator.hasNext()) {
            checkCancelled();
            DataType type = iterator.next();
            if (!(type instanceof ghidra.program.model.data.Structure structure)) continue;
            for (DataTypeComponent component : structure.getDefinedComponents()) {
                String fieldName = component.getFieldName();
                if (fieldName == null || fieldName.isBlank() ||
                        callableDefinition(component.getDataType()) == null) continue;
                index.computeIfAbsent(fieldName, ignored -> new ArrayList<>()).add(
                    new RenderedCallableDependency(structure.getPathName(),
                        component.getOffset(), component.getLength(), fieldName,
                        component.getDataType(), nullToEmpty(component.getComment())));
            }
        }
        for (List<RenderedCallableDependency> dependencies : index.values()) {
            dependencies.sort(Comparator
                .comparing((RenderedCallableDependency value) -> value.ownerPath)
                .thenComparingInt(value -> value.offset)
                .thenComparing(value -> value.type.getPathName()));
        }
        renderedCallableMembers = index;
    }

    private ghidra.program.model.data.FunctionDefinition callableDefinition(DataType type) {
        DataType current = type;
        Set<String> seen = new HashSet<>();
        while (current instanceof ghidra.program.model.data.TypeDef typedef &&
                seen.add(current.getPathName())) current = typedef.getBaseDataType();
        if (current instanceof ghidra.program.model.data.Pointer pointer)
            current = pointer.getDataType();
        while (current instanceof ghidra.program.model.data.TypeDef typedef &&
                seen.add(current.getPathName())) current = typedef.getBaseDataType();
        return current instanceof ghidra.program.model.data.FunctionDefinition definition ?
            definition : null;
    }

    private void collectTypeIdentity(DataType type, Set<String> result) {
        if (type == null) return;
        String key = "type\u0000" + type.getPathName();
        if (!result.add(key)) return;
        // Structure layouts are dependency-scoped below. A union is different: member
        // order and every overlapping alternative can change which expression the
        // decompiler selects for the same byte offset, so its complete ordered layout is
        // a real per-function dependency whenever the union type is referenced.
        if (type instanceof ghidra.program.model.data.Union union) {
            result.add(key + "\u0000" + type.getLength() + "\u0000" +
                nullToEmpty(type.getDescription()) + "\u0000" + dataTypeDetailJson(type));
            for (ghidra.program.model.data.DataTypeComponent component : union.getComponents())
                collectTypeIdentity(component.getDataType(), result);
            return;
        }
        // A structure's full layout is intentionally excluded here. Only components
        // actually addressed by this function are added below.  A specialized
        // DArray descriptor is the deliberate exception: element accesses use the
        // runtime elementSize/data pair, so instruction-level field tracking cannot
        // see which components of the pointed record the decompiler will render.
        // Include that one descriptor and its element layout only for functions
        // whose own signature/locals already reference the specialization.
        if (type instanceof ghidra.program.model.data.Structure structure) {
            if (nullToEmpty(structure.getDescription())
                    .startsWith(DARRAY_DESCRIPTOR_MARKER))
                collectDArrayDescriptorLayoutIdentity(structure, result);
            return;
        }
        result.add(key + "\u0000" + type.getLength() + "\u0000" +
            nullToEmpty(type.getDescription()) + "\u0000" + dataTypeDetailJson(type));
        if (type instanceof ghidra.program.model.data.Pointer pointer) {
            collectTypeIdentity(pointer.getDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.TypeDef typedef) {
            collectTypeIdentity(typedef.getBaseDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.Array array) {
            collectTypeIdentity(array.getDataType(), result);
        }
        else if (type instanceof ghidra.program.model.data.FunctionDefinition definition) {
            collectTypeIdentity(definition.getReturnType(), result);
            for (ghidra.program.model.data.ParameterDefinition argument : definition.getArguments())
                collectTypeIdentity(argument.getDataType(), result);
        }
    }

    private void collectDArrayDescriptorLayoutIdentity(
            ghidra.program.model.data.Structure descriptor, Set<String> result) {
        collectStructureLayoutIdentity("darray_descriptor", descriptor, result);
        ghidra.program.model.data.DataTypeComponent data =
            descriptor.getComponentAt(0x1c);
        if (data == null || data.getOffset() != 0x1c) return;
        DataType element = data.getDataType();
        while (element instanceof ghidra.program.model.data.TypeDef typedef)
            element = typedef.getBaseDataType();
        if (element instanceof ghidra.program.model.data.Pointer pointer)
            element = pointer.getDataType();
        while (element instanceof ghidra.program.model.data.TypeDef typedef)
            element = typedef.getBaseDataType();
        if (element instanceof ghidra.program.model.data.Structure structure)
            collectStructureLayoutIdentity("darray_element", structure, result);
    }

    private void collectStructureLayoutIdentity(String kind,
            ghidra.program.model.data.Structure structure, Set<String> result) {
        String prefix = kind + "\u0000" + structure.getPathName();
        result.add(prefix + "\u0000length=" + structure.getLength() +
            "\u0000description=" + nullToEmpty(structure.getDescription()));
        for (ghidra.program.model.data.DataTypeComponent component :
                structure.getDefinedComponents()) {
            result.add(prefix + "\u0000component=" + component.getOffset() +
                "\u0000length=" + component.getLength() +
                "\u0000name=" + nullToEmpty(component.getFieldName()) +
                "\u0000type=" + component.getDataType().getPathName() +
                "\u0000comment=" + nullToEmpty(component.getComment()));
            collectTypeIdentity(component.getDataType(), result);
        }
    }

    private void collectReferencedDataTypes(Function function, Set<String> result)
            throws IOException {
        InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
        while (instructions.hasNext()) {
            checkCancelled();
            Instruction instruction = instructions.next();
            for (Reference reference : references.getReferencesFrom(instruction.getAddress())) {
                Address target = reference.getToAddress();
                if (target == null || !target.isMemoryAddress()) continue;
                Data data = listing.getDefinedDataContaining(target);
                if (data == null) continue;
                DataType type = data.getDataType();
                collectTypeIdentity(type, result);
                if (type instanceof ghidra.program.model.data.Structure structure) {
                    long offset = target.subtract(data.getMinAddress());
                    addAccessedComponent(new TypedAccess(structure, 0), offset, result);
                }
            }
        }
    }

    private void collectAccessedCompositeFields(Function function, Set<String> result)
            throws IOException {
        List<FingerprintBlock> blocks = fingerprintBlocks(function);
        if (blocks.isEmpty()) return;
        FingerprintBlock entryBlock = blocks.stream()
            .filter(block -> block.start.equals(function.getEntryPoint()))
            .findFirst().orElse(blocks.get(0));
        FingerprintState entry = fingerprintEntryState(function);
        Map<FingerprintBlock, FingerprintState> inputs = new LinkedHashMap<>();
        Map<FingerprintBlock, FingerprintState> outputs = new LinkedHashMap<>();
        Map<FingerprintBlock, Set<String>> dependencies = new LinkedHashMap<>();
        Set<String> observedDependencies = new TreeSet<>();
        ArrayDeque<FingerprintBlock> work = new ArrayDeque<>();
        Set<FingerprintBlock> queued = new HashSet<>();
        inputs.put(entryBlock, entry.copy());
        work.add(entryBlock);
        queued.add(entryBlock);

        // Re-evaluate only successors whose joined input actually changed.  The
        // previous whole-function sweeps processed every block at least twice and
        // became the dominant cost even when 99% of functions were cache hits.
        int processed = 0;
        int processLimit = Math.max(128, blocks.size() * 16);
        boolean fallback = false;
        while (!work.isEmpty()) {
            checkCancelled();
            if (++processed > processLimit) {
                fallback = true;
                break;
            }
            FingerprintBlock block = work.removeFirst();
            queued.remove(block);
            FingerprintState input = inputs.get(block);
            if (input == null) continue;
            Set<String> blockDependencies = new TreeSet<>();
            FingerprintState output = transferFingerprintBlock(block, input, blockDependencies);
            dependencies.put(block, blockDependencies);
            observedDependencies.addAll(blockDependencies);
            if (output.equals(outputs.get(block))) continue;
            outputs.put(block, output);
            for (FingerprintBlock successor : block.successors) {
                if (successor == entryBlock) continue;
                List<FingerprintState> predecessors = new ArrayList<>();
                for (FingerprintBlock predecessor : successor.predecessors) {
                    FingerprintState state = outputs.get(predecessor);
                    if (state != null) predecessors.add(state);
                }
                if (predecessors.isEmpty()) continue;
                FingerprintState joined = joinFingerprintStates(predecessors);
                if (joined.equals(inputs.get(successor))) continue;
                inputs.put(successor, joined);
                if (queued.add(successor)) work.addLast(successor);
            }
        }

        if (fallback) {
            // A malformed/irreducible CFG must never stall a full export.  Every
            // dependency seen before widening is retained, which may invalidate
            // a few extra cached bodies but cannot reuse a body after a known
            // relevant type change.
            result.addAll(observedDependencies);
            fingerprintCfgFallbackCount++;
            if (fingerprintCfgFallbackFunctions.size() < 32)
                fingerprintCfgFallbackFunctions.add(addr(function.getEntryPoint()));
        }
        else {
            // Each block's dependency set is replaced whenever its input changes,
            // so the final union corresponds to the converged states without a
            // second full instruction pass.
            for (Set<String> blockDependencies : dependencies.values())
                result.addAll(blockDependencies);
        }
    }

    private FingerprintState fingerprintEntryState(Function function) {
        FingerprintState state = new FingerprintState();
        long frameBias = currentProgram.getDefaultPointerSize();
        for (Parameter parameter : function.getParameters()) {
            TypedAccess value = typedPointer(parameter.getDataType());
            if (value == null) continue;
            if (parameter.isAutoParameter() && "ECX".equalsIgnoreCase(
                    parameter.getRegister() == null ? "" : parameter.getRegister().getName())) {
                state.registers.put("ECX", value);
            }
            else if (parameter.isStackVariable()) {
                state.stack.put((long)parameter.getStackOffset() + frameBias, value);
            }
        }
        return state;
    }

    private List<FingerprintBlock> fingerprintBlocks(Function function) throws IOException {
        List<Instruction> instructions = new ArrayList<>();
        InstructionIterator iterator = listing.getInstructions(function.getBody(), true);
        while (iterator.hasNext()) instructions.add(iterator.next());
        if (instructions.isEmpty()) return List.of();

        Set<Address> starts = new HashSet<>();
        starts.add(instructions.get(0).getAddress());
        for (int index = 0; index < instructions.size(); index++) {
            Instruction instruction = instructions.get(index);
            boolean call = instruction.getFlowType().isCall();
            if (!call) {
                for (Address flow : instruction.getFlows())
                    if (function.getBody().contains(flow)) starts.add(flow);
                for (Reference reference : instruction.getReferencesFrom()) {
                    Address target = reference.getToAddress();
                    if (reference.getReferenceType().isFlow() && target != null &&
                            function.getBody().contains(target)) starts.add(target);
                }
            }
            if (index + 1 < instructions.size() &&
                    (instruction.getFlowType().isJump() ||
                     instruction.getFlowType().isTerminal() ||
                     instruction.getFallThrough() == null ||
                     !instruction.getFallThrough().equals(instructions.get(index + 1).getAddress())))
                starts.add(instructions.get(index + 1).getAddress());
        }

        List<FingerprintBlock> blocks = new ArrayList<>();
        FingerprintBlock current = null;
        for (Instruction instruction : instructions) {
            if (current == null || starts.contains(instruction.getAddress())) {
                current = new FingerprintBlock(instruction.getAddress());
                blocks.add(current);
            }
            current.instructions.add(instruction);
        }
        Map<Address, FingerprintBlock> byStart = new HashMap<>();
        for (FingerprintBlock block : blocks) byStart.put(block.start, block);
        for (FingerprintBlock block : blocks) {
            Instruction last = block.instructions.get(block.instructions.size() - 1);
            Set<Address> destinations = new LinkedHashSet<>();
            if (!last.getFlowType().isCall()) {
                for (Address flow : last.getFlows()) destinations.add(flow);
                for (Reference reference : last.getReferencesFrom())
                    if (reference.getReferenceType().isFlow())
                        destinations.add(reference.getToAddress());
            }
            Address fallThrough = last.getFallThrough();
            if (fallThrough != null) destinations.add(fallThrough);
            for (Address destination : destinations) {
                FingerprintBlock successor = byStart.get(destination);
                if (successor == null) continue;
                block.successors.add(successor);
                successor.predecessors.add(block);
            }
        }
        return blocks;
    }

    private FingerprintState joinFingerprintStates(List<FingerprintState> states) {
        FingerprintState result = new FingerprintState();
        Set<String> registerKeys = new HashSet<>();
        Set<Long> stackKeys = new HashSet<>();
        for (FingerprintState state : states) {
            registerKeys.addAll(state.registers.keySet());
            stackKeys.addAll(state.stack.keySet());
        }
        for (String key : registerKeys) {
            TypedAccess value = consistentFingerprintValue(states, key, false);
            if (value != null) result.registers.put(key, value);
        }
        for (Long key : stackKeys) {
            TypedAccess value = consistentFingerprintValue(states, key, true);
            if (value != null) result.stack.put(key, value);
        }
        return result;
    }

    private TypedAccess consistentFingerprintValue(List<FingerprintState> states,
            Object key, boolean stack) {
        TypedAccess result = null;
        for (FingerprintState state : states) {
            TypedAccess candidate = stack ? state.stack.get((Long)key) :
                state.registers.get((String)key);
            // A fact is valid after a join only when every currently reachable
            // predecessor carries the same value.  Ignoring an absent value made
            // loop headers alternate between present/absent facts indefinitely.
            if (candidate == null) return null;
            if (result == null) result = candidate;
            else if (!result.equals(candidate)) return null;
        }
        return result;
    }

    private FingerprintState transferFingerprintBlock(FingerprintBlock block,
            FingerprintState input, Set<String> result) throws IOException {
        FingerprintState state = input.copy();
        for (Instruction instruction : block.instructions) {
            checkCancelled();
            String mnemonic = instruction.getMnemonicString().toUpperCase(Locale.ROOT);
            String[] operands = fingerprintOperands(instruction.toString().toUpperCase(Locale.ROOT));
            if (result != null) {
                for (String operand : operands) {
                    FingerprintMemory memory = fingerprintMemory(operand);
                    TypedAccess base = memory == null ? null :
                        state.registers.get(memory.register);
                    if (base != null) addAccessedComponent(base, memory.displacement, result);
                }
            }
            if ("CALL".equals(mnemonic)) {
                Function called = fingerprintCalledFunction(instruction);
                state.registers.remove("EAX"); state.registers.remove("ECX");
                state.registers.remove("EDX");
                if (called != null) {
                    TypedAccess returned = typedPointer(called.getReturnType());
                    if (returned != null) state.registers.put("EAX", returned);
                }
                continue;
            }
            updateFingerprintState(instruction, mnemonic, operands, state);
        }
        return state;
    }

    private void updateFingerprintState(Instruction instruction, String mnemonic,
            String[] operands, FingerprintState state) {
        if (operands.length == 0) return;
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            FingerprintMemory destinationMemory = fingerprintMemory(operands[0]);
            if (destinationMemory != null && "EBP".equals(destinationMemory.register)) {
                String sourceRegister = fingerprintRegister(operands[1]);
                TypedAccess source = sourceRegister != null &&
                    fingerprintFullRegister(operands[1]) ?
                    state.registers.get(sourceRegister) : null;
                if (source == null) state.stack.remove(destinationMemory.displacement);
                else state.stack.put(destinationMemory.displacement, source);
                return;
            }
        }
        String destination = fingerprintRegister(operands[0]);
        if (destination == null) return;
        if (!fingerprintFullRegister(operands[0])) {
            state.registers.remove(destination); return;
        }
        if ("MOV".equals(mnemonic) && operands.length >= 2) {
            TypedAccess source = null;
            String sourceRegister = fingerprintRegister(operands[1]);
            if (sourceRegister != null && fingerprintFullRegister(operands[1]))
                source = state.registers.get(sourceRegister);
            FingerprintMemory memory = fingerprintMemory(operands[1]);
            if (source == null && memory != null && "EBP".equals(memory.register))
                source = state.stack.get(memory.displacement);
            if (source == null && memory != null) {
                TypedAccess base = state.registers.get(memory.register);
                if (base != null) source = loadedCompositeField(base, memory.displacement);
            }
            if (source == null) source = referencedTypedPointer(instruction, 1);
            if (source == null) state.registers.remove(destination);
            else state.registers.put(destination, source);
            return;
        }
        if ("LEA".equals(mnemonic) && operands.length >= 2) {
            FingerprintMemory memory = fingerprintMemory(operands[1]);
            TypedAccess base = memory == null ? null : state.registers.get(memory.register);
            if (base == null) state.registers.remove(destination);
            else state.registers.put(destination,
                new TypedAccess(base.structure, base.offset + memory.displacement));
            return;
        }
        if (("ADD".equals(mnemonic) || "SUB".equals(mnemonic)) && operands.length >= 2 &&
                state.registers.containsKey(destination)) {
            Long value = fingerprintImmediate(operands[1]);
            if (value == null) state.registers.remove(destination);
            else {
                TypedAccess old = state.registers.get(destination);
                state.registers.put(destination, new TypedAccess(old.structure, old.offset +
                    ("SUB".equals(mnemonic) ? -value : value)));
            }
            return;
        }
        if (!Set.of("CMP", "TEST", "PUSH", "JMP", "RET").contains(mnemonic))
            state.registers.remove(destination);
    }

    private void addAccessedComponent(TypedAccess base, long displacement, Set<String> result) {
        long offset = base.offset + displacement;
        ghidra.program.model.data.Structure structure = base.structure;
        if (offset < 0 || offset > Integer.MAX_VALUE || offset >= structure.getLength()) {
            result.add("field\u0000" + structure.getPathName() + "\u0000out_of_range\u0000" +
                offset + "\u0000" + structure.getLength());
            return;
        }
        List<ghidra.program.model.data.DataTypeComponent> components =
            structure.getComponentsContaining((int)offset);
        if (components.isEmpty()) {
            ghidra.program.model.data.DataTypeComponent component =
                structure.getComponentContaining((int)offset);
            if (component != null) components = List.of(component);
        }
        for (ghidra.program.model.data.DataTypeComponent component : components) {
            DataType type = component.getDataType();
            result.add("field\u0000" + structure.getPathName() + "\u0000" +
                component.getOffset() + "\u0000" + component.getLength() + "\u0000" +
                nullToEmpty(component.getFieldName()) + "\u0000" + type.getPathName() +
                "\u0000" + nullToEmpty(component.getComment()));
            collectTypeIdentity(type, result);
        }
    }

    private TypedAccess loadedCompositeField(TypedAccess base, long displacement) {
        long offset = base.offset + displacement;
        if (offset < 0 || offset > Integer.MAX_VALUE || offset >= base.structure.getLength())
            return null;
        ghidra.program.model.data.DataTypeComponent component =
            base.structure.getComponentContaining((int)offset);
        return component == null ? null : typedPointer(component.getDataType());
    }

    private TypedAccess referencedTypedPointer(Instruction instruction, int operandIndex) {
        for (Reference reference : instruction.getReferencesFrom()) {
            if (reference.getOperandIndex() != operandIndex) continue;
            Data data = listing.getDefinedDataContaining(reference.getToAddress());
            if (data == null) continue;
            TypedAccess value = typedPointer(data.getDataType());
            if (value != null) return value;
        }
        return null;
    }

    private TypedAccess typedPointer(DataType type) {
        DataType current = type;
        Set<String> seen = new HashSet<>();
        while (current instanceof ghidra.program.model.data.TypeDef typedef &&
                seen.add(current.getPathName())) current = typedef.getBaseDataType();
        if (!(current instanceof ghidra.program.model.data.Pointer pointer)) return null;
        current = pointer.getDataType();
        while (current instanceof ghidra.program.model.data.TypeDef typedef &&
                seen.add(current.getPathName())) current = typedef.getBaseDataType();
        return current instanceof ghidra.program.model.data.Structure structure ?
            new TypedAccess(structure, 0) : null;
    }

    private Function fingerprintCalledFunction(Instruction instruction) {
        for (Address flow : instruction.getFlows()) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(flow);
            if (function == null) continue;
            Set<Address> seen = new HashSet<>();
            while (function.isThunk() && seen.add(function.getEntryPoint())) {
                Function target = function.getThunkedFunction(false);
                if (target == null || target.equals(function)) break;
                function = target;
            }
            return function;
        }
        return null;
    }

    private String[] fingerprintOperands(String instruction) {
        int space = instruction.indexOf(' ');
        return space < 0 || space == instruction.length() - 1 ? new String[0] :
            instruction.substring(space + 1).split("\\s*,\\s*");
    }
    private FingerprintMemory fingerprintMemory(String operand) {
        int open = operand.indexOf('['), close = operand.lastIndexOf(']');
        if (open < 0 || close <= open) return null;
        String expression = operand.substring(open + 1, close)
            .replace(" ", "").toUpperCase(Locale.ROOT);
        while (expression.contains("+-") || expression.contains("-+") ||
                expression.contains("--")) {
            expression = expression.replace("+-", "-")
                .replace("-+", "-").replace("--", "+");
        }
        Matcher term = Pattern.compile("([+-]?)([^+-]+)").matcher(expression);
        String baseRegister = null;
        long displacement = 0;
        int cursor = 0;
        while (term.find()) {
            if (term.start() != cursor) return null;
            cursor = term.end();
            String sign = term.group(1);
            String value = term.group(2);
            String register = fingerprintRegister(value);
            if (register != null) {
                if ("-".equals(sign) || baseRegister != null) return null;
                baseRegister = register;
                continue;
            }
            if (value.matches("[A-Z][A-Z0-9]{1,3}\\*(?:0X[0-9A-F]+|[0-9]+)"))
                continue; // index*scale does not change the member displacement
            Long parsed = fingerprintImmediate(value);
            if (parsed == null) return null;
            displacement += "-".equals(sign) ? -parsed : parsed;
        }
        if (cursor != expression.length() || baseRegister == null) return null;
        if (currentProgram.getDefaultPointerSize() == 4 &&
                displacement >= 0x80000000L && displacement <= 0xffffffffL)
            displacement -= 0x100000000L;
        return new FingerprintMemory(baseRegister, displacement);
    }
    private String fingerprintRegister(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT);
        return value.matches("[A-Z][A-Z0-9]{1,3}") ?
            fingerprintCanonicalRegister(value) : null;
    }
    private String fingerprintCanonicalRegister(String register) {
        return switch (register.toUpperCase(Locale.ROOT)) {
            case "AL", "AH", "AX", "EAX", "RAX" -> "EAX";
            case "BL", "BH", "BX", "EBX", "RBX" -> "EBX";
            case "CL", "CH", "CX", "ECX", "RCX" -> "ECX";
            case "DL", "DH", "DX", "EDX", "RDX" -> "EDX";
            case "SI", "ESI", "RSI" -> "ESI"; case "DI", "EDI", "RDI" -> "EDI";
            case "BP", "EBP", "RBP" -> "EBP"; case "SP", "ESP", "RSP" -> "ESP";
            default -> register.toUpperCase(Locale.ROOT);
        };
    }
    private boolean fingerprintFullRegister(String operand) {
        return Set.of("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP", "ESP",
            "RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP")
            .contains(operand.trim().toUpperCase(Locale.ROOT));
    }
    private Long fingerprintImmediate(String operand) {
        String value = operand.trim().toUpperCase(Locale.ROOT).replace("+", "");
        try {
            if (value.startsWith("0X")) return Long.parseUnsignedLong(value.substring(2), 16);
            if (value.matches("[0-9]+")) return Long.parseLong(value);
        }
        catch (NumberFormatException ignored) { }
        return null;
    }

    private static class TypedAccess {
        final ghidra.program.model.data.Structure structure; final long offset;
        TypedAccess(ghidra.program.model.data.Structure structure, long offset) {
            this.structure = structure; this.offset = offset;
        }
        @Override public boolean equals(Object other) {
            if (!(other instanceof TypedAccess value)) return false;
            return offset == value.offset &&
                structure.getPathName().equals(value.structure.getPathName());
        }
        @Override public int hashCode() {
            return 31 * structure.getPathName().hashCode() + Long.hashCode(offset);
        }
    }
    private static class FingerprintState {
        final Map<String, TypedAccess> registers = new HashMap<>();
        final Map<Long, TypedAccess> stack = new HashMap<>();
        FingerprintState copy() {
            FingerprintState result = new FingerprintState();
            result.registers.putAll(registers);
            result.stack.putAll(stack);
            return result;
        }
        @Override public boolean equals(Object other) {
            if (!(other instanceof FingerprintState value)) return false;
            return registers.equals(value.registers) && stack.equals(value.stack);
        }
        @Override public int hashCode() { return 31 * registers.hashCode() + stack.hashCode(); }
    }
    private static class FingerprintBlock {
        final Address start;
        final List<Instruction> instructions = new ArrayList<>();
        final Set<FingerprintBlock> predecessors = new LinkedHashSet<>();
        final Set<FingerprintBlock> successors = new LinkedHashSet<>();
        FingerprintBlock(Address start) { this.start = start; }
    }
    private static class FingerprintMemory {
        final String register; final long displacement;
        FingerprintMemory(String register, long displacement) {
            this.register = register; this.displacement = displacement;
        }
    }
    private static class IdiomEvidence {
        int occurrences;
        final List<Integer> lines = new ArrayList<>();
        final List<String> excerpts = new ArrayList<>();
        final Set<String> addressHints = new TreeSet<>();
    }
    private static class QualityEvidence {
        int occurrences;
        final List<Integer> lines = new ArrayList<>();
        final List<String> excerpts = new ArrayList<>();
    }
    private static class QualityAggregate {
        int functions;
        int occurrences;
    }
    private static class DArrayDescriptor {
        final String descriptorName, elementName;
        final Map<Long, DArrayElementField> fields;
        DArrayDescriptor(String descriptorName, String elementName,
                Map<Long, DArrayElementField> fields) {
            this.descriptorName = descriptorName;
            this.elementName = elementName;
            this.fields = fields;
        }
        DArrayElementField field(long offset, int width) {
            if (offset < 0 || width < 1) return null;
            DArrayElementField field = fields.get(offset);
            return field != null && field.width == width ? field : null;
        }
    }
    private static class RewriteAccumulator {
        String code;
        int replacements;
        RewriteAccumulator(String code) { this.code = code; }
        void replace(Pattern pattern, ReplacementFunction function) {
            Matcher matcher = pattern.matcher(code);
            StringBuffer output = new StringBuffer();
            boolean changed = false;
            while (matcher.find()) {
                String replacement = function.replacement(matcher);
                if (replacement == null || replacement.equals(matcher.group())) {
                    matcher.appendReplacement(output,
                        Matcher.quoteReplacement(matcher.group()));
                    continue;
                }
                matcher.appendReplacement(output, Matcher.quoteReplacement(replacement));
                replacements++;
                changed = true;
            }
            if (!changed) return;
            matcher.appendTail(output);
            code = output.toString();
        }
    }
    private static class BlockCoverage {
        final String name;
        final Address start, end;
        long totalBytes, coveredBytes;
        int rangeCount;
        BlockCoverage(MemoryBlock block) {
            name = block.getName(); start = block.getStart(); end = block.getEnd();
        }
    }
    private static class CoverageRange {
        final String block, baseKind;
        final Address start, end;
        final long length;
        final byte[] bytes;
        final List<String> pointerTargets = new ArrayList<>();
        final List<String> rawInboundPointerSources = new ArrayList<>();
        final List<String> rawPointerLinkedControlFlowSources = new ArrayList<>();
        final Set<Long> rawInboundOffsets = new TreeSet<>();
        String classification;
        int printableBytes, nonPaddingBytes, executablePointers;
        int validRelativeCalls, returnOpcodes, importThunkEntries, rawInboundPointers;
        int rawPointerLinkedControlFlowEntries;
        CoverageRange(String block, Address start, Address end, String baseKind, byte[] bytes) {
            this.block = block; this.start = start; this.end = end;
            this.baseKind = baseKind; this.bytes = bytes; length = bytes.length;
        }
    }
    private record NormalizedCode(String code, int replacements) { }
    private record RoundTripPresentation(Address callAddress, String calleeName,
        int returnedOrdinal) { }
    private record RoundTripRewrite(String code, int replacements, boolean matched) { }
    private record RoundTripRewriteCandidate(int start, int end, String replacement,
            boolean alreadyNormalized) { }
    private record ReturnedParameterAssignment(int start, int end,
            String replacement) { }
    private record FunctionFingerprints(String canonical, String paddedCallFixup) { }
    private record StackObjectPresentation(String name, long bytes) { }
    private record FixedZeroStore(long offset, int width) { }
    private record ScalarPointerCopy(int line, int end, String indent,
        String target) { }
    private record PointerDeclaration(String type, String indent, int stars,
        int width) { }
    private record CopyBody(String destination, String source) { }
    private record TailAccess(String pointer, int offset) { }
    private record TailCopy(int offset, int width) { }
    private record ZeroLoopBody(String pointer, int lineCount) { }
    private record AliasAssignment(int start, int end, String operator,
        String expression) { }
    private record DArrayAccess(String base, String index,
        DArrayDescriptor descriptor) { }
    private record DArrayAliasSegment(int start, int end, String typedName,
        DArrayDescriptor descriptor) { }
    private record DArrayAliasNormalization(String code, int replacements) { }
    private record DArrayIntervalNormalization(String code, int replacements) { }
    private record DArrayElementField(long offset, int width, String name) { }
    private record GlobalRecordDescriptor(String name, long base, long stride,
        long count) { }
    private record TypedAlias(String name, String elementName) { }
    private record FieldRewrite(String code, int replacements) { }
    private record StatementWindow(String text, int endIndex) { }

    @FunctionalInterface
    private interface ReplacementFunction {
        String replacement(Matcher matcher);
    }

    private static void updateDigest(MessageDigest digest, String value) {
        digest.update(value.getBytes(StandardCharsets.UTF_8));
        digest.update((byte)0);
    }

    private void writeFunctionListing(Function function, Path path) throws IOException {
        atomicWrite(path, writer -> {
            InstructionIterator instructions = listing.getInstructions(function.getBody(), true);
            while (instructions.hasNext()) {
                checkCancelled();
                Instruction instruction = instructions.next();
                String label = "";
                Symbol primary = symbols.getPrimarySymbol(instruction.getAddress());
                if (primary != null) {
                    label = primary.getName(true) + ":\n";
                }
                if (!label.isEmpty()) {
                    writer.write(label);
                }
                writer.write(String.format("%s  %-24s  %s",
                    addr(instruction.getAddress()), instructionBytes(instruction), instruction.toString()));
                String eol = listing.getComment(CommentType.EOL, instruction.getAddress());
                if (eol != null && !eol.isBlank()) {
                    writer.write("  ; " + oneLine(eol));
                }
                writer.newLine();
            }
        });
    }

    private List<String> functionCallRelations(Function caller) {
        List<String> result = new ArrayList<>();
        InstructionIterator instructions = listing.getInstructions(caller.getBody(), true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            if (!"CALL".equalsIgnoreCase(instruction.getMnemonicString())) continue;
            Function direct = null;
            for (Address flow : instruction.getFlows()) {
                direct = currentProgram.getFunctionManager().getFunctionAt(flow);
                if (direct != null) break;
            }
            if (direct == null) continue;
            List<String> chain = new ArrayList<>();
            Set<Address> seen = new TreeSet<>();
            Function resolved = direct;
            while (resolved != null && seen.add(resolved.getEntryPoint())) {
                chain.add(functionId(resolved));
                if (!resolved.isThunk()) break;
                Function target = resolved.getThunkedFunction(false);
                if (target == null || target.equals(resolved)) break;
                resolved = target;
            }
            result.add(jsonObject(
                field("caller", functionId(caller)), field("call_site", addr(instruction.getAddress())),
                field("direct", functionId(direct)), rawField("direct_is_thunk",
                    Boolean.toString(direct.isThunk())),
                rawField("thunk_chain", jsonStringArray(chain)),
                field("resolved_target", resolved == null ? "" : functionId(resolved)),
                field("resolved_signature", resolved == null ? "" :
                    resolved.getSignature().getPrototypeString(true))));
        }
        return result;
    }

    private void exportCoverage() throws IOException {
        Memory memory = currentProgram.getMemory();
        AddressSet claimed = new AddressSet();
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!function.isExternal()) claimed.add(function.getBody());
        }

        AddressSet orphanInstructions = new AddressSet();
        InstructionIterator instructions = listing.getInstructions(true);
        while (instructions.hasNext()) {
            Instruction instruction = instructions.next();
            MemoryBlock block = memory.getBlock(instruction.getAddress());
            if (block != null && block.isExecute() && !claimed.contains(instruction.getAddress()))
                orphanInstructions.addRange(instruction.getMinAddress(), instruction.getMaxAddress());
        }
        AddressSet orphanData = new AddressSet();
        DataIterator dataItems = listing.getDefinedData(true);
        while (dataItems.hasNext()) {
            Data data = dataItems.next();
            MemoryBlock block = memory.getBlock(data.getAddress());
            if (block != null && block.isExecute() && !claimed.contains(data.getAddress()))
                orphanData.addRange(data.getMinAddress(), data.getMaxAddress());
        }

        List<CoverageRange> ranges = new ArrayList<>();
        List<BlockCoverage> blocks = new ArrayList<>();
        for (MemoryBlock block : memory.getBlocks()) {
            checkCancelled();
            if (!block.isExecute() || !block.isInitialized() || block.getSize() <= 0) continue;
            if (block.getSize() > Integer.MAX_VALUE)
                throw new IOException("Executable block too large for coverage audit: " + block.getName());
            byte[] content = new byte[(int)block.getSize()];
            try {
                int read = memory.getBytes(block.getStart(), content);
                if (read != content.length)
                    throw new IOException("Short read in executable block " + block.getName());
            }
            catch (ghidra.program.model.mem.MemoryAccessException exception) {
                throw new IOException("Cannot read executable block " + block.getName(), exception);
            }

            BlockCoverage blockCoverage = new BlockCoverage(block);
            long index = 0;
            while (index < content.length) {
                checkCancelled();
                Address address = block.getStart().add(index);
                if (claimed.contains(address)) {
                    blockCoverage.coveredBytes++;
                    index++;
                    continue;
                }
                String baseKind = orphanInstructions.contains(address) ? "orphan_instruction" :
                    orphanData.contains(address) ? "defined_data" : "raw";
                long end = index + 1;
                while (end < content.length && end - index < COVERAGE_MAX_RANGE) {
                    Address next = block.getStart().add(end);
                    if (claimed.contains(next)) break;
                    String nextKind = orphanInstructions.contains(next) ? "orphan_instruction" :
                        orphanData.contains(next) ? "defined_data" : "raw";
                    if (!baseKind.equals(nextKind)) break;
                    end++;
                }
                if ("raw".equals(baseKind))
                    splitRawCoverage(block, content, (int)index, (int)end, ranges, blockCoverage);
                else addCoverageRange(block, content, (int)index, (int)end,
                    baseKind, ranges, blockCoverage);
                index = end;
            }
            blockCoverage.totalBytes = content.length;
            blocks.add(blockCoverage);
        }

        collectRawNonExecutablePointers(ranges);

        executableByteCount = blocks.stream().mapToLong(row -> row.totalBytes).sum();
        coveredExecutableByteCount = blocks.stream().mapToLong(row -> row.coveredBytes).sum();
        unclaimedExecutableByteCount = ranges.stream().mapToLong(row -> row.length).sum();
        unclaimedPaddingByteCount = ranges.stream()
            .filter(row -> row.classification.equals("padding"))
            .mapToLong(row -> row.length).sum();
        unclaimedMeaningfulByteCount = unclaimedExecutableByteCount - unclaimedPaddingByteCount;
        unclaimedRangeCount = ranges.size();

        Path root = programRoot.resolve("unclaimed");
        Files.createDirectories(root);
        Set<String> liveDirectories = new TreeSet<>();
        for (CoverageRange range : ranges) {
            boolean export = !range.classification.equals("padding") &&
                (range.length >= 4 || range.baseKind.equals("orphan_instruction") ||
                    range.baseKind.equals("defined_data"));
            if (!export) continue;
            String directoryName = addr(range.start) + "_" + addr(range.end);
            liveDirectories.add(directoryName);
            exportCoverageRange(range, root.resolve(directoryName));
        }
        exportedUnclaimedRangeCount = liveDirectories.size();
        pruneStaleCoverageDirectories(root, liveDirectories);

        atomicWrite(programRoot.resolve("unclaimed_ranges.jsonl"), writer -> {
            for (CoverageRange range : ranges) {
                writer.write(coverageRangeJson(range));
                writer.newLine();
            }
        });
        Map<String, Long> classificationBytes = new TreeMap<>();
        Map<String, Integer> classificationRanges = new TreeMap<>();
        for (CoverageRange range : ranges) {
            classificationBytes.merge(range.classification, range.length, Long::sum);
            classificationRanges.merge(range.classification, 1, Integer::sum);
        }
        List<String> classificationRows = new ArrayList<>();
        for (String classification : classificationBytes.keySet())
            classificationRows.add(jsonObject(field("classification", classification),
                rawField("ranges", Integer.toString(classificationRanges.get(classification))),
                rawField("bytes", Long.toString(classificationBytes.get(classification)))));
        List<String> blockRows = new ArrayList<>();
        for (BlockCoverage block : blocks) blockRows.add(jsonObject(
            field("name", block.name), field("start", addr(block.start)),
            field("end", addr(block.end)), rawField("size", Long.toString(block.totalBytes)),
            rawField("covered_bytes", Long.toString(block.coveredBytes)),
            rawField("unclaimed_bytes", Long.toString(block.totalBytes - block.coveredBytes)),
            rawField("unclaimed_ranges", Integer.toString(block.rangeCount))));
        writeJson(programRoot.resolve("coverage_summary.json"), jsonObject(
            rawField("executable_bytes", Long.toString(executableByteCount)),
            rawField("function_covered_bytes", Long.toString(coveredExecutableByteCount)),
            rawField("unclaimed_bytes", Long.toString(unclaimedExecutableByteCount)),
            rawField("unclaimed_padding_bytes", Long.toString(unclaimedPaddingByteCount)),
            rawField("unclaimed_meaningful_bytes", Long.toString(unclaimedMeaningfulByteCount)),
            rawField("unclaimed_ranges", Integer.toString(unclaimedRangeCount)),
            rawField("exported_meaningful_ranges", Integer.toString(exportedUnclaimedRangeCount)),
            rawField("raw_nonexec_pointer_references", Long.toString(ranges.stream()
                .mapToLong(row -> row.rawInboundPointers).sum())),
            rawField("ranges_with_raw_nonexec_pointers", Long.toString(ranges.stream()
                .filter(row -> row.rawInboundPointers > 0).count())),
            rawField("raw_pointer_linked_control_flow_entries", Long.toString(ranges.stream()
                .mapToLong(row -> row.rawPointerLinkedControlFlowEntries).sum())),
            rawField("ranges_with_raw_pointer_linked_control_flow", Long.toString(ranges.stream()
                .filter(row -> row.rawPointerLinkedControlFlowEntries > 0).count())),
            rawField("classifications", "[" + String.join(",", classificationRows) + "]"),
            rawField("blocks", "[" + String.join(",", blockRows) + "]")));
    }

    private void splitRawCoverage(MemoryBlock block, byte[] content, int start, int end,
            List<CoverageRange> ranges, BlockCoverage coverage) {
        int cursor = start;
        int index = start;
        while (index < end) {
            if (!isPaddingByte(content[index])) { index++; continue; }
            int runEnd = index + 1;
            while (runEnd < end && isPaddingByte(content[runEnd])) runEnd++;
            if (runEnd - index >= COVERAGE_PADDING_RUN) {
                if (cursor < index)
                    addCoverageRange(block, content, cursor, index, "raw", ranges, coverage);
                addCoverageRange(block, content, index, runEnd, "padding", ranges, coverage);
                cursor = runEnd;
            }
            index = runEnd;
        }
        if (cursor < end) addCoverageRange(block, content, cursor, end, "raw", ranges, coverage);
    }

    private void addCoverageRange(MemoryBlock block, byte[] content, int start, int end,
            String baseKind, List<CoverageRange> ranges, BlockCoverage coverage) {
        if (start >= end) return;
        byte[] values = new byte[end - start];
        System.arraycopy(content, start, values, 0, values.length);
        Address address = block.getStart().add(start);
        CoverageRange range = new CoverageRange(block.getName(), address,
            block.getStart().add(end - 1), baseKind, values);
        classifyCoverageRange(range);
        ranges.add(range);
        coverage.rangeCount++;
    }

    private void classifyCoverageRange(CoverageRange range) {
        int printable = 0, nonPadding = 0;
        for (byte value : range.bytes) {
            int unsigned = value & 0xff;
            if (unsigned >= 0x20 && unsigned <= 0x7e) printable++;
            if (!isPaddingByte(value)) nonPadding++;
        }
        range.printableBytes = printable;
        range.nonPaddingBytes = nonPadding;
        int firstAligned = (int)((4 - (range.start.getOffset() & 3)) & 3);
        for (int index = firstAligned; index + 4 <= range.bytes.length; index += 4) {
            long value = (range.bytes[index] & 0xffL) |
                ((range.bytes[index + 1] & 0xffL) << 8) |
                ((range.bytes[index + 2] & 0xffL) << 16) |
                ((range.bytes[index + 3] & 0xffL) << 24);
            Address target;
            try { target = toAddr(value); }
            catch (Exception exception) { continue; }
            MemoryBlock targetBlock = currentProgram.getMemory().getBlock(target);
            if (targetBlock == null || !targetBlock.isExecute()) continue;
            range.executablePointers++;
            if (range.pointerTargets.size() < 64)
                range.pointerTargets.add(addr(range.start.add(index)) + " -> " + addr(target));
        }
        for (int index = 0; index < range.bytes.length; index++) {
            int opcode = range.bytes[index] & 0xff;
            if (opcode == 0xc3 || opcode == 0xcb ||
                    (opcode == 0xc2 || opcode == 0xca) && index + 2 < range.bytes.length)
                range.returnOpcodes++;
            if (opcode == 0xe8 && index + 4 < range.bytes.length) {
                int displacement = littleEndianInt(range.bytes, index + 1);
                Address target;
                try { target = range.start.add(index + 5L + displacement); }
                catch (Exception exception) { continue; }
                MemoryBlock targetBlock = currentProgram.getMemory().getBlock(target);
                if (targetBlock != null && targetBlock.isExecute()) range.validRelativeCalls++;
            }
            if (opcode == 0xff && index + 5 < range.bytes.length &&
                    (range.bytes[index + 1] & 0xff) == 0x25) {
                long pointerAddress = Integer.toUnsignedLong(littleEndianInt(range.bytes, index + 2));
                try {
                    if (currentProgram.getMemory().getBlock(toAddr(pointerAddress)) != null)
                        range.importThunkEntries++;
                }
                catch (Exception ignored) { }
            }
        }
        boolean commonPrologue = range.bytes.length >= 2 && (
            range.bytes[0] == 0x55 && (range.bytes[1] & 0xff) == 0x8b ||
            Set.of(0x53, 0x56, 0x57).contains(range.bytes[0] & 0xff) &&
                Set.of(0x53, 0x56, 0x57, 0x8b, 0x68).contains(range.bytes[1] & 0xff));
        boolean denseNonPadding = range.nonPaddingBytes * 4L >= range.length * 3L;
        boolean probableCode = range.length >= 8 && range.returnOpcodes > 0 &&
            (commonPrologue || denseNonPadding &&
                (range.validRelativeCalls > 0 || range.returnOpcodes >= 3));
        boolean importThunkTable = range.importThunkEntries >= 3 &&
            range.importThunkEntries * 24L >= range.length * 3L;
        if (range.baseKind.equals("orphan_instruction")) range.classification = "orphan_code";
        else if (range.baseKind.equals("defined_data")) range.classification = "defined_data";
        // A newly recovered tiny function can split one compiler-alignment run into raw
        // fragments shorter than COVERAGE_PADDING_RUN.  Their raw base kind records how the
        // range was discovered, not meaningful content: if every byte is a known padding byte,
        // retain the semantic padding classification regardless of fragment length.
        else if (range.baseKind.equals("padding") || range.nonPaddingBytes == 0)
            range.classification = "padding";
        else if (range.executablePointers >= 3 &&
                range.executablePointers * 8L >= range.length)
            range.classification = "address_table";
        else if (importThunkTable) range.classification = "import_thunk_table";
        else if (probableCode) range.classification = "probable_code";
        else if (range.length >= 4 && printable * 4L >= range.length * 3L)
            range.classification = "text_or_string";
        else range.classification = "unknown_nonpadding";
    }

    private void collectRawNonExecutablePointers(List<CoverageRange> ranges) throws IOException {
        TreeMap<Long, CoverageRange> byStart = new TreeMap<>();
        for (CoverageRange range : ranges) byStart.put(range.start.getOffset(), range);
        Memory memory = currentProgram.getMemory();
        for (MemoryBlock block : memory.getBlocks()) {
            checkCancelled();
            if (block.isExecute() || !block.isInitialized() || block.getSize() < 4) continue;
            if (block.getSize() > Integer.MAX_VALUE)
                throw new IOException("Non-executable block too large for pointer audit: " +
                    block.getName());
            byte[] content = new byte[(int)block.getSize()];
            try {
                int read = memory.getBytes(block.getStart(), content);
                if (read != content.length)
                    throw new IOException("Short read in non-executable block " + block.getName());
            }
            catch (ghidra.program.model.mem.MemoryAccessException exception) {
                throw new IOException("Cannot read non-executable block " + block.getName(), exception);
            }
            int firstAligned = (int)((4 - (block.getStart().getOffset() & 3)) & 3);
            for (int index = firstAligned; index + 4 <= content.length; index += 4) {
                long value = Integer.toUnsignedLong(littleEndianInt(content, index));
                Map.Entry<Long, CoverageRange> entry = byStart.floorEntry(value);
                if (entry == null) continue;
                CoverageRange target = entry.getValue();
                if (value > target.end.getOffset()) continue;
                target.rawInboundPointers++;
                target.rawInboundOffsets.add(value - target.start.getOffset());
                if (target.rawInboundPointerSources.size() < 256) {
                    Address source = block.getStart().add(index);
                    target.rawInboundPointerSources.add(addr(source) + " -> " +
                        String.format("%08X", value) + " " + block.getName());
                }
            }
        }
        linkRawPointerControlFlow(ranges, byStart);
        for (CoverageRange range : ranges) {
            if (!"probable_code".equals(range.classification) ||
                    range.rawInboundPointers == 0 &&
                        range.rawPointerLinkedControlFlowEntries == 0)
                continue;
            if (looksLikeMsvcExceptionFilterCluster(range))
                range.classification = "seh_funclet_cluster";
            else if (range.rawPointerLinkedControlFlowEntries > 0)
                range.classification = "table_callback_target";
            else range.classification = "data_referenced_code";
        }
    }

    private void linkRawPointerControlFlow(List<CoverageRange> ranges,
            TreeMap<Long, CoverageRange> byStart) {
        for (CoverageRange source : ranges) {
            for (long relativeOffset : source.rawInboundOffsets) {
                if (relativeOffset < 0 || relativeOffset + 5 > source.bytes.length) continue;
                int index = (int)relativeOffset;
                if ((source.bytes[index] & 0xff) != 0xe9) continue;
                int displacement = littleEndianInt(source.bytes, index + 1);
                long sourceAddress = source.start.getOffset() + relativeOffset;
                long targetAddress = sourceAddress + 5L + displacement;
                Map.Entry<Long, CoverageRange> entry = byStart.floorEntry(targetAddress);
                if (entry == null) continue;
                CoverageRange target = entry.getValue();
                if (targetAddress < target.start.getOffset() ||
                        targetAddress > target.end.getOffset()) continue;
                target.rawPointerLinkedControlFlowEntries++;
                if (target.rawPointerLinkedControlFlowSources.size() < 256)
                    target.rawPointerLinkedControlFlowSources.add(String.format(
                        "%08X JMP -> %08X; entry address is stored in non-executable data",
                        sourceAddress, targetAddress));
            }
        }
    }

    private boolean looksLikeMsvcExceptionFilterCluster(CoverageRange range) {
        return range.bytes.length >= 6 && range.rawInboundPointers >= 2 &&
            range.rawInboundOffsets.contains(0L) && range.rawInboundOffsets.contains(6L) &&
            (range.bytes[0] & 0xff) == 0xb8 && (range.bytes[1] & 0xff) == 1 &&
            range.bytes[2] == 0 && range.bytes[3] == 0 && range.bytes[4] == 0 &&
            (range.bytes[5] & 0xff) == 0xc3;
    }

    private static int littleEndianInt(byte[] bytes, int index) {
        return (bytes[index] & 0xff) | ((bytes[index + 1] & 0xff) << 8) |
            ((bytes[index + 2] & 0xff) << 16) | (bytes[index + 3] << 24);
    }

    private void exportCoverageRange(CoverageRange range, Path directory) throws IOException {
        Files.createDirectories(directory);
        Set<String> inbound = new TreeSet<>();
        for (Address address = range.start; address.compareTo(range.end) <= 0;
                address = address.next()) {
            ReferenceIterator iterator = references.getReferencesTo(address);
            while (iterator.hasNext() && inbound.size() < 256) {
                Reference reference = iterator.next();
                inbound.add(addr(reference.getFromAddress()) + " -> " + addr(address) +
                    " " + reference.getReferenceType());
            }
            if (address.equals(range.end)) break;
        }
        writeJson(directory.resolve("meta.json"), jsonObject(
            field("start", addr(range.start)), field("end", addr(range.end)),
            rawField("length", Long.toString(range.length)), field("block", range.block),
            field("classification", range.classification), field("base_kind", range.baseKind),
            rawField("printable_bytes", Integer.toString(range.printableBytes)),
            rawField("non_padding_bytes", Integer.toString(range.nonPaddingBytes)),
            rawField("executable_pointer_count", Integer.toString(range.executablePointers)),
            rawField("valid_relative_call_count", Integer.toString(range.validRelativeCalls)),
            rawField("return_opcode_count", Integer.toString(range.returnOpcodes)),
            rawField("import_thunk_entry_count", Integer.toString(range.importThunkEntries)),
            rawField("pointer_targets", jsonStringArray(range.pointerTargets)),
            rawField("raw_inbound_pointer_count", Integer.toString(range.rawInboundPointers)),
            rawField("raw_inbound_pointer_sources",
                jsonStringArray(range.rawInboundPointerSources)),
            rawField("raw_pointer_linked_control_flow_entries",
                Integer.toString(range.rawPointerLinkedControlFlowEntries)),
            rawField("raw_pointer_linked_control_flow_sources",
                jsonStringArray(range.rawPointerLinkedControlFlowSources)),
            rawField("inbound_references", jsonStringArray(inbound))));
        atomicWrite(directory.resolve("bytes.txt"), writer -> {
            for (int offset = 0; offset < range.bytes.length; offset += 16) {
                int count = Math.min(16, range.bytes.length - offset);
                StringBuilder hex = new StringBuilder(), ascii = new StringBuilder();
                for (int index = 0; index < 16; index++) {
                    if (index < count) {
                        int value = range.bytes[offset + index] & 0xff;
                        hex.append(String.format("%02X ", value));
                        ascii.append(value >= 0x20 && value <= 0x7e ? (char)value : '.');
                    }
                    else hex.append("   ");
                }
                writer.write(String.format("%s  %s |%s|", addr(range.start.add(offset)),
                    hex, ascii));
                writer.newLine();
            }
        });
        writeCoverageListing(range, directory.resolve("listing.asm"));
    }

    private void writeCoverageListing(CoverageRange range, Path path) throws IOException {
        AddressSetView addresses = new AddressSet(range.start, range.end);
        atomicWrite(path, writer -> {
            boolean wrote = false;
            InstructionIterator instructions = listing.getInstructions(addresses, true);
            while (instructions.hasNext()) {
                Instruction instruction = instructions.next();
                writer.write(String.format("%s  %-24s  %s", addr(instruction.getAddress()),
                    instructionBytes(instruction), instruction));
                writer.newLine();
                wrote = true;
            }
            DataIterator data = listing.getDefinedData(addresses, true);
            while (data.hasNext()) {
                Data item = data.next();
                writer.write(addr(item.getAddress()) + "  " + item.getDataType().getDisplayName() +
                    "  " + oneLine(item.getDefaultValueRepresentation()));
                writer.newLine();
                wrote = true;
            }
            if (!wrote) writer.write("; no instructions or defined data in Ghidra; see bytes.txt\n");
        });
    }

    private void pruneStaleCoverageDirectories(Path root, Set<String> live) throws IOException {
        if (!Files.isDirectory(root)) return;
        try (Stream<Path> entries = Files.list(root)) {
            for (Path entry : entries.toList()) {
                if (!Files.isDirectory(entry) || live.contains(entry.getFileName().toString())) continue;
                try (Stream<Path> tree = Files.walk(entry)) {
                    for (Path path : tree.sorted(Comparator.reverseOrder()).toList())
                        Files.deleteIfExists(path);
                }
            }
        }
    }

    private String coverageRangeJson(CoverageRange range) {
        return jsonObject(field("start", addr(range.start)), field("end", addr(range.end)),
            rawField("length", Long.toString(range.length)), field("block", range.block),
            field("classification", range.classification), field("base_kind", range.baseKind),
            rawField("printable_bytes", Integer.toString(range.printableBytes)),
            rawField("non_padding_bytes", Integer.toString(range.nonPaddingBytes)),
            rawField("executable_pointer_count", Integer.toString(range.executablePointers)),
            rawField("valid_relative_call_count", Integer.toString(range.validRelativeCalls)),
            rawField("return_opcode_count", Integer.toString(range.returnOpcodes)),
            rawField("import_thunk_entry_count", Integer.toString(range.importThunkEntries)),
            rawField("raw_inbound_pointer_count", Integer.toString(range.rawInboundPointers)),
            rawField("raw_inbound_pointer_sources",
                jsonStringArray(range.rawInboundPointerSources)),
            rawField("raw_pointer_linked_control_flow_entries",
                Integer.toString(range.rawPointerLinkedControlFlowEntries)),
            rawField("raw_pointer_linked_control_flow_sources",
                jsonStringArray(range.rawPointerLinkedControlFlowSources)),
            rawField("exported", Boolean.toString(!range.classification.equals("padding") &&
                (range.length >= 4 || range.baseKind.equals("orphan_instruction") ||
                    range.baseKind.equals("defined_data")))));
    }

    private static boolean isPaddingByte(byte value) {
        int unsigned = value & 0xff;
        return unsigned == 0 || unsigned == 0x90 || unsigned == 0xcc;
    }

    private void collectReferencedData(Function function, List<String> stringsUsed,
            List<String> globalsUsed) throws IOException {
        Set<String> stringSet = new TreeSet<>();
        Set<String> globalSet = new TreeSet<>();
        CodeUnitIterator units = listing.getCodeUnits(function.getBody(), true);
        while (units.hasNext()) {
            checkCancelled();
            Address from = units.next().getMinAddress();
            for (Reference reference : references.getReferencesFrom(from)) {
                Address to = reference.getToAddress();
                if (to == null || !to.isMemoryAddress()) {
                    continue;
                }
                Data data = listing.getDataContaining(to);
                if (data == null) {
                    continue;
                }
                String item = addr(data.getMinAddress()) + " " + data.getPathName() + " = " +
                    oneLine(data.getDefaultValueRepresentation());
                if (data.hasStringValue() && !mutableEmptyStringStorage(data)) {
                    stringSet.add(item);
                }
                else {
                    globalSet.add(item);
                }
            }
        }
        stringsUsed.addAll(stringSet);
        globalsUsed.addAll(globalSet);
    }

    private List<String> collectComments(Function function) throws IOException {
        List<String> result = new ArrayList<>();
        CodeUnitIterator units = listing.getCodeUnits(function.getBody(), true);
        while (units.hasNext()) {
            checkCancelled();
            Address address = units.next().getMinAddress();
            addComment(result, address, "plate", listing.getComment(CommentType.PLATE, address));
            addComment(result, address, "pre", listing.getComment(CommentType.PRE, address));
            addComment(result, address, "eol", listing.getComment(CommentType.EOL, address));
            addComment(result, address, "post", listing.getComment(CommentType.POST, address));
            addComment(result, address, "repeatable", listing.getComment(CommentType.REPEATABLE, address));
        }
        return result;
    }

    private void addComment(List<String> out, Address address, String kind, String text) {
        if (text != null && !text.isBlank()) {
            out.add(addr(address) + " [" + kind + "] " + oneLine(text));
        }
    }

    private List<String> functionSet(Set<Function> functions) {
        List<String> result = new ArrayList<>();
        for (Function function : functions) {
            result.add(functionId(function));
        }
        result.sort(Comparator.naturalOrder());
        return result;
    }

    private String functionId(Function function) {
        return addr(function.getEntryPoint()) + " " + function.getName(true);
    }

    private List<String> referenceSources(Address address) throws IOException {
        Set<String> result = new TreeSet<>();
        ReferenceIterator iterator = references.getReferencesTo(address);
        while (iterator.hasNext()) {
            Reference reference = iterator.next();
            Function source = listing.getFunctionContaining(reference.getFromAddress());
            result.add(source == null ? addr(reference.getFromAddress()) : functionId(source));
        }
        return new ArrayList<>(result);
    }

    private String dataTypeDetailJson(DataType type) {
        if (type instanceof ghidra.program.model.data.FunctionDefinition definition) {
            List<String> arguments = new ArrayList<>();
            for (ghidra.program.model.data.ParameterDefinition argument : definition.getArguments()) {
                arguments.add(jsonObject(
                    field("name", nullToEmpty(argument.getName())),
                    field("type", argument.getDataType().getPathName()),
                    field("comment", nullToEmpty(argument.getComment()))
                ));
            }
            return jsonObject(
                field("calling_convention", nullToEmpty(definition.getCallingConventionName())),
                field("return_type", definition.getReturnType().getPathName()),
                rawField("varargs", Boolean.toString(definition.hasVarArgs())),
                rawField("noreturn", Boolean.toString(definition.hasNoReturn())),
                rawField("arguments", "[" + String.join(",", arguments) + "]")
            );
        }
        if (type instanceof ghidra.program.model.data.Composite composite) {
            List<String> components = new ArrayList<>();
            for (ghidra.program.model.data.DataTypeComponent component : composite.getComponents()) {
                components.add(jsonObject(
                    rawField("ordinal", Integer.toString(component.getOrdinal())),
                    rawField("offset", Integer.toString(component.getOffset())),
                    rawField("length", Integer.toString(component.getLength())),
                    field("field_name", nullToEmpty(component.getFieldName())),
                    field("type", component.getDataType().getPathName()),
                    field("comment", nullToEmpty(component.getComment()))
                ));
            }
            return jsonObject(rawField("components", "[" + String.join(",", components) + "]"));
        }
        if (type instanceof ghidra.program.model.data.Enum enumType) {
            List<String> values = new ArrayList<>();
            for (String name : enumType.getNames()) {
                values.add(jsonObject(field("name", name),
                    rawField("value", Long.toString(enumType.getValue(name)))));
            }
            return jsonObject(rawField("values", "[" + String.join(",", values) + "]"));
        }
        if (type instanceof ghidra.program.model.data.TypeDef typedef) {
            return jsonObject(field("base_type", typedef.getBaseDataType().getPathName()));
        }
        if (type instanceof ghidra.program.model.data.Array array) {
            return jsonObject(
                field("element_type", array.getDataType().getPathName()),
                rawField("element_count", Integer.toString(array.getNumElements())),
                rawField("element_length", Integer.toString(array.getElementLength()))
            );
        }
        if (type instanceof ghidra.program.model.data.Pointer pointer) {
            DataType pointedTo = pointer.getDataType();
            return jsonObject(field("points_to", pointedTo == null ? "" : pointedTo.getPathName()));
        }
        return "{}";
    }

    private String variablesJson(Variable[] variables) {
        List<String> rows = new ArrayList<>();
        for (Variable variable : variables) {
            String storage;
            try {
                storage = variable.getVariableStorage().toString();
            }
            catch (Exception exception) {
                storage = "";
            }
            rows.add(jsonObject(
                field("name", variable.getName()),
                field("type", variable.getDataType().getDisplayName()),
                rawField("length", Integer.toString(variable.getLength())),
                field("storage", storage),
                field("comment", nullToEmpty(variable.getComment())),
                field("source", variable.getSource().toString())
            ));
        }
        return "[" + String.join(",", rows) + "]";
    }

    private void exportManifest() throws IOException {
        writeJson(programRoot.resolve("manifest.json"), jsonObject(
            field("schema", "st-decomp-corpus"),
            rawField("schema_version", "1"),
            rawField("function_analysis_schema",
                Integer.toString(FUNCTION_ANALYSIS_SCHEMA)),
            field("ghidra_version", applicationVersion()),
            field("program", currentProgram.getName()),
            field("program_metadata_sha256",
                sha256File(programRoot.resolve("program.json"))),
            rawField("function_count", Integer.toString(exportedFunctionCount)),
            rawField("program_function_count", Integer.toString(programFunctionCount)),
            rawField("exported_function_count", Integer.toString(exportedFunctionCount)),
            rawField("external_function_count", Integer.toString(externalFunctionCount)),
            rawField("library_function_count", Integer.toString(libraryFunctionCount)),
            rawField("thunk_function_count", Integer.toString(thunkFunctionCount)),
            rawField("body_function_count", Integer.toString(bodyFunctionCount)),
            field("pseudocode_runtime_sha256",
                sha256File(programRoot.resolve("pseudocode_runtime.h"))),
            rawField("pseudocode_normalized_site_count",
                Integer.toString(pseudocodeNormalizationCount)),
            rawField("fingerprint_cfg_fallback_count",
                Integer.toString(fingerprintCfgFallbackCount)),
            rawField("fingerprint_cfg_fallback_functions",
                jsonStringArray(fingerprintCfgFallbackFunctions)),
            rawField("pseudocode_idiom_function_count",
                Integer.toString(pseudocodeIdiomFunctions.size())),
            rawField("pseudocode_idiom_record_count",
                Integer.toString(pseudocodeIdiomRows.size())),
            rawField("decomp_quality_function_count",
                Integer.toString(qualityIssueFunctions.size())),
            rawField("decomp_quality_record_count",
                Integer.toString(qualityIssueRows.size())),
            rawField("decomp_quality_strict_zero_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("strict_zero"))),
            rawField("decomp_quality_nonincreasing_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("nonincreasing"))),
            rawField("decomp_quality_stage_transition_occurrence_count",
                Long.toString(qualityOccurrencesForPolicy("stage_transition"))),
            rawField("executable_byte_count", Long.toString(executableByteCount)),
            rawField("function_covered_executable_byte_count",
                Long.toString(coveredExecutableByteCount)),
            rawField("unclaimed_executable_byte_count",
                Long.toString(unclaimedExecutableByteCount)),
            rawField("unclaimed_padding_byte_count",
                Long.toString(unclaimedPaddingByteCount)),
            rawField("unclaimed_meaningful_byte_count",
                Long.toString(unclaimedMeaningfulByteCount)),
            rawField("unclaimed_range_count", Integer.toString(unclaimedRangeCount)),
            rawField("exported_unclaimed_range_count",
                Integer.toString(exportedUnclaimedRangeCount)),
            field("primary_key", "program + function entry address")
        ));
    }

    private String applicationVersion() {
        try {
            return ghidra.framework.Application.getApplicationVersion();
        }
        catch (Exception exception) {
            return "unknown";
        }
    }

    private static String namespaceName(Namespace namespace) {
        return namespace == null ? "" : namespace.getName(true);
    }

    private static String addr(Address address) {
        return address == null ? "" : address.toString().toUpperCase(Locale.ROOT);
    }

    private static String bytes(byte[] values) {
        StringBuilder result = new StringBuilder();
        for (byte value : values) {
            if (result.length() > 0) {
                result.append(' ');
            }
            result.append(String.format("%02X", value & 0xff));
        }
        return result.toString();
    }

    private static String instructionBytes(Instruction instruction) {
        try {
            return bytes(instruction.getBytes());
        }
        catch (ghidra.program.model.mem.MemoryAccessException exception) {
            return "<memory-error>";
        }
    }

    private static String safeFileName(String value) {
        String safe = value == null ? "unnamed" : value.replaceAll("[^A-Za-z0-9._-]+", "_");
        safe = safe.replaceAll("_+", "_");
        if (safe.length() > MAX_FILENAME_COMPONENT) {
            safe = safe.substring(0, MAX_FILENAME_COMPONENT);
        }
        return safe.isBlank() ? "unnamed" : safe;
    }

    private static String oneLine(String value) {
        return nullToEmpty(value).replace('\r', ' ').replace('\n', ' ').replaceAll("\\s+", " ").trim();
    }

    private static String nullToEmpty(String value) {
        return value == null ? "" : value;
    }

    private void checkCancelled() throws IOException {
        if (monitor.isCancelled()) {
            throw new IOException("Export cancelled by user");
        }
    }

    private static String field(String name, String value) {
        return quote(name) + ":" + quote(nullToEmpty(value));
    }

    private static String rawField(String name, String jsonValue) {
        return quote(name) + ":" + jsonValue;
    }

    private static String jsonObject(String... fields) {
        return "{" + String.join(",", fields) + "}";
    }

    private static String jsonStringArray(Collection<String> values) {
        List<String> quoted = new ArrayList<>();
        for (String value : values) {
            quoted.add(quote(value));
        }
        return "[" + String.join(",", quoted) + "]";
    }

    private static String quote(String value) {
        StringBuilder out = new StringBuilder("\"");
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            switch (c) {
                case '\\': out.append("\\\\"); break;
                case '\"': out.append("\\\""); break;
                case '\b': out.append("\\b"); break;
                case '\f': out.append("\\f"); break;
                case '\n': out.append("\\n"); break;
                case '\r': out.append("\\r"); break;
                case '\t': out.append("\\t"); break;
                default:
                    if (c < 0x20) {
                        out.append(String.format("\\u%04x", (int)c));
                    }
                    else {
                        out.append(c);
                    }
            }
        }
        return out.append('\"').toString();
    }

    private void writeJson(Path path, String json) throws IOException {
        writeText(path, json + System.lineSeparator());
    }

    private void writeJsonArray(Path path, List<String> rows) throws IOException {
        atomicWrite(path, writer -> {
            writer.write("[\n");
            for (int i = 0; i < rows.size(); i++) {
                writer.write("  " + rows.get(i));
                writer.write(i + 1 == rows.size() ? "\n" : ",\n");
            }
            writer.write("]\n");
        });
    }

    private void writeText(Path path, String text) throws IOException {
        atomicWrite(path, writer -> writer.write(text));
    }

    private void atomicWrite(Path path, WriterAction action) throws IOException {
        Files.createDirectories(path.getParent());
        Path temporary = path.resolveSibling(path.getFileName().toString() + ".tmp");
        try (BufferedWriter writer = Files.newBufferedWriter(
                temporary, StandardCharsets.UTF_8)) {
            action.write(writer);
        }
        try {
            Files.move(temporary, path, StandardCopyOption.REPLACE_EXISTING,
                StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.nio.file.AtomicMoveNotSupportedException exception) {
            Files.move(temporary, path, StandardCopyOption.REPLACE_EXISTING);
        }
    }

    private String sha256Text(String value) throws Exception {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        digest.update(value.getBytes(StandardCharsets.UTF_8));
        StringBuilder result = new StringBuilder();
        for (byte item : digest.digest())
            result.append(String.format("%02x", item & 0xff));
        return result.toString();
    }

    private String sha256File(Path path) throws IOException {
        try {
            return sha256Text(Files.readString(path, StandardCharsets.UTF_8));
        }
        catch (Exception exception) {
            throw new IOException("Could not hash " + path + ": " +
                exception.getMessage(), exception);
        }
    }

    private record CachedFunctionAnalysis(String fingerprint, int normalizationCount,
        List<String> pseudocodeRows, List<String> qualityRows,
        Map<String, Integer> qualityOccurrences) { }
    private record RenderedCallableDependency(String ownerPath, int offset, int length,
        String fieldName, DataType type, String comment) { }
    private record GridCoordinates(String x, String y, String z) { }
    private record X87Memory(String base, long offset) { }
    private record X87SavedValue(int savedOffset, int destinationOffset) { }
    private record CompileRule(String kind, String impact, String status,
        Pattern pattern, String resolution) { }

    private static class CompileAggregate {
        final CompileRule rule;
        final Set<String> functionIds = new HashSet<>();
        int functions;
        long occurrences;
        CompileAggregate(CompileRule rule) { this.rule = rule; }
    }

    private static class StackSlotLifetime {
        final String parameterName;
        boolean readBeforeWrite;
        boolean written;
        boolean readAfterWrite;
        StackSlotLifetime(String parameterName) {
            this.parameterName = parameterName;
        }
    }

    @FunctionalInterface
    private interface WriterAction {
        void write(BufferedWriter writer) throws IOException;
    }
}
