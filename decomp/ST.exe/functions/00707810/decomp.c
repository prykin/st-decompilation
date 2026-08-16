#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00707810(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12,int param_13,uint param_14,int param_15,uint param_16)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  byte *pbVar9;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  int iVar15;
  int local_80 [31];

  _DAT_00857000 = 1;
  if ((2 < param_15) && (2 < (int)param_16)) {
    bVar2 = param_15 <= (int)(param_9 + 1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_9 + 1;
    if (bVar2) {
      param_15 = 3;
    }
    if ((int)param_16 <= param_15) {
      param_15 = 3;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_16 = 0x1f;
    piVar14 = local_80;
    do {
      uVar3 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      param_16 = param_16 - 1;
      *piVar14 = ((int)uVar4 % param_15) * param_2 + (int)uVar3 % param_15;
      piVar14 = piVar14 + 1;
    } while (param_16 != 0);
    iVar15 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + -1;
    pbVar9 = param_6;
    if (-1 < param_12) {
joined_r0x007078a5:
      while (((param_14 & 1) == 0 && (param_12 = param_12 + -1, -1 < param_12))) {
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar8 = param_7;
        if (uVar6 != 0) {
          while( true ) {
            if ((uVar6 & 0x80) == 0) {
              uVar5 = uVar6 & 0x7f;
            }
            else if ((uVar6 & 0x40) == 0) {
              pbVar9 = pbVar9 + (uVar6 & 0x3f);
              uVar5 = uVar6 & 0x3f;
            }
            else {
              pbVar9 = pbVar9 + 1;
              uVar5 = uVar6 & 0x3f;
            }
            if ((int)(iVar8 - uVar5) < 1) break;
            uVar6 = (uint)*pbVar9;
            pbVar9 = pbVar9 + 1;
            iVar8 = iVar8 - uVar5;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_14 = param_14 + 1;
        if (4 < (int)param_14) {
          param_14 = 0;
        }
      }
      param_16 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
      if (param_16 != 0) {
        param_15 = param_8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = pbVar9;
        do {
          if ((param_16 & 0x80) == 0) {
            uVar6 = param_16 & 0x7f;
            if (param_15 < (int)uVar6) goto LAB_0070795e;
          }
          else {
            uVar6 = param_16 & 0x3f;
            if (param_15 < (int)uVar6) goto LAB_0070795e;
            if ((param_16 & 0x40) == 0) {
              param_6 = param_6 + uVar6;
            }
            else {
              param_6 = param_6 + 1;
            }
          }
          param_15 = param_15 - uVar6;
          param_16 = (uint)*param_6;
          param_6 = param_6 + 1;
        } while( true );
      }
      goto LAB_00707e8a;
    }
  }
  return;
LAB_0070795e:
  uVar6 = uVar6 - param_15;
  if (((byte)param_16 & 0xc0) == 0x80) {
    param_6 = param_6 + param_15;
  }
  param_15 = param_11;
  if (param_10 == 0) {
    iVar8 = param_13;
    puVar10 = param_3;
    puVar12 = param_1;
    if ((int)uVar6 <= param_11) {
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = param_16 & 0x80;
        param_15 = param_15 - uVar6;
        if (param_9 == 0) {
          if (-1 < (int)(uVar6 - 1)) {
            do {
              if (((byte)iVar8 & 1) == 1) {
                puVar12 = puVar12 + 1;
                puVar10 = puVar10 + 1;
              }
              iVar8 = iVar8 + 1;
              if (4 < iVar8) {
                iVar8 = 0;
              }
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          goto LAB_00708302;
        }
        if ((param_16 & 0x40) == 0) {
          if (iVar8 < 1) {
switchD_0070819b_default:
            if (0 < (int)uVar6) {
              pbVar11 = param_6 + 1;
              puVar9 = puVar10;
              puVar13 = puVar12;
              for (iVar7 = uVar6 - 1; iVar8 = 1, puVar10 = puVar9, puVar12 = puVar13,
                  param_6 = pbVar11, 0 < iVar7; iVar7 = iVar7 + -5) {
                if (param_5 <= *puVar9) {
                  piVar14 = local_80 + iVar15;
                  iVar15 = iVar15 + 1;
                  *puVar13 = puVar13[*piVar14];
                  if (0x1e < iVar15) {
                    iVar15 = 0;
                  }
                }
                puVar10 = puVar9 + 1;
                puVar12 = puVar13 + 1;
                param_6 = pbVar11 + 1;
                iVar8 = 2;
                if (iVar7 + -1 < 1) break;
                param_6 = pbVar11 + 2;
                iVar8 = 3;
                if (iVar7 + -2 < 1) break;
                if (param_5 <= *puVar10) {
                  piVar14 = local_80 + iVar15;
                  iVar15 = iVar15 + 1;
                  *puVar12 = puVar12[*piVar14];
                  if (0x1e < iVar15) {
                    iVar15 = 0;
                  }
                }
                puVar10 = puVar9 + 2;
                puVar12 = puVar13 + 2;
                param_6 = pbVar11 + 3;
                iVar8 = 4;
                if (iVar7 + -3 < 1) break;
                param_6 = pbVar11 + 4;
                iVar8 = 0;
                if (iVar7 + -4 < 1) break;
                pbVar11 = pbVar11 + 5;
                puVar9 = puVar10;
                puVar13 = puVar12;
              }
            }
          }
          else {
            switch(iVar8) {
            case 1:
              if (param_5 <= *puVar10) {
                piVar14 = local_80 + iVar15;
                iVar15 = iVar15 + 1;
                *puVar12 = puVar12[*piVar14];
                if (0x1e < iVar15) {
                  iVar15 = 0;
                }
              }
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
              param_6 = param_6 + 1;
              uVar6 = uVar6 - 1;
              iVar8 = 2;
              if ((int)uVar6 < 1) goto LAB_00708302;
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
            uVar6 = uVar6 - 1;
            iVar8 = 3;
            if (0 < (int)uVar6) {
switchD_0070819b_caseD_3:
              if (param_5 <= *puVar10) {
                piVar14 = local_80 + iVar15;
                iVar15 = iVar15 + 1;
                *puVar12 = puVar12[*piVar14];
                if (0x1e < iVar15) {
                  iVar15 = 0;
                }
              }
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
              param_6 = param_6 + 1;
              uVar6 = uVar6 - 1;
              iVar8 = 4;
              if (0 < (int)uVar6) {
switchD_0070819b_caseD_4:
                param_6 = param_6 + 1;
                iVar8 = 0;
                uVar6 = uVar6 - 1;
                goto switchD_0070819b_default;
              }
            }
          }
        }
        else {
          param_6 = param_6 + 1;
          puVar9 = puVar10;
          puVar13 = puVar12;
          if (iVar8 < 1) {
switchD_00708078_default:
            puVar10 = puVar9;
            puVar12 = puVar13;
            if (0 < (int)uVar6) {
              iVar7 = uVar6 - 1;
              iVar8 = 1;
              if (0 < iVar7) {
                while( true ) {
                  if (param_5 <= *puVar9) {
                    piVar14 = local_80 + iVar15;
                    iVar15 = iVar15 + 1;
                    *puVar13 = puVar13[*piVar14];
                    if (0x1e < iVar15) {
                      iVar15 = 0;
                    }
                  }
                  puVar10 = puVar9 + 1;
                  puVar12 = puVar13 + 1;
                  iVar8 = 2;
                  if ((iVar7 + -1 < 1) || (iVar8 = 3, iVar7 + -2 < 1)) break;
                  if (param_5 <= *puVar10) {
                    piVar14 = local_80 + iVar15;
                    iVar15 = iVar15 + 1;
                    *puVar12 = puVar12[*piVar14];
                    if (0x1e < iVar15) {
                      iVar15 = 0;
                    }
                  }
                  puVar10 = puVar9 + 2;
                  puVar12 = puVar13 + 2;
                  iVar8 = 4;
                  if ((iVar7 + -3 < 1) || (iVar8 = 0, iVar7 + -4 < 1)) break;
                  iVar7 = iVar7 + -5;
                  iVar8 = 1;
                  puVar9 = puVar10;
                  puVar13 = puVar12;
                  if (iVar7 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar8) {
            case 1:
              if (param_5 <= *puVar10) {
                piVar14 = local_80 + iVar15;
                iVar15 = iVar15 + 1;
                *puVar12 = puVar12[*piVar14];
                if (0x1e < iVar15) {
                  iVar15 = 0;
                }
              }
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
              uVar6 = uVar6 - 1;
              iVar8 = 2;
              if ((int)uVar6 < 1) goto LAB_00708302;
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
            uVar6 = uVar6 - 1;
            iVar8 = 3;
            if (0 < (int)uVar6) {
switchD_00708078_caseD_3:
              if (param_5 <= *puVar10) {
                piVar14 = local_80 + iVar15;
                iVar15 = iVar15 + 1;
                *puVar12 = puVar12[*piVar14];
                if (0x1e < iVar15) {
                  iVar15 = 0;
                }
              }
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
              uVar6 = uVar6 - 1;
              iVar8 = 4;
              if (0 < (int)uVar6) {
switchD_00708078_caseD_4:
                iVar8 = 0;
                uVar6 = uVar6 - 1;
                puVar9 = puVar10;
                puVar13 = puVar12;
                goto switchD_00708078_default;
              }
            }
          }
        }
LAB_00708302:
        if (param_15 < 1) {
          uVar6 = 0;
          break;
        }
        bVar1 = *param_6;
        param_16 = (uint)bVar1;
        param_6 = param_6 + 1;
        if ((bVar1 & 0x80) == 0) {
          uVar6 = bVar1 & 0x7f;
        }
        else {
          uVar6 = bVar1 & 0x3f;
        }
      } while ((int)uVar6 <= param_15);
    }
    uVar6 = uVar6 - param_15;
    pbVar9 = param_6;
    if ((param_15 < 1) || ((param_16 & 0x80) == 0)) goto cf_common_join_00707E36;
    if ((param_16 & 0x40) == 0) {
      if (iVar8 < 1) goto switchD_00708491_default;
      switch(iVar8) {
      case 1:
        if (param_5 <= *puVar10) {
          piVar14 = local_80 + iVar15;
          iVar15 = iVar15 + 1;
          *puVar12 = puVar12[*piVar14];
          if (0x1e < iVar15) {
            iVar15 = 0;
          }
        }
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
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
        if (param_5 <= *puVar10) {
          piVar14 = local_80 + iVar15;
          iVar15 = iVar15 + 1;
          *puVar12 = puVar12[*piVar14];
          if (0x1e < iVar15) {
            iVar15 = 0;
          }
        }
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
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
            if (param_5 <= *puVar10) {
              piVar14 = local_80 + iVar15;
              iVar15 = iVar15 + 1;
              *puVar12 = puVar12[*piVar14];
              if (0x1e < iVar15) {
                iVar15 = 0;
              }
            }
            pbVar9 = param_6 + 1;
            if ((param_15 + -1 < 1) || (pbVar9 = param_6 + 2, param_15 + -2 < 1)) break;
            if (param_5 <= puVar10[1]) {
              piVar14 = local_80 + iVar15;
              iVar15 = iVar15 + 1;
              puVar12[1] = (puVar12 + 1)[*piVar14];
              if (0x1e < iVar15) {
                iVar15 = 0;
              }
            }
            puVar10 = puVar10 + 2;
            puVar12 = puVar12 + 2;
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
    if (iVar8 < 1) goto switchD_0070837c_default;
    switch(iVar8) {
    case 1:
      if (param_5 <= *puVar10) {
        piVar14 = local_80 + iVar15;
        iVar15 = iVar15 + 1;
        *puVar12 = puVar12[*piVar14];
        if (0x1e < iVar15) {
          iVar15 = 0;
        }
      }
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
      param_15 = param_15 + -1;
      if (param_15 < 1) goto cf_common_join_00707E36;
      goto LAB_007083b3;
    case 2:
LAB_007083b3:
      param_15 = param_15 + -1;
      if (param_15 < 1) goto cf_common_join_00707E36;
switchD_0070837c_caseD_3:
      if (param_5 <= *puVar10) {
        piVar14 = local_80 + iVar15;
        iVar15 = iVar15 + 1;
        *puVar12 = puVar12[*piVar14];
        if (0x1e < iVar15) {
          iVar15 = 0;
        }
      }
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
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
        if (param_5 <= *puVar10) {
          piVar14 = local_80 + iVar15;
          iVar15 = iVar15 + 1;
          *puVar12 = puVar12[*piVar14];
          if (0x1e < iVar15) {
            iVar15 = 0;
          }
        }
        if (param_15 + -2 < 1) break;
        if (param_5 <= puVar10[1]) {
          piVar14 = local_80 + iVar15;
          iVar15 = iVar15 + 1;
          puVar12[1] = (puVar12 + 1)[*piVar14];
          if (0x1e < iVar15) {
            iVar15 = 0;
          }
        }
        puVar10 = puVar10 + 2;
        puVar12 = puVar12 + 2;
        if ((param_15 + -4 < 1) || (param_15 = param_15 + -5, param_15 < 1)) break;
      }
    }
    goto cf_common_join_00707E36;
  }
  iVar8 = param_13;
  puVar10 = param_3;
  puVar12 = param_1;
  if ((int)uVar6 <= param_11) {
    do {
      param_9 = param_16 & 0x80;
      param_15 = param_15 - uVar6;
      if (param_9 == 0) {
        if (-1 < (int)(uVar6 - 1)) {
          do {
            if (((byte)iVar8 & 1) == 1) {
              puVar12 = puVar12 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar8 = iVar8 + 1;
            if (4 < iVar8) {
              iVar8 = 0;
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        goto LAB_00707ca8;
      }
      if ((param_16 & 0x40) == 0) {
        if (iVar8 < 1) {
switchD_00707b1e_default:
          if (0 < (int)uVar6) {
            pbVar11 = param_6 + 1;
            puVar9 = puVar10;
            puVar13 = puVar12;
            for (iVar7 = uVar6 - 1; iVar8 = 1, puVar10 = puVar9, puVar12 = puVar13,
                param_6 = pbVar11, 0 < iVar7; iVar7 = iVar7 + -5) {
              if (param_5 <= *puVar9) {
                piVar14 = local_80 + iVar15;
                iVar15 = iVar15 + 1;
                *puVar13 = *(undefined1 *)((uint)(byte)puVar13[*piVar14] + param_10);
                if (0x1e < iVar15) {
                  iVar15 = 0;
                }
              }
              puVar10 = puVar9 + 1;
              puVar12 = puVar13 + 1;
              param_6 = pbVar11 + 1;
              iVar8 = 2;
              if (iVar7 + -1 < 1) break;
              param_6 = pbVar11 + 2;
              iVar8 = 3;
              if (iVar7 + -2 < 1) break;
              if (param_5 <= *puVar10) {
                piVar14 = local_80 + iVar15;
                iVar15 = iVar15 + 1;
                *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
                if (0x1e < iVar15) {
                  iVar15 = 0;
                }
              }
              puVar10 = puVar9 + 2;
              puVar12 = puVar13 + 2;
              param_6 = pbVar11 + 3;
              iVar8 = 4;
              if (iVar7 + -3 < 1) break;
              param_6 = pbVar11 + 4;
              iVar8 = 0;
              if (iVar7 + -4 < 1) break;
              pbVar11 = pbVar11 + 5;
              puVar9 = puVar10;
              puVar13 = puVar12;
            }
          }
        }
        else {
          switch(iVar8) {
          case 1:
            if (param_5 <= *puVar10) {
              piVar14 = local_80 + iVar15;
              iVar15 = iVar15 + 1;
              *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
              if (0x1e < iVar15) {
                iVar15 = 0;
              }
            }
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            param_6 = param_6 + 1;
            uVar6 = uVar6 - 1;
            iVar8 = 2;
            if ((int)uVar6 < 1) goto LAB_00707ca8;
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
          uVar6 = uVar6 - 1;
          iVar8 = 3;
          if (0 < (int)uVar6) {
switchD_00707b1e_caseD_3:
            if (param_5 <= *puVar10) {
              piVar14 = local_80 + iVar15;
              iVar15 = iVar15 + 1;
              *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
              if (0x1e < iVar15) {
                iVar15 = 0;
              }
            }
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            param_6 = param_6 + 1;
            uVar6 = uVar6 - 1;
            iVar8 = 4;
            if (0 < (int)uVar6) {
switchD_00707b1e_caseD_4:
              param_6 = param_6 + 1;
              iVar8 = 0;
              uVar6 = uVar6 - 1;
              goto switchD_00707b1e_default;
            }
          }
        }
      }
      else {
        param_6 = param_6 + 1;
        if (iVar8 < 1) {
switchD_007079d4_default:
          if (0 < (int)uVar6) {
            iVar7 = uVar6 - 1;
            iVar8 = 1;
            puVar9 = puVar10;
            puVar13 = puVar12;
            if (0 < iVar7) {
              while( true ) {
                if (param_5 <= *puVar9) {
                  piVar14 = local_80 + iVar15;
                  iVar15 = iVar15 + 1;
                  *puVar13 = *(undefined1 *)((uint)(byte)puVar13[*piVar14] + param_10);
                  if (0x1e < iVar15) {
                    iVar15 = 0;
                  }
                }
                puVar10 = puVar9 + 1;
                puVar12 = puVar13 + 1;
                iVar8 = 2;
                if ((iVar7 + -1 < 1) || (iVar8 = 3, iVar7 + -2 < 1)) break;
                if (param_5 <= *puVar10) {
                  piVar14 = local_80 + iVar15;
                  iVar15 = iVar15 + 1;
                  *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
                  if (0x1e < iVar15) {
                    iVar15 = 0;
                  }
                }
                puVar10 = puVar9 + 2;
                puVar12 = puVar13 + 2;
                iVar8 = 4;
                if ((iVar7 + -3 < 1) || (iVar8 = 0, iVar7 + -4 < 1)) break;
                iVar7 = iVar7 + -5;
                iVar8 = 1;
                puVar9 = puVar10;
                puVar13 = puVar12;
                if (iVar7 < 1) break;
              }
            }
          }
        }
        else {
          switch(iVar8) {
          case 1:
            if (param_5 <= *puVar10) {
              piVar14 = local_80 + iVar15;
              iVar15 = iVar15 + 1;
              *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
              if (0x1e < iVar15) {
                iVar15 = 0;
              }
            }
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            uVar6 = uVar6 - 1;
            iVar8 = 2;
            if ((int)uVar6 < 1) goto LAB_00707ca8;
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
          uVar6 = uVar6 - 1;
          iVar8 = 3;
          if (0 < (int)uVar6) {
switchD_007079d4_caseD_3:
            if (param_5 <= *puVar10) {
              piVar14 = local_80 + iVar15;
              iVar15 = iVar15 + 1;
              *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
              if (0x1e < iVar15) {
                iVar15 = 0;
              }
            }
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            uVar6 = uVar6 - 1;
            iVar8 = 4;
            if (0 < (int)uVar6) {
switchD_007079d4_caseD_4:
              iVar8 = 0;
              uVar6 = uVar6 - 1;
              goto switchD_007079d4_default;
            }
          }
        }
      }
LAB_00707ca8:
      if (param_15 < 1) {
        uVar6 = 0;
        break;
      }
      bVar1 = *param_6;
      param_16 = (uint)bVar1;
      param_6 = param_6 + 1;
      if ((bVar1 & 0x80) == 0) {
        uVar6 = bVar1 & 0x7f;
      }
      else {
        uVar6 = bVar1 & 0x3f;
      }
    } while ((int)uVar6 <= param_15);
  }
  uVar6 = uVar6 - param_15;
  pbVar9 = param_6;
  if ((param_15 < 1) || ((param_16 & 0x80) == 0)) goto cf_common_join_00707E36;
  if ((param_16 & 0x40) == 0) {
    if (iVar8 < 1) goto switchD_00707ed6_default;
    switch(iVar8) {
    case 1:
      if (param_5 <= *puVar10) {
        piVar14 = local_80 + iVar15;
        iVar15 = iVar15 + 1;
        *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
        if (0x1e < iVar15) {
          iVar15 = 0;
        }
      }
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
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
      if (param_5 <= *puVar10) {
        piVar14 = local_80 + iVar15;
        iVar15 = iVar15 + 1;
        *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
        if (0x1e < iVar15) {
          iVar15 = 0;
        }
      }
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
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
          if (param_5 <= *puVar10) {
            piVar14 = local_80 + iVar15;
            iVar15 = iVar15 + 1;
            *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
            if (0x1e < iVar15) {
              iVar15 = 0;
            }
          }
          pbVar9 = param_6 + 1;
          if ((param_15 + -1 < 1) || (pbVar9 = param_6 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar10[1]) {
            piVar14 = local_80 + iVar15;
            iVar15 = iVar15 + 1;
            puVar12[1] = *(undefined1 *)((uint)(byte)(puVar12 + 1)[*piVar14] + param_10);
            if (0x1e < iVar15) {
              iVar15 = 0;
            }
          }
          puVar10 = puVar10 + 2;
          puVar12 = puVar12 + 2;
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
  if (iVar8 < 1) goto switchD_00707d22_default;
  switch(iVar8) {
  case 1:
    if (param_5 <= *puVar10) {
      piVar14 = local_80 + iVar15;
      iVar15 = iVar15 + 1;
      *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
      if (0x1e < iVar15) {
        iVar15 = 0;
      }
    }
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
    param_15 = param_15 + -1;
    if (param_15 < 1) goto cf_common_join_00707E36;
    goto LAB_00707d61;
  case 2:
LAB_00707d61:
    param_15 = param_15 + -1;
    if (param_15 < 1) goto cf_common_join_00707E36;
switchD_00707d22_caseD_3:
    if (param_5 <= *puVar10) {
      piVar14 = local_80 + iVar15;
      iVar15 = iVar15 + 1;
      *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
      if (0x1e < iVar15) {
        iVar15 = 0;
      }
    }
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
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
      if (param_5 <= *puVar10) {
        piVar14 = local_80 + iVar15;
        iVar15 = iVar15 + 1;
        *puVar12 = *(undefined1 *)((uint)(byte)puVar12[*piVar14] + param_10);
        if (0x1e < iVar15) {
          iVar15 = 0;
        }
      }
      if (param_15 + -2 < 1) break;
      if (param_5 <= puVar10[1]) {
        piVar14 = local_80 + iVar15;
        iVar15 = iVar15 + 1;
        puVar12[1] = *(undefined1 *)((uint)(byte)(puVar12 + 1)[*piVar14] + param_10);
        if (0x1e < iVar15) {
          iVar15 = 0;
        }
      }
      puVar10 = puVar10 + 2;
      puVar12 = puVar12 + 2;
      if ((param_15 + -4 < 1) || (param_15 = param_15 + -5, param_15 < 1)) break;
    }
  }
cf_common_join_00707E36:
  iVar8 = (param_7 - param_8) - param_11;
  bVar1 = (byte)param_16;
  if ((int)uVar6 < iVar8) {
    do {
      iVar8 = iVar8 - uVar6;
      pbVar11 = pbVar9;
      if (((byte)param_16 & 0xc0) == 0x80) {
        pbVar11 = pbVar9 + uVar6;
      }
      bVar1 = *pbVar11;
      param_16 = (uint)bVar1;
      pbVar9 = pbVar11 + 1;
      uVar6 = param_16;
      if (((bVar1 & 0x80) != 0) && (uVar6 = param_16 & 0x3f, (bVar1 & 0x40) != 0)) {
        pbVar9 = pbVar11 + 2;
      }
    } while ((int)uVar6 < iVar8);
  }
  STPiece<0,1>(param_16) = bVar1;
  if (((byte)param_16 & 0xc0) == 0x80) {
    pbVar9 = pbVar9 + iVar8;
  }
LAB_00707e8a:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_14 = param_14 + 1;
  if (4 < (int)param_14) {
    param_14 = 0;
  }
  param_12 = param_12 + -1;
  if (param_12 < 0) {
    return;
  }
  goto joined_r0x007078a5;
}

