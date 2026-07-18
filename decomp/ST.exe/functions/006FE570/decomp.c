
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fe570(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,int param_16,byte *param_17,
                 int param_18,int param_19)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  uint local_1c;
  undefined1 *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;
  
  pbVar7 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar10 = param_10;
  do {
    param_10 = iVar10 + -1;
    if (param_10 < 0) {
      return;
    }
    if (param_12 == 1) {
      param_10 = iVar10 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar9 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar10 = param_7;
      if (uVar9 != 0) {
        while( true ) {
          if ((uVar9 & 0x80) == 0) {
            uVar6 = uVar9 & 0x7f;
          }
          else if ((uVar9 & 0x40) == 0) {
            param_6 = param_6 + (uVar9 & 0x3f);
            uVar6 = uVar9 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar6 = uVar9 & 0x3f;
          }
          if ((int)(iVar10 - uVar6) < 1) break;
          uVar9 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar10 = iVar10 - uVar6;
        }
      }
      param_12 = 2;
    }
    local_1c = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_1c != 0) {
      uVar9 = 0x80 >> ((byte)param_15 & 7);
      iVar10 = param_8;
      while( true ) {
        while ((local_1c & 0x80) == 0) {
          uVar6 = local_1c & 0x7f;
          if (iVar10 < (int)uVar6) goto LAB_006fe684;
          iVar10 = iVar10 - uVar6;
          bVar8 = *param_6;
          param_6 = param_6 + 1;
          local_1c = (uint)bVar8;
        }
        uVar6 = local_1c & 0x3f;
        if (iVar10 < (int)uVar6) break;
        if ((local_1c & 0x40) == 0) {
          iVar10 = iVar10 - uVar6;
          local_1c = (uint)param_6[uVar6];
          param_6 = param_6 + uVar6 + 1;
        }
        else {
          iVar10 = iVar10 - uVar6;
          local_1c = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fe684:
      uVar6 = uVar6 - iVar10;
      if (((byte)local_1c & 0xc0) == 0x80) {
        param_6 = param_6 + iVar10;
      }
      local_14 = param_9;
      iVar10 = param_11;
      puVar12 = param_1;
      local_18 = param_1;
      local_10 = param_17;
      local_c = pbVar7;
      local_8 = param_3;
      if ((int)uVar6 <= param_9) {
        do {
          local_14 = local_14 - uVar6;
          if ((local_1c & 0x80) == 0) {
            if (-1 < (int)(uVar6 - 1)) {
              do {
                if (iVar10 != 1) {
                  puVar12 = puVar12 + 1;
                  local_10 = local_10 + 1;
                  local_8 = local_8 + 1;
                  uVar9 = uVar9 >> 1;
                  if (uVar9 == 0) {
                    uVar9 = 0x80;
                    local_c = local_c + 1;
                  }
                }
                iVar10 = iVar10 + 1;
                if (2 < iVar10) {
                  iVar10 = 0;
                }
                uVar6 = uVar6 - 1;
                local_18 = puVar12;
              } while (uVar6 != 0);
            }
          }
          else if ((local_1c & 0x40) == 0) {
            puVar2 = puVar12;
            pbVar11 = param_6;
            pbVar3 = local_10;
            puVar4 = local_8;
            if (0 < iVar10) {
              if (iVar10 == 1) {
                param_6 = param_6 + 1;
                iVar10 = 2;
                uVar6 = uVar6 - 1;
              }
              if ((int)uVar6 < 1) goto LAB_006fe95a;
              if ((*local_c & (byte)uVar9) == 0) {
                if (*local_8 < param_5) {
                  bVar8 = *local_10;
                  iVar10 = param_19;
                }
                else {
                  bVar8 = *param_6;
                  iVar10 = param_16;
                }
                *puVar12 = *(undefined1 *)((uint)bVar8 + iVar10);
              }
              local_18 = puVar12 + 1;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              uVar6 = uVar6 - 1;
              puVar2 = local_18;
              pbVar11 = param_6 + 1;
              pbVar3 = local_10 + 1;
              puVar4 = local_8 + 1;
            }
            for (; puVar12 = puVar2, param_6 = pbVar11, local_10 = pbVar3, local_8 = puVar4,
                0 < (int)uVar6; uVar6 = uVar6 - 3) {
              if ((*local_c & (byte)uVar9) == 0) {
                if (*puVar4 < param_5) {
                  bVar8 = *pbVar3;
                  iVar10 = param_19;
                }
                else {
                  bVar8 = *pbVar11;
                  iVar10 = param_16;
                }
                *puVar2 = *(undefined1 *)((uint)bVar8 + iVar10);
              }
              local_8 = puVar4 + 1;
              puVar12 = puVar2 + 1;
              local_10 = pbVar3 + 1;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              param_6 = pbVar11 + 1;
              iVar10 = 1;
              local_18 = puVar12;
              if ((int)(uVar6 - 1) < 1) break;
              param_6 = pbVar11 + 2;
              iVar10 = 2;
              if ((int)(uVar6 - 2) < 1) break;
              if ((*local_c & (byte)uVar9) == 0) {
                if (*local_8 < param_5) {
                  bVar8 = *local_10;
                  iVar10 = param_19;
                }
                else {
                  bVar8 = *param_6;
                  iVar10 = param_16;
                }
                *puVar12 = *(undefined1 *)((uint)bVar8 + iVar10);
              }
              local_18 = puVar2 + 2;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              puVar2 = local_18;
              pbVar11 = pbVar11 + 3;
              pbVar3 = pbVar3 + 2;
              puVar4 = puVar4 + 2;
            }
          }
          else {
            uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
            param_6 = param_6 + 1;
            puVar2 = local_18;
            pbVar11 = local_10;
            puVar4 = local_8;
            if (0 < iVar10) {
              if (iVar10 == 1) {
                iVar10 = 2;
                uVar6 = uVar6 - 1;
              }
              puVar12 = local_18;
              if ((int)uVar6 < 1) goto LAB_006fe95a;
              if ((*local_c & (byte)uVar9) == 0) {
                if (*local_8 < param_5) {
                  *local_18 = *(undefined1 *)((uint)*local_10 + param_19);
                }
                else {
                  *local_18 = uVar1;
                }
              }
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              uVar6 = uVar6 - 1;
              puVar2 = local_18 + 1;
              pbVar11 = local_10 + 1;
              puVar4 = local_8 + 1;
            }
            for (; puVar12 = puVar2, local_18 = puVar2, local_10 = pbVar11, local_8 = puVar4,
                0 < (int)uVar6; uVar6 = uVar6 - 3) {
              if ((*local_c & (byte)uVar9) == 0) {
                uVar5 = uVar1;
                if (*puVar4 < param_5) {
                  uVar5 = *(undefined1 *)((uint)*pbVar11 + param_19);
                }
                *puVar2 = uVar5;
              }
              local_8 = puVar4 + 1;
              puVar12 = puVar2 + 1;
              local_10 = pbVar11 + 1;
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 1;
              local_18 = puVar12;
              if (((int)(uVar6 - 1) < 1) || (iVar10 = 2, (int)(uVar6 - 2) < 1)) break;
              if ((*local_c & (byte)uVar9) == 0) {
                uVar5 = uVar1;
                if (*local_8 < param_5) {
                  uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
                }
                *puVar12 = uVar5;
              }
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) {
                uVar9 = 0x80;
                local_c = local_c + 1;
              }
              iVar10 = 0;
              puVar2 = puVar2 + 2;
              pbVar11 = pbVar11 + 2;
              puVar4 = puVar4 + 2;
            }
          }
LAB_006fe95a:
          if (local_14 < 1) {
            uVar6 = 0;
            break;
          }
          bVar8 = *param_6;
          local_1c = (uint)bVar8;
          param_6 = param_6 + 1;
          if ((bVar8 & 0x80) == 0) {
            uVar6 = bVar8 & 0x7f;
          }
          else {
            uVar6 = bVar8 & 0x3f;
          }
        } while ((int)uVar6 <= local_14);
      }
      uVar6 = uVar6 - local_14;
      if ((0 < local_14) && ((local_1c & 0x80) != 0)) {
        if ((local_1c & 0x40) == 0) {
          pbVar11 = param_6;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              param_6 = param_6 + 1;
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006feca3;
            if ((*local_c & (byte)uVar9) == 0) {
              if (*local_8 < param_5) {
                bVar8 = *local_10;
                iVar10 = param_19;
              }
              else {
                bVar8 = *param_6;
                iVar10 = param_16;
              }
              *puVar12 = *(undefined1 *)((uint)bVar8 + iVar10);
            }
            local_8 = local_8 + 1;
            puVar12 = puVar12 + 1;
            local_10 = local_10 + 1;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            pbVar11 = param_6 + 1;
            local_14 = local_14 + -1;
          }
          for (; param_6 = pbVar11, 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar9) == 0) {
              if (*local_8 < param_5) {
                bVar8 = *local_10;
                iVar10 = param_19;
              }
              else {
                bVar8 = *pbVar11;
                iVar10 = param_16;
              }
              *puVar12 = *(undefined1 *)((uint)bVar8 + iVar10);
            }
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = pbVar11 + 1;
            if ((local_14 + -1 < 1) || (param_6 = pbVar11 + 2, local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar9) == 0) {
              if (local_8[1] < param_5) {
                bVar8 = local_10[1];
                iVar10 = param_19;
              }
              else {
                bVar8 = *param_6;
                iVar10 = param_16;
              }
              puVar12[1] = *(undefined1 *)((uint)bVar8 + iVar10);
            }
            local_8 = local_8 + 2;
            puVar12 = puVar12 + 2;
            local_10 = local_10 + 2;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            pbVar11 = pbVar11 + 3;
          }
        }
        else {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_16);
          param_6 = param_6 + 1;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006feca3;
            if ((*local_c & (byte)uVar9) == 0) {
              if (*local_8 < param_5) {
                *local_18 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              else {
                *local_18 = uVar1;
              }
            }
            local_8 = local_8 + 1;
            local_18 = local_18 + 1;
            local_10 = local_10 + 1;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            local_14 = local_14 + -1;
          }
          for (; 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar9) == 0) {
              uVar5 = uVar1;
              if (*local_8 < param_5) {
                uVar5 = *(undefined1 *)((uint)*local_10 + param_19);
              }
              *local_18 = uVar5;
            }
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_14 + -1 < 1) || (local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar9) == 0) {
              uVar5 = uVar1;
              if (local_8[1] < param_5) {
                uVar5 = *(undefined1 *)((uint)local_10[1] + param_19);
              }
              local_18[1] = uVar5;
            }
            local_8 = local_8 + 2;
            local_18 = local_18 + 2;
            local_10 = local_10 + 2;
            uVar9 = uVar9 >> 1;
            if (uVar9 == 0) {
              uVar9 = 0x80;
              local_c = local_c + 1;
            }
          }
        }
      }
LAB_006feca3:
      iVar10 = (param_7 - param_8) - param_9;
      bVar8 = (byte)local_1c;
      if ((int)uVar6 < iVar10) {
        do {
          iVar10 = iVar10 - uVar6;
          pbVar11 = param_6;
          if (((byte)local_1c & 0xc0) == 0x80) {
            pbVar11 = param_6 + uVar6;
          }
          bVar8 = *pbVar11;
          local_1c = (uint)bVar8;
          param_6 = pbVar11 + 1;
          uVar6 = local_1c;
          if (((bVar8 & 0x80) != 0) && (uVar6 = local_1c & 0x3f, (bVar8 & 0x40) != 0)) {
            param_6 = pbVar11 + 2;
          }
        } while ((int)uVar6 < iVar10);
      }
      if ((bVar8 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar10;
      }
    }
    param_1 = param_1 + param_2;
    param_17 = param_17 + param_18;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar7 = pbVar7 + param_14;
    param_12 = param_12 + 1;
    iVar10 = param_10;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

