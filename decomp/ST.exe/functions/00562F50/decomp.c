#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol temp_3f50488dac */
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
  int *piVar4;
  byte *pbVar5;
  RuntimeRecord_008032F8_0014 *pRVar6;
  RuntimeRecord_00803310_0014 *pRVar7;
  uint *puVar8;
  int iVar14;
  int iVar9;
  short *psVar10;
  short *psVar11;
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
  int *piVar12;
  int iVar13;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar20;
  STWorldCell *pSVar21;
  uint *puVar22;
  uint uVar23;
  byte *puVar24;
  RuntimeRecord_00803300_0014 *pRVar25;
  bool bVar26;
  undefined4 uStackY_219c;
  RuntimeRecord_00803300_0014 aRStackY_2198 [100];
  RuntimeRecord_008032F4_0014 aRStackY_19c8 [99];
  int iStackY_11fc;
  AnonPointee_TLOBaseTy_0607 aAStackY_11f8 [16];
  undefined4 uStackY_106c;
  undefined4 auStackY_1068 [15];
  undefined4 uStackY_102c;
  undefined4 auStackY_1028 [16];
  undefined4 auStackY_fe8 [15];
  undefined4 uStackY_fac;
  int aiStackY_fa8 [703];
  undefined4 uStackY_4ac;
  byte abStackY_4a8 [672];
  undefined4 uStackY_208;
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
  byte *local_30;
  int local_28_mg1;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  RuntimeRecord_008032F4_0014 *temp_203f9621b1d8;
  RuntimeRecord_008032F8_0014 *temp_3f50488dac;

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
    PTR_008033b4 = nullptr;
    local_60[0] = nullptr;
    g_runtimeRecords_00803300 = nullptr;
    DAT_00803314 = 0;
    DAT_0080337c = 0;
    piVar12 = (int *)(param_4 + 0xc);
    iVar18 = param_5;
    ExceptionList = &local_14;
    do {
      piVar12[-2] = -1;
      piVar12[-1] = -1;
      piVar12[2] = 0;
      if (((piVar12[-3] < 1) && (0 < *piVar12)) && (0 < piVar12[1])) {
        piVar12[-3] = (int)((piVar12[1] + 1U & 0xfffffffe) * (*piVar12 + 1U & 0xfffffffe)) / 2;
      }
      *piVar12 = 0;
      piVar12[1] = 0;
      piVar12 = piVar12 + 6;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    DAT_00803390 = 0x2c;
    DAT_008033bc = param_2 + -0x2c;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x2c;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar18 = param_2 + 0x2c;
    if (g_pathingGrid.sizeX <= iVar18) {
      iVar18 = g_pathingGrid.sizeX + -1;
    }
    iVar13 = param_3 + 0x2c;
    if (g_pathingGrid.sizeY <= iVar13) {
      iVar13 = g_pathingGrid.sizeY + -1;
    }
    DAT_008033a4 = (iVar18 - DAT_008033bc) + 1;
    DAT_008033a8 = (iVar13 - DAT_008033c0) + 1;
    DAT_008033ac = DAT_008033a8 * DAT_008033a4;
    DAT_00803304 = param_2 - DAT_008033bc;
    DAT_00803308 = param_3 - DAT_008033c0;
    local_1b8.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_1b8;
    iVar14 = Library::MSVCRT::__setjmp3(local_1b8.jumpBuffer,2);
    local_1c = &stack0xfffffe18;
    if (iVar14 == 0) {
      local_1c = &stack0xfffffe18;
      local_60[0] = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      PTR_00803380 = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      local_a0 = abStackY_4a8;
      uStackY_4ac = 0x5631b8;
      local_80 = aiStackY_fa8;
      uStackY_fac = 0x5631ca;
      PTR_008032fc = auStackY_1028;
      uStackY_102c = 0x5631e1;
      PTR_008033b0 = auStackY_1068;
      uStackY_106c = 0x5631f5;
      local_160 = (int *)aAStackY_11f8;
      iStackY_11fc = 0x563214;
      iVar18 = param_5 * -4;
      local_174 = (undefined4 *)((int)aAStackY_11f8 + iVar18);
      *(undefined4 *)((int)aAStackY_11f8 + iVar18 + -4) = 0x56322b;
      g_runtimeRecords_008032F8 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_2198 + iVar18);
      g_runtimeRecords_00803300 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_2198 + iVar18);
      (&uStackY_219c)[-param_5] = 0x563248;
      g_runtimeRecords_00803310 = (RuntimeRecord_00803310_0014 *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      local_8 = 0xffffffff;
      memset(auStackY_1028, 0, 0x80); /* compiler bulk-zero initialization */
      iVar13 = 0;
      PTR_008033b8 = auStackY_fe8;
      memset(auStackY_1068, 0, 0x40); /* compiler bulk-zero initialization */
      g_runtimeRecords_008032F4 = (RuntimeRecord_008032F4_0014 *)((int)aRStackY_19c8 + iVar18);
      uVar23 = 0;
      local_78 = 0;
      pRVar6 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_2198 + iVar18);
      puVar22 = auStackY_1028;
      pRVar25 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_2198 + iVar18);
      pRVar7 = (RuntimeRecord_00803310_0014 *)&stack0xfffffe18;
      puVar8 = auStackY_1068;
      if (0 < param_5) {
        do {
          piVar12 = (int *)(param_4 + local_78 * 0x18);
          iVar13 = *piVar12;
          if (0 < iVar13) {
            iVar20 = 0;
            if (0 < (int)uVar23) {
              do {
                if (**(int **)((int)aAStackY_11f8 + iVar20 * 4 + iVar18) < iVar13) break;
                iVar20 = iVar20 + 1;
              } while (iVar20 < (int)uVar23);
            }
            if (iVar20 < (int)uVar23) {
              Library::MSVCRT::FUN_0072da70
                        ((undefined4 *)((int)aAStackY_11f8 + iVar20 * 4 + iVar18 + 4),
                         (AnonPointee_TLOBaseTy_0607 *)((int)aAStackY_11f8 + iVar20 * 4 + iVar18),
                         (iVar20 * 0x3fffffff + uVar23) * 4);
            }
            *(int **)((int)aAStackY_11f8 + iVar20 * 4 + iVar18) = piVar12;
            uVar23 = uVar23 + 1;
          }
          local_78 = local_78 + 1;
          pRVar6 = g_runtimeRecords_008032F8;
          puVar22 = PTR_008032fc;
          pRVar25 = g_runtimeRecords_00803300;
          pRVar7 = g_runtimeRecords_00803310;
          puVar8 = PTR_008033b0;
        } while (local_78 < param_5);
      }
      PTR_008033b0 = puVar8;
      g_runtimeRecords_00803310 = pRVar7;
      g_runtimeRecords_00803300 = pRVar25;
      PTR_008032fc = puVar22;
      g_runtimeRecords_008032F8 = pRVar6;
      iVar18 = -1;
      iVar13 = -1;
      local_8c = -1;
      local_48 = (uint)(*(int *)local_174[uVar23 - 1] < 0x1f);
      for (iVar20 = uVar23 - 2; -1 < iVar20; iVar20 = iVar20 + -1) {
        iVar16 = *(int *)local_174[iVar20];
        if ((0xf < iVar16) &&
           (iVar9 = iVar16 - *(int *)local_174[iVar20 + 1], *(int *)local_174[iVar20 + 1] < iVar9))
        {
          if (iVar9 <= iVar18) {
            if ((local_48 == 0) || (iVar16 < 0x1f)) goto LAB_00563368;
            local_48 = 0;
          }
          local_8c = iVar20;
          iVar18 = iVar9;
          iVar13 = iVar20;
        }
LAB_00563368:
      }
      iVar18 = 0;
      do {
        if (*(int *)local_174[iVar13 + 1] <= (int)(&DAT_007c9614)[iVar18]) break;
        iVar18 = iVar18 + 1;
      } while (iVar18 < 9);
      DAT_008032f0 = *(int *)(iVar18 * 8 + 0x7c9640);
      DAT_008032ec = *(int *)(iVar18 * 8 + 0x7c963c);
      DAT_0080330c = DAT_008032ec * DAT_008032f0;
      if (-1 < iVar13) {
        iVar18 = 0;
        do {
          if (*(int *)*local_174 <= (int)(&DAT_007c9614)[iVar18]) break;
          iVar18 = iVar18 + 1;
        } while (iVar18 < 9);
        DAT_00803374 = *(int *)(iVar18 * 8 + 0x7c9640);
        DAT_00803378 = *(int *)(iVar18 * 8 + 0x7c963c);
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
      iVar18 = DAT_008033a4;
      iVar13 = local_e0;
      if (0 < local_e0) {
        do {
          iVar20 = local_ac * iVar18 * 2;
          local_30 = PTR_00803380 + iVar20;
          local_cc = (void *)(iVar20 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (DAT_008033c0 + local_ac) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar20 = 0;
          if (0 < iVar18) {
            do {
              iVar18 = 0;
              iVar16 = 0;
              psVar11 = local_90;
              do {
                if (*psVar11 == 0) {
                  iVar18 = iVar18 + 1;
                }
                iVar16 = iVar16 + 1;
                psVar11 = psVar11 + g_pathingGrid.planeStride;
              } while (iVar16 < 5);
              local_30[iVar20 * 2] = (char)iVar18;
              if (iVar18 < 1) {
                *(undefined2 *)((int)local_cc + iVar20 * 2) = 0xffff;
              }
              else if (iVar18 < 3) {
                *(short *)((int)local_cc + iVar20 * 2) = 5 - (short)iVar18;
              }
              else {
                *(undefined2 *)((int)local_cc + iVar20 * 2) = 0;
              }
              iVar20 = iVar20 + 1;
              local_90 = local_90 + 1;
              iVar18 = DAT_008033a4;
            } while (iVar20 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < local_e0);
      }
      for (; iVar13 <= local_16c; iVar13 = iVar13 + 1) {
        iVar20 = iVar13 * iVar18 * 2;
        local_30 = PTR_00803380 + iVar20;
        local_cc = (void *)(iVar20 + (int)local_60[0]);
        psVar11 = g_pathingGrid.cells +
                  (iVar13 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
        iVar20 = 0;
        if (0 < local_9c) {
          do {
            iVar16 = 0;
            iVar18 = 0;
            psVar10 = psVar11;
            do {
              if (*psVar10 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar18 = iVar18 + 1;
              psVar10 = psVar10 + g_pathingGrid.planeStride;
            } while (iVar18 < 5);
            local_30[iVar20 * 2] = (char)iVar16;
            if (iVar16 < 1) {
              *(undefined2 *)((int)local_cc + iVar20 * 2) = 0xffff;
            }
            else if (iVar16 < 3) {
              *(short *)((int)local_cc + iVar20 * 2) = 5 - (short)iVar16;
            }
            else {
              *(undefined2 *)((int)local_cc + iVar20 * 2) = 0;
            }
            iVar20 = iVar20 + 1;
            psVar11 = psVar11 + 1;
            iVar18 = DAT_008033a4;
          } while (iVar20 < local_9c);
        }
        psVar11 = g_pathingGrid.cells +
                  (int)g_pathingGrid.sizeX * (DAT_008033c0 + iVar13) + local_9c + DAT_008033bc;
        local_164 = g_worldGrid.cells +
                    (int)g_worldGrid.sizeX * (DAT_008033c0 + iVar13) + local_9c + DAT_008033bc;
        local_94 = local_9c;
        while (local_94 <= local_c4) {
          local_d4 = 0;
          local_64 = 0;
          local_34 = 0;
          pSVar21 = local_164;
          psVar10 = psVar11;
          do {
            if (*psVar10 == 0) {
              local_d4 = local_d4 + 1;
              if ((pSVar21->objects[1] != nullptr) &&
                 (pSVar21->objects[1]->value_20 == 0x1ae)) {
                local_64 = local_64 + 3;
LAB_005637b9:
              }
            }
            else if (pSVar21->objects[0] != nullptr) {
              if (param_1 != 0xff) {
                bVar2 = *(byte *)&pSVar21->objects[0][1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_005637a4:
                    iVar18 = 0;
                  }
                  else {
                    uVar17 = param_1 & 0xff;
                    bVar1 = g_playerRelationMatrix[bVar2][uVar17];
                    if ((bVar1 == 0) && (g_playerRelationMatrix[uVar17][bVar2] == 0)) {
                      iVar18 = -2;
                    }
                    else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar17][bVar2] == 0)) {
                      iVar18 = -1;
                    }
                    else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar17][bVar2] == 1)) {
                      iVar18 = 1;
                    }
                    else {
                      if ((bVar1 != 1) || (g_playerRelationMatrix[uVar17][bVar2] != 1))
                      goto LAB_005637a4;
                      iVar18 = 2;
                    }
                  }
                  bVar26 = iVar18 < 0;
                }
                else {
                  bVar26 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                }
                if (bVar26) goto LAB_005637bc;
              }
              local_64 = local_64 + 2;
              goto LAB_005637b9;
            }
LAB_005637bc:
            local_34 = local_34 + 1;
            psVar10 = psVar10 + g_pathingGrid.planeStride;
            pSVar21 = pSVar21 + g_worldGrid.planeStride;
          } while (local_34 < 5);
          local_30[local_94 * 2] = (char)local_64 << 4 | (byte)local_d4;
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
          psVar11 = psVar11 + 1;
          local_164 = local_164 + 1;
          iVar18 = DAT_008033a4;
        }
        local_90 = g_pathingGrid.cells +
                   (iVar13 + DAT_008033c0) * (int)g_pathingGrid.sizeX + local_c4 + DAT_008033bc + 1;
        iVar20 = local_c4 + 1;
        if (iVar20 < iVar18) {
          do {
            iVar18 = 0;
            iVar16 = 0;
            psVar11 = local_90;
            do {
              if (*psVar11 == 0) {
                iVar18 = iVar18 + 1;
              }
              iVar16 = iVar16 + 1;
              psVar11 = psVar11 + g_pathingGrid.planeStride;
            } while (iVar16 < 5);
            local_30[iVar20 * 2] = (char)iVar18;
            if (iVar18 < 1) {
              *(undefined2 *)((int)local_cc + iVar20 * 2) = 0xffff;
            }
            else if (iVar18 < 3) {
              *(short *)((int)local_cc + iVar20 * 2) = 5 - (short)iVar18;
            }
            else {
              *(undefined2 *)((int)local_cc + iVar20 * 2) = 0;
            }
            iVar20 = iVar20 + 1;
            local_90 = local_90 + 1;
            iVar18 = DAT_008033a4;
          } while (iVar20 < DAT_008033a4);
        }
      }
      local_ac = local_16c + 1;
      if (local_ac < DAT_008033a8) {
        do {
          iVar13 = local_ac * iVar18 * 2;
          local_30 = PTR_00803380 + iVar13;
          local_cc = (void *)(iVar13 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (DAT_008033c0 + local_ac) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar13 = 0;
          if (0 < iVar18) {
            do {
              iVar18 = 0;
              iVar20 = 0;
              psVar11 = local_90;
              do {
                if (*psVar11 == 0) {
                  iVar18 = iVar18 + 1;
                }
                iVar20 = iVar20 + 1;
                psVar11 = psVar11 + g_pathingGrid.planeStride;
              } while (iVar20 < 5);
              local_30[iVar13 * 2] = (char)iVar18;
              if (iVar18 < 1) {
                *(undefined2 *)((int)local_cc + iVar13 * 2) = 0xffff;
              }
              else if (iVar18 < 3) {
                *(short *)((int)local_cc + iVar13 * 2) = 5 - (short)iVar18;
              }
              else {
                *(undefined2 *)((int)local_cc + iVar13 * 2) = 0;
              }
              iVar13 = iVar13 + 1;
              local_90 = local_90 + 1;
              iVar18 = DAT_008033a4;
            } while (iVar13 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < DAT_008033a8);
      }
      if (((param_6 != 0) && (0 < param_7)) && (local_78 = 0, 0 < param_7)) {
        do {
          piVar12 = (int *)(param_6 + local_78 * 0x18);
          iVar13 = *piVar12;
          if (0 < iVar13) {
            iVar20 = piVar12[5];
            local_84 = piVar12[1] - DAT_008033bc;
            if ((-1 < local_84) && (local_84 < iVar18)) {
              iVar16 = piVar12[2] - DAT_008033c0;
              local_b8 = iVar16;
              if ((-1 < iVar16) && (iVar16 < DAT_008033a8)) {
                switch(piVar12[3]) {
                case 0:
                case 3:
                  iVar18 = *(int *)(&DAT_007a4bf8 + piVar12[4] * 4) * 2 + -2;
                  iVar20 = 0;
                  iVar9 = iVar18;
                  break;
                case 1:
                  iVar9 = *(int *)(&DAT_007a4b60 + piVar12[4] * 4);
                  iVar18 = 1;
                  break;
                case 2:
                  iVar9 = *(int *)(&DAT_007a4b88 + piVar12[4] * 8);
                  iVar18 = 1;
                  break;
                case 4:
                case 5:
                  iVar18 = (*(int *)(&DAT_007a4bf8 + piVar12[4] * 4) * 2) / 2;
                  iVar9 = *(int *)(&DAT_007a4bf8 + piVar12[4] * 4) * 2;
                  break;
                default:
                  iVar20 = 0;
                case -10:
                  iVar18 = *(int *)(&DAT_007a4c24 + piVar12[4] * 8);
                  iVar9 = *(int *)(&DAT_007a4c20 + piVar12[4] * 8);
                }
                local_c8_mg1 = FUN_00561240(iVar18,iVar9,iVar20);
                if (1 < *local_c8_mg1) {
                  local_13c = (iVar13 << 0x10) / *local_c8_mg1;
                  iVar18 = 0;
                  puVar24 = PTR_00803380 + (local_c8_mg1[3] + iVar16) * DAT_008033a4 * 2;
                  local_ac = 0;
                  if (0 < local_c8_mg1[4]) {
                    do {
                      iVar13 = local_c8_mg1[3] + iVar16 + local_ac;
                      if ((-1 < iVar13) && (iVar13 < DAT_008033a8)) {
                        local_a8 = local_c8_mg1[local_ac * 2 + 6] + local_84;
                        for (iVar13 = local_c8_mg1[local_ac * 2 + 5] + local_84; iVar13 <= local_a8;
                            iVar13 = iVar13 + 1) {
                          if (((-1 < iVar13) && (iVar13 < DAT_008033a4)) &&
                             (iVar18 = iVar18 + local_13c, 0x10000 < iVar18)) {
                            bVar2 = puVar24[iVar13 * 2];
                            if ((int)((uint)(bVar2 >> 4) + (iVar18 >> 0x10)) < 0xf) {
                              puVar24[iVar13 * 2] = (char)((uint)iVar18 >> 0x10) * '\x10' + bVar2;
                            }
                            else {
                              puVar24[iVar13 * 2] = (bVar2 & 7) - 0x10;
                            }
                          }
                        }
                      }
                      local_ac = local_ac + 1;
                      puVar24 = puVar24 + DAT_008033a4 * 2;
                      iVar16 = local_b8;
                    } while (local_ac < local_c8_mg1[4]);
                  }
                }
                FreeAndNull(&local_c8_mg1);
                iVar18 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_7);
      }
      iVar13 = 0;
      g_runtimeRecordCount_0080338C = 0;
      if ((param_8 != 0) && (0 < param_9)) {
        iVar20 = (*(int *)local_174[uVar23 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar20;
        local_78 = 0;
        if (0 < param_9) {
          do {
            piVar12 = (int *)(param_8 + local_78 * 0x18);
            iVar16 = piVar12[1] - DAT_008033bc;
            if ((-1 < iVar16) && (iVar16 < iVar18)) {
              iVar9 = piVar12[2] - DAT_008033c0;
              local_ac = iVar9;
              if ((-1 < iVar9) && (iVar9 < DAT_008033a8)) {
                local_4c = piVar12[3] * piVar12[4];
                if ((0 < local_4c) && (iVar20 <= (*piVar12 * 100) / local_4c)) {
                  g_runtimeRecords_00803310[iVar13].field_0000 = iVar16;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0004 = iVar9;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0008 = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_000C = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0010 = piVar12[4];
                  iVar13 = g_runtimeRecordCount_0080338C + 1;
                  iVar18 = DAT_008033a4;
                  g_runtimeRecordCount_0080338C = iVar13;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_9);
        }
      }
      DAT_0080339c = 9;
      iVar13 = 0;
      iVar20 = 0;
      local_dc = 0;
      for (iVar16 = local_e0; iVar16 <= local_16c; iVar16 = iVar16 + 1) {
        local_30 = PTR_00803380 + iVar16 * iVar18 * 2;
        for (iVar9 = local_9c; iVar9 <= local_c4; iVar9 = iVar9 + 1) {
          if (((PTR_00803380 + iVar16 * iVar18 * 2)[iVar9 * 2] & 0xf0) != 0) {
            iVar13 = iVar13 + 1;
            iVar20 = iVar20 + iVar9;
            local_dc = local_dc + iVar16;
          }
        }
      }
      iVar18 = DAT_00803304;
      iVar16 = DAT_00803308;
      if (0 < iVar13) {
        iVar18 = (iVar20 + iVar13 / 2) / iVar13;
        iVar16 = (local_dc + iVar13 / 2) / iVar13;
        local_EAX_3741 = FUN_006acf90(iVar18,iVar16,DAT_00803304,DAT_00803308);
        if (5 < local_EAX_3741) {
          iVar18 = ((local_EAX_3741 + -5) * DAT_00803304 + iVar18 * 5) / local_EAX_3741;
          iVar16 = ((local_EAX_3741 + -5) * DAT_00803308 + iVar16 * 5) / local_EAX_3741;
        }
      }
      DAT_00803308 = iVar16;
      DAT_00803304 = iVar18;
      piVar12 = local_134;
      for (iVar18 = 0x16; pbVar5 = local_a0, iVar13 = DAT_0080339c, piVar4 = local_80, iVar18 != 0;
          iVar18 = iVar18 + -1) {
        *piVar12 = 0;
        piVar12 = piVar12 + 1;
      }
      for (; local_80 = piVar4, iVar13 < 0xe; iVar13 = iVar13 + 1) {
        local_28_mg1 = FUN_0055ee70(pbVar5,iVar13,1);
        iVar18 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar16 = (char)pbVar5[iVar18 * 2] + DAT_00803304;
            iVar20 = (char)pbVar5[iVar18 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar16) && (iVar16 < DAT_008033a4)) && (-1 < iVar20)) &&
               ((iVar20 < DAT_008033a8 &&
                ((PTR_00803380[(iVar20 * DAT_008033a4 + iVar16) * 2] & 0xf0) != 0)))) {
              local_134[iVar13] = local_134[iVar13] + 1;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < local_28_mg1);
        }
        local_134[iVar13] = (local_134[iVar13] * 100) / local_28_mg1;
        piVar4 = local_80;
      }
      iVar18 = -30000;
      iVar13 = 0xc;
      if (DAT_0080339c < 0xd) {
        do {
          iVar20 = ((0xd - iVar13) * local_100 + local_134[iVar13]) / (0xe - iVar13) - local_100;
          if (iVar18 <= iVar20) {
            DAT_00803384 = iVar13 + 1;
            iVar18 = iVar20;
          }
          iVar13 = iVar13 + -1;
        } while (DAT_0080339c <= iVar13);
      }
      if (DAT_00803384 < 0xb) {
        DAT_00803384 = DAT_00803384 + 4;
      }
      *piVar4 = DAT_00803304;
      piVar4[1] = DAT_00803308;
      PTR_008033b4 = (undefined2 *)FUN_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar4,1);
      FreeAndNull(local_60);
      thunk_FUN_0055dee0(local_a0);
      iVar18 = 0;
      do {
        iVar13 = (int)(iVar18 * 0x168 + (iVar18 * 0x168 >> 0x1f & 0xfU)) >> 4;
        local_EAX_4198 = FUN_00561240(DAT_008032f0,DAT_008032ec,iVar13);
        PTR_008032fc[iVar18] = local_EAX_4198;
        piVar9 = FUN_00561240(DAT_00803374,DAT_00803378,iVar13);
        PTR_008033b8[iVar18] = piVar9;
        local_EAX_4250 = FUN_00561240(5,DAT_008032ec,iVar13);
        PTR_008033b0[iVar18] = local_EAX_4250;
        iVar18 = iVar18 + 1;
        iVar13 = DAT_0080339c;
      } while (iVar18 < 0x10);
      while (local_88 = iVar13, iVar13 < 0x16) {
        local_28_mg1 = FUN_0055ee70(local_a0,iVar13,1);
        iVar18 = DAT_00803384 - DAT_0080339c;
        iVar20 = 0x16 - DAT_00803384;
        if (iVar18 < iVar20) {
          uVar17 = DAT_00803384 - iVar13 >> 0x1f;
          iVar18 = (DAT_00803384 - iVar13 ^ uVar17) - uVar17;
          iVar18 = iVar20 * iVar20 - iVar18 * iVar18;
        }
        else {
          uVar17 = DAT_00803384 - iVar13 >> 0x1f;
          iVar13 = (DAT_00803384 - iVar13 ^ uVar17) - uVar17;
          iVar18 = iVar18 * iVar18 - iVar13 * iVar13;
        }
        DAT_00803388 = iVar18 / 2;
        local_50 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar18 = (char)local_a0[local_50 * 2] + DAT_00803304;
            if (((-1 < iVar18) && (iVar18 < DAT_008033a4)) &&
               ((iVar13 = (char)local_a0[local_50 * 2 + 1] + DAT_00803308, -1 < iVar13 &&
                ((iVar13 < DAT_008033a8 && (0 < (short)PTR_008033b4[iVar13 * DAT_008033a4 + iVar18])
                 ))))) {
              local_140 = 0;
              local_150 = 0;
              if (0 < g_runtimeRecordCount_0080338C) {
                do {
                  pRVar7 = g_runtimeRecords_00803310 + local_150;
                  iVar20 = pRVar7->field_0010;
                  if (pRVar7->field_0010 <= DAT_008032ec) {
                    iVar20 = DAT_008032ec;
                  }
                  iVar10 = FUN_006acf90(pRVar7->field_0000,pRVar7->field_0004,iVar18,iVar13);
                  if (iVar10 < iVar20 / 2) {
                    local_140 = 1;
                    break;
                  }
                  local_150 = local_150 + 1;
                } while (local_150 < g_runtimeRecordCount_0080338C);
              }
              if (local_140 == 0) {
                iVar20 = 0x10;
                uVar11 = FUN_006db910(DAT_00803304,DAT_00803308,iVar18,iVar13);
                local_74 = (int *)FUN_006db990(uVar11,iVar20);
                local_b0 = (int)local_74 - 3;
                if (local_b0 <= (int)((int)local_74 + 3U)) {
                  do {
                    if (local_b0 < 0) {
                      iVar20 = local_b0 + 0x10;
                    }
                    else {
                      iVar20 = local_b0;
                      if (0xf < local_b0) {
                        iVar20 = local_b0 + -0x10;
                      }
                    }
                    iVar19 = FUN_00561dc0(iVar18,iVar13,iVar20);
                    FUN_00564f30(iVar18,iVar13,iVar19,local_74,DAT_0080330c,local_88);
                    if (-1 < local_8c) {
                      FUN_00564f30(iVar18,iVar13,iVar19,local_74,DAT_008032e8,local_88);
                    }
                    local_b0 = local_b0 + 3;
                  } while (local_b0 <= (int)((int)local_74 + 3U));
                }
              }
            }
            local_50 = local_50 + 3;
          } while (local_50 < local_28_mg1);
        }
        iVar13 = local_88 + 3;
      }
      iVar18 = ((local_8c * 0x19 + 0x19) * 4) / (int)uVar23;
      if (iVar18 < DAT_0080337c) {
        DAT_0080337c = iVar18;
      }
      if (100 - iVar18 < DAT_00803314) {
        DAT_00803314 = 100 - iVar18;
      }
      DAT_00803398 = DAT_0080337c + DAT_00803314;
      if (0 < (int)DAT_00803398) {
        iVar18 = 0x7fffffff;
        iVar13 = 0;
        if (0 < DAT_0080337c) {
          do {
            if (g_runtimeRecords_008032F8[iVar13].field_000C < iVar18) {
              iVar18 = g_runtimeRecords_008032F8[iVar13].field_000C;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_0080337c);
        }
        iVar13 = 0;
        if (0 < DAT_00803314) {
          do {
            if (g_runtimeRecords_008032F4[iVar13].field_000C < iVar18) {
              iVar18 = g_runtimeRecords_008032F4[iVar13].field_000C;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_00803314);
        }
        iVar18 = (int)(iVar18 * 0xf + (iVar18 * 0xf >> 0x1f & 0xfU)) >> 4;
        iVar13 = 0;
        if (0 < DAT_0080337c) {
          do {
            g_runtimeRecords_008032F8[iVar13].field_000C =
                 g_runtimeRecords_008032F8[iVar13].field_000C - iVar18;
            local_160[iVar13] = g_runtimeRecords_008032F8[iVar13].field_000C;
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_0080337c);
        }
        iVar13 = 0;
        if (0 < DAT_00803314) {
          do {
            g_runtimeRecords_008032F4[iVar13].field_000C =
                 g_runtimeRecords_008032F4[iVar13].field_000C - iVar18;
            local_160[DAT_0080337c + iVar13] = g_runtimeRecords_008032F4[iVar13].field_000C;
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_00803314);
        }
        pRVar25 = g_runtimeRecords_00803300 + DAT_0080337c;
        for (uVar17 = DAT_00803314 * 5 & 0x3fffffff; uVar17 != 0; uVar17 = uVar17 - 1) {
          pRVar25->field_0000 = g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)&g_runtimeRecords_008032F4->field_0004;
          pRVar25 = (RuntimeRecord_00803300_0014 *)&pRVar25->field_0004;
        }
        for (iVar18 = 0; iVar18 != 0; iVar18 = iVar18 + -1) {
          *(char *)&pRVar25->field_0000 = (char)g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)((int)&g_runtimeRecords_008032F4->field_0000 + 1);
          pRVar25 = (RuntimeRecord_00803300_0014 *)((int)&pRVar25->field_0000 + 1);
        }
        g_runtimeRecords_008032F4 =
             (RuntimeRecord_008032F4_0014 *)(g_runtimeRecords_00803300 + DAT_0080337c);
        uStackY_208 = 0x56439f;
        local_6c[0] = thunk_FUN_0055f0c0(local_160,DAT_00803398,uVar23,10,param_10,FUN_00562170,
                                         FUN_00564dd0);
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_1c = &stack0xfffffe18;
          local_40 = (int *)&stack0xfffffe18;
          piVar12 = (int *)&stack0xfffffe18;
          local_8 = 0xffffffff;
          local_158 = 0;
          local_78 = 0;
          iVar13 = local_54;
          temp_203f9621b1d8 = g_runtimeRecords_008032F4;
          piVar4 = (int *)&stack0xfffffe18;
          puVar24 = &stack0xfffffe18;
          iVar18 = local_8c;
          if (-1 < local_8c) {
            do {
              local_38 = -30000;
              local_150 = 0;
              iVar18 = local_158;
              temp_3f50488dac = g_runtimeRecords_008032F8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < temp_3f50488dac->field_000C) {
                    iVar18 = 30000;
                    iVar13 = 0;
                    if (0 < local_158) {
                      do {
                        local_EAX_5415 =
                             FUN_006acf90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
                                          g_runtimeRecords_00803300[local_40[iVar13]].field_0004,
                                          temp_3f50488dac->field_0000,temp_3f50488dac->field_0004);
                        if (local_EAX_5415 < iVar18) {
                          iVar18 = local_EAX_5415;
                        }
                        iVar13 = iVar13 + 1;
                      } while (iVar13 < local_158);
                    }
                    if (local_38 < iVar18) {
                      local_54 = local_150;
                      local_38 = iVar18;
                    }
                  }
                  local_150 = local_150 + 1;
                  temp_3f50488dac = temp_3f50488dac + 1;
                  iVar18 = local_158;
                  iVar13 = local_54;
                  piVar12 = local_40;
                } while (local_150 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar12[iVar18] = -1;
              }
              else {
                g_runtimeRecords_008032F8[iVar13].field_000C = -1;
                piVar12[iVar18] = iVar13;
              }
              local_158 = iVar18 + 1;
              local_78 = local_78 + 1;
              temp_203f9621b1d8 = g_runtimeRecords_008032F4;
              piVar4 = local_40;
              puVar24 = local_1c;
              iVar18 = local_8c;
            } while (local_78 <= local_8c);
          }
          while (local_1c = puVar24, local_40 = piVar4, local_78 = iVar18 + 1,
                g_runtimeRecords_008032F4 = temp_203f9621b1d8, local_78 < (int)uVar23) {
            local_38 = -30000;
            local_150 = 0;
            iVar18 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < temp_203f9621b1d8->field_000C) {
                  iVar18 = 30000;
                  iVar13 = 0;
                  if (0 < local_158) {
                    do {
                      local_EAX_5654 =
                           FUN_006acf90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
                                        g_runtimeRecords_00803300[local_40[iVar13]].field_0004,
                                        temp_203f9621b1d8->field_0000,temp_203f9621b1d8->field_0004);
                      if (local_EAX_5654 < iVar18) {
                        iVar18 = local_EAX_5654;
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < local_158);
                  }
                  if (local_38 < iVar18) {
                    local_54 = local_150;
                    local_38 = iVar18;
                  }
                }
                local_150 = local_150 + 1;
                temp_203f9621b1d8 = temp_203f9621b1d8 + 1;
                iVar18 = local_78;
              } while (local_150 < DAT_00803314);
            }
            if (local_38 < 0) {
              local_40[local_158] = -1;
            }
            else {
              g_runtimeRecords_00803300[DAT_0080337c + local_54].field_000C = -1;
              local_40[local_158] = local_54 + DAT_0080337c;
            }
            local_158 = local_158 + 1;
            temp_203f9621b1d8 = g_runtimeRecords_008032F4;
            piVar4 = local_40;
            puVar24 = local_1c;
          }
        }
        iVar18 = 0;
        if (0 < (int)uVar23) {
          do {
            iVar13 = local_40[iVar18];
            if (-1 < iVar13) {
              iVar20 = local_174[iVar18];
              STField<int>(iVar20,0x4) = g_runtimeRecords_00803300[iVar13].field_0000 + DAT_008033bc;
              STField<int>(iVar20,0x8) = g_runtimeRecords_00803300[iVar13].field_0004 + DAT_008033c0;
              if (local_8c < iVar18) {
                STField<int>(iVar20,0xC) = DAT_008032f0;
                iVar16 = DAT_008032ec;
              }
              else {
                STField<int>(iVar20,0xC) = DAT_00803374;
                iVar16 = DAT_00803378;
              }
              STField<int>(iVar20,0x10) = iVar16;
              STField<int>(iVar20,0x14) = g_runtimeRecords_00803300[iVar13].field_0008;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar23);
        }
      }
      g_currentExceptionFrame = local_1b8.previous;
      iVar14 = local_70;
    }
    else {
      g_currentExceptionFrame = local_1b8.previous;
      iVar15 = ReportDebugMessage("E:\\__titans\\scoreai.cpp",0xdc2,0,iVar14,"%s");
      if (iVar15 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar14;
    iVar18 = local_70;
    FreeAndNull(local_6c);
    FreeAndNull(&PTR_008033b4);
    FreeAndNull(local_60);
    FreeAndNull(&PTR_00803380);
    iVar13 = 0;
    do {
      FreeAndNull((void *)(iVar13 + (int)PTR_008032fc));
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x80);
    iVar13 = 0;
    do {
      FreeAndNull((void *)(iVar13 + (int)PTR_008033b0));
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x40);
    if (iVar18 != 0) {
      RaiseInternalException
                (iVar18,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",0xdd4);
    }
  }
  ExceptionList = local_14;
  return;
}

