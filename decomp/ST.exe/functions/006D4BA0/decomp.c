
DWORD FUN_006d4ba0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    DVar2 = FUN_006a5e40(-0x30,DAT_007ed77c,0x7ee22c,0x1ec);
    return DVar2;
  }
  DVar2 = 0xffffffaf;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_006d4c30:
    FUN_006a5e40(DVar2,DAT_007ed77c,0x7ee22c,0x203);
    return DVar2;
  }
  if ((*(uint *)(param_1 + 8) & 0x800000) != 0) {
    uVar1 = param_2 + 4;
    if (*(uint *)(param_1 + 0x38) < uVar1) {
      uVar3 = (param_2 - *(uint *)(param_1 + 0x38)) + 4;
      if (uVar3 < *(uint *)(param_1 + 0x3c)) {
        uVar3 = *(uint *)(param_1 + 0x3c);
      }
      DVar2 = FUN_006d4740(param_1,uVar3);
      if (DVar2 != 0) goto LAB_006d4c30;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x34) + param_2) = param_3;
    if (*(uint *)(param_1 + 0x18) < uVar1) {
      *(uint *)(param_1 + 0x18) = uVar1;
    }
  }
  return 0;
}

