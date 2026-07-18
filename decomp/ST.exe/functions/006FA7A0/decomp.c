
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa7a0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,byte *param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined1 uVar8;
  byte bVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_18;
  uint local_14;
  byte *local_10;
  ushort *local_c;
  int local_8;
  
  _DAT_00857000 = 1;
  iVar11 = param_10;
joined_r0x006fa7ba:
  param_10 = iVar11 + -1;
  if (param_10 < 0) {
    return;
  }
  if (param_12 == 1) {
    param_10 = iVar11 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar3 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar11 = param_7;
    if (uVar3 != 0) {
      while( true ) {
        if ((uVar3 & 0x80) == 0) {
          uVar2 = uVar3 & 0x7f;
        }
        else if ((uVar3 & 0x40) == 0) {
          param_6 = param_6 + (uVar3 & 0x3f);
          uVar2 = uVar3 & 0x3f;
        }
        else {
          param_6 = param_6 + 1;
          uVar2 = uVar3 & 0x3f;
        }
        if ((int)(iVar11 - uVar2) < 1) break;
        uVar3 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar11 = iVar11 - uVar2;
      }
    }
    param_12 = 2;
  }
  local_14 = (uint)*param_6;
  param_6 = param_6 + 1;
  if (local_14 != 0) {
    local_8 = param_8;
    do {
      if ((local_14 & 0x80) == 0) {
        uVar3 = local_14 & 0x7f;
        if (local_8 < (int)uVar3) goto LAB_006fa888;
      }
      else {
        uVar3 = local_14 & 0x3f;
        if (local_8 < (int)uVar3) goto LAB_006fa888;
        if ((local_14 & 0x40) == 0) {
          param_6 = param_6 + uVar3;
        }
        else {
          param_6 = param_6 + 1;
        }
      }
      local_8 = local_8 - uVar3;
      local_14 = (uint)*param_6;
      param_6 = param_6 + 1;
    } while( true );
  }
  goto LAB_006fad74;
