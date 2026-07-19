
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00706e30(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,uint param_16)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_80 [31];
  
  _DAT_00857000 = 1;
  if ((2 < param_15) && (2 < (int)param_16)) {
    bVar1 = param_15 <= (int)(param_9 + 1);
    param_15 = param_9 + 1;
    if (bVar1) {
      param_15 = 3;
    }
    if ((int)param_16 <= param_15) {
      param_15 = 3;
    }
    param_16 = 0x1f;
    piVar11 = local_80;
    do {
      uVar2 = Library::MSVCRT::FUN_0072e6c0();
      uVar3 = Library::MSVCRT::FUN_0072e6c0();
      param_16 = param_16 - 1;
      *piVar11 = ((int)uVar3 % param_15) * param_2 + (int)uVar2 % param_15;
      piVar11 = piVar11 + 1;
    } while (param_16 != 0);
    iVar12 = 0;
    param_12 = param_12 + -1;
    if (-1 < param_12) {
LAB_00706ebf:
      if (param_14 == 1) {
        param_12 = param_12 + -1;
        if (param_12 < 0) {
          return;
        }
        uVar2 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar10 = param_7;
        if (uVar2 != 0) {
          while( true ) {
            if ((uVar2 & 0x80) == 0) {
              uVar3 = uVar2 & 0x7f;
            }
            else if ((uVar2 & 0x40) == 0) {
              param_6 = param_6 + (uVar2 & 0x3f);
              uVar3 = uVar2 & 0x3f;
            }
            else {
              param_6 = param_6 + 1;
              uVar3 = uVar2 & 0x3f;
            }
            if ((int)(iVar10 - uVar3) < 1) break;
            uVar2 = (uint)*param_6;
            param_6 = param_6 + 1;
            iVar10 = iVar10 - uVar3;
          }
        }
        param_14 = 2;
      }
      param_16 = (uint)*param_6;
      param_6 = param_6 + 1;
      if (param_16 != 0) {
        param_15 = param_8;
        do {
          if ((param_16 & 0x80) == 0) {
            uVar2 = param_16 & 0x7f;
            if (param_15 < (int)uVar2) goto LAB_00706f7b;
          }
          else {
            uVar2 = param_16 & 0x3f;
            if (param_15 < (int)uVar2) goto LAB_00706f7b;
            if ((param_16 & 0x40) == 0) {
              param_6 = param_6 + uVar2;
            }
            else {
              param_6 = param_6 + 1;
            }
          }
          param_15 = param_15 - uVar2;
          param_16 = (uint)*param_6;
          param_6 = param_6 + 1;
        } while( true );
      }
      goto LAB_007077cd;
    }
  }
  return;
