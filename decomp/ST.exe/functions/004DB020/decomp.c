
undefined4 FUN_004db020(int param_1,undefined4 param_2)

{
  STPlaySystemC *pSVar1;
  
  pSVar1 = PTR_00802a38;
  if (g_playerRuntime[param_1].field2298_0xa0e == 0) {
    g_playerRuntime[param_1].field2298_0xa0e = 1;
    g_playerRuntime[param_1].field2299_0xa12 = param_2;
    g_playerRuntime[param_1].field2300_0xa16 = 0;
    g_playerRuntime[param_1].field2301_0xa1a = pSVar1->field_00E4;
  }
  return 0;
}

