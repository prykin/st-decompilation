
undefined4 FUN_004db020(int param_1,undefined4 param_2)

{
  STPlaySystemC *pSVar1;

  pSVar1 = g_playSystem_00802A38;
  if (g_playerRuntime[param_1].field2180_0xa0e == 0) {
    g_playerRuntime[param_1].field2180_0xa0e = 1;
    g_playerRuntime[param_1].field2181_0xa12 = param_2;
    g_playerRuntime[param_1].field2182_0xa16 = 0;
    g_playerRuntime[param_1].field2183_0xa1a = pSVar1->field_00E4;
  }
  return 0;
}

