
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f6020(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 byte *param_12,int param_13,int param_14)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    pbVar8 = param_6;
    do {
      uVar5 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar7 = param_8;
      if (uVar5 == 0) {
        param_1 = param_1 + param_2;
        param_12 = param_12 + param_13;
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        while( true ) {
          while ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
            if (iVar7 < (int)uVar3) goto LAB_006f6090;
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 - uVar3;
            uVar5 = (uint)bVar4;
          }
          uVar3 = uVar5 & 0x3f;
          if (iVar7 < (int)uVar3) break;
          if ((uVar5 & 0x40) == 0) {
            uVar5 = (uint)pbVar8[uVar3];
            pbVar8 = pbVar8 + uVar3 + 1;
            iVar7 = iVar7 - uVar3;
          }
          else {
            uVar5 = (uint)pbVar8[1];
            pbVar8 = pbVar8 + 2;
            iVar7 = iVar7 - uVar3;
          }
        }
LAB_006f6090:
        uVar3 = uVar3 - iVar7;
        if (((byte)uVar5 & 0xc0) == 0x80) {
          pbVar8 = pbVar8 + iVar7;
        }
        param_10 = param_9;
        param_6 = pbVar8;
        if ((int)uVar3 <= param_9) {
          do {
            param_10 = param_10 - uVar3;
            if ((uVar5 & 0x80) == 0) {
              param_1 = param_1 + uVar3;
              param_12 = param_12 + uVar3;
              param_3 = param_3 + uVar3;
            }
            else if ((uVar5 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (*param_3 < param_5) {
                    bVar4 = *param_12;
                    iVar7 = param_14;
                  }
                  else {
                    bVar4 = *param_6;
                    iVar7 = param_11;
                  }
                  *param_1 = *(undefined1 *)((uint)bVar4 + iVar7);
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_12 = param_12 + 1;
                  param_6 = param_6 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            else {
              uVar1 = *(undefined1 *)((uint)*param_6 + param_11);
              param_6 = param_6 + 1;
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (*param_3 < param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_12 + param_14);
                  }
                  else {
                    *param_1 = uVar1;
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_12 = param_12 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            if (param_10 < 1) {
              uVar3 = 0;
              break;
            }
            bVar4 = *param_6;
            uVar5 = (uint)bVar4;
            param_6 = param_6 + 1;
            if ((bVar4 & 0x80) == 0) {
              uVar3 = uVar5 & 0x7f;
            }
            else {
              uVar3 = uVar5 & 0x3f;
            }
          } while ((int)uVar3 <= param_10);
        }
        uVar3 = uVar3 - param_10;
        bVar4 = (byte)uVar5;
        pbVar8 = param_6;
        if ((uVar5 & 0x80) == 0) {
          param_1 = param_1 + param_10;
          param_12 = param_12 + param_10;
          param_3 = param_3 + param_10;
        }
        else if ((uVar5 & 0x40) == 0) {
          param_6 = (byte *)param_10;
          if (-1 < param_10 + -1) {
            do {
              if (*param_3 < param_5) {
                bVar2 = *param_12;
                iVar7 = param_14;
              }
              else {
                bVar2 = *pbVar8;
                iVar7 = param_11;
              }
              *param_1 = *(undefined1 *)((uint)bVar2 + iVar7);
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_12 = param_12 + 1;
              pbVar8 = pbVar8 + 1;
              param_6 = param_6 + -1;
            } while (param_6 != (byte *)0x0);
          }
        }
        else if (0 < param_10) {
          uVar1 = *(undefined1 *)((uint)*param_6 + param_11);
          pbVar8 = param_6 + 1;
          if (-1 < param_10 + -1) {
            param_6 = (byte *)param_10;
            do {
              uVar6 = uVar1;
              if (*param_3 < param_5) {
                uVar6 = *(undefined1 *)((uint)*param_12 + param_14);
              }
              *param_1 = uVar6;
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_12 = param_12 + 1;
              param_6 = param_6 + -1;
            } while (param_6 != (byte *)0x0);
          }
        }
        iVar7 = (param_7 - param_8) - param_9;
        if ((int)uVar3 < iVar7) {
          do {
            iVar7 = iVar7 - uVar3;
            pbVar9 = pbVar8;
            if (((byte)uVar5 & 0xc0) == 0x80) {
              pbVar9 = pbVar8 + uVar3;
            }
            bVar4 = *pbVar9;
            uVar5 = (uint)bVar4;
            pbVar8 = pbVar9 + 1;
            uVar3 = uVar5;
            if (((bVar4 & 0x80) != 0) && (uVar3 = uVar5 & 0x3f, (bVar4 & 0x40) != 0)) {
              pbVar8 = pbVar9 + 2;
            }
          } while ((int)uVar3 < iVar7);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          pbVar8 = pbVar8 + iVar7;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_12 = param_12 + (param_13 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

