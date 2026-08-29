
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (10), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00462180 @ 004636F3 -> read as EAX on
   every CFG path | 004C7860 @ 004C7AC0 -> read as EAX on every CFG path | 004DA390 @ 004DA58A ->
   read as EAX on every CFG path | 004DA390 @ 004DA775 -> read as EAX on every CFG path | 004EB300 @
   004EB34C -> read as EAX on every CFG path | 004EB300 @ 004EB482 -> read as EAX on every CFG path
   | 004EB6D0 @ 004EB865 -> read as EAX on every CFG path | 004EBAB0 @ 004EBB41 -> read as EAX on
   every CFG path | 00551800 @ 00551A06 -> read as EAX on every CFG path | 00677700 @ 00677740 ->
   unknown: terminal before explicit accumulator kill | 0067A390 @ 0067A882 -> read as EAX on every
   CFG path */

int FUN_004d8af0(char param_1)

{
  if (param_1 == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[param_1].field17_0x27;
}

