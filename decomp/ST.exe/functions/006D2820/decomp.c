#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006B84D0 -> 006D2820 @ 006B85C2

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void FUN_006d2820(byte *param_1,RecoveredSourceFamily_dibcopy *param_2,byte *param_3,int param_4,
                 uint param_5,uint param_6,uint param_7,int param_8,byte *param_9,int param_10,
                 uint param_11,byte *param_12)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12_mg5;
  byte *pbVar12;
  uint local_c;
  byte *temp_3f0f81c0fe;
  byte *pbVar9;
  byte *pbVar12_mg0;
  byte *pbVar12_mg4;
  byte *pbVar12_mg3;

  if (param_9 != nullptr) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + param_10 * (int)param_12 + ((int)param_11 >> 3);
  }
  if ((int)param_5 < 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_3 + (param_3[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    param_12 = FUN_006cfe10(param_3,param_5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = (uint)*(short *)(param_3 + 0x12);
  bVar7 = (byte)param_11;
  if (param_6 == uVar3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_8 == 0) {
      if (param_9 != nullptr) {
        FUN_006da660(param_1,param_2,(char *)param_12,param_9,param_10,param_11 & 7,param_6,param_7);
        return;
      }
      FUN_006d25e0(param_1,(int)param_2,param_12,param_6,param_7);
      return;
    }
    if (param_9 == nullptr) {
      if (-1 < (int)(param_7 - 1)) {
        param_9 = (byte *)param_7;
        do {
          uVar6 = (uint)*param_12;
          param_12 = param_12 + 1;
          uVar3 = param_6;
          pbVar12_mg5 = param_1;
          if (uVar6 == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + (int)param_2;
          }
          else {
            while( true ) {
              if ((uVar6 & 0x80) == 0) {
                uVar3 = uVar3 - (uVar6 & 0x7f);
                pbVar12_mg5 = pbVar12_mg5 + (uVar6 & 0x7f);
                param_1 = pbVar12_mg5;
              }
              else {
                uVar4 = uVar6 & 0x3f;
                uVar3 = uVar3 - uVar4;
                if ((uVar6 & 0x40) == 0) {
                  pbVar10 = pbVar12_mg5;
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      pbVar12_mg5 = pbVar10 + 1;
                      bVar7 = *param_12;
                      param_12 = param_12 + 1;
                      uVar4 = uVar4 - 1;
                      *pbVar10 = *(byte *)((uint)bVar7 + param_8);
                      pbVar10 = pbVar12_mg5;
                      param_1 = pbVar12_mg5;
                    } while (uVar4 != 0);
                  }
                }
                else {
                  bVar7 = *param_12;
                  param_12 = param_12 + 1;
                  bVar7 = *(byte *)((uint)bVar7 + param_8);
                  if (-1 < (int)(uVar4 - 1)) {
                    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *(uint *)pbVar12_mg5 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                      pbVar12_mg5 = pbVar12_mg5 + 4;
                    }
                    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *pbVar12_mg5 = bVar7;
                      pbVar12_mg5 = pbVar12_mg5 + 1;
                    }
                    pbVar12_mg5 = param_1 + uVar4;
                    param_1 = pbVar12_mg5;
                  }
                }
              }
              if ((int)uVar3 < 1) break;
              uVar6 = (uint)*param_12;
              param_12 = param_12 + 1;
            }
            param_1 = pbVar12_mg5 + ((int)param_2 - param_6);
          }
          param_9 = param_9 + -1;
        } while (param_9 != nullptr);
        return;
      }
    }
    else if (-1 < (int)(param_7 - 1)) {
      do {
        uVar6 = 0x80 >> (bVar7 & 7) & 0xff;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_6;
        uVar3 = (uint)*param_12;
        param_12 = param_12 + 1;
        pbVar12_mg4 = param_1;
        auto param_3_after_write = param_9; /* compiler stack-slot lifetime split */
        if (uVar3 == 0) {
          param_1 = param_1 + (int)param_2;
        }
        else {
          while( true ) {
            if ((uVar3 & 0x80) == 0) {
              uVar3 = uVar3 & 0x7f;
              param_5 = param_5 - uVar3;
              pbVar12_mg4 = pbVar12_mg4 + uVar3;
              uVar6 = (uVar6 << 8) >> ((byte)uVar3 & 7);
              param_1 = pbVar12_mg4;
              if (uVar6 < 0x81) {
                uVar6 = uVar6 & 0xff;
                param_3_after_write = param_3_after_write + ((int)uVar3 >> 3) + 1;
              }
              else {
                param_3_after_write = param_3_after_write + ((int)uVar3 >> 3);
                uVar6 = uVar6 >> 8 & 0xff;
              }
            }
            else {
              pbVar10 = (byte *)(uVar3 & 0x3f);
              param_5 = param_5 - (int)pbVar10;
              if ((uVar3 & 0x40) == 0) {
                if (-1 < (int)(pbVar10 + -1)) {
                  do {
                    param_1 = pbVar10;
                    if ((*param_3_after_write & (byte)uVar6) != 0) {
                      *pbVar12_mg4 = *(byte *)((uint)*param_12 + param_8);
                    }
                    pbVar12_mg4 = pbVar12_mg4 + 1;
                    param_12 = param_12 + 1;
                    bVar2 = (byte)uVar6 >> 1;
                    uVar6 = (uint)bVar2;
                    if (bVar2 == 0) {
                      uVar6 = 0x80;
                      param_3_after_write = param_3_after_write + 1;
                    }
                    pbVar10 = param_1 + -1;
                    param_1 = pbVar12_mg4;
                  } while (pbVar10 != nullptr);
                }
              }
              else {
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                bVar2 = *(byte *)((uint)bVar2 + param_8);
                pbVar12_mg4 = param_1;
                if (-1 < (int)(pbVar10 + -1)) {
                  do {
                    if ((*param_3_after_write & (byte)uVar6) != 0) {
                      *param_1 = bVar2;
                    }
                    pbVar12_mg4 = param_1 + 1;
                    bVar1 = (byte)uVar6 >> 1;
                    uVar6 = (uint)bVar1;
                    if (bVar1 == 0) {
                      uVar6 = 0x80;
                      param_3_after_write = param_3_after_write + 1;
                    }
                    pbVar10 = pbVar10 + -1;
                    param_1 = pbVar12_mg4;
                  } while (pbVar10 != nullptr);
                }
              }
            }
            if ((int)param_5 < 1) break;
            uVar3 = (uint)*param_12;
            param_12 = param_12 + 1;
          }
          param_1 = pbVar12_mg4 + ((int)param_2 - param_6);
        }
        param_9 = param_9 + param_10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_7 = param_7 - 1;
      } while (param_7 != 0);
      return;
    }
  }
  else {
    auto param_3_after_write_2 = param_9; /* compiler stack-slot lifetime split */
    if (param_8 == 0) {
      if (param_9 == nullptr) {
        FUN_006d26d0(param_1,(int)param_2,param_12,uVar3,param_4,param_6,param_7);
        return;
      }
      if (-1 < (int)(param_7 - 1)) {
        param_8 = param_7;
        do {
          uVar6 = (uint)*param_12;
          param_12 = param_12 + 1;
          if (uVar6 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            param_7 = (0x80 >> (bVar7 & 7)) << 0x18;
            iVar11 = param_4;
            while( true ) {
              while ((uVar6 & 0x80) == 0) {
                uVar4 = uVar6 & 0x7f;
                if (iVar11 < (int)uVar4) goto LAB_006d2b87;
                iVar11 = iVar11 - uVar4;
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                uVar6 = (uint)bVar2;
              }
              uVar4 = uVar6 & 0x3f;
              if (iVar11 < (int)uVar4) break;
              if ((uVar6 & 0x40) == 0) {
                iVar11 = iVar11 - uVar4;
                uVar6 = (uint)param_12[uVar4];
                param_12 = param_12 + uVar4 + 1;
              }
              else {
                iVar11 = iVar11 - uVar4;
                uVar6 = (uint)param_12[1];
                param_12 = param_12 + 2;
              }
            }
LAB_006d2b87:
            uVar4 = uVar4 - iVar11;
            if (((byte)uVar6 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            uVar5 = param_6;
            if ((int)uVar4 <= (int)param_6) {
              do {
                uVar5 = uVar5 - uVar4;
                if ((uVar6 & 0x80) == 0) {
                  param_1 = param_1 + uVar4;
                  uVar8 = ((param_7 >> 0x18) << 8) >> ((byte)uVar4 & 7);
                  if (uVar8 < 0x81) {
                    param_3_after_write_2 = param_3_after_write_2 + 1;
                  }
                  else {
                    uVar8 = uVar8 >> 8;
                  }
                  param_7 = uVar8 << 0x18;
                  param_3_after_write_2 = param_3_after_write_2 + ((int)uVar4 >> 3);
                }
                else if ((uVar6 & 0x40) == 0) {
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                        *param_1 = *param_12;
                      }
                      param_1 = param_1 + 1;
                      param_12 = param_12 + 1;
                      uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                      if (STPiece<3,1>(param_7) >> 1 == 0) {
                        uVar8 = 0x80;
                        param_3_after_write_2 = param_3_after_write_2 + 1;
                      }
                      param_7 = uVar8 << 0x18;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                }
                else {
                  bVar2 = *param_12;
                  param_12 = param_12 + 1;
                  if (-1 < (int)(uVar4 - 1)) {
                    do {
                      if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                        *param_1 = bVar2;
                      }
                      param_1 = param_1 + 1;
                      uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                      if (STPiece<3,1>(param_7) >> 1 == 0) {
                        uVar8 = 0x80;
                        param_3_after_write_2 = param_3_after_write_2 + 1;
                      }
                      param_7 = uVar8 << 0x18;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                }
                if ((int)uVar5 < 1) {
                  uVar4 = 0;
                  break;
                }
                bVar2 = *param_12;
                uVar6 = (uint)bVar2;
                param_12 = param_12 + 1;
                if ((bVar2 & 0x80) == 0) {
                  uVar4 = uVar6 & 0x7f;
                }
                else {
                  uVar4 = uVar6 & 0x3f;
                }
              } while ((int)uVar4 <= (int)uVar5);
            }
            uVar4 = uVar4 - uVar5;
            bVar2 = (byte)uVar6;
            if ((uVar6 & 0x80) == 0) {
              param_1 = param_1 + uVar5;
            }
            else if ((uVar6 & 0x40) == 0) {
              if (-1 < (int)(uVar5 - 1)) {
                do {
                  if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                    *param_1 = *param_12;
                  }
                  param_1 = param_1 + 1;
                  param_12 = param_12 + 1;
                  uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                  if (STPiece<3,1>(param_7) >> 1 == 0) {
                    uVar8 = 0x80;
                    param_3_after_write_2 = param_3_after_write_2 + 1;
                  }
                  param_7 = uVar8 << 0x18;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            else if (0 < (int)uVar5) {
              bVar1 = *param_12;
              param_12 = param_12 + 1;
              if (-1 < (int)(uVar5 - 1)) {
                do {
                  if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                    *param_1 = bVar1;
                  }
                  param_1 = param_1 + 1;
                  uVar8 = (uint)(STPiece<3,1>(param_7) >> 1);
                  if (STPiece<3,1>(param_7) >> 1 == 0) {
                    uVar8 = 0x80;
                    param_3_after_write_2 = param_3_after_write_2 + 1;
                  }
                  param_7 = uVar8 << 0x18;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            iVar11 = (uVar3 - param_4) - param_6;
            if ((int)uVar4 < iVar11) {
              do {
                iVar11 = iVar11 - uVar4;
                pbVar12_mg3 = param_12;
                if (((byte)uVar6 & 0xc0) == 0x80) {
                  pbVar12_mg3 = param_12 + uVar4;
                }
                bVar2 = *pbVar12_mg3;
                uVar6 = (uint)bVar2;
                param_12 = pbVar12_mg3 + 1;
                uVar4 = uVar6;
                if (((bVar2 & 0x80) != 0) && (uVar4 = uVar6 & 0x3f, (bVar2 & 0x40) != 0)) {
                  param_12 = pbVar12_mg3 + 2;
                }
              } while ((int)uVar4 < iVar11);
            }
            if ((bVar2 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            param_1 = param_1 + ((int)param_2 - param_6);
            param_3_after_write_2 = param_9;
          }
          if (param_3_after_write_2 != nullptr) {
            param_3_after_write_2 = param_3_after_write_2 + param_10;
            param_9 = param_3_after_write_2;
          }
          param_8 = param_8 + -1;
          if (param_8 == 0) {
            return;
          }
        } while( true );
      }
    }
    else if (param_9 == nullptr) {
      if (-1 < (int)(param_7 - 1)) {
        auto param_11_after_write = param_7; /* compiler stack-slot lifetime split */
        do {
          param_7 = (uint)*param_12;
          param_12 = param_12 + 1;
          iVar11 = param_4;
          if (param_7 == 0) {
            param_1 = param_1 + (int)param_2;
          }
          else {
            while( true ) {
              while ((param_7 & 0x80) == 0) {
                uVar6 = param_7 & 0x7f;
                if (iVar11 < (int)uVar6) goto LAB_006d2e2c;
                bVar7 = *param_12;
                param_12 = param_12 + 1;
                iVar11 = iVar11 - uVar6;
                param_7 = (uint)bVar7;
              }
              uVar6 = param_7 & 0x3f;
              if (iVar11 < (int)uVar6) break;
              if ((param_7 & 0x40) == 0) {
                param_7 = (uint)param_12[uVar6];
                param_12 = param_12 + uVar6 + 1;
                iVar11 = iVar11 - uVar6;
              }
              else {
                param_7 = (uint)param_12[1];
                param_12 = param_12 + 2;
                iVar11 = iVar11 - uVar6;
              }
            }
LAB_006d2e2c:
            uVar6 = uVar6 - iVar11;
            if (((byte)param_7 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            param_5 = param_6;
            pbVar10 = param_1;
            pbVar9 = param_1;
            if ((int)uVar6 <= (int)param_6) {
              do {
                param_5 = param_5 - uVar6;
                if ((param_7 & 0x80) == 0) {
                  pbVar10 = pbVar9 + uVar6;
                  param_1 = pbVar9 + uVar6;
                }
                else {
                  pbVar10 = pbVar9;
                  if ((param_7 & 0x40) == 0) {
                    if (-1 < (int)(uVar6 - 1)) {
                      do {
                        pbVar10 = pbVar9 + 1;
                        bVar7 = *param_12;
                        param_12 = param_12 + 1;
                        uVar6 = uVar6 - 1;
                        *pbVar9 = *(byte *)((uint)bVar7 + param_8);
                        pbVar9 = pbVar10;
                        param_1 = pbVar10;
                      } while (uVar6 != 0);
                    }
                  }
                  else {
                    bVar7 = *(byte *)((uint)*param_12 + param_8);
                    param_12 = param_12 + 1;
                    if (-1 < (int)(uVar6 - 1)) {
                      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *(uint *)pbVar9 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                        pbVar9 = pbVar9 + 4;
                      }
                      for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *pbVar9 = bVar7;
                        pbVar9 = pbVar9 + 1;
                      }
                      pbVar10 = param_1 + uVar6;
                      param_1 = pbVar10;
                    }
                  }
                }
                if ((int)param_5 < 1) {
                  uVar6 = 0;
                  break;
                }
                bVar7 = *param_12;
                param_7 = (uint)bVar7;
                param_12 = param_12 + 1;
                if ((bVar7 & 0x80) == 0) {
                  uVar6 = param_7 & 0x7f;
                }
                else {
                  uVar6 = param_7 & 0x3f;
                }
                pbVar9 = pbVar10;
              } while ((int)uVar6 <= (int)param_5);
            }
            uVar6 = uVar6 - param_5;
            if ((param_7 & 0x80) == 0) {
              pbVar10 = pbVar10 + param_5;
            }
            else if ((param_7 & 0x40) == 0) {
              pbVar12 = pbVar10;
              param_1 = (byte *)param_5;
              if (-1 < (int)(param_5 - 1)) {
                do {
                  pbVar10 = pbVar12 + 1;
                  bVar7 = *param_12;
                  param_12 = param_12 + 1;
                  *pbVar12 = *(byte *)((uint)bVar7 + param_8);
                  param_1 = param_1 + -1;
                  pbVar12 = pbVar10;
                } while (param_1 != nullptr);
              }
            }
            else if (0 < (int)param_5) {
              bVar7 = *(byte *)((uint)*param_12 + param_8);
              param_12 = param_12 + 1;
              if (-1 < (int)(param_5 - 1)) {
                for (uVar4 = param_5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(uint *)pbVar10 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                  pbVar10 = pbVar10 + 4;
                }
                for (uVar4 = param_5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pbVar10 = bVar7;
                  pbVar10 = pbVar10 + 1;
                }
                pbVar10 = param_1 + param_5;
              }
            }
            bVar7 = (byte)param_7;
            iVar11 = (uVar3 - param_4) - param_6;
            if ((int)uVar6 < iVar11) {
              do {
                iVar11 = iVar11 - uVar6;
                temp_3f0f81c0fe = param_12;
                if (((byte)param_7 & 0xc0) == 0x80) {
                  temp_3f0f81c0fe = param_12 + uVar6;
                }
                bVar7 = *temp_3f0f81c0fe;
                param_7 = (uint)bVar7;
                param_12 = temp_3f0f81c0fe + 1;
                uVar6 = param_7;
                if (((bVar7 & 0x80) != 0) && (uVar6 = param_7 & 0x3f, (bVar7 & 0x40) != 0)) {
                  param_12 = temp_3f0f81c0fe + 2;
                }
              } while ((int)uVar6 < iVar11);
            }
            if ((bVar7 & 0xc0) == 0x80) {
              param_12 = param_12 + iVar11;
            }
            param_1 = pbVar10 + ((int)param_2 - param_6);
          }
          if (param_9 != nullptr) {
            param_9 = param_9 + param_10;
          }
          param_11_after_write = param_11_after_write - 1;
          if (param_11_after_write == 0) {
            return;
          }
        } while( true );
      }
    }
    else if (-1 < (int)(param_7 - 1)) {
      local_c = param_7;
      do {
        uVar6 = (uint)*param_12;
        param_12 = param_12 + 1;
        if (uVar6 == 0) {
          param_1 = param_1 + (int)param_2;
        }
        else {
          param_7 = (0x80 >> (bVar7 & 7)) << 0x18;
          iVar11 = param_4;
          while( true ) {
            while ((uVar6 & 0x80) == 0) {
              uVar4 = uVar6 & 0x7f;
              if (iVar11 < (int)uVar4) goto LAB_006d306f;
              iVar11 = iVar11 - uVar4;
              bVar2 = *param_12;
              param_12 = param_12 + 1;
              uVar6 = (uint)bVar2;
            }
            uVar4 = uVar6 & 0x3f;
            if (iVar11 < (int)uVar4) break;
            if ((uVar6 & 0x40) == 0) {
              iVar11 = iVar11 - uVar4;
              uVar6 = (uint)param_12[uVar4];
              param_12 = param_12 + uVar4 + 1;
            }
            else {
              iVar11 = iVar11 - uVar4;
              uVar6 = (uint)param_12[1];
              param_12 = param_12 + 2;
            }
          }
LAB_006d306f:
          uVar4 = uVar4 - iVar11;
          if (((byte)uVar6 & 0xc0) == 0x80) {
            param_12 = param_12 + iVar11;
          }
          param_5 = param_6;
          if ((int)uVar4 <= (int)param_6) {
            do {
              param_5 = param_5 - uVar4;
              if ((uVar6 & 0x80) == 0) {
                param_1 = param_1 + uVar4;
                uVar5 = ((param_7 >> 0x18) << 8) >> ((byte)uVar4 & 7);
                if (uVar5 < 0x81) {
                  param_7 = uVar5 << 0x18;
                  param_3_after_write_2 = param_3_after_write_2 + ((int)uVar4 >> 3) + 1;
                }
                else {
                  param_3_after_write_2 = param_3_after_write_2 + ((int)uVar4 >> 3);
                  param_7 = (uVar5 >> 8) << 0x18;
                }
              }
              else if ((uVar6 & 0x40) == 0) {
                if (-1 < (int)(uVar4 - 1)) {
                  do {
                    if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                      *param_1 = *(byte *)((uint)*param_12 + param_8);
                    }
                    param_1 = param_1 + 1;
                    param_12 = param_12 + 1;
                    uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                    if (STPiece<3,1>(param_7) >> 1 == 0) {
                      uVar5 = 0x80;
                      param_3_after_write_2 = param_3_after_write_2 + 1;
                    }
                    param_7 = uVar5 << 0x18;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
              }
              else {
                bVar2 = *param_12;
                param_12 = param_12 + 1;
                bVar2 = *(byte *)((uint)bVar2 + param_8);
                if (-1 < (int)(uVar4 - 1)) {
                  do {
                    if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                      *param_1 = bVar2;
                    }
                    param_1 = param_1 + 1;
                    uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                    if (STPiece<3,1>(param_7) >> 1 == 0) {
                      uVar5 = 0x80;
                      param_3_after_write_2 = param_3_after_write_2 + 1;
                    }
                    param_7 = uVar5 << 0x18;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
              }
              if ((int)param_5 < 1) {
                uVar4 = 0;
                break;
              }
              bVar2 = *param_12;
              uVar6 = (uint)bVar2;
              param_12 = param_12 + 1;
              if ((bVar2 & 0x80) == 0) {
                uVar4 = uVar6 & 0x7f;
              }
              else {
                uVar4 = uVar6 & 0x3f;
              }
            } while ((int)uVar4 <= (int)param_5);
          }
          uVar4 = uVar4 - param_5;
          bVar2 = (byte)uVar6;
          if ((uVar6 & 0x80) == 0) {
            param_1 = param_1 + param_5;
          }
          else if ((uVar6 & 0x40) == 0) {
            if (-1 < (int)(param_5 - 1)) {
              do {
                if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                  *param_1 = *(byte *)((uint)*param_12 + param_8);
                }
                param_1 = param_1 + 1;
                param_12 = param_12 + 1;
                uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                if (STPiece<3,1>(param_7) >> 1 == 0) {
                  uVar5 = 0x80;
                  param_3_after_write_2 = param_3_after_write_2 + 1;
                }
                param_7 = uVar5 << 0x18;
                param_5 = param_5 - 1;
              } while (param_5 != 0);
            }
          }
          else if (0 < (int)param_5) {
            bVar1 = *param_12;
            param_12 = param_12 + 1;
            bVar1 = *(byte *)((uint)bVar1 + param_8);
            if (-1 < (int)(param_5 - 1)) {
              do {
                if ((*param_3_after_write_2 & STPiece<3,1>(param_7)) != 0) {
                  *param_1 = bVar1;
                }
                param_1 = param_1 + 1;
                uVar5 = (uint)(STPiece<3,1>(param_7) >> 1);
                if (STPiece<3,1>(param_7) >> 1 == 0) {
                  uVar5 = 0x80;
                  param_3_after_write_2 = param_3_after_write_2 + 1;
                }
                param_7 = uVar5 << 0x18;
                param_5 = param_5 - 1;
              } while (param_5 != 0);
            }
          }
          iVar11 = (uVar3 - param_4) - param_6;
          if ((int)uVar4 < iVar11) {
            do {
              iVar11 = iVar11 - uVar4;
              pbVar12_mg0 = param_12;
              if (((byte)uVar6 & 0xc0) == 0x80) {
                pbVar12_mg0 = param_12 + uVar4;
              }
              bVar2 = *pbVar12_mg0;
              uVar6 = (uint)bVar2;
              param_12 = pbVar12_mg0 + 1;
              uVar4 = uVar6;
              if (((bVar2 & 0x80) != 0) && (uVar4 = uVar6 & 0x3f, (bVar2 & 0x40) != 0)) {
                param_12 = pbVar12_mg0 + 2;
              }
            } while ((int)uVar4 < iVar11);
          }
          if ((bVar2 & 0xc0) == 0x80) {
            param_12 = param_12 + iVar11;
          }
          param_1 = param_1 + ((int)param_2 - param_6);
          param_3_after_write_2 = param_9;
        }
        if (param_3_after_write_2 != nullptr) {
          param_3_after_write_2 = param_3_after_write_2 + param_10;
          param_9 = param_3_after_write_2;
        }
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return;
}

