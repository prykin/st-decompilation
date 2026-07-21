
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00703160(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar5 = param_6;
  iVar8 = param_10;
  do {
    param_10 = iVar8 + -1;
    if (param_10 < 0) {
      return;
    }
    if (param_12 == 1) {
      param_10 = iVar8 + -2;
      if (param_10 < 0) {
        return;
      }
      uVar2 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar8 = param_7;
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
          if ((int)(iVar8 - uVar1) < 1) break;
          uVar2 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar8 = iVar8 - uVar1;
        }
      }
      param_12 = 2;
    }
    local_8 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    if (local_8 != 0) {
      param_6 = (byte *)param_8;
      while( true ) {
        while ((local_8 & 0x80) == 0) {
          uVar2 = local_8 & 0x7f;
          if ((int)param_6 < (int)uVar2) goto LAB_00703242;
          param_6 = param_6 + -uVar2;
          bVar7 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          local_8 = (uint)bVar7;
        }
        uVar2 = local_8 & 0x3f;
        if ((int)param_6 < (int)uVar2) break;
        if ((local_8 & 0x40) == 0) {
          param_6 = param_6 + -uVar2;
          local_8 = (uint)pbVar5[uVar2];
          pbVar5 = pbVar5 + uVar2 + 1;
        }
        else {
          param_6 = param_6 + -uVar2;
          local_8 = (uint)pbVar5[1];
          pbVar5 = pbVar5 + 2;
        }
      }
LAB_00703242:
      uVar2 = uVar2 - (int)param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar5 = pbVar5 + (int)param_6;
      }
      param_6 = (byte *)param_9;
      puVar4 = param_1;
      iVar8 = param_11;
      puVar10 = param_3;
      if ((int)uVar2 <= param_9) {
        do {
          local_c = local_8 & 0x80;
          param_6 = param_6 + -uVar2;
          if (local_c == 0) {
            if (-1 < (int)(uVar2 - 1)) {
              do {
                if (iVar8 != 1) {
                  puVar4 = puVar4 + 1;
                  puVar10 = puVar10 + 1;
                }
                iVar8 = iVar8 + 1;
                if (2 < iVar8) {
                  iVar8 = 0;
                }
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
            }
          }
          else if ((local_8 & 0x40) == 0) {
            puVar3 = puVar4;
            pbVar6 = pbVar5;
            puVar9 = puVar10;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                pbVar5 = pbVar5 + 1;
                iVar8 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_007033fc;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar5,*puVar4) + param_13);
              }
              puVar9 = puVar10 + 1;
              puVar3 = puVar4 + 1;
              pbVar6 = pbVar5 + 1;
              iVar8 = 0;
              uVar2 = uVar2 - 1;
            }
            for (; puVar4 = puVar3, pbVar5 = pbVar6, puVar10 = puVar9, 0 < (int)uVar2;
                uVar2 = uVar2 - 3) {
              if (param_5 <= *puVar9) {
                *puVar3 = *(undefined1 *)((uint)CONCAT11(*pbVar6,*puVar3) + param_13);
              }
              puVar10 = puVar9 + 1;
              puVar4 = puVar3 + 1;
              pbVar5 = pbVar6 + 1;
              iVar8 = 1;
              if ((int)(uVar2 - 1) < 1) break;
              pbVar5 = pbVar6 + 2;
              iVar8 = 2;
              if ((int)(uVar2 - 2) < 1) break;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar5,*puVar4) + param_13);
              }
              iVar8 = 0;
              puVar3 = puVar3 + 2;
              pbVar6 = pbVar6 + 3;
              puVar9 = puVar9 + 2;
            }
          }
          else {
            bVar7 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            puVar3 = puVar4;
            puVar9 = puVar10;
            if (0 < iVar8) {
              if (iVar8 == 1) {
                iVar8 = 2;
                uVar2 = uVar2 - 1;
              }
              if ((int)uVar2 < 1) goto LAB_007033fc;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
              }
              puVar9 = puVar10 + 1;
              puVar3 = puVar4 + 1;
              iVar8 = 0;
              uVar2 = uVar2 - 1;
            }
            for (; puVar4 = puVar3, puVar10 = puVar9, 0 < (int)uVar2; uVar2 = uVar2 - 3) {
              if (param_5 <= *puVar9) {
                *puVar3 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar3) + param_13);
              }
              puVar10 = puVar9 + 1;
              puVar4 = puVar3 + 1;
              iVar8 = 1;
              if (((int)(uVar2 - 1) < 1) || (iVar8 = 2, (int)(uVar2 - 2) < 1)) break;
              if (param_5 <= *puVar10) {
                *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
              }
              iVar8 = 0;
              puVar3 = puVar3 + 2;
              puVar9 = puVar9 + 2;
            }
          }
LAB_007033fc:
          if ((int)param_6 < 1) {
            uVar2 = 0;
            break;
          }
          bVar7 = *pbVar5;
          local_8 = (uint)bVar7;
          pbVar5 = pbVar5 + 1;
          if ((bVar7 & 0x80) == 0) {
            uVar2 = bVar7 & 0x7f;
          }
          else {
            uVar2 = bVar7 & 0x3f;
          }
        } while ((int)uVar2 <= (int)param_6);
      }
      uVar2 = uVar2 - (int)param_6;
      if ((0 < (int)param_6) && ((local_8 & 0x80) != 0)) {
        if ((local_8 & 0x40) == 0) {
          pbVar6 = pbVar5;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              pbVar5 = pbVar5 + 1;
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_007035be;
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar5,*puVar4) + param_13);
            }
            puVar10 = puVar10 + 1;
            puVar4 = puVar4 + 1;
            pbVar6 = pbVar5 + 1;
            param_6 = param_6 + -1;
          }
          for (; pbVar5 = pbVar6, 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(*pbVar6,*puVar4) + param_13);
            }
            pbVar5 = pbVar6 + 1;
            if (((int)(param_6 + -1) < 1) || (pbVar5 = pbVar6 + 2, (int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar10[1]) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              puVar4[1] = *(undefined1 *)((uint)CONCAT11(*pbVar5,puVar4[1]) + param_13);
            }
            puVar10 = puVar10 + 2;
            puVar4 = puVar4 + 2;
            pbVar6 = pbVar6 + 3;
          }
        }
        else {
          bVar7 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if (0 < iVar8) {
            if (iVar8 == 1) {
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_007035be;
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
            }
            puVar10 = puVar10 + 1;
            puVar4 = puVar4 + 1;
            param_6 = param_6 + -1;
          }
          for (; 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar10) {
              *puVar4 = *(undefined1 *)((uint)CONCAT11(bVar7,*puVar4) + param_13);
            }
            if (((int)(param_6 + -1) < 1) || ((int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar10[1]) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              puVar4[1] = *(undefined1 *)((uint)CONCAT11(bVar7,puVar4[1]) + param_13);
            }
            puVar10 = puVar10 + 2;
            puVar4 = puVar4 + 2;
          }
        }
      }
LAB_007035be:
      bVar7 = (byte)local_8;
      iVar8 = (param_7 - param_8) - param_9;
      if ((int)uVar2 < iVar8) {
        do {
          iVar8 = iVar8 - uVar2;
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
        } while ((int)uVar2 < iVar8);
      }
      if ((bVar7 & 0xc0) == 0x80) {
        pbVar5 = pbVar5 + iVar8;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    iVar8 = param_10;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

