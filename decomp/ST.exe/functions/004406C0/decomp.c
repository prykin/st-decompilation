
/* [STUtilityFunctionApplier] indexed_record_byte_lookup: maps a guarded byte-sized index to the
   first byte of a fixed-stride record; the explicit 0xff guard clears AL and returns zero
   Evidence: body pattern verified
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=364, ignored=1, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00436F20 @ 00437CEC -> read as AL on every CFG path | 0043BEB0 @
   0043BFD8 -> read as AL on every CFG path | 0043BEB0 @ 0043C187 -> read as AL on every CFG path |
   00442300 @ 00442404 -> read as AL on every CFG path | 0044CE40 @ 0044CFB4 -> read as AL on every
   CFG path | 0044CE40 @ 0044CFE1 -> read as AL on every CFG path | 0044CE40 @ 0044D007 -> read as
   AL on every CFG path | 0044CE40 @ 0044D024 -> read as AL on every CFG path | 0044EE30 @ 00459D62
   -> read as AL on every CFG path | 0044EE30 @ 00459E45 -> read as AL on every CFG path | 0045F6C0
   @ 0045F6D7 -> read as AL on every CFG path | 00476CE0 @ 004775B7 -> read as AL on every CFG path
   | 00486B60 @ 00486CD5 -> read as AL on every CFG path | 00486E20 @ 00486EB7 -> read as AL on
   every CFG path | 00486E20 @ 00486ECA -> read as AL on every CFG path | 00486E20 @ 00486EEA ->
   read as AL on every CFG path | 00488890 @ 004888B6 -> read as AL on every CFG path | 00488890 @
   00488909 -> read as AL on every CFG path | 00488890 @ 004889DB -> read as AL on every CFG path |
   00488890 @ 00488A19 -> read as AL on every CFG path | 00488890 @ 00488A3E -> read as AL on every
   CFG path | 00488890 @ 00488A60 -> read as AL on every CFG path | 00488890 @ 00488A73 -> read as
   AL on every CFG path | 00488890 @ 00488A97 -> read as AL on every CFG path */

byte LookupRecordByte(char recordIndex)

{
  if (recordIndex == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[recordIndex].field0_0x0;
}