LAB_00706f7b:
  uVar2 = uVar2 - param_15;
  if (((byte)param_16 & 0xc0) == 0x80) {
    param_6 = param_6 + param_15;
  }
  param_15 = param_11;
  if (param_10 == 0) {
    puVar5 = param_1;
    puVar7 = param_3;
    iVar10 = param_13;
    if ((int)uVar2 <= param_11) {
      do {
        param_9 = param_16 & 0x80;
        param_15 = param_15 - uVar2;
        if (param_9 == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (iVar10 != 1) {
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              iVar10 = iVar10 + 1;
              if (2 < iVar10) {
                iVar10 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
        }
        else if ((param_16 & 0x40) == 0) {
          puVar4 = puVar5;
          puVar6 = puVar7;
          pbVar9 = param_6;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              param_6 = param_6 + 1;
              uVar2 = uVar2 - 1;
              iVar10 = 2;
            }
            if ((int)uVar2 < 1) goto LAB_0070758b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            pbVar9 = param_6 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          for (; puVar5 = puVar4, puVar7 = puVar6, param_6 = pbVar9, 0 < (int)uVar2;
              uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = puVar4[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            param_6 = pbVar9 + 1;
            iVar10 = 1;
            if ((int)(uVar2 - 1) < 1) break;
            param_6 = pbVar9 + 2;
            iVar10 = 2;
            if ((int)(uVar2 - 2) < 1) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
            pbVar9 = pbVar9 + 3;
          }
        }
        else {
          param_6 = param_6 + 1;
          puVar4 = puVar5;
          puVar6 = puVar7;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              iVar10 = 2;
              uVar2 = uVar2 - 1;
            }
            if ((int)uVar2 < 1) goto LAB_0070758b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          for (; puVar5 = puVar4, puVar7 = puVar6, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = puVar4[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            iVar10 = 1;
            if (((int)(uVar2 - 1) < 1) || (iVar10 = 2, (int)(uVar2 - 2) < 1)) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = puVar5[*piVar11];
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
          }
        }
LAB_0070758b:
        if (param_15 < 1) {
          uVar2 = 0;
          break;
        }
        bVar8 = *param_6;
        param_16 = (uint)bVar8;
        param_6 = param_6 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar2 = bVar8 & 0x7f;
        }
        else {
          uVar2 = bVar8 & 0x3f;
        }
      } while ((int)uVar2 <= param_15);
    }
    uVar2 = uVar2 - param_15;
    if ((0 < param_15) && ((param_16 & 0x80) != 0)) {
      if ((param_16 & 0x40) == 0) {
        pbVar9 = param_6;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            param_6 = param_6 + 1;
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          pbVar9 = param_6 + 1;
          param_15 = param_15 + -1;
        }
        for (; param_6 = pbVar9, 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          param_6 = pbVar9 + 1;
          if ((param_15 + -1 < 1) || (param_6 = pbVar9 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = (puVar5 + 1)[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 3;
        }
      }
      else {
        param_6 = param_6 + 1;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          param_15 = param_15 + -1;
        }
        for (; 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = puVar5[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          if ((param_15 + -1 < 1) || (param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = (puVar5 + 1)[*piVar11];
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
        }
      }
    }
  }
  else {
    puVar5 = param_1;
    puVar7 = param_3;
    iVar10 = param_13;
    if ((int)uVar2 <= param_11) {
      do {
        param_9 = param_16 & 0x80;
        param_15 = param_15 - uVar2;
        if (param_9 == 0) {
          if (-1 < (int)(uVar2 - 1)) {
            do {
              if (iVar10 != 1) {
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              iVar10 = iVar10 + 1;
              if (2 < iVar10) {
                iVar10 = 0;
              }
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
        }
        else if ((param_16 & 0x40) == 0) {
          puVar4 = puVar5;
          puVar6 = puVar7;
          pbVar9 = param_6;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              param_6 = param_6 + 1;
              uVar2 = uVar2 - 1;
              iVar10 = 2;
            }
            if ((int)uVar2 < 1) goto LAB_0070719b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            pbVar9 = param_6 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          for (; puVar5 = puVar4, puVar7 = puVar6, param_6 = pbVar9, 0 < (int)uVar2;
              uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            param_6 = pbVar9 + 1;
            iVar10 = 1;
            if ((int)(uVar2 - 1) < 1) break;
            param_6 = pbVar9 + 2;
            iVar10 = 2;
            if ((int)(uVar2 - 2) < 1) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
            pbVar9 = pbVar9 + 3;
          }
        }
        else {
          param_6 = param_6 + 1;
          puVar4 = puVar5;
          puVar6 = puVar7;
          if (0 < iVar10) {
            if (iVar10 == 1) {
              iVar10 = 2;
              uVar2 = uVar2 - 1;
            }
            if ((int)uVar2 < 1) goto LAB_0070719b;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar6 = puVar7 + 1;
            puVar4 = puVar5 + 1;
            iVar10 = 0;
            uVar2 = uVar2 - 1;
          }
          for (; puVar5 = puVar4, puVar7 = puVar6, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
            if (param_5 <= *puVar6) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            puVar7 = puVar6 + 1;
            puVar5 = puVar4 + 1;
            iVar10 = 1;
            if (((int)(uVar2 - 1) < 1) || (iVar10 = 2, (int)(uVar2 - 2) < 1)) break;
            if (param_5 <= *puVar7) {
              piVar11 = local_80 + iVar12;
              iVar12 = iVar12 + 1;
              *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
              if (0x1e < iVar12) {
                iVar12 = 0;
              }
            }
            iVar10 = 0;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
          }
        }
LAB_0070719b:
        if (param_15 < 1) {
          uVar2 = 0;
          break;
        }
        bVar8 = *param_6;
        param_16 = (uint)bVar8;
        param_6 = param_6 + 1;
        if ((bVar8 & 0x80) == 0) {
          uVar2 = bVar8 & 0x7f;
        }
        else {
          uVar2 = bVar8 & 0x3f;
        }
      } while ((int)uVar2 <= param_15);
    }
    uVar2 = uVar2 - param_15;
    if ((0 < param_15) && ((param_16 & 0x80) != 0)) {
      if ((param_16 & 0x40) == 0) {
        pbVar9 = param_6;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            param_6 = param_6 + 1;
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          pbVar9 = param_6 + 1;
          param_15 = param_15 + -1;
        }
        for (; param_6 = pbVar9, 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          param_6 = pbVar9 + 1;
          if ((param_15 + -1 < 1) || (param_6 = pbVar9 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = *(undefined1 *)((uint)(byte)(puVar5 + 1)[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
          pbVar9 = pbVar9 + 3;
        }
      }
      else {
        param_6 = param_6 + 1;
        if (0 < iVar10) {
          if (iVar10 == 1) {
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          param_15 = param_15 + -1;
        }
        for (; 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar7) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            *puVar5 = *(undefined1 *)((uint)(byte)puVar5[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          if ((param_15 + -1 < 1) || (param_15 + -2 < 1)) break;
          if (param_5 <= puVar7[1]) {
            piVar11 = local_80 + iVar12;
            iVar12 = iVar12 + 1;
            puVar5[1] = *(undefined1 *)((uint)(byte)(puVar5 + 1)[*piVar11] + param_10);
            if (0x1e < iVar12) {
              iVar12 = 0;
            }
          }
          puVar7 = puVar7 + 2;
          puVar5 = puVar5 + 2;
        }
      }
    }
  }
cf_common_join_00707777:
  bVar8 = (byte)param_16;
  iVar10 = (param_7 - param_8) - param_11;
  if ((int)uVar2 < iVar10) {
    do {
      iVar10 = iVar10 - uVar2;
      if (((byte)param_16 & 0xc0) == 0x80) {
        param_6 = param_6 + uVar2;
      }
      bVar8 = *param_6;
      param_16 = (uint)bVar8;
      uVar2 = param_16;
      pbVar9 = param_6 + 1;
      if (((bVar8 & 0x80) != 0) && (uVar2 = param_16 & 0x3f, (bVar8 & 0x40) != 0)) {
        pbVar9 = param_6 + 2;
      }
      param_6 = pbVar9;
    } while ((int)uVar2 < iVar10);
  }
  if ((bVar8 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar10;
  }
LAB_007077cd:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_14 = param_14 + 1;
  if (2 < param_14) {
    param_14 = 0;
  }
  param_12 = param_12 + -1;
  if (param_12 < 0) {
    return;
  }
  goto LAB_00706ebf;
}

