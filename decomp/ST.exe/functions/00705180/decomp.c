
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00705180(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;

  _DAT_00857000 = 1;
  pbVar8 = param_3;
  do {
    param_7 = param_7 + -1;
    if (param_7 < 0) {
      return;
    }
    while (((param_9 & 1) == 0 && (param_7 = param_7 + -1, -1 < param_7))) {
      uVar3 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar6 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar8 = pbVar8 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar8 = pbVar8 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar6 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar6 = iVar6 - uVar2;
        }
      }
      param_9 = param_9 + 1;
      if (4 < (int)param_9) {
        param_9 = 0;
      }
    }
    param_3 = (byte *)(uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar6 = param_5;
    if (param_3 != (byte *)0x0) {
      while( true ) {
        while (((uint)param_3 & 0x80) == 0) {
          uVar3 = (uint)param_3 & 0x7f;
          if (iVar6 < (int)uVar3) goto LAB_00705252;
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar6 = iVar6 - uVar3;
          param_3 = (byte *)(uint)bVar1;
        }
        uVar3 = (uint)param_3 & 0x3f;
        if (iVar6 < (int)uVar3) break;
        if (((uint)param_3 & 0x40) == 0) {
          param_3 = (byte *)(uint)pbVar8[uVar3];
          pbVar8 = pbVar8 + uVar3 + 1;
          iVar6 = iVar6 - uVar3;
        }
        else {
          param_3 = (byte *)(uint)pbVar8[1];
          pbVar8 = pbVar8 + 2;
          iVar6 = iVar6 - uVar3;
        }
      }
LAB_00705252:
      uVar3 = uVar3 - iVar6;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar8 = pbVar8 + iVar6;
      }
      iVar6 = param_8;
      iVar7 = param_6;
      pbVar10 = param_1;
      if ((int)uVar3 <= param_6) {
        do {
          iVar7 = iVar7 - uVar3;
          if (((uint)param_3 & 0x80) == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (((byte)iVar6 & 1) == 1) {
                  pbVar10 = pbVar10 + 1;
                }
                iVar6 = iVar6 + 1;
                if (4 < iVar6) {
                  iVar6 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            goto LAB_007053f5;
          }
          if (((uint)param_3 & 0x40) == 0) {
            if (iVar6 < 1) {
switchD_00705349_default:
              if (0 < (int)uVar3) {
                pbVar5 = pbVar8 + 1;
                pbVar9 = pbVar10;
                for (iVar4 = uVar3 - 1; iVar6 = 1, pbVar8 = pbVar5, pbVar10 = pbVar9, 0 < iVar4;
                    iVar4 = iVar4 + -5) {
                  *pbVar9 = *pbVar5;
                  pbVar10 = pbVar9 + 1;
                  pbVar8 = pbVar5 + 1;
                  iVar6 = 2;
                  if (iVar4 + -1 < 1) break;
                  pbVar8 = pbVar5 + 2;
                  iVar6 = 3;
                  if (iVar4 + -2 < 1) break;
                  iVar6 = 4;
                  *pbVar10 = *pbVar8;
                  pbVar10 = pbVar9 + 2;
                  pbVar8 = pbVar5 + 3;
                  if (iVar4 + -3 < 1) break;
                  pbVar8 = pbVar5 + 4;
                  iVar6 = 0;
                  if (iVar4 + -4 < 1) break;
                  pbVar5 = pbVar5 + 5;
                  pbVar9 = pbVar10;
                }
              }
            }
            else {
              switch(iVar6) {
              case 1:
                *pbVar10 = *pbVar8;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar8 + 1;
                uVar3 = uVar3 - 1;
                iVar6 = 2;
                if ((int)uVar3 < 1) goto LAB_007053f5;
                break;
              case 2:
                break;
              case 3:
                goto switchD_00705349_caseD_3;
              case 4:
                goto switchD_00705349_caseD_4;
              default:
                goto switchD_00705349_default;
              }
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 3;
              if (0 < (int)uVar3) {
switchD_00705349_caseD_3:
                iVar6 = 4;
                *pbVar10 = *pbVar8;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar8 + 1;
                uVar3 = uVar3 - 1;
                if (0 < (int)uVar3) {
switchD_00705349_caseD_4:
                  pbVar8 = pbVar8 + 1;
                  iVar6 = 0;
                  uVar3 = uVar3 - 1;
                  goto switchD_00705349_default;
                }
              }
            }
          }
          else {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            if (iVar6 < 1) {
switchD_007052a0_default:
              if (0 < (int)uVar3) {
                iVar4 = uVar3 - 1;
                iVar6 = 1;
                pbVar5 = pbVar10;
                if (0 < iVar4) {
                  while( true ) {
                    *pbVar5 = bVar1;
                    pbVar10 = pbVar5 + 1;
                    iVar6 = 2;
                    if ((iVar4 + -1 < 1) || (iVar6 = 3, iVar4 + -2 < 1)) break;
                    *pbVar10 = bVar1;
                    pbVar10 = pbVar5 + 2;
                    iVar6 = 4;
                    if ((iVar4 + -3 < 1) || (iVar6 = 0, iVar4 + -4 < 1)) break;
                    iVar4 = iVar4 + -5;
                    iVar6 = 1;
                    pbVar5 = pbVar10;
                    if (iVar4 < 1) break;
                  }
                }
              }
            }
            else {
              switch(iVar6) {
              case 1:
                *pbVar10 = bVar1;
                pbVar10 = pbVar10 + 1;
                uVar3 = uVar3 - 1;
                iVar6 = 2;
                if ((int)uVar3 < 1) goto LAB_007053f5;
                break;
              case 2:
                break;
              case 3:
                goto switchD_007052a0_caseD_3;
              case 4:
                goto switchD_007052a0_caseD_4;
              default:
                goto switchD_007052a0_default;
              }
              uVar3 = uVar3 - 1;
              iVar6 = 3;
              if (0 < (int)uVar3) {
switchD_007052a0_caseD_3:
                *pbVar10 = bVar1;
                pbVar10 = pbVar10 + 1;
                uVar3 = uVar3 - 1;
                iVar6 = 4;
                if (0 < (int)uVar3) {
switchD_007052a0_caseD_4:
                  iVar6 = 0;
                  uVar3 = uVar3 - 1;
                  goto switchD_007052a0_default;
                }
              }
            }
          }
LAB_007053f5:
          if (iVar7 < 1) {
            uVar3 = 0;
            break;
          }
          bVar1 = *pbVar8;
          param_3 = (byte *)(uint)bVar1;
          pbVar8 = pbVar8 + 1;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = bVar1 & 0x7f;
          }
          else {
            uVar3 = bVar1 & 0x3f;
          }
        } while ((int)uVar3 <= iVar7);
      }
      pbVar5 = (byte *)(uVar3 - iVar7);
      if ((iVar7 < 1) || (((uint)param_3 & 0x80) == 0)) goto LAB_007054fd;
      if (((uint)param_3 & 0x40) == 0) {
        if (iVar6 < 1) {
switchD_007054a6_default:
          if (0 < iVar7) {
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 + -1;
            pbVar9 = pbVar8;
            if (0 < iVar7) {
              while( true ) {
                *pbVar10 = *pbVar9;
                pbVar8 = pbVar9 + 1;
                if ((iVar7 + -1 < 1) || (pbVar8 = pbVar9 + 2, iVar7 + -2 < 1)) break;
                pbVar10[1] = *pbVar8;
                pbVar10 = pbVar10 + 2;
                pbVar8 = pbVar9 + 3;
                if ((iVar7 + -3 < 1) || (pbVar8 = pbVar9 + 4, iVar7 + -4 < 1)) break;
                pbVar8 = pbVar9 + 5;
                iVar7 = iVar7 + -5;
                pbVar9 = pbVar8;
                if (iVar7 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            *pbVar10 = *pbVar8;
            pbVar10 = pbVar10 + 1;
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 + -1;
            if (iVar7 < 1) goto LAB_007054fd;
            break;
          case 2:
            break;
          case 3:
            goto switchD_007054a6_caseD_3;
          case 4:
            goto switchD_007054a6_caseD_4;
          default:
            goto switchD_007054a6_default;
          }
          pbVar8 = pbVar8 + 1;
          iVar7 = iVar7 + -1;
          if (0 < iVar7) {
switchD_007054a6_caseD_3:
            *pbVar10 = *pbVar8;
            pbVar10 = pbVar10 + 1;
            pbVar8 = pbVar8 + 1;
            iVar7 = iVar7 + -1;
            if (0 < iVar7) {
switchD_007054a6_caseD_4:
              pbVar8 = pbVar8 + 1;
              iVar7 = iVar7 + -1;
              goto switchD_007054a6_default;
            }
          }
        }
      }
      else {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (iVar6 < 1) {
switchD_0070544b_default:
          if ((0 < iVar7) && (iVar7 = iVar7 + -1, 0 < iVar7)) {
            while( true ) {
              *pbVar10 = bVar1;
              if (iVar7 + -2 < 1) break;
              pbVar10[1] = bVar1;
              pbVar10 = pbVar10 + 2;
              if ((iVar7 + -4 < 1) || (iVar7 = iVar7 + -5, iVar7 < 1)) break;
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
            iVar7 = iVar7 + -1;
            if (iVar7 < 1) goto LAB_007054fd;
            break;
          case 2:
            break;
          case 3:
            goto switchD_0070544b_caseD_3;
          case 4:
            goto switchD_0070544b_caseD_4;
          default:
            goto switchD_0070544b_default;
          }
          iVar7 = iVar7 + -1;
          if (0 < iVar7) {
switchD_0070544b_caseD_3:
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
            iVar7 = iVar7 + -1;
            if (0 < iVar7) {
switchD_0070544b_caseD_4:
              iVar7 = iVar7 + -1;
              goto switchD_0070544b_default;
            }
          }
        }
      }
LAB_007054fd:
      iVar6 = (param_4 - param_5) - param_6;
      bVar1 = (byte)param_3;
      if ((int)pbVar5 < iVar6) {
        do {
          iVar6 = iVar6 - (int)pbVar5;
          pbVar10 = pbVar8;
          if (((byte)param_3 & 0xc0) == 0x80) {
            pbVar10 = pbVar8 + (int)pbVar5;
          }
          bVar1 = *pbVar10;
          param_3 = (byte *)(uint)bVar1;
          pbVar8 = pbVar10 + 1;
          pbVar5 = param_3;
          if (((bVar1 & 0x80) != 0) &&
             (pbVar5 = (byte *)((uint)param_3 & 0x3f), (bVar1 & 0x40) != 0)) {
            pbVar8 = pbVar10 + 2;
          }
        } while ((int)pbVar5 < iVar6);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_3._0_1_ = bVar1;
      if (((byte)param_3 & 0xc0) == 0x80) {
        pbVar8 = pbVar8 + iVar6;
      }
    }
    param_1 = param_1 + param_2;
    param_9 = param_9 + 1;
    if (4 < (int)param_9) {
      param_9 = 0;
    }
  } while( true );
}

