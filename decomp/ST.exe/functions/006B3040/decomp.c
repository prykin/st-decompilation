
undefined4 FUN_006b3040(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + param_2 * 4) + 0x44);
  }
  return uVar1;
}

