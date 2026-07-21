
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f7fc0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar3 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar4 = param_8;
      if (uVar3 == 0) {
        param_1 = param_1 + param_2;
        param_3 = (ushort *)((int)param_3 + param_4);
      }
      else {
        while( true ) {
          while ((uVar3 & 0x80) == 0) {
            uVar1 = uVar3 & 0x7f;
            if (iVar4 < (int)uVar1) goto LAB_006f802d;
            bVar2 = *param_6;
            param_6 = param_6 + 1;
            iVar4 = iVar4 - uVar1;
            uVar3 = (uint)bVar2;
          }
          uVar1 = uVar3 & 0x3f;
          if (iVar4 < (int)uVar1) break;
          if ((uVar3 & 0x40) == 0) {
            uVar3 = (uint)param_6[uVar1];
            param_6 = param_6 + uVar1 + 1;
            iVar4 = iVar4 - uVar1;
          }
          else {
            uVar3 = (uint)param_6[1];
            param_6 = param_6 + 2;
            iVar4 = iVar4 - uVar1;
          }
        }
LAB_006f802d:
        uVar1 = uVar1 - iVar4;
        if (((byte)uVar3 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar4;
        }
        param_10 = param_9;
        if ((int)uVar1 <= param_9) {
          do {
            param_10 = param_10 - uVar1;
            if ((uVar3 & 0x80) == 0) {
              param_1 = param_1 + uVar1;
              param_3 = param_3 + uVar1;
            }
            else if ((uVar3 & 0x40) == 0) {
              if (-1 < (int)(uVar1 - 1)) {
                do {
                  if (param_5 <= *param_3) {
                    *param_1 = *(undefined1 *)((uint)CONCAT11(*param_6,*param_1) + param_11);
                  }
                  param_3 = param_3 + 1;
                  param_1 = param_1 + 1;
                  param_6 = param_6 + 1;
                  uVar1 = uVar1 - 1;
                } while (uVar1 != 0);
              }
            }
            else {
              param_6 = param_6 + 1;
              param_1 = param_1 + uVar1;
              param_3 = param_3 + uVar1;
            }
            if (param_10 < 1) {
              uVar1 = 0;
              break;
            }
            bVar2 = *param_6;
            uVar3 = (uint)bVar2;
            param_6 = param_6 + 1;
            if ((bVar2 & 0x80) == 0) {
              uVar1 = uVar3 & 0x7f;
            }
            else {
              uVar1 = uVar3 & 0x3f;
            }
          } while ((int)uVar1 <= param_10);
        }
        uVar1 = uVar1 - param_10;
        bVar2 = (byte)uVar3;
        if ((uVar3 & 0x80) == 0) {
          param_1 = param_1 + param_10;
          param_3 = param_3 + param_10;
        }
        else if ((uVar3 & 0x40) == 0) {
          if (-1 < param_10 + -1) {
            do {
              if (param_5 <= *param_3) {
                *param_1 = *(undefined1 *)((uint)CONCAT11(*param_6,*param_1) + param_11);
              }
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              param_10 = param_10 + -1;
            } while (param_10 != 0);
          }
        }
        else if (0 < param_10) {
          param_6 = param_6 + 1;
          param_1 = param_1 + param_10;
          param_3 = param_3 + param_10;
        }
        iVar4 = (param_7 - param_8) - param_9;
        if ((int)uVar1 < iVar4) {
          do {
            iVar4 = iVar4 - uVar1;
            pbVar5 = param_6;
            if (((byte)uVar3 & 0xc0) == 0x80) {
              pbVar5 = param_6 + uVar1;
            }
            bVar2 = *pbVar5;
            uVar3 = (uint)bVar2;
            param_6 = pbVar5 + 1;
            uVar1 = uVar3;
            if (((bVar2 & 0x80) != 0) && (uVar1 = uVar3 & 0x3f, (bVar2 & 0x40) != 0)) {
              param_6 = pbVar5 + 2;
            }
          } while ((int)uVar1 < iVar4);
        }
        if ((bVar2 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar4;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

