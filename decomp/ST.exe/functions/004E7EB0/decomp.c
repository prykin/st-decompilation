
void FUN_004e7eb0(int param_1,int param_2,int param_3)

{
  uint uVar1;

  uVar1 = PTR_00802a38->field_00E4 + param_3;
  if ((uint)(&g_playerRuntime[param_1].field2185_0xa22)[param_2] < uVar1) {
    (&g_playerRuntime[param_1].field2185_0xa22)[param_2] = uVar1;
    (&g_playerRuntime[param_1].field2211_0xa42)[param_2] = 0;
  }
  return;
}

