
undefined4 FUN_00758800(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *local_c;
  int local_8;
  
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  pbVar9 = (byte *)*puVar4;
  iVar5 = puVar4[1];
  if (*(int *)(*(int *)(param_1 + 0x1a6) + 0x54) == 0) {
    FUN_006a5e40(0x3d,DAT_007ed77c,0x7f2db0,0x11a);
  }
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  iVar5 = iVar5 + -1;
  bVar1 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  bVar2 = *pbVar9;
  iVar5 = iVar5 + -1;
  pbVar9 = pbVar9 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  iVar5 = iVar5 + -1;
  bVar3 = *pbVar9;
  uVar6 = (uint)bVar3;
  pbVar9 = pbVar9 + 1;
  if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar6 * 2 + 6) || (bVar3 == 0)) || (4 < bVar3)) {
    FUN_006a5e40(9,DAT_007ed77c,0x7f2db0,0x121);
  }
  *(uint *)(param_1 + 0x136) = uVar6;
  local_8 = 0;
  if (uVar6 != 0) {
    local_c = (undefined4 *)(param_1 + 0x13a);
    do {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar4[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar4;
        iVar5 = puVar4[1];
      }
      iVar5 = iVar5 + -1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar4[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar4;
        iVar5 = puVar4[1];
      }
      puVar8 = *(uint **)(param_1 + 0xd0);
      iVar5 = iVar5 + -1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x1c)) {
        do {
          if ((uint)bVar1 == *puVar8) goto LAB_00758979;
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 0x15;
        } while (iVar7 < *(int *)(param_1 + 0x1c));
      }
      FUN_006a5e40(5,DAT_007ed77c,0x7f2db0,0x133);
LAB_00758979:
      *local_c = puVar8;
      puVar8[5] = (int)(uint)bVar2 >> 4;
      local_8 = local_8 + 1;
      puVar8[6] = bVar2 & 0xf;
      local_c = local_c + 1;
    } while (local_8 < (int)uVar6);
  }
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  iVar5 = iVar5 + -1;
  pbVar10 = pbVar9 + 1;
  *(uint *)(param_1 + 0x17e) = (uint)*pbVar9;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  iVar5 = iVar5 + -1;
  pbVar9 = pbVar10 + 1;
  *(uint *)(param_1 + 0x182) = (uint)*pbVar10;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  bVar1 = *pbVar9;
  *(uint *)(param_1 + 0x18a) = bVar1 & 0xf;
  *(int *)(param_1 + 0x186) = (int)(uint)bVar1 >> 4;
  *(undefined4 *)(*(int *)(param_1 + 0x1a6) + 0x58) = 0;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  puVar4[1] = iVar5 + -1;
  *puVar4 = pbVar9 + 1;
  return 1;
}

