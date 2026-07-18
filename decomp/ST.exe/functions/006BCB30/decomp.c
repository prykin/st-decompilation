
void FUN_006bcb30(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_10;
  int local_8;
  
  iVar2 = param_1;
  iVar8 = param_2 - *(int *)(param_1 + 0x11c + *(int *)(param_1 + 0x1e4) * 8);
  if (iVar8 < 0) {
    param_4 = param_4 + iVar8;
    iVar8 = 0;
  }
  param_3 = param_3 - *(int *)(param_1 + 0x120 + *(int *)(param_1 + 0x1e4) * 8);
  if (param_3 < 0) {
    param_3 = 0;
    param_5 = param_5 + iVar8;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar7 = *(int *)(param_1 + 0x1ec);
    iVar5 = *(int *)(param_1 + 0x1f0);
    iVar3 = (iVar8 % iVar7 + iVar7 + -1 + param_4) / iVar7;
    local_10 = (param_3 % iVar5 + iVar5 + -1 + param_5) / iVar5;
    uVar4 = iVar8 / iVar7;
    iVar5 = param_3 / iVar5;
    iVar8 = *(int *)(param_1 + 500) + 7;
    iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
    iVar7 = iVar8 * iVar5;
    param_3 = *(int *)(param_1 + 0x220) + iVar7;
    iVar5 = *(int *)(param_1 + 500) * iVar5;
    iVar9 = *(int *)(param_1 + 0x204) + iVar5 + uVar4;
    iVar5 = *(int *)(param_1 + 0x21c) + iVar5 + uVar4;
    param_1 = *(int *)(param_1 + 0x210) + iVar7;
    if (0 < local_10) {
      do {
        if (0 < iVar3) {
          iVar7 = iVar9 - uVar4;
          uVar6 = uVar4;
          local_8 = iVar3;
          do {
            if ((*(int *)(iVar2 + 0x204) == 0) ||
               ((uint)*(byte *)(iVar7 + uVar6) == *(int *)(iVar2 + 0x200) - 1U)) {
              if ((*(int *)(iVar2 + 0x21c) != 0) &&
                 ((uint)*(byte *)(iVar7 + (iVar5 - iVar9) + uVar6) != *(int *)(iVar2 + 0x218) - 1U))
              {
                pbVar1 = (byte *)(param_3 + ((int)(uVar6 ^ 7) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            else {
              pbVar1 = (byte *)(param_1 + ((int)(uVar6 ^ 7) >> 3));
              *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              if ((*(int *)(iVar2 + 0x21c) != 0) && (*(char *)(iVar7 + uVar6) != '\0')) {
                pbVar1 = (byte *)(param_3 + ((int)(uVar6 ^ 7) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            uVar6 = uVar6 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        iVar9 = iVar9 + *(int *)(iVar2 + 500);
        iVar5 = iVar5 + *(int *)(iVar2 + 500);
        param_3 = param_3 + iVar8;
        local_10 = local_10 + -1;
        param_1 = param_1 + iVar8;
      } while (local_10 != 0);
    }
  }
  return;
}

