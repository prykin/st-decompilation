
void FUN_006f88a0(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_8;

  if (-1 < param_9 + -1) {
    local_8 = param_9;
    do {
      uVar5 = (uint)*param_5;
      param_5 = param_5 + 1;
      iVar6 = param_7;
      if (uVar5 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      }
      else {
        while( true ) {
          while ((uVar5 & 0x80) == 0) {
            uVar3 = uVar5 & 0x7f;
            if (iVar6 < (int)uVar3) goto LAB_006f8909;
            bVar4 = *param_5;
            param_5 = param_5 + 1;
            iVar6 = iVar6 - uVar3;
            uVar5 = (uint)bVar4;
          }
          uVar3 = uVar5 & 0x3f;
          if (iVar6 < (int)uVar3) break;
          if ((uVar5 & 0x40) == 0) {
            uVar5 = (uint)param_5[uVar3];
            param_5 = param_5 + uVar3 + 1;
            iVar6 = iVar6 - uVar3;
          }
          else {
            uVar5 = (uint)param_5[1];
            param_5 = param_5 + 2;
            iVar6 = iVar6 - uVar3;
          }
        }
LAB_006f8909:
        uVar3 = uVar3 - iVar6;
        if (((byte)uVar5 & 0xc0) == 0x80) {
          param_5 = param_5 + iVar6;
        }
        param_9 = param_8;
        if ((int)uVar3 <= param_8) {
          do {
            param_9 = param_9 - uVar3;
            if ((uVar5 & 0x80) == 0) {
              param_1 = param_1 + uVar3;
              param_3 = param_3 + uVar3;
            }
            else if ((uVar5 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                param_5 = param_5 + uVar3;
                puVar7 = param_1;
                do {
                  bVar4 = *param_3;
                  param_1 = puVar7 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                  *puVar7 = *(undefined1 *)((uint)bVar4 + param_10);
                  puVar7 = param_1;
                } while (uVar3 != 0);
              }
            }
            else {
              param_5 = param_5 + 1;
              puVar7 = param_1;
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  bVar4 = *param_3;
                  param_1 = puVar7 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                  *puVar7 = *(undefined1 *)((uint)bVar4 + param_10);
                  puVar7 = param_1;
                } while (uVar3 != 0);
              }
            }
            if (param_9 < 1) {
              uVar3 = 0;
              break;
            }
            bVar4 = *param_5;
            uVar5 = (uint)bVar4;
            param_5 = param_5 + 1;
            if ((bVar4 & 0x80) == 0) {
              uVar3 = uVar5 & 0x7f;
            }
            else {
              uVar3 = uVar5 & 0x3f;
            }
          } while ((int)uVar3 <= param_9);
        }
        uVar3 = uVar3 - param_9;
        bVar4 = (byte)uVar5;
        if ((uVar5 & 0x80) == 0) {
          puVar7 = param_1 + param_9;
          param_3 = param_3 + param_9;
        }
        else {
          puVar7 = param_1;
          if ((uVar5 & 0x40) == 0) {
            if (-1 < param_9 + -1) {
              param_5 = param_5 + param_9;
              do {
                bVar1 = *param_3;
                puVar7 = param_1 + 1;
                param_3 = param_3 + 1;
                *param_1 = *(undefined1 *)((uint)bVar1 + param_10);
                param_9 = param_9 + -1;
                param_1 = puVar7;
              } while (param_9 != 0);
            }
          }
          else if ((0 < param_9) && (param_5 = param_5 + 1, -1 < param_9 + -1)) {
            do {
              bVar1 = *param_3;
              puVar7 = param_1 + 1;
              param_3 = param_3 + 1;
              *param_1 = *(undefined1 *)((uint)bVar1 + param_10);
              param_9 = param_9 + -1;
              param_1 = puVar7;
            } while (param_9 != 0);
          }
        }
        iVar6 = (param_6 - param_7) - param_8;
        if ((int)uVar3 < iVar6) {
          do {
            iVar6 = iVar6 - uVar3;
            if (((byte)uVar5 & 0xc0) == 0x80) {
              param_5 = param_5 + uVar3;
            }
            bVar4 = *param_5;
            uVar5 = (uint)bVar4;
            uVar3 = uVar5;
            pbVar2 = param_5 + 1;
            if (((bVar4 & 0x80) != 0) && (uVar3 = uVar5 & 0x3f, (bVar4 & 0x40) != 0)) {
              pbVar2 = param_5 + 2;
            }
            param_5 = pbVar2;
          } while ((int)uVar3 < iVar6);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          param_5 = param_5 + iVar6;
        }
        param_1 = puVar7 + (param_2 - param_8);
        param_3 = param_3 + (param_4 - param_8);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

