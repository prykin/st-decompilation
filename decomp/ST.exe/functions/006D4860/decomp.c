
DWORD FUN_006d4860(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    DVar2 = FUN_006a5e40(-0x30,DAT_007ed77c,0x7ee22c,0x14b);
    return DVar2;
  }
  DVar2 = 0xffffffaf;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_006d4904:
    FUN_006a5e40(DVar2,DAT_007ed77c,0x7ee22c,0x15f);
    return DVar2;
  }
  if ((*(uint *)(param_1 + 8) & 0x800000) != 0) {
    uVar1 = param_2 + param_4;
    if (*(uint *)(param_1 + 0x38) < uVar1) {
      uVar3 = (param_2 - *(uint *)(param_1 + 0x38)) + param_4;
      if (uVar3 < *(uint *)(param_1 + 0x3c)) {
        uVar3 = *(uint *)(param_1 + 0x3c);
      }
      DVar2 = FUN_006d4740(param_1,uVar3);
      if (DVar2 != 0) goto LAB_006d4904;
    }
    if (param_3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x34) + param_2);
      for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *param_3;
        param_3 = param_3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    if (*(uint *)(param_1 + 0x18) < uVar1) {
      *(uint *)(param_1 + 0x18) = uVar1;
    }
  }
  return 0;
}

