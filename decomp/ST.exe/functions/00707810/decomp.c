
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00707810(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12,int param_13,uint param_14,int param_15,uint param_16)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  int local_80 [31];

  _DAT_00857000 = 1;
  if ((2 < param_15) && (2 < (int)param_16)) {
    bVar2 = param_15 <= (int)(param_9 + 1);
    param_15 = param_9 + 1;
    if (bVar2) {
      param_15 = 3;
    }
    if ((int)param_16 <= param_15) {
      param_15 = 3;
    }
    param_16 = 0x1f;
    piVar13 = local_80;
    do {
      uVar3 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      param_16 = param_16 - 1;
      *piVar13 = ((int)uVar4 % param_15) * param_2 + (int)uVar3 % param_15;
      piVar13 = piVar13 + 1;
    } while (param_16 != 0);
    iVar14 = 0;
    param_12 = param_12 + -1;
    if (-1 < param_12) {
joined_r0x007078a5:
      while (((param_14 & 1) == 0 && (param_12 = param_12 + -1, -1 < param_12))) {
        uVar3 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar6 = param_7;
        if (uVar3 != 0) {
          while( true ) {
            if ((uVar3 & 0x80) == 0) {
              uVar4 = uVar3 & 0x7f;
            }
            else if ((uVar3 & 0x40) == 0) {
              param_6 = param_6 + (uVar3 & 0x3f);
              uVar4 = uVar3 & 0x3f;
            }
            else {
              param_6 = param_6 + 1;
              uVar4 = uVar3 & 0x3f;
            }
            if ((int)(iVar6 - uVar4) < 1) break;
            uVar3 = (uint)*param_6;
            param_6 = param_6 + 1;
            iVar6 = iVar6 - uVar4;
          }
        }
        param_14 = param_14 + 1;
        if (4 < (int)param_14) {
          param_14 = 0;
        }
      }
      param_16 = (uint)*param_6;
      pbVar9 = param_6 + 1;
      if (param_16 != 0) {
        param_15 = param_8;
        param_6 = pbVar9;
        do {
          if ((param_16 & 0x80) == 0) {
            uVar3 = param_16 & 0x7f;
            if (param_15 < (int)uVar3) goto LAB_0070795e;
          }
          else {
            uVar3 = param_16 & 0x3f;
            if (param_15 < (int)uVar3) goto LAB_0070795e;
            if ((param_16 & 0x40) == 0) {
              param_6 = param_6 + uVar3;
            }
            else {
              param_6 = param_6 + 1;
            }
          }
          param_15 = param_15 - uVar3;
          param_16 = (uint)*param_6;
          param_6 = param_6 + 1;
        } while( true );
      }
      goto LAB_00707e8a;
    }
  }
  return;
