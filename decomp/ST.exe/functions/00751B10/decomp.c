
undefined4 FUN_00751b10(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1[1] + 0x34);
  if (((uVar1 == 0) || (param_2 < uVar1)) || (*(int *)(param_1[1] + 0x38) + uVar1 <= param_2)) {
    uVar1 = *(uint *)(*(int *)(*param_1 + 8) + 0x34);
    if (((uVar1 == 0) || (param_2 < uVar1)) ||
       (*(int *)(*(int *)(*param_1 + 8) + 0x38) + uVar1 <= param_2)) {
      return 0;
    }
  }
  return 1;
}

