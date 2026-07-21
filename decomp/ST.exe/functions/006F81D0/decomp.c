
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f81d0(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,byte *param_16)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;

  pbVar3 = param_16 + param_10;
  _DAT_00857000 = 1;
  pbVar6 = (byte *)(param_14 + ((int)pbVar3 >> 3));
  if (-1 < param_12 + -1) {
    do {
      uVar8 = (uint)*param_8;
      param_8 = param_8 + 1;
      if (uVar8 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
        param_5 = (ushort *)((int)param_5 + param_6);
      }
      else {
        uVar7 = 0x80 >> ((byte)pbVar3 & 7);
        iVar9 = param_10;
        while( true ) {
          while ((uVar8 & 0x80) == 0) {
            uVar2 = uVar8 & 0x7f;
            if (iVar9 < (int)uVar2) goto LAB_006f827e;
            iVar9 = iVar9 - uVar2;
            bVar4 = *param_8;
            param_8 = param_8 + 1;
            uVar8 = (uint)bVar4;
          }
          uVar2 = uVar8 & 0x3f;
          if (iVar9 < (int)uVar2) break;
          if ((uVar8 & 0x40) == 0) {
            iVar9 = iVar9 - uVar2;
            uVar8 = (uint)param_8[uVar2];
            param_8 = param_8 + uVar2 + 1;
          }
          else {
            iVar9 = iVar9 - uVar2;
            uVar8 = (uint)param_8[1];
            param_8 = param_8 + 2;
          }
        }
LAB_006f827e:
        uVar2 = uVar2 - iVar9;
        if (((byte)uVar8 & 0xc0) == 0x80) {
          param_8 = param_8 + iVar9;
        }
        puVar10 = (undefined1 *)param_11;
        param_16 = pbVar6;
        if ((int)uVar2 <= param_11) {
          do {
            puVar10 = puVar10 + -uVar2;
            if ((uVar8 & 0x80) == 0) {
              param_1 = param_1 + uVar2;
              param_3 = param_3 + uVar2;
              param_5 = param_5 + uVar2;
              uVar7 = ((uVar7 & 0xff) << 8) >> ((byte)uVar2 & 7);
              if (uVar7 < 0x81) {
                param_16 = param_16 + 1;
              }
              else {
                uVar7 = uVar7 >> 8;
              }
              uVar7 = uVar7 & 0xff;
              param_16 = param_16 + ((int)uVar2 >> 3);
            }
            else if ((uVar8 & 0x40) == 0) {
              if (-1 < (int)(uVar2 - 1)) {
                param_8 = param_8 + uVar2;
                do {
                  if (((*param_16 & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  bVar4 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar4;
                  if (bVar4 == 0) {
                    uVar7 = 0x80;
                    param_16 = param_16 + 1;
                  }
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            else {
              param_8 = param_8 + 1;
              if (-1 < (int)(uVar2 - 1)) {
                do {
                  if (((*param_16 & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  bVar4 = (byte)uVar7 >> 1;
                  uVar7 = (uint)bVar4;
                  if (bVar4 == 0) {
                    uVar7 = 0x80;
                    param_16 = param_16 + 1;
                  }
                  uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
              }
            }
            if ((int)puVar10 < 1) {
              uVar2 = 0;
              break;
            }
            bVar4 = *param_8;
            uVar8 = (uint)bVar4;
            param_8 = param_8 + 1;
            if ((bVar4 & 0x80) == 0) {
              uVar2 = uVar8 & 0x7f;
            }
            else {
              uVar2 = uVar8 & 0x3f;
            }
          } while ((int)uVar2 <= (int)puVar10);
        }
        uVar2 = uVar2 - (int)puVar10;
        bVar4 = (byte)uVar8;
        if ((uVar8 & 0x80) == 0) {
          puVar11 = param_1 + (int)puVar10;
          param_3 = param_3 + (int)puVar10;
          param_5 = param_5 + (int)puVar10;
        }
        else {
          puVar11 = param_1;
          if ((uVar8 & 0x40) == 0) {
            if (-1 < (int)(puVar10 + -1)) {
              param_8 = param_8 + (int)puVar10;
              do {
                if (((*param_16 & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                  *param_1 = *(undefined1 *)((uint)*param_3 + param_13);
                }
                param_5 = param_5 + 1;
                puVar11 = param_1 + 1;
                param_3 = param_3 + 1;
                bVar5 = (byte)uVar7 >> 1;
                uVar7 = (uint)bVar5;
                if (bVar5 == 0) {
                  uVar7 = 0x80;
                  param_16 = param_16 + 1;
                }
                puVar10 = puVar10 + -1;
                param_1 = puVar11;
              } while (puVar10 != (undefined1 *)0x0);
            }
          }
          else if ((0 < (int)puVar10) &&
                  (param_8 = param_8 + 1, param_1 = puVar10, -1 < (int)(puVar10 + -1))) {
            do {
              if (((*param_16 & (byte)uVar7) == 0) && (param_7 <= *param_5)) {
                *puVar11 = *(undefined1 *)((uint)*param_3 + param_13);
              }
              param_5 = param_5 + 1;
              puVar11 = puVar11 + 1;
              param_3 = param_3 + 1;
              bVar5 = (byte)uVar7 >> 1;
              uVar7 = (uint)bVar5;
              if (bVar5 == 0) {
                uVar7 = 0x80;
                param_16 = param_16 + 1;
              }
              param_1 = param_1 + -1;
            } while (param_1 != (undefined1 *)0x0);
          }
        }
        iVar9 = (param_9 - param_10) - param_11;
        if ((int)uVar2 < iVar9) {
          do {
            iVar9 = iVar9 - uVar2;
            if (((byte)uVar8 & 0xc0) == 0x80) {
              param_8 = param_8 + uVar2;
            }
            bVar4 = *param_8;
            uVar8 = (uint)bVar4;
            uVar2 = uVar8;
            pbVar1 = param_8 + 1;
            if (((bVar4 & 0x80) != 0) && (uVar2 = uVar8 & 0x3f, (bVar4 & 0x40) != 0)) {
              pbVar1 = param_8 + 2;
            }
            param_8 = pbVar1;
          } while ((int)uVar2 < iVar9);
        }
        if ((bVar4 & 0xc0) == 0x80) {
          param_8 = param_8 + iVar9;
        }
        param_1 = puVar11 + (param_2 - param_11);
        param_3 = param_3 + (param_4 - param_11);
        param_5 = (ushort *)((int)param_5 + param_6 + param_11 * -2);
      }
      pbVar6 = pbVar6 + param_15;
      param_12 = param_12 + -1;
    } while (param_12 != 0);
  }
  return;
}

