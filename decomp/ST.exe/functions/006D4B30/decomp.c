
undefined4 FUN_006d4b30(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    uVar1 = FUN_006a5e40(-0x30,DAT_007ed77c,0x7ee22c,0x1d0);
    return uVar1;
  }
  iVar2 = -0x51;
  if (*(int *)(param_1 + 0x34) != 0) {
    if (param_2 + 4U <= *(uint *)(param_1 + 0x38)) {
      return *(undefined4 *)(*(int *)(param_1 + 0x34) + param_2);
    }
    iVar2 = -0xe;
  }
  FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee22c,0x1e1);
  return 0;
}

