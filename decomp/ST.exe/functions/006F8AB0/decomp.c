
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f8ab0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  byte *pbVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  ushort *puVar9;
  byte *pbVar10;
  uint local_c;
  uint local_8;
  
  _DAT_00857000 = 1;
  pbVar7 = param_6;
  iVar6 = param_10;
  do {
    param_10 = iVar6 + -1;
    if (param_10 < 0) {
      return;
    }
    if (param_12 == 1) {
      param_10 = iVar6 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar5 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar6 = param_7;
      if (uVar5 != 0) {
        while( true ) {
          if ((uVar5 & 0x80) == 0) {
            uVar4 = uVar5 & 0x7f;
          }
          else if ((uVar5 & 0x40) == 0) {
            pbVar7 = pbVar7 + (uVar5 & 0x3f);
            uVar4 = uVar5 & 0x3f;
          }
          else {
            pbVar7 = pbVar7 + 1;
            uVar4 = uVar5 & 0x3f;
          }
          if ((int)(iVar6 - uVar4) < 1) break;
          uVar5 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar6 = iVar6 - uVar4;
        }
      }
      param_12 = 2;
    }
    local_8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (local_8 != 0) {
      param_6 = (byte *)param_8;
      while( true ) {
        while ((local_8 & 0x80) == 0) {
          uVar5 = local_8 & 0x7f;
          if ((int)param_6 < (int)uVar5) goto LAB_006f8b92;
          param_6 = param_6 + -uVar5;
          bVar8 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          local_8 = (uint)bVar8;
        }
        uVar5 = local_8 & 0x3f;
        if ((int)param_6 < (int)uVar5) break;
        if ((local_8 & 0x40) == 0) {
          param_6 = param_6 + -uVar5;
          local_8 = (uint)pbVar7[uVar5];
          pbVar7 = pbVar7 + uVar5 + 1;
        }
        else {
          param_6 = param_6 + -uVar5;
          local_8 = (uint)pbVar7[1];
          pbVar7 = pbVar7 + 2;
        }
      }
LAB_006f8b92:
      uVar5 = uVar5 - (int)param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar7 = pbVar7 + (int)param_6;
      }
      param_6 = (byte *)param_9;
      iVar6 = param_11;
      puVar9 = param_3;
      pbVar10 = param_1;
      if ((int)uVar5 <= param_9) {
        do {
          local_c = local_8 & 0x80;
          param_6 = param_6 + -uVar5;
          if (local_c == 0) {
            if (-1 < (int)(uVar5 - 1)) {
              do {
                if (iVar6 != 1) {
                  pbVar10 = pbVar10 + 1;
                  puVar9 = puVar9 + 1;
                }
                iVar6 = iVar6 + 1;
                if (2 < iVar6) {
                  iVar6 = 0;
                }
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
          }
          else if ((local_8 & 0x40) == 0) {
            pbVar1 = pbVar7;
            puVar2 = puVar9;
            pbVar3 = pbVar10;
            if (0 < iVar6) {
              if (iVar6 == 1) {
                pbVar7 = pbVar7 + 1;
                iVar6 = 2;
                uVar5 = uVar5 - 1;
              }
              if ((int)uVar5 < 1) goto LAB_006f8cfb;
              if (param_5 <= *puVar9) {
                *pbVar10 = *pbVar7;
              }
              iVar6 = 0;
              uVar5 = uVar5 - 1;
              pbVar1 = pbVar7 + 1;
              puVar2 = puVar9 + 1;
              pbVar3 = pbVar10 + 1;
            }
            for (; pbVar7 = pbVar1, puVar9 = puVar2, pbVar10 = pbVar3, 0 < (int)uVar5;
                uVar5 = uVar5 - 3) {
              if (param_5 <= *puVar2) {
                *pbVar3 = *pbVar1;
              }
              puVar9 = puVar2 + 1;
              pbVar10 = pbVar3 + 1;
              pbVar7 = pbVar1 + 1;
              iVar6 = 1;
              if ((int)(uVar5 - 1) < 1) break;
              pbVar7 = pbVar1 + 2;
              iVar6 = 2;
              if ((int)(uVar5 - 2) < 1) break;
              if (param_5 <= *puVar9) {
                *pbVar10 = *pbVar7;
              }
              iVar6 = 0;
              pbVar1 = pbVar1 + 3;
              puVar2 = puVar2 + 2;
              pbVar3 = pbVar3 + 2;
            }
          }
          else {
            bVar8 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            puVar2 = puVar9;
            pbVar1 = pbVar10;
            if (0 < iVar6) {
              if (iVar6 == 1) {
                iVar6 = 2;
                uVar5 = uVar5 - 1;
              }
              if ((int)uVar5 < 1) goto LAB_006f8cfb;
              if (param_5 <= *puVar9) {
                *pbVar10 = bVar8;
              }
              iVar6 = 0;
              uVar5 = uVar5 - 1;
              puVar2 = puVar9 + 1;
              pbVar1 = pbVar10 + 1;
            }
            for (; puVar9 = puVar2, pbVar10 = pbVar1, 0 < (int)uVar5; uVar5 = uVar5 - 3) {
              if (param_5 <= *puVar2) {
                *pbVar1 = bVar8;
              }
              puVar9 = puVar2 + 1;
              pbVar10 = pbVar1 + 1;
              iVar6 = 1;
              if (((int)(uVar5 - 1) < 1) || (iVar6 = 2, (int)(uVar5 - 2) < 1)) break;
              if (param_5 <= *puVar9) {
                *pbVar10 = bVar8;
              }
              iVar6 = 0;
              puVar2 = puVar2 + 2;
              pbVar1 = pbVar1 + 2;
            }
          }
LAB_006f8cfb:
          if ((int)param_6 < 1) {
            uVar5 = 0;
            break;
          }
          bVar8 = *pbVar7;
          local_8 = (uint)bVar8;
          pbVar7 = pbVar7 + 1;
          if ((bVar8 & 0x80) == 0) {
            uVar5 = bVar8 & 0x7f;
          }
          else {
            uVar5 = bVar8 & 0x3f;
          }
        } while ((int)uVar5 <= (int)param_6);
      }
      uVar5 = uVar5 - (int)param_6;
      if ((0 < (int)param_6) && ((local_8 & 0x80) != 0)) {
        if ((local_8 & 0x40) == 0) {
          pbVar1 = pbVar7;
          if (0 < iVar6) {
            if (iVar6 == 1) {
              pbVar7 = pbVar7 + 1;
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_006f8e6b;
            if (param_5 <= *puVar9) {
              *pbVar10 = *pbVar7;
            }
            puVar9 = puVar9 + 1;
            pbVar10 = pbVar10 + 1;
            param_6 = param_6 + -1;
            pbVar1 = pbVar7 + 1;
          }
          for (; pbVar7 = pbVar1, 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar9) {
              *pbVar10 = *pbVar1;
            }
            pbVar7 = pbVar1 + 1;
            if (((int)(param_6 + -1) < 1) || (pbVar7 = pbVar1 + 2, (int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar9[1]) {
              pbVar10[1] = *pbVar7;
            }
            puVar9 = puVar9 + 2;
            pbVar10 = pbVar10 + 2;
            pbVar1 = pbVar1 + 3;
          }
        }
        else {
          bVar8 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          if (0 < iVar6) {
            if (iVar6 == 1) {
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_006f8e6b;
            if (param_5 <= *puVar9) {
              *pbVar10 = bVar8;
            }
            puVar9 = puVar9 + 1;
            pbVar10 = pbVar10 + 1;
            param_6 = param_6 + -1;
          }
          for (; 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar9) {
              *pbVar10 = bVar8;
            }
            if (((int)(param_6 + -1) < 1) || ((int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar9[1]) {
              pbVar10[1] = bVar8;
            }
            puVar9 = puVar9 + 2;
            pbVar10 = pbVar10 + 2;
          }
        }
      }
LAB_006f8e6b:
      bVar8 = (byte)local_8;
      iVar6 = (param_7 - param_8) - param_9;
      if ((int)uVar5 < iVar6) {
        do {
          iVar6 = iVar6 - uVar5;
          pbVar10 = pbVar7;
          if (((byte)local_8 & 0xc0) == 0x80) {
            pbVar10 = pbVar7 + uVar5;
          }
          bVar8 = *pbVar10;
          local_8 = (uint)bVar8;
          pbVar7 = pbVar10 + 1;
          uVar5 = local_8;
          if (((bVar8 & 0x80) != 0) && (uVar5 = local_8 & 0x3f, (bVar8 & 0x40) != 0)) {
            pbVar7 = pbVar10 + 2;
          }
        } while ((int)uVar5 < iVar6);
      }
      if ((bVar8 & 0xc0) == 0x80) {
        pbVar7 = pbVar7 + iVar6;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    iVar6 = param_10;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

