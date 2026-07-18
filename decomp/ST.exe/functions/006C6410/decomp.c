
undefined4 FUN_006c6410(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4a0);
  uVar2 = *(uint *)(param_1 + 0x49c) & 0xfffffffe;
  *(int *)(param_1 + 0x4a0) = param_2;
  *(uint *)(param_1 + 0x49c) = uVar2;
  if (param_2 != -1) {
    *(uint *)(param_1 + 0x49c) = uVar2 | 1;
  }
  return uVar1;
}

