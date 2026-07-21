
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f6330(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int local_8;

  pbVar3 = param_13 + param_8;
  pbVar9 = (byte *)(param_11 + ((int)pbVar3 >> 3));
  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar4 = (uint)*param_6;
      param_6 = param_6 + 1;
      if (uVar4 == 0) {
        param_1 = param_1 + param_2;
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar8 = 0x80 >> ((byte)pbVar3 & 7);
        iVar10 = param_8;
        while( true ) {
          while ((uVar4 & 0x80) == 0) {
            uVar1 = uVar4 & 0x7f;
            if (iVar10 < (int)uVar1) goto LAB_006f63e0;
            iVar10 = iVar10 - uVar1;
            bVar6 = *param_6;
            param_6 = param_6 + 1;
            uVar4 = (uint)bVar6;
          }
          uVar1 = uVar4 & 0x3f;
          if (iVar10 < (int)uVar1) break;
          if ((uVar4 & 0x40) == 0) {
            iVar10 = iVar10 - uVar1;
            uVar4 = (uint)param_6[uVar1];
            param_6 = param_6 + uVar1 + 1;
          }
          else {
            iVar10 = iVar10 - uVar1;
            uVar4 = (uint)param_6[1];
            param_6 = param_6 + 2;
          }
        }
LAB_006f63e0:
        pbVar2 = (byte *)(uVar1 - iVar10);
        if (((byte)uVar4 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar10;
        }
        param_10 = param_9;
        pbVar11 = param_1;
        param_13 = pbVar9;
        if ((int)pbVar2 <= param_9) {
          do {
            param_10 = param_10 - (int)pbVar2;
            if ((uVar4 & 0x80) == 0) {
              pbVar11 = pbVar11 + (int)pbVar2;
              param_3 = param_3 + (int)pbVar2;
              uVar8 = ((uVar8 & 0xff) << 8) >> ((byte)pbVar2 & 7);
              if (uVar8 < 0x81) {
                uVar8 = uVar8 & 0xff;
                param_13 = param_13 + ((int)pbVar2 >> 3) + 1;
              }
              else {
                uVar8 = uVar8 >> 8 & 0xff;
                param_13 = param_13 + ((int)pbVar2 >> 3);
              }
            }
            else if ((uVar4 & 0x40) == 0) {
              if (-1 < (int)(pbVar2 + -1)) {
                do {
                  if (((*param_13 & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                    *pbVar11 = *param_6;
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  param_6 = param_6 + 1;
                  bVar6 = (byte)uVar8 >> 1;
                  uVar8 = (uint)bVar6;
                  if (bVar6 == 0) {
                    uVar8 = 0x80;
                    param_13 = param_13 + 1;
                  }
                  pbVar2 = pbVar2 + -1;
                } while (pbVar2 != (byte *)0x0);
              }
            }
            else {
              bVar6 = *param_6;
              param_6 = param_6 + 1;
              param_1 = pbVar2;
              if (-1 < (int)(pbVar2 + -1)) {
                do {
                  if (((*param_13 & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                    *pbVar11 = bVar6;
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  bVar5 = (byte)uVar8 >> 1;
                  uVar8 = (uint)bVar5;
                  if (bVar5 == 0) {
                    uVar8 = 0x80;
                    param_13 = param_13 + 1;
                  }
                  param_1 = param_1 + -1;
                } while (param_1 != (byte *)0x0);
              }
            }
            param_1 = pbVar11;
            if (param_10 < 1) {
              pbVar2 = (byte *)0x0;
              break;
            }
            bVar6 = *param_6;
            uVar4 = (uint)bVar6;
            param_6 = param_6 + 1;
            if ((bVar6 & 0x80) == 0) {
              pbVar2 = (byte *)(uVar4 & 0x7f);
            }
            else {
              pbVar2 = (byte *)(uVar4 & 0x3f);
            }
          } while ((int)pbVar2 <= param_10);
        }
        uVar1 = (int)pbVar2 - param_10;
        bVar6 = (byte)uVar4;
        if ((uVar4 & 0x80) == 0) {
          param_1 = param_1 + param_10;
          param_3 = param_3 + param_10;
        }
        else if ((uVar4 & 0x40) == 0) {
          if (-1 < param_10 + -1) {
            do {
              if (((*param_13 & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                *param_1 = *param_6;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              bVar5 = (byte)uVar8 >> 1;
              uVar8 = (uint)bVar5;
              if (bVar5 == 0) {
                uVar8 = 0x80;
                param_13 = param_13 + 1;
              }
              param_10 = param_10 + -1;
            } while (param_10 != 0);
          }
        }
        else if (0 < param_10) {
          bVar5 = *param_6;
          param_6 = param_6 + 1;
          if (-1 < param_10 + -1) {
            do {
              if (((*param_13 & (byte)uVar8) == 0) && (param_5 <= *param_3)) {
                *param_1 = bVar5;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              bVar7 = (byte)uVar8 >> 1;
              uVar8 = (uint)bVar7;
              if (bVar7 == 0) {
                uVar8 = 0x80;
                param_13 = param_13 + 1;
              }
              param_10 = param_10 + -1;
            } while (param_10 != 0);
          }
        }
        iVar10 = (param_7 - param_8) - param_9;
        if ((int)uVar1 < iVar10) {
          do {
            iVar10 = iVar10 - uVar1;
            if (((byte)uVar4 & 0xc0) == 0x80) {
              param_6 = param_6 + uVar1;
            }
            bVar6 = *param_6;
            uVar4 = (uint)bVar6;
            uVar1 = uVar4;
            pbVar2 = param_6 + 1;
            if (((bVar6 & 0x80) != 0) && (uVar1 = uVar4 & 0x3f, (bVar6 & 0x40) != 0)) {
              pbVar2 = param_6 + 2;
            }
            param_6 = pbVar2;
          } while ((int)uVar1 < iVar10);
        }
        if ((bVar6 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar10;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar9 = pbVar9 + param_12;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

