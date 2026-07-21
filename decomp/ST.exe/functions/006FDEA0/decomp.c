
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fdea0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,int param_16)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ushort *puVar9;
  uint local_18;
  int local_14;
  ushort *local_10;
  undefined1 *local_c;
  byte *local_8;

  pbVar3 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar6 = param_10;
  do {
    param_10 = iVar6 + -1;
    if (param_10 < 0) {
      return;
    }
    if (param_12 == 1) {
      param_10 = iVar6 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar4 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar6 = param_7;
      if (uVar4 != 0) {
        while( true ) {
          if ((uVar4 & 0x80) == 0) {
            uVar2 = uVar4 & 0x7f;
          }
          else if ((uVar4 & 0x40) == 0) {
            param_6 = param_6 + (uVar4 & 0x3f);
            uVar2 = uVar4 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar2 = uVar4 & 0x3f;
          }
          if ((int)(iVar6 - uVar2) < 1) break;
          uVar4 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar6 = iVar6 - uVar2;
        }
      }
      param_12 = 2;
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 != 0) {
      uVar4 = 0x80 >> ((byte)param_15 & 7);
      iVar6 = param_8;
      while( true ) {
        while ((local_18 & 0x80) == 0) {
          uVar2 = local_18 & 0x7f;
          if (iVar6 < (int)uVar2) goto LAB_006fdf96;
          iVar6 = iVar6 - uVar2;
          bVar5 = *param_6;
          param_6 = param_6 + 1;
          local_18 = (uint)bVar5;
        }
        uVar2 = local_18 & 0x3f;
        if (iVar6 < (int)uVar2) break;
        if ((local_18 & 0x40) == 0) {
          iVar6 = iVar6 - uVar2;
          local_18 = (uint)param_6[uVar2];
          param_6 = param_6 + uVar2 + 1;
        }
        else {
          iVar6 = iVar6 - uVar2;
          local_18 = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fdf96:
      uVar2 = uVar2 - iVar6;
      if (((byte)local_18 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar6;
      }
      local_14 = param_9;
      iVar6 = param_11;
      local_10 = param_3;
      local_c = param_1;
      local_8 = pbVar3;
      if ((int)uVar2 <= param_9) {
        do {
          local_14 = local_14 - uVar2;
          if ((local_18 & 0x80) == 0) {
            if (-1 < (int)(uVar2 - 1)) {
              do {
                if (iVar6 != 1) {
                  local_10 = local_10 + 1;
                  local_c = local_c + 1;
                  uVar4 = uVar4 >> 1;
                  if (uVar4 == 0) {
                    uVar4 = 0x80;
                    local_8 = local_8 + 1;
                  }
                }
                iVar6 = iVar6 + 1;
                if (2 < iVar6) {
                  iVar6 = 0;
                }
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
            }
          }
          else if ((local_18 & 0x40) == 0) {
            pbVar8 = param_6;
            puVar9 = local_10;
            puVar7 = local_c;
            if (0 < iVar6) {
              if (iVar6 == 1) {
                iVar6 = 2;
                param_6 = param_6 + 1;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_006fe248;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = *(undefined1 *)((uint)*param_6 + param_16);
              }
              puVar9 = local_10 + 1;
              puVar7 = local_c + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              pbVar8 = param_6 + 1;
              uVar2 = uVar2 - 1;
            }
            for (; param_6 = pbVar8, local_10 = puVar9, local_c = puVar7, 0 < (int)uVar2;
                uVar2 = uVar2 - 3) {
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *puVar9)) {
                *puVar7 = *(undefined1 *)((uint)*pbVar8 + param_16);
              }
              local_10 = puVar9 + 1;
              local_c = puVar7 + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              param_6 = pbVar8 + 1;
              iVar6 = 1;
              if ((int)(uVar2 - 1) < 1) break;
              param_6 = pbVar8 + 2;
              iVar6 = 2;
              if ((int)(uVar2 - 2) < 1) break;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = *(undefined1 *)((uint)*param_6 + param_16);
              }
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              pbVar8 = pbVar8 + 3;
              puVar9 = puVar9 + 2;
              puVar7 = puVar7 + 2;
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
            param_6 = param_6 + 1;
            puVar9 = local_10;
            puVar7 = local_c;
            if (0 < iVar6) {
              if (iVar6 == 1) {
                iVar6 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_006fe248;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = uVar1;
              }
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              uVar2 = uVar2 - 1;
              puVar9 = local_10 + 1;
              puVar7 = local_c + 1;
            }
            for (; local_10 = puVar9, local_c = puVar7, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *puVar9)) {
                *puVar7 = uVar1;
              }
              local_10 = puVar9 + 1;
              local_c = puVar7 + 1;
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 1;
              if (((int)(uVar2 - 1) < 1) || (iVar6 = 2, (int)(uVar2 - 2) < 1)) break;
              if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
                *local_c = uVar1;
              }
              uVar4 = uVar4 >> 1;
              if (uVar4 == 0) {
                uVar4 = 0x80;
                local_8 = local_8 + 1;
              }
              iVar6 = 0;
              puVar9 = puVar9 + 2;
              puVar7 = puVar7 + 2;
            }
          }
LAB_006fe248:
          if (local_14 < 1) {
            uVar2 = 0;
            break;
          }
          bVar5 = *param_6;
          local_18 = (uint)bVar5;
          param_6 = param_6 + 1;
          if ((bVar5 & 0x80) == 0) {
            uVar2 = local_18 & 0x7f;
          }
          else {
            uVar2 = local_18 & 0x3f;
          }
        } while ((int)uVar2 <= local_14);
      }
      uVar2 = uVar2 - local_14;
      if ((0 < local_14) && ((local_18 & 0x80) != 0)) {
        if ((local_18 & 0x40) == 0) {
          pbVar8 = param_6;
          if (0 < iVar6) {
            if (iVar6 == 1) {
              param_6 = param_6 + 1;
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fe395;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = *(undefined1 *)((uint)*param_6 + param_16);
            }
            local_10 = local_10 + 1;
            local_c = local_c + 1;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            pbVar8 = param_6 + 1;
            local_14 = local_14 + -1;
          }
          for (; param_6 = pbVar8, 0 < local_14; local_14 = local_14 + -3) {
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = *(undefined1 *)((uint)*pbVar8 + param_16);
            }
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            param_6 = pbVar8 + 1;
            if ((local_14 + -1 < 1) || (param_6 = pbVar8 + 2, local_14 + -2 < 1)) break;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= local_10[1])) {
              local_c[1] = *(undefined1 *)((uint)*param_6 + param_16);
            }
            local_10 = local_10 + 2;
            local_c = local_c + 2;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            pbVar8 = pbVar8 + 3;
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
          param_6 = param_6 + 1;
          if (0 < iVar6) {
            if (iVar6 == 1) {
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fe395;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = uVar1;
            }
            local_10 = local_10 + 1;
            local_c = local_c + 1;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            local_14 = local_14 + -1;
          }
          for (; 0 < local_14; local_14 = local_14 + -3) {
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= *local_10)) {
              *local_c = uVar1;
            }
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
            if ((local_14 + -1 < 1) || (local_14 + -2 < 1)) break;
            if (((*local_8 & (byte)uVar4) == 0) && (param_5 <= local_10[1])) {
              local_c[1] = uVar1;
            }
            local_10 = local_10 + 2;
            local_c = local_c + 2;
            uVar4 = uVar4 >> 1;
            if (uVar4 == 0) {
              uVar4 = 0x80;
              local_8 = local_8 + 1;
            }
          }
        }
      }
LAB_006fe395:
      bVar5 = (byte)local_18;
      iVar6 = (param_7 - param_8) - param_9;
      if ((int)uVar2 < iVar6) {
        do {
          iVar6 = iVar6 - uVar2;
          pbVar8 = param_6;
          if (((byte)local_18 & 0xc0) == 0x80) {
            pbVar8 = param_6 + uVar2;
          }
          bVar5 = *pbVar8;
          local_18 = (uint)bVar5;
          param_6 = pbVar8 + 1;
          uVar2 = local_18;
          if (((bVar5 & 0x80) != 0) && (uVar2 = local_18 & 0x3f, (bVar5 & 0x40) != 0)) {
            param_6 = pbVar8 + 2;
          }
        } while ((int)uVar2 < iVar6);
      }
      if ((bVar5 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar6;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar3 = pbVar3 + param_14;
    param_12 = param_12 + 1;
    iVar6 = param_10;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

