#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 3522 | 3540 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void AiAiCalcMinesFields(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                        int param_7,int param_8,int param_9,uint param_10)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar14;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int local_EAX_3741;
  int *local_EAX_4198;
  int *piVar9;
  int *local_EAX_4250;
  int iVar10;
  int uVar11;
  int iVar19;
  int local_EAX_5415;
  int local_EAX_5654;
  int iVar15;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar16;
  int iVar17;
  STWorldCell *pSVar18;
  uint uVar20;
  int iVar21;
  void *pvVar22;
  int *piVar23;
  bool bVar24;
  InternalExceptionFrame local_1b8;
  undefined4 *local_174;
  int local_16c;
  STWorldCell *local_164;
  int *local_160;
  int local_158;
  int local_150;
  int local_140;
  int local_13c;
  int local_134 [13];
  int local_100;
  int local_e0;
  int local_dc;
  int local_d4;
  void *local_cc;
  int *local_c8_mg1;
  int local_c4;
  int local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  byte *local_a0;
  int local_9c;
  int local_94;
  short *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int *local_6c [2];
  int local_64;
  void *local_60 [3];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_40;
  int local_38;
  int local_34;
  void *local_30;
  int local_28_mg1;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  int *temp_203f9621b1d8;
  int *temp_3f50488dac;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079aff0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe18;
  local_6c[0] = nullptr;
  local_70 = 0;
  if ((param_4 != 0) && (0 < param_5)) {
    _DAT_00803318 = 0;
    _DAT_0080331c = 1;
    DAT_00803320 = 2;
    DAT_00803324 = 3;
    DAT_00803328 = 5;
    DAT_0080332c = 2;
    DAT_00803330 = 8;
    DAT_00803334 = 2;
    DAT_00803338 = 10;
    DAT_0080333c = 1;
    DAT_00803340 = 1;
    DAT_00803344 = 100;
    _DAT_00803348 = 5;
    _DAT_0080334c = 3;
    _DAT_00803350 = 3;
    DAT_00803358 = 9;
    DAT_0080335c = 0x16;
    _DAT_00803360 = 3;
    _DAT_00803364 = 3;
    DAT_00803368 = 10;
    _DAT_0080336c = 0x1e;
    _DAT_00803370 = 0xf;
    DAT_00803354 = 5;
    DAT_008033b4 = nullptr;
    local_60[0] = nullptr;
    DAT_00803300 = nullptr;
    DAT_00803314 = 0;
    DAT_0080337c = 0;
    piVar10 = (int *)(param_4 + 0xc);
    iVar16 = param_5;
    ExceptionList = &local_14;
    do {
      piVar10[-2] = -1;
      piVar10[-1] = -1;
      piVar10[2] = 0;
      if (((piVar10[-3] < 1) && (0 < *piVar10)) && (0 < piVar10[1])) {
        piVar10[-3] = (int)((piVar10[1] + 1U & 0xfffffffe) * (*piVar10 + 1U & 0xfffffffe)) / 2;
      }
      *piVar10 = 0;
      piVar10[1] = 0;
      piVar10 = piVar10 + 6;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    DAT_00803390 = 0x2c;
    DAT_008033bc = param_2 + -0x2c;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x2c;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar16 = param_2 + 0x2c;
    if (g_pathingGrid.sizeX <= iVar16) {
      iVar16 = g_pathingGrid.sizeX + -1;
    }
    iVar17 = param_3 + 0x2c;
    if (g_pathingGrid.sizeY <= iVar17) {
      iVar17 = g_pathingGrid.sizeY + -1;
    }
    DAT_008033a4 = (iVar16 - DAT_008033bc) + 1;
    DAT_008033a8 = (iVar17 - DAT_008033c0) + 1;
    DAT_008033ac = DAT_008033a8 * DAT_008033a4;
    DAT_00803304 = param_2 - DAT_008033bc;
    DAT_00803308 = param_3 - DAT_008033c0;
    local_1b8.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_1b8;
    iVar14 = Library::MSVCRT::__setjmp3
                       (local_1b8.jumpBuffer,2,Library::MSVCRT::__seh_longjmp_unwind_4,0xffffffff);
    local_1c = &stack0xfffffe18;
    if (iVar14 == 0) {
      local_1c = &stack0xfffffe18;
      local_60[0] = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      DAT_00803380 = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      local_8 = iVar14;
      Library::MSVCRT::FUN_0072da40();
      local_a0 = &stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_80 = (int *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      DAT_008032fc = &stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      DAT_008033b0 = (undefined4 *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_160 = (int *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_174 = (undefined4 *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      DAT_00803300 = (int *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_1c = &stack0xfffffe18;
      local_8 = 0xffffffff;
      memset(&stack0xfffffe18, 0, 0x80); /* compiler bulk-zero initialization */
      iVar16 = 0;
      DAT_008033b8 = DAT_008032fc + 0x40;
      memset(DAT_008033b0, 0, 0x40); /* compiler bulk-zero initialization */
      DAT_008032f8 = DAT_00803300;
      DAT_008032f4 = DAT_00803300 + 500;
      uVar20 = 0;
      local_78 = 0;
      DAT_00803310 = &stack0xfffffe18;
      puVar5 = &stack0xfffffe18;
      if (0 < param_5) {
        do {
          piVar10 = (int *)(param_4 + local_78 * 0x18);
          iVar16 = *piVar10;
          if (0 < iVar16) {
            iVar17 = 0;
            if (0 < (int)uVar20) {
              do {
                if (**(int **)(&stack0xfffffe18 + iVar17 * 4) < iVar16) break;
                iVar17 = iVar17 + 1;
              } while (iVar17 < (int)uVar20);
            }
            if (iVar17 < (int)uVar20) {
              Library::MSVCRT::FUN_0072da70
                        ((undefined4 *)(&stack0xfffffe1c + iVar17 * 4),
                         (AnonPointee_TLOBaseTy_0607 *)(&stack0xfffffe18 + iVar17 * 4),
                         (iVar17 * 0x3fffffff + uVar20) * 4);
            }
            *(int **)(&stack0xfffffe18 + iVar17 * 4) = piVar10;
            uVar20 = uVar20 + 1;
          }
          local_78 = local_78 + 1;
          puVar5 = DAT_00803310;
        } while (local_78 < param_5);
      }
      DAT_00803310 = puVar5;
      iVar16 = -1;
      iVar17 = -1;
      local_8c = -1;
      local_48 = (uint)(*(int *)local_174[uVar20 - 1] < 0x1f);
      for (iVar21 = uVar20 - 2; -1 < iVar21; iVar21 = iVar21 + -1) {
        iVar11 = *(int *)local_174[iVar21];
        if ((0xf < iVar11) &&
           (iVar6 = iVar11 - *(int *)local_174[iVar21 + 1], *(int *)local_174[iVar21 + 1] < iVar6))
        {
          if (iVar6 <= iVar16) {
            if ((local_48 == 0) || (iVar11 < 0x1f)) goto LAB_00563368;
            local_48 = 0;
          }
          local_8c = iVar21;
          iVar16 = iVar6;
          iVar17 = iVar21;
        }
LAB_00563368:
      }
      iVar16 = 0;
      do {
        if (*(int *)local_174[iVar17 + 1] <= (int)(&DAT_007c9614)[iVar16]) break;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 9);
      DAT_008032f0 = *(int *)(iVar16 * 8 + 0x7c9640);
      DAT_008032ec = *(int *)(iVar16 * 8 + 0x7c963c);
      DAT_0080330c = DAT_008032ec * DAT_008032f0;
      if (-1 < iVar17) {
        iVar16 = 0;
        do {
          if (*(int *)*local_174 <= (int)(&DAT_007c9614)[iVar16]) break;
          iVar16 = iVar16 + 1;
        } while (iVar16 < 9);
        DAT_00803374 = *(int *)(iVar16 * 8 + 0x7c9640);
        DAT_00803378 = *(int *)(iVar16 * 8 + 0x7c963c);
        DAT_008032e8 = DAT_00803378 * DAT_00803374;
      }
      local_9c = DAT_00803304 + -0x14;
      if (DAT_00803304 + -0x14 < 0) {
        local_9c = 0;
      }
      local_e0 = DAT_00803308 + -0x14;
      if (DAT_00803308 + -0x14 < 0) {
        local_e0 = 0;
      }
      local_c4 = DAT_00803304 + 0x14;
      if (DAT_008033a4 <= DAT_00803304 + 0x14) {
        local_c4 = DAT_008033a4 + -1;
      }
      local_16c = DAT_00803308 + 0x14;
      if (DAT_008033a8 <= DAT_00803308 + 0x14) {
        local_16c = DAT_008033a8 + -1;
      }
      local_ac = 0;
      iVar16 = DAT_008033a4;
      iVar17 = local_e0;
      if (0 < local_e0) {
        do {
          iVar21 = local_ac * iVar16 * 2;
          local_30 = (void *)((int)DAT_00803380 + iVar21);
          local_cc = (void *)(iVar21 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (DAT_008033c0 + local_ac) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar21 = 0;
          if (0 < iVar16) {
            do {
              iVar16 = 0;
              iVar11 = 0;
              psVar8 = local_90;
              do {
                if (*psVar8 == 0) {
                  iVar16 = iVar16 + 1;
                }
                iVar11 = iVar11 + 1;
                psVar8 = psVar8 + g_pathingGrid.planeStride;
              } while (iVar11 < 5);
              *(char *)((int)local_30 + iVar21 * 2) = (char)iVar16;
              if (iVar16 < 1) {
                *(undefined2 *)((int)local_cc + iVar21 * 2) = 0xffff;
              }
              else if (iVar16 < 3) {
                *(short *)((int)local_cc + iVar21 * 2) = 5 - (short)iVar16;
              }
              else {
                *(undefined2 *)((int)local_cc + iVar21 * 2) = 0;
              }
              iVar21 = iVar21 + 1;
              local_90 = local_90 + 1;
              iVar16 = DAT_008033a4;
            } while (iVar21 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < local_e0);
      }
      for (; iVar17 <= local_16c; iVar17 = iVar17 + 1) {
        iVar21 = iVar17 * iVar16 * 2;
        local_30 = (void *)((int)DAT_00803380 + iVar21);
        local_cc = (void *)(iVar21 + (int)local_60[0]);
        psVar8 = g_pathingGrid.cells +
                 (iVar17 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
        iVar21 = 0;
        if (0 < local_9c) {
          do {
            iVar11 = 0;
            iVar16 = 0;
            psVar7 = psVar8;
            do {
              if (*psVar7 == 0) {
                iVar11 = iVar11 + 1;
              }
              iVar16 = iVar16 + 1;
              psVar7 = psVar7 + g_pathingGrid.planeStride;
            } while (iVar16 < 5);
            *(char *)((int)local_30 + iVar21 * 2) = (char)iVar11;
            if (iVar11 < 1) {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0xffff;
            }
            else if (iVar11 < 3) {
              *(short *)((int)local_cc + iVar21 * 2) = 5 - (short)iVar11;
            }
            else {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0;
            }
            iVar21 = iVar21 + 1;
            psVar8 = psVar8 + 1;
            iVar16 = DAT_008033a4;
          } while (iVar21 < local_9c);
        }
        psVar8 = g_pathingGrid.cells +
                 (int)g_pathingGrid.sizeX * (DAT_008033c0 + iVar17) + local_9c + DAT_008033bc;
        local_164 = g_worldGrid.cells +
                    (int)g_worldGrid.sizeX * (DAT_008033c0 + iVar17) + local_9c + DAT_008033bc;
        local_94 = local_9c;
        while (local_94 <= local_c4) {
          local_d4 = 0;
          local_64 = 0;
          local_34 = 0;
          pSVar18 = local_164;
          psVar7 = psVar8;
          do {
            if (*psVar7 == 0) {
              local_d4 = local_d4 + 1;
              if ((pSVar18->objects[1] != nullptr) &&
                 (pSVar18->objects[1]->value_20 == 0x1ae)) {
                local_64 = local_64 + 3;
LAB_005637b9:
              }
            }
            else if (pSVar18->objects[0] != nullptr) {
              if (param_1 != 0xff) {
                bVar2 = *(byte *)&pSVar18->objects[0][1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_005637a4:
                    iVar16 = 0;
                  }
                  else {
                    uVar12 = param_1 & 0xff;
                    bVar1 = g_playerRelationMatrix[bVar2][uVar12];
                    if ((bVar1 == 0) && (g_playerRelationMatrix[uVar12][bVar2] == 0)) {
                      iVar16 = -2;
                    }
                    else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar12][bVar2] == 0)) {
                      iVar16 = -1;
                    }
                    else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar12][bVar2] == 1)) {
                      iVar16 = 1;
                    }
                    else {
                      if ((bVar1 != 1) || (g_playerRelationMatrix[uVar12][bVar2] != 1))
                      goto LAB_005637a4;
                      iVar16 = 2;
                    }
                  }
                  bVar24 = iVar16 < 0;
                }
                else {
                  bVar24 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                }
                if (bVar24) goto LAB_005637bc;
              }
              local_64 = local_64 + 2;
              goto LAB_005637b9;
            }
LAB_005637bc:
            local_34 = local_34 + 1;
            psVar7 = psVar7 + g_pathingGrid.planeStride;
            pSVar18 = pSVar18 + g_worldGrid.planeStride;
          } while (local_34 < 5);
          *(byte *)((int)local_30 + local_94 * 2) = (char)local_64 << 4 | (byte)local_d4;
          if (local_d4 < 1) {
            *(undefined2 *)((int)local_cc + local_94 * 2) = 0xffff;
          }
          else if (local_d4 < 3) {
            *(short *)((int)local_cc + local_94 * 2) = 5 - (short)local_d4;
          }
          else {
            *(undefined2 *)((int)local_cc + local_94 * 2) = 0;
          }
          local_94 = local_94 + 1;
          psVar8 = psVar8 + 1;
          local_164 = local_164 + 1;
          iVar16 = DAT_008033a4;
        }
        local_90 = g_pathingGrid.cells +
                   (iVar17 + DAT_008033c0) * (int)g_pathingGrid.sizeX + local_c4 + DAT_008033bc + 1;
        iVar21 = local_c4 + 1;
        if (iVar21 < iVar16) {
          do {
            iVar16 = 0;
            iVar11 = 0;
            psVar8 = local_90;
            do {
              if (*psVar8 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar11 = iVar11 + 1;
              psVar8 = psVar8 + g_pathingGrid.planeStride;
            } while (iVar11 < 5);
            *(char *)((int)local_30 + iVar21 * 2) = (char)iVar16;
            if (iVar16 < 1) {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0xffff;
            }
            else if (iVar16 < 3) {
              *(short *)((int)local_cc + iVar21 * 2) = 5 - (short)iVar16;
            }
            else {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0;
            }
            iVar21 = iVar21 + 1;
            local_90 = local_90 + 1;
            iVar16 = DAT_008033a4;
          } while (iVar21 < DAT_008033a4);
        }
      }
      local_ac = local_16c + 1;
      if (local_ac < DAT_008033a8) {
        do {
          iVar17 = local_ac * iVar16 * 2;
          local_30 = (void *)((int)DAT_00803380 + iVar17);
          local_cc = (void *)(iVar17 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (DAT_008033c0 + local_ac) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar17 = 0;
          if (0 < iVar16) {
            do {
              iVar16 = 0;
              iVar21 = 0;
              psVar8 = local_90;
              do {
                if (*psVar8 == 0) {
                  iVar16 = iVar16 + 1;
                }
                iVar21 = iVar21 + 1;
                psVar8 = psVar8 + g_pathingGrid.planeStride;
              } while (iVar21 < 5);
              *(char *)((int)local_30 + iVar17 * 2) = (char)iVar16;
              if (iVar16 < 1) {
                *(undefined2 *)((int)local_cc + iVar17 * 2) = 0xffff;
              }
              else if (iVar16 < 3) {
                *(short *)((int)local_cc + iVar17 * 2) = 5 - (short)iVar16;
              }
              else {
                *(undefined2 *)((int)local_cc + iVar17 * 2) = 0;
              }
              iVar17 = iVar17 + 1;
              local_90 = local_90 + 1;
              iVar16 = DAT_008033a4;
            } while (iVar17 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < DAT_008033a8);
      }
      if (((param_6 != 0) && (0 < param_7)) && (local_78 = 0, 0 < param_7)) {
        do {
          piVar10 = (int *)(param_6 + local_78 * 0x18);
          iVar17 = *piVar10;
          if (0 < iVar17) {
            iVar21 = piVar10[5];
            local_84 = piVar10[1] - DAT_008033bc;
            if ((-1 < local_84) && (local_84 < iVar16)) {
              iVar11 = piVar10[2] - DAT_008033c0;
              local_b8 = iVar11;
              if ((-1 < iVar11) && (iVar11 < DAT_008033a8)) {
                switch(piVar10[3]) {
                case 0:
                case 3:
                  iVar16 = *(int *)(&DAT_007a4bf8 + piVar10[4] * 4) * 2 + -2;
                  iVar21 = 0;
                  iVar6 = iVar16;
                  break;
                case 1:
                  iVar6 = *(int *)(&DAT_007a4b60 + piVar10[4] * 4);
                  iVar16 = 1;
                  break;
                case 2:
                  iVar6 = *(int *)(&DAT_007a4b88 + piVar10[4] * 8);
                  iVar16 = 1;
                  break;
                case 4:
                case 5:
                  iVar16 = (*(int *)(&DAT_007a4bf8 + piVar10[4] * 4) * 2) / 2;
                  iVar6 = *(int *)(&DAT_007a4bf8 + piVar10[4] * 4) * 2;
                  break;
                default:
                  iVar21 = 0;
                case -10:
                  iVar16 = *(int *)(&DAT_007a4c24 + piVar10[4] * 8);
                  iVar6 = *(int *)(&DAT_007a4c20 + piVar10[4] * 8);
                }
                local_c8_mg1 = FUN_00561240(iVar16,iVar6,iVar21);
                if (1 < *local_c8_mg1) {
                  local_13c = (iVar17 << 0x10) / *local_c8_mg1;
                  iVar16 = 0;
                  pvVar22 = (void *)((int)DAT_00803380 +
                                    (local_c8_mg1[3] + iVar11) * DAT_008033a4 * 2);
                  local_ac = 0;
                  if (0 < local_c8_mg1[4]) {
                    do {
                      iVar17 = local_c8_mg1[3] + iVar11 + local_ac;
                      if ((-1 < iVar17) && (iVar17 < DAT_008033a8)) {
                        local_a8 = local_c8_mg1[local_ac * 2 + 6] + local_84;
                        for (iVar17 = local_c8_mg1[local_ac * 2 + 5] + local_84; iVar17 <= local_a8;
                            iVar17 = iVar17 + 1) {
                          if (((-1 < iVar17) && (iVar17 < DAT_008033a4)) &&
                             (iVar16 = iVar16 + local_13c, 0x10000 < iVar16)) {
                            bVar2 = *(byte *)((int)pvVar22 + iVar17 * 2);
                            if ((int)((uint)(bVar2 >> 4) + (iVar16 >> 0x10)) < 0xf) {
                              *(byte *)((int)pvVar22 + iVar17 * 2) =
                                   (char)((uint)iVar16 >> 0x10) * '\x10' + bVar2;
                            }
                            else {
                              *(byte *)((int)pvVar22 + iVar17 * 2) = (bVar2 & 7) - 0x10;
                            }
                          }
                        }
                      }
                      local_ac = local_ac + 1;
                      pvVar22 = (void *)((int)pvVar22 + DAT_008033a4 * 2);
                      iVar11 = local_b8;
                    } while (local_ac < local_c8_mg1[4]);
                  }
                }
                FreeAndNull(&local_c8_mg1);
                iVar16 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_7);
      }
      iVar17 = 0;
      DAT_0080338c = 0;
      if ((param_8 != 0) && (0 < param_9)) {
        iVar21 = (*(int *)local_174[uVar20 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar21;
        local_78 = 0;
        if (0 < param_9) {
          do {
            piVar10 = (int *)(param_8 + local_78 * 0x18);
            iVar11 = piVar10[1] - DAT_008033bc;
            if ((-1 < iVar11) && (iVar11 < iVar16)) {
              iVar6 = piVar10[2] - DAT_008033c0;
              local_ac = iVar6;
              if ((-1 < iVar6) && (iVar6 < DAT_008033a8)) {
                local_4c = piVar10[3] * piVar10[4];
                if ((0 < local_4c) && (iVar21 <= (*piVar10 * 100) / local_4c)) {
                  *(int *)(DAT_00803310 + iVar17 * 0x14) = iVar11;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 4) = iVar6;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 8) = 0;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 0xc) = 0;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 0x10) = piVar10[4];
                  iVar17 = DAT_0080338c + 1;
                  iVar16 = DAT_008033a4;
                  DAT_0080338c = iVar17;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_9);
        }
      }
      DAT_0080339c = 9;
      iVar17 = 0;
      iVar21 = 0;
      local_dc = 0;
      for (iVar11 = local_e0; iVar11 <= local_16c; iVar11 = iVar11 + 1) {
        local_30 = (void *)((int)DAT_00803380 + iVar11 * iVar16 * 2);
        for (iVar6 = local_9c; iVar6 <= local_c4; iVar6 = iVar6 + 1) {
          if ((*(byte *)((int)local_30 + iVar6 * 2) & 0xf0) != 0) {
            iVar17 = iVar17 + 1;
            iVar21 = iVar21 + iVar6;
            local_dc = local_dc + iVar11;
          }
        }
      }
      iVar16 = DAT_00803304;
      iVar11 = DAT_00803308;
      if (0 < iVar17) {
        iVar16 = (iVar21 + iVar17 / 2) / iVar17;
        iVar11 = (local_dc + iVar17 / 2) / iVar17;
        local_EAX_3741 = FUN_006acf90(iVar16,iVar11,DAT_00803304,DAT_00803308);
        if (5 < local_EAX_3741) {
          iVar16 = ((local_EAX_3741 + -5) * DAT_00803304 + iVar16 * 5) / local_EAX_3741;
          iVar11 = ((local_EAX_3741 + -5) * DAT_00803308 + iVar11 * 5) / local_EAX_3741;
        }
      }
      DAT_00803308 = iVar11;
      DAT_00803304 = iVar16;
      piVar10 = local_134;
      for (iVar16 = 0x16; pbVar4 = local_a0, iVar17 = DAT_0080339c, piVar13 = local_80, iVar16 != 0;
          iVar16 = iVar16 + -1) {
        *piVar10 = 0;
        piVar10 = piVar10 + 1;
      }
      for (; local_80 = piVar13, iVar17 < 0xe; iVar17 = iVar17 + 1) {
        local_28_mg1 = FUN_0055ee70(pbVar4,iVar17,1);
        iVar16 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar11 = (char)pbVar4[iVar16 * 2] + DAT_00803304;
            iVar21 = (char)pbVar4[iVar16 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar11) && (iVar11 < DAT_008033a4)) && (-1 < iVar21)) &&
               ((iVar21 < DAT_008033a8 &&
                ((*(byte *)((int)DAT_00803380 + (iVar21 * DAT_008033a4 + iVar11) * 2) & 0xf0) != 0))
               )) {
              local_134[iVar17] = local_134[iVar17] + 1;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < local_28_mg1);
        }
        local_134[iVar17] = (local_134[iVar17] * 100) / local_28_mg1;
        piVar13 = local_80;
      }
      iVar16 = -30000;
      iVar17 = 0xc;
      if (DAT_0080339c < 0xd) {
        do {
          iVar21 = ((0xd - iVar17) * local_100 + local_134[iVar17]) / (0xe - iVar17) - local_100;
          if (iVar16 <= iVar21) {
            DAT_00803384 = iVar17 + 1;
            iVar16 = iVar21;
          }
          iVar17 = iVar17 + -1;
        } while (DAT_0080339c <= iVar17);
      }
      if (DAT_00803384 < 0xb) {
        DAT_00803384 = DAT_00803384 + 4;
      }
      *piVar13 = DAT_00803304;
      piVar13[1] = DAT_00803308;
      DAT_008033b4 = FUN_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar13,1);
      FreeAndNull(local_60);
      thunk_FUN_0055dee0(local_a0);
      iVar16 = 0;
      do {
        piVar13 = (int *)&stack0xfffffe18;
        iVar17 = (int)(iVar16 * 0x168 + (iVar16 * 0x168 >> 0x1f & 0xfU)) >> 4;
        local_EAX_4198 = FUN_00561240(DAT_008032f0,DAT_008032ec,iVar17);
        *(int **)(DAT_008032fc + iVar16 * 4) = local_EAX_4198;
        piVar9 = FUN_00561240(DAT_00803374,DAT_00803378,iVar17);
        *(int **)(DAT_008033b8 + iVar16 * 4) = piVar9;
        local_EAX_4250 = FUN_00561240(5,DAT_008032ec,iVar17);
        DAT_008033b0[iVar16] = local_EAX_4250;
        iVar16 = iVar16 + 1;
        iVar17 = DAT_0080339c;
        piVar10 = local_160;
      } while (iVar16 < 0x10);
      while (local_160 = piVar10, local_88 = iVar17, iVar17 < 0x16) {
        local_28_mg1 = FUN_0055ee70(local_a0,iVar17,1);
        iVar16 = DAT_00803384 - DAT_0080339c;
        iVar21 = 0x16 - DAT_00803384;
        if (iVar16 < iVar21) {
          uVar12 = DAT_00803384 - iVar17 >> 0x1f;
          iVar16 = (DAT_00803384 - iVar17 ^ uVar12) - uVar12;
          iVar16 = iVar21 * iVar21 - iVar16 * iVar16;
        }
        else {
          uVar12 = DAT_00803384 - iVar17 >> 0x1f;
          iVar17 = (DAT_00803384 - iVar17 ^ uVar12) - uVar12;
          iVar16 = iVar16 * iVar16 - iVar17 * iVar17;
        }
        DAT_00803388 = iVar16 / 2;
        local_50 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar16 = (char)local_a0[local_50 * 2] + DAT_00803304;
            if (((-1 < iVar16) && (iVar16 < DAT_008033a4)) &&
               ((iVar17 = (char)local_a0[local_50 * 2 + 1] + DAT_00803308, -1 < iVar17 &&
                ((iVar17 < DAT_008033a8 &&
                 (0 < *(short *)((int)DAT_008033b4 + (iVar17 * DAT_008033a4 + iVar16) * 2))))))) {
              local_140 = 0;
              local_150 = 0;
              if (0 < DAT_0080338c) {
                do {
                  piVar10 = (int *)(DAT_00803310 + local_150 * 0x14);
                  iVar21 = piVar10[4];
                  if (piVar10[4] <= DAT_008032ec) {
                    iVar21 = DAT_008032ec;
                  }
                  iVar10 = FUN_006acf90(*piVar10,piVar10[1],iVar16,iVar17);
                  if (iVar10 < iVar21 / 2) {
                    local_140 = 1;
                    break;
                  }
                  local_150 = local_150 + 1;
                } while (local_150 < DAT_0080338c);
              }
              if (local_140 == 0) {
                iVar21 = 0x10;
                uVar11 = FUN_006db910(DAT_00803304,DAT_00803308,iVar16,iVar17);
                local_74 = (int *)FUN_006db990(uVar11,iVar21);
                local_b0 = (int)local_74 - 3;
                if (local_b0 <= (int)((int)local_74 + 3U)) {
                  do {
                    if (local_b0 < 0) {
                      iVar21 = local_b0 + 0x10;
                    }
                    else {
                      iVar21 = local_b0;
                      if (0xf < local_b0) {
                        iVar21 = local_b0 + -0x10;
                      }
                    }
                    iVar19 = FUN_00561dc0(iVar16,iVar17,iVar21);
                    FUN_00564f30(iVar16,iVar17,iVar19,local_74,DAT_0080330c,local_88);
                    if (-1 < local_8c) {
                      FUN_00564f30(iVar16,iVar17,iVar19,local_74,DAT_008032e8,local_88);
                    }
                    local_b0 = local_b0 + 3;
                  } while (local_b0 <= (int)((int)local_74 + 3U));
                }
              }
            }
            local_50 = local_50 + 3;
          } while (local_50 < local_28_mg1);
        }
        piVar10 = local_160;
        iVar17 = local_88 + 3;
      }
      iVar16 = ((local_8c * 0x19 + 0x19) * 4) / (int)uVar20;
      if (iVar16 < DAT_0080337c) {
        DAT_0080337c = iVar16;
      }
      if (100 - iVar16 < DAT_00803314) {
        DAT_00803314 = 100 - iVar16;
      }
      DAT_00803398 = DAT_0080337c + DAT_00803314;
      if (0 < (int)DAT_00803398) {
        iVar16 = 0x7fffffff;
        iVar17 = 0;
        if (0 < DAT_0080337c) {
          do {
            if (DAT_008032f8[iVar17 * 5 + 3] < iVar16) {
              iVar16 = DAT_008032f8[iVar17 * 5 + 3];
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < DAT_0080337c);
        }
        iVar17 = 0;
        if (0 < DAT_00803314) {
          do {
            if (DAT_008032f4[iVar17 * 5 + 3] < iVar16) {
              iVar16 = DAT_008032f4[iVar17 * 5 + 3];
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < DAT_00803314);
        }
        iVar16 = (int)(iVar16 * 0xf + (iVar16 * 0xf >> 0x1f & 0xfU)) >> 4;
        iVar17 = 0;
        if (0 < DAT_0080337c) {
          do {
            DAT_008032f8[iVar17 * 5 + 3] = DAT_008032f8[iVar17 * 5 + 3] - iVar16;
            piVar10[iVar17] = DAT_008032f8[iVar17 * 5 + 3];
            iVar17 = iVar17 + 1;
          } while (iVar17 < DAT_0080337c);
        }
        iVar17 = 0;
        if (0 < DAT_00803314) {
          do {
            DAT_008032f4[iVar17 * 5 + 3] = DAT_008032f4[iVar17 * 5 + 3] - iVar16;
            piVar10[DAT_0080337c + iVar17] = DAT_008032f4[iVar17 * 5 + 3];
            iVar17 = iVar17 + 1;
          } while (iVar17 < DAT_00803314);
        }
        piVar23 = DAT_00803300 + DAT_0080337c * 5;
        for (uVar12 = DAT_00803314 * 5 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
          *piVar23 = *DAT_008032f4;
          DAT_008032f4 = DAT_008032f4 + 1;
          piVar23 = piVar23 + 1;
        }
        for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
          *(char *)piVar23 = (char)*DAT_008032f4;
          DAT_008032f4 = (int *)((int)DAT_008032f4 + 1);
          piVar23 = (int *)((int)piVar23 + 1);
        }
        DAT_008032f4 = DAT_00803300 + DAT_0080337c * 5;
        local_6c[0] = thunk_FUN_0055f0c0(piVar10,DAT_00803398,uVar20,10,param_10,FUN_00562170,
                                         FUN_00564dd0);
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_8 = 1;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_158 = 0;
          local_78 = 0;
          iVar17 = local_54;
          local_40 = (int *)&stack0xfffffe18;
          local_1c = &stack0xfffffe18;
          temp_203f9621b1d8 = DAT_008032f4;
          piVar10 = (int *)&stack0xfffffe18;
          puVar5 = &stack0xfffffe18;
          iVar16 = local_8c;
          if (-1 < local_8c) {
            do {
              local_38 = -30000;
              local_150 = 0;
              iVar16 = local_158;
              temp_3f50488dac = DAT_008032f8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < temp_3f50488dac[3]) {
                    iVar16 = 30000;
                    iVar17 = 0;
                    if (0 < local_158) {
                      do {
                        local_EAX_5415 =
                             FUN_006acf90(DAT_00803300[local_40[iVar17] * 5],
                                          (DAT_00803300 + local_40[iVar17] * 5)[1],*temp_3f50488dac,
                                          temp_3f50488dac[1]);
                        if (local_EAX_5415 < iVar16) {
                          iVar16 = local_EAX_5415;
                        }
                        iVar17 = iVar17 + 1;
                      } while (iVar17 < local_158);
                    }
                    if (local_38 < iVar16) {
                      local_54 = local_150;
                      local_38 = iVar16;
                    }
                  }
                  local_150 = local_150 + 1;
                  temp_3f50488dac = temp_3f50488dac + 5;
                  iVar16 = local_158;
                  iVar17 = local_54;
                  piVar13 = local_40;
                } while (local_150 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar13[iVar16] = -1;
              }
              else {
                DAT_008032f8[iVar17 * 5 + 3] = -1;
                piVar13[iVar16] = iVar17;
              }
              local_158 = iVar16 + 1;
              local_78 = local_78 + 1;
              temp_203f9621b1d8 = DAT_008032f4;
              piVar10 = local_40;
              puVar5 = local_1c;
              iVar16 = local_8c;
            } while (local_78 <= local_8c);
          }
          while (local_1c = puVar5, local_40 = piVar10, local_78 = iVar16 + 1,
                DAT_008032f4 = temp_203f9621b1d8, local_78 < (int)uVar20) {
            local_38 = -30000;
            local_150 = 0;
            iVar16 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < temp_203f9621b1d8[3]) {
                  iVar16 = 30000;
                  iVar17 = 0;
                  if (0 < local_158) {
                    do {
                      local_EAX_5654 =
                           FUN_006acf90(DAT_00803300[local_40[iVar17] * 5],
                                        (DAT_00803300 + local_40[iVar17] * 5)[1],*temp_203f9621b1d8,
                                        temp_203f9621b1d8[1]);
                      if (local_EAX_5654 < iVar16) {
                        iVar16 = local_EAX_5654;
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 < local_158);
                  }
                  if (local_38 < iVar16) {
                    local_54 = local_150;
                    local_38 = iVar16;
                  }
                }
                local_150 = local_150 + 1;
                temp_203f9621b1d8 = temp_203f9621b1d8 + 5;
                iVar16 = local_78;
              } while (local_150 < DAT_00803314);
            }
            if (local_38 < 0) {
              local_40[local_158] = -1;
            }
            else {
              DAT_00803300[(DAT_0080337c + local_54) * 5 + 3] = -1;
              local_40[local_158] = local_54 + DAT_0080337c;
            }
            local_158 = local_158 + 1;
            temp_203f9621b1d8 = DAT_008032f4;
            piVar10 = local_40;
            puVar5 = local_1c;
          }
        }
        iVar16 = 0;
        if (0 < (int)uVar20) {
          do {
            iVar17 = local_40[iVar16];
            if (-1 < iVar17) {
              iVar21 = local_174[iVar16];
              *(int *)(iVar21 + 4) = DAT_00803300[iVar17 * 5] + DAT_008033bc;
              *(int *)(iVar21 + 8) = DAT_00803300[iVar17 * 5 + 1] + DAT_008033c0;
              if (local_8c < iVar16) {
                *(int *)(iVar21 + 0xc) = DAT_008032f0;
                iVar11 = DAT_008032ec;
              }
              else {
                *(int *)(iVar21 + 0xc) = DAT_00803374;
                iVar11 = DAT_00803378;
              }
              *(int *)(iVar21 + 0x10) = iVar11;
              *(int *)(iVar21 + 0x14) = DAT_00803300[iVar17 * 5 + 2];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < (int)uVar20);
        }
      }
      g_currentExceptionFrame = local_1b8.previous;
      iVar14 = local_70;
    }
    else {
      g_currentExceptionFrame = local_1b8.previous;
      iVar15 = ReportDebugMessage("E:\\__titans\\scoreai.cpp",0xdc2,0,iVar14,"%s",
                                  "AiAiCalcMinesFields");
      if (iVar15 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar14;
    iVar16 = local_70;
    FreeAndNull(local_6c);
    FreeAndNull(&DAT_008033b4);
    FreeAndNull(local_60);
    FreeAndNull(&DAT_00803380);
    iVar17 = 0;
    do {
      FreeAndNull(DAT_008032fc + iVar17);
      iVar17 = iVar17 + 4;
    } while (iVar17 < 0x80);
    iVar17 = 0;
    do {
      FreeAndNull((void *)(iVar17 + (int)DAT_008033b0));
      iVar17 = iVar17 + 4;
    } while (iVar17 < 0x40);
    if (iVar16 != 0) {
      RaiseInternalException
                (iVar16,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",0xdd4);
    }
  }
  ExceptionList = local_14;
  return;
}

