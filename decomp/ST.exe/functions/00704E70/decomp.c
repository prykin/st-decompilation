
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00704e70(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  _DAT_00857000 = 1;
  pbVar9 = param_3;
  iVar7 = param_7;
  do {
    param_7 = iVar7 + -1;
    if (param_7 < 0) {
      return;
    }
    if (param_9 == 1) {
      param_7 = iVar7 + -2;
      if (param_7 < 0) {
        return;
      }
      uVar3 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
      iVar7 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar9 = pbVar9 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar9 = pbVar9 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar7 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar7 = iVar7 - uVar2;
        }
      }
      param_9 = 2;
    }
    param_3 = (byte *)(uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    iVar7 = param_5;
    if (param_3 != (byte *)0x0) {
      while( true ) {
        while (((uint)param_3 & 0x80) == 0) {
          uVar3 = (uint)param_3 & 0x7f;
          if (iVar7 < (int)uVar3) goto LAB_00704f33;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar7 = iVar7 - uVar3;
          param_3 = (byte *)(uint)bVar1;
        }
        uVar3 = (uint)param_3 & 0x3f;
        if (iVar7 < (int)uVar3) break;
        if (((uint)param_3 & 0x40) == 0) {
          param_3 = (byte *)(uint)pbVar9[uVar3];
          pbVar9 = pbVar9 + uVar3 + 1;
          iVar7 = iVar7 - uVar3;
        }
        else {
          param_3 = (byte *)(uint)pbVar9[1];
          pbVar9 = pbVar9 + 2;
          iVar7 = iVar7 - uVar3;
        }
      }
LAB_00704f33:
      uVar3 = uVar3 - iVar7;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar9 = pbVar9 + iVar7;
      }
      pbVar5 = param_1;
      iVar7 = param_6;
      iVar8 = param_8;
      if ((int)uVar3 <= param_6) {
        do {
          iVar7 = iVar7 - uVar3;
          if (((uint)param_3 & 0x80) == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar8 != 1) {
                  pbVar5 = pbVar5 + 1;
                }
                iVar8 = iVar8 + 1;
                if (2 < iVar8) {
                  iVar8 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else if (((uint)param_3 & 0x40) == 0) {
            if (0 < iVar8) {
              if (iVar8 == 1) {
                pbVar9 = pbVar9 + 1;
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_0070503b;
              iVar8 = 0;
              *pbVar5 = *pbVar9;
              pbVar5 = pbVar5 + 1;
              pbVar9 = pbVar9 + 1;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *pbVar5 = *pbVar9;
              pbVar6 = pbVar5 + 1;
              pbVar10 = pbVar9 + 1;
              for (iVar4 = uVar3 - 1; iVar8 = 1, pbVar5 = pbVar6, pbVar9 = pbVar10, 0 < iVar4;
                  iVar4 = iVar4 + -3) {
                pbVar9 = pbVar10 + 1;
                iVar8 = 2;
                if (iVar4 + -1 < 1) break;
                iVar8 = 0;
                *pbVar6 = *pbVar9;
                pbVar5 = pbVar6 + 1;
                pbVar9 = pbVar10 + 2;
                if (iVar4 + -2 < 1) break;
                *pbVar5 = *pbVar9;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 3;
              }
            }
          }
          else {
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                iVar8 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_0070503b;
              *pbVar5 = bVar1;
              pbVar5 = pbVar5 + 1;
              iVar8 = 0;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *pbVar5 = bVar1;
              pbVar6 = pbVar5 + 1;
              for (iVar4 = uVar3 - 1;
                  (iVar8 = 1, pbVar5 = pbVar6, 0 < iVar4 && (iVar8 = 2, 0 < iVar4 + -1));
                  iVar4 = iVar4 + -3) {
                *pbVar6 = bVar1;
                iVar8 = 0;
                pbVar5 = pbVar6 + 1;
                if (iVar4 + -2 < 1) break;
                pbVar6[1] = bVar1;
                pbVar6 = pbVar6 + 2;
              }
            }
          }
LAB_0070503b:
          if (iVar7 < 1) {
            uVar3 = 0;
            break;
          }
          bVar1 = *pbVar9;
          param_3 = (byte *)(uint)bVar1;
          pbVar9 = pbVar9 + 1;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = bVar1 & 0x7f;
          }
          else {
            uVar3 = bVar1 & 0x3f;
          }
        } while ((int)uVar3 <= iVar7);
      }
      pbVar6 = (byte *)(uVar3 - iVar7);
      if ((0 < iVar7) && (((uint)param_3 & 0x80) != 0)) {
        if (((uint)param_3 & 0x40) == 0) {
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar9 = pbVar9 + 1;
              iVar7 = iVar7 + -1;
            }
            if (iVar7 < 1) goto LAB_007050fd;
            *pbVar5 = *pbVar9;
            pbVar5 = pbVar5 + 1;
            pbVar9 = pbVar9 + 1;
            iVar7 = iVar7 + -1;
          }
          if (0 < iVar7) {
            *pbVar5 = *pbVar9;
            pbVar10 = pbVar9 + 1;
            for (iVar7 = iVar7 + -1; pbVar9 = pbVar10, 0 < iVar7; iVar7 = iVar7 + -3) {
              pbVar9 = pbVar10 + 1;
              if (iVar7 + -1 < 1) break;
              pbVar5[1] = *pbVar9;
              pbVar5 = pbVar5 + 2;
              pbVar9 = pbVar10 + 2;
              if (iVar7 + -2 < 1) break;
              *pbVar5 = *pbVar9;
              pbVar10 = pbVar10 + 3;
            }
          }
        }
        else {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              iVar7 = iVar7 + -1;
            }
            if (iVar7 < 1) goto LAB_007050fd;
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 1;
            iVar7 = iVar7 + -1;
          }
          if (0 < iVar7) {
            *pbVar5 = bVar1;
            for (iVar7 = iVar7 + -1; (0 < iVar7 && (0 < iVar7 + -1)); iVar7 = iVar7 + -3) {
              pbVar5[1] = bVar1;
              pbVar5 = pbVar5 + 2;
              if (iVar7 + -2 < 1) break;
              *pbVar5 = bVar1;
            }
          }
        }
      }
LAB_007050fd:
      iVar7 = (param_4 - param_5) - param_6;
      bVar1 = (byte)param_3;
      if ((int)pbVar6 < iVar7) {
        do {
          iVar7 = iVar7 - (int)pbVar6;
          pbVar5 = pbVar9;
          if (((byte)param_3 & 0xc0) == 0x80) {
            pbVar5 = pbVar9 + (int)pbVar6;
          }
          bVar1 = *pbVar5;
          param_3 = (byte *)(uint)bVar1;
          pbVar9 = pbVar5 + 1;
          pbVar6 = param_3;
          if (((bVar1 & 0x80) != 0) &&
             (pbVar6 = (byte *)((uint)param_3 & 0x3f), (bVar1 & 0x40) != 0)) {
            pbVar9 = pbVar5 + 2;
          }
        } while ((int)pbVar6 < iVar7);
      }
      param_3._0_1_ = bVar1;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar9 = pbVar9 + iVar7;
      }
    }
    param_1 = param_1 + param_2;
    param_9 = param_9 + 1;
    iVar7 = param_7;
    if (2 < param_9) {
      param_9 = 0;
    }
  } while( true );
}

