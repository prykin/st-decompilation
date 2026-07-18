
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f94d0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint local_c;
  uint local_8;
  
  _DAT_00857000 = 1;
  pbVar8 = param_6;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar3 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = param_7;
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
          if ((int)(iVar5 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 - uVar2;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_8 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    if (local_8 == 0) goto LAB_006f9a4c;
    param_6 = (byte *)param_8;
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar3 = local_8 & 0x7f;
        if ((int)param_6 < (int)uVar3) goto LAB_006f95b9;
        param_6 = param_6 + -uVar3;
        bVar7 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        local_8 = (uint)bVar7;
      }
      uVar3 = local_8 & 0x3f;
      if ((int)param_6 < (int)uVar3) break;
      if ((local_8 & 0x40) == 0) {
        param_6 = param_6 + -uVar3;
        local_8 = (uint)pbVar8[uVar3];
        pbVar8 = pbVar8 + uVar3 + 1;
      }
      else {
        param_6 = param_6 + -uVar3;
        local_8 = (uint)pbVar8[1];
        pbVar8 = pbVar8 + 2;
      }
    }
LAB_006f95b9:
    uVar3 = uVar3 - (int)param_6;
    if (((byte)local_8 & 0xc0) == 0x80) {
      pbVar8 = pbVar8 + (int)param_6;
    }
    param_6 = (byte *)param_9;
    iVar5 = param_11;
    pbVar6 = param_1;
    puVar11 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_c = local_8 & 0x80;
        param_6 = param_6 + -uVar3;
        if (local_c == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar5 & 1) == 1) {
                pbVar6 = pbVar6 + 1;
                puVar11 = puVar11 + 1;
              }
              iVar5 = iVar5 + 1;
              if (4 < iVar5) {
                iVar5 = 0;
              }
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          goto LAB_006f97ed;
        }
        if ((local_8 & 0x40) == 0) {
          if (iVar5 < 1) {
switchD_006f9702_default:
            if (0 < (int)uVar3) {
              pbVar9 = pbVar8 + 1;
              pbVar1 = pbVar6;
              puVar10 = puVar11;
              for (iVar4 = uVar3 - 1; iVar5 = 1, pbVar6 = pbVar1, pbVar8 = pbVar9, puVar11 = puVar10
                  , 0 < iVar4; iVar4 = iVar4 + -5) {
                if (param_5 <= *puVar10) {
                  *pbVar1 = *pbVar9;
                }
                puVar11 = puVar10 + 1;
                pbVar6 = pbVar1 + 1;
                pbVar8 = pbVar9 + 1;
                iVar5 = 2;
                if (iVar4 + -1 < 1) break;
                pbVar8 = pbVar9 + 2;
                iVar5 = 3;
                if (iVar4 + -2 < 1) break;
                if (param_5 <= *puVar11) {
                  *pbVar6 = *pbVar8;
                }
                puVar11 = puVar10 + 2;
                pbVar6 = pbVar1 + 2;
                pbVar8 = pbVar9 + 3;
                iVar5 = 4;
                if (iVar4 + -3 < 1) break;
                pbVar8 = pbVar9 + 4;
                iVar5 = 0;
                if (iVar4 + -4 < 1) break;
                pbVar9 = pbVar9 + 5;
                pbVar1 = pbVar6;
                puVar10 = puVar11;
              }
            }
          }
          else {
            switch(iVar5) {
            case 1:
              if (param_5 <= *puVar11) {
                *pbVar6 = *pbVar8;
              }
              puVar11 = puVar11 + 1;
              pbVar6 = pbVar6 + 1;
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 2;
              if ((int)uVar3 < 1) goto LAB_006f97ed;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9702_caseD_3;
            case 4:
              goto switchD_006f9702_caseD_4;
            default:
              goto switchD_006f9702_default;
            }
            pbVar8 = pbVar8 + 1;
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            if (0 < (int)uVar3) {
switchD_006f9702_caseD_3:
              if (param_5 <= *puVar11) {
                *pbVar6 = *pbVar8;
              }
              puVar11 = puVar11 + 1;
              pbVar6 = pbVar6 + 1;
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 4;
              if (0 < (int)uVar3) {
switchD_006f9702_caseD_4:
                pbVar8 = pbVar8 + 1;
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006f9702_default;
              }
            }
          }
        }
        else {
          bVar7 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar6;
          puVar10 = puVar11;
          if (iVar5 < 1) {
switchD_006f9617_default:
            pbVar6 = pbVar9;
            puVar11 = puVar10;
            if (0 < (int)uVar3) {
              iVar4 = uVar3 - 1;
              iVar5 = 1;
              if (0 < iVar4) {
                while( true ) {
                  if (param_5 <= *puVar10) {
                    *pbVar9 = bVar7;
                  }
                  puVar11 = puVar10 + 1;
                  pbVar6 = pbVar9 + 1;
                  iVar5 = 2;
                  if ((iVar4 + -1 < 1) || (iVar5 = 3, iVar4 + -2 < 1)) break;
                  if (param_5 <= *puVar11) {
                    *pbVar6 = bVar7;
                  }
                  puVar11 = puVar10 + 2;
                  pbVar6 = pbVar9 + 2;
                  iVar5 = 4;
                  if ((iVar4 + -3 < 1) || (iVar5 = 0, iVar4 + -4 < 1)) break;
                  iVar4 = iVar4 + -5;
                  iVar5 = 1;
                  pbVar9 = pbVar6;
                  puVar10 = puVar11;
                  if (iVar4 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar5) {
            case 1:
              if (param_5 <= *puVar11) {
                *pbVar6 = bVar7;
              }
              puVar11 = puVar11 + 1;
              pbVar6 = pbVar6 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 2;
              if ((int)uVar3 < 1) goto LAB_006f97ed;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9617_caseD_3;
            case 4:
              goto switchD_006f9617_caseD_4;
            default:
              goto switchD_006f9617_default;
            }
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            if (0 < (int)uVar3) {
switchD_006f9617_caseD_3:
              if (param_5 <= *puVar11) {
                *pbVar6 = bVar7;
              }
              puVar11 = puVar11 + 1;
              pbVar6 = pbVar6 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 4;
              if (0 < (int)uVar3) {
switchD_006f9617_caseD_4:
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                pbVar9 = pbVar6;
                puVar10 = puVar11;
                goto switchD_006f9617_default;
              }
            }
          }
        }
LAB_006f97ed:
        if ((int)param_6 < 1) {
          uVar3 = 0;
          break;
        }
        bVar7 = *pbVar8;
        local_8 = (uint)bVar7;
        pbVar8 = pbVar8 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar3 = bVar7 & 0x7f;
        }
        else {
          uVar3 = bVar7 & 0x3f;
        }
      } while ((int)uVar3 <= (int)param_6);
    }
    uVar3 = uVar3 - (int)param_6;
    if (((int)param_6 < 1) || ((local_8 & 0x80) == 0)) goto LAB_006f99fd;
    if ((local_8 & 0x40) == 0) {
      if (iVar5 < 1) goto switchD_006f9933_default;
      pbVar9 = pbVar8;
      switch(iVar5) {
      case 1:
        if (param_5 <= *puVar11) {
          *pbVar6 = *pbVar8;
        }
        puVar11 = puVar11 + 1;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
        param_6 = param_6 + -1;
        if ((int)param_6 < 1) break;
        goto LAB_006f995e;
      case 2:
LAB_006f995e:
        pbVar9 = pbVar8 + 1;
        param_6 = param_6 + -1;
        pbVar8 = pbVar9;
        if (0 < (int)param_6) {
switchD_006f9933_caseD_3:
          if (param_5 <= *puVar11) {
            *pbVar6 = *pbVar9;
          }
          puVar11 = puVar11 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar8 = pbVar9 + 1;
          if (0 < (int)(param_6 + -1)) {
            pbVar8 = pbVar9 + 2;
            param_6 = param_6 + -2;
            goto switchD_006f9933_default;
          }
        }
        break;
      case 3:
        goto switchD_006f9933_caseD_3;
      case 4:
        pbVar8 = pbVar8 + 1;
        param_6 = param_6 + -1;
      default:
switchD_006f9933_default:
        if (0 < (int)param_6) {
          pbVar9 = pbVar8 + 1;
          param_6 = param_6 + -1;
          pbVar8 = pbVar9;
          if (0 < (int)param_6) {
            while( true ) {
              if (param_5 <= *puVar11) {
                *pbVar6 = *pbVar9;
              }
              pbVar8 = pbVar9 + 1;
              if (((int)(param_6 + -1) < 1) || (pbVar8 = pbVar9 + 2, (int)(param_6 + -2) < 1))
              break;
              if (param_5 <= puVar11[1]) {
                pbVar6[1] = pbVar9[2];
              }
              puVar11 = puVar11 + 2;
              pbVar6 = pbVar6 + 2;
              pbVar8 = pbVar9 + 3;
              if (((int)(param_6 + -3) < 1) || (pbVar8 = pbVar9 + 4, (int)(param_6 + -4) < 1))
              break;
              pbVar9 = pbVar9 + 5;
              param_6 = param_6 + -5;
              pbVar8 = pbVar9;
              if ((int)param_6 < 1) break;
            }
          }
        }
      }
      goto LAB_006f99fd;
    }
    bVar7 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    if (iVar5 < 1) goto switchD_006f9854_default;
    switch(iVar5) {
    case 1:
      if (param_5 <= *puVar11) {
        *pbVar6 = bVar7;
      }
      puVar11 = puVar11 + 1;
      pbVar6 = pbVar6 + 1;
      param_6 = param_6 + -1;
      if ((int)param_6 < 1) break;
      goto LAB_006f9884;
    case 2:
LAB_006f9884:
      param_6 = param_6 + -1;
      if (0 < (int)param_6) {
LAB_006f9895:
        if (param_5 <= *puVar11) {
          *pbVar6 = bVar7;
        }
        puVar11 = puVar11 + 1;
        pbVar6 = pbVar6 + 1;
        if (0 < (int)(param_6 + -1)) {
          param_6 = param_6 + -2;
          goto switchD_006f9854_default;
        }
      }
      break;
    case 3:
      goto LAB_006f9895;
    case 4:
      param_6 = param_6 + -1;
    default:
switchD_006f9854_default:
      if ((0 < (int)param_6) && (param_6 = param_6 + -1, 0 < (int)param_6)) {
        while( true ) {
          if (param_5 <= *puVar11) {
            *pbVar6 = bVar7;
          }
          if ((int)(param_6 + -2) < 1) break;
          if (param_5 <= puVar11[1]) {
            pbVar6[1] = bVar7;
          }
          puVar11 = puVar11 + 2;
          pbVar6 = pbVar6 + 2;
          if (((int)(param_6 + -4) < 1) || (param_6 = param_6 + -5, (int)param_6 < 1)) break;
        }
      }
    }
LAB_006f99fd:
    bVar7 = (byte)local_8;
    iVar5 = (param_7 - param_8) - param_9;
    if ((int)uVar3 < iVar5) {
      do {
        iVar5 = iVar5 - uVar3;
        pbVar6 = pbVar8;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar6 = pbVar8 + uVar3;
        }
        bVar7 = *pbVar6;
        local_8 = (uint)bVar7;
        pbVar8 = pbVar6 + 1;
        uVar3 = local_8;
        if (((bVar7 & 0x80) != 0) && (uVar3 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
          pbVar8 = pbVar6 + 2;
        }
      } while ((int)uVar3 < iVar5);
    }
    if ((bVar7 & 0xc0) == 0x80) {
      pbVar8 = pbVar8 + iVar5;
    }
LAB_006f9a4c:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

