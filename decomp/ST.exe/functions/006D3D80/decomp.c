#include "../../pseudocode_runtime.h"


void FUN_006d3d80(int param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
                 int param_7,int param_8,byte *param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,int param_16,int param_17,int param_18,
                 int param_19,byte *param_20,byte *param_21)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
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
  byte *pbVar6;
  byte *pbVar13_mg0;

  iVar2 = param_18 / param_14;
  iVar3 = (int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3;
  if (param_20 != nullptr) {
    param_20 = param_20 + iVar3 * param_7 + (param_6 >> 3);
  }
  if (param_21 != nullptr) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_21 = param_21 + iVar3 * param_7 + (param_6 >> 3);
  }
  if (0 < (int)param_9) {
    local_20 = param_7;
    local_40 = param_9;
    pbVar12 = param_4;
    do {
      local_8 = param_20;
      local_10 = param_21;
      local_c = pbVar12 + (param_3 - (int)param_4);
      param_18 = (0x80 >> ((byte)param_6 & 7)) << 0x18;
      auto param_7_after_write = 0; /* compiler stack-slot lifetime split */
      local_14 = pbVar12;
      if (0 < param_8) {
        do {
          pbVar15 = (byte *)(param_7_after_write * param_14 + param_1);
          iVar4 = param_7_after_write;
          if (((param_3 == 0) || (param_10 == 0)) || (local_28 = (uint)*local_c, local_28 != 0)) {
            if (((param_4 != nullptr) && (param_12 != 0)) &&
               (((uint)*local_14 != param_13 - 1U &&
                ((param_21 == nullptr || ((*local_10 & STPiece<3,1>(param_18)) != 0)))))) {
              FUN_006dac70(pbVar15,param_2,*(byte **)(param_12 + (uint)*local_14 * 4),param_14,0,
                           param_14,param_15,0);
            }
            if ((((param_3 != 0) && (param_10 != 0)) && (local_28 != param_11 - 1U)) &&
               ((param_20 == nullptr || ((*local_8 & STPiece<3,1>(param_18)) != 0)))) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = *(byte **)(param_10 + local_28 * 4);
              if (param_16 == 0) {
                FUN_006dac70(pbVar15,param_2,param_9,param_14,0,param_14,param_15,0);
              }
              else {
                bVar8 = 0x80;
                pbVar7 = (byte *)((((param_6 + param_7_after_write) % iVar2) * param_14 -
                                  ((param_19 - (local_20 % (param_19 / param_15)) * param_15) + -1)
                                  * param_17) + param_16);
                if (0 < param_15) {
                  local_30 = param_15;
                  do {
                    pbVar13_mg0 = param_9;
                    local_34 = param_14;
                    if (0 < param_14) {
                      do {
                        if ((*pbVar13_mg0 & bVar8) != 0) {
                          *pbVar15 = *pbVar7;
                        }
                        pbVar15 = pbVar15 + 1;
                        pbVar7 = pbVar7 + 1;
                        bVar8 = bVar8 >> 1;
                        if (bVar8 == 0) {
                          pbVar13_mg0 = pbVar13_mg0 + 1;
                          bVar8 = 0x80;
                        }
                        local_34 = local_34 + -1;
                      } while (local_34 != 0);
                    }
                    param_9 = param_9 + ((int)(param_14 + 7 + (param_14 + 7 >> 0x1f & 7U)) >> 3);
                    pbVar15 = pbVar15 + (param_2 - param_14);
                    pbVar7 = pbVar7 + (param_17 - param_14);
                    local_30 = local_30 + -1;
                  } while (local_30 != 0);
                }
              }
            }
LAB_006d4180:
            bVar8 = STPiece<3,1>(param_18) >> 1;
            param_18 = (uint)bVar8 << 0x18;
            if (bVar8 == 0) {
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
              param_18 = -0x80000000;
            }
            local_c = local_c + 1;
            local_14 = local_14 + 1;
            param_7_after_write = iVar4 + 1;
          }
          else {
            iVar14 = 0;
            if (param_8 <= param_7_after_write) goto LAB_006d4180;
            do {
              local_28 = (uint)*local_c;
              if ((local_28 != 0) ||
                 ((param_20 != nullptr && ((*local_8 & STPiece<3,1>(param_18)) == 0)))) break;
              bVar8 = STPiece<3,1>(param_18) >> 1;
              param_18 = (uint)bVar8 << 0x18;
              if (bVar8 == 0) {
                local_8 = local_8 + 1;
                local_10 = local_10 + 1;
                param_18 = -0x80000000;
              }
              iVar14 = iVar14 + 1;
              local_c = local_c + 1;
              local_14 = local_14 + 1;
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_8);
            if (iVar14 == 0) goto LAB_006d4180;
            if (param_16 == 0) {
              param_7_after_write = iVar4;
              if (0 < param_15) {
                local_34 = param_15;
                do {
                  pbVar7 = pbVar15;
                  for (uVar10 = (uint)(iVar14 * param_14) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                    pbVar7[0] = 0;
                    pbVar7[1] = 0;
                    pbVar7[2] = 0;
                    pbVar7[3] = 0;
                    pbVar7 = pbVar7 + 4;
                  }
                  for (uVar10 = iVar14 * param_14 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                  }
                  pbVar15 = pbVar15 + param_2;
                  local_34 = local_34 + -1;
                } while (local_34 != 0);
              }
            }
            else {
              local_44 = (param_7_after_write + param_6) % iVar2;
              local_48 = local_44 * param_14;
              param_9 = pbVar15;
              while( true ) {
                pbVar15 = (byte *)((param_16 -
                                   ((param_19 - (local_20 % (param_19 / param_15)) * param_15) + -1)
                                   * param_17) + local_48);
                iVar9 = iVar14;
                if (iVar2 < local_44 + iVar14) {
                  iVar9 = iVar2 - local_44;
                }
                iVar14 = iVar14 - iVar9;
                local_44 = 0;
                local_48 = 0;
                if (param_14 == 8) {
                  if (0 < param_15) {
                    local_30 = param_15;
                    pbVar7 = param_9;
                    do {
                      if (0 < iVar9 * 2) {
                        pbVar5 = pbVar7 + 4;
                        uVar10 = iVar9 * 2 + 1U >> 1;
                        pbVar13 = pbVar15;
                        do {
                          uVar1 = *(undefined4 *)pbVar13;
                          pbVar13 = pbVar13 + 8;
                          *(undefined4 *)(pbVar5 + -4) = uVar1;
                          *(undefined4 *)pbVar5 =
                               *(undefined4 *)(pbVar5 + ((int)pbVar15 - (int)pbVar7));
                          pbVar5 = pbVar5 + 8;
                          uVar10 = uVar10 - 1;
                        } while (uVar10 != 0);
                      }
                      pbVar7 = pbVar7 + param_2;
                      pbVar15 = pbVar15 + param_17;
                      local_30 = local_30 + -1;
                    } while (local_30 != 0);
                  }
                  uVar10 = iVar9 << 3;
                }
                else {
                  uVar10 = iVar9 * param_14;
                  if (0 < param_15) {
                    local_30 = param_15;
                    pbVar6 = param_9;
                    do {
                      pbVar7 = pbVar15;
                      pbVar13 = pbVar6;
                      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar7;
                        pbVar7 = pbVar7 + 4;
                        pbVar13 = pbVar13 + 4;
                      }
                      pbVar6 = pbVar6 + param_2;
                      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *pbVar13 = *pbVar7;
                        pbVar7 = pbVar7 + 1;
                        pbVar13 = pbVar13 + 1;
                      }
                      pbVar15 = pbVar15 + param_17;
                      local_30 = local_30 + -1;
                    } while (local_30 != 0);
                  }
                }
                param_7_after_write = iVar4;
                if (iVar14 < 1) break;
                param_9 = param_9 + uVar10;
              }
            }
          }
        } while (param_7_after_write < param_8);
      }
      if (param_20 != nullptr) {
        param_20 = param_20 + iVar3;
      }
      if (param_21 != nullptr) {
        param_21 = param_21 + iVar3;
      }
      param_1 = param_1 + param_2 * param_15;
      pbVar12 = pbVar12 + param_5;
      local_20 = local_20 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != nullptr);
  }
  return;
}

