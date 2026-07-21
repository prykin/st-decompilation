
void FUN_006b4120(int *param_1)

{
  FreeAndNull((void **)(param_1 + 0x84));
  FreeAndNull((void **)(param_1 + 0x88));
  FUN_006b3bb0(param_1,param_1[0x78]);
  param_1[0x77] = 0;
  param_1[0x78] = 0x7fffffff;
  param_1[0x7a] = 0x7fffffff;
  return;
}

