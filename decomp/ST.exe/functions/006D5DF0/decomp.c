
undefined4 FUN_006d5df0(int param_1,AnonShape_006D5DF0_C24DE923 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0x80040209;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x44);
  if ((param_2->field_0004 != 0) && ((uint)param_2->field_0004 < *(uint *)(iVar1 + 0x44))) {
    return 0x80070057;
  }
  if (0 < param_2->field_000C) {
    return 0x80070057;
  }
  param_2->field_0004 = *(undefined4 *)(iVar1 + 0x44);
  return 0;
}

