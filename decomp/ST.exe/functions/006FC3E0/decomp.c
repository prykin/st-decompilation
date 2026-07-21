
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fc3e0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,byte *param_16,int param_17,int param_18)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  ushort *local_8;

  pbVar9 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar11 = param_10;
  do {
    param_10 = iVar11 + -1;
    if (param_10 < 0) {
      return;
    }
    if (param_12 == 1) {
      param_10 = iVar11 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar7 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar11 = param_7;
      if (uVar7 != 0) {
        while( true ) {
          if ((uVar7 & 0x80) == 0) {
            uVar4 = uVar7 & 0x7f;
          }
          else if ((uVar7 & 0x40) == 0) {
            param_6 = param_6 + (uVar7 & 0x3f);
            uVar4 = uVar7 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar4 = uVar7 & 0x3f;
          }
          if ((int)(iVar11 - uVar4) < 1) break;
          uVar7 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar11 = iVar11 - uVar4;
        }
      }
      param_12 = 2;
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 != 0) {
      uVar7 = 0x80 >> ((byte)param_15 & 7);
      iVar11 = param_8;
      while( true ) {
        while ((local_18 & 0x80) == 0) {
          uVar4 = local_18 & 0x7f;
          if (iVar11 < (int)uVar4) goto LAB_006fc4ee;
          iVar11 = iVar11 - uVar4;
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          local_18 = (uint)bVar6;
        }
        uVar4 = local_18 & 0x3f;
        if (iVar11 < (int)uVar4) break;
        if ((local_18 & 0x40) == 0) {
          iVar11 = iVar11 - uVar4;
          local_18 = (uint)param_6[uVar4];
          param_6 = param_6 + uVar4 + 1;
        }
        else {
          iVar11 = iVar11 - uVar4;
          local_18 = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fc4ee:
      uVar4 = uVar4 - iVar11;
      if (((byte)local_18 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar11;
      }
      local_14 = param_9;
      iVar11 = param_11;
      pbVar10 = param_1;
      local_10 = param_16;
      local_c = pbVar9;
      local_8 = param_3;
      if ((int)uVar4 <= param_9) {
        do {
          local_14 = local_14 - uVar4;
          if ((local_18 & 0x80) == 0) {
            if (-1 < (int)(uVar4 - 1)) {
              do {
                if (iVar11 != 1) {
                  pbVar10 = pbVar10 + 1;
                  local_10 = local_10 + 1;
                  local_8 = local_8 + 1;
                  uVar7 = uVar7 >> 1;
                  if (uVar7 == 0) {
                    uVar7 = 0x80;
                    local_c = local_c + 1;
                  }
                }
                iVar11 = iVar11 + 1;
                if (2 < iVar11) {
                  iVar11 = 0;
                }
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if ((local_18 & 0x40) == 0) {
            pbVar8 = pbVar10;
            pbVar1 = param_6;
            pbVar2 = local_10;
            puVar3 = local_8;
            if (0 < iVar11) {
              if (iVar11 == 1) {
                param_6 = param_6 + 1;
                iVar11 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006fc793;
              if ((*local_c & (byte)uVar7) == 0) {
                if (*local_8 < param_5) {
                  bVar6 = *(byte *)((uint)*local_10 + param_18);
                }
                else {
                  bVar6 = *param_6;
                }
                *pbVar10 = bVar6;
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar11 = 0;
              uVar4 = uVar4 - 1;
              pbVar8 = pbVar10 + 1;
              pbVar1 = param_6 + 1;
              pbVar2 = local_10 + 1;
              puVar3 = local_8 + 1;
            }
            for (; pbVar10 = pbVar8, param_6 = pbVar1, local_10 = pbVar2, local_8 = puVar3,
                0 < (int)uVar4; uVar4 = uVar4 - 3) {
              if ((*local_c & (byte)uVar7) == 0) {
                if (*puVar3 < param_5) {
                  bVar6 = *(byte *)((uint)*pbVar2 + param_18);
                }
                else {
                  bVar6 = *pbVar1;
                }
                *pbVar8 = bVar6;
              }
              local_8 = puVar3 + 1;
              pbVar10 = pbVar8 + 1;
              local_10 = pbVar2 + 1;
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              param_6 = pbVar1 + 1;
              iVar11 = 1;
              if ((int)(uVar4 - 1) < 1) break;
              param_6 = pbVar1 + 2;
              iVar11 = 2;
              if ((int)(uVar4 - 2) < 1) break;
              if ((*local_c & (byte)uVar7) == 0) {
                if (*local_8 < param_5) {
                  bVar6 = *(byte *)((uint)*local_10 + param_18);
                }
                else {
                  bVar6 = *param_6;
                }
                *pbVar10 = bVar6;
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar11 = 0;
              pbVar8 = pbVar8 + 2;
              pbVar1 = pbVar1 + 3;
              pbVar2 = pbVar2 + 2;
              puVar3 = puVar3 + 2;
            }
          }
          else {
            bVar6 = *param_6;
            param_6 = param_6 + 1;
            pbVar8 = pbVar10;
            pbVar1 = local_10;
            puVar3 = local_8;
            if (0 < iVar11) {
              if (iVar11 == 1) {
                iVar11 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006fc793;
              if ((*local_c & (byte)uVar7) == 0) {
                if (*local_8 < param_5) {
                  *pbVar10 = *(byte *)((uint)*local_10 + param_18);
                }
                else {
                  *pbVar10 = bVar6;
                }
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar11 = 0;
              uVar4 = uVar4 - 1;
              pbVar8 = pbVar10 + 1;
              pbVar1 = local_10 + 1;
              puVar3 = local_8 + 1;
            }
            for (; pbVar10 = pbVar8, local_10 = pbVar1, local_8 = puVar3, 0 < (int)uVar4;
                uVar4 = uVar4 - 3) {
              if ((*local_c & (byte)uVar7) == 0) {
                bVar5 = bVar6;
                if (*puVar3 < param_5) {
                  bVar5 = *(byte *)((uint)*pbVar1 + param_18);
                }
                *pbVar8 = bVar5;
              }
              local_8 = puVar3 + 1;
              pbVar10 = pbVar8 + 1;
              local_10 = pbVar1 + 1;
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar11 = 1;
              if (((int)(uVar4 - 1) < 1) || (iVar11 = 2, (int)(uVar4 - 2) < 1)) break;
              if ((*local_c & (byte)uVar7) == 0) {
                bVar5 = bVar6;
                if (*local_8 < param_5) {
                  bVar5 = *(byte *)((uint)*local_10 + param_18);
                }
                *pbVar10 = bVar5;
              }
              uVar7 = uVar7 >> 1;
              if (uVar7 == 0) {
                uVar7 = 0x80;
                local_c = local_c + 1;
              }
              iVar11 = 0;
              pbVar8 = pbVar8 + 2;
              pbVar1 = pbVar1 + 2;
              puVar3 = puVar3 + 2;
            }
          }
LAB_006fc793:
          if (local_14 < 1) {
            uVar4 = 0;
            break;
          }
          bVar6 = *param_6;
          local_18 = (uint)bVar6;
          param_6 = param_6 + 1;
          if ((bVar6 & 0x80) == 0) {
            uVar4 = bVar6 & 0x7f;
          }
          else {
            uVar4 = bVar6 & 0x3f;
          }
        } while ((int)uVar4 <= local_14);
      }
      uVar4 = uVar4 - local_14;
      if ((0 < local_14) && ((local_18 & 0x80) != 0)) {
        if ((local_18 & 0x40) == 0) {
          pbVar8 = param_6;
          if (0 < iVar11) {
            if (iVar11 == 1) {
              param_6 = param_6 + 1;
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fca86;
            if ((*local_c & (byte)uVar7) == 0) {
              if (*local_8 < param_5) {
                bVar6 = *(byte *)((uint)*local_10 + param_18);
              }
              else {
                bVar6 = *param_6;
              }
              *pbVar10 = bVar6;
            }
            local_8 = local_8 + 1;
            pbVar10 = pbVar10 + 1;
            local_10 = local_10 + 1;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8 = param_6 + 1;
            local_14 = local_14 + -1;
          }
          for (; param_6 = pbVar8, 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar7) == 0) {
              if (*local_8 < param_5) {
                bVar6 = *(byte *)((uint)*local_10 + param_18);
              }
              else {
                bVar6 = *pbVar8;
              }
              *pbVar10 = bVar6;
            }
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = pbVar8 + 1;
            if ((local_14 + -1 < 1) || (param_6 = pbVar8 + 2, local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar7) == 0) {
              if (local_8[1] < param_5) {
                bVar6 = *(byte *)((uint)local_10[1] + param_18);
              }
              else {
                bVar6 = *param_6;
              }
              pbVar10[1] = bVar6;
            }
            local_8 = local_8 + 2;
            pbVar10 = pbVar10 + 2;
            local_10 = local_10 + 2;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8 = pbVar8 + 3;
          }
        }
        else {
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          if (0 < iVar11) {
            if (iVar11 == 1) {
              local_14 = local_14 + -1;
            }
            if (local_14 < 1) goto LAB_006fca86;
            if ((*local_c & (byte)uVar7) == 0) {
              if (*local_8 < param_5) {
                *pbVar10 = *(byte *)((uint)*local_10 + param_18);
              }
              else {
                *pbVar10 = bVar6;
              }
            }
            local_8 = local_8 + 1;
            pbVar10 = pbVar10 + 1;
            local_10 = local_10 + 1;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            local_14 = local_14 + -1;
          }
          for (; 0 < local_14; local_14 = local_14 + -3) {
            if ((*local_c & (byte)uVar7) == 0) {
              bVar5 = bVar6;
              if (*local_8 < param_5) {
                bVar5 = *(byte *)((uint)*local_10 + param_18);
              }
              *pbVar10 = bVar5;
            }
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_14 + -1 < 1) || (local_14 + -2 < 1)) break;
            if ((*local_c & (byte)uVar7) == 0) {
              bVar5 = bVar6;
              if (local_8[1] < param_5) {
                bVar5 = *(byte *)((uint)local_10[1] + param_18);
              }
              pbVar10[1] = bVar5;
            }
            local_8 = local_8 + 2;
            pbVar10 = pbVar10 + 2;
            local_10 = local_10 + 2;
            uVar7 = uVar7 >> 1;
            if (uVar7 == 0) {
              uVar7 = 0x80;
              local_c = local_c + 1;
            }
          }
        }
      }
LAB_006fca86:
      iVar11 = (param_7 - param_8) - param_9;
      bVar6 = (byte)local_18;
      if ((int)uVar4 < iVar11) {
        do {
          iVar11 = iVar11 - uVar4;
          pbVar10 = param_6;
          if (((byte)local_18 & 0xc0) == 0x80) {
            pbVar10 = param_6 + uVar4;
          }
          bVar6 = *pbVar10;
          local_18 = (uint)bVar6;
          param_6 = pbVar10 + 1;
          uVar4 = local_18;
          if (((bVar6 & 0x80) != 0) && (uVar4 = local_18 & 0x3f, (bVar6 & 0x40) != 0)) {
            param_6 = pbVar10 + 2;
          }
        } while ((int)uVar4 < iVar11);
      }
      if ((bVar6 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar11;
      }
    }
    param_1 = param_1 + param_2;
    param_16 = param_16 + param_17;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar9 = pbVar9 + param_14;
    param_12 = param_12 + 1;
    iVar11 = param_10;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

