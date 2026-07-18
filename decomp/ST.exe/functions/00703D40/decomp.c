
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00703d40(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,int param_16,int param_17,
                 int param_18)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint local_18;
  uint local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;
  
  pbVar3 = (byte *)(param_16 + (param_18 >> 3));
  _DAT_00857000 = 1;
  iVar11 = param_12;
joined_r0x00703d68:
  param_12 = iVar11 + -1;
  if (param_12 < 0) {
    return;
  }
  if (param_14 == 1) {
    param_12 = iVar11 + -2;
    if (param_12 < 0) {
      return;
    }
    uVar4 = (uint)*param_8;
    param_8 = param_8 + 1;
    iVar11 = param_9;
    if (uVar4 != 0) {
      while( true ) {
        if ((uVar4 & 0x80) == 0) {
          uVar2 = uVar4 & 0x7f;
        }
        else if ((uVar4 & 0x40) == 0) {
          param_8 = param_8 + (uVar4 & 0x3f);
          uVar2 = uVar4 & 0x3f;
        }
        else {
          param_8 = param_8 + 1;
          uVar2 = uVar4 & 0x3f;
        }
        if ((int)(iVar11 - uVar2) < 1) break;
        uVar4 = (uint)*param_8;
        param_8 = param_8 + 1;
        iVar11 = iVar11 - uVar2;
      }
    }
    param_14 = 2;
  }
  local_14 = (uint)*param_8;
  param_8 = param_8 + 1;
  if (local_14 != 0) {
    uVar4 = 0x80 >> ((byte)param_18 & 7);
    iVar11 = param_10;
    do {
      if ((local_14 & 0x80) == 0) {
        local_18 = local_14 & 0x7f;
        if (iVar11 < (int)local_18) goto LAB_00703e38;
      }
      else {
        local_18 = local_14 & 0x3f;
        if (iVar11 < (int)local_18) goto LAB_00703e38;
        if ((local_14 & 0x40) == 0) {
          param_8 = param_8 + local_18;
        }
        else {
          param_8 = param_8 + 1;
        }
      }
      iVar11 = iVar11 - local_18;
      local_14 = (uint)*param_8;
      param_8 = param_8 + 1;
    } while( true );
  }
  goto LAB_007043ff;
LAB_00703e38:
  local_18 = local_18 - iVar11;
  if (((byte)local_14 & 0xc0) == 0x80) {
    param_8 = param_8 + iVar11;
  }
  puVar6 = param_1;
  iVar7 = param_13;
  iVar11 = param_11;
  local_10 = pbVar3;
  local_c = param_3;
  local_8 = param_5;
  if ((int)local_18 <= param_11) {
    do {
      iVar11 = iVar11 - local_18;
      if ((local_14 & 0x80) == 0) {
        if (-1 < (int)(local_18 - 1)) {
          do {
            if (iVar7 != 1) {
              puVar6 = puVar6 + 1;
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_10 = local_10 + 1;
              }
            }
            iVar7 = iVar7 + 1;
            if (2 < iVar7) {
              iVar7 = 0;
            }
            local_18 = local_18 - 1;
          } while (local_18 != 0);
        }
      }
      else if ((local_14 & 0x40) == 0) {
        puVar5 = puVar6;
        pbVar9 = param_8;
        pbVar10 = local_c;
        puVar8 = local_8;
        if (0 < iVar7) {
          if (iVar7 == 1) {
            param_8 = param_8 + 1;
            local_18 = local_18 - 1;
            iVar7 = 2;
          }
          if ((int)local_18 < 1) goto LAB_00704120;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          puVar8 = local_8 + 1;
          puVar5 = puVar6 + 1;
          pbVar10 = local_c + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          pbVar9 = param_8 + 1;
          iVar7 = 0;
          local_18 = local_18 - 1;
        }
        for (; puVar6 = puVar5, param_8 = pbVar9, local_c = pbVar10, local_8 = puVar8,
            0 < (int)local_18; local_18 = local_18 - 3) {
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *puVar8)) {
            *puVar5 = *(undefined1 *)((uint)*pbVar10 + param_15);
          }
          local_8 = puVar8 + 1;
          puVar6 = puVar5 + 1;
          local_c = pbVar10 + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          param_8 = pbVar9 + 1;
          iVar7 = 1;
          if ((int)(local_18 - 1) < 1) break;
          param_8 = pbVar9 + 2;
          iVar7 = 2;
          if ((int)(local_18 - 2) < 1) break;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 0;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 3;
          pbVar10 = pbVar10 + 2;
          puVar8 = puVar8 + 2;
        }
      }
      else {
        param_8 = param_8 + 1;
        puVar5 = puVar6;
        pbVar9 = local_c;
        puVar8 = local_8;
        if (0 < iVar7) {
          if (iVar7 == 1) {
            iVar7 = 2;
            local_18 = local_18 - 1;
          }
          if ((int)local_18 < 1) goto LAB_00704120;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          puVar8 = local_8 + 1;
          puVar5 = puVar6 + 1;
          pbVar9 = local_c + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 0;
          local_18 = local_18 - 1;
        }
        for (; puVar6 = puVar5, local_c = pbVar9, local_8 = puVar8, 0 < (int)local_18;
            local_18 = local_18 - 3) {
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *puVar8)) {
            *puVar5 = *(undefined1 *)((uint)*pbVar9 + param_15);
          }
          local_8 = puVar8 + 1;
          puVar6 = puVar5 + 1;
          local_c = pbVar9 + 1;
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 1;
          if (((int)(local_18 - 1) < 1) || (iVar7 = 2, (int)(local_18 - 2) < 1)) break;
          if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
            *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
          }
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) {
            uVar4 = 0x80;
            local_10 = local_10 + 1;
          }
          iVar7 = 0;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 2;
          puVar8 = puVar8 + 2;
        }
      }
