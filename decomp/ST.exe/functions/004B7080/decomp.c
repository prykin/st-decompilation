
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004CCC10 -> 004B7080 @ 004CCEF1 | 00522810 -> 004B7080 @ 00522AFA | 00652810 ->
   004B7080 @ 0065555A */

int FUN_004b7080(uint param_1,int param_2)

{
  g_playerRuntime[(char)param_1].field2226_0x972 =
       g_playerRuntime[(char)param_1].field2226_0x972 + param_2;
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return g_playerRuntime[(char)param_1].field2226_0x972;
}

