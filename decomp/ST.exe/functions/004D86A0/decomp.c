
undefined4 FUN_004d86a0(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  g_playerRuntime[param_1].field16_0x1f = *(undefined4 *)(&DAT_007bf558 + param_2 * 4);
  g_playerRuntime[param_1].field17_0x23 = *(undefined4 *)(&DAT_007bf570 + param_2 * 4);
  if (g_playerRuntime[param_1].raceId == 3) {
    uVar1 = *(undefined4 *)(&DAT_007bf564 + param_2 * 4);
    g_playerRuntime[param_1].field2134_0x99e = *(undefined4 *)(&DAT_007bf588 + param_2 * 4);
    g_playerRuntime[param_1].field2132_0x996 = uVar1;
  }
  else {
    g_playerRuntime[param_1].field18_0x27 = *(undefined4 *)(&DAT_007bf57c + param_2 * 4);
  }
  if (param_1 == DAT_0080874d) {
    thunk_FUN_004d8b70((char)param_1);
  }
  return 0;
}

