
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fbd40(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  uint local_18;
  byte *local_14;
  int local_10;
  byte *local_c;
  ushort *local_8;
  
  pbVar4 = (byte *)(param_13 + (param_15 >> 3));
  _DAT_00857000 = 1;
  iVar7 = param_10;
  do {
    param_10 = iVar7 + -1;
    if (param_10 < 0) {
      return;
    }
    if (param_12 == 1) {
      param_10 = iVar7 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar5 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar7 = param_7;
      if (uVar5 != 0) {
        while( true ) {
          if ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
          }
          else if ((uVar5 & 0x40) == 0) {
            param_6 = param_6 + (uVar5 & 0x3f);
            uVar3 = uVar5 & 0x3f;
          }
          else {
            param_6 = param_6 + 1;
            uVar3 = uVar5 & 0x3f;
          }
          if ((int)(iVar7 - uVar3) < 1) break;
          uVar5 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar7 = iVar7 - uVar3;
        }
      }
      param_12 = 2;
    }
    local_18 = (uint)*param_6;
    param_6 = param_6 + 1;
    if (local_18 != 0) {
      uVar5 = 0x80 >> ((byte)param_15 & 7);
      iVar7 = param_8;
      while( true ) {
        while ((local_18 & 0x80) == 0) {
          uVar3 = local_18 & 0x7f;
          if (iVar7 < (int)uVar3) goto LAB_006fbe4e;
          iVar7 = iVar7 - uVar3;
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          local_18 = (uint)bVar6;
        }
        uVar3 = local_18 & 0x3f;
        if (iVar7 < (int)uVar3) break;
        if ((local_18 & 0x40) == 0) {
          iVar7 = iVar7 - uVar3;
          local_18 = (uint)param_6[uVar3];
          param_6 = param_6 + uVar3 + 1;
        }
        else {
          iVar7 = iVar7 - uVar3;
          local_18 = (uint)param_6[1];
          param_6 = param_6 + 2;
        }
      }
LAB_006fbe4e:
      uVar3 = uVar3 - iVar7;
      if (((byte)local_18 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar7;
      }
      local_10 = param_9;
      iVar7 = param_11;
      local_14 = param_1;
      local_c = pbVar4;
      local_8 = param_3;
      if ((int)uVar3 <= param_9) {
        do {
          local_10 = local_10 - uVar3;
          if ((local_18 & 0x80) == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar7 != 1) {
                  local_14 = local_14 + 1;
                  local_8 = local_8 + 1;
                  uVar5 = uVar5 >> 1;
                  if (uVar5 == 0) {
                    uVar5 = 0x80;
                    local_c = local_c + 1;
                  }
                }
                iVar7 = iVar7 + 1;
                if (2 < iVar7) {
                  iVar7 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else if ((local_18 & 0x40) == 0) {
            pbVar8 = param_6;
            pbVar1 = local_14;
            puVar2 = local_8;
            if (0 < iVar7) {
              if (iVar7 == 1) {
                iVar7 = 2;
                param_6 = param_6 + 1;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_006fc0ab;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = *param_6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              uVar3 = uVar3 - 1;
              pbVar8 = param_6 + 1;
              pbVar1 = local_14 + 1;
              puVar2 = local_8 + 1;
            }
            for (; param_6 = pbVar8, local_14 = pbVar1, local_8 = puVar2, 0 < (int)uVar3;
                uVar3 = uVar3 - 3) {
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *puVar2)) {
                *pbVar1 = *pbVar8;
              }
              local_8 = puVar2 + 1;
              local_14 = pbVar1 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              param_6 = pbVar8 + 1;
              iVar7 = 1;
              if ((int)(uVar3 - 1) < 1) break;
              param_6 = pbVar8 + 2;
              iVar7 = 2;
              if ((int)(uVar3 - 2) < 1) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = *param_6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              pbVar8 = pbVar8 + 3;
              pbVar1 = pbVar1 + 2;
              puVar2 = puVar2 + 2;
            }
          }
          else {
            bVar6 = *param_6;
            param_6 = param_6 + 1;
            pbVar8 = local_14;
            puVar2 = local_8;
            if (0 < iVar7) {
              if (iVar7 == 1) {
                iVar7 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_006fc0ab;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = bVar6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              uVar3 = uVar3 - 1;
              pbVar8 = local_14 + 1;
              puVar2 = local_8 + 1;
            }
            for (; local_14 = pbVar8, local_8 = puVar2, 0 < (int)uVar3; uVar3 = uVar3 - 3) {
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *puVar2)) {
                *pbVar8 = bVar6;
              }
              local_8 = puVar2 + 1;
              local_14 = pbVar8 + 1;
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 1;
              if (((int)(uVar3 - 1) < 1) || (iVar7 = 2, (int)(uVar3 - 2) < 1)) break;
              if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
                *local_14 = bVar6;
              }
              uVar5 = uVar5 >> 1;
              if (uVar5 == 0) {
                uVar5 = 0x80;
                local_c = local_c + 1;
              }
              iVar7 = 0;
              pbVar8 = pbVar8 + 2;
              puVar2 = puVar2 + 2;
            }
          }
LAB_006fc0ab:
          if (local_10 < 1) {
            uVar3 = 0;
            break;
          }
          bVar6 = *param_6;
          local_18 = (uint)bVar6;
          param_6 = param_6 + 1;
          if ((bVar6 & 0x80) == 0) {
            uVar3 = local_18 & 0x7f;
          }
          else {
            uVar3 = local_18 & 0x3f;
          }
        } while ((int)uVar3 <= local_10);
      }
      uVar3 = uVar3 - local_10;
      if ((0 < local_10) && ((local_18 & 0x80) != 0)) {
        if ((local_18 & 0x40) == 0) {
          pbVar8 = param_6;
          if (0 < iVar7) {
            if (iVar7 == 1) {
              param_6 = param_6 + 1;
              local_10 = local_10 + -1;
            }
            if (local_10 < 1) goto LAB_006fc22a;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = *param_6;
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8 = param_6 + 1;
            local_10 = local_10 + -1;
          }
          for (; param_6 = pbVar8, 0 < local_10; local_10 = local_10 + -3) {
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = *pbVar8;
            }
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            param_6 = pbVar8 + 1;
            if ((local_10 + -1 < 1) || (param_6 = pbVar8 + 2, local_10 + -2 < 1)) break;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= local_8[1])) {
              local_14[1] = *param_6;
            }
            local_8 = local_8 + 2;
            local_14 = local_14 + 2;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            pbVar8 = pbVar8 + 3;
          }
        }
        else {
          bVar6 = *param_6;
          param_6 = param_6 + 1;
          if (0 < iVar7) {
            if (iVar7 == 1) {
              local_10 = local_10 + -1;
            }
            if (local_10 < 1) goto LAB_006fc22a;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = bVar6;
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 1;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            local_10 = local_10 + -1;
          }
          for (; 0 < local_10; local_10 = local_10 + -3) {
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= *local_8)) {
              *local_14 = bVar6;
            }
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
            if ((local_10 + -1 < 1) || (local_10 + -2 < 1)) break;
            if (((*local_c & (byte)uVar5) == 0) && (param_5 <= local_8[1])) {
              local_14[1] = bVar6;
            }
            local_8 = local_8 + 2;
            local_14 = local_14 + 2;
            uVar5 = uVar5 >> 1;
            if (uVar5 == 0) {
              uVar5 = 0x80;
              local_c = local_c + 1;
            }
          }
        }
      }
LAB_006fc22a:
      bVar6 = (byte)local_18;
      iVar7 = (param_7 - param_8) - param_9;
      if ((int)uVar3 < iVar7) {
        do {
          iVar7 = iVar7 - uVar3;
          pbVar8 = param_6;
          if (((byte)local_18 & 0xc0) == 0x80) {
            pbVar8 = param_6 + uVar3;
          }
          bVar6 = *pbVar8;
          local_18 = (uint)bVar6;
          param_6 = pbVar8 + 1;
          uVar3 = local_18;
          if (((bVar6 & 0x80) != 0) && (uVar3 = local_18 & 0x3f, (bVar6 & 0x40) != 0)) {
            param_6 = pbVar8 + 2;
          }
        } while ((int)uVar3 < iVar7);
      }
      if ((bVar6 & 0xc0) == 0x80) {
        param_6 = param_6 + iVar7;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    pbVar4 = pbVar4 + param_14;
    param_12 = param_12 + 1;
    iVar7 = param_10;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

