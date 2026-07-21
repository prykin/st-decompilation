
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5d80(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar5 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar7 = param_8;
      if (uVar5 == 0) {
        param_1 = param_1 + param_2;
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        while( true ) {
          while ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
            if (iVar7 < (int)uVar3) goto LAB_006f5df3;
            iVar7 = iVar7 - uVar3;
            bVar4 = *param_6;
            param_6 = param_6 + 1;
            uVar5 = (uint)bVar4;
          }
          uVar3 = uVar5 & 0x3f;
          if (iVar7 < (int)uVar3) break;
          if ((uVar5 & 0x40) == 0) {
            iVar7 = iVar7 - uVar3;
            uVar5 = (uint)param_6[uVar3];
            param_6 = param_6 + uVar3 + 1;
          }
          else {
            iVar7 = iVar7 - uVar3;
            uVar5 = (uint)param_6[1];
            param_6 = param_6 + 2;
          }
        }
LAB_006f5df3:
        uVar3 = uVar3 - iVar7;
        if (((byte)uVar5 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar7;
        }
        param_10 = param_9;
        if ((int)uVar3 <= param_9) {
          do {
            param_10 = param_10 - uVar3;
            if ((uVar5 & 0x80) == 0) {
              param_1 = param_1 + uVar3;
              param_3 = param_3 + uVar3;
            }
            else if ((uVar5 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (param_5 <= *param_3) {
                    *param_1 = *(undefined1 *)((uint)*param_6 + param_11);
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_6 = param_6 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            else {
              bVar4 = *param_6;
              param_6 = param_6 + 1;
              uVar1 = *(undefined1 *)((uint)bVar4 + param_11);
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (param_5 <= *param_3) {
                    *param_1 = uVar1;
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
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
        if ((uVar5 & 0x80) == 0) {
          param_1 = param_1 + param_10;
          param_3 = param_3 + param_10;
        }
        else if ((uVar5 & 0x40) == 0) {
          if (-1 < param_10 + -1) {
            do {
              if (param_5 <= *param_3) {
                *param_1 = *(undefined1 *)((uint)*param_6 + param_11);
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              param_10 = param_10 + -1;
            } while (param_10 != 0);
          }
        }
        else if (0 < param_10) {
          bVar2 = *param_6;
          param_6 = param_6 + 1;
          uVar1 = *(undefined1 *)((uint)bVar2 + param_11);
          if (-1 < param_10 + -1) {
            do {
              if (param_5 <= *param_3) {
                *param_1 = uVar1;
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_10 = param_10 + -1;
            } while (param_10 != 0);
          }
        }
        iVar7 = (param_7 - param_8) - param_9;
        if ((int)uVar3 < iVar7) {
          do {
            iVar7 = iVar7 - uVar3;
            pbVar6 = param_6;
            if (((byte)uVar5 & 0xc0) == 0x80) {
              pbVar6 = param_6 + uVar3;
            }
            bVar4 = *pbVar6;
            uVar5 = (uint)bVar4;
            param_6 = pbVar6 + 1;
            uVar3 = uVar5;
            if (((bVar4 & 0x80) != 0) && (uVar3 = uVar5 & 0x3f, (bVar4 & 0x40) != 0)) {
              param_6 = pbVar6 + 2;
            }
          } while ((int)uVar3 < iVar7);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar7;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

