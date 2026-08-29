
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004BEA70 @ 004BEB90 -> read as EAX on
   every CFG path | 004D7270 @ 004D728C -> read as EAX on every CFG path | 004E4180 @ 004E4187 ->
   read as EAX on every CFG path */

int FUN_004e4140(int param_1)

{
  if (g_packedRecords_A62x8[param_1].field1969_0x9da != nullptr) {
    return (g_packedRecords_A62x8[param_1].field1969_0x9da)->count;
  }
  return 0;
}

