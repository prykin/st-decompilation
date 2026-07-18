
undefined4 FUN_006bd0c0(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_2 - *(int *)(param_1 + 0x11c + *(int *)(param_1 + 0x1e4) * 8);
  if (iVar6 < 0) {
    param_4 = param_4 + iVar6;
    iVar6 = 0;
  }
  param_3 = param_3 - *(int *)(param_1 + 0x120 + *(int *)(param_1 + 0x1e4) * 8);
  if (param_3 < 0) {
    param_3 = 0;
    param_5 = param_5 + iVar6;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar1 = *(int *)(param_1 + 0x1ec);
    iVar4 = *(int *)(param_1 + 0x1f0);
    iVar2 = (iVar6 % iVar1 + iVar1 + -1 + param_4) / iVar1;
    iVar3 = (param_3 % iVar4 + iVar4 + -1 + param_5) / iVar4;
    iVar4 = param_3 / iVar4;
    param_3 = 0;
    iVar5 = *(int *)(param_1 + 500) + 7;
    iVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    iVar4 = iVar7 * iVar4;
    iVar5 = *(int *)(param_1 + 0x220) + iVar4;
    iVar4 = *(int *)(param_1 + 0x210) + iVar4;
    if (0 < iVar3) {
      do {
        param_2 = 0;
        param_1 = iVar6 / iVar1;
        if (0 < iVar2) {
          do {
            if (((*(byte *)(iVar4 + ((int)(param_1 ^ 7) >> 3)) >> ((param_1 ^ 7) & 7) & 1) != 0) ||
               ((*(byte *)(iVar5 + ((int)(param_1 ^ 7) >> 3)) >> ((param_1 ^ 7) & 7) & 1) != 0)) {
              return 1;
            }
            param_2 = param_2 + 1;
            param_1 = param_1 + 1;
          } while (param_2 < iVar2);
        }
        iVar4 = iVar4 + iVar7;
        iVar5 = iVar5 + iVar7;
        param_3 = param_3 + 1;
      } while (param_3 < iVar3);
    }
  }
  return 0;
}

