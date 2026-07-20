
void __fastcall FUN_00717380(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *local_8;
  
  if (*(int *)(param_1 + 0x466) != 0) {
    iVar8 = 10000;
    iVar9 = **(int **)(param_1 + 0x4d6);
    *(undefined4 *)(param_1 + 0x4de) = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x4ce)) {
      local_8 = *(int **)(param_1 + 0x4d6);
      do {
        uVar1 = (*(int *)(param_1 + 0x2f0) * iVar9) / 100 - *local_8;
        uVar7 = (int)uVar1 >> 0x1f;
        iVar2 = (uVar1 ^ uVar7) - uVar7;
        if (iVar2 < iVar8) {
          *(int *)(param_1 + 0x4de) = iVar6;
          iVar8 = iVar2;
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x4ce));
    }
    iVar8 = *(int *)(param_1 + 0x4de) * 4;
    iVar9 = *(int *)(iVar8 + *(int *)(param_1 + 0x4d6));
    if ((*(int *)(param_1 + 0x4e2) != iVar9) ||
       (*(int *)(param_1 + 0x4e6) != *(int *)(*(int *)(param_1 + 0x4da) + iVar8))) {
      *(int *)(param_1 + 0x4e2) = iVar9;
      iVar9 = 0;
      *(undefined4 *)(param_1 + 0x4e6) = *(undefined4 *)(*(int *)(param_1 + 0x4da) + iVar8);
      do {
        FUN_006ab060((LPVOID *)(iVar9 + *(int *)(param_1 + 0x472)));
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x140);
      iVar9 = *(int *)(param_1 + 0x4d2);
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          uVar3 = FUN_007175d0(*(byte **)(*(int *)(param_1 + 0x4ca) +
                                         (*(int *)(param_1 + 0x4de) * iVar9 + iVar8) * 4),
                               *(int *)(param_1 + 0x4e2),*(int *)(param_1 + 0x4e6),0x18);
          iVar8 = iVar8 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x472) + -4 + iVar8 * 4) = uVar3;
          iVar9 = *(int *)(param_1 + 0x4d2);
        } while (iVar8 < iVar9);
      }
      iVar9 = *(int *)(param_1 + 0x4d2);
      iVar8 = 0;
      if (0 < iVar9) {
        iVar6 = 0x40;
        do {
          pbVar4 = FUN_00717620(*(byte **)(*(int *)(param_1 + 0x4ca) +
                                          (*(int *)(param_1 + 0x4de) * iVar9 + iVar8) * 4),
                                *(int *)(param_1 + 0x4e2),*(int *)(param_1 + 0x4e6),0x18,0x10);
          iVar8 = iVar8 + 1;
          *(byte **)(iVar6 + *(int *)(param_1 + 0x472)) = pbVar4;
          iVar9 = *(int *)(param_1 + 0x4d2);
          iVar6 = iVar6 + 4;
        } while (iVar8 < iVar9);
      }
      iVar9 = *(int *)(param_1 + 0x4d2);
      iVar8 = 0;
      if (0 < iVar9) {
        iVar6 = 0x80;
        do {
          uVar3 = FUN_007175d0(*(byte **)(*(int *)(param_1 + 0x4c6) +
                                         (*(int *)(param_1 + 0x4de) * iVar9 + iVar8) * 4),
                               *(int *)(param_1 + 0x4e2),*(int *)(param_1 + 0x4e6),0x10);
          iVar8 = iVar8 + 1;
          *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x472)) = uVar3;
          iVar9 = *(int *)(param_1 + 0x4d2);
          iVar6 = iVar6 + 4;
        } while (iVar8 < iVar9);
      }
      pbVar4 = &DAT_007f0554;
      iVar9 = 0xc0;
      do {
        iVar8 = *(int *)(param_1 + 0x4de) * *(int *)(param_1 + 0x4d2);
        pbVar5 = FUN_00717680(*(int *)(*(int *)(param_1 + 0x4ca) + ((uint)*pbVar4 + iVar8) * 4),
                              *(byte **)(*(int *)(param_1 + 0x4c6) + ((uint)pbVar4[1] + iVar8) * 4),
                              *(int *)(param_1 + 0x4e2),*(int *)(param_1 + 0x4e6),0x18,0x10);
        iVar8 = iVar9 + 4;
        pbVar4 = pbVar4 + 2;
        *(byte **)(iVar9 + *(int *)(param_1 + 0x472)) = pbVar5;
        iVar9 = iVar8;
      } while (iVar8 < 0x140);
    }
  }
  return;
}

