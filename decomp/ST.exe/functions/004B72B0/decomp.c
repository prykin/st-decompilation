
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B7750 @ 004B778C -> read as EAX on
   every CFG path | 004B79C0 @ 004B79CF -> read as EAX on every CFG path | 00677700 @ 00677758 ->
   read as EAX on every CFG path | 0067A390 @ 0067A405 -> read as EAX on every CFG path */

int FUN_004b72b0(char param_1)

{
  return g_packedRecords_A62x8[param_1].field1941_0x976;
}

