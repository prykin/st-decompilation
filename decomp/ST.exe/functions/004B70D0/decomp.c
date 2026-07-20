
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004B6D70 -> 004B70D0 @ 004B6DCF | 004CCAD0 -> 004B70D0 @ 004CCB19 | 00652810 ->
   004B70D0 @ 00655571 */

int FUN_004b70d0(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &g_playerRuntime[(char)param_1].field2226_0x972;
  iVar2 = g_playerRuntime[(char)param_1].field2226_0x972 - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return *puVar1;
}

