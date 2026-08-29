
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (12), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00462180 @ 004636B8 -> read as EAX on
   every CFG path | 004C7860 @ 004C7AE4 -> read as EAX on every CFG path | 004DA390 @ 004DA55D ->
   read as EAX on every CFG path | 004DA390 @ 004DA750 -> read as EAX on every CFG path | 004EB300 @
   004EB388 -> read as EAX on every CFG path | 004EB300 @ 004EB4BB -> read as EAX on every CFG path
   | 004EB6D0 @ 004EB7C1 -> read as EAX on every CFG path | 004EB6D0 @ 004EB8D6 -> read as EAX on
   every CFG path | 004EBAB0 @ 004EBB6D -> read as EAX on every CFG path | 00551800 @ 00551A1A ->
   read as EAX on every CFG path | 00677700 @ 00677735 -> unknown: terminal before explicit
   accumulator kill | 0067A390 @ 0067A86D -> read as EAX on every CFG path | 0067A390 @ 0067AC3A ->
   read as EAX on every CFG path */

int FUN_004d89b0(char param_1)

{
  if (param_1 == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[param_1].field16_0x23;
}

