
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00706340(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,uint param_11,
                 int param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_c;
  uint local_8;
  
  _DAT_00857000 = 1;
  pbVar5 = param_5;
  do {
    param_9 = param_9 + -1;
    if (param_9 < 0) {
      return;
    }
    while (((param_11 & 1) == 0 && (param_9 = param_9 + -1, -1 < param_9))) {
      uVar2 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar4 = param_6;
      if (uVar2 != 0) {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar1 = uVar2 & 0x7f;
          }
          else if ((uVar2 & 0x40) == 0) {
            pbVar5 = pbVar5 + (uVar2 & 0x3f);
            uVar1 = uVar2 & 0x3f;
          }
          else {
            pbVar5 = pbVar5 + 1;
            uVar1 = uVar2 & 0x3f;
          }
          if ((int)(iVar4 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 - uVar1;
        }
      }
      param_11 = param_11 + 1;
      if (4 < (int)param_11) {
        param_11 = 0;
      }
    }
    local_8 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    if (local_8 == 0) goto LAB_00706849;
    param_5 = (byte *)param_7;
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar2 = local_8 & 0x7f;
        if ((int)param_5 < (int)uVar2) goto LAB_00706429;
        param_5 = param_5 + -uVar2;
        bVar7 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        local_8 = (uint)bVar7;
      }
      uVar2 = local_8 & 0x3f;
      if ((int)param_5 < (int)uVar2) break;
      if ((local_8 & 0x40) == 0) {
        param_5 = param_5 + -uVar2;
        local_8 = (uint)pbVar5[uVar2];
        pbVar5 = pbVar5 + uVar2 + 1;
      }
      else {
        param_5 = param_5 + -uVar2;
        local_8 = (uint)pbVar5[1];
        pbVar5 = pbVar5 + 2;
      }
    }
