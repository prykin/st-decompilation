
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f6ae0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,byte *param_13,int param_14)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_c;
  uint local_8;

  pbVar3 = param_13 + param_8;
  _DAT_00857000 = 1;
  pbVar8 = (byte *)(param_11 + ((int)pbVar3 >> 3));
  if (-1 < param_10 + -1) {
    local_c = param_10;
    do {
      uVar4 = (uint)*param_6;
      param_6 = param_6 + 1;
      if (uVar4 == 0) {
        param_1 = param_1 + param_2;
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar7 = 0x80 >> ((byte)pbVar3 & 7);
        iVar9 = param_8;
        while( true ) {
          while ((uVar4 & 0x80) == 0) {
            local_8 = uVar4 & 0x7f;
            if (iVar9 < (int)local_8) goto LAB_006f6b90;
            iVar9 = iVar9 - local_8;
            bVar5 = *param_6;
            param_6 = param_6 + 1;
            uVar4 = (uint)bVar5;
          }
          local_8 = uVar4 & 0x3f;
          if (iVar9 < (int)local_8) break;
          if ((uVar4 & 0x40) == 0) {
            iVar9 = iVar9 - local_8;
            uVar4 = (uint)param_6[local_8];
            param_6 = param_6 + local_8 + 1;
          }
          else {
            iVar9 = iVar9 - local_8;
            uVar4 = (uint)param_6[1];
            param_6 = param_6 + 2;
          }
        }
LAB_006f6b90:
        local_8 = local_8 - iVar9;
        if (((byte)uVar4 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar9;
        }
        param_10 = param_9;
        puVar10 = param_1;
        param_13 = pbVar8;
        if ((int)local_8 <= param_9) {
          do {
            param_10 = param_10 - local_8;
            if ((uVar4 & 0x80) == 0) {
              puVar10 = puVar10 + local_8;
              param_3 = param_3 + local_8;
              uVar7 = ((uVar7 & 0xff) << 8) >> ((byte)local_8 & 7);
              param_1 = puVar10;
              if (uVar7 < 0x81) {
                uVar7 = uVar7 & 0xff;
                param_13 = param_13 + ((int)local_8 >> 3) + 1;
              }
              else {
                uVar7 = uVar7 >> 8 & 0xff;
                param_13 = param_13 + ((int)local_8 >> 3);
              }
            }
            else if ((uVar4 & 0x40) == 0) {
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if (((*param_13 & (byte)uVar7) == 0) && (param_5 <= *param_3)) {
                    *puVar10 = *(undefined1 *)((uint)*param_6 + param_14);
                  }
                  param_3 = param_3 + 1;
                  puVar10 = puVar10 + 1;
                  param_6 = param_6 + 1;
                  bVar5 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar7 = 0x80;
                    param_13 = param_13 + 1;
                  }
                  local_8 = local_8 - 1;
                  param_1 = puVar10;
                } while (local_8 != 0);
              }
            }
            else {
              uVar1 = *(undefined1 *)((uint)*param_6 + param_14);
              param_6 = param_6 + 1;
              puVar10 = param_1;
              if (-1 < (int)(local_8 - 1)) {
                do {
                  if (((*param_13 & (byte)uVar7) == 0) && (param_5 <= *param_3)) {
                    *param_1 = uVar1;
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  bVar5 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar7 = 0x80;
                    param_13 = param_13 + 1;
                  }
                  local_8 = local_8 - 1;
                  puVar10 = param_1;
                } while (local_8 != 0);
              }
            }
            if (param_10 < 1) {
              local_8 = 0;
              break;
            }
            bVar5 = *param_6;
            uVar4 = (uint)bVar5;
            param_6 = param_6 + 1;
            if ((bVar5 & 0x80) == 0) {
              local_8 = uVar4 & 0x7f;
            }
            else {
              local_8 = uVar4 & 0x3f;
            }
          } while ((int)local_8 <= param_10);
        }
        local_8 = local_8 - param_10;
        bVar5 = (byte)uVar4;
        if ((uVar4 & 0x80) == 0) {
          param_3 = param_3 + param_10;
          puVar10 = puVar10 + param_10;
        }
        else if ((uVar4 & 0x40) == 0) {
          if (-1 < param_10 + -1) {
            do {
              if (((*param_13 & (byte)uVar7) == 0) && (puVar10 = param_1, param_5 <= *param_3)) {
                *param_1 = *(undefined1 *)((uint)*param_6 + param_14);
              }
              param_3 = param_3 + 1;
              puVar10 = puVar10 + 1;
              param_6 = param_6 + 1;
              bVar6 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar7 = 0x80;
                param_13 = param_13 + 1;
              }
              param_10 = param_10 + -1;
              param_1 = puVar10;
            } while (param_10 != 0);
          }
        }
        else if (0 < param_10) {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_14);
          param_6 = param_6 + 1;
          puVar10 = param_1;
          if (-1 < param_10 + -1) {
            do {
              if (((*param_13 & (byte)uVar7) == 0) && (param_5 <= *param_3)) {
                *param_1 = uVar1;
              }
              param_3 = param_3 + 1;
              puVar10 = param_1 + 1;
              bVar6 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar6;
              if (bVar6 == 0) {
                uVar7 = 0x80;
                param_13 = param_13 + 1;
              }
              param_10 = param_10 + -1;
              param_1 = puVar10;
            } while (param_10 != 0);
          }
        }
        iVar9 = (param_7 - param_8) - param_9;
        if ((int)local_8 < iVar9) {
          do {
            iVar9 = iVar9 - local_8;
            if (((byte)uVar4 & 0xc0) == 0x80) {
              param_6 = param_6 + local_8;
            }
            bVar5 = *param_6;
            uVar4 = (uint)bVar5;
            local_8 = uVar4;
            pbVar2 = param_6 + 1;
            if (((bVar5 & 0x80) != 0) && (local_8 = uVar4 & 0x3f, (bVar5 & 0x40) != 0)) {
              pbVar2 = param_6 + 2;
            }
            param_6 = pbVar2;
          } while ((int)local_8 < iVar9);
        }
        if ((bVar5 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar9;
        }
        param_1 = puVar10 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar8 = pbVar8 + param_12;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

