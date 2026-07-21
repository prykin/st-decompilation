
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00703650(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 uint param_12,int param_13)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar10 = param_6;
  do {
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar2 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar4 = param_7;
      if (uVar2 != 0) {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar1 = uVar2 & 0x7f;
          }
          else if ((uVar2 & 0x40) == 0) {
            pbVar10 = pbVar10 + (uVar2 & 0x3f);
            uVar1 = uVar2 & 0x3f;
          }
          else {
            pbVar10 = pbVar10 + 1;
            uVar1 = uVar2 & 0x3f;
          }
          if ((int)(iVar4 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar4 = iVar4 - uVar1;
        }
      }
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        param_12 = 0;
      }
    }
    local_8 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    if (local_8 == 0) goto LAB_00703cb8;
    param_6 = (byte *)param_8;
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar2 = local_8 & 0x7f;
        if ((int)param_6 < (int)uVar2) goto LAB_00703739;
        param_6 = param_6 + -uVar2;
        bVar7 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        local_8 = (uint)bVar7;
      }
      uVar2 = local_8 & 0x3f;
      if ((int)param_6 < (int)uVar2) break;
      if ((local_8 & 0x40) == 0) {
        param_6 = param_6 + -uVar2;
        local_8 = (uint)pbVar10[uVar2];
        pbVar10 = pbVar10 + uVar2 + 1;
      }
      else {
        param_6 = param_6 + -uVar2;
        local_8 = (uint)pbVar10[1];
        pbVar10 = pbVar10 + 2;
      }
    }