LAB_00706429:
    uVar2 = uVar2 - (int)param_5;
    pbVar6 = pbVar5;
    if (((byte)local_8 & 0xc0) == 0x80) {
      pbVar6 = pbVar5 + (int)param_5;
    }
    param_5 = (byte *)param_8;
    iVar4 = param_10;
    puVar8 = param_1;
    puVar9 = param_1;
    pbVar11 = param_3;
    if ((int)uVar2 <= param_8) {
      do {
        local_c = local_8 & 0x80;
        param_5 = param_5 + -uVar2;
        puVar8 = puVar9;
        if (local_c == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (((byte)iVar4 & 1) == 1) {
                puVar8 = puVar8 + 1;
                pbVar11 = pbVar11 + 1;
              }
              iVar4 = iVar4 + 1;
              if (4 < iVar4) {
                iVar4 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          goto LAB_00706620;
        }
        if ((local_8 & 0x40) == 0) {
          if (iVar4 < 1) {
switchD_00706553_default:
            if (0 < (int)uVar2) {
              pbVar5 = pbVar6 + 1;
              puVar9 = puVar8;
              pbVar10 = pbVar11;
              for (iVar3 = uVar2 - 1; iVar4 = 1, pbVar6 = pbVar5, puVar8 = puVar9, pbVar11 = pbVar10
                  , 0 < iVar3; iVar3 = iVar3 + -5) {
                pbVar11 = pbVar10 + 1;
                pbVar6 = pbVar5 + 1;
                *puVar9 = *(undefined1 *)((uint)*pbVar10 + param_12);
                iVar4 = 2;
                puVar8 = puVar9 + 1;
                if (iVar3 + -1 < 1) break;
                pbVar6 = pbVar5 + 2;
                iVar4 = 3;
                if (iVar3 + -2 < 1) break;
                puVar8 = puVar9 + 2;
                bVar7 = *pbVar11;
                pbVar11 = pbVar10 + 2;
                pbVar6 = pbVar5 + 3;
                puVar9[1] = *(undefined1 *)((uint)bVar7 + param_12);
                iVar4 = 4;
                if (iVar3 + -3 < 1) break;
                pbVar6 = pbVar5 + 4;
                iVar4 = 0;
                if (iVar3 + -4 < 1) break;
                pbVar5 = pbVar5 + 5;
                puVar9 = puVar8;
                pbVar10 = pbVar11;
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar6 = pbVar6 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_00706620;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00706553_caseD_3;
            case 4:
              goto switchD_00706553_caseD_4;
            default:
              goto switchD_00706553_default;
            }
            pbVar6 = pbVar6 + 1;
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            puVar9 = puVar8;
            if (0 < (int)uVar2) {
switchD_00706553_caseD_3:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              pbVar6 = pbVar6 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_00706553_caseD_4:
                pbVar6 = pbVar6 + 1;
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_00706553_default;
              }
            }
          }
        }
        else {
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar11;
          if (iVar4 < 1) {
switchD_00706480_default:
            puVar8 = puVar9;
            pbVar11 = pbVar5;
            if (0 < (int)uVar2) {
              iVar3 = uVar2 - 1;
              iVar4 = 1;
              if (0 < iVar3) {
                while( true ) {
                  pbVar10 = pbVar5 + 1;
                  *puVar9 = *(undefined1 *)((uint)*pbVar5 + param_12);
                  iVar4 = 2;
                  puVar8 = puVar9 + 1;
                  pbVar11 = pbVar10;
                  if ((iVar3 + -1 < 1) || (iVar4 = 3, iVar3 + -2 < 1)) break;
                  puVar8 = puVar9 + 2;
                  pbVar11 = pbVar5 + 2;
                  puVar9[1] = *(undefined1 *)((uint)*pbVar10 + param_12);
                  iVar4 = 4;
                  if ((iVar3 + -3 < 1) || (iVar4 = 0, iVar3 + -4 < 1)) break;
                  iVar3 = iVar3 + -5;
                  iVar4 = 1;
                  puVar9 = puVar8;
                  pbVar5 = pbVar11;
                  if (iVar3 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_00706620;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00706480_caseD_3;
            case 4:
              goto switchD_00706480_caseD_4;
            default:
              goto switchD_00706480_default;
            }
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            puVar9 = puVar8;
            if (0 < (int)uVar2) {
switchD_00706480_caseD_3:
              bVar7 = *pbVar11;
              puVar8 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              uVar2 = uVar2 - 1;
              *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_00706480_caseD_4:
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                puVar9 = puVar8;
                pbVar5 = pbVar11;
                goto switchD_00706480_default;
              }
            }
          }
        }
LAB_00706620:
        if ((int)param_5 < 1) {
          uVar2 = 0;
          break;
        }
        bVar7 = *pbVar6;
        local_8 = (uint)bVar7;
        pbVar6 = pbVar6 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar2 = bVar7 & 0x7f;
        }
        else {
          uVar2 = bVar7 & 0x3f;
        }
        puVar9 = puVar8;
      } while ((int)uVar2 <= (int)param_5);
    }
    uVar2 = uVar2 - (int)param_5;
    pbVar5 = pbVar6;
    if (((int)param_5 < 1) || ((local_8 & 0x80) == 0)) goto LAB_007067fb;
    if ((local_8 & 0x40) == 0) {
      if (iVar4 < 1) goto switchD_00706745_default;
      puVar9 = puVar8;
      switch(iVar4) {
      case 1:
        bVar7 = *pbVar11;
        puVar9 = puVar8 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar5 = pbVar6 + 1;
        *puVar8 = *(undefined1 *)((uint)bVar7 + param_12);
        param_5 = param_5 + -1;
        if ((int)param_5 < 1) break;
        goto LAB_0070676b;
      case 2:
LAB_0070676b:
        pbVar6 = pbVar5 + 1;
        param_5 = param_5 + -1;
        pbVar5 = pbVar6;
        if (0 < (int)param_5) {
switchD_00706745_caseD_3:
          bVar7 = *pbVar11;
          puVar8 = puVar9 + 1;
          pbVar11 = pbVar11 + 1;
          pbVar5 = pbVar6 + 1;
          *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
          if (0 < (int)(param_5 + -1)) {
            pbVar6 = pbVar6 + 2;
            param_5 = param_5 + -2;
            goto switchD_00706745_default;
          }
        }
        break;
      case 3:
        goto switchD_00706745_caseD_3;
      case 4:
        pbVar6 = pbVar6 + 1;
        param_5 = param_5 + -1;
      default:
switchD_00706745_default:
        pbVar5 = pbVar6;
        if (0 < (int)param_5) {
          pbVar6 = pbVar6 + 1;
          param_5 = param_5 + -1;
          pbVar5 = pbVar6;
          if (0 < (int)param_5) {
            while( true ) {
              pbVar10 = pbVar11 + 1;
              *puVar8 = *(undefined1 *)((uint)*pbVar11 + param_12);
              pbVar5 = pbVar6 + 1;
              if (((int)(param_5 + -1) < 1) || (pbVar5 = pbVar6 + 2, (int)(param_5 + -2) < 1))
              break;
              pbVar11 = pbVar11 + 2;
              puVar8[1] = *(undefined1 *)((uint)*pbVar10 + param_12);
              pbVar5 = pbVar6 + 3;
              if (((int)(param_5 + -3) < 1) || (pbVar5 = pbVar6 + 4, (int)(param_5 + -4) < 1))
              break;
              pbVar6 = pbVar6 + 5;
              param_5 = param_5 + -5;
              pbVar5 = pbVar6;
              puVar8 = puVar8 + 2;
              if ((int)param_5 < 1) break;
            }
          }
        }
      }
      goto LAB_007067fb;
    }
    pbVar5 = pbVar6 + 1;
    if (iVar4 < 1) goto switchD_00706680_default;
    puVar9 = puVar8;
    switch(iVar4) {
    case 1:
      bVar7 = *pbVar11;
      puVar9 = puVar8 + 1;
      pbVar11 = pbVar11 + 1;
      *puVar8 = *(undefined1 *)((uint)bVar7 + param_12);
      param_5 = param_5 + -1;
      if ((int)param_5 < 1) break;
      goto LAB_007066a5;
    case 2:
LAB_007066a5:
      param_5 = param_5 + -1;
      if (0 < (int)param_5) {
switchD_00706680_caseD_3:
        bVar7 = *pbVar11;
        puVar8 = puVar9 + 1;
        pbVar11 = pbVar11 + 1;
        *puVar9 = *(undefined1 *)((uint)bVar7 + param_12);
        if (0 < (int)(param_5 + -1)) {
          param_5 = param_5 + -2;
          goto switchD_00706680_default;
        }
      }
      break;
    case 3:
      goto switchD_00706680_caseD_3;
    case 4:
      param_5 = param_5 + -1;
    default:
switchD_00706680_default:
      if ((0 < (int)param_5) && (param_5 = param_5 + -1, 0 < (int)param_5)) {
        while( true ) {
          pbVar6 = pbVar11 + 1;
          *puVar8 = *(undefined1 *)((uint)*pbVar11 + param_12);
          if ((int)(param_5 + -2) < 1) break;
          pbVar11 = pbVar11 + 2;
          puVar8[1] = *(undefined1 *)((uint)*pbVar6 + param_12);
          if (((int)(param_5 + -4) < 1) ||
             (param_5 = param_5 + -5, puVar8 = puVar8 + 2, (int)param_5 < 1)) break;
        }
      }
    }
LAB_007067fb:
    bVar7 = (byte)local_8;
    iVar4 = (param_6 - param_7) - param_8;
    if ((int)uVar2 < iVar4) {
      do {
        iVar4 = iVar4 - uVar2;
        pbVar6 = pbVar5;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar6 = pbVar5 + uVar2;
        }
        bVar7 = *pbVar6;
        local_8 = (uint)bVar7;
        pbVar5 = pbVar6 + 1;
        uVar2 = local_8;
        if (((bVar7 & 0x80) != 0) && (uVar2 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
          pbVar5 = pbVar6 + 2;
        }
      } while ((int)uVar2 < iVar4);
    }
    if ((bVar7 & 0xc0) == 0x80) {
      pbVar5 = pbVar5 + iVar4;
    }
LAB_00706849:
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
    param_11 = param_11 + 1;
    if (4 < (int)param_11) {
      param_11 = 0;
    }
  } while( true );
}

