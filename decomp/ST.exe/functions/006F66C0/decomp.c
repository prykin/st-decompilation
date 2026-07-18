
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f66c0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,byte *param_14,int param_15,int param_16)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int local_8;
  
  pbVar4 = param_13 + param_8;
  pbVar1 = (byte *)(param_11 + ((int)pbVar4 >> 3));
  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar9 = (uint)*param_6;
      param_6 = param_6 + 1;
      if (uVar9 == 0) {
        param_1 = param_1 + param_2;
        param_14 = param_14 + param_15;
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        uVar8 = 0x80 >> ((byte)pbVar4 & 7);
        iVar10 = param_8;
        while( true ) {
          while ((uVar9 & 0x80) == 0) {
            uVar2 = uVar9 & 0x7f;
            if (iVar10 < (int)uVar2) goto LAB_006f6770;
            iVar10 = iVar10 - uVar2;
            bVar6 = *param_6;
            param_6 = param_6 + 1;
            uVar9 = (uint)bVar6;
          }
          uVar2 = uVar9 & 0x3f;
          if (iVar10 < (int)uVar2) break;
          if ((uVar9 & 0x40) == 0) {
            iVar10 = iVar10 - uVar2;
            uVar9 = (uint)param_6[uVar2];
            param_6 = param_6 + uVar2 + 1;
          }
          else {
            iVar10 = iVar10 - uVar2;
            uVar9 = (uint)param_6[1];
            param_6 = param_6 + 2;
          }
        }
LAB_006f6770:
        pbVar3 = (byte *)(uVar2 - iVar10);
        if (((byte)uVar9 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar10;
        }
        param_10 = param_9;
        pbVar11 = param_1;
        param_13 = pbVar1;
        if ((int)pbVar3 <= param_9) {
          do {
            param_10 = param_10 - (int)pbVar3;
            if ((uVar9 & 0x80) == 0) {
              pbVar11 = pbVar11 + (int)pbVar3;
              param_14 = param_14 + (int)pbVar3;
              param_3 = param_3 + (int)pbVar3;
              uVar8 = ((uVar8 & 0xff) << 8) >> ((byte)pbVar3 & 7);
              if (uVar8 < 0x81) {
                uVar8 = uVar8 & 0xff;
                param_13 = param_13 + ((int)pbVar3 >> 3) + 1;
              }
              else {
                uVar8 = uVar8 >> 8 & 0xff;
                param_13 = param_13 + ((int)pbVar3 >> 3);
              }
            }
            else if ((uVar9 & 0x40) == 0) {
              if (-1 < (int)(pbVar3 + -1)) {
                do {
                  if ((*param_13 & (byte)uVar8) == 0) {
                    if (*param_3 < param_5) {
                      *pbVar11 = *(byte *)((uint)*param_14 + param_16);
                    }
                    else {
                      *pbVar11 = *param_6;
                    }
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  param_14 = param_14 + 1;
                  param_6 = param_6 + 1;
                  bVar6 = (byte)uVar8 >> 1;
                  uVar8 = (uint)bVar6;
                  if (bVar6 == 0) {
                    uVar8 = 0x80;
                    param_13 = param_13 + 1;
                  }
                  pbVar3 = pbVar3 + -1;
                } while (pbVar3 != (byte *)0x0);
              }
            }
            else {
              bVar6 = *param_6;
              param_6 = param_6 + 1;
              param_1 = pbVar3;
              if (-1 < (int)(pbVar3 + -1)) {
                do {
                  if ((*param_13 & (byte)uVar8) == 0) {
                    if (*param_3 < param_5) {
                      *pbVar11 = *(byte *)((uint)*param_14 + param_16);
                    }
                    else {
                      *pbVar11 = bVar6;
                    }
                  }
                  param_3 = param_3 + 1;
                  pbVar11 = pbVar11 + 1;
                  param_14 = param_14 + 1;
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
              pbVar3 = (byte *)0x0;
              break;
            }
            bVar6 = *param_6;
            uVar9 = (uint)bVar6;
            param_6 = param_6 + 1;
            if ((bVar6 & 0x80) == 0) {
              pbVar3 = (byte *)(uVar9 & 0x7f);
            }
            else {
              pbVar3 = (byte *)(uVar9 & 0x3f);
            }
          } while ((int)pbVar3 <= param_10);
        }
        uVar2 = (int)pbVar3 - param_10;
        bVar6 = (byte)uVar9;
        if ((uVar9 & 0x80) == 0) {
          pbVar3 = param_1 + param_10;
          param_14 = param_14 + param_10;
          param_3 = param_3 + param_10;
        }
        else {
          pbVar3 = param_1;
          if ((uVar9 & 0x40) == 0) {
            param_1 = (byte *)param_10;
            if (-1 < param_10 + -1) {
              do {
                if ((*param_13 & (byte)uVar8) == 0) {
                  if (*param_3 < param_5) {
                    bVar5 = *(byte *)((uint)*param_14 + param_16);
                  }
                  else {
                    bVar5 = *param_6;
                  }
                  *pbVar3 = bVar5;
                }
                param_3 = param_3 + 1;
                pbVar3 = pbVar3 + 1;
                param_14 = param_14 + 1;
                param_6 = param_6 + 1;
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
          else if (0 < param_10) {
            bVar5 = *param_6;
            param_6 = param_6 + 1;
            if (-1 < param_10 + -1) {
              do {
                if ((*param_13 & (byte)uVar8) == 0) {
                  if (*param_3 < param_5) {
                    *param_1 = *(byte *)((uint)*param_14 + param_16);
                  }
                  else {
                    *param_1 = bVar5;
                  }
                }
                param_3 = param_3 + 1;
                pbVar3 = param_1 + 1;
                param_14 = param_14 + 1;
                bVar7 = (byte)uVar8 >> 1;
                uVar8 = (uint)bVar7;
                if (bVar7 == 0) {
                  uVar8 = 0x80;
                  param_13 = param_13 + 1;
                }
                param_10 = param_10 + -1;
                param_1 = pbVar3;
              } while (param_10 != 0);
            }
          }
        }
        iVar10 = (param_7 - param_8) - param_9;
        if ((int)uVar2 < iVar10) {
          do {
            iVar10 = iVar10 - uVar2;
            if (((byte)uVar9 & 0xc0) == 0x80) {
              param_6 = param_6 + uVar2;
            }
            bVar6 = *param_6;
            uVar9 = (uint)bVar6;
            uVar2 = uVar9;
            pbVar11 = param_6 + 1;
            if (((bVar6 & 0x80) != 0) && (uVar2 = uVar9 & 0x3f, (bVar6 & 0x40) != 0)) {
              pbVar11 = param_6 + 2;
            }
            param_6 = pbVar11;
          } while ((int)uVar2 < iVar10);
        }
        if ((bVar6 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar10;
        }
        param_1 = pbVar3 + (param_2 - param_9);
        param_14 = param_14 + (param_15 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      pbVar1 = pbVar1 + param_12;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

