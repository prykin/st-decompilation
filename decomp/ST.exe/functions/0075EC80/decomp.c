
void FUN_0075ec80(int param_1,int param_2,int *param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  byte *local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 *local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x1ba);
  iVar2 = *(int *)(param_1 + 0x132);
  iVar3 = *(int *)(iVar1 + 0x18);
  iVar4 = *(int *)(iVar1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x68);
  piVar6 = *(int **)(param_1 + 0x80);
  iVar7 = *piVar6;
  iVar8 = piVar6[1];
  iVar9 = piVar6[2];
  if (0 < (int)param_4) {
    local_20 = param_3;
    local_40 = param_4;
    do {
      param_4 = *(byte **)((param_2 - (int)param_3) + (int)local_20);
      local_c = (undefined1 *)*local_20;
      if (*(int *)(iVar1 + 0x24) == 0) {
        psVar10 = *(short **)(iVar1 + 0x20);
        local_34 = 1;
        *(undefined4 *)(iVar1 + 0x24) = 1;
        local_8 = 3;
      }
      else {
        local_34 = -1;
        local_8 = -3;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        param_4 = param_4 + iVar5 * 3 + -3;
        local_c = local_c + iVar5 + -1;
        psVar10 = (short *)(*(int *)(iVar1 + 0x20) + (iVar5 * 3 + 3) * 2);
      }
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      iVar16 = 0;
      iVar19 = 0;
      iVar18 = 0;
      local_1c = 0;
      local_1c._0_2_ = 0;
      local_18 = 0;
      local_18._0_2_ = 0;
      local_14 = 0;
      local_14._0_2_ = 0;
      for (iVar11 = iVar5; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar13 = (uint)*(byte *)(*(int *)(iVar4 + (psVar10[local_8] + 8 + iVar18 >> 4) * 4) +
                                 (uint)*param_4 + iVar2);
        uVar14 = (uint)*(byte *)(*(int *)(iVar4 + (psVar10[local_8 + 1] + 8 + iVar19 >> 4) * 4) +
                                 (uint)param_4[1] + iVar2);
        iVar19 = (int)uVar13 >> 3;
        uVar17 = (uint)*(byte *)(*(int *)(iVar4 + (psVar10[local_8 + 2] + 8 + iVar16 >> 4) * 4) +
                                 (uint)param_4[2] + iVar2);
        iVar16 = (int)uVar14 >> 2;
        iVar15 = (int)uVar17 >> 3;
        iVar12 = iVar16 * 0x20 + iVar15;
        iVar18 = *(int *)(iVar3 + iVar19 * 4);
        if (*(short *)(iVar18 + iVar12 * 2) == 0) {
          FUN_0075e890(param_1,iVar19,iVar16,iVar15);
        }
        iVar18 = *(ushort *)(iVar18 + iVar12 * 2) - 1;
        *local_c = (char)iVar18;
        iVar15 = uVar13 - *(byte *)(iVar18 + iVar7);
        iVar20 = uVar14 - *(byte *)(iVar18 + iVar8);
        iVar12 = uVar17 - *(byte *)(iVar18 + iVar9);
        *psVar10 = (short)local_14 + (short)iVar15 * 3;
        local_14 = local_28 + iVar15 * 5;
        iVar18 = iVar15 * 7;
        psVar10[1] = (short)local_18 + (short)iVar20 * 3;
        local_18 = local_2c + iVar20 * 5;
        iVar19 = iVar20 * 7;
        psVar10[2] = (short)local_1c + (short)iVar12 * 3;
        local_1c = local_30 + iVar12 * 5;
        iVar16 = iVar12 * 7;
        param_4 = param_4 + local_8;
        psVar10 = psVar10 + local_8;
        local_c = local_c + local_34;
        local_30 = iVar12;
        local_2c = iVar20;
        local_28 = iVar15;
      }
      *psVar10 = (short)local_14;
      psVar10[1] = (short)local_18;
      psVar10[2] = (short)local_1c;
      local_20 = local_20 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != (byte *)0x0);
  }
  return;
}