LAB_00704120:
      if (iVar11 < 1) {
        local_18 = 0;
        break;
      }
      bVar1 = *param_8;
      local_14 = (uint)bVar1;
      param_8 = param_8 + 1;
      if ((bVar1 & 0x80) == 0) {
        local_18 = bVar1 & 0x7f;
      }
      else {
        local_18 = bVar1 & 0x3f;
      }
    } while ((int)local_18 <= iVar11);
  }
  local_18 = local_18 - iVar11;
  if ((0 < iVar11) && ((local_14 & 0x80) != 0)) {
    if ((local_14 & 0x40) == 0) {
      pbVar9 = param_8;
      if (0 < iVar7) {
        if (iVar7 == 1) {
          param_8 = param_8 + 1;
          iVar11 = iVar11 + -1;
        }
        if (iVar11 < 1) goto LAB_007043a8;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        local_8 = local_8 + 1;
        puVar6 = puVar6 + 1;
        local_c = local_c + 1;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        pbVar9 = param_8 + 1;
        iVar11 = iVar11 + -1;
      }
      for (; param_8 = pbVar9, 0 < iVar11; iVar11 = iVar11 + -3) {
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        param_8 = pbVar9 + 1;
        if ((iVar11 + -1 < 1) || (param_8 = pbVar9 + 2, iVar11 + -2 < 1)) break;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= local_8[1])) {
          puVar6[1] = *(undefined1 *)((uint)local_c[1] + param_15);
        }
        local_8 = local_8 + 2;
        puVar6 = puVar6 + 2;
        local_c = local_c + 2;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        pbVar9 = pbVar9 + 3;
      }
    }
    else {
      param_8 = param_8 + 1;
      if (0 < iVar7) {
        if (iVar7 == 1) {
          iVar11 = iVar11 + -1;
        }
        if (iVar11 < 1) goto LAB_007043a8;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        local_8 = local_8 + 1;
        puVar6 = puVar6 + 1;
        local_c = local_c + 1;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        iVar11 = iVar11 + -1;
      }
      for (; 0 < iVar11; iVar11 = iVar11 + -3) {
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= *local_8)) {
          *puVar6 = *(undefined1 *)((uint)*local_c + param_15);
        }
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
        if ((iVar11 + -1 < 1) || (iVar11 + -2 < 1)) break;
        if (((*local_10 & (byte)uVar4) == 0) && (param_7 <= local_8[1])) {
          puVar6[1] = *(undefined1 *)((uint)local_c[1] + param_15);
        }
        local_8 = local_8 + 2;
        puVar6 = puVar6 + 2;
        local_c = local_c + 2;
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar4 = 0x80;
          local_10 = local_10 + 1;
        }
      }
    }
  }
LAB_007043a8:
  iVar11 = (param_9 - param_10) - param_11;
  bVar1 = (byte)local_14;
  if ((int)local_18 < iVar11) {
    do {
      iVar11 = iVar11 - local_18;
      pbVar9 = param_8;
      if (((byte)local_14 & 0xc0) == 0x80) {
        pbVar9 = param_8 + local_18;
      }
      bVar1 = *pbVar9;
      local_14 = (uint)bVar1;
      param_8 = pbVar9 + 1;
      local_18 = local_14;
      if (((bVar1 & 0x80) != 0) && (local_18 = local_14 & 0x3f, (bVar1 & 0x40) != 0)) {
        param_8 = pbVar9 + 2;
      }
    } while ((int)local_18 < iVar11);
  }
  local_14._0_1_ = bVar1;
  if (((byte)local_14 & 0xc0) == 0x80) {
    param_8 = param_8 + iVar11;
  }
LAB_007043ff:
  param_1 = param_1 + param_2;
  param_5 = (ushort *)((int)param_5 + param_6);
  param_3 = param_3 + param_4;
  pbVar3 = pbVar3 + param_17;
  param_14 = param_14 + 1;
  iVar11 = param_12;
  if (2 < param_14) {
    param_14 = 0;
  }
  goto joined_r0x00703d68;
}

