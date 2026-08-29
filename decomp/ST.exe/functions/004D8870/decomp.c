
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (9), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00462180 @ 0046367A -> read as EAX on
   every CFG path | 004DA390 @ 004DA543 -> read as EAX on every CFG path | 004DA390 @ 004DA73E ->
   read as EAX on every CFG path | 004EB300 @ 004EB3AC -> read as EAX on every CFG path | 004EB6D0 @
   004EB89B -> read as EAX on every CFG path | 004EB6D0 @ 004EB921 -> read as EAX on every CFG path
   | 004EBAB0 @ 004EBB99 -> read as EAX on every CFG path | 00551800 @ 0055197E -> read as EAX on
   every CFG path | 00677700 @ 0067772A -> unknown: terminal before explicit accumulator kill |
   0067A390 @ 0067A858 -> read as EAX on every CFG path */

int FUN_004d8870(char param_1)

{
  if (param_1 == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[param_1].field15_0x1f;
}

