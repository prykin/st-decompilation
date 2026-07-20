
undefined4 FUN_004db0f0(int param_1)

{
  STPlaySystemC *pSVar1;
  
  pSVar1 = PTR_00802a38;
  if (g_playerRuntime[param_1].field2298_0xa0e == 2) {
    g_playerRuntime[param_1].field2298_0xa0e = 3;
    g_playerRuntime[param_1].field2301_0xa1a = pSVar1->field_00E4;
  }
  return 0;
}

