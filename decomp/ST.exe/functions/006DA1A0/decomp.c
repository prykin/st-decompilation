
/* WARNING: Type propagation algorithm not settling */

void FUN_006da1a0(int param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6,
                 int param_7,int param_8,byte *param_9,undefined1 *param_10)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_8c [31];
  int *local_10;
  int local_c;
  int local_8;
  
  if ((2 < param_8) && (2 < (int)param_9)) {
    local_8 = (int)param_10 * 2 + 1;
    if (param_8 <= local_8) {
      local_8 = 3;
    }
    if ((int)param_9 <= local_8) {
      local_8 = 3;
    }
    iVar11 = local_8;
    local_c = 0x1f;
    local_10 = local_8c;
    iVar12 = (local_8 + -1) / 2;
    iVar10 = (local_8 + -1) / 2;
    do {
      uVar3 = FUN_0072e6c0();
      iVar7 = (int)uVar3 % local_8;
      uVar3 = FUN_0072e6c0();
      piVar2 = local_10;
      local_10 = local_10 + 1;
      *piVar2 = ((int)uVar3 % iVar11 - iVar10) * param_2 + (iVar7 - iVar12);
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar7 = param_7 + iVar10;
    iVar8 = param_8 + (1 - local_8);
    pbVar4 = param_9 + (1 - iVar11);
    pbVar9 = (byte *)(iVar10 * param_2 + iVar12 + param_1);
    param_10 = (undefined1 *)(iVar10 * param_4 + iVar12 + param_3);
    param_7 = 0;
    if (iVar7 < 1) {
      param_9 = param_5 + (param_5[0xd] >> 1 & 0xe) + 0x16;
    }
    else {
      param_9 = FUN_006cfe10(param_5,iVar7);
    }
    sVar1 = *(short *)(param_5 + 0x12);
    local_c = (int)sVar1;
    param_1 = (int)pbVar4;
    if (0 < (int)pbVar4) {
      do {
        uVar3 = (uint)*param_9;
        param_9 = param_9 + 1;
        iVar11 = param_6 + iVar12;
        if (uVar3 == 0) {
          pbVar9 = pbVar9 + param_2;
          param_10 = param_10 + param_4;
        }
        else {
          while( true ) {
            while ((uVar3 & 0x80) == 0) {
              uVar5 = uVar3 & 0x7f;
              if (iVar11 < (int)uVar5) goto LAB_006da325;
              bVar6 = *param_9;
              param_9 = param_9 + 1;
              iVar11 = iVar11 - uVar5;
              uVar3 = (uint)bVar6;
            }
            uVar5 = uVar3 & 0x3f;
            if (iVar11 < (int)uVar5) break;
            if ((uVar3 & 0x40) == 0) {
              uVar3 = (uint)param_9[uVar5];
              param_9 = param_9 + uVar5 + 1;
              iVar11 = iVar11 - uVar5;
            }
            else {
              uVar3 = (uint)param_9[1];
              param_9 = param_9 + 2;
              iVar11 = iVar11 - uVar5;
            }
          }
LAB_006da325:
          param_5 = (byte *)(uVar5 - iVar11);
          if (((byte)uVar3 & 0xc0) == 0x80) {
            param_9 = param_9 + iVar11;
          }
          iVar11 = iVar8;
          if ((int)param_5 <= iVar8) {
            do {
              iVar11 = iVar11 - (int)param_5;
              if ((uVar3 & 0x80) == 0) {
                pbVar9 = pbVar9 + (int)param_5;
                param_10 = param_10 + (int)param_5;
              }
              else {
                if ((uVar3 & 0x40) == 0) {
                  param_9 = param_9 + (int)param_5;
                }
                else {
                  param_9 = param_9 + 1;
                }
                if (0 < (int)param_5) {
                  do {
                    pbVar9[local_8c[param_7]] = *param_10;
                    param_7 = param_7 + 1;
                    pbVar9 = pbVar9 + 1;
                    param_10 = param_10 + 1;
                    if (0x1e < param_7) {
                      param_7 = 0;
                    }
                    param_5 = param_5 + -1;
                  } while (param_5 != (byte *)0x0);
                }
              }
              if (iVar11 < 1) {
                param_5 = (byte *)0x0;
                break;
              }
              bVar6 = *param_9;
              uVar3 = (uint)bVar6;
              param_9 = param_9 + 1;
              if ((bVar6 & 0x80) == 0) {
                param_5 = (byte *)(uVar3 & 0x7f);
              }
              else {
                param_5 = (byte *)(uVar3 & 0x3f);
              }
            } while ((int)param_5 <= iVar11);
          }
          uVar5 = (int)param_5 - iVar11;
          bVar6 = (byte)uVar3;
          if ((uVar3 & 0x80) == 0) {
            pbVar9 = pbVar9 + iVar11;
            param_10 = param_10 + iVar11;
          }
          else {
            if ((uVar3 & 0x40) == 0) {
              param_9 = param_9 + iVar11;
            }
            else if (0 < iVar11) {
              param_9 = param_9 + 1;
            }
            if (0 < iVar11) {
              do {
                pbVar9[local_8c[param_7]] = *param_10;
                param_7 = param_7 + 1;
                pbVar9 = pbVar9 + 1;
                param_10 = param_10 + 1;
                if (0x1e < param_7) {
                  param_7 = 0;
                }
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
          }
          iVar11 = ((int)sVar1 - (param_6 + iVar12)) - iVar8;
          if ((int)uVar5 < iVar11) {
            do {
              iVar11 = iVar11 - uVar5;
              pbVar4 = param_9;
              if (((byte)uVar3 & 0xc0) == 0x80) {
                pbVar4 = param_9 + uVar5;
              }
              bVar6 = *pbVar4;
              uVar3 = (uint)bVar6;
              param_9 = pbVar4 + 1;
              uVar5 = uVar3;
              if (((bVar6 & 0x80) != 0) && (uVar5 = uVar3 & 0x3f, (bVar6 & 0x40) != 0)) {
                param_9 = pbVar4 + 2;
              }
            } while ((int)uVar5 < iVar11);
          }
          if ((bVar6 & 0xc0) == 0x80) {
            param_9 = param_9 + iVar11;
          }
          pbVar9 = pbVar9 + (param_2 - iVar8);
          param_10 = param_10 + (param_4 - iVar8);
        }
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}