LAB_006fa888:
  uVar3 = uVar3 - local_8;
  if (((byte)local_14 & 0xc0) == 0x80) {
    param_6 = param_6 + local_8;
  }
  local_8 = param_9;
  puVar4 = param_1;
  puVar7 = param_3;
  puVar6 = param_3;
  iVar11 = param_11;
  pbVar13 = param_14;
  pbVar10 = param_14;
  local_10 = param_14;
  local_c = param_3;
  if ((int)uVar3 <= param_9) {
    do {
      local_18 = local_14 & 0x80;
      local_8 = local_8 - uVar3;
      puVar7 = puVar6;
      pbVar13 = pbVar10;
      if (local_18 == 0) {
        if (-1 < (int)(uVar3 - 1)) {
          do {
            if (iVar11 != 1) {
              puVar4 = puVar4 + 1;
              pbVar10 = pbVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar11 = iVar11 + 1;
            if (2 < iVar11) {
              iVar11 = 0;
            }
            uVar3 = uVar3 - 1;
            puVar7 = puVar6;
            pbVar13 = pbVar10;
            local_10 = pbVar10;
            local_c = puVar6;
          } while (uVar3 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        puVar5 = puVar4;
        pbVar12 = param_6;
        if (0 < iVar11) {
          if (iVar11 == 1) {
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar11 = 2;
          }
          if ((int)uVar3 < 1) goto LAB_006faad5;
          if (*puVar6 < param_5) {
            bVar9 = *pbVar10;
            iVar11 = param_16;
          }
          else {
            bVar9 = *param_6;
            iVar11 = param_13;
          }
          *puVar4 = *(undefined1 *)((uint)bVar9 + iVar11);
          puVar6 = puVar6 + 1;
          puVar5 = puVar4 + 1;
          pbVar10 = pbVar10 + 1;
          pbVar12 = param_6 + 1;
          iVar11 = 0;
          uVar3 = uVar3 - 1;
          local_10 = pbVar10;
          local_c = puVar6;
        }
        for (; puVar4 = puVar5, puVar7 = puVar6, pbVar13 = pbVar10, param_6 = pbVar12,
            0 < (int)uVar3; uVar3 = uVar3 - 3) {
          if (*puVar6 < param_5) {
            bVar9 = *pbVar10;
            iVar11 = param_16;
          }
          else {
            bVar9 = *pbVar12;
            iVar11 = param_13;
          }
          *puVar5 = *(undefined1 *)((uint)bVar9 + iVar11);
          puVar7 = puVar6 + 1;
          puVar4 = puVar5 + 1;
          pbVar13 = pbVar10 + 1;
          param_6 = pbVar12 + 1;
          iVar11 = 1;
          local_10 = pbVar13;
          local_c = puVar7;
          if ((int)(uVar3 - 1) < 1) break;
          param_6 = pbVar12 + 2;
          iVar11 = 2;
          if ((int)(uVar3 - 2) < 1) break;
          if (*puVar7 < param_5) {
            bVar9 = *pbVar13;
            iVar11 = param_16;
          }
          else {
            bVar9 = *param_6;
            iVar11 = param_13;
          }
          *puVar4 = *(undefined1 *)((uint)bVar9 + iVar11);
          puVar6 = puVar6 + 2;
          pbVar10 = pbVar10 + 2;
          iVar11 = 0;
          puVar5 = puVar5 + 2;
          pbVar12 = pbVar12 + 3;
          local_10 = pbVar10;
          local_c = puVar6;
        }
      }
      else {
        uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
        param_6 = param_6 + 1;
        puVar5 = puVar4;
        pbVar10 = local_10;
        puVar6 = local_c;
        if (0 < iVar11) {
          if (iVar11 == 1) {
            iVar11 = 2;
            uVar3 = uVar3 - 1;
          }
          puVar7 = local_c;
          pbVar13 = local_10;
          if ((int)uVar3 < 1) goto LAB_006faad5;
          if (*local_c < param_5) {
            iVar11 = 0;
            *puVar4 = *(undefined1 *)((uint)*local_10 + param_16);
            uVar3 = uVar3 - 1;
            puVar5 = puVar4 + 1;
            pbVar10 = local_10 + 1;
            puVar6 = local_c + 1;
          }
          else {
            *puVar4 = uVar1;
            iVar11 = 0;
            uVar3 = uVar3 - 1;
            puVar5 = puVar4 + 1;
            pbVar10 = local_10 + 1;
            puVar6 = local_c + 1;
          }
        }
        for (; puVar4 = puVar5, puVar7 = puVar6, pbVar13 = pbVar10, local_10 = pbVar10,
            local_c = puVar6, 0 < (int)uVar3; uVar3 = uVar3 - 3) {
          uVar8 = uVar1;
          if (*puVar6 < param_5) {
            uVar8 = *(undefined1 *)((uint)*pbVar10 + param_16);
          }
          *puVar5 = uVar8;
          puVar7 = puVar6 + 1;
          puVar4 = puVar5 + 1;
          pbVar13 = pbVar10 + 1;
          iVar11 = 1;
          local_10 = pbVar13;
          local_c = puVar7;
          if (((int)(uVar3 - 1) < 1) || (iVar11 = 2, (int)(uVar3 - 2) < 1)) break;
          uVar8 = uVar1;
          if (*puVar7 < param_5) {
            uVar8 = *(undefined1 *)((uint)*pbVar13 + param_16);
          }
          *puVar4 = uVar8;
          iVar11 = 0;
          puVar5 = puVar5 + 2;
          pbVar10 = pbVar10 + 2;
          puVar6 = puVar6 + 2;
        }
      }
LAB_006faad5:
      if (local_8 < 1) {
        uVar3 = 0;
        break;
      }
      bVar9 = *param_6;
      local_14 = (uint)bVar9;
      param_6 = param_6 + 1;
      if ((bVar9 & 0x80) == 0) {
        uVar3 = bVar9 & 0x7f;
      }
      else {
        uVar3 = bVar9 & 0x3f;
      }
      puVar6 = puVar7;
      pbVar10 = pbVar13;
    } while ((int)uVar3 <= local_8);
  }
  uVar3 = uVar3 - local_8;
  if ((0 < local_8) && ((local_14 & 0x80) != 0)) {
    if ((local_14 & 0x40) == 0) {
      pbVar10 = param_6;
      if (0 < iVar11) {
        if (iVar11 == 1) {
          param_6 = param_6 + 1;
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006fad1c;
        if (*puVar7 < param_5) {
          bVar9 = *pbVar13;
          iVar11 = param_16;
        }
        else {
          bVar9 = *param_6;
          iVar11 = param_13;
        }
        *puVar4 = *(undefined1 *)((uint)bVar9 + iVar11);
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
        pbVar13 = pbVar13 + 1;
        pbVar10 = param_6 + 1;
        local_8 = local_8 + -1;
      }
      for (; param_6 = pbVar10, 0 < local_8; local_8 = local_8 + -3) {
        if (*puVar7 < param_5) {
          bVar9 = *pbVar13;
          iVar11 = param_16;
        }
        else {
          bVar9 = *pbVar10;
          iVar11 = param_13;
        }
        *puVar4 = *(undefined1 *)((uint)bVar9 + iVar11);
        param_6 = pbVar10 + 1;
        if ((local_8 + -1 < 1) || (param_6 = pbVar10 + 2, local_8 + -2 < 1)) break;
        if (puVar7[1] < param_5) {
          bVar9 = pbVar13[1];
          iVar11 = param_16;
        }
        else {
          bVar9 = *param_6;
          iVar11 = param_13;
        }
        puVar4[1] = *(undefined1 *)((uint)bVar9 + iVar11);
        puVar7 = puVar7 + 2;
        puVar4 = puVar4 + 2;
        pbVar13 = pbVar13 + 2;
        pbVar10 = pbVar10 + 3;
      }
    }
    else {
      uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
      param_6 = param_6 + 1;
      if (0 < iVar11) {
        if (iVar11 == 1) {
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006fad1c;
        if (*local_c < param_5) {
          *puVar4 = *(undefined1 *)((uint)*local_10 + param_16);
          local_c = local_c + 1;
          puVar4 = puVar4 + 1;
          local_10 = local_10 + 1;
          local_8 = local_8 + -1;
        }
        else {
          *puVar4 = uVar1;
          local_c = local_c + 1;
          puVar4 = puVar4 + 1;
          local_10 = local_10 + 1;
          local_8 = local_8 + -1;
        }
      }
      for (; 0 < local_8; local_8 = local_8 + -3) {
        uVar8 = uVar1;
        if (*local_c < param_5) {
          uVar8 = *(undefined1 *)((uint)*local_10 + param_16);
        }
        *puVar4 = uVar8;
        if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
        uVar8 = uVar1;
        if (local_c[1] < param_5) {
          uVar8 = *(undefined1 *)((uint)local_10[1] + param_16);
        }
        puVar4[1] = uVar8;
        local_c = local_c + 2;
        puVar4 = puVar4 + 2;
        local_10 = local_10 + 2;
      }
    }
  }
LAB_006fad1c:
  bVar9 = (byte)local_14;
  iVar11 = (param_7 - param_8) - param_9;
  if ((int)uVar3 < iVar11) {
    do {
      iVar11 = iVar11 - uVar3;
      if (((byte)local_14 & 0xc0) == 0x80) {
        param_6 = param_6 + uVar3;
      }
      bVar9 = *param_6;
      local_14 = (uint)bVar9;
      uVar3 = local_14;
      pbVar10 = param_6 + 1;
      if (((bVar9 & 0x80) != 0) && (uVar3 = local_14 & 0x3f, (bVar9 & 0x40) != 0)) {
        pbVar10 = param_6 + 2;
      }
      param_6 = pbVar10;
    } while ((int)uVar3 < iVar11);
  }
  if ((bVar9 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar11;
  }
LAB_006fad74:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_14 = param_14 + param_15;
  param_12 = param_12 + 1;
  iVar11 = param_10;
  if (2 < param_12) {
    param_12 = 0;
  }
  goto joined_r0x006fa7ba;
}

