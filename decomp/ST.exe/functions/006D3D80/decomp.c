
void FUN_006d3d80(int param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
                 int param_7,int param_8,byte *param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,int param_16,int param_17,int param_18,
                 int param_19,byte *param_20,byte *param_21)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  int local_48;
  int local_44;
  byte *local_40;
  int local_34;
  int local_30;
  uint local_28;
  int local_20;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  byte *local_8;

  iVar2 = param_18 / param_14;
  iVar3 = (int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3;
  if (param_20 != (byte *)0x0) {
    param_20 = param_20 + iVar3 * param_7 + (param_6 >> 3);
  }
  if (param_21 != (byte *)0x0) {
    param_21 = param_21 + iVar3 * param_7 + (param_6 >> 3);
  }
  if (0 < (int)param_9) {
    local_20 = param_7;
    local_40 = param_9;
    pbVar11 = param_4;
    do {
      local_8 = param_20;
      local_10 = param_21;
      local_c = pbVar11 + (param_3 - (int)param_4);
      param_18 = (0x80 >> ((byte)param_6 & 7)) << 0x18;
      param_7 = 0;
      local_14 = pbVar11;
      if (0 < param_8) {
        do {
          pbVar14 = (byte *)(param_7 * param_14 + param_1);
          iVar4 = param_7;
          if (((param_3 == 0) || (param_10 == 0)) || (local_28 = (uint)*local_c, local_28 != 0)) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if (((param_4 != (byte *)0x0) && (param_12 != 0)) &&
               (((uint)*local_14 != param_13 - 1U &&
                ((param_21 == (byte *)0x0 || ((*local_10 & param_18._3_1_) != 0)))))) {
              FUN_006dac70(pbVar14,param_2,*(byte **)(param_12 + (uint)*local_14 * 4),param_14,0,
                           param_14,param_15,0);
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((((param_3 != 0) && (param_10 != 0)) && (local_28 != param_11 - 1U)) &&
               ((param_20 == (byte *)0x0 || ((*local_8 & param_18._3_1_) != 0)))) {
              param_9 = *(byte **)(param_10 + local_28 * 4);
              if (param_16 == 0) {
                FUN_006dac70(pbVar14,param_2,param_9,param_14,0,param_14,param_15,0);
              }
              else {
                bVar7 = 0x80;
                pbVar6 = (byte *)((((param_6 + param_7) % iVar2) * param_14 -
                                  ((param_19 - (local_20 % (param_19 / param_15)) * param_15) + -1)
                                  * param_17) + param_16);
                if (0 < param_15) {
                  local_30 = param_15;
                  do {
                    pbVar12 = param_9;
                    local_34 = param_14;
                    if (0 < param_14) {
                      do {
                        if ((*pbVar12 & bVar7) != 0) {
                          *pbVar14 = *pbVar6;
                        }
                        pbVar14 = pbVar14 + 1;
                        pbVar6 = pbVar6 + 1;
                        bVar7 = bVar7 >> 1;
                        if (bVar7 == 0) {
                          pbVar12 = pbVar12 + 1;
                          bVar7 = 0x80;
                        }
                        local_34 = local_34 + -1;
                      } while (local_34 != 0);
                    }
                    param_9 = param_9 + ((int)(param_14 + 7 + (param_14 + 7 >> 0x1f & 7U)) >> 3);
                    pbVar14 = pbVar14 + (param_2 - param_14);
                    pbVar6 = pbVar6 + (param_17 - param_14);
                    local_30 = local_30 + -1;
                  } while (local_30 != 0);
                }
              }
            }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_006d4180:
            bVar7 = param_18._3_1_ >> 1;
            param_18 = (uint)bVar7 << 0x18;
            if (bVar7 == 0) {
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
              param_18 = -0x80000000;
            }
            local_c = local_c + 1;
            local_14 = local_14 + 1;
            param_7 = iVar4 + 1;
          }
          else {
            iVar13 = 0;
            if (param_8 <= param_7) goto LAB_006d4180;
            do {
              local_28 = (uint)*local_c;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((local_28 != 0) ||
                 ((param_20 != (byte *)0x0 && ((*local_8 & param_18._3_1_) == 0)))) break;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              bVar7 = param_18._3_1_ >> 1;
              param_18 = (uint)bVar7 << 0x18;
              if (bVar7 == 0) {
                local_8 = local_8 + 1;
                local_10 = local_10 + 1;
                param_18 = -0x80000000;
              }
              iVar13 = iVar13 + 1;
              local_c = local_c + 1;
              local_14 = local_14 + 1;
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_8);
            if (iVar13 == 0) goto LAB_006d4180;
            if (param_16 == 0) {
              param_7 = iVar4;
              if (0 < param_15) {
                local_34 = param_15;
                do {
                  pbVar6 = pbVar14;
                  for (uVar9 = (uint)(iVar13 * param_14) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    pbVar6[0] = 0;
                    pbVar6[1] = 0;
                    pbVar6[2] = 0;
                    pbVar6[3] = 0;
                    pbVar6 = pbVar6 + 4;
                  }
                  for (uVar9 = iVar13 * param_14 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *pbVar6 = 0;
                    pbVar6 = pbVar6 + 1;
                  }
                  pbVar14 = pbVar14 + param_2;
                  local_34 = local_34 + -1;
                } while (local_34 != 0);
              }
            }
            else {
              local_44 = (param_7 + param_6) % iVar2;
              local_48 = local_44 * param_14;
              param_9 = pbVar14;
              while( true ) {
                pbVar14 = (byte *)((param_16 -
                                   ((param_19 - (local_20 % (param_19 / param_15)) * param_15) + -1)
                                   * param_17) + local_48);
                iVar8 = iVar13;
                if (iVar2 < local_44 + iVar13) {
                  iVar8 = iVar2 - local_44;
                }
                iVar13 = iVar13 - iVar8;
                local_44 = 0;
                local_48 = 0;
                if (param_14 == 8) {
                  if (0 < param_15) {
                    local_30 = param_15;
                    pbVar6 = param_9;
                    do {
                      if (0 < iVar8 * 2) {
                        pbVar5 = pbVar6 + 4;
                        uVar9 = iVar8 * 2 + 1U >> 1;
                        pbVar12 = pbVar14;
                        do {
                          uVar1 = *(undefined4 *)pbVar12;
                          pbVar12 = pbVar12 + 8;
                          *(undefined4 *)(pbVar5 + -4) = uVar1;
                          *(undefined4 *)pbVar5 =
                               *(undefined4 *)(pbVar5 + ((int)pbVar14 - (int)pbVar6));
                          pbVar5 = pbVar5 + 8;
                          uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                      }
                      pbVar6 = pbVar6 + param_2;
                      pbVar14 = pbVar14 + param_17;
                      local_30 = local_30 + -1;
                    } while (local_30 != 0);
                  }
                  uVar9 = iVar8 << 3;
                }
                else {
                  uVar9 = iVar8 * param_14;
                  if (0 < param_15) {
                    local_30 = param_15;
                    pbVar6 = param_9;
                    do {
                      pbVar12 = pbVar14;
                      pbVar5 = pbVar6;
                      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                        *(undefined4 *)pbVar5 = *(undefined4 *)pbVar12;
                        pbVar12 = pbVar12 + 4;
                        pbVar5 = pbVar5 + 4;
                      }
                      pbVar6 = pbVar6 + param_2;
                      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                        *pbVar5 = *pbVar12;
                        pbVar12 = pbVar12 + 1;
                        pbVar5 = pbVar5 + 1;
                      }
                      pbVar14 = pbVar14 + param_17;
                      local_30 = local_30 + -1;
                    } while (local_30 != 0);
                  }
                }
                param_7 = iVar4;
                if (iVar13 < 1) break;
                param_9 = param_9 + uVar9;
              }
            }
          }
        } while (param_7 < param_8);
      }
      if (param_20 != (byte *)0x0) {
        param_20 = param_20 + iVar3;
      }
      if (param_21 != (byte *)0x0) {
        param_21 = param_21 + iVar3;
      }
      param_1 = param_1 + param_2 * param_15;
      pbVar11 = pbVar11 + param_5;
      local_20 = local_20 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != (byte *)0x0);
  }
  return;
}

