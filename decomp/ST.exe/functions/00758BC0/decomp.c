
undefined4 FUN_00758bc0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte local_130 [256];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = (undefined4 *)param_1[4];
  local_1c = puVar2;
  iVar4 = puVar2[1];
  pbVar8 = (byte *)*puVar2;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar2[1];
    pbVar8 = (byte *)*puVar2;
    local_8 = iVar4;
  }
  iVar4 = iVar4 + -1;
  local_c = (uint)*pbVar8 << 8;
  pbVar8 = pbVar8 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar2[1];
    pbVar8 = (byte *)*puVar2;
    local_8 = iVar4;
  }
  pbVar9 = pbVar8 + 1;
  local_c = local_c + (uint)*pbVar8 + -2;
  iVar4 = iVar4 + -1;
  do {
    if (local_c < 1) {
      puVar2[1] = iVar4;
      *puVar2 = pbVar9;
      return 1;
    }
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar2[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = puVar2[1];
      pbVar9 = (byte *)*puVar2;
      local_8 = iVar4;
    }
    iVar4 = iVar4 + -1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    local_18 = (uint)bVar1;
    local_30 = local_30 & 0xffffff00;
    local_14 = 0;
    local_10 = 1;
    do {
      iVar6 = local_10;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar2[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = puVar2[1];
        pbVar9 = (byte *)*puVar2;
        iVar6 = local_10;
      }
      bVar1 = *pbVar9;
      *(byte *)((int)&local_30 + iVar6) = bVar1;
      iVar4 = iVar4 + -1;
      pbVar9 = pbVar9 + 1;
      local_14 = local_14 + (uint)bVar1;
      local_10 = iVar6 + 1;
      local_8 = iVar4;
    } while (local_10 < 0x11);
    local_c = local_c + -0x11;
    if ((0x100 < local_14) || (local_c < local_14)) {
      RaiseInternalException(0x1c,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x209);
    }
    local_10 = 0;
    iVar6 = local_14;
    if (0 < local_14) {
      do {
        iVar5 = local_10;
        if (iVar4 == 0) {
          iVar4 = (*(code *)puVar2[3])(param_1);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = puVar2[1];
          pbVar9 = (byte *)*puVar2;
          iVar5 = local_10;
          iVar6 = local_14;
        }
        iVar4 = iVar4 + -1;
        local_130[iVar5] = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_8 = iVar4;
        local_10 = iVar5 + 1;
      } while (iVar5 + 1 < iVar6);
    }
    local_c = local_c - iVar6;
    if ((local_18 & 0x10) == 0) {
      iVar4 = local_18 + 0x2b;
      uVar7 = local_18;
    }
    else {
      iVar4 = local_18 + 0x1f;
      uVar7 = local_18 - 0x10;
    }
    piVar10 = param_1 + iVar4;
    if (((int)uVar7 < 0) || (3 < (int)uVar7)) {
      RaiseInternalException(0x1d,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x218);
    }
    if (*piVar10 == 0) {
      iVar4 = FUN_00759e50(param_1);
      *piVar10 = iVar4;
    }
    puVar3 = (uint *)*piVar10;
    *puVar3 = local_30;
    puVar3[1] = local_2c;
    puVar3[2] = local_28;
    puVar3[3] = local_24;
    *(undefined1 *)(puVar3 + 4) = local_20;
    pbVar8 = local_130;
    puVar11 = (undefined4 *)(*piVar10 + 0x11);
    for (iVar6 = 0x40; puVar2 = local_1c, iVar4 = local_8, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      puVar11 = puVar11 + 1;
    }
  } while( true );
}

