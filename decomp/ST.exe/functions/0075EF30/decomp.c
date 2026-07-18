
void FUN_0075ef30(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x1ba);
  param_1[0x20] = *(int *)(iVar1 + 0x10);
  FUN_0075ef60(param_1,*(int *)(iVar1 + 0x14));
  *(undefined4 *)(iVar1 + 0x1c) = 1;
  return;
}

