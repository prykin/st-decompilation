
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004DA390 -> 004E4410 @ 004DA59B; FUN_004da390 parameter param_2 | 004DA390 -> 004E4410
   @ 004DA786; FUN_004da390 parameter param_1 | 00677700 -> 004E4410 @ 0067774B; FUN_00677700
   parameter param_1
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004DA390 @ 004DA59B -> read as EAX on
   every CFG path | 004DA390 @ 004DA786 -> read as EAX on every CFG path | 004EB6D0 @ 004EB728 ->
   read as EAX on every CFG path | 004EBAB0 @ 004EBB12 -> read as EAX on every CFG path | 00677700 @
   0067774B -> unknown: terminal before explicit accumulator kill | 0067A390 @ 0067AC4F -> read as
   EAX on every CFG path */

int FUN_004e4410(byte *param_1)

{
  return g_packedRecords_A62x8[(int)param_1].field1951_0x99e;
}

