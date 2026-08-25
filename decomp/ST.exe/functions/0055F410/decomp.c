#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol temp_3fb0403402 */
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
  int *piVar4;
  byte *pbVar5;
  RuntimeRecord_008032F8_0014 *pRVar6;
  RuntimeRecord_00803310_0014 *pRVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar15;
  int iVar10;
  short *psVar11;
  short *psVar12;
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
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar18;
  int iVar19;
  int iVar21;
  STWorldCell *pSVar22;
  uint uVar23;
  byte *puVar24;
  RuntimeRecord_00803300_0014 *pRVar25;
  bool bVar26;
  undefined4 uStackY_2060;
  RuntimeRecord_00803300_0014 aRStackY_205c [100];
  RuntimeRecord_008032F4_0014 aRStackY_188c [99];
  int iStackY_10c0;
  AnonPointee_TLOBaseTy_0607 aAStackY_10bc [16];
  undefined4 uStackY_f30;
  undefined4 auStackY_f2c [15];
  undefined4 uStackY_ef0;
  undefined4 auStackY_eec [16];
  undefined4 auStackY_eac [15];
  undefined4 uStackY_e70;
  int aiStackY_e6c [639];
  undefined4 uStackY_470;
  byte abStackY_46c [608];
  undefined4 uStackY_20c;
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
  byte *local_30;
  int local_28_mg1;
  short *local_24;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  RuntimeRecord_008032F8_0014 *temp_3fb0403402;
  RuntimeRecord_008032F4_0014 *temp_203fd2ac8a80;

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
    PTR_008033b4 = nullptr;
    local_60[0] = nullptr;
    g_runtimeRecords_00803300 = nullptr;
    DAT_00803314 = 0;
    DAT_0080337c = 0;
    puVar9 = (undefined4 *)(param_4 + 8);
    iVar18 = param_5;
    ExceptionList = &local_14;
    do {
      puVar9[-1] = 0xffffffff;
      *puVar9 = 0xffffffff;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9 = puVar9 + 6;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    DAT_00803390 = 0x28;
    DAT_008033bc = param_2 + -0x28;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x28;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar18 = param_2 + 0x28;
    if (g_pathingGrid.sizeX <= iVar18) {
      iVar18 = g_pathingGrid.sizeX + -1;
    }
    iVar13 = param_3 + 0x28;
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
    iVar15 = Library::MSVCRT::__setjmp3(local_1b8.jumpBuffer,2);
    local_1c = &stack0xfffffe14;
    if (iVar15 == 0) {
      local_1c = &stack0xfffffe14;
      local_60[0] = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      PTR_00803380 = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
      local_a4 = abStackY_46c;
      uStackY_470 = 0x55f648;
      local_84 = aiStackY_e6c;
      uStackY_e70 = 0x55f65a;
      PTR_008032fc = auStackY_eec;
      uStackY_ef0 = 0x55f671;
      PTR_008033b0 = auStackY_f2c;
      uStackY_f30 = 0x55f685;
      local_164 = (int *)aAStackY_10bc;
      iStackY_10c0 = 0x55f6a4;
      iVar18 = param_5 * -4;
      local_80 = (undefined4 *)((int)aAStackY_10bc + iVar18);
      *(undefined4 *)((int)aAStackY_10bc + iVar18 + -4) = 0x55f6b8;
      g_runtimeRecords_008032F8 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_205c + iVar18);
      g_runtimeRecords_00803300 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_205c + iVar18);
      (&uStackY_2060)[-param_5] = 0x55f6d5;
      g_runtimeRecords_00803310 = (RuntimeRecord_00803310_0014 *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      local_8 = 0xffffffff;
      memset(auStackY_eec, 0, 0x80); /* compiler bulk-zero initialization */
      iVar13 = 0;
      PTR_008033b8 = auStackY_eac;
      memset(auStackY_f2c, 0, 0x40); /* compiler bulk-zero initialization */
      g_runtimeRecords_008032F4 = (RuntimeRecord_008032F4_0014 *)((int)aRStackY_188c + iVar18);
      uVar23 = 0;
      local_78 = 0;
      pRVar6 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_205c + iVar18);
      puVar9 = auStackY_eec;
      pRVar25 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_205c + iVar18);
      pRVar7 = (RuntimeRecord_00803310_0014 *)&stack0xfffffe14;
      puVar8 = auStackY_f2c;
      if (0 < param_5) {
        do {
          piVar16 = (int *)(param_4 + local_78 * 0x18);
          iVar13 = *piVar16;
          if (0 < iVar13) {
            iVar19 = 0;
            if (0 < (int)uVar23) {
              do {
                if (**(int **)((int)aAStackY_10bc + iVar19 * 4 + iVar18) < iVar13) break;
                iVar19 = iVar19 + 1;
              } while (iVar19 < (int)uVar23);
            }
            if (iVar19 < (int)uVar23) {
              Library::MSVCRT::FUN_0072da70
                        ((undefined4 *)((int)aAStackY_10bc + iVar19 * 4 + iVar18 + 4),
                         (AnonPointee_TLOBaseTy_0607 *)((int)aAStackY_10bc + iVar19 * 4 + iVar18),
                         (iVar19 * 0x3fffffff + uVar23) * 4);
            }
            *(int **)((int)aAStackY_10bc + iVar19 * 4 + iVar18) = piVar16;
            uVar23 = uVar23 + 1;
          }
          local_78 = local_78 + 1;
          pRVar6 = g_runtimeRecords_008032F8;
          puVar9 = PTR_008032fc;
          pRVar25 = g_runtimeRecords_00803300;
          pRVar7 = g_runtimeRecords_00803310;
          puVar8 = PTR_008033b0;
        } while (local_78 < param_5);
      }
      PTR_008033b0 = puVar8;
      g_runtimeRecords_00803310 = pRVar7;
      g_runtimeRecords_00803300 = pRVar25;
      PTR_008032fc = puVar9;
      g_runtimeRecords_008032F8 = pRVar6;
      iVar18 = -1;
      iVar13 = -1;
      local_98 = -1;
      local_48 = (uint)(*(int *)local_80[uVar23 - 1] < 0x15);
      for (iVar19 = uVar23 - 2; -1 < iVar19; iVar19 = iVar19 + -1) {
        iVar21 = *(int *)local_80[iVar19];
        if ((10 < iVar21) &&
           (iVar10 = iVar21 - *(int *)local_80[iVar19 + 1], *(int *)local_80[iVar19 + 1] < iVar10))
        {
          if (iVar10 <= iVar18) {
            if ((local_48 == 0) || (iVar21 < 0x15)) goto LAB_0055f7ef;
            local_48 = 0;
          }
          local_98 = iVar19;
          iVar18 = iVar10;
          iVar13 = iVar19;
        }
LAB_0055f7ef:
      }
      if (*(int *)local_80[iVar13 + 1] < 0x32) {
        local_3c = (*(int *)local_80[iVar13 + 1] + 5) / 10;
      }
      else {
        local_3c = 5;
      }
      DAT_008032f0 = *(int *)(&DAT_007a4c24 + local_3c * 8);
      DAT_008032ec = *(int *)(&DAT_007a4c20 + local_3c * 8);
      DAT_0080330c = DAT_008032ec * DAT_008032f0;
      if (-1 < iVar13) {
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
      iVar18 = DAT_008033a4;
      iVar13 = local_e8;
      if (0 < local_e8) {
        do {
          iVar19 = local_b0 * iVar18 * 2;
          local_30 = PTR_00803380 + iVar19;
          local_d4 = (void *)(iVar19 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (local_b0 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar19 = 0;
          if (0 < iVar18) {
            do {
              iVar18 = 0;
              iVar21 = 0;
              psVar12 = local_90;
              do {
                if (*psVar12 == 0) {
                  iVar18 = iVar18 + 1;
                }
                iVar21 = iVar21 + 1;
                psVar12 = psVar12 + g_pathingGrid.planeStride;
              } while (iVar21 < 5);
              local_30[iVar19 * 2] = (char)iVar18;
              if (iVar18 < 1) {
                *(undefined2 *)((int)local_d4 + iVar19 * 2) = 0xffff;
              }
              else if (iVar18 < 3) {
                *(short *)((int)local_d4 + iVar19 * 2) = (3 - (short)iVar18) * 3;
              }
              else {
                *(undefined2 *)((int)local_d4 + iVar19 * 2) = 0;
              }
              iVar19 = iVar19 + 1;
              local_90 = local_90 + 1;
              iVar18 = DAT_008033a4;
            } while (iVar19 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < local_e8);
      }
      for (; iVar13 <= local_170; iVar13 = iVar13 + 1) {
        iVar19 = iVar13 * iVar18 * 2;
        local_30 = PTR_00803380 + iVar19;
        local_d4 = (void *)(iVar19 + (int)local_60[0]);
        psVar12 = g_pathingGrid.cells +
                  (iVar13 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
        iVar19 = 0;
        if (0 < local_a0) {
          do {
            iVar18 = 0;
            iVar21 = 0;
            psVar11 = psVar12;
            do {
              if (*psVar11 == 0) {
                iVar18 = iVar18 + 1;
              }
              iVar21 = iVar21 + 1;
              psVar11 = psVar11 + g_pathingGrid.planeStride;
            } while (iVar21 < 5);
            local_30[iVar19 * 2] = (char)iVar18;
            if (iVar18 < 1) {
              *(undefined2 *)((int)local_d4 + iVar19 * 2) = 0xffff;
            }
            else if (iVar18 < 3) {
              *(short *)((int)local_d4 + iVar19 * 2) = (3 - (short)iVar18) * 3;
            }
            else {
              *(undefined2 *)((int)local_d4 + iVar19 * 2) = 0;
            }
            iVar19 = iVar19 + 1;
            psVar12 = psVar12 + 1;
            iVar18 = DAT_008033a4;
          } while (iVar19 < local_a0);
        }
        psVar12 = g_pathingGrid.cells +
                  (int)g_pathingGrid.sizeX * (iVar13 + DAT_008033c0) + local_a0 + DAT_008033bc;
        local_168 = g_worldGrid.cells +
                    (int)g_worldGrid.sizeX * (iVar13 + DAT_008033c0) + local_a0 + DAT_008033bc;
        local_94 = local_a0;
        while (local_94 <= local_cc) {
          iVar19 = 0;
          iVar18 = 0;
          local_34 = 0;
          pSVar22 = local_168;
          local_24 = psVar12;
          do {
            if (*local_24 == 0) {
              iVar18 = iVar18 + 1;
              if ((pSVar22->objects[1] != nullptr) &&
                 (pSVar22->objects[1]->value_20 == 0x1ae)) {
                iVar19 = iVar19 + 3;
              }
            }
            else if (pSVar22->objects[0] != nullptr) {
              iVar18 = iVar18 + 1;
              local_dc = iVar18;
              if (param_1 != 0xff) {
                bVar2 = *(byte *)&pSVar22->objects[0][1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_0055fc5b:
                    iVar21 = 0;
                  }
                  else {
                    uVar15 = param_1 & 0xff;
                    bVar1 = g_playerRelationMatrix[bVar2][uVar15];
                    if ((bVar1 == 0) && (g_playerRelationMatrix[uVar15][bVar2] == 0)) {
                      iVar21 = -2;
                    }
                    else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar15][bVar2] == 0)) {
                      iVar21 = -1;
                    }
                    else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar15][bVar2] == 1)) {
                      iVar21 = 1;
                    }
                    else {
                      if ((bVar1 != 1) || (g_playerRelationMatrix[uVar15][bVar2] != 1))
                      goto LAB_0055fc5b;
                      iVar21 = 2;
                    }
                  }
                  bVar26 = iVar21 < 0;
                }
                else {
                  bVar26 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                }
                if (bVar26) goto LAB_0055fc71;
              }
              iVar19 = iVar19 + 1;
            }
LAB_0055fc71:
            local_34 = local_34 + 1;
            local_24 = local_24 + g_pathingGrid.planeStride;
            pSVar22 = pSVar22 + g_worldGrid.planeStride;
          } while (local_34 < 5);
          local_30[local_94 * 2] = (char)iVar19 << 4 | (byte)iVar18;
          if (iVar18 - iVar19 < 1) {
            *(undefined2 *)((int)local_d4 + local_94 * 2) = 0xffff;
          }
          else if (iVar18 - iVar19 < 3) {
            *(short *)((int)local_d4 + local_94 * 2) = (((short)iVar19 - (short)iVar18) + 3) * 3;
          }
          else {
            *(undefined2 *)((int)local_d4 + local_94 * 2) = 0;
          }
          local_94 = local_94 + 1;
          psVar12 = psVar12 + 1;
          local_168 = local_168 + 1;
          iVar18 = DAT_008033a4;
        }
        local_90 = g_pathingGrid.cells +
                   (iVar13 + DAT_008033c0) * (int)g_pathingGrid.sizeX + local_cc + DAT_008033bc + 1;
        iVar19 = local_cc + 1;
        if (iVar19 < iVar18) {
          do {
            iVar18 = 0;
            iVar21 = 0;
            psVar12 = local_90;
            do {
              if (*psVar12 == 0) {
                iVar18 = iVar18 + 1;
              }
              iVar21 = iVar21 + 1;
              psVar12 = psVar12 + g_pathingGrid.planeStride;
            } while (iVar21 < 5);
            local_30[iVar19 * 2] = (char)iVar18;
            if (iVar18 < 1) {
              *(undefined2 *)((int)local_d4 + iVar19 * 2) = 0xffff;
            }
            else if (iVar18 < 3) {
              *(short *)((int)local_d4 + iVar19 * 2) = (3 - (short)iVar18) * 3;
            }
            else {
              *(undefined2 *)((int)local_d4 + iVar19 * 2) = 0;
            }
            iVar19 = iVar19 + 1;
            local_90 = local_90 + 1;
            iVar18 = DAT_008033a4;
          } while (iVar19 < DAT_008033a4);
        }
      }
      local_b0 = local_170 + 1;
      if (local_b0 < DAT_008033a8) {
        do {
          iVar13 = local_b0 * iVar18 * 2;
          local_30 = PTR_00803380 + iVar13;
          local_d4 = (void *)(iVar13 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (local_b0 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar13 = 0;
          if (0 < iVar18) {
            do {
              iVar18 = 0;
              iVar19 = 0;
              psVar12 = local_90;
              do {
                if (*psVar12 == 0) {
                  iVar18 = iVar18 + 1;
                }
                iVar19 = iVar19 + 1;
                psVar12 = psVar12 + g_pathingGrid.planeStride;
              } while (iVar19 < 5);
              local_30[iVar13 * 2] = (char)iVar18;
              if (iVar18 < 1) {
                *(undefined2 *)((int)local_d4 + iVar13 * 2) = 0xffff;
              }
              else if (iVar18 < 3) {
                *(short *)((int)local_d4 + iVar13 * 2) = (3 - (short)iVar18) * 3;
              }
              else {
                *(undefined2 *)((int)local_d4 + iVar13 * 2) = 0;
              }
              iVar13 = iVar13 + 1;
              local_90 = local_90 + 1;
              iVar18 = DAT_008033a4;
            } while (iVar13 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < DAT_008033a8);
      }
      if (((param_8 != 0) && (0 < param_9)) && (local_78 = 0, 0 < param_9)) {
        do {
          piVar16 = (int *)(param_8 + local_78 * 0x18);
          iVar13 = *piVar16;
          if (0 < iVar13) {
            local_88 = piVar16[1] - DAT_008033bc;
            if ((-1 < local_88) && (local_88 < iVar18)) {
              iVar19 = piVar16[2] - DAT_008033c0;
              local_c0 = iVar19;
              if ((-1 < iVar19) && (iVar19 < DAT_008033a8)) {
                iVar18 = piVar16[3];
                if ((iVar18 < 1) || (iVar21 = piVar16[4], iVar21 < 1)) {
                  iVar18 = 0;
                  do {
                    if (iVar13 <= (int)(&DAT_007c9614)[iVar18]) break;
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < 9);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar18 = *(int *)(local_3c * 8 + 0x7c9640);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar21 = *(int *)(local_3c * 8 + 0x7c963c);
                }
                local_d0_mg1 = FUN_00561240(iVar18,iVar21,piVar16[5]);
                if (1 < *local_d0_mg1) {
                  local_144 = (iVar13 << 0x10) / *local_d0_mg1;
                  iVar18 = 0;
                  puVar24 = PTR_00803380 + (local_d0_mg1[3] + iVar19) * DAT_008033a4 * 2;
                  local_b0 = 0;
                  if (0 < local_d0_mg1[4]) {
                    do {
                      iVar13 = local_d0_mg1[3] + iVar19 + local_b0;
                      if ((-1 < iVar13) && (iVar13 < DAT_008033a8)) {
                        local_ac = local_d0_mg1[local_b0 * 2 + 6] + local_88;
                        for (iVar13 = local_d0_mg1[local_b0 * 2 + 5] + local_88; iVar13 <= local_ac;
                            iVar13 = iVar13 + 1) {
                          if (((-1 < iVar13) && (iVar13 < DAT_008033a4)) &&
                             (iVar18 = iVar18 + local_144, 0x10000 < iVar18)) {
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
                      local_b0 = local_b0 + 1;
                      puVar24 = puVar24 + DAT_008033a4 * 2;
                      iVar19 = local_c0;
                    } while (local_b0 < local_d0_mg1[4]);
                  }
                }
                FreeAndNull(&local_d0_mg1);
                iVar18 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_9);
      }
      iVar13 = 0;
      g_runtimeRecordCount_0080338C = 0;
      if ((param_6 != 0) && (0 < param_7)) {
        iVar19 = (*(int *)local_80[uVar23 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar19;
        local_78 = 0;
        if (0 < param_7) {
          do {
            piVar16 = (int *)(param_6 + local_78 * 0x18);
            iVar21 = piVar16[1] - DAT_008033bc;
            if ((-1 < iVar21) && (iVar21 < iVar18)) {
              iVar10 = piVar16[2] - DAT_008033c0;
              local_b0 = iVar10;
              if ((-1 < iVar10) && (iVar10 < DAT_008033a8)) {
                iVar14 = piVar16[3];
                if (iVar14 == -10) {
                  iVar14 = *(int *)(&DAT_007a4c20 + piVar16[4] * 8);
                  local_4c = *(int *)(&DAT_007a4c24 + piVar16[4] * 8) * iVar14;
LAB_0056016e:
                }
                else if (iVar14 == 1) {
                  iVar14 = *(int *)(&DAT_007a4b60 + piVar16[4] * 4);
                  local_4c = iVar14;
                }
                else {
                  if (iVar14 != 2) {
                    iVar14 = *(int *)(&DAT_007a4bf8 + piVar16[4] * 4) * 2;
                    local_4c = *(int *)(&DAT_007a4bf8 + piVar16[4] * 4) * 6;
                    goto LAB_0056016e;
                  }
                  iVar14 = *(int *)(&DAT_007a4b88 + piVar16[4] * 8);
                  local_4c = iVar14;
                }
                if (iVar19 <= (*piVar16 * 100) / local_4c) {
                  g_runtimeRecords_00803310[iVar13].field_0000 = iVar21;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0004 = iVar10;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0008 = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_000C = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0010 = iVar14;
                  iVar13 = g_runtimeRecordCount_0080338C + 1;
                  iVar18 = DAT_008033a4;
                  g_runtimeRecordCount_0080338C = iVar13;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_7);
        }
      }
      DAT_0080339c = 5;
      iVar13 = 0;
      iVar19 = 0;
      local_e4 = 0;
      for (iVar21 = local_e8; iVar21 <= local_170; iVar21 = iVar21 + 1) {
        local_30 = PTR_00803380 + iVar21 * iVar18 * 2;
        for (iVar10 = local_a0; iVar10 <= local_cc; iVar10 = iVar10 + 1) {
          if (((PTR_00803380 + iVar21 * iVar18 * 2)[iVar10 * 2] & 0xf0) != 0) {
            iVar13 = iVar13 + 1;
            iVar19 = iVar19 + iVar10;
            local_e4 = local_e4 + iVar21;
          }
        }
      }
      iVar18 = DAT_00803304;
      iVar21 = DAT_00803308;
      if (0 < iVar13) {
        iVar18 = (iVar19 + iVar13 / 2) / iVar13;
        iVar21 = (local_e4 + iVar13 / 2) / iVar13;
        local_EAX_3726 = FUN_006acf90(iVar18,iVar21,DAT_00803304,DAT_00803308);
        if (5 < local_EAX_3726) {
          iVar18 = ((local_EAX_3726 + -5) * DAT_00803304 + iVar18 * 5) / local_EAX_3726;
          iVar21 = ((local_EAX_3726 + -5) * DAT_00803308 + iVar21 * 5) / local_EAX_3726;
        }
      }
      DAT_00803308 = iVar21;
      DAT_00803304 = iVar18;
      piVar16 = local_13c;
      for (iVar18 = 0x14; pbVar5 = local_a4, iVar13 = DAT_0080339c, piVar4 = local_84, iVar18 != 0;
          iVar18 = iVar18 + -1) {
        *piVar16 = 0;
        piVar16 = piVar16 + 1;
      }
      for (; local_84 = piVar4, iVar13 < 0xd; iVar13 = iVar13 + 1) {
        local_28_mg1 = FUN_0055ee70(pbVar5,iVar13,1);
        iVar18 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar21 = (char)pbVar5[iVar18 * 2] + DAT_00803304;
            iVar19 = (char)pbVar5[iVar18 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar21) && (iVar21 < DAT_008033a4)) && (-1 < iVar19)) &&
               ((iVar19 < DAT_008033a8 &&
                ((PTR_00803380[(iVar19 * DAT_008033a4 + iVar21) * 2] & 0xf0) != 0)))) {
              local_13c[iVar13] = local_13c[iVar13] + 1;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < local_28_mg1);
        }
        local_13c[iVar13] = (local_13c[iVar13] * 100) / local_28_mg1;
        piVar4 = local_84;
      }
      iVar18 = -30000;
      iVar13 = 0xb;
      if (DAT_0080339c < 0xc) {
        do {
          iVar19 = ((0xc - iVar13) * local_10c + local_13c[iVar13]) / (0xd - iVar13) - local_10c;
          if (iVar18 <= iVar19) {
            DAT_00803384 = iVar13 + 1;
            iVar18 = iVar19;
          }
          iVar13 = iVar13 + -1;
        } while (DAT_0080339c <= iVar13);
      }
      if (DAT_00803384 < 10) {
        DAT_00803384 = DAT_00803384 + 2;
      }
      *piVar4 = DAT_00803304;
      piVar4[1] = DAT_00803308;
      PTR_008033b4 = (undefined2 *)FUN_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar4,1);
      FreeAndNull(local_60);
      thunk_FUN_0055dee0(pbVar5);
      iVar18 = 0;
      do {
        iVar13 = (int)(iVar18 * 0x168 + (iVar18 * 0x168 >> 0x1f & 0xfU)) >> 4;
        local_EAX_4178 = FUN_00561240(DAT_008032f0,DAT_008032ec,iVar13);
        PTR_008032fc[iVar18] = local_EAX_4178;
        piVar10 = FUN_00561240(DAT_00803374,DAT_00803378,iVar13);
        PTR_008033b8[iVar18] = piVar10;
        local_EAX_4230 = FUN_00561240(5,DAT_008032ec,iVar13);
        PTR_008033b0[iVar18] = local_EAX_4230;
        iVar18 = iVar18 + 1;
        iVar13 = DAT_0080339c;
        piVar16 = local_164;
      } while (iVar18 < 0x10);
      for (; local_164 = piVar16, local_8c = iVar13, iVar13 < 0x14; iVar13 = iVar13 + 2) {
        local_28_mg1 = FUN_0055ee70(pbVar5,iVar13,1);
        iVar19 = DAT_00803384 - DAT_0080339c;
        iVar18 = 0x14 - DAT_00803384;
        if (iVar19 < iVar18) {
          uVar15 = DAT_00803384 - iVar13 >> 0x1f;
          iVar21 = (DAT_00803384 - iVar13 ^ uVar15) - uVar15;
          iVar21 = iVar21 * iVar21;
          iVar18 = iVar18 * iVar18;
        }
        else {
          uVar15 = DAT_00803384 - iVar13 >> 0x1f;
          iVar21 = (DAT_00803384 - iVar13 ^ uVar15) - uVar15;
          iVar21 = iVar21 * iVar21;
          iVar18 = iVar19 * iVar19;
        }
        DAT_00803388 = (iVar18 - iVar21) / 2;
        local_50 = 0;
        if (0 < local_28_mg1) {
          do {
            local_94 = (char)local_a4[local_50 * 2] + DAT_00803304;
            if (((-1 < local_94) && (local_94 < DAT_008033a4)) &&
               ((iVar18 = (char)local_a4[local_50 * 2 + 1] + DAT_00803308, -1 < iVar18 &&
                ((iVar18 < DAT_008033a8 &&
                 (0 < (short)PTR_008033b4[iVar18 * DAT_008033a4 + local_94])))))) {
              iVar13 = 0;
              local_148 = 0;
              if (0 < g_runtimeRecordCount_0080338C) {
                do {
                  pRVar7 = g_runtimeRecords_00803310 + iVar13;
                  iVar19 = pRVar7->field_0010;
                  if (pRVar7->field_0010 <= DAT_008032ec) {
                    iVar19 = DAT_008032ec;
                  }
                  iVar17 = FUN_006acf90(pRVar7->field_0000,pRVar7->field_0004,local_94,iVar18);
                  if (iVar17 < iVar19 / 2) {
                    local_148 = 1;
                    break;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < g_runtimeRecordCount_0080338C);
              }
              if (local_148 == 0) {
                iVar13 = 0x10;
                uVar12 = FUN_006db910(DAT_00803304,DAT_00803308,local_94,iVar18);
                local_74 = (int *)FUN_006db990(uVar12,iVar13);
                iVar13 = (int)local_74 - 3;
                if (iVar13 <= (int)((int)local_74 + 3U)) {
                  do {
                    if (iVar13 < 0) {
                      iVar19 = iVar13 + 0x10;
                    }
                    else {
                      iVar19 = iVar13 + -0x10;
                      if (iVar13 < 0x10) {
                        iVar19 = iVar13;
                      }
                    }
                    iVar20 = FUN_00561dc0(local_94,iVar18,iVar19);
                    FUN_005623c0(local_94,iVar18,iVar20,local_74,DAT_0080330c);
                    if (-1 < local_98) {
                      FUN_005623c0(local_94,iVar18,iVar20,local_74,DAT_008032e8);
                    }
                    iVar13 = iVar13 + 3;
                  } while (iVar13 <= (int)((int)local_74 + 3U));
                }
              }
            }
            local_50 = local_50 + 2;
            iVar13 = local_8c;
          } while (local_50 < local_28_mg1);
        }
        piVar16 = local_164;
        pbVar5 = local_a4;
      }
      iVar18 = ((local_98 * 0x19 + 0x19) * 4) / (int)uVar23;
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
            piVar16[iVar13] = g_runtimeRecords_008032F8[iVar13].field_000C;
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_0080337c);
        }
        iVar13 = 0;
        if (0 < DAT_00803314) {
          do {
            g_runtimeRecords_008032F4[iVar13].field_000C =
                 g_runtimeRecords_008032F4[iVar13].field_000C - iVar18;
            piVar16[DAT_0080337c + iVar13] = g_runtimeRecords_008032F4[iVar13].field_000C;
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_00803314);
        }
        pRVar25 = g_runtimeRecords_00803300 + DAT_0080337c;
        for (uVar15 = DAT_00803314 * 5 & 0x3fffffff; uVar15 != 0; uVar15 = uVar15 - 1) {
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
        uStackY_20c = 0x56084e;
        local_6c[0] = thunk_FUN_0055f0c0(piVar16,DAT_00803398,uVar23,10,param_10,FUN_00562170,
                                         FUN_00562e10);
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_1c = &stack0xfffffe14;
          local_40 = (int *)&stack0xfffffe14;
          piVar16 = (int *)&stack0xfffffe14;
          local_8 = 0xffffffff;
          local_15c = 0;
          local_78 = 0;
          iVar13 = local_54;
          temp_203fd2ac8a80 = g_runtimeRecords_008032F4;
          piVar4 = (int *)&stack0xfffffe14;
          puVar24 = &stack0xfffffe14;
          iVar18 = local_98;
          if (-1 < local_98) {
            do {
              local_38 = -30000;
              local_154 = 0;
              iVar18 = local_15c;
              temp_3fb0403402 = g_runtimeRecords_008032F8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < temp_3fb0403402->field_000C) {
                    iVar18 = 30000;
                    iVar13 = 0;
                    if (0 < local_15c) {
                      do {
                        local_EAX_5398 =
                             FUN_006acf90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
                                          g_runtimeRecords_00803300[local_40[iVar13]].field_0004,
                                          temp_3fb0403402->field_0000,temp_3fb0403402->field_0004);
                        if (local_EAX_5398 < iVar18) {
                          iVar18 = local_EAX_5398;
                        }
                        iVar13 = iVar13 + 1;
                      } while (iVar13 < local_15c);
                    }
                    if (local_38 < iVar18) {
                      local_54 = local_154;
                      local_38 = iVar18;
                    }
                  }
                  local_154 = local_154 + 1;
                  temp_3fb0403402 = temp_3fb0403402 + 1;
                  iVar18 = local_15c;
                  iVar13 = local_54;
                  piVar16 = local_40;
                } while (local_154 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar16[iVar18] = -1;
              }
              else {
                g_runtimeRecords_008032F8[iVar13].field_000C = -1;
                piVar16[iVar18] = iVar13;
              }
              local_15c = iVar18 + 1;
              local_78 = local_78 + 1;
              temp_203fd2ac8a80 = g_runtimeRecords_008032F4;
              piVar4 = local_40;
              puVar24 = local_1c;
              iVar18 = local_98;
            } while (local_78 <= local_98);
          }
          while (local_1c = puVar24, local_40 = piVar4, local_78 = iVar18 + 1,
                g_runtimeRecords_008032F4 = temp_203fd2ac8a80, local_78 < (int)uVar23) {
            local_38 = -30000;
            local_154 = 0;
            iVar18 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < temp_203fd2ac8a80->field_000C) {
                  iVar18 = 30000;
                  iVar13 = 0;
                  if (0 < local_15c) {
                    do {
                      local_EAX_5637 =
                           FUN_006acf90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
                                        g_runtimeRecords_00803300[local_40[iVar13]].field_0004,
                                        temp_203fd2ac8a80->field_0000,temp_203fd2ac8a80->field_0004);
                      if (local_EAX_5637 < iVar18) {
                        iVar18 = local_EAX_5637;
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < local_15c);
                  }
                  if (local_38 < iVar18) {
                    local_54 = local_154;
                    local_38 = iVar18;
                  }
                }
                local_154 = local_154 + 1;
                temp_203fd2ac8a80 = temp_203fd2ac8a80 + 1;
                iVar18 = local_78;
              } while (local_154 < DAT_00803314);
            }
            if (local_38 < 0) {
              local_40[local_15c] = -1;
            }
            else {
              g_runtimeRecords_00803300[DAT_0080337c + local_54].field_000C = -1;
              local_40[local_15c] = local_54 + DAT_0080337c;
            }
            local_15c = local_15c + 1;
            temp_203fd2ac8a80 = g_runtimeRecords_008032F4;
            piVar4 = local_40;
            puVar24 = local_1c;
          }
        }
        iVar18 = 0;
        if (0 < (int)uVar23) {
          do {
            iVar13 = local_40[iVar18];
            if (-1 < iVar13) {
              iVar19 = local_80[iVar18];
              STField<int>(iVar19,0x4) = g_runtimeRecords_00803300[iVar13].field_0000 + DAT_008033bc;
              STField<int>(iVar19,0x8) = g_runtimeRecords_00803300[iVar13].field_0004 + DAT_008033c0;
              STField<undefined4>(iVar19,0xC) = 0xfffffff6;
              iVar21 = local_c4;
              if (local_98 < iVar18) {
                iVar21 = local_3c;
              }
              STField<int>(iVar19,0x10) = iVar21;
              STField<int>(iVar19,0x14) = g_runtimeRecords_00803300[iVar13].field_0008;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar23);
        }
      }
      g_currentExceptionFrame = local_1b8.previous;
      iVar15 = local_70;
    }
    else {
      g_currentExceptionFrame = local_1b8.previous;
      iVar16 = ReportDebugMessage("E:\\__titans\\scoreai.cpp",0x956,0,iVar15,"%s");
      if (iVar16 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar15;
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
                (iVar18,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",0x968);
    }
  }
  ExceptionList = local_14;
  return;
}

