
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (7), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B7750 @ 004B7799 -> read as EAX on
   every CFG path | 004B7750 @ 004B7883 -> read as EAX on every CFG path | 004B7750 @ 004B78E7 ->
   read as EAX on every CFG path | 004B7750 @ 004B7926 -> read as EAX on every CFG path | 004B79C0 @
   004B79D9 -> read as EAX on every CFG path | 00677700 @ 00677766 -> read as EAX on every CFG path
   | 0067A390 @ 0067A3F1 -> read as EAX on every CFG path */

int FUN_004b71c0(char param_1)

{
  return g_packedRecords_A62x8[param_1].field1940_0x972;
}