LAB_00703739:
    uVar2 = uVar2 - (int)param_6;
    if (((byte)local_8 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + (int)param_6;
    }
    param_6 = (byte *)param_9;
    iVar4 = param_11;
    puVar6 = param_3;
    puVar9 = param_1;
    if ((int)uVar2 <= param_9) {
      do {
        local_c = local_8 & 0x80;
        param_6 = param_6 + -uVar2;
        if (local_c == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (((byte)iVar4 & 1) == 1) {
                puVar9 = puVar9 + 1;
                puVar6 = puVar6 + 1;
              }
              iVar4 = iVar4 + 1;
              if (4 < iVar4) {
                iVar4 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          goto LAB_007039e3;
        }
        if ((local_8 & 0x40) == 0) {
          if (iVar4 < 1) {
switchD_007038c9_default:
            if (0 < (int)uVar2) {
              pbVar11 = pbVar10 + 1;
              puVar5 = puVar6;
              puVar8 = puVar9;
              for (iVar3 = uVar2 - 1; iVar4 = 1, puVar6 = puVar5, puVar9 = puVar8, pbVar10 = pbVar11
                  , 0 < iVar3; iVar3 = iVar3 + -5) {
                if (param_5 <= *puVar5) {
                  *puVar8 = *(undefined1 *)((uint)CONCAT11(*pbVar11,*puVar8) + param_13);
                }
                puVar6 = puVar5 + 1;
                puVar9 = puVar8 + 1;
                pbVar10 = pbVar11 + 1;
                iVar4 = 2;
                if (iVar3 + -1 < 1) break;
                pbVar10 = pbVar11 + 2;
                iVar4 = 3;
                if (iVar3 + -2 < 1) break;
                if (param_5 <= *puVar6) {
                  *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
                }
                puVar6 = puVar5 + 2;
                puVar9 = puVar8 + 2;
                pbVar10 = pbVar11 + 3;
                iVar4 = 4;
                if (iVar3 + -3 < 1) break;
                pbVar10 = pbVar11 + 4;
                iVar4 = 0;
                if (iVar3 + -4 < 1) break;
                pbVar11 = pbVar11 + 5;
                puVar5 = puVar6;
                puVar8 = puVar9;
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              pbVar10 = pbVar10 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_007039e3;
              break;
            case 2:
              break;
            case 3:
              goto switchD_007038c9_caseD_3;
            case 4:
              goto switchD_007038c9_caseD_4;
            default:
              goto switchD_007038c9_default;
            }
            pbVar10 = pbVar10 + 1;
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            if (0 < (int)uVar2) {
switchD_007038c9_caseD_3:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              pbVar10 = pbVar10 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_007038c9_caseD_4:
                pbVar10 = pbVar10 + 1;
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_007038c9_default;
              }
            }
          }
        }
        else {
          bVar7 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if (iVar4 < 1) {
switchD_0070379b_default:
            if (0 < (int)uVar2) {
              iVar3 = uVar2 - 1;
              iVar4 = 1;
              puVar5 = puVar6;
              puVar8 = puVar9;
              if (0 < iVar3) {
                while( true ) {
                  if (param_5 <= *puVar5) {
                    *puVar8 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar8) + param_13);
                  }
                  puVar6 = puVar5 + 1;
                  puVar9 = puVar8 + 1;
                  iVar4 = 2;
                  if ((iVar3 + -1 < 1) || (iVar4 = 3, iVar3 + -2 < 1)) break;
                  if (param_5 <= *puVar6) {
                    *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
                  }
                  puVar6 = puVar5 + 2;
                  puVar9 = puVar8 + 2;
                  iVar4 = 4;
                  if ((iVar3 + -3 < 1) || (iVar4 = 0, iVar3 + -4 < 1)) break;
                  iVar3 = iVar3 + -5;
                  iVar4 = 1;
                  puVar5 = puVar6;
                  puVar8 = puVar9;
                  if (iVar3 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar4) {
            case 1:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 2;
              if ((int)uVar2 < 1) goto LAB_007039e3;
              break;
            case 2:
              break;
            case 3:
              goto switchD_0070379b_caseD_3;
            case 4:
              goto switchD_0070379b_caseD_4;
            default:
              goto switchD_0070379b_default;
            }
            uVar2 = uVar2 - 1;
            iVar4 = 3;
            if (0 < (int)uVar2) {
switchD_0070379b_caseD_3:
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
              }
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
              uVar2 = uVar2 - 1;
              iVar4 = 4;
              if (0 < (int)uVar2) {
switchD_0070379b_caseD_4:
                iVar4 = 0;
                uVar2 = uVar2 - 1;
                goto switchD_0070379b_default;
              }
            }
          }
        }
LAB_007039e3:
        if ((int)param_6 < 1) {
          uVar2 = 0;
          break;
        }
        bVar7 = *pbVar10;
        local_8 = (uint)bVar7;
        pbVar10 = pbVar10 + 1;
        if ((bVar7 & 0x80) == 0) {
          uVar2 = bVar7 & 0x7f;
        }
        else {
          uVar2 = bVar7 & 0x3f;
        }
      } while ((int)uVar2 <= (int)param_6);
    }
    uVar2 = uVar2 - (int)param_6;
    if (((int)param_6 < 1) || ((local_8 & 0x80) == 0)) goto LAB_00703c69;
    if ((local_8 & 0x40) == 0) {
      if (iVar4 < 1) goto switchD_00703b70_default;
      pbVar11 = pbVar10;
      switch(iVar4) {
      case 1:
        if (param_5 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar10,*puVar9) + param_13);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        pbVar10 = pbVar10 + 1;
        param_6 = param_6 + -1;
        if ((int)param_6 < 1) break;
        goto LAB_00703ba5;
      case 2:
LAB_00703ba5:
        pbVar11 = pbVar10 + 1;
        param_6 = param_6 + -1;
        pbVar10 = pbVar11;
        if (0 < (int)param_6) {
switchD_00703b70_caseD_3:
          if (param_5 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar11,*puVar9) + param_13);
          }
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
          pbVar10 = pbVar11 + 1;
          if (0 < (int)(param_6 + -1)) {
            pbVar10 = pbVar11 + 2;
            param_6 = param_6 + -2;
            goto switchD_00703b70_default;
          }
        }
        break;
      case 3:
        goto switchD_00703b70_caseD_3;
      case 4:
        pbVar10 = pbVar10 + 1;
        param_6 = param_6 + -1;
      default:
switchD_00703b70_default:
        if (0 < (int)param_6) {
          pbVar11 = pbVar10 + 1;
          param_6 = param_6 + -1;
          pbVar10 = pbVar11;
          if (0 < (int)param_6) {
            while( true ) {
              if (param_5 <= *puVar6) {
                *puVar9 = *(undefined1 *)((uint)CONCAT11(*pbVar11,*puVar9) + param_13);
              }
              pbVar10 = pbVar11 + 1;
              if (((int)(param_6 + -1) < 1) || (pbVar10 = pbVar11 + 2, (int)(param_6 + -2) < 1))
              break;
              if (param_5 <= puVar6[1]) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                puVar9[1] = *(undefined1 *)((uint)CONCAT11(pbVar11[2],puVar9[1]) + param_13);
              }
              puVar6 = puVar6 + 2;
              puVar9 = puVar9 + 2;
              pbVar10 = pbVar11 + 3;
              if (((int)(param_6 + -3) < 1) || (pbVar10 = pbVar11 + 4, (int)(param_6 + -4) < 1))
              break;
              pbVar11 = pbVar11 + 5;
              param_6 = param_6 + -5;
              pbVar10 = pbVar11;
              if ((int)param_6 < 1) break;
            }
          }
        }
      }
      goto LAB_00703c69;
    }
    bVar7 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    if (iVar4 < 1) goto switchD_00703a52_default;
    switch(iVar4) {
    case 1:
      if (param_5 <= *puVar6) {
        *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
      }
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
      param_6 = param_6 + -1;
      if ((int)param_6 < 1) break;
      goto LAB_00703a8e;
    case 2:
LAB_00703a8e:
      param_6 = param_6 + -1;
      if (0 < (int)param_6) {
switchD_00703a52_caseD_3:
        if (param_5 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        if (0 < (int)(param_6 + -1)) {
          param_6 = param_6 + -2;
          goto switchD_00703a52_default;
        }
      }
      break;
    case 3:
      goto switchD_00703a52_caseD_3;
    case 4:
      param_6 = param_6 + -1;
    default:
switchD_00703a52_default:
      if ((0 < (int)param_6) && (param_6 = param_6 + -1, 0 < (int)param_6)) {
        while( true ) {
          if (param_5 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar9) + param_13);
          }
          if ((int)(param_6 + -2) < 1) break;
          if (param_5 <= puVar6[1]) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            puVar9[1] = *(undefined1 *)((uint)CONCAT11(bVar7,puVar9[1]) + param_13);
          }
          puVar6 = puVar6 + 2;
          puVar9 = puVar9 + 2;
          if (((int)(param_6 + -4) < 1) || (param_6 = param_6 + -5, (int)param_6 < 1)) break;
        }
      }
    }
LAB_00703c69:
    bVar7 = (byte)local_8;
    iVar4 = (param_7 - param_8) - param_9;
    if ((int)uVar2 < iVar4) {
      do {
        iVar4 = iVar4 - uVar2;
        pbVar11 = pbVar10;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar11 = pbVar10 + uVar2;
        }
        bVar7 = *pbVar11;
        local_8 = (uint)bVar7;
        pbVar10 = pbVar11 + 1;
        uVar2 = local_8;
        if (((bVar7 & 0x80) != 0) && (uVar2 = local_8 & 0x3f, (bVar7 & 0x40) != 0)) {
          pbVar10 = pbVar11 + 2;
        }
      } while ((int)uVar2 < iVar4);
    }
    if ((bVar7 & 0xc0) == 0x80) {
      pbVar10 = pbVar10 + iVar4;
    }
LAB_00703cb8:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      param_12 = 0;
    }
  } while( true );
}

