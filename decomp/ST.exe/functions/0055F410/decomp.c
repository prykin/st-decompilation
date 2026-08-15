#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol temp_3fb0403402 */
/* WARNING: Unable to use type for symbol temp_203fd2ac8a80 */
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
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int iVar15;
  int iVar11;
  short *psVar12;
  short *psVar13;
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
  int iVar14;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  STWorldCell *pSVar24;
  uint uVar25;
  void *pvVar26;
  RuntimeRecord_00803300_0014 *pRVar27;
  bool bVar28;
  undefined4 uStackY_2060;
  RuntimeRecord_00803300_0014 aRStackY_205c [100];
  RuntimeRecord_008032F4_0014 aRStackY_188c [99];
  int iStackY_10c0;
  AnonPointee_TLOBaseTy_0607 aAStackY_10bc [16];
  undefined4 uStackY_f30;
  undefined4 auStackY_f2c [15];
  undefined4 uStackY_ef0;
  undefined4 auStackY_eec [16];
  undefined1 auStackY_eac [60];
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
  void *local_30;
  int local_28_mg1;
  short *local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
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
    puVar10 = (undefined4 *)(param_4 + 8);
    iVar21 = param_5;
    ExceptionList = &local_14;
    do {
      puVar10[-1] = 0xffffffff;
      *puVar10 = 0xffffffff;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10 = puVar10 + 6;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    DAT_00803390 = 0x28;
    DAT_008033bc = param_2 + -0x28;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x28;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar21 = param_2 + 0x28;
    if (g_pathingGrid.sizeX <= iVar21) {
      iVar21 = g_pathingGrid.sizeX + -1;
    }
    iVar14 = param_3 + 0x28;
    if (g_pathingGrid.sizeY <= iVar14) {
      iVar14 = g_pathingGrid.sizeY + -1;
    }
    DAT_008033a4 = (iVar21 - DAT_008033bc) + 1;
    DAT_008033a8 = (iVar14 - DAT_008033c0) + 1;
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
      DAT_00803380 = Library::DKW::LIB::MemAllocClear(DAT_008033ac * 2);
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
      iVar21 = param_5 * -4;
      local_80 = (undefined4 *)((int)aAStackY_10bc + iVar21);
      *(undefined4 *)((int)aAStackY_10bc + iVar21 + -4) = 0x55f6b8;
      g_runtimeRecords_008032F8 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_205c + iVar21);
      g_runtimeRecords_00803300 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_205c + iVar21);
      (&uStackY_2060)[-param_5] = 0x55f6d5;
      g_runtimeRecords_00803310 = (RuntimeRecord_00803310_0014 *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      local_8 = 0xffffffff;
      memset(auStackY_eec, 0, 0x80); /* compiler bulk-zero initialization */
      iVar14 = 0;
      PTR_008033b8 = auStackY_eac;
      memset(auStackY_f2c, 0, 0x40); /* compiler bulk-zero initialization */
      g_runtimeRecords_008032F4 = (RuntimeRecord_008032F4_0014 *)((int)aRStackY_188c + iVar21);
      uVar25 = 0;
      local_78 = 0;
      pRVar6 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_205c + iVar21);
      puVar10 = auStackY_eec;
      pRVar27 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_205c + iVar21);
      pRVar7 = (RuntimeRecord_00803310_0014 *)&stack0xfffffe14;
      puVar8 = auStackY_f2c;
      if (0 < param_5) {
        do {
          piVar20 = (int *)(param_4 + local_78 * 0x18);
          iVar14 = *piVar20;
          if (0 < iVar14) {
            iVar22 = 0;
            if (0 < (int)uVar25) {
              do {
                if (**(int **)((int)aAStackY_10bc + iVar22 * 4 + iVar21) < iVar14) break;
                iVar22 = iVar22 + 1;
              } while (iVar22 < (int)uVar25);
            }
            if (iVar22 < (int)uVar25) {
              Library::MSVCRT::FUN_0072da70
                        ((undefined4 *)((int)aAStackY_10bc + iVar22 * 4 + iVar21 + 4),
                         (AnonPointee_TLOBaseTy_0607 *)((int)aAStackY_10bc + iVar22 * 4 + iVar21),
                         (iVar22 * 0x3fffffff + uVar25) * 4);
            }
            *(int **)((int)aAStackY_10bc + iVar22 * 4 + iVar21) = piVar20;
            uVar25 = uVar25 + 1;
          }
          local_78 = local_78 + 1;
          pRVar6 = g_runtimeRecords_008032F8;
          puVar10 = PTR_008032fc;
          pRVar27 = g_runtimeRecords_00803300;
          pRVar7 = g_runtimeRecords_00803310;
          puVar8 = PTR_008033b0;
        } while (local_78 < param_5);
      }
      PTR_008033b0 = puVar8;
      g_runtimeRecords_00803310 = pRVar7;
      g_runtimeRecords_00803300 = pRVar27;
      PTR_008032fc = puVar10;
      g_runtimeRecords_008032F8 = pRVar6;
      iVar21 = -1;
      iVar14 = -1;
      local_98 = -1;
      local_48 = (uint)(*(int *)local_80[uVar25 - 1] < 0x15);
      for (iVar22 = uVar25 - 2; -1 < iVar22; iVar22 = iVar22 + -1) {
        iVar23 = *(int *)local_80[iVar22];
        if ((10 < iVar23) &&
           (iVar11 = iVar23 - *(int *)local_80[iVar22 + 1], *(int *)local_80[iVar22 + 1] < iVar11))
        {
          if (iVar11 <= iVar21) {
            if ((local_48 == 0) || (iVar23 < 0x15)) goto LAB_0055f7ef;
            local_48 = 0;
          }
          local_98 = iVar22;
          iVar21 = iVar11;
          iVar14 = iVar22;
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
      iVar21 = DAT_008033a4;
      iVar14 = local_e8;
      if (0 < local_e8) {
        do {
          iVar22 = local_b0 * iVar21 * 2;
          local_30 = (void *)(iVar22 + (int)DAT_00803380);
          local_d4 = (void *)(iVar22 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (local_b0 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar22 = 0;
          if (0 < iVar21) {
            do {
              iVar21 = 0;
              iVar23 = 0;
              psVar13 = local_90;
              do {
                if (*psVar13 == 0) {
                  iVar21 = iVar21 + 1;
                }
                iVar23 = iVar23 + 1;
                psVar13 = psVar13 + g_pathingGrid.planeStride;
              } while (iVar23 < 5);
              *(char *)((int)local_30 + iVar22 * 2) = (char)iVar21;
              if (iVar21 < 1) {
                *(undefined2 *)((int)local_d4 + iVar22 * 2) = 0xffff;
              }
              else if (iVar21 < 3) {
                *(short *)((int)local_d4 + iVar22 * 2) = (3 - (short)iVar21) * 3;
              }
              else {
                *(undefined2 *)((int)local_d4 + iVar22 * 2) = 0;
              }
              iVar22 = iVar22 + 1;
              local_90 = local_90 + 1;
              iVar21 = DAT_008033a4;
            } while (iVar22 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < local_e8);
      }
      for (; iVar14 <= local_170; iVar14 = iVar14 + 1) {
        iVar22 = iVar14 * iVar21 * 2;
        local_30 = (void *)(iVar22 + (int)DAT_00803380);
        local_d4 = (void *)(iVar22 + (int)local_60[0]);
        psVar13 = g_pathingGrid.cells +
                  (iVar14 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
        iVar22 = 0;
        if (0 < local_a0) {
          do {
            iVar21 = 0;
            iVar23 = 0;
            psVar12 = psVar13;
            do {
              if (*psVar12 == 0) {
                iVar21 = iVar21 + 1;
              }
              iVar23 = iVar23 + 1;
              psVar12 = psVar12 + g_pathingGrid.planeStride;
            } while (iVar23 < 5);
            *(char *)((int)local_30 + iVar22 * 2) = (char)iVar21;
            if (iVar21 < 1) {
              *(undefined2 *)((int)local_d4 + iVar22 * 2) = 0xffff;
            }
            else if (iVar21 < 3) {
              *(short *)((int)local_d4 + iVar22 * 2) = (3 - (short)iVar21) * 3;
            }
            else {
              *(undefined2 *)((int)local_d4 + iVar22 * 2) = 0;
            }
            iVar22 = iVar22 + 1;
            psVar13 = psVar13 + 1;
            iVar21 = DAT_008033a4;
          } while (iVar22 < local_a0);
        }
        psVar13 = g_pathingGrid.cells +
                  (int)g_pathingGrid.sizeX * (iVar14 + DAT_008033c0) + local_a0 + DAT_008033bc;
        local_168 = g_worldGrid.cells +
                    (int)g_worldGrid.sizeX * (iVar14 + DAT_008033c0) + local_a0 + DAT_008033bc;
        local_94 = local_a0;
        while (local_94 <= local_cc) {
          iVar22 = 0;
          iVar21 = 0;
          local_34 = 0;
          pSVar24 = local_168;
          local_24 = psVar13;
          do {
            if (*local_24 == 0) {
              iVar21 = iVar21 + 1;
              if ((pSVar24->objects[1] != nullptr) &&
                 (pSVar24->objects[1]->value_20 == 0x1ae)) {
                iVar22 = iVar22 + 3;
              }
            }
            else if (pSVar24->objects[0] != nullptr) {
              iVar21 = iVar21 + 1;
              local_dc = iVar21;
              if (param_1 != 0xff) {
                bVar2 = *(byte *)&pSVar24->objects[0][1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_0055fc5b:
                    iVar23 = 0;
                  }
                  else {
                    uVar19 = param_1 & 0xff;
                    bVar1 = g_playerRelationMatrix[bVar2][uVar19];
                    if ((bVar1 == 0) && (g_playerRelationMatrix[uVar19][bVar2] == 0)) {
                      iVar23 = -2;
                    }
                    else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar19][bVar2] == 0)) {
                      iVar23 = -1;
                    }
                    else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar19][bVar2] == 1)) {
                      iVar23 = 1;
                    }
                    else {
                      if ((bVar1 != 1) || (g_playerRelationMatrix[uVar19][bVar2] != 1))
                      goto LAB_0055fc5b;
                      iVar23 = 2;
                    }
                  }
                  bVar28 = iVar23 < 0;
                }
                else {
                  bVar28 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                }
                if (bVar28) goto LAB_0055fc71;
              }
              iVar22 = iVar22 + 1;
            }
LAB_0055fc71:
            local_34 = local_34 + 1;
            local_24 = local_24 + g_pathingGrid.planeStride;
            pSVar24 = pSVar24 + g_worldGrid.planeStride;
          } while (local_34 < 5);
          *(byte *)((int)local_30 + local_94 * 2) = (char)iVar22 << 4 | (byte)iVar21;
          if (iVar21 - iVar22 < 1) {
            *(undefined2 *)((int)local_d4 + local_94 * 2) = 0xffff;
          }
          else if (iVar21 - iVar22 < 3) {
            *(short *)((int)local_d4 + local_94 * 2) = (((short)iVar22 - (short)iVar21) + 3) * 3;
          }
          else {
            *(undefined2 *)((int)local_d4 + local_94 * 2) = 0;
          }
          local_94 = local_94 + 1;
          psVar13 = psVar13 + 1;
          local_168 = local_168 + 1;
          iVar21 = DAT_008033a4;
        }
        local_90 = g_pathingGrid.cells +
                   (iVar14 + DAT_008033c0) * (int)g_pathingGrid.sizeX + local_cc + DAT_008033bc + 1;
        iVar22 = local_cc + 1;
        if (iVar22 < iVar21) {
          do {
            iVar21 = 0;
            iVar23 = 0;
            psVar13 = local_90;
            do {
              if (*psVar13 == 0) {
                iVar21 = iVar21 + 1;
              }
              iVar23 = iVar23 + 1;
              psVar13 = psVar13 + g_pathingGrid.planeStride;
            } while (iVar23 < 5);
            *(char *)((int)local_30 + iVar22 * 2) = (char)iVar21;
            if (iVar21 < 1) {
              *(undefined2 *)((int)local_d4 + iVar22 * 2) = 0xffff;
            }
            else if (iVar21 < 3) {
              *(short *)((int)local_d4 + iVar22 * 2) = (3 - (short)iVar21) * 3;
            }
            else {
              *(undefined2 *)((int)local_d4 + iVar22 * 2) = 0;
            }
            iVar22 = iVar22 + 1;
            local_90 = local_90 + 1;
            iVar21 = DAT_008033a4;
          } while (iVar22 < DAT_008033a4);
        }
      }
      local_b0 = local_170 + 1;
      if (local_b0 < DAT_008033a8) {
        do {
          iVar14 = local_b0 * iVar21 * 2;
          local_30 = (void *)((int)DAT_00803380 + iVar14);
          local_d4 = (void *)(iVar14 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (local_b0 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar14 = 0;
          if (0 < iVar21) {
            do {
              iVar21 = 0;
              iVar22 = 0;
              psVar13 = local_90;
              do {
                if (*psVar13 == 0) {
                  iVar21 = iVar21 + 1;
                }
                iVar22 = iVar22 + 1;
                psVar13 = psVar13 + g_pathingGrid.planeStride;
              } while (iVar22 < 5);
              *(char *)((int)local_30 + iVar14 * 2) = (char)iVar21;
              if (iVar21 < 1) {
                *(undefined2 *)((int)local_d4 + iVar14 * 2) = 0xffff;
              }
              else if (iVar21 < 3) {
                *(short *)((int)local_d4 + iVar14 * 2) = (3 - (short)iVar21) * 3;
              }
              else {
                *(undefined2 *)((int)local_d4 + iVar14 * 2) = 0;
              }
              iVar14 = iVar14 + 1;
              local_90 = local_90 + 1;
              iVar21 = DAT_008033a4;
            } while (iVar14 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < DAT_008033a8);
      }
      if (((param_8 != 0) && (0 < param_9)) && (local_78 = 0, 0 < param_9)) {
        do {
          piVar20 = (int *)(param_8 + local_78 * 0x18);
          iVar14 = *piVar20;
          if (0 < iVar14) {
            local_88 = piVar20[1] - DAT_008033bc;
            if ((-1 < local_88) && (local_88 < iVar21)) {
              iVar22 = piVar20[2] - DAT_008033c0;
              local_c0 = iVar22;
              if ((-1 < iVar22) && (iVar22 < DAT_008033a8)) {
                iVar21 = piVar20[3];
                if ((iVar21 < 1) || (iVar23 = piVar20[4], iVar23 < 1)) {
                  iVar21 = 0;
                  do {
                    if (iVar14 <= (int)(&DAT_007c9614)[iVar21]) break;
                    iVar21 = iVar21 + 1;
                  } while (iVar21 < 9);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar21 = *(int *)(local_3c * 8 + 0x7c9640);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar23 = *(int *)(local_3c * 8 + 0x7c963c);
                }
                local_d0_mg1 = FUN_00561240(iVar21,iVar23,piVar20[5]);
                if (1 < *local_d0_mg1) {
                  local_144 = (iVar14 << 0x10) / *local_d0_mg1;
                  iVar21 = 0;
                  pvVar26 = (void *)((int)DAT_00803380 +
                                    (local_d0_mg1[3] + iVar22) * DAT_008033a4 * 2);
                  local_b0 = 0;
                  if (0 < local_d0_mg1[4]) {
                    do {
                      iVar14 = local_d0_mg1[3] + iVar22 + local_b0;
                      if ((-1 < iVar14) && (iVar14 < DAT_008033a8)) {
                        local_ac = local_d0_mg1[local_b0 * 2 + 6] + local_88;
                        for (iVar14 = local_d0_mg1[local_b0 * 2 + 5] + local_88; iVar14 <= local_ac;
                            iVar14 = iVar14 + 1) {
                          if (((-1 < iVar14) && (iVar14 < DAT_008033a4)) &&
                             (iVar21 = iVar21 + local_144, 0x10000 < iVar21)) {
                            bVar2 = *(byte *)((int)pvVar26 + iVar14 * 2);
                            if ((int)((uint)(bVar2 >> 4) + (iVar21 >> 0x10)) < 0xf) {
                              *(byte *)((int)pvVar26 + iVar14 * 2) =
                                   (char)((uint)iVar21 >> 0x10) * '\x10' + bVar2;
                            }
                            else {
                              *(byte *)((int)pvVar26 + iVar14 * 2) = (bVar2 & 7) - 0x10;
                            }
                          }
                        }
                      }
                      local_b0 = local_b0 + 1;
                      pvVar26 = (void *)((int)pvVar26 + DAT_008033a4 * 2);
                      iVar22 = local_c0;
                    } while (local_b0 < local_d0_mg1[4]);
                  }
                }
                FreeAndNull(&local_d0_mg1);
                iVar21 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_9);
      }
      iVar14 = 0;
      g_runtimeRecordCount_0080338C = 0;
      if ((param_6 != 0) && (0 < param_7)) {
        iVar22 = (*(int *)local_80[uVar25 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar22;
        local_78 = 0;
        if (0 < param_7) {
          do {
            piVar20 = (int *)(param_6 + local_78 * 0x18);
            iVar23 = piVar20[1] - DAT_008033bc;
            if ((-1 < iVar23) && (iVar23 < iVar21)) {
              iVar11 = piVar20[2] - DAT_008033c0;
              local_b0 = iVar11;
              if ((-1 < iVar11) && (iVar11 < DAT_008033a8)) {
                iVar18 = piVar20[3];
                if (iVar18 == -10) {
                  iVar18 = *(int *)(&DAT_007a4c20 + piVar20[4] * 8);
                  local_4c = *(int *)(&DAT_007a4c24 + piVar20[4] * 8) * iVar18;
LAB_0056016e:
                }
                else if (iVar18 == 1) {
                  iVar18 = *(int *)(&DAT_007a4b60 + piVar20[4] * 4);
                  local_4c = iVar18;
                }
                else {
                  if (iVar18 != 2) {
                    iVar18 = *(int *)(&DAT_007a4bf8 + piVar20[4] * 4) * 2;
                    local_4c = *(int *)(&DAT_007a4bf8 + piVar20[4] * 4) * 6;
                    goto LAB_0056016e;
                  }
                  iVar18 = *(int *)(&DAT_007a4b88 + piVar20[4] * 8);
                  local_4c = iVar18;
                }
                if (iVar22 <= (*piVar20 * 100) / local_4c) {
                  g_runtimeRecords_00803310[iVar14].field_0000 = iVar23;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0004 = iVar11;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0008 = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_000C = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0010 = iVar18;
                  iVar14 = g_runtimeRecordCount_0080338C + 1;
                  iVar21 = DAT_008033a4;
                  g_runtimeRecordCount_0080338C = iVar14;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_7);
        }
      }
      DAT_0080339c = 5;
      iVar14 = 0;
      iVar22 = 0;
      local_e4 = 0;
      for (iVar23 = local_e8; iVar23 <= local_170; iVar23 = iVar23 + 1) {
        local_30 = (void *)((int)DAT_00803380 + iVar23 * iVar21 * 2);
        for (iVar11 = local_a0; iVar11 <= local_cc; iVar11 = iVar11 + 1) {
          if ((*(byte *)((int)local_30 + iVar11 * 2) & 0xf0) != 0) {
            iVar14 = iVar14 + 1;
            iVar22 = iVar22 + iVar11;
            local_e4 = local_e4 + iVar23;
          }
        }
      }
      iVar21 = DAT_00803304;
      iVar23 = DAT_00803308;
      if (0 < iVar14) {
        iVar21 = (iVar22 + iVar14 / 2) / iVar14;
        iVar23 = (local_e4 + iVar14 / 2) / iVar14;
        local_EAX_3726 = FUN_006acf90(iVar21,iVar23,DAT_00803304,DAT_00803308);
        if (5 < local_EAX_3726) {
          iVar21 = ((local_EAX_3726 + -5) * DAT_00803304 + iVar21 * 5) / local_EAX_3726;
          iVar23 = ((local_EAX_3726 + -5) * DAT_00803308 + iVar23 * 5) / local_EAX_3726;
        }
      }
      DAT_00803308 = iVar23;
      DAT_00803304 = iVar21;
      piVar20 = local_13c;
      for (iVar21 = 0x14; pbVar5 = local_a4, iVar14 = DAT_0080339c, piVar4 = local_84, iVar21 != 0;
          iVar21 = iVar21 + -1) {
        *piVar20 = 0;
        piVar20 = piVar20 + 1;
      }
      for (; local_84 = piVar4, iVar14 < 0xd; iVar14 = iVar14 + 1) {
        local_28_mg1 = FUN_0055ee70(pbVar5,iVar14,1);
        iVar21 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar23 = (char)pbVar5[iVar21 * 2] + DAT_00803304;
            iVar22 = (char)pbVar5[iVar21 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar23) && (iVar23 < DAT_008033a4)) && (-1 < iVar22)) &&
               ((iVar22 < DAT_008033a8 &&
                ((*(byte *)((int)DAT_00803380 + (iVar22 * DAT_008033a4 + iVar23) * 2) & 0xf0) != 0))
               )) {
              local_13c[iVar14] = local_13c[iVar14] + 1;
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < local_28_mg1);
        }
        local_13c[iVar14] = (local_13c[iVar14] * 100) / local_28_mg1;
        piVar4 = local_84;
      }
      iVar21 = -30000;
      iVar14 = 0xb;
      if (DAT_0080339c < 0xc) {
        do {
          iVar22 = ((0xc - iVar14) * local_10c + local_13c[iVar14]) / (0xd - iVar14) - local_10c;
          if (iVar21 <= iVar22) {
            DAT_00803384 = iVar14 + 1;
            iVar21 = iVar22;
          }
          iVar14 = iVar14 + -1;
        } while (DAT_0080339c <= iVar14);
      }
      if (DAT_00803384 < 10) {
        DAT_00803384 = DAT_00803384 + 2;
      }
      *piVar4 = DAT_00803304;
      piVar4[1] = DAT_00803308;
      PTR_008033b4 = FUN_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar4,1);
      FreeAndNull(local_60);
      thunk_FUN_0055dee0(pbVar5);
      iVar21 = 0;
      do {
        iVar14 = (int)(iVar21 * 0x168 + (iVar21 * 0x168 >> 0x1f & 0xfU)) >> 4;
        local_EAX_4178 = FUN_00561240(DAT_008032f0,DAT_008032ec,iVar14);
        *(int **)((int)PTR_008032fc + iVar21 * 4) = local_EAX_4178;
        piVar10 = FUN_00561240(DAT_00803374,DAT_00803378,iVar14);
        *(int **)((int)PTR_008033b8 + iVar21 * 4) = piVar10;
        local_EAX_4230 = FUN_00561240(5,DAT_008032ec,iVar14);
        *(int **)((int)PTR_008033b0 + iVar21 * 4) = local_EAX_4230;
        iVar21 = iVar21 + 1;
        iVar14 = DAT_0080339c;
        piVar20 = local_164;
      } while (iVar21 < 0x10);
      for (; local_164 = piVar20, local_8c = iVar14, iVar14 < 0x14; iVar14 = iVar14 + 2) {
        local_28_mg1 = FUN_0055ee70(pbVar5,iVar14,1);
        iVar22 = DAT_00803384 - DAT_0080339c;
        iVar21 = 0x14 - DAT_00803384;
        if (iVar22 < iVar21) {
          uVar19 = DAT_00803384 - iVar14 >> 0x1f;
          iVar23 = (DAT_00803384 - iVar14 ^ uVar19) - uVar19;
          iVar23 = iVar23 * iVar23;
          iVar21 = iVar21 * iVar21;
        }
        else {
          uVar19 = DAT_00803384 - iVar14 >> 0x1f;
          iVar23 = (DAT_00803384 - iVar14 ^ uVar19) - uVar19;
          iVar23 = iVar23 * iVar23;
          iVar21 = iVar22 * iVar22;
        }
        DAT_00803388 = (iVar21 - iVar23) / 2;
        local_50 = 0;
        if (0 < local_28_mg1) {
          do {
            local_94 = (char)local_a4[local_50 * 2] + DAT_00803304;
            if (((-1 < local_94) && (local_94 < DAT_008033a4)) &&
               ((iVar21 = (char)local_a4[local_50 * 2 + 1] + DAT_00803308, -1 < iVar21 &&
                ((iVar21 < DAT_008033a8 &&
                 (0 < *(short *)((int)PTR_008033b4 + (iVar21 * DAT_008033a4 + local_94) * 2))))))) {
              iVar14 = 0;
              local_148 = 0;
              if (0 < g_runtimeRecordCount_0080338C) {
                do {
                  pRVar7 = g_runtimeRecords_00803310 + iVar14;
                  iVar22 = pRVar7->field_0010;
                  if (pRVar7->field_0010 <= DAT_008032ec) {
                    iVar22 = DAT_008032ec;
                  }
                  iVar17 = FUN_006acf90(pRVar7->field_0000,pRVar7->field_0004,local_94,iVar21);
                  if (iVar17 < iVar22 / 2) {
                    local_148 = 1;
                    break;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < g_runtimeRecordCount_0080338C);
              }
              if (local_148 == 0) {
                iVar14 = 0x10;
                uVar12 = FUN_006db910(DAT_00803304,DAT_00803308,local_94,iVar21);
                local_74 = (int *)FUN_006db990(uVar12,iVar14);
                iVar14 = (int)local_74 - 3;
                if (iVar14 <= (int)((int)local_74 + 3U)) {
                  do {
                    if (iVar14 < 0) {
                      iVar22 = iVar14 + 0x10;
                    }
                    else {
                      iVar22 = iVar14 + -0x10;
                      if (iVar14 < 0x10) {
                        iVar22 = iVar14;
                      }
                    }
                    iVar20 = FUN_00561dc0(local_94,iVar21,iVar22);
                    FUN_005623c0(local_94,iVar21,iVar20,local_74,DAT_0080330c);
                    if (-1 < local_98) {
                      FUN_005623c0(local_94,iVar21,iVar20,local_74,DAT_008032e8);
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
        piVar20 = local_164;
        pbVar5 = local_a4;
      }
      iVar21 = ((local_98 * 0x19 + 0x19) * 4) / (int)uVar25;
      if (iVar21 < DAT_0080337c) {
        DAT_0080337c = iVar21;
      }
      if (100 - iVar21 < DAT_00803314) {
        DAT_00803314 = 100 - iVar21;
      }
      DAT_00803398 = DAT_0080337c + DAT_00803314;
      if (0 < (int)DAT_00803398) {
        iVar21 = 0x7fffffff;
        iVar14 = 0;
        if (0 < DAT_0080337c) {
          do {
            if (g_runtimeRecords_008032F8[iVar14].field_000C < iVar21) {
              iVar21 = g_runtimeRecords_008032F8[iVar14].field_000C;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_0080337c);
        }
        iVar14 = 0;
        if (0 < DAT_00803314) {
          do {
            if (g_runtimeRecords_008032F4[iVar14].field_000C < iVar21) {
              iVar21 = g_runtimeRecords_008032F4[iVar14].field_000C;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_00803314);
        }
        iVar21 = (int)(iVar21 * 0xf + (iVar21 * 0xf >> 0x1f & 0xfU)) >> 4;
        iVar14 = 0;
        if (0 < DAT_0080337c) {
          do {
            g_runtimeRecords_008032F8[iVar14].field_000C =
                 g_runtimeRecords_008032F8[iVar14].field_000C - iVar21;
            piVar20[iVar14] = g_runtimeRecords_008032F8[iVar14].field_000C;
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_0080337c);
        }
        iVar14 = 0;
        if (0 < DAT_00803314) {
          do {
            g_runtimeRecords_008032F4[iVar14].field_000C =
                 g_runtimeRecords_008032F4[iVar14].field_000C - iVar21;
            piVar20[DAT_0080337c + iVar14] = g_runtimeRecords_008032F4[iVar14].field_000C;
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_00803314);
        }
        pRVar27 = g_runtimeRecords_00803300 + DAT_0080337c;
        for (uVar19 = DAT_00803314 * 5 & 0x3fffffff; uVar19 != 0; uVar19 = uVar19 - 1) {
          pRVar27->field_0000 = g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)&g_runtimeRecords_008032F4->field_0004;
          pRVar27 = (RuntimeRecord_00803300_0014 *)&pRVar27->field_0004;
        }
        for (iVar21 = 0; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(char *)&pRVar27->field_0000 = (char)g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)((int)&g_runtimeRecords_008032F4->field_0000 + 1);
          pRVar27 = (RuntimeRecord_00803300_0014 *)((int)&pRVar27->field_0000 + 1);
        }
        g_runtimeRecords_008032F4 =
             (RuntimeRecord_008032F4_0014 *)(g_runtimeRecords_00803300 + DAT_0080337c);
        uStackY_20c = 0x56084e;
        local_6c[0] = thunk_FUN_0055f0c0(piVar20,DAT_00803398,uVar25,10,param_10,FUN_00562170,
                                         FUN_00562e10);
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_1c = &stack0xfffffe14;
          local_40 = (int *)&stack0xfffffe14;
          piVar20 = (int *)&stack0xfffffe14;
          local_8 = 0xffffffff;
          local_15c = 0;
          local_78 = 0;
          iVar14 = local_54;
          temp_203fd2ac8a80 = g_runtimeRecords_008032F4;
          piVar4 = (int *)&stack0xfffffe14;
          puVar9 = &stack0xfffffe14;
          iVar21 = local_98;
          if (-1 < local_98) {
            do {
              local_38 = -30000;
              local_154 = 0;
              iVar21 = local_15c;
              temp_3fb0403402 = g_runtimeRecords_008032F8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < temp_3fb0403402->field_000C) {
                    iVar21 = 30000;
                    iVar14 = 0;
                    if (0 < local_15c) {
                      do {
                        local_EAX_5398 =
                             FUN_006acf90(g_runtimeRecords_00803300[local_40[iVar14]].field_0000,
                                          g_runtimeRecords_00803300[local_40[iVar14]].field_0004,
                                          temp_3fb0403402->field_0000,temp_3fb0403402->field_0004);
                        if (local_EAX_5398 < iVar21) {
                          iVar21 = local_EAX_5398;
                        }
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < local_15c);
                    }
                    if (local_38 < iVar21) {
                      local_54 = local_154;
                      local_38 = iVar21;
                    }
                  }
                  local_154 = local_154 + 1;
                  temp_3fb0403402 = temp_3fb0403402 + 1;
                  iVar21 = local_15c;
                  iVar14 = local_54;
                  piVar20 = local_40;
                } while (local_154 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar20[iVar21] = -1;
              }
              else {
                g_runtimeRecords_008032F8[iVar14].field_000C = -1;
                piVar20[iVar21] = iVar14;
              }
              local_15c = iVar21 + 1;
              local_78 = local_78 + 1;
              temp_203fd2ac8a80 = g_runtimeRecords_008032F4;
              piVar4 = local_40;
              puVar9 = local_1c;
              iVar21 = local_98;
            } while (local_78 <= local_98);
          }
          while (local_1c = puVar9, local_40 = piVar4, local_78 = iVar21 + 1,
                g_runtimeRecords_008032F4 = temp_203fd2ac8a80, local_78 < (int)uVar25) {
            local_38 = -30000;
            local_154 = 0;
            iVar21 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < temp_203fd2ac8a80->field_000C) {
                  iVar21 = 30000;
                  iVar14 = 0;
                  if (0 < local_15c) {
                    do {
                      local_EAX_5637 =
                           FUN_006acf90(g_runtimeRecords_00803300[local_40[iVar14]].field_0000,
                                        g_runtimeRecords_00803300[local_40[iVar14]].field_0004,
                                        temp_203fd2ac8a80->field_0000,temp_203fd2ac8a80->field_0004);
                      if (local_EAX_5637 < iVar21) {
                        iVar21 = local_EAX_5637;
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < local_15c);
                  }
                  if (local_38 < iVar21) {
                    local_54 = local_154;
                    local_38 = iVar21;
                  }
                }
                local_154 = local_154 + 1;
                temp_203fd2ac8a80 = temp_203fd2ac8a80 + 1;
                iVar21 = local_78;
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
            puVar9 = local_1c;
          }
        }
        iVar21 = 0;
        if (0 < (int)uVar25) {
          do {
            iVar14 = local_40[iVar21];
            if (-1 < iVar14) {
              iVar22 = local_80[iVar21];
              *(int *)(iVar22 + 4) = g_runtimeRecords_00803300[iVar14].field_0000 + DAT_008033bc;
              *(int *)(iVar22 + 8) = g_runtimeRecords_00803300[iVar14].field_0004 + DAT_008033c0;
              *(undefined4 *)(iVar22 + 0xc) = 0xfffffff6;
              iVar23 = local_c4;
              if (local_98 < iVar21) {
                iVar23 = local_3c;
              }
              *(int *)(iVar22 + 0x10) = iVar23;
              *(int *)(iVar22 + 0x14) = g_runtimeRecords_00803300[iVar14].field_0008;
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < (int)uVar25);
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
    iVar21 = local_70;
    FreeAndNull(local_6c);
    FreeAndNull(&PTR_008033b4);
    FreeAndNull(local_60);
    FreeAndNull(&DAT_00803380);
    iVar14 = 0;
    do {
      FreeAndNull((void *)(iVar14 + (int)PTR_008032fc));
      iVar14 = iVar14 + 4;
    } while (iVar14 < 0x80);
    iVar14 = 0;
    do {
      FreeAndNull((void *)(iVar14 + (int)PTR_008033b0));
      iVar14 = iVar14 + 4;
    } while (iVar14 < 0x40);
    if (iVar21 != 0) {
      RaiseInternalException
                (iVar21,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",0x968);
    }
  }
  ExceptionList = local_14;
  return;
}

