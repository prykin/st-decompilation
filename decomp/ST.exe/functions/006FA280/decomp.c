
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fa280(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint local_14;
  uint local_10;
  ushort *local_c;
  int local_8;

  _DAT_00857000 = 1;
  iVar4 = param_10;
  do {
    param_10 = iVar4 + -1;
    if (param_10 < 0) {
      return;
    }
    if (param_12 == 1) {
      param_10 = iVar4 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar3 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar4 = param_7;
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
          if ((int)(iVar4 - uVar2) < 1) break;
          uVar3 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar4 = iVar4 - uVar2;
        }
      }
      param_12 = 2;
    }
    local_10 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar4 = param_8;
    if (local_10 != 0) {
      while( true ) {
        while ((local_10 & 0x80) == 0) {
          uVar3 = local_10 & 0x7f;
          if (iVar4 < (int)uVar3) goto LAB_006fa36d;
          bVar5 = *param_6;
          param_6 = param_6 + 1;
          iVar4 = iVar4 - uVar3;
          local_10 = (uint)bVar5;
        }
        uVar3 = local_10 & 0x3f;
        if (iVar4 < (int)uVar3) break;
        if ((local_10 & 0x40) == 0) {
          local_10 = (uint)param_6[uVar3];
          param_6 = param_6 + uVar3 + 1;
          iVar4 = iVar4 - uVar3;
        }
        else {
          local_10 = (uint)param_6[1];
          param_6 = param_6 + 2;
          iVar4 = iVar4 - uVar3;
        }
      }
LAB_006fa36d:
      uVar3 = uVar3 - iVar4;
      if (((byte)local_10 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar4;
      }
      local_8 = param_9;
      iVar4 = param_11;
      puVar8 = param_1;
      puVar7 = param_1;
      puVar9 = param_3;
      puVar10 = param_3;
      local_c = param_3;
      if ((int)uVar3 <= param_9) {
        do {
          local_14 = local_10 & 0x80;
          local_8 = local_8 - uVar3;
          puVar8 = puVar7;
          puVar9 = puVar10;
          if (local_14 == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar4 != 1) {
                  puVar7 = puVar7 + 1;
                  puVar10 = puVar10 + 1;
                }
                iVar4 = iVar4 + 1;
                if (2 < iVar4) {
                  iVar4 = 0;
                }
                uVar3 = uVar3 - 1;
                puVar8 = puVar7;
                puVar9 = puVar10;
                local_c = puVar10;
              } while (uVar3 != 0);
            }
          }
          else if ((local_10 & 0x40) == 0) {
            pbVar6 = param_6;
            if (0 < iVar4) {
              if (iVar4 == 1) {
                param_6 = param_6 + 1;
                uVar3 = uVar3 - 1;
                iVar4 = 2;
              }
              if ((int)uVar3 < 1) goto LAB_006fa516;
              if (param_5 <= *puVar10) {
                *puVar7 = *(undefined1 *)((uint)*param_6 + param_13);
              }
              puVar10 = puVar10 + 1;
              puVar7 = puVar7 + 1;
              pbVar6 = param_6 + 1;
              iVar4 = 0;
              uVar3 = uVar3 - 1;
              local_c = puVar10;
            }
            for (; puVar8 = puVar7, puVar9 = puVar10, param_6 = pbVar6, 0 < (int)uVar3;
                uVar3 = uVar3 - 3) {
              if (param_5 <= *puVar10) {
                *puVar7 = *(undefined1 *)((uint)*pbVar6 + param_13);
              }
              puVar9 = puVar10 + 1;
              puVar8 = puVar7 + 1;
              param_6 = pbVar6 + 1;
              iVar4 = 1;
              local_c = puVar9;
              if ((int)(uVar3 - 1) < 1) break;
              param_6 = pbVar6 + 2;
              iVar4 = 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (param_5 <= *puVar9) {
                *puVar8 = *(undefined1 *)((uint)*param_6 + param_13);
              }
              puVar10 = puVar10 + 2;
              puVar7 = puVar7 + 2;
              iVar4 = 0;
              pbVar6 = pbVar6 + 3;
              local_c = puVar10;
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
            param_6 = param_6 + 1;
            puVar10 = local_c;
            if (0 < iVar4) {
              if (iVar4 == 1) {
                iVar4 = 2;
                uVar3 = uVar3 - 1;
              }
              puVar9 = local_c;
              if ((int)uVar3 < 1) goto LAB_006fa516;
              if (param_5 <= *local_c) {
                *puVar7 = uVar1;
              }
              puVar7 = puVar7 + 1;
              iVar4 = 0;
              uVar3 = uVar3 - 1;
              puVar10 = local_c + 1;
            }
            for (; puVar8 = puVar7, puVar9 = puVar10, local_c = puVar10, 0 < (int)uVar3;
                uVar3 = uVar3 - 3) {
              if (param_5 <= *puVar10) {
                *puVar7 = uVar1;
              }
              puVar9 = puVar10 + 1;
              puVar8 = puVar7 + 1;
              iVar4 = 1;
              local_c = puVar9;
              if (((int)(uVar3 - 1) < 1) || (iVar4 = 2, (int)(uVar3 - 2) < 1)) break;
              if (param_5 <= *puVar9) {
                *puVar8 = uVar1;
              }
              puVar7 = puVar7 + 2;
              iVar4 = 0;
              puVar10 = puVar10 + 2;
            }
          }
LAB_006fa516:
          if (local_8 < 1) {
            uVar3 = 0;
            break;
          }
          bVar5 = *param_6;
          local_10 = (uint)bVar5;
          param_6 = param_6 + 1;
          if ((bVar5 & 0x80) == 0) {
            uVar3 = local_10 & 0x7f;
          }
          else {
            uVar3 = local_10 & 0x3f;
          }
          puVar7 = puVar8;
          puVar10 = puVar9;
        } while ((int)uVar3 <= local_8);
      }
      uVar3 = uVar3 - local_8;
      if ((0 < local_8) && ((local_10 & 0x80) != 0)) {
        if ((local_10 & 0x40) == 0) {
          pbVar6 = param_6;
          if (0 < iVar4) {
            if (iVar4 == 1) {
              param_6 = param_6 + 1;
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_006fa631;
            if (param_5 <= *puVar9) {
              *puVar8 = *(undefined1 *)((uint)*param_6 + param_13);
            }
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
            local_8 = local_8 + -1;
            pbVar6 = param_6 + 1;
          }
          for (; param_6 = pbVar6, 0 < local_8; local_8 = local_8 + -3) {
            if (param_5 <= *puVar9) {
              *puVar8 = *(undefined1 *)((uint)*pbVar6 + param_13);
            }
            param_6 = pbVar6 + 1;
            if ((local_8 + -1 < 1) || (param_6 = pbVar6 + 2, local_8 + -2 < 1)) break;
            if (param_5 <= puVar9[1]) {
              puVar8[1] = *(undefined1 *)((uint)*param_6 + param_13);
            }
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
            pbVar6 = pbVar6 + 3;
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_13);
          param_6 = param_6 + 1;
          if (0 < iVar4) {
            if (iVar4 == 1) {
              local_8 = local_8 + -1;
            }
            if (local_8 < 1) goto LAB_006fa631;
            if (param_5 <= *local_c) {
              *puVar8 = uVar1;
            }
            local_c = local_c + 1;
            puVar8 = puVar8 + 1;
            local_8 = local_8 + -1;
          }
          for (; 0 < local_8; local_8 = local_8 + -3) {
            if (param_5 <= *local_c) {
              *puVar8 = uVar1;
            }
            if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
            if (param_5 <= local_c[1]) {
              puVar8[1] = uVar1;
            }
            local_c = local_c + 2;
            puVar8 = puVar8 + 2;
          }
        }
      }
LAB_006fa631:
      bVar5 = (byte)local_10;
      iVar4 = (param_7 - param_8) - param_9;
      if ((int)uVar3 < iVar4) {
        do {
          iVar4 = iVar4 - uVar3;
          pbVar6 = param_6;
          if (((byte)local_10 & 0xc0) == 0x80) {
            pbVar6 = param_6 + uVar3;
          }
          bVar5 = *pbVar6;
          local_10 = (uint)bVar5;
          param_6 = pbVar6 + 1;
          uVar3 = local_10;
          if (((bVar5 & 0x80) != 0) && (uVar3 = local_10 & 0x3f, (bVar5 & 0x40) != 0)) {
            param_6 = pbVar6 + 2;
          }
        } while ((int)uVar3 < iVar4);
      }
      if ((bVar5 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar4;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    iVar4 = param_10;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