LAB_0070795e:
  uVar3 = uVar3 - param_15;
  if (((byte)param_16 & 0xc0) == 0x80) {
    param_6 = param_6 + param_15;
  }
  param_15 = param_11;
  if (param_10 == 0) {
    iVar6 = param_13;
    puVar8 = param_3;
    puVar11 = param_1;
    if ((int)uVar3 <= param_11) {
      do {
        param_9 = param_16 & 0x80;
        param_15 = param_15 - uVar3;
        if (param_9 == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar6 & 1) == 1) {
                puVar11 = puVar11 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar6 = iVar6 + 1;
              if (4 < iVar6) {
                iVar6 = 0;
              }
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          goto LAB_00708302;
        }
        if ((param_16 & 0x40) == 0) {
          if (iVar6 < 1) {
switchD_0070819b_default:
            if (0 < (int)uVar3) {
              pbVar9 = param_6 + 1;
              puVar7 = puVar8;
              puVar12 = puVar11;
              for (iVar5 = uVar3 - 1; iVar6 = 1, puVar8 = puVar7, puVar11 = puVar12,
                  param_6 = pbVar9, 0 < iVar5; iVar5 = iVar5 + -5) {
                if (param_5 <= *puVar7) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar12 = puVar12[*piVar13];
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 1;
                puVar11 = puVar12 + 1;
                param_6 = pbVar9 + 1;
                iVar6 = 2;
                if (iVar5 + -1 < 1) break;
                param_6 = pbVar9 + 2;
                iVar6 = 3;
                if (iVar5 + -2 < 1) break;
                if (param_5 <= *puVar8) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar11 = puVar11[*piVar13];
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 2;
                puVar11 = puVar12 + 2;
                param_6 = pbVar9 + 3;
                iVar6 = 4;
                if (iVar5 + -3 < 1) break;
                param_6 = pbVar9 + 4;
                iVar6 = 0;
                if (iVar5 + -4 < 1) break;
                pbVar9 = pbVar9 + 5;
                puVar7 = puVar8;
                puVar12 = puVar11;
              }
            }
          }
          else {
            switch(iVar6) {
            case 1:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              param_6 = param_6 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 2;
              if ((int)uVar3 < 1) goto LAB_00708302;
              break;
            case 2:
              break;
            case 3:
              goto switchD_0070819b_caseD_3;
            case 4:
              goto switchD_0070819b_caseD_4;
            default:
              goto switchD_0070819b_default;
            }
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 3;
            if (0 < (int)uVar3) {
switchD_0070819b_caseD_3:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              param_6 = param_6 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 4;
              if (0 < (int)uVar3) {
switchD_0070819b_caseD_4:
                param_6 = param_6 + 1;
                iVar6 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_0070819b_default;
              }
            }
          }
        }
        else {
          param_6 = param_6 + 1;
          puVar7 = puVar8;
          puVar12 = puVar11;
          if (iVar6 < 1) {
switchD_00708078_default:
            puVar8 = puVar7;
            puVar11 = puVar12;
            if (0 < (int)uVar3) {
              iVar5 = uVar3 - 1;
              iVar6 = 1;
              if (0 < iVar5) {
                while( true ) {
                  if (param_5 <= *puVar7) {
                    piVar13 = local_80 + iVar14;
                    iVar14 = iVar14 + 1;
                    *puVar12 = puVar12[*piVar13];
                    if (0x1e < iVar14) {
                      iVar14 = 0;
                    }
                  }
                  puVar8 = puVar7 + 1;
                  puVar11 = puVar12 + 1;
                  iVar6 = 2;
                  if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
                  if (param_5 <= *puVar8) {
                    piVar13 = local_80 + iVar14;
                    iVar14 = iVar14 + 1;
                    *puVar11 = puVar11[*piVar13];
                    if (0x1e < iVar14) {
                      iVar14 = 0;
                    }
                  }
                  puVar8 = puVar7 + 2;
                  puVar11 = puVar12 + 2;
                  iVar6 = 4;
                  if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
                  iVar5 = iVar5 + -5;
                  iVar6 = 1;
                  puVar7 = puVar8;
                  puVar12 = puVar11;
                  if (iVar5 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar6) {
            case 1:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 2;
              if ((int)uVar3 < 1) goto LAB_00708302;
              break;
            case 2:
              break;
            case 3:
              goto switchD_00708078_caseD_3;
            case 4:
              goto switchD_00708078_caseD_4;
            default:
              goto switchD_00708078_default;
            }
            uVar3 = uVar3 - 1;
            iVar6 = 3;
            if (0 < (int)uVar3) {
switchD_00708078_caseD_3:
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = puVar11[*piVar13];
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
              uVar3 = uVar3 - 1;
              iVar6 = 4;
              if (0 < (int)uVar3) {
switchD_00708078_caseD_4:
                iVar6 = 0;
                uVar3 = uVar3 - 1;
                puVar7 = puVar8;
                puVar12 = puVar11;
                goto switchD_00708078_default;
              }
            }
          }
        }
LAB_00708302:
        if (param_15 < 1) {
          uVar3 = 0;
          break;
        }
        bVar1 = *param_6;
        param_16 = (uint)bVar1;
        param_6 = param_6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar3 = bVar1 & 0x7f;
        }
        else {
          uVar3 = bVar1 & 0x3f;
        }
      } while ((int)uVar3 <= param_15);
    }
    uVar3 = uVar3 - param_15;
    pbVar9 = param_6;
    if ((param_15 < 1) || ((param_16 & 0x80) == 0)) goto cf_common_join_00707E36;
    if ((param_16 & 0x40) == 0) {
      if (iVar6 < 1) goto switchD_00708491_default;
      switch(iVar6) {
      case 1:
        if (param_5 <= *puVar8) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          *puVar11 = puVar11[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
        param_6 = param_6 + 1;
        param_15 = param_15 + -1;
        pbVar9 = param_6;
        if (param_15 < 1) goto cf_common_join_00707E36;
        goto LAB_007084d1;
      case 2:
LAB_007084d1:
        param_6 = param_6 + 1;
        param_15 = param_15 + -1;
        pbVar9 = param_6;
        if (param_15 < 1) goto cf_common_join_00707E36;
switchD_00708491_caseD_3:
        if (param_5 <= *puVar8) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          *puVar11 = puVar11[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
        pbVar9 = param_6 + 1;
        if (param_15 + -1 < 1) goto cf_common_join_00707E36;
        param_6 = param_6 + 2;
        param_15 = param_15 + -2;
        break;
      case 3:
        goto switchD_00708491_caseD_3;
      case 4:
        param_6 = param_6 + 1;
        param_15 = param_15 + -1;
      }
switchD_00708491_default:
      pbVar9 = param_6;
      if (0 < param_15) {
        param_6 = param_6 + 1;
        param_15 = param_15 + -1;
        pbVar9 = param_6;
        if (0 < param_15) {
          while( true ) {
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = puVar11[*piVar13];
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            pbVar9 = param_6 + 1;
            if ((param_15 + -1 < 1) || (pbVar9 = param_6 + 2, param_15 + -2 < 1)) break;
            if (param_5 <= puVar8[1]) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              puVar11[1] = (puVar11 + 1)[*piVar13];
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 2;
            puVar11 = puVar11 + 2;
            pbVar9 = param_6 + 3;
            if ((param_15 + -3 < 1) || (pbVar9 = param_6 + 4, param_15 + -4 < 1)) break;
            param_6 = param_6 + 5;
            param_15 = param_15 + -5;
            pbVar9 = param_6;
            if (param_15 < 1) break;
          }
        }
      }
      goto cf_common_join_00707E36;
    }
    pbVar9 = param_6 + 1;
    if (iVar6 < 1) goto switchD_0070837c_default;
    switch(iVar6) {
    case 1:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = puVar11[*piVar13];
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      param_15 = param_15 + -1;
      if (param_15 < 1) goto cf_common_join_00707E36;
      goto LAB_007083b3;
    case 2:
LAB_007083b3:
      param_15 = param_15 + -1;
      if (param_15 < 1) goto cf_common_join_00707E36;
switchD_0070837c_caseD_3:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = puVar11[*piVar13];
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      if (param_15 + -1 < 1) goto cf_common_join_00707E36;
      param_15 = param_15 + -2;
      break;
    case 3:
      goto switchD_0070837c_caseD_3;
    case 4:
      param_15 = param_15 + -1;
    }
switchD_0070837c_default:
    if ((0 < param_15) && (param_15 = param_15 + -1, 0 < param_15)) {
      while( true ) {
        if (param_5 <= *puVar8) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          *puVar11 = puVar11[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        if (param_15 + -2 < 1) break;
        if (param_5 <= puVar8[1]) {
          piVar13 = local_80 + iVar14;
          iVar14 = iVar14 + 1;
          puVar11[1] = (puVar11 + 1)[*piVar13];
          if (0x1e < iVar14) {
            iVar14 = 0;
          }
        }
        puVar8 = puVar8 + 2;
        puVar11 = puVar11 + 2;
        if ((param_15 + -4 < 1) || (param_15 = param_15 + -5, param_15 < 1)) break;
      }
    }
    goto cf_common_join_00707E36;
  }
  iVar6 = param_13;
  puVar8 = param_3;
  puVar11 = param_1;
  if ((int)uVar3 <= param_11) {
    do {
      param_9 = param_16 & 0x80;
      param_15 = param_15 - uVar3;
      if (param_9 == 0) {
        if (-1 < (int)(uVar3 - 1)) {
          do {
            if (((byte)iVar6 & 1) == 1) {
              puVar11 = puVar11 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar6 = iVar6 + 1;
            if (4 < iVar6) {
              iVar6 = 0;
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        goto LAB_00707ca8;
      }
      if ((param_16 & 0x40) == 0) {
        if (iVar6 < 1) {
switchD_00707b1e_default:
          if (0 < (int)uVar3) {
            pbVar9 = param_6 + 1;
            puVar7 = puVar8;
            puVar12 = puVar11;
            for (iVar5 = uVar3 - 1; iVar6 = 1, puVar8 = puVar7, puVar11 = puVar12, param_6 = pbVar9,
                0 < iVar5; iVar5 = iVar5 + -5) {
              if (param_5 <= *puVar7) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar13] + param_10);
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar7 + 1;
              puVar11 = puVar12 + 1;
              param_6 = pbVar9 + 1;
              iVar6 = 2;
              if (iVar5 + -1 < 1) break;
              param_6 = pbVar9 + 2;
              iVar6 = 3;
              if (iVar5 + -2 < 1) break;
              if (param_5 <= *puVar8) {
                piVar13 = local_80 + iVar14;
                iVar14 = iVar14 + 1;
                *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
                if (0x1e < iVar14) {
                  iVar14 = 0;
                }
              }
              puVar8 = puVar7 + 2;
              puVar11 = puVar12 + 2;
              param_6 = pbVar9 + 3;
              iVar6 = 4;
              if (iVar5 + -3 < 1) break;
              param_6 = pbVar9 + 4;
              iVar6 = 0;
              if (iVar5 + -4 < 1) break;
              pbVar9 = pbVar9 + 5;
              puVar7 = puVar8;
              puVar12 = puVar11;
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 2;
            if ((int)uVar3 < 1) goto LAB_00707ca8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_00707b1e_caseD_3;
          case 4:
            goto switchD_00707b1e_caseD_4;
          default:
            goto switchD_00707b1e_default;
          }
          param_6 = param_6 + 1;
          uVar3 = uVar3 - 1;
          iVar6 = 3;
          if (0 < (int)uVar3) {
switchD_00707b1e_caseD_3:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            param_6 = param_6 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 4;
            if (0 < (int)uVar3) {
switchD_00707b1e_caseD_4:
              param_6 = param_6 + 1;
              iVar6 = 0;
              uVar3 = uVar3 - 1;
              goto switchD_00707b1e_default;
            }
          }
        }
      }
      else {
        param_6 = param_6 + 1;
        if (iVar6 < 1) {
switchD_007079d4_default:
          if (0 < (int)uVar3) {
            iVar5 = uVar3 - 1;
            iVar6 = 1;
            puVar7 = puVar8;
            puVar12 = puVar11;
            if (0 < iVar5) {
              while( true ) {
                if (param_5 <= *puVar7) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar13] + param_10);
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 1;
                puVar11 = puVar12 + 1;
                iVar6 = 2;
                if ((iVar5 + -1 < 1) || (iVar6 = 3, iVar5 + -2 < 1)) break;
                if (param_5 <= *puVar8) {
                  piVar13 = local_80 + iVar14;
                  iVar14 = iVar14 + 1;
                  *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
                  if (0x1e < iVar14) {
                    iVar14 = 0;
                  }
                }
                puVar8 = puVar7 + 2;
                puVar11 = puVar12 + 2;
                iVar6 = 4;
                if ((iVar5 + -3 < 1) || (iVar6 = 0, iVar5 + -4 < 1)) break;
                iVar5 = iVar5 + -5;
                iVar6 = 1;
                puVar7 = puVar8;
                puVar12 = puVar11;
                if (iVar5 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar6) {
          case 1:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 2;
            if ((int)uVar3 < 1) goto LAB_00707ca8;
            break;
          case 2:
            break;
          case 3:
            goto switchD_007079d4_caseD_3;
          case 4:
            goto switchD_007079d4_caseD_4;
          default:
            goto switchD_007079d4_default;
          }
          uVar3 = uVar3 - 1;
          iVar6 = 3;
          if (0 < (int)uVar3) {
switchD_007079d4_caseD_3:
            if (param_5 <= *puVar8) {
              piVar13 = local_80 + iVar14;
              iVar14 = iVar14 + 1;
              *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
              if (0x1e < iVar14) {
                iVar14 = 0;
              }
            }
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
            uVar3 = uVar3 - 1;
            iVar6 = 4;
            if (0 < (int)uVar3) {
switchD_007079d4_caseD_4:
              iVar6 = 0;
              uVar3 = uVar3 - 1;
              goto switchD_007079d4_default;
            }
          }
        }
      }
LAB_00707ca8:
      if (param_15 < 1) {
        uVar3 = 0;
        break;
      }
      bVar1 = *param_6;
      param_16 = (uint)bVar1;
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar3 = bVar1 & 0x7f;
      }
      else {
        uVar3 = bVar1 & 0x3f;
      }
    } while ((int)uVar3 <= param_15);
  }
  uVar3 = uVar3 - param_15;
  pbVar9 = param_6;
  if ((param_15 < 1) || ((param_16 & 0x80) == 0)) goto cf_common_join_00707E36;
  if ((param_16 & 0x40) == 0) {
    if (iVar6 < 1) goto switchD_00707ed6_default;
    switch(iVar6) {
    case 1:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      param_6 = param_6 + 1;
      param_15 = param_15 + -1;
      pbVar9 = param_6;
      if (param_15 < 1) goto cf_common_join_00707E36;
      goto LAB_00707f1e;
    case 2:
LAB_00707f1e:
      param_6 = param_6 + 1;
      param_15 = param_15 + -1;
      pbVar9 = param_6;
      if (param_15 < 1) goto cf_common_join_00707E36;
switchD_00707ed6_caseD_3:
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
      pbVar9 = param_6 + 1;
      if (param_15 + -1 < 1) goto cf_common_join_00707E36;
      param_6 = param_6 + 2;
      param_15 = param_15 + -2;
      break;
    case 3:
      goto switchD_00707ed6_caseD_3;
    case 4:
      param_6 = param_6 + 1;
      param_15 = param_15 + -1;
    }
switchD_00707ed6_default:
    pbVar9 = param_6;
    if (0 < param_15) {
      param_6 = param_6 + 1;
      param_15 = param_15 + -1;
      pbVar9 = param_6;
      if (0 < param_15) {
        while( true ) {
          if (param_5 <= *puVar8) {
            piVar13 = local_80 + iVar14;
            iVar14 = iVar14 + 1;
            *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
            if (0x1e < iVar14) {
              iVar14 = 0;
            }
          }
          pbVar9 = param_6 + 1;
          if ((param_15 + -1 < 1) || (pbVar9 = param_6 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar8[1]) {
            piVar13 = local_80 + iVar14;
            iVar14 = iVar14 + 1;
            puVar11[1] = *(undefined1 *)((uint)(byte)(puVar11 + 1)[*piVar13] + param_10);
            if (0x1e < iVar14) {
              iVar14 = 0;
            }
          }
          puVar8 = puVar8 + 2;
          puVar11 = puVar11 + 2;
          pbVar9 = param_6 + 3;
          if ((param_15 + -3 < 1) || (pbVar9 = param_6 + 4, param_15 + -4 < 1)) break;
          param_6 = param_6 + 5;
          param_15 = param_15 + -5;
          pbVar9 = param_6;
          if (param_15 < 1) break;
        }
      }
    }
    goto cf_common_join_00707E36;
  }
  pbVar9 = param_6 + 1;
  if (iVar6 < 1) goto switchD_00707d22_default;
  switch(iVar6) {
  case 1:
    if (param_5 <= *puVar8) {
      piVar13 = local_80 + iVar14;
      iVar14 = iVar14 + 1;
      *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
      if (0x1e < iVar14) {
        iVar14 = 0;
      }
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    param_15 = param_15 + -1;
    if (param_15 < 1) goto cf_common_join_00707E36;
    goto LAB_00707d61;
  case 2:
LAB_00707d61:
    param_15 = param_15 + -1;
    if (param_15 < 1) goto cf_common_join_00707E36;
switchD_00707d22_caseD_3:
    if (param_5 <= *puVar8) {
      piVar13 = local_80 + iVar14;
      iVar14 = iVar14 + 1;
      *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
      if (0x1e < iVar14) {
        iVar14 = 0;
      }
    }
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
    if (param_15 + -1 < 1) goto cf_common_join_00707E36;
    param_15 = param_15 + -2;
    break;
  case 3:
    goto switchD_00707d22_caseD_3;
  case 4:
    param_15 = param_15 + -1;
  }
switchD_00707d22_default:
  if ((0 < param_15) && (param_15 = param_15 + -1, 0 < param_15)) {
    while( true ) {
      if (param_5 <= *puVar8) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        *puVar11 = *(undefined1 *)((uint)(byte)puVar11[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      if (param_15 + -2 < 1) break;
      if (param_5 <= puVar8[1]) {
        piVar13 = local_80 + iVar14;
        iVar14 = iVar14 + 1;
        puVar11[1] = *(undefined1 *)((uint)(byte)(puVar11 + 1)[*piVar13] + param_10);
        if (0x1e < iVar14) {
          iVar14 = 0;
        }
      }
      puVar8 = puVar8 + 2;
      puVar11 = puVar11 + 2;
      if ((param_15 + -4 < 1) || (param_15 = param_15 + -5, param_15 < 1)) break;
    }
  }
cf_common_join_00707E36:
  iVar6 = (param_7 - param_8) - param_11;
  bVar1 = (byte)param_16;
  if ((int)uVar3 < iVar6) {
    do {
      iVar6 = iVar6 - uVar3;
      pbVar10 = pbVar9;
      if (((byte)param_16 & 0xc0) == 0x80) {
        pbVar10 = pbVar9 + uVar3;
      }
      bVar1 = *pbVar10;
      param_16 = (uint)bVar1;
      pbVar9 = pbVar10 + 1;
      uVar3 = param_16;
      if (((bVar1 & 0x80) != 0) && (uVar3 = param_16 & 0x3f, (bVar1 & 0x40) != 0)) {
        pbVar9 = pbVar10 + 2;
      }
    } while ((int)uVar3 < iVar6);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  param_16._0_1_ = bVar1;
  if (((byte)param_16 & 0xc0) == 0x80) {
    pbVar9 = pbVar9 + iVar6;
  }
LAB_00707e8a:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_14 = param_14 + 1;
  if (4 < (int)param_14) {
    param_14 = 0;
  }
  param_12 = param_12 + -1;
  param_6 = pbVar9;
  if (param_12 < 0) {
    return;
  }
  goto joined_r0x007078a5;
}

