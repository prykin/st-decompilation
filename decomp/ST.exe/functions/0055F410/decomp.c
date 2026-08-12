#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 2390 | 2408 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void AiCalcDispositionAreas
               (uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
               ,int param_8,int param_9,uint param_10)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar15;
  int iVar7;
  short *psVar8;
  short *psVar9;
  int local_EAX_3726;
  int *local_EAX_4178;
  int *piVar10;
  int *local_EAX_4230;
  int iVar17;
  int uVar12;
  int iVar20;
  int local_EAX_5398;
  int local_EAX_5637;
  int iVar16;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar18;
  STWorldCell *pSVar19;
  uint uVar20;
  int iVar21;
  void *pvVar22;
  int *piVar23;
  int *piVar24;
  bool bVar25;
  InternalExceptionFrame local_1b8;
  int local_170;
  STWorldCell *local_168;
  int *local_164;
  int local_15c;
  int local_154;
  int local_148;
  int local_144;
  int local_13c [12];
  int local_10c;
  int local_e8;
  int local_e4;
  int local_dc;
  void *local_d4;
  int *local_d0_mg1;
  int local_cc;
  int local_c4;
  int local_c0;
  int local_b0;
  int local_ac;
  byte *local_a4;
  int local_a0;
  int local_98;
  int local_94;
  short *local_90;
  int local_8c;
  int local_88;
  int *local_84;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int *local_6c [3];
  void *local_60 [3];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  void *local_30;
  int local_28_mg1;
  short *local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  int *temp_3fb0403402;
  int *temp_203fd2ac8a80;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079afd0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe14;
  local_6c[0] = nullptr;
  local_70 = 0;
  if ((param_4 != 0) && (0 < param_5)) {
    _DAT_00803318 = 0;
    _DAT_0080331c = 3;
    DAT_00803320 = 2;
    DAT_00803324 = 3;
    DAT_00803328 = 5;
    DAT_0080332c = 4;
    DAT_00803330 = 5;
    DAT_00803334 = 2;
    DAT_00803338 = 10;
    DAT_0080333c = 5;
    DAT_00803340 = 1;
    DAT_00803344 = 100;
    _DAT_00803348 = 5;
    _DAT_0080334c = 3;
    _DAT_00803350 = 3;
    DAT_00803358 = 5;
    DAT_0080335c = 0x14;
    _DAT_00803360 = 2;
    _DAT_00803364 = 2;
    DAT_00803368 = 10;
    _DAT_0080336c = 0x14;
    _DAT_00803370 = 10;
    DAT_00803354 = 5;
    DAT_008033b4 = nullptr;
    local_60[0] = nullptr;
    DAT_00803300 = nullptr;
    DAT_00803314 = 0;
    DAT_0080337c = 0;
    puVar6 = (undefined4 *)(param_4 + 8);
    iVar13 = param_5;
    ExceptionList = &local_14;
    do {
      puVar6[-1] = 0xffffffff;
      *puVar6 = 0xffffffff;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6 = puVar6 + 6;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    DAT_00803390 = 0x28;
    DAT_008033bc = param_2 + -0x28;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x28;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar13 = param_2 + 0x28;
    if (g_pathingGrid.sizeX <= iVar13) {
      iVar13 = g_pathingGrid.sizeX + -1;
    }
    iVar14 = param_3 + 0x28;
    if (g_pathingGrid.sizeY <= iVar14) {
      iVar14 = g_pathingGrid.sizeY + -1;
    }
    DAT_008033a4 = (iVar13 - DAT_008033bc) + 1;
    DAT_008033a8 = (iVar14 - DAT_008033c0) + 1;
    DAT_008033ac = DAT_008033a8 * DAT_008033a4;
    DAT_00803304 = param_2 - DAT_008033bc;
    DAT_00803308 = param_3 - DAT_008033c0;
    local_1b8.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_1b8;
    iVar15 = Library::MSVCRT::__setjmp3
                       (local_1b8.jumpBuffer,2,Library::MSVCRT::__seh_longjmp_unwind_4,0xffffffff);
    local_1c = &stack0xfffffe14;
    if (iVar15 == 0) {
      local_1c = &stack0xfffffe14;
      local_60[0] = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      DAT_00803380 = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      local_8 = iVar15;
      Library::MSVCRT::FUN_0072da40();
      local_a4 = &stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_84 = (int *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      DAT_008032fc = &stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      DAT_008033b0 = (undefined4 *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_164 = (int *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_80 = (undefined4 *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      DAT_00803300 = (int *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_1c = &stack0xfffffe14;
      local_8 = 0xffffffff;
      memset(&stack0xfffffe14, 0, 0x80); /* compiler bulk-zero initialization */
      iVar13 = 0;
      DAT_008033b8 = DAT_008032fc + 0x40;
      memset(DAT_008033b0, 0, 0x40); /* compiler bulk-zero initialization */
      DAT_008032f8 = DAT_00803300;
      DAT_008032f4 = DAT_00803300 + 500;
      uVar20 = 0;
      local_78 = 0;
      DAT_00803310 = &stack0xfffffe14;
      puVar5 = &stack0xfffffe14;
      if (0 < param_5) {
        do {
          piVar23 = (int *)(param_4 + local_78 * 0x18);
          iVar13 = *piVar23;
          if (0 < iVar13) {
            iVar14 = 0;
            if (0 < (int)uVar20) {
              do {
                if (**(int **)(&stack0xfffffe14 + iVar14 * 4) < iVar13) break;
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar20);
            }
            if (iVar14 < (int)uVar20) {
              Library::MSVCRT::FUN_0072da70
                        ((undefined4 *)(&stack0xfffffe18 + iVar14 * 4),
                         (AnonPointee_TLOBaseTy_0607 *)(&stack0xfffffe14 + iVar14 * 4),
                         (iVar14 * 0x3fffffff + uVar20) * 4);
            }
            *(int **)(&stack0xfffffe14 + iVar14 * 4) = piVar23;
            uVar20 = uVar20 + 1;
          }
          local_78 = local_78 + 1;
          puVar5 = DAT_00803310;
        } while (local_78 < param_5);
      }
      DAT_00803310 = puVar5;
      iVar13 = -1;
      iVar14 = -1;
      local_98 = -1;
      local_48 = (uint)(*(int *)local_80[uVar20 - 1] < 0x15);
      for (iVar21 = uVar20 - 2; -1 < iVar21; iVar21 = iVar21 + -1) {
        iVar18 = *(int *)local_80[iVar21];
        if ((10 < iVar18) &&
           (iVar7 = iVar18 - *(int *)local_80[iVar21 + 1], *(int *)local_80[iVar21 + 1] < iVar7)) {
          if (iVar7 <= iVar13) {
            if ((local_48 == 0) || (iVar18 < 0x15)) goto LAB_0055f7ef;
            local_48 = 0;
          }
          local_98 = iVar21;
          iVar13 = iVar7;
          iVar14 = iVar21;
        }
LAB_0055f7ef:
      }
      if (*(int *)local_80[iVar14 + 1] < 0x32) {
        local_3c = (*(int *)local_80[iVar14 + 1] + 5) / 10;
      }
      else {
        local_3c = 5;
      }
      DAT_008032f0 = *(int *)(&DAT_007a4c24 + local_3c * 8);
      DAT_008032ec = *(int *)(&DAT_007a4c20 + local_3c * 8);
      DAT_0080330c = DAT_008032ec * DAT_008032f0;
      if (-1 < iVar14) {
        if (*(int *)*local_80 < 0x32) {
          local_c4 = (*(int *)*local_80 + 5) / 10;
        }
        else {
          local_c4 = 5;
        }
        DAT_00803374 = *(int *)(&DAT_007a4c24 + local_c4 * 8);
        DAT_00803378 = *(int *)(&DAT_007a4c20 + local_c4 * 8);
        DAT_008032e8 = DAT_00803378 * DAT_00803374;
      }
      local_a0 = DAT_00803304 + -0x14;
      if (DAT_00803304 + -0x14 < 0) {
        local_a0 = 0;
      }
      local_e8 = DAT_00803308 + -0x14;
      if (DAT_00803308 + -0x14 < 0) {
        local_e8 = 0;
      }
      local_cc = DAT_00803304 + 0x14;
      if (DAT_008033a4 <= DAT_00803304 + 0x14) {
        local_cc = DAT_008033a4 + -1;
      }
      local_170 = DAT_00803308 + 0x14;
      if (DAT_008033a8 <= local_170) {
        local_170 = DAT_008033a8 + -1;
      }
      local_b0 = 0;
      iVar13 = DAT_008033a4;
      iVar14 = local_e8;
      if (0 < local_e8) {
        do {
          iVar21 = local_b0 * iVar13 * 2;
          local_30 = (void *)(iVar21 + (int)DAT_00803380);
          local_d4 = (void *)(iVar21 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (local_b0 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar21 = 0;
          if (0 < iVar13) {
            do {
              iVar13 = 0;
              iVar18 = 0;
              psVar9 = local_90;
              do {
                if (*psVar9 == 0) {
                  iVar13 = iVar13 + 1;
                }
                iVar18 = iVar18 + 1;
                psVar9 = psVar9 + g_pathingGrid.planeStride;
              } while (iVar18 < 5);
              *(char *)((int)local_30 + iVar21 * 2) = (char)iVar13;
              if (iVar13 < 1) {
                *(undefined2 *)((int)local_d4 + iVar21 * 2) = 0xffff;
              }
              else if (iVar13 < 3) {
                *(short *)((int)local_d4 + iVar21 * 2) = (3 - (short)iVar13) * 3;
              }
              else {
                *(undefined2 *)((int)local_d4 + iVar21 * 2) = 0;
              }
              iVar21 = iVar21 + 1;
              local_90 = local_90 + 1;
              iVar13 = DAT_008033a4;
            } while (iVar21 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < local_e8);
      }
      for (; iVar14 <= local_170; iVar14 = iVar14 + 1) {
        iVar21 = iVar14 * iVar13 * 2;
        local_30 = (void *)(iVar21 + (int)DAT_00803380);
        local_d4 = (void *)(iVar21 + (int)local_60[0]);
        psVar9 = g_pathingGrid.cells +
                 (iVar14 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
        iVar21 = 0;
        if (0 < local_a0) {
          do {
            iVar13 = 0;
            iVar18 = 0;
            psVar8 = psVar9;
            do {
              if (*psVar8 == 0) {
                iVar13 = iVar13 + 1;
              }
              iVar18 = iVar18 + 1;
              psVar8 = psVar8 + g_pathingGrid.planeStride;
            } while (iVar18 < 5);
            *(char *)((int)local_30 + iVar21 * 2) = (char)iVar13;
            if (iVar13 < 1) {
              *(undefined2 *)((int)local_d4 + iVar21 * 2) = 0xffff;
            }
            else if (iVar13 < 3) {
              *(short *)((int)local_d4 + iVar21 * 2) = (3 - (short)iVar13) * 3;
            }
            else {
              *(undefined2 *)((int)local_d4 + iVar21 * 2) = 0;
            }
            iVar21 = iVar21 + 1;
            psVar9 = psVar9 + 1;
            iVar13 = DAT_008033a4;
          } while (iVar21 < local_a0);
        }
        psVar9 = g_pathingGrid.cells +
                 (int)g_pathingGrid.sizeX * (iVar14 + DAT_008033c0) + local_a0 + DAT_008033bc;
        local_168 = g_worldGrid.cells +
                    (int)g_worldGrid.sizeX * (iVar14 + DAT_008033c0) + local_a0 + DAT_008033bc;
        local_94 = local_a0;
        while (local_94 <= local_cc) {
          iVar21 = 0;
          iVar13 = 0;
          local_34 = 0;
          pSVar19 = local_168;
          local_24 = psVar9;
          do {
            if (*local_24 == 0) {
              iVar13 = iVar13 + 1;
              if ((pSVar19->objects[1] != nullptr) &&
                 (pSVar19->objects[1]->value_20 == 0x1ae)) {
                iVar21 = iVar21 + 3;
              }
            }
            else if (pSVar19->objects[0] != nullptr) {
              iVar13 = iVar13 + 1;
              local_dc = iVar13;
              if (param_1 != 0xff) {
                bVar2 = *(byte *)&pSVar19->objects[0][1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_0055fc5b:
                    iVar18 = 0;
                  }
                  else {
                    uVar11 = param_1 & 0xff;
                    bVar1 = g_playerRelationMatrix[bVar2][uVar11];
                    if ((bVar1 == 0) && (g_playerRelationMatrix[uVar11][bVar2] == 0)) {
                      iVar18 = -2;
                    }
                    else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar11][bVar2] == 0)) {
                      iVar18 = -1;
                    }
                    else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar11][bVar2] == 1)) {
                      iVar18 = 1;
                    }
                    else {
                      if ((bVar1 != 1) || (g_playerRelationMatrix[uVar11][bVar2] != 1))
                      goto LAB_0055fc5b;
                      iVar18 = 2;
                    }
                  }
                  bVar25 = iVar18 < 0;
                }
                else {
                  bVar25 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                }
                if (bVar25) goto LAB_0055fc71;
              }
              iVar21 = iVar21 + 1;
            }
LAB_0055fc71:
            local_34 = local_34 + 1;
            local_24 = local_24 + g_pathingGrid.planeStride;
            pSVar19 = pSVar19 + g_worldGrid.planeStride;
          } while (local_34 < 5);
          *(byte *)((int)local_30 + local_94 * 2) = (char)iVar21 << 4 | (byte)iVar13;
          if (iVar13 - iVar21 < 1) {
            *(undefined2 *)((int)local_d4 + local_94 * 2) = 0xffff;
          }
          else if (iVar13 - iVar21 < 3) {
            *(short *)((int)local_d4 + local_94 * 2) = (((short)iVar21 - (short)iVar13) + 3) * 3;
          }
          else {
            *(undefined2 *)((int)local_d4 + local_94 * 2) = 0;
          }
          local_94 = local_94 + 1;
          psVar9 = psVar9 + 1;
          local_168 = local_168 + 1;
          iVar13 = DAT_008033a4;
        }
        local_90 = g_pathingGrid.cells +
                   (iVar14 + DAT_008033c0) * (int)g_pathingGrid.sizeX + local_cc + DAT_008033bc + 1;
        iVar21 = local_cc + 1;
        if (iVar21 < iVar13) {
          do {
            iVar13 = 0;
            iVar18 = 0;
            psVar9 = local_90;
            do {
              if (*psVar9 == 0) {
                iVar13 = iVar13 + 1;
              }
              iVar18 = iVar18 + 1;
              psVar9 = psVar9 + g_pathingGrid.planeStride;
            } while (iVar18 < 5);
            *(char *)((int)local_30 + iVar21 * 2) = (char)iVar13;
            if (iVar13 < 1) {
              *(undefined2 *)((int)local_d4 + iVar21 * 2) = 0xffff;
            }
            else if (iVar13 < 3) {
              *(short *)((int)local_d4 + iVar21 * 2) = (3 - (short)iVar13) * 3;
            }
            else {
              *(undefined2 *)((int)local_d4 + iVar21 * 2) = 0;
            }
            iVar21 = iVar21 + 1;
            local_90 = local_90 + 1;
            iVar13 = DAT_008033a4;
          } while (iVar21 < DAT_008033a4);
        }
      }
      local_b0 = local_170 + 1;
      if (local_b0 < DAT_008033a8) {
        do {
          iVar14 = local_b0 * iVar13 * 2;
          local_30 = (void *)((int)DAT_00803380 + iVar14);
          local_d4 = (void *)(iVar14 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (local_b0 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar14 = 0;
          if (0 < iVar13) {
            do {
              iVar13 = 0;
              iVar21 = 0;
              psVar9 = local_90;
              do {
                if (*psVar9 == 0) {
                  iVar13 = iVar13 + 1;
                }
                iVar21 = iVar21 + 1;
                psVar9 = psVar9 + g_pathingGrid.planeStride;
              } while (iVar21 < 5);
              *(char *)((int)local_30 + iVar14 * 2) = (char)iVar13;
              if (iVar13 < 1) {
                *(undefined2 *)((int)local_d4 + iVar14 * 2) = 0xffff;
              }
              else if (iVar13 < 3) {
                *(short *)((int)local_d4 + iVar14 * 2) = (3 - (short)iVar13) * 3;
              }
              else {
                *(undefined2 *)((int)local_d4 + iVar14 * 2) = 0;
              }
              iVar14 = iVar14 + 1;
              local_90 = local_90 + 1;
              iVar13 = DAT_008033a4;
            } while (iVar14 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < DAT_008033a8);
      }
      if (((param_8 != 0) && (0 < param_9)) && (local_78 = 0, 0 < param_9)) {
        do {
          piVar23 = (int *)(param_8 + local_78 * 0x18);
          iVar14 = *piVar23;
          if (0 < iVar14) {
            local_88 = piVar23[1] - DAT_008033bc;
            if ((-1 < local_88) && (local_88 < iVar13)) {
              iVar21 = piVar23[2] - DAT_008033c0;
              local_c0 = iVar21;
              if ((-1 < iVar21) && (iVar21 < DAT_008033a8)) {
                iVar13 = piVar23[3];
                if ((iVar13 < 1) || (iVar18 = piVar23[4], iVar18 < 1)) {
                  iVar13 = 0;
                  do {
                    if (iVar14 <= (int)(&DAT_007c9614)[iVar13]) break;
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < 9);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar13 = *(int *)(local_3c * 8 + 0x7c9640);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar18 = *(int *)(local_3c * 8 + 0x7c963c);
                }
                local_d0_mg1 = FUN_00561240(iVar13,iVar18,piVar23[5]);
                if (1 < *local_d0_mg1) {
                  local_144 = (iVar14 << 0x10) / *local_d0_mg1;
                  iVar13 = 0;
                  pvVar22 = (void *)((int)DAT_00803380 +
                                    (local_d0_mg1[3] + iVar21) * DAT_008033a4 * 2);
                  local_b0 = 0;
                  if (0 < local_d0_mg1[4]) {
                    do {
                      iVar14 = local_d0_mg1[3] + iVar21 + local_b0;
                      if ((-1 < iVar14) && (iVar14 < DAT_008033a8)) {
                        local_ac = local_d0_mg1[local_b0 * 2 + 6] + local_88;
                        for (iVar14 = local_d0_mg1[local_b0 * 2 + 5] + local_88; iVar14 <= local_ac;
                            iVar14 = iVar14 + 1) {
                          if (((-1 < iVar14) && (iVar14 < DAT_008033a4)) &&
                             (iVar13 = iVar13 + local_144, 0x10000 < iVar13)) {
                            bVar2 = *(byte *)((int)pvVar22 + iVar14 * 2);
                            if ((int)((uint)(bVar2 >> 4) + (iVar13 >> 0x10)) < 0xf) {
                              *(byte *)((int)pvVar22 + iVar14 * 2) =
                                   (char)((uint)iVar13 >> 0x10) * '\x10' + bVar2;
                            }
                            else {
                              *(byte *)((int)pvVar22 + iVar14 * 2) = (bVar2 & 7) - 0x10;
                            }
                          }
                        }
                      }
                      local_b0 = local_b0 + 1;
                      pvVar22 = (void *)((int)pvVar22 + DAT_008033a4 * 2);
                      iVar21 = local_c0;
                    } while (local_b0 < local_d0_mg1[4]);
                  }
                }
                FreeAndNull(&local_d0_mg1);
                iVar13 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_9);
      }
      iVar14 = 0;
      DAT_0080338c = 0;
      if ((param_6 != 0) && (0 < param_7)) {
        iVar21 = (*(int *)local_80[uVar20 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar21;
        local_78 = 0;
        if (0 < param_7) {
          do {
            piVar23 = (int *)(param_6 + local_78 * 0x18);
            iVar18 = piVar23[1] - DAT_008033bc;
            if ((-1 < iVar18) && (iVar18 < iVar13)) {
              iVar7 = piVar23[2] - DAT_008033c0;
              local_b0 = iVar7;
              if ((-1 < iVar7) && (iVar7 < DAT_008033a8)) {
                iVar10 = piVar23[3];
                if (iVar10 == -10) {
                  iVar10 = *(int *)(&DAT_007a4c20 + piVar23[4] * 8);
                  local_4c = *(int *)(&DAT_007a4c24 + piVar23[4] * 8) * iVar10;
LAB_0056016e:
                }
                else if (iVar10 == 1) {
                  iVar10 = *(int *)(&DAT_007a4b60 + piVar23[4] * 4);
                  local_4c = iVar10;
                }
                else {
                  if (iVar10 != 2) {
                    iVar10 = *(int *)(&DAT_007a4bf8 + piVar23[4] * 4) * 2;
                    local_4c = *(int *)(&DAT_007a4bf8 + piVar23[4] * 4) * 6;
                    goto LAB_0056016e;
                  }
                  iVar10 = *(int *)(&DAT_007a4b88 + piVar23[4] * 8);
                  local_4c = iVar10;
                }
                if (iVar21 <= (*piVar23 * 100) / local_4c) {
                  *(int *)(DAT_00803310 + iVar14 * 0x14) = iVar18;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 4) = iVar7;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 8) = 0;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 0xc) = 0;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 0x10) = iVar10;
                  iVar14 = DAT_0080338c + 1;
                  iVar13 = DAT_008033a4;
                  DAT_0080338c = iVar14;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_7);
        }
      }
      DAT_0080339c = 5;
      iVar14 = 0;
      iVar21 = 0;
      local_e4 = 0;
      for (iVar18 = local_e8; iVar18 <= local_170; iVar18 = iVar18 + 1) {
        local_30 = (void *)((int)DAT_00803380 + iVar18 * iVar13 * 2);
        for (iVar7 = local_a0; iVar7 <= local_cc; iVar7 = iVar7 + 1) {
          if ((*(byte *)((int)local_30 + iVar7 * 2) & 0xf0) != 0) {
            iVar14 = iVar14 + 1;
            iVar21 = iVar21 + iVar7;
            local_e4 = local_e4 + iVar18;
          }
        }
      }
      iVar13 = DAT_00803304;
      iVar18 = DAT_00803308;
      if (0 < iVar14) {
        iVar13 = (iVar21 + iVar14 / 2) / iVar14;
        iVar18 = (local_e4 + iVar14 / 2) / iVar14;
        local_EAX_3726 = FUN_006acf90(iVar13,iVar18,DAT_00803304,DAT_00803308);
        if (5 < local_EAX_3726) {
          iVar13 = ((local_EAX_3726 + -5) * DAT_00803304 + iVar13 * 5) / local_EAX_3726;
          iVar18 = ((local_EAX_3726 + -5) * DAT_00803308 + iVar18 * 5) / local_EAX_3726;
        }
      }
      DAT_00803308 = iVar18;
      DAT_00803304 = iVar13;
      piVar23 = local_13c;
      for (iVar13 = 0x14; pbVar4 = local_a4, iVar14 = DAT_0080339c, piVar12 = local_84, iVar13 != 0;
          iVar13 = iVar13 + -1) {
        *piVar23 = 0;
        piVar23 = piVar23 + 1;
      }
      for (; local_84 = piVar12, iVar14 < 0xd; iVar14 = iVar14 + 1) {
        local_28_mg1 = FUN_0055ee70(pbVar4,iVar14,1);
        iVar13 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar18 = (char)pbVar4[iVar13 * 2] + DAT_00803304;
            iVar21 = (char)pbVar4[iVar13 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar18) && (iVar18 < DAT_008033a4)) && (-1 < iVar21)) &&
               ((iVar21 < DAT_008033a8 &&
                ((*(byte *)((int)DAT_00803380 + (iVar21 * DAT_008033a4 + iVar18) * 2) & 0xf0) != 0))
               )) {
              local_13c[iVar14] = local_13c[iVar14] + 1;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < local_28_mg1);
        }
        local_13c[iVar14] = (local_13c[iVar14] * 100) / local_28_mg1;
        piVar12 = local_84;
      }
      iVar13 = -30000;
      iVar14 = 0xb;
      if (DAT_0080339c < 0xc) {
        do {
          iVar21 = ((0xc - iVar14) * local_10c + local_13c[iVar14]) / (0xd - iVar14) - local_10c;
          if (iVar13 <= iVar21) {
            DAT_00803384 = iVar14 + 1;
            iVar13 = iVar21;
          }
          iVar14 = iVar14 + -1;
        } while (DAT_0080339c <= iVar14);
      }
      if (DAT_00803384 < 10) {
        DAT_00803384 = DAT_00803384 + 2;
      }
      *piVar12 = DAT_00803304;
      piVar12[1] = DAT_00803308;
      DAT_008033b4 = FUN_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar12,1);
      FreeAndNull(local_60);
      thunk_FUN_0055dee0(pbVar4);
      iVar13 = 0;
      do {
        piVar12 = (int *)&stack0xfffffe14;
        iVar14 = (int)(iVar13 * 0x168 + (iVar13 * 0x168 >> 0x1f & 0xfU)) >> 4;
        local_EAX_4178 = FUN_00561240(DAT_008032f0,DAT_008032ec,iVar14);
        *(int **)(DAT_008032fc + iVar13 * 4) = local_EAX_4178;
        piVar10 = FUN_00561240(DAT_00803374,DAT_00803378,iVar14);
        *(int **)(DAT_008033b8 + iVar13 * 4) = piVar10;
        local_EAX_4230 = FUN_00561240(5,DAT_008032ec,iVar14);
        DAT_008033b0[iVar13] = local_EAX_4230;
        iVar13 = iVar13 + 1;
        iVar14 = DAT_0080339c;
        piVar23 = local_164;
      } while (iVar13 < 0x10);
      for (; local_164 = piVar23, local_8c = iVar14, iVar14 < 0x14; iVar14 = iVar14 + 2) {
        local_28_mg1 = FUN_0055ee70(pbVar4,iVar14,1);
        iVar21 = DAT_00803384 - DAT_0080339c;
        iVar13 = 0x14 - DAT_00803384;
        if (iVar21 < iVar13) {
          uVar11 = DAT_00803384 - iVar14 >> 0x1f;
          iVar18 = (DAT_00803384 - iVar14 ^ uVar11) - uVar11;
          iVar18 = iVar18 * iVar18;
          iVar13 = iVar13 * iVar13;
        }
        else {
          uVar11 = DAT_00803384 - iVar14 >> 0x1f;
          iVar18 = (DAT_00803384 - iVar14 ^ uVar11) - uVar11;
          iVar18 = iVar18 * iVar18;
          iVar13 = iVar21 * iVar21;
        }
        DAT_00803388 = (iVar13 - iVar18) / 2;
        local_50 = 0;
        if (0 < local_28_mg1) {
          do {
            local_94 = (char)local_a4[local_50 * 2] + DAT_00803304;
            if (((-1 < local_94) && (local_94 < DAT_008033a4)) &&
               ((iVar13 = (char)local_a4[local_50 * 2 + 1] + DAT_00803308, -1 < iVar13 &&
                ((iVar13 < DAT_008033a8 &&
                 (0 < *(short *)((int)DAT_008033b4 + (iVar13 * DAT_008033a4 + local_94) * 2))))))) {
              iVar14 = 0;
              local_148 = 0;
              if (0 < DAT_0080338c) {
                do {
                  piVar23 = (int *)(DAT_00803310 + iVar14 * 0x14);
                  iVar21 = piVar23[4];
                  if (piVar23[4] <= DAT_008032ec) {
                    iVar21 = DAT_008032ec;
                  }
                  iVar17 = FUN_006acf90(*piVar23,piVar23[1],local_94,iVar13);
                  if (iVar17 < iVar21 / 2) {
                    local_148 = 1;
                    break;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < DAT_0080338c);
              }
              if (local_148 == 0) {
                iVar14 = 0x10;
                uVar12 = FUN_006db910(DAT_00803304,DAT_00803308,local_94,iVar13);
                local_74 = (int *)FUN_006db990(uVar12,iVar14);
                iVar14 = (int)local_74 - 3;
                if (iVar14 <= (int)((int)local_74 + 3U)) {
                  do {
                    if (iVar14 < 0) {
                      iVar21 = iVar14 + 0x10;
                    }
                    else {
                      iVar21 = iVar14 + -0x10;
                      if (iVar14 < 0x10) {
                        iVar21 = iVar14;
                      }
                    }
                    iVar20 = FUN_00561dc0(local_94,iVar13,iVar21);
                    FUN_005623c0(local_94,iVar13,iVar20,local_74,DAT_0080330c);
                    if (-1 < local_98) {
                      FUN_005623c0(local_94,iVar13,iVar20,local_74,DAT_008032e8);
                    }
                    iVar14 = iVar14 + 3;
                  } while (iVar14 <= (int)((int)local_74 + 3U));
                }
              }
            }
            local_50 = local_50 + 2;
            iVar14 = local_8c;
          } while (local_50 < local_28_mg1);
        }
        piVar23 = local_164;
        pbVar4 = local_a4;
      }
      iVar13 = ((local_98 * 0x19 + 0x19) * 4) / (int)uVar20;
      if (iVar13 < DAT_0080337c) {
        DAT_0080337c = iVar13;
      }
      if (100 - iVar13 < DAT_00803314) {
        DAT_00803314 = 100 - iVar13;
      }
      DAT_00803398 = DAT_0080337c + DAT_00803314;
      if (0 < (int)DAT_00803398) {
        iVar13 = 0x7fffffff;
        iVar14 = 0;
        if (0 < DAT_0080337c) {
          do {
            if (DAT_008032f8[iVar14 * 5 + 3] < iVar13) {
              iVar13 = DAT_008032f8[iVar14 * 5 + 3];
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_0080337c);
        }
        iVar14 = 0;
        if (0 < DAT_00803314) {
          do {
            if (DAT_008032f4[iVar14 * 5 + 3] < iVar13) {
              iVar13 = DAT_008032f4[iVar14 * 5 + 3];
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_00803314);
        }
        iVar13 = (int)(iVar13 * 0xf + (iVar13 * 0xf >> 0x1f & 0xfU)) >> 4;
        iVar14 = 0;
        if (0 < DAT_0080337c) {
          do {
            DAT_008032f8[iVar14 * 5 + 3] = DAT_008032f8[iVar14 * 5 + 3] - iVar13;
            piVar23[iVar14] = DAT_008032f8[iVar14 * 5 + 3];
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_0080337c);
        }
        iVar14 = 0;
        if (0 < DAT_00803314) {
          do {
            DAT_008032f4[iVar14 * 5 + 3] = DAT_008032f4[iVar14 * 5 + 3] - iVar13;
            piVar23[DAT_0080337c + iVar14] = DAT_008032f4[iVar14 * 5 + 3];
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_00803314);
        }
        piVar24 = DAT_00803300 + DAT_0080337c * 5;
        for (uVar11 = DAT_00803314 * 5 & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
          *piVar24 = *DAT_008032f4;
          DAT_008032f4 = DAT_008032f4 + 1;
          piVar24 = piVar24 + 1;
        }
        for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
          *(char *)piVar24 = (char)*DAT_008032f4;
          DAT_008032f4 = (int *)((int)DAT_008032f4 + 1);
          piVar24 = (int *)((int)piVar24 + 1);
        }
        DAT_008032f4 = DAT_00803300 + DAT_0080337c * 5;
        local_6c[0] = thunk_FUN_0055f0c0(piVar23,DAT_00803398,uVar20,10,param_10,FUN_00562170,
                                         FUN_00562e10);
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_8 = 1;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_15c = 0;
          local_78 = 0;
          iVar14 = local_54;
          local_40 = (int *)&stack0xfffffe14;
          local_1c = &stack0xfffffe14;
          temp_203fd2ac8a80 = DAT_008032f4;
          piVar23 = (int *)&stack0xfffffe14;
          puVar5 = &stack0xfffffe14;
          iVar13 = local_98;
          if (-1 < local_98) {
            do {
              local_38 = -30000;
              local_154 = 0;
              iVar13 = local_15c;
              temp_3fb0403402 = DAT_008032f8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < temp_3fb0403402[3]) {
                    iVar13 = 30000;
                    iVar14 = 0;
                    if (0 < local_15c) {
                      do {
                        local_EAX_5398 =
                             FUN_006acf90(DAT_00803300[local_40[iVar14] * 5],
                                          (DAT_00803300 + local_40[iVar14] * 5)[1],*temp_3fb0403402,
                                          temp_3fb0403402[1]);
                        if (local_EAX_5398 < iVar13) {
                          iVar13 = local_EAX_5398;
                        }
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < local_15c);
                    }
                    if (local_38 < iVar13) {
                      local_54 = local_154;
                      local_38 = iVar13;
                    }
                  }
                  local_154 = local_154 + 1;
                  temp_3fb0403402 = temp_3fb0403402 + 5;
                  iVar13 = local_15c;
                  iVar14 = local_54;
                  piVar12 = local_40;
                } while (local_154 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar12[iVar13] = -1;
              }
              else {
                DAT_008032f8[iVar14 * 5 + 3] = -1;
                piVar12[iVar13] = iVar14;
              }
              local_15c = iVar13 + 1;
              local_78 = local_78 + 1;
              temp_203fd2ac8a80 = DAT_008032f4;
              piVar23 = local_40;
              puVar5 = local_1c;
              iVar13 = local_98;
            } while (local_78 <= local_98);
          }
          while (local_1c = puVar5, local_40 = piVar23, local_78 = iVar13 + 1,
                DAT_008032f4 = temp_203fd2ac8a80, local_78 < (int)uVar20) {
            local_38 = -30000;
            local_154 = 0;
            iVar13 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < temp_203fd2ac8a80[3]) {
                  iVar13 = 30000;
                  iVar14 = 0;
                  if (0 < local_15c) {
                    do {
                      local_EAX_5637 =
                           FUN_006acf90(DAT_00803300[local_40[iVar14] * 5],
                                        (DAT_00803300 + local_40[iVar14] * 5)[1],*temp_203fd2ac8a80,
                                        temp_203fd2ac8a80[1]);
                      if (local_EAX_5637 < iVar13) {
                        iVar13 = local_EAX_5637;
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < local_15c);
                  }
                  if (local_38 < iVar13) {
                    local_54 = local_154;
                    local_38 = iVar13;
                  }
                }
                local_154 = local_154 + 1;
                temp_203fd2ac8a80 = temp_203fd2ac8a80 + 5;
                iVar13 = local_78;
              } while (local_154 < DAT_00803314);
            }
            if (local_38 < 0) {
              local_40[local_15c] = -1;
            }
            else {
              DAT_00803300[(DAT_0080337c + local_54) * 5 + 3] = -1;
              local_40[local_15c] = local_54 + DAT_0080337c;
            }
            local_15c = local_15c + 1;
            temp_203fd2ac8a80 = DAT_008032f4;
            piVar23 = local_40;
            puVar5 = local_1c;
          }
        }
        iVar13 = 0;
        if (0 < (int)uVar20) {
          do {
            iVar14 = local_40[iVar13];
            if (-1 < iVar14) {
              iVar21 = local_80[iVar13];
              *(int *)(iVar21 + 4) = DAT_00803300[iVar14 * 5] + DAT_008033bc;
              *(int *)(iVar21 + 8) = DAT_00803300[iVar14 * 5 + 1] + DAT_008033c0;
              *(undefined4 *)(iVar21 + 0xc) = 0xfffffff6;
              iVar18 = local_c4;
              if (local_98 < iVar13) {
                iVar18 = local_3c;
              }
              *(int *)(iVar21 + 0x10) = iVar18;
              *(int *)(iVar21 + 0x14) = DAT_00803300[iVar14 * 5 + 2];
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)uVar20);
        }
      }
      g_currentExceptionFrame = local_1b8.previous;
      iVar15 = local_70;
    }
    else {
      g_currentExceptionFrame = local_1b8.previous;
      iVar16 = ReportDebugMessage("E:\\__titans\\scoreai.cpp",0x956,0,iVar15,"%s",
                                  "AiCalcDispositionAreas");
      if (iVar16 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar15;
    iVar13 = local_70;
    FreeAndNull(local_6c);
    FreeAndNull(&DAT_008033b4);
    FreeAndNull(local_60);
    FreeAndNull(&DAT_00803380);
    iVar14 = 0;
    do {
      FreeAndNull(DAT_008032fc + iVar14);
      iVar14 = iVar14 + 4;
    } while (iVar14 < 0x80);
    iVar14 = 0;
    do {
      FreeAndNull((void *)(iVar14 + (int)DAT_008033b0));
      iVar14 = iVar14 + 4;
    } while (iVar14 < 0x40);
    if (iVar13 != 0) {
      RaiseInternalException
                (iVar13,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",0x968);
    }
  }
  ExceptionList = local_14;
  return;
}

