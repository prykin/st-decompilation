
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f7d10(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  
  _DAT_00857000 = 1;
  if (-1 < param_12 + -1) {
    local_8 = param_12;
    do {
      uVar4 = (uint)*param_8;
      param_8 = param_8 + 1;
      iVar5 = param_10;
      if (uVar4 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
        param_5 = (ushort *)((int)param_5 + param_6);
      }
      else {
        while( true ) {
          while ((uVar4 & 0x80) == 0) {
            uVar2 = uVar4 & 0x7f;
            if (iVar5 < (int)uVar2) goto LAB_006f7d83;
            bVar3 = *param_8;
            param_8 = param_8 + 1;
            iVar5 = iVar5 - uVar2;
            uVar4 = (uint)bVar3;
          }
          uVar2 = uVar4 & 0x3f;
          if (iVar5 < (int)uVar2) break;
          if ((uVar4 & 0x40) == 0) {
            uVar4 = (uint)param_8[uVar2];
            param_8 = param_8 + uVar2 + 1;
            iVar5 = iVar5 - uVar2;
          }
          else {
            uVar4 = (uint)param_8[1];
            param_8 = param_8 + 2;
            iVar5 = iVar5 - uVar2;
          }
        }
LAB_006f7d83:
        uVar2 = uVar2 - iVar5;
        if (((byte)uVar4 & 0xc0) == 0x80) {
          param_8 = param_8 + iVar5;
        }
        param_12 = param_11;
        if ((int)uVar2 <= param_11) {
          do {
            param_12 = param_12 - uVar2;
            if ((uVar4 & 0x80) == 0) {
              param_1 = param_1 + uVar2;
              param_3 = param_3 + uVar2;
              param_5 = param_5 + uVar2;
            }
            else if ((uVar4 & 0x40) == 0) {
              if (-1 < (int)(uVar2 - 1)) {
                param_8 = param_8 + uVar2;
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            else {
              param_8 = param_8 + 1;
              if (-1 < (int)(uVar2 - 1)) {
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            if (param_12 < 1) {
              uVar2 = 0;
              break;
            }
            bVar3 = *param_8;
            uVar4 = (uint)bVar3;
            param_8 = param_8 + 1;
            if ((bVar3 & 0x80) == 0) {
              uVar2 = uVar4 & 0x7f;
            }
            else {
              uVar2 = uVar4 & 0x3f;
            }
          } while ((int)uVar2 <= param_12);
        }
        uVar2 = uVar2 - param_12;
        bVar3 = (byte)uVar4;
        if ((uVar4 & 0x80) == 0) {
          param_1 = param_1 + param_12;
          param_3 = param_3 + param_12;
          param_5 = param_5 + param_12;
        }
        else if ((uVar4 & 0x40) == 0) {
          if (-1 < param_12 + -1) {
            param_8 = param_8 + param_12;
            do {
              if (param_7 <= *param_5) {
                *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
              }
              param_5 = param_5 + 1;
              param_1 = param_1 + 1;
              param_3 = param_3 + 1;
              param_12 = param_12 + -1;
            } while (param_12 != 0);
          }
        }
        else if ((0 < param_12) && (param_8 = param_8 + 1, -1 < param_12 + -1)) {
          do {
            if (param_7 <= *param_5) {
              *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
            }
            param_5 = param_5 + 1;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            param_12 = param_12 + -1;
          } while (param_12 != 0);
        }
        iVar5 = (param_9 - param_10) - param_11;
        if ((int)uVar2 < iVar5) {
          do {
            iVar5 = iVar5 - uVar2;
            if (((byte)uVar4 & 0xc0) == 0x80) {
              param_8 = param_8 + uVar2;
            }
            bVar3 = *param_8;
            uVar4 = (uint)bVar3;
            uVar2 = uVar4;
            pbVar1 = param_8 + 1;
            if (((bVar3 & 0x80) != 0) && (uVar2 = uVar4 & 0x3f, (bVar3 & 0x40) != 0)) {
              pbVar1 = param_8 + 2;
            }
            param_8 = pbVar1;
          } while ((int)uVar2 < iVar5);
        }
        if ((bVar3 & 0xc0) == 0x80) {
          param_8 = param_8 + iVar5;
        }
        param_1 = param_1 + (param_2 - param_11);
        param_3 = param_3 + (param_4 - param_11);
        param_5 = (ushort *)((int)param_5 + param_6 + param_11 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

