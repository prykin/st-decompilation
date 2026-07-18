
void FUN_0075a800(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x19a);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (param_1[0x12] != 0) {
      iVar2 = FUN_0075ae60(param_1);
      if (iVar2 != 0) {
        *(code **)(iVar1 + 0xc) = FUN_0075af80;
        param_1[0x25] = 0;
        return;
      }
    }
    *(code **)(iVar1 + 0xc) = FUN_0075acb0;
  }
  param_1[0x25] = 0;
  return;
}

