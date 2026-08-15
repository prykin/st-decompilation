#include "st/generated.hpp"
// Generated translation unit: source/original/scoreai.cpp

// 0055F410 AiCalcDispositionAreas
#line 4 "decomp/ST.exe/functions/0055F410/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol temp_3fb0403402 */
/* WARNING: Unable to use type for symbol temp_203fd2ac8a80 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 2390 | 2408 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_0055F410
               (uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
               ,int param_8,int param_9,uint param_10)

{
  alignas(4) byte st_stack_frame[540];

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
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079afd0);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 44);
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
    DAT_008033b4 = 0;
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
    iVar15 = st::fn_0072D7F0(local_1b8.jumpBuffer,2);
    local_1c = (st_stack_frame + 44);
    if (iVar15 == 0) {
      local_1c = (st_stack_frame + 44);
      local_60[0] = st::fn_006AAC10(DAT_008033ac * 2);
      DAT_00803380 = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC10(DAT_008033ac * 2));
      local_a4 = abStackY_46c;
      uStackY_470 = 0x55f648;
      local_84 = aiStackY_e6c;
      uStackY_e70 = 0x55f65a;
      DAT_008032fc = st::machine_word_boundary_cast<undefined4>(auStackY_eec);
      uStackY_ef0 = 0x55f671;
      DAT_008033b0 = st::machine_word_boundary_cast<undefined4>(auStackY_f2c);
      uStackY_f30 = 0x55f685;
      local_164 = (int *)aAStackY_10bc;
      iStackY_10c0 = 0x55f6a4;
      iVar21 = param_5 * -4;
      local_80 = (undefined4 *)((int)aAStackY_10bc + iVar21);
      *(undefined4 *)((int)aAStackY_10bc + iVar21 + -4) = 0x55f6b8;
      g_runtimeRecords_008032F8 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_205c + iVar21);
      g_runtimeRecords_00803300 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_205c + iVar21);
      (&uStackY_2060)[-param_5] = 0x55f6d5;
      g_runtimeRecords_00803310 = (RuntimeRecord_00803310_0014 *)(st_stack_frame + 44);
      local_1c = (st_stack_frame + 44);
      local_8 = 0xffffffff;
      memset(auStackY_eec, 0, 0x80); /* compiler bulk-zero initialization */
      iVar14 = 0;
      DAT_008033b8 = st::machine_word_boundary_cast<undefined4>(auStackY_eac);
      memset(auStackY_f2c, 0, 0x40); /* compiler bulk-zero initialization */
      g_runtimeRecords_008032F4 = (RuntimeRecord_008032F4_0014 *)((int)aRStackY_188c + iVar21);
      uVar25 = 0;
      local_78 = 0;
      pRVar6 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_205c + iVar21);
      puVar10 = auStackY_eec;
      pRVar27 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_205c + iVar21);
      pRVar7 = (RuntimeRecord_00803310_0014 *)(st_stack_frame + 44);
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
              st::fn_0072DA70
                        ((undefined4 *)((int)aAStackY_10bc + iVar22 * 4 + iVar21 + 4),
                         (AnonPointee_TLOBaseTy_0607 *)((int)aAStackY_10bc + iVar22 * 4 + iVar21),
                         (iVar22 * 0x3fffffff + uVar25) * 4);
            }
            *(int **)((int)aAStackY_10bc + iVar22 * 4 + iVar21) = piVar20;
            uVar25 = uVar25 + 1;
          }
          local_78 = local_78 + 1;
          pRVar6 = g_runtimeRecords_008032F8;
          puVar10 = st::pointer_boundary_cast<undefined4 *>(DAT_008032fc);
          pRVar27 = g_runtimeRecords_00803300;
          pRVar7 = g_runtimeRecords_00803310;
          puVar8 = st::pointer_boundary_cast<undefined4 *>(DAT_008033b0);
        } while (local_78 < param_5);
      }
      DAT_008033b0 = st::machine_word_boundary_cast<undefined4>(puVar8);
      g_runtimeRecords_00803310 = pRVar7;
      g_runtimeRecords_00803300 = pRVar27;
      DAT_008032fc = st::machine_word_boundary_cast<undefined4>(puVar10);
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
            local_88 = st::machine_word_boundary_cast<int>(piVar20[1] - DAT_008033bc);
            if ((-1 < local_88) && (local_88 < iVar21)) {
              iVar22 = st::machine_word_boundary_cast<int>(piVar20[2] - DAT_008033c0);
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
                local_d0_mg1 = st::fn_00561240(iVar21,iVar23,piVar20[5]);
                if (1 < *local_d0_mg1) {
                  local_144 = (iVar14 << 0x10) / *local_d0_mg1;
                  iVar21 = 0;
                  pvVar26 = (void *)((int)DAT_00803380 +
                                    (local_d0_mg1[3] + iVar22) * DAT_008033a4 * 2);
                  local_b0 = 0;
                  if (0 < local_d0_mg1[4]) {
                    do {
                      iVar14 = st::machine_word_boundary_cast<int>(local_d0_mg1[3] + iVar22 + local_b0);
                      if ((-1 < iVar14) && (iVar14 < DAT_008033a8)) {
                        local_ac = st::machine_word_boundary_cast<int>(local_d0_mg1[local_b0 * 2 + 6] + local_88);
                        for (iVar14 = st::machine_word_boundary_cast<int>(local_d0_mg1[local_b0 * 2 + 5] + local_88); iVar14 <= local_ac;
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
                st::fn_006AB060(&local_d0_mg1);
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
            iVar23 = st::machine_word_boundary_cast<int>(piVar20[1] - DAT_008033bc);
            if ((-1 < iVar23) && (iVar23 < iVar21)) {
              iVar11 = st::machine_word_boundary_cast<int>(piVar20[2] - DAT_008033c0);
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
        local_EAX_3726 = st::fn_006ACF90(iVar21,iVar23,DAT_00803304,DAT_00803308);
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
        local_28_mg1 = st::fn_0055EE70(pbVar5,iVar14,1);
        iVar21 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar23 = (char)pbVar5[iVar21 * 2] + DAT_00803304;
            iVar22 = (char)pbVar5[iVar21 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar23) && (iVar23 < DAT_008033a4)) && (-1 < iVar22)) &&
               ((iVar22 < DAT_008033a8 &&
                ((*(byte *)((int)DAT_00803380 + (iVar22 * DAT_008033a4 + iVar23) * 2) & 0xf0) != 0))
               )) {
              local_13c[iVar14] = st::machine_word_boundary_cast<int>(local_13c[iVar14] + 1);
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
      DAT_008033b4 = st::machine_word_boundary_cast<undefined4>(st::fn_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar4,1));
      st::fn_006AB060(local_60);
      st::fn_00402441(pbVar5);
      iVar21 = 0;
      do {
        iVar14 = (int)(iVar21 * 0x168 + (iVar21 * 0x168 >> 0x1f & 0xfU)) >> 4;
        local_EAX_4178 = st::fn_00561240(DAT_008032f0,DAT_008032ec,iVar14);
        *(int **)((int)DAT_008032fc + iVar21 * 4) = local_EAX_4178;
        piVar10 = st::fn_00561240(DAT_00803374,DAT_00803378,iVar14);
        *(int **)(DAT_008033b8 + iVar21 * 4) = piVar10;
        local_EAX_4230 = st::fn_00561240(5,DAT_008032ec,iVar14);
        *(int **)((int)DAT_008033b0 + iVar21 * 4) = local_EAX_4230;
        iVar21 = iVar21 + 1;
        iVar14 = DAT_0080339c;
        piVar20 = local_164;
      } while (iVar21 < 0x10);
      for (; local_164 = piVar20, local_8c = iVar14, iVar14 < 0x14; iVar14 = iVar14 + 2) {
        local_28_mg1 = st::fn_0055EE70(pbVar5,iVar14,1);
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
                 (0 < *(short *)((int)DAT_008033b4 + (iVar21 * DAT_008033a4 + local_94) * 2))))))) {
              iVar14 = 0;
              local_148 = 0;
              if (0 < g_runtimeRecordCount_0080338C) {
                do {
                  pRVar7 = g_runtimeRecords_00803310 + iVar14;
                  iVar22 = pRVar7->field_0010;
                  if (pRVar7->field_0010 <= DAT_008032ec) {
                    iVar22 = DAT_008032ec;
                  }
                  iVar17 = st::fn_006ACF90(pRVar7->field_0000,pRVar7->field_0004,local_94,iVar21);
                  if (iVar17 < iVar22 / 2) {
                    local_148 = 1;
                    break;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < g_runtimeRecordCount_0080338C);
              }
              if (local_148 == 0) {
                iVar14 = 0x10;
                uVar12 = st::fn_006DB910(DAT_00803304,DAT_00803308,local_94,iVar21);
                local_74 = (int *)st::fn_006DB990(uVar12,iVar14);
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
                    iVar20 = st::fn_00561DC0(local_94,iVar21,iVar22);
                    st::fn_005623C0(local_94,iVar21,iVar20,local_74,DAT_0080330c);
                    if (-1 < local_98) {
                      st::fn_005623C0(local_94,iVar21,iVar20,local_74,DAT_008032e8);
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
            g_runtimeRecords_008032F8[iVar14].field_000C =st::machine_word_boundary_cast<int>(
                 g_runtimeRecords_008032F8[iVar14].field_000C - iVar21);
            piVar20[iVar14] = g_runtimeRecords_008032F8[iVar14].field_000C;
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_0080337c);
        }
        iVar14 = 0;
        if (0 < DAT_00803314) {
          do {
            g_runtimeRecords_008032F4[iVar14].field_000C =st::machine_word_boundary_cast<int>(
                 g_runtimeRecords_008032F4[iVar14].field_000C - iVar21);
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
        local_6c[0] = st::fn_00403044(piVar20,DAT_00803398,uVar25,10,param_10,st::pointer_boundary_cast<STFnType_callback_0055F0C0_p5_7e883f49 *>(st::fn_00562170),
                                         st::pointer_boundary_cast<STFnType_callback_0055F0C0_p6_32c552e1 *>(st::fn_00562E10));
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_1c = (st_stack_frame + 44);
          local_40 = (int *)(st_stack_frame + 44);
          piVar20 = (int *)(st_stack_frame + 44);
          local_8 = 0xffffffff;
          local_15c = 0;
          local_78 = 0;
          iVar14 = local_54;
          temp_203fd2ac8a80 = g_runtimeRecords_008032F4;
          piVar4 = (int *)(st_stack_frame + 44);
          puVar9 = (st_stack_frame + 44);
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
                             st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar14]].field_0000,
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
                           st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar14]].field_0000,
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
              *(int *)(iVar22 + 4) = st::machine_word_boundary_cast<int>(g_runtimeRecords_00803300[iVar14].field_0000 + DAT_008033bc);
              *(int *)(iVar22 + 8) = st::machine_word_boundary_cast<int>(g_runtimeRecords_00803300[iVar14].field_0004 + DAT_008033c0);
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
      iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0x956,0,iVar15,st::mutable_c_string("%s"));
      if (iVar16 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar15;
    iVar21 = local_70;
    st::fn_006AB060(local_6c);
    st::fn_006AB060(&DAT_008033b4);
    st::fn_006AB060(local_60);
    st::fn_006AB060(&DAT_00803380);
    iVar14 = 0;
    do {
      st::fn_006AB060((undefined1 *)((int)DAT_008032fc + iVar14));
      iVar14 = iVar14 + 4;
    } while (iVar14 < 0x80);
    iVar14 = 0;
    do {
      st::fn_006AB060((undefined1 *)((int)DAT_008033b0 + iVar14));
      iVar14 = iVar14 + 4;
    } while (iVar14 < 0x40);
    if (iVar21 != 0) {
      st::fn_006A5E40
                (iVar21,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0x968);
    }
  }
  ExceptionList = local_14;
  return;
}

// 00561670 FUN_00561670
#line 4 "decomp/ST.exe/functions/00561670/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 600 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl st::fn_00561670(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar7_mg0;
  int iVar8;
  short *psVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int local_3c;
  uint local_34;
  int local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  undefined2 *local_c;
  int local_8;

  local_2c = 0;
  if (param_5 < 1) {
    return nullptr;
  }
  puVar5 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC10(param_2 * param_3 * 2));
  if (puVar5 == nullptr) {
    return nullptr;
  }
  if (0 < param_3) {
    local_28 = param_3;
    puVar12 = puVar5;
    do {
      puVar6 = puVar12;
      iVar8 = param_2;
      if (0 < param_2) {
        do {
          if (*(short *)((param_1 - (int)puVar5) + (int)puVar6) == -1) {
            *(undefined2 *)puVar6 = 0xffff;
          }
          iVar8 = iVar8 + -1;
          puVar6 = (undefined4 *)((int)puVar6 + 2);
        } while (iVar8 != 0);
      }
      puVar12 = (undefined4 *)((int)puVar12 + param_2 * 2);
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  iVar8 = (param_2 + param_3) * 2;
  if (iVar8 < param_5) {
    iVar8 = param_5;
  }
  local_18 = iVar8;
  local_24 = st::fn_006BFB70(iVar8 << 4);
  if (local_24 == nullptr) {
LAB_00561bff:
    local_2c = -2;
  }
  else {
    local_14 = local_24 + iVar8 * 2;
    local_20 = 0;
    piVar11 = local_14;
    local_1c = local_24;
    if (0 < param_5) {
      do {
        iVar8 = *param_4;
        if ((((-1 < iVar8) && (iVar8 < param_2)) && (iVar13 = param_4[1], -1 < iVar13)) &&
           (iVar13 < param_3)) {
          *(undefined2 *)((int)puVar5 + (iVar13 * param_2 + iVar8) * 2) = 1;
          *piVar11 = *param_4;
          local_20 = local_20 + 1;
          piVar11[1] = param_4[1];
          piVar11 = piVar11 + 2;
        }
        param_4 = param_4 + 2;
        param_5 = param_5 + -1;
        iVar8 = local_18;
      } while (param_5 != 0);
    }
    while( true ) {
      param_5 = 0;
      local_3c = 0;
      if (local_20 < 1) break;
      local_28 = iVar8 * 8 - 0x400;
      local_34 = iVar8 << 4;
      param_4 = (int *)0x8;
      piVar11 = local_1c;
      do {
        local_8 = local_14[local_3c * 2];
        local_10 = local_14[local_3c * 2 + 1];
        iVar13 = (local_10 * param_2 + local_8) * 2;
        sVar2 = *(short *)(iVar13 + (int)puVar5);
        iVar8 = (int)sVar2;
        local_c = (undefined2 *)(iVar13 + (int)puVar5);
        iVar13 = iVar13 + param_1;
        if (local_18 < (int)param_4) {
          local_34 = local_34 + 0x800;
          local_18 = local_18 + 0x80;
          uVar7 = local_28 + 0x400;
          piVar7_mg0 = st::fn_006BFB50(local_24,local_34);
          if (piVar7_mg0 == nullptr) goto LAB_00561bff;
          local_1c = piVar7_mg0 + ((int)local_1c - (int)local_24 >> 3) * 2;
          local_14 = piVar7_mg0 + ((int)local_14 - (int)local_24 >> 3) * 2;
          if (local_1c == piVar7_mg0) {
            local_14 = local_14 + 0x100;
          }
          else {
            local_1c = local_1c + 0x100;
          }
          piVar11 = local_1c + param_5 * 2;
          local_24 = piVar7_mg0;
          st::fn_0072DA70
                    ((undefined4 *)(local_28 + 0x800 + (int)piVar7_mg0),
                     (AnonPointee_TLOBaseTy_0607 *)(uVar7 + (int)piVar7_mg0),uVar7);
          local_28 = uVar7;
        }
        piVar4 = local_1c;
        sVar3 = (short)local_8;
        piVar10 = piVar11;
        if ((local_8 < param_2 + -1) &&
           ((local_c[1] == 0 ||
            (*(short *)(iVar13 + 2) + DAT_00803320 + iVar8 < (int)(short)local_c[1])))) {
          piVar10 = piVar11 + 2;
          local_c[1] = *(short *)(iVar13 + 2) + (short)DAT_00803320 + sVar2;
          piVar11[1] = (int)(short)local_10;
          *piVar11 = (int)(short)(sVar3 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar11 = piVar10;
        if ((0 < local_10) &&
           ((psVar9 = st::pointer_boundary_cast<short *>(local_c + -param_2), *psVar9 == 0 ||
            (*(short *)(iVar13 + param_2 * -2) + DAT_00803320 + iVar8 < (int)*psVar9)))) {
          piVar11 = piVar10 + 2;
          *psVar9 = *(short *)(iVar13 + param_2 * -2) + (short)DAT_00803320 + sVar2;
          *piVar10 = (int)sVar3;
          piVar10[1] = (int)(short)((short)local_10 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar10 = piVar11;
        if ((0 < local_8) &&
           ((local_c[-1] == 0 ||
            (*(short *)(iVar13 + -2) + DAT_00803320 + iVar8 < (int)(short)local_c[-1])))) {
          piVar10 = piVar11 + 2;
          local_c[-1] = *(short *)(iVar13 + -2) + (short)DAT_00803320 + sVar2;
          piVar11[1] = (int)(short)local_10;
          *piVar11 = (int)(short)(sVar3 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar11 = piVar10;
        if ((local_10 < param_3 + -1) &&
           ((local_c[param_2] == 0 ||
            (*(short *)(iVar13 + param_2 * 2) + DAT_00803320 + iVar8 < (int)(short)local_c[param_2])
            ))) {
          piVar11 = piVar10 + 2;
          local_c[param_2] = *(short *)(iVar13 + param_2 * 2) + (short)DAT_00803320 + sVar2;
          *piVar10 = (int)sVar3;
          piVar10[1] = (int)(short)((short)local_10 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        if (0 < local_10) {
          piVar10 = piVar11;
          if ((local_8 < param_2 + -1) &&
             ((psVar9 = st::pointer_boundary_cast<short *>(local_c + (1 - param_2)), *psVar9 == 0 ||
              (*(short *)(iVar13 + param_2 * -2 + 2) + DAT_00803324 + iVar8 < (int)*psVar9)))) {
            piVar10 = piVar11 + 2;
            *psVar9 = *(short *)(iVar13 + param_2 * -2 + 2) + (short)DAT_00803324 + sVar2;
            *piVar11 = (int)(short)(sVar3 + 1);
            piVar11[1] = (int)(short)((short)local_10 + -1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
          piVar11 = piVar10;
          if (0 < local_8) {
            iVar1 = param_2 * 2 + 2;
            psVar9 = (short *)((int)local_c - iVar1);
            if ((*psVar9 == 0) || (*(short *)(iVar13 - iVar1) + DAT_00803324 + iVar8 < (int)*psVar9)
               ) {
              piVar11 = piVar10 + 2;
              *psVar9 = *(short *)(iVar13 - (param_2 * 2 + 2)) + (short)DAT_00803324 + sVar2;
              *piVar10 = (int)(short)(sVar3 + -1);
              piVar10[1] = (int)(short)((short)local_10 + -1);
              param_5 = param_5 + 1;
              param_4 = (int *)((int)param_4 + 1);
            }
          }
        }
        if (local_10 < param_3 + -1) {
          piVar10 = piVar11;
          if ((0 < local_8) &&
             ((local_c[param_2 + -1] == 0 ||
              (*(short *)(iVar13 + -2 + param_2 * 2) + DAT_00803324 + iVar8 <
               (int)(short)local_c[param_2 + -1])))) {
            piVar10 = piVar11 + 2;
            local_c[param_2 + -1] =
                 *(short *)(iVar13 + -2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar11 = (int)(short)(sVar3 + -1);
            piVar11[1] = (int)(short)((short)local_10 + 1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
          piVar11 = piVar10;
          if ((local_8 < param_2 + -1) &&
             ((local_c[param_2 + 1] == 0 ||
              (*(short *)(iVar13 + 2 + param_2 * 2) + DAT_00803324 + iVar8 <
               (int)(short)local_c[param_2 + 1])))) {
            piVar11 = piVar10 + 2;
            local_c[param_2 + 1] =
                 *(short *)(iVar13 + 2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar10 = (int)(short)(sVar3 + 1);
            piVar10[1] = (int)(short)((short)local_10 + 1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
        }
        local_3c = local_3c + 1;
      } while (local_3c < local_20);
      if (param_5 == 0) break;
      local_1c = local_14;
      local_14 = piVar4;
      iVar8 = local_18;
      local_20 = param_5;
    }
  }
  st::fn_006AB060(&local_24);
  if (local_2c == 0) {
    return puVar5;
  }
  st::fn_006A5E40
            (local_2c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\scoreai.cpp"),600);
  return nullptr;
}

// 00562F50 AiAiCalcMinesFields
#line 4 "decomp/ST.exe/functions/00562F50/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol temp_203f9621b1d8 */
/* WARNING: Unable to use type for symbol temp_3f50488dac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 3522 | 3540 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00562F50(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                        int param_7,int param_8,int param_9,uint param_10)

{
  alignas(4) byte st_stack_frame[536];

  byte bVar1;
  byte bVar2;
  int *piVar4;
  byte *pbVar5;
  RuntimeRecord_008032F8_0014 *pRVar6;
  RuntimeRecord_00803310_0014 *pRVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar14;
  int iVar11;
  short *psVar12;
  short *psVar13;
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
  int *piVar14;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar20;
  int iVar21;
  STWorldCell *pSVar22;
  undefined4 *puVar23;
  uint uVar24;
  void *pvVar25;
  RuntimeRecord_00803300_0014 *pRVar26;
  bool bVar27;
  undefined4 uStackY_219c;
  RuntimeRecord_00803300_0014 aRStackY_2198 [100];
  RuntimeRecord_008032F4_0014 aRStackY_19c8 [99];
  int iStackY_11fc;
  AnonPointee_TLOBaseTy_0607 aAStackY_11f8 [16];
  undefined4 uStackY_106c;
  undefined4 auStackY_1068 [15];
  undefined4 uStackY_102c;
  undefined4 auStackY_1028 [16];
  undefined1 auStackY_fe8 [60];
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
  void *local_30;
  int local_28_mg1;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  RuntimeRecord_008032F4_0014 *temp_203f9621b1d8;
  RuntimeRecord_008032F8_0014 *temp_3f50488dac;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079aff0);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 44);
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
    DAT_008033b4 = 0;
    local_60[0] = nullptr;
    g_runtimeRecords_00803300 = nullptr;
    DAT_00803314 = 0;
    DAT_0080337c = 0;
    piVar14 = (int *)(param_4 + 0xc);
    iVar20 = param_5;
    ExceptionList = &local_14;
    do {
      piVar14[-2] = -1;
      piVar14[-1] = -1;
      piVar14[2] = 0;
      if (((piVar14[-3] < 1) && (0 < *piVar14)) && (0 < piVar14[1])) {
        piVar14[-3] = (int)((piVar14[1] + 1U & 0xfffffffe) * (*piVar14 + 1U & 0xfffffffe)) / 2;
      }
      *piVar14 = 0;
      piVar14[1] = 0;
      piVar14 = piVar14 + 6;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    DAT_00803390 = 0x2c;
    DAT_008033bc = param_2 + -0x2c;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x2c;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar20 = param_2 + 0x2c;
    if (g_pathingGrid.sizeX <= iVar20) {
      iVar20 = g_pathingGrid.sizeX + -1;
    }
    iVar16 = param_3 + 0x2c;
    if (g_pathingGrid.sizeY <= iVar16) {
      iVar16 = g_pathingGrid.sizeY + -1;
    }
    DAT_008033a4 = (iVar20 - DAT_008033bc) + 1;
    DAT_008033a8 = (iVar16 - DAT_008033c0) + 1;
    DAT_008033ac = DAT_008033a8 * DAT_008033a4;
    DAT_00803304 = param_2 - DAT_008033bc;
    DAT_00803308 = param_3 - DAT_008033c0;
    local_1b8.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_1b8;
    iVar14 = st::fn_0072D7F0(local_1b8.jumpBuffer,2);
    local_1c = (st_stack_frame + 44);
    if (iVar14 == 0) {
      local_1c = (st_stack_frame + 44);
      local_60[0] = st::fn_006AAC10(DAT_008033ac * 2);
      DAT_00803380 = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC10(DAT_008033ac * 2));
      local_a0 = abStackY_4a8;
      uStackY_4ac = 0x5631b8;
      local_80 = aiStackY_fa8;
      uStackY_fac = 0x5631ca;
      DAT_008032fc = st::machine_word_boundary_cast<undefined4>(auStackY_1028);
      uStackY_102c = 0x5631e1;
      DAT_008033b0 = st::machine_word_boundary_cast<undefined4>(auStackY_1068);
      uStackY_106c = 0x5631f5;
      local_160 = (int *)aAStackY_11f8;
      iStackY_11fc = 0x563214;
      iVar20 = param_5 * -4;
      local_174 = (undefined4 *)((int)aAStackY_11f8 + iVar20);
      *(undefined4 *)((int)aAStackY_11f8 + iVar20 + -4) = 0x56322b;
      g_runtimeRecords_008032F8 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_2198 + iVar20);
      g_runtimeRecords_00803300 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_2198 + iVar20);
      (&uStackY_219c)[-param_5] = 0x563248;
      g_runtimeRecords_00803310 = (RuntimeRecord_00803310_0014 *)(st_stack_frame + 44);
      local_1c = (st_stack_frame + 44);
      local_8 = 0xffffffff;
      memset(auStackY_1028, 0, 0x80); /* compiler bulk-zero initialization */
      iVar16 = 0;
      DAT_008033b8 = st::machine_word_boundary_cast<undefined4>(auStackY_fe8);
      memset(auStackY_1068, 0, 0x40); /* compiler bulk-zero initialization */
      g_runtimeRecords_008032F4 = (RuntimeRecord_008032F4_0014 *)((int)aRStackY_19c8 + iVar20);
      uVar24 = 0;
      local_78 = 0;
      pRVar6 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_2198 + iVar20);
      puVar23 = auStackY_1028;
      pRVar26 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_2198 + iVar20);
      pRVar7 = (RuntimeRecord_00803310_0014 *)(st_stack_frame + 44);
      puVar8 = auStackY_1068;
      if (0 < param_5) {
        do {
          piVar14 = (int *)(param_4 + local_78 * 0x18);
          iVar16 = *piVar14;
          if (0 < iVar16) {
            iVar21 = 0;
            if (0 < (int)uVar24) {
              do {
                if (**(int **)((int)aAStackY_11f8 + iVar21 * 4 + iVar20) < iVar16) break;
                iVar21 = iVar21 + 1;
              } while (iVar21 < (int)uVar24);
            }
            if (iVar21 < (int)uVar24) {
              st::fn_0072DA70
                        ((undefined4 *)((int)aAStackY_11f8 + iVar21 * 4 + iVar20 + 4),
                         (AnonPointee_TLOBaseTy_0607 *)((int)aAStackY_11f8 + iVar21 * 4 + iVar20),
                         (iVar21 * 0x3fffffff + uVar24) * 4);
            }
            *(int **)((int)aAStackY_11f8 + iVar21 * 4 + iVar20) = piVar14;
            uVar24 = uVar24 + 1;
          }
          local_78 = local_78 + 1;
          pRVar6 = g_runtimeRecords_008032F8;
          puVar23 = st::pointer_boundary_cast<undefined4 *>(DAT_008032fc);
          pRVar26 = g_runtimeRecords_00803300;
          pRVar7 = g_runtimeRecords_00803310;
          puVar8 = st::pointer_boundary_cast<undefined4 *>(DAT_008033b0);
        } while (local_78 < param_5);
      }
      DAT_008033b0 = st::machine_word_boundary_cast<undefined4>(puVar8);
      g_runtimeRecords_00803310 = pRVar7;
      g_runtimeRecords_00803300 = pRVar26;
      DAT_008032fc = st::machine_word_boundary_cast<undefined4>(puVar23);
      g_runtimeRecords_008032F8 = pRVar6;
      iVar20 = -1;
      iVar16 = -1;
      local_8c = -1;
      local_48 = (uint)(*(int *)local_174[uVar24 - 1] < 0x1f);
      for (iVar21 = uVar24 - 2; -1 < iVar21; iVar21 = iVar21 + -1) {
        iVar17 = *(int *)local_174[iVar21];
        if ((0xf < iVar17) &&
           (iVar11 = iVar17 - *(int *)local_174[iVar21 + 1], *(int *)local_174[iVar21 + 1] < iVar11)
           ) {
          if (iVar11 <= iVar20) {
            if ((local_48 == 0) || (iVar17 < 0x1f)) goto LAB_00563368;
            local_48 = 0;
          }
          local_8c = iVar21;
          iVar20 = iVar11;
          iVar16 = iVar21;
        }
LAB_00563368:
      }
      iVar20 = 0;
      do {
        if (*(int *)local_174[iVar16 + 1] <= (int)(&DAT_007c9614)[iVar20]) break;
        iVar20 = iVar20 + 1;
      } while (iVar20 < 9);
      DAT_008032f0 = *(int *)(iVar20 * 8 + 0x7c9640);
      DAT_008032ec = *(int *)(iVar20 * 8 + 0x7c963c);
      DAT_0080330c = DAT_008032ec * DAT_008032f0;
      if (-1 < iVar16) {
        iVar20 = 0;
        do {
          if (*(int *)*local_174 <= (int)(&DAT_007c9614)[iVar20]) break;
          iVar20 = iVar20 + 1;
        } while (iVar20 < 9);
        DAT_00803374 = *(int *)(iVar20 * 8 + 0x7c9640);
        DAT_00803378 = *(int *)(iVar20 * 8 + 0x7c963c);
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
      iVar20 = DAT_008033a4;
      iVar16 = local_e0;
      if (0 < local_e0) {
        do {
          iVar21 = local_ac * iVar20 * 2;
          local_30 = (void *)((int)DAT_00803380 + iVar21);
          local_cc = (void *)(iVar21 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (DAT_008033c0 + local_ac) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar21 = 0;
          if (0 < iVar20) {
            do {
              iVar20 = 0;
              iVar17 = 0;
              psVar13 = local_90;
              do {
                if (*psVar13 == 0) {
                  iVar20 = iVar20 + 1;
                }
                iVar17 = iVar17 + 1;
                psVar13 = psVar13 + g_pathingGrid.planeStride;
              } while (iVar17 < 5);
              *(char *)((int)local_30 + iVar21 * 2) = (char)iVar20;
              if (iVar20 < 1) {
                *(undefined2 *)((int)local_cc + iVar21 * 2) = 0xffff;
              }
              else if (iVar20 < 3) {
                *(short *)((int)local_cc + iVar21 * 2) = 5 - (short)iVar20;
              }
              else {
                *(undefined2 *)((int)local_cc + iVar21 * 2) = 0;
              }
              iVar21 = iVar21 + 1;
              local_90 = local_90 + 1;
              iVar20 = DAT_008033a4;
            } while (iVar21 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < local_e0);
      }
      for (; iVar16 <= local_16c; iVar16 = iVar16 + 1) {
        iVar21 = iVar16 * iVar20 * 2;
        local_30 = (void *)((int)DAT_00803380 + iVar21);
        local_cc = (void *)(iVar21 + (int)local_60[0]);
        psVar13 = g_pathingGrid.cells +
                  (iVar16 + DAT_008033c0) * (int)g_pathingGrid.sizeX + DAT_008033bc;
        iVar21 = 0;
        if (0 < local_9c) {
          do {
            iVar17 = 0;
            iVar20 = 0;
            psVar12 = psVar13;
            do {
              if (*psVar12 == 0) {
                iVar17 = iVar17 + 1;
              }
              iVar20 = iVar20 + 1;
              psVar12 = psVar12 + g_pathingGrid.planeStride;
            } while (iVar20 < 5);
            *(char *)((int)local_30 + iVar21 * 2) = (char)iVar17;
            if (iVar17 < 1) {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0xffff;
            }
            else if (iVar17 < 3) {
              *(short *)((int)local_cc + iVar21 * 2) = 5 - (short)iVar17;
            }
            else {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0;
            }
            iVar21 = iVar21 + 1;
            psVar13 = psVar13 + 1;
            iVar20 = DAT_008033a4;
          } while (iVar21 < local_9c);
        }
        psVar13 = g_pathingGrid.cells +
                  (int)g_pathingGrid.sizeX * (DAT_008033c0 + iVar16) + local_9c + DAT_008033bc;
        local_164 = g_worldGrid.cells +
                    (int)g_worldGrid.sizeX * (DAT_008033c0 + iVar16) + local_9c + DAT_008033bc;
        local_94 = local_9c;
        while (local_94 <= local_c4) {
          local_d4 = 0;
          local_64 = 0;
          local_34 = 0;
          pSVar22 = local_164;
          psVar12 = psVar13;
          do {
            if (*psVar12 == 0) {
              local_d4 = local_d4 + 1;
              if ((pSVar22->objects[1] != nullptr) &&
                 (pSVar22->objects[1]->value_20 == 0x1ae)) {
                local_64 = local_64 + 3;
LAB_005637b9:
              }
            }
            else if (pSVar22->objects[0] != nullptr) {
              if (param_1 != 0xff) {
                bVar2 = *(byte *)&pSVar22->objects[0][1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_005637a4:
                    iVar20 = 0;
                  }
                  else {
                    uVar18 = param_1 & 0xff;
                    bVar1 = g_playerRelationMatrix[bVar2][uVar18];
                    if ((bVar1 == 0) && (g_playerRelationMatrix[uVar18][bVar2] == 0)) {
                      iVar20 = -2;
                    }
                    else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar18][bVar2] == 0)) {
                      iVar20 = -1;
                    }
                    else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar18][bVar2] == 1)) {
                      iVar20 = 1;
                    }
                    else {
                      if ((bVar1 != 1) || (g_playerRelationMatrix[uVar18][bVar2] != 1))
                      goto LAB_005637a4;
                      iVar20 = 2;
                    }
                  }
                  bVar27 = iVar20 < 0;
                }
                else {
                  bVar27 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                }
                if (bVar27) goto LAB_005637bc;
              }
              local_64 = local_64 + 2;
              goto LAB_005637b9;
            }
LAB_005637bc:
            local_34 = local_34 + 1;
            psVar12 = psVar12 + g_pathingGrid.planeStride;
            pSVar22 = pSVar22 + g_worldGrid.planeStride;
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
          psVar13 = psVar13 + 1;
          local_164 = local_164 + 1;
          iVar20 = DAT_008033a4;
        }
        local_90 = g_pathingGrid.cells +
                   (iVar16 + DAT_008033c0) * (int)g_pathingGrid.sizeX + local_c4 + DAT_008033bc + 1;
        iVar21 = local_c4 + 1;
        if (iVar21 < iVar20) {
          do {
            iVar20 = 0;
            iVar17 = 0;
            psVar13 = local_90;
            do {
              if (*psVar13 == 0) {
                iVar20 = iVar20 + 1;
              }
              iVar17 = iVar17 + 1;
              psVar13 = psVar13 + g_pathingGrid.planeStride;
            } while (iVar17 < 5);
            *(char *)((int)local_30 + iVar21 * 2) = (char)iVar20;
            if (iVar20 < 1) {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0xffff;
            }
            else if (iVar20 < 3) {
              *(short *)((int)local_cc + iVar21 * 2) = 5 - (short)iVar20;
            }
            else {
              *(undefined2 *)((int)local_cc + iVar21 * 2) = 0;
            }
            iVar21 = iVar21 + 1;
            local_90 = local_90 + 1;
            iVar20 = DAT_008033a4;
          } while (iVar21 < DAT_008033a4);
        }
      }
      local_ac = local_16c + 1;
      if (local_ac < DAT_008033a8) {
        do {
          iVar16 = local_ac * iVar20 * 2;
          local_30 = (void *)((int)DAT_00803380 + iVar16);
          local_cc = (void *)(iVar16 + (int)local_60[0]);
          local_90 = g_pathingGrid.cells +
                     (DAT_008033c0 + local_ac) * (int)g_pathingGrid.sizeX + DAT_008033bc;
          iVar16 = 0;
          if (0 < iVar20) {
            do {
              iVar20 = 0;
              iVar21 = 0;
              psVar13 = local_90;
              do {
                if (*psVar13 == 0) {
                  iVar20 = iVar20 + 1;
                }
                iVar21 = iVar21 + 1;
                psVar13 = psVar13 + g_pathingGrid.planeStride;
              } while (iVar21 < 5);
              *(char *)((int)local_30 + iVar16 * 2) = (char)iVar20;
              if (iVar20 < 1) {
                *(undefined2 *)((int)local_cc + iVar16 * 2) = 0xffff;
              }
              else if (iVar20 < 3) {
                *(short *)((int)local_cc + iVar16 * 2) = 5 - (short)iVar20;
              }
              else {
                *(undefined2 *)((int)local_cc + iVar16 * 2) = 0;
              }
              iVar16 = iVar16 + 1;
              local_90 = local_90 + 1;
              iVar20 = DAT_008033a4;
            } while (iVar16 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < DAT_008033a8);
      }
      if (((param_6 != 0) && (0 < param_7)) && (local_78 = 0, 0 < param_7)) {
        do {
          piVar14 = (int *)(param_6 + local_78 * 0x18);
          iVar16 = *piVar14;
          if (0 < iVar16) {
            iVar21 = piVar14[5];
            local_84 = st::machine_word_boundary_cast<int>(piVar14[1] - DAT_008033bc);
            if ((-1 < local_84) && (local_84 < iVar20)) {
              iVar17 = st::machine_word_boundary_cast<int>(piVar14[2] - DAT_008033c0);
              local_b8 = iVar17;
              if ((-1 < iVar17) && (iVar17 < DAT_008033a8)) {
                switch(piVar14[3]) {
                case 0:
                case 3:
                  iVar20 = *(int *)(&DAT_007a4bf8 + piVar14[4] * 4) * 2 + -2;
                  iVar21 = 0;
                  iVar11 = iVar20;
                  break;
                case 1:
                  iVar11 = *(int *)(&DAT_007a4b60 + piVar14[4] * 4);
                  iVar20 = 1;
                  break;
                case 2:
                  iVar11 = *(int *)(&DAT_007a4b88 + piVar14[4] * 8);
                  iVar20 = 1;
                  break;
                case 4:
                case 5:
                  iVar20 = (*(int *)(&DAT_007a4bf8 + piVar14[4] * 4) * 2) / 2;
                  iVar11 = *(int *)(&DAT_007a4bf8 + piVar14[4] * 4) * 2;
                  break;
                default:
                  iVar21 = 0;
                case -10:
                  iVar20 = *(int *)(&DAT_007a4c24 + piVar14[4] * 8);
                  iVar11 = *(int *)(&DAT_007a4c20 + piVar14[4] * 8);
                }
                local_c8_mg1 = st::fn_00561240(iVar20,iVar11,iVar21);
                if (1 < *local_c8_mg1) {
                  local_13c = (iVar16 << 0x10) / *local_c8_mg1;
                  iVar20 = 0;
                  pvVar25 = (void *)((int)DAT_00803380 +
                                    (local_c8_mg1[3] + iVar17) * DAT_008033a4 * 2);
                  local_ac = 0;
                  if (0 < local_c8_mg1[4]) {
                    do {
                      iVar16 = st::machine_word_boundary_cast<int>(local_c8_mg1[3] + iVar17 + local_ac);
                      if ((-1 < iVar16) && (iVar16 < DAT_008033a8)) {
                        local_a8 = st::machine_word_boundary_cast<int>(local_c8_mg1[local_ac * 2 + 6] + local_84);
                        for (iVar16 = st::machine_word_boundary_cast<int>(local_c8_mg1[local_ac * 2 + 5] + local_84); iVar16 <= local_a8;
                            iVar16 = iVar16 + 1) {
                          if (((-1 < iVar16) && (iVar16 < DAT_008033a4)) &&
                             (iVar20 = iVar20 + local_13c, 0x10000 < iVar20)) {
                            bVar2 = *(byte *)((int)pvVar25 + iVar16 * 2);
                            if ((int)((uint)(bVar2 >> 4) + (iVar20 >> 0x10)) < 0xf) {
                              *(byte *)((int)pvVar25 + iVar16 * 2) =
                                   (char)((uint)iVar20 >> 0x10) * '\x10' + bVar2;
                            }
                            else {
                              *(byte *)((int)pvVar25 + iVar16 * 2) = (bVar2 & 7) - 0x10;
                            }
                          }
                        }
                      }
                      local_ac = local_ac + 1;
                      pvVar25 = (void *)((int)pvVar25 + DAT_008033a4 * 2);
                      iVar17 = local_b8;
                    } while (local_ac < local_c8_mg1[4]);
                  }
                }
                st::fn_006AB060(&local_c8_mg1);
                iVar20 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_7);
      }
      iVar16 = 0;
      g_runtimeRecordCount_0080338C = 0;
      if ((param_8 != 0) && (0 < param_9)) {
        iVar21 = (*(int *)local_174[uVar24 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar21;
        local_78 = 0;
        if (0 < param_9) {
          do {
            piVar14 = (int *)(param_8 + local_78 * 0x18);
            iVar17 = st::machine_word_boundary_cast<int>(piVar14[1] - DAT_008033bc);
            if ((-1 < iVar17) && (iVar17 < iVar20)) {
              iVar11 = st::machine_word_boundary_cast<int>(piVar14[2] - DAT_008033c0);
              local_ac = iVar11;
              if ((-1 < iVar11) && (iVar11 < DAT_008033a8)) {
                local_4c = st::machine_word_boundary_cast<int>(piVar14[3] * piVar14[4]);
                if ((0 < local_4c) && (iVar21 <= (*piVar14 * 100) / local_4c)) {
                  g_runtimeRecords_00803310[iVar16].field_0000 = iVar17;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0004 = iVar11;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0008 = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_000C = 0;
                  g_runtimeRecords_00803310[g_runtimeRecordCount_0080338C].field_0010 = piVar14[4];
                  iVar16 = g_runtimeRecordCount_0080338C + 1;
                  iVar20 = DAT_008033a4;
                  g_runtimeRecordCount_0080338C = iVar16;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_9);
        }
      }
      DAT_0080339c = 9;
      iVar16 = 0;
      iVar21 = 0;
      local_dc = 0;
      for (iVar17 = local_e0; iVar17 <= local_16c; iVar17 = iVar17 + 1) {
        local_30 = (void *)((int)DAT_00803380 + iVar17 * iVar20 * 2);
        for (iVar11 = local_9c; iVar11 <= local_c4; iVar11 = iVar11 + 1) {
          if ((*(byte *)((int)local_30 + iVar11 * 2) & 0xf0) != 0) {
            iVar16 = iVar16 + 1;
            iVar21 = iVar21 + iVar11;
            local_dc = local_dc + iVar17;
          }
        }
      }
      iVar20 = DAT_00803304;
      iVar17 = DAT_00803308;
      if (0 < iVar16) {
        iVar20 = (iVar21 + iVar16 / 2) / iVar16;
        iVar17 = (local_dc + iVar16 / 2) / iVar16;
        local_EAX_3741 = st::fn_006ACF90(iVar20,iVar17,DAT_00803304,DAT_00803308);
        if (5 < local_EAX_3741) {
          iVar20 = ((local_EAX_3741 + -5) * DAT_00803304 + iVar20 * 5) / local_EAX_3741;
          iVar17 = ((local_EAX_3741 + -5) * DAT_00803308 + iVar17 * 5) / local_EAX_3741;
        }
      }
      DAT_00803308 = iVar17;
      DAT_00803304 = iVar20;
      piVar14 = local_134;
      for (iVar20 = 0x16; pbVar5 = local_a0, iVar16 = DAT_0080339c, piVar4 = local_80, iVar20 != 0;
          iVar20 = iVar20 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      for (; local_80 = piVar4, iVar16 < 0xe; iVar16 = iVar16 + 1) {
        local_28_mg1 = st::fn_0055EE70(pbVar5,iVar16,1);
        iVar20 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar17 = (char)pbVar5[iVar20 * 2] + DAT_00803304;
            iVar21 = (char)pbVar5[iVar20 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar17) && (iVar17 < DAT_008033a4)) && (-1 < iVar21)) &&
               ((iVar21 < DAT_008033a8 &&
                ((*(byte *)((int)DAT_00803380 + (iVar21 * DAT_008033a4 + iVar17) * 2) & 0xf0) != 0))
               )) {
              local_134[iVar16] = st::machine_word_boundary_cast<int>(local_134[iVar16] + 1);
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_28_mg1);
        }
        local_134[iVar16] = (local_134[iVar16] * 100) / local_28_mg1;
        piVar4 = local_80;
      }
      iVar20 = -30000;
      iVar16 = 0xc;
      if (DAT_0080339c < 0xd) {
        do {
          iVar21 = ((0xd - iVar16) * local_100 + local_134[iVar16]) / (0xe - iVar16) - local_100;
          if (iVar20 <= iVar21) {
            DAT_00803384 = iVar16 + 1;
            iVar20 = iVar21;
          }
          iVar16 = iVar16 + -1;
        } while (DAT_0080339c <= iVar16);
      }
      if (DAT_00803384 < 0xb) {
        DAT_00803384 = DAT_00803384 + 4;
      }
      *piVar4 = DAT_00803304;
      piVar4[1] = DAT_00803308;
      DAT_008033b4 = st::machine_word_boundary_cast<undefined4>(st::fn_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar4,1));
      st::fn_006AB060(local_60);
      st::fn_00402441(local_a0);
      iVar20 = 0;
      do {
        iVar16 = (int)(iVar20 * 0x168 + (iVar20 * 0x168 >> 0x1f & 0xfU)) >> 4;
        local_EAX_4198 = st::fn_00561240(DAT_008032f0,DAT_008032ec,iVar16);
        *(int **)((int)DAT_008032fc + iVar20 * 4) = local_EAX_4198;
        piVar9 = st::fn_00561240(DAT_00803374,DAT_00803378,iVar16);
        *(int **)(DAT_008033b8 + iVar20 * 4) = piVar9;
        local_EAX_4250 = st::fn_00561240(5,DAT_008032ec,iVar16);
        *(int **)((int)DAT_008033b0 + iVar20 * 4) = local_EAX_4250;
        iVar20 = iVar20 + 1;
        iVar16 = DAT_0080339c;
      } while (iVar20 < 0x10);
      while (local_88 = iVar16, iVar16 < 0x16) {
        local_28_mg1 = st::fn_0055EE70(local_a0,iVar16,1);
        iVar20 = DAT_00803384 - DAT_0080339c;
        iVar21 = 0x16 - DAT_00803384;
        if (iVar20 < iVar21) {
          uVar18 = DAT_00803384 - iVar16 >> 0x1f;
          iVar20 = (DAT_00803384 - iVar16 ^ uVar18) - uVar18;
          iVar20 = iVar21 * iVar21 - iVar20 * iVar20;
        }
        else {
          uVar18 = DAT_00803384 - iVar16 >> 0x1f;
          iVar16 = (DAT_00803384 - iVar16 ^ uVar18) - uVar18;
          iVar20 = iVar20 * iVar20 - iVar16 * iVar16;
        }
        DAT_00803388 = iVar20 / 2;
        local_50 = 0;
        if (0 < local_28_mg1) {
          do {
            iVar20 = (char)local_a0[local_50 * 2] + DAT_00803304;
            if (((-1 < iVar20) && (iVar20 < DAT_008033a4)) &&
               ((iVar16 = (char)local_a0[local_50 * 2 + 1] + DAT_00803308, -1 < iVar16 &&
                ((iVar16 < DAT_008033a8 &&
                 (0 < *(short *)((int)DAT_008033b4 + (iVar16 * DAT_008033a4 + iVar20) * 2))))))) {
              local_140 = 0;
              local_150 = 0;
              if (0 < g_runtimeRecordCount_0080338C) {
                do {
                  pRVar7 = g_runtimeRecords_00803310 + local_150;
                  iVar21 = pRVar7->field_0010;
                  if (pRVar7->field_0010 <= DAT_008032ec) {
                    iVar21 = DAT_008032ec;
                  }
                  iVar10 = st::fn_006ACF90(pRVar7->field_0000,pRVar7->field_0004,iVar20,iVar16);
                  if (iVar10 < iVar21 / 2) {
                    local_140 = 1;
                    break;
                  }
                  local_150 = local_150 + 1;
                } while (local_150 < g_runtimeRecordCount_0080338C);
              }
              if (local_140 == 0) {
                iVar21 = 0x10;
                uVar11 = st::fn_006DB910(DAT_00803304,DAT_00803308,iVar20,iVar16);
                local_74 = (int *)st::fn_006DB990(uVar11,iVar21);
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
                    iVar19 = st::fn_00561DC0(iVar20,iVar16,iVar21);
                    st::fn_00564F30(iVar20,iVar16,iVar19,local_74,DAT_0080330c,local_88);
                    if (-1 < local_8c) {
                      st::fn_00564F30(iVar20,iVar16,iVar19,local_74,DAT_008032e8,local_88);
                    }
                    local_b0 = local_b0 + 3;
                  } while (local_b0 <= (int)((int)local_74 + 3U));
                }
              }
            }
            local_50 = local_50 + 3;
          } while (local_50 < local_28_mg1);
        }
        iVar16 = local_88 + 3;
      }
      iVar20 = ((local_8c * 0x19 + 0x19) * 4) / (int)uVar24;
      if (iVar20 < DAT_0080337c) {
        DAT_0080337c = iVar20;
      }
      if (100 - iVar20 < DAT_00803314) {
        DAT_00803314 = 100 - iVar20;
      }
      DAT_00803398 = DAT_0080337c + DAT_00803314;
      if (0 < (int)DAT_00803398) {
        iVar20 = 0x7fffffff;
        iVar16 = 0;
        if (0 < DAT_0080337c) {
          do {
            if (g_runtimeRecords_008032F8[iVar16].field_000C < iVar20) {
              iVar20 = g_runtimeRecords_008032F8[iVar16].field_000C;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_0080337c);
        }
        iVar16 = 0;
        if (0 < DAT_00803314) {
          do {
            if (g_runtimeRecords_008032F4[iVar16].field_000C < iVar20) {
              iVar20 = g_runtimeRecords_008032F4[iVar16].field_000C;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_00803314);
        }
        iVar20 = (int)(iVar20 * 0xf + (iVar20 * 0xf >> 0x1f & 0xfU)) >> 4;
        iVar16 = 0;
        if (0 < DAT_0080337c) {
          do {
            g_runtimeRecords_008032F8[iVar16].field_000C =st::machine_word_boundary_cast<int>(
                 g_runtimeRecords_008032F8[iVar16].field_000C - iVar20);
            local_160[iVar16] = g_runtimeRecords_008032F8[iVar16].field_000C;
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_0080337c);
        }
        iVar16 = 0;
        if (0 < DAT_00803314) {
          do {
            g_runtimeRecords_008032F4[iVar16].field_000C =st::machine_word_boundary_cast<int>(
                 g_runtimeRecords_008032F4[iVar16].field_000C - iVar20);
            local_160[DAT_0080337c + iVar16] = g_runtimeRecords_008032F4[iVar16].field_000C;
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_00803314);
        }
        pRVar26 = g_runtimeRecords_00803300 + DAT_0080337c;
        for (uVar18 = DAT_00803314 * 5 & 0x3fffffff; uVar18 != 0; uVar18 = uVar18 - 1) {
          pRVar26->field_0000 = g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)&g_runtimeRecords_008032F4->field_0004;
          pRVar26 = (RuntimeRecord_00803300_0014 *)&pRVar26->field_0004;
        }
        for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
          *(char *)&pRVar26->field_0000 = (char)g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)((int)&g_runtimeRecords_008032F4->field_0000 + 1);
          pRVar26 = (RuntimeRecord_00803300_0014 *)((int)&pRVar26->field_0000 + 1);
        }
        g_runtimeRecords_008032F4 =
             (RuntimeRecord_008032F4_0014 *)(g_runtimeRecords_00803300 + DAT_0080337c);
        uStackY_208 = 0x56439f;
        local_6c[0] = st::fn_00403044(local_160,DAT_00803398,uVar24,10,param_10,st::pointer_boundary_cast<STFnType_callback_0055F0C0_p5_7e883f49 *>(st::fn_00562170),
                                         st::pointer_boundary_cast<STFnType_callback_0055F0C0_p6_32c552e1 *>(st::fn_00564DD0));
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_1c = (st_stack_frame + 44);
          local_40 = (int *)(st_stack_frame + 44);
          piVar14 = (int *)(st_stack_frame + 44);
          local_8 = 0xffffffff;
          local_158 = 0;
          local_78 = 0;
          iVar16 = local_54;
          temp_203f9621b1d8 = g_runtimeRecords_008032F4;
          piVar4 = (int *)(st_stack_frame + 44);
          puVar9 = (st_stack_frame + 44);
          iVar20 = local_8c;
          if (-1 < local_8c) {
            do {
              local_38 = -30000;
              local_150 = 0;
              iVar20 = local_158;
              temp_3f50488dac = g_runtimeRecords_008032F8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < temp_3f50488dac->field_000C) {
                    iVar20 = 30000;
                    iVar16 = 0;
                    if (0 < local_158) {
                      do {
                        local_EAX_5415 =
                             st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar16]].field_0000,
                                          g_runtimeRecords_00803300[local_40[iVar16]].field_0004,
                                          temp_3f50488dac->field_0000,temp_3f50488dac->field_0004);
                        if (local_EAX_5415 < iVar20) {
                          iVar20 = local_EAX_5415;
                        }
                        iVar16 = iVar16 + 1;
                      } while (iVar16 < local_158);
                    }
                    if (local_38 < iVar20) {
                      local_54 = local_150;
                      local_38 = iVar20;
                    }
                  }
                  local_150 = local_150 + 1;
                  temp_3f50488dac = temp_3f50488dac + 1;
                  iVar20 = local_158;
                  iVar16 = local_54;
                  piVar14 = local_40;
                } while (local_150 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar14[iVar20] = -1;
              }
              else {
                g_runtimeRecords_008032F8[iVar16].field_000C = -1;
                piVar14[iVar20] = iVar16;
              }
              local_158 = iVar20 + 1;
              local_78 = local_78 + 1;
              temp_203f9621b1d8 = g_runtimeRecords_008032F4;
              piVar4 = local_40;
              puVar9 = local_1c;
              iVar20 = local_8c;
            } while (local_78 <= local_8c);
          }
          while (local_1c = puVar9, local_40 = piVar4, local_78 = iVar20 + 1,
                g_runtimeRecords_008032F4 = temp_203f9621b1d8, local_78 < (int)uVar24) {
            local_38 = -30000;
            local_150 = 0;
            iVar20 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < temp_203f9621b1d8->field_000C) {
                  iVar20 = 30000;
                  iVar16 = 0;
                  if (0 < local_158) {
                    do {
                      local_EAX_5654 =
                           st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar16]].field_0000,
                                        g_runtimeRecords_00803300[local_40[iVar16]].field_0004,
                                        temp_203f9621b1d8->field_0000,temp_203f9621b1d8->field_0004);
                      if (local_EAX_5654 < iVar20) {
                        iVar20 = local_EAX_5654;
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < local_158);
                  }
                  if (local_38 < iVar20) {
                    local_54 = local_150;
                    local_38 = iVar20;
                  }
                }
                local_150 = local_150 + 1;
                temp_203f9621b1d8 = temp_203f9621b1d8 + 1;
                iVar20 = local_78;
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
            puVar9 = local_1c;
          }
        }
        iVar20 = 0;
        if (0 < (int)uVar24) {
          do {
            iVar16 = local_40[iVar20];
            if (-1 < iVar16) {
              iVar21 = local_174[iVar20];
              *(int *)(iVar21 + 4) = st::machine_word_boundary_cast<int>(g_runtimeRecords_00803300[iVar16].field_0000 + DAT_008033bc);
              *(int *)(iVar21 + 8) = st::machine_word_boundary_cast<int>(g_runtimeRecords_00803300[iVar16].field_0004 + DAT_008033c0);
              if (local_8c < iVar20) {
                *(int *)(iVar21 + 0xc) = DAT_008032f0;
                iVar17 = DAT_008032ec;
              }
              else {
                *(int *)(iVar21 + 0xc) = DAT_00803374;
                iVar17 = DAT_00803378;
              }
              *(int *)(iVar21 + 0x10) = iVar17;
              *(int *)(iVar21 + 0x14) = g_runtimeRecords_00803300[iVar16].field_0008;
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 < (int)uVar24);
        }
      }
      g_currentExceptionFrame = local_1b8.previous;
      iVar14 = local_70;
    }
    else {
      g_currentExceptionFrame = local_1b8.previous;
      iVar15 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0xdc2,0,iVar14,st::mutable_c_string("%s"));
      if (iVar15 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar14;
    iVar20 = local_70;
    st::fn_006AB060(local_6c);
    st::fn_006AB060(&DAT_008033b4);
    st::fn_006AB060(local_60);
    st::fn_006AB060(&DAT_00803380);
    iVar16 = 0;
    do {
      st::fn_006AB060((undefined1 *)((int)DAT_008032fc + iVar16));
      iVar16 = iVar16 + 4;
    } while (iVar16 < 0x80);
    iVar16 = 0;
    do {
      st::fn_006AB060((undefined1 *)((int)DAT_008033b0 + iVar16));
      iVar16 = iVar16 + 4;
    } while (iVar16 < 0x40);
    if (iVar20 != 0) {
      st::fn_006A5E40
                (iVar20,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0xdd4);
    }
  }
  ExceptionList = local_14;
  return;
}

// 00565820 AiMinesDistribTgts
#line 4 "decomp/ST.exe/functions/00565820/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 3839 | 3855 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * st::fn_00565820(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                         uint param_7)

{
  byte bVar1;
  byte bVar2;
  dword dVar3;
  DArrayTy *pDVar5;
  int iVar5;
  byte *pbVar6;
  DArrayTy *pDVar6_mg1;
  int local_EAX_2465;
  int iVar14;
  int iVar11;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar15;
  byte *pbVar16;
  dword dVar17;
  int iVar18;
  bool bVar19;
  InternalExceptionFrame local_d8;
  dword local_94 [10];
  byte local_6c;
  undefined3 uStack_6b;
  int local_68;
  int local_64;
  int local_60;
  short *local_5c;
  DArrayTy *local_58;
  short *local_54;
  DArrayTy *local_50;
  int local_4c;
  void *local_48;
  int local_44;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  int local_38;
  DArrayTy *local_34;
  int local_30;
  dword *local_2c;
  int local_28;
  DArrayTy *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_94[5] = 0;
  local_94[0] = 0;
  local_94[6] = 0;
  local_94[1] = 0;
  local_94[7] = 0;
  local_94[2] = 0;
  local_94[8] = 0;
  local_94[3] = 0;
  local_94[9] = 0;
  local_94[4] = 0;
  local_24 = nullptr;
  local_48 = nullptr;
  local_14 = nullptr;
  local_60 = 0;
  local_d8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d8;
  iVar5 = st::fn_0072D7F0(local_d8.jumpBuffer,0);
  if (iVar5 == 0) {
    local_14 = st::fn_00561240(param_4,param_5,param_6);
    iVar10 = local_14[2];
    iVar15 = st::machine_word_boundary_cast<int>(local_14[4] + 2);
    iVar18 = iVar10 + 2;
    iVar13 = iVar15 * iVar18;
    local_28 = iVar15;
    local_c = iVar18;
    local_48 = st::fn_006AAC10(iVar13 * 7);
    local_20 = nullptr;
    local_2c = nullptr;
    local_30 = st::machine_word_boundary_cast<int>(local_14[1] + -1 + param_2);
    if (local_30 < 0) {
      local_20 = (DArrayTy *)-local_30;
      local_c = local_30 + iVar18;
      local_30 = 0;
    }
    iVar8 = st::machine_word_boundary_cast<int>(local_14[2] + local_14[1] + param_2);
    if (g_pathingGrid.sizeX <= iVar8) {
      local_c = local_c + -1 + (g_pathingGrid.sizeX - iVar8);
    }
    iVar8 = st::machine_word_boundary_cast<int>(local_14[3] + -1 + param_3);
    local_44 = iVar8;
    if (iVar8 < 0) {
      local_44 = 0;
      local_2c = (dword *)-iVar8;
      iVar15 = iVar15 + iVar8;
      local_28 = iVar15;
    }
    iVar8 = st::machine_word_boundary_cast<int>(local_14[4] + local_14[3] + param_3);
    if (g_pathingGrid.sizeY <= iVar8) {
      iVar15 = iVar15 + -1 + (g_pathingGrid.sizeY - iVar8);
      local_28 = iVar15;
    }
    local_34 = (DArrayTy *)((int)local_48 + (int)local_2c * iVar18 + (int)local_20 + iVar13);
    local_10 = 0;
    pDVar5 = local_34;
    if (0 < iVar15) {
      do {
        local_18 = pDVar5;
        local_54 = g_pathingGrid.cells + (int)g_pathingGrid.sizeX * (local_44 + local_10) + local_30
        ;
        local_1c = (DArrayTy *)
                   (g_worldGrid.cells + (int)g_worldGrid.sizeX * (local_44 + local_10) + local_30);
        local_8 = 0;
        if (0 < local_c) {
          do {
            local_5c = local_54;
            pbVar16 = (byte *)((int)&local_18->flags + local_8);
            local_68 = -1 - iVar13;
            local_64 = 1 - iVar13;
            local_38 = 5;
            local_4c = iVar18 - iVar13;
            local_50 = local_1c;
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((local_50->iteratorIndex != 0) &&
                 (*(int *)(local_50->iteratorIndex + 0x20) == 0x1ae)) {
                if (0 < local_10) {
                  if (0 < local_8) {
                    pbVar16[(-iVar18 - iVar13) + -1] = pbVar16[(-iVar18 - iVar13) + -1] | 2;
                    pbVar16[-1 - iVar18] = pbVar16[-1 - iVar18] | 2;
                    pbVar16[iVar13 + (-1 - iVar18)] = pbVar16[iVar13 + (-1 - iVar18)] | 2;
                  }
                  pbVar9 = pbVar16 + (-iVar18 - iVar13);
                  *pbVar9 = *pbVar9 | 2;
                  pbVar6 = pbVar16 + -iVar18;
                  *pbVar6 = *pbVar6 | 2;
                  pbVar6[iVar13] = pbVar6[iVar13] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar9[1] = pbVar9[1] | 2;
                    pbVar6[1] = pbVar6[1] | 2;
                    pbVar6[iVar13 + 1] = pbVar6[iVar13 + 1] | 2;
                  }
                }
                if (0 < local_8) {
                  pbVar16[-1 - iVar13] = pbVar16[-1 - iVar13] | 2;
                  pbVar16[iVar13 + local_68] = pbVar16[iVar13 + local_68] | 2;
                  pbVar16[iVar13 + -1] = pbVar16[iVar13 + -1] | 2;
                }
                pbVar6 = pbVar16 + -iVar13;
                *pbVar6 = *pbVar6 | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[iVar13] = pbVar16[iVar13] | 2;
                if (local_8 < local_c + -1) {
                  pbVar6[1] = pbVar6[1] | 2;
                  pbVar16[local_64 + iVar13] = pbVar16[local_64 + iVar13] | 2;
                  pbVar16[iVar13 + 1] = pbVar16[iVar13 + 1] | 2;
                }
                if (local_10 < local_28 + -1) {
                  if (0 < local_8) {
                    pbVar6[iVar10 + 1] = pbVar6[iVar10 + 1] | 2;
                    pbVar16[iVar10 + 1] = pbVar16[iVar10 + 1] | 2;
                    pbVar16[iVar18 + iVar13 + -1] = pbVar16[iVar18 + iVar13 + -1] | 2;
                  }
                  pbVar6[iVar18] = pbVar6[iVar18] | 2;
                  pbVar16[local_4c + iVar13] = pbVar16[local_4c + iVar13] | 2;
                  pbVar16[iVar13 + iVar18] = pbVar16[iVar13 + iVar18] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar6[iVar10 + 3] = pbVar6[iVar10 + 3] | 2;
                    pbVar16[iVar10 + 3] = pbVar16[iVar10 + 3] | 2;
                    pbVar16[iVar13 + iVar18 + 1] = pbVar16[iVar13 + iVar18 + 1] | 2;
                  }
                }
              }
              if (*local_5c != 0) {
                if (((STWorldObject *)local_50->flags != nullptr) && (param_1 != 0xff))
                {
                  bVar1 = *(byte *)&((STWorldObject *)local_50->flags)[1].vtable;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  auto _local_6c = CONCAT31(uStack_6b,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == (byte)param_1) {
LAB_00565c6c:
                      iVar15 = 0;
                    }
                    else {
                      uVar11 = param_1 & 0xff;
                      bVar2 = g_playerRelationMatrix[bVar1][uVar11];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar11][bVar1] == 0)) {
                        iVar15 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar11][bVar1] == 0)) {
                        iVar15 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar11][bVar1] == 1)) {
                        iVar15 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar11][bVar1] != 1))
                        goto LAB_00565c6c;
                        iVar15 = 2;
                      }
                    }
                    bVar19 = iVar15 < 0;
                  }
                  else {
                    bVar19 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  }
                  if (!bVar19) {
                    if (0 < local_10) {
                      if (0 < local_8) {
                        pbVar16[(-iVar18 - iVar13) + -1] = pbVar16[(-iVar18 - iVar13) + -1] | 3;
                        pbVar16[-1 - iVar18] = pbVar16[-1 - iVar18] | 3;
                        pbVar16[iVar13 + (-1 - iVar18)] = pbVar16[iVar13 + (-1 - iVar18)] | 3;
                      }
                      pbVar9 = pbVar16 + (-iVar18 - iVar13);
                      *pbVar9 = *pbVar9 | 3;
                      pbVar6 = pbVar16 + -iVar18;
                      *pbVar6 = *pbVar6 | 3;
                      pbVar6[iVar13] = pbVar6[iVar13] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar9[1] = pbVar9[1] | 3;
                        pbVar6[1] = pbVar6[1] | 3;
                        pbVar6[iVar13 + 1] = pbVar6[iVar13 + 1] | 3;
                      }
                    }
                    if (0 < local_8) {
                      pbVar16[-1 - iVar13] = pbVar16[-1 - iVar13] | 3;
                      pbVar16[iVar13 + local_68] = pbVar16[iVar13 + local_68] | 3;
                      pbVar16[iVar13 + -1] = pbVar16[iVar13 + -1] | 3;
                    }
                    pbVar6 = pbVar16 + -iVar13;
                    *pbVar6 = *pbVar6 | 3;
                    *pbVar16 = *pbVar16 | 3;
                    pbVar16[iVar13] = pbVar16[iVar13] | 3;
                    if (local_8 < local_c + -1) {
                      pbVar6[1] = pbVar6[1] | 3;
                      pbVar16[local_64 + iVar13] = pbVar16[local_64 + iVar13] | 3;
                      pbVar16[iVar13 + 1] = pbVar16[iVar13 + 1] | 3;
                    }
                    if (local_10 < local_28 + -1) {
                      if (0 < local_8) {
                        pbVar6[iVar10 + 1] = pbVar6[iVar10 + 1] | 3;
                        pbVar16[iVar10 + 1] = pbVar16[iVar10 + 1] | 3;
                        pbVar16[iVar18 + iVar13 + -1] = pbVar16[iVar18 + iVar13 + -1] | 3;
                      }
                      pbVar6[iVar18] = pbVar6[iVar18] | 3;
                      pbVar16[local_4c + iVar13] = pbVar16[local_4c + iVar13] | 3;
                      pbVar16[iVar13 + iVar18] = pbVar16[iVar13 + iVar18] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar6[iVar10 + 3] = pbVar6[iVar10 + 3] | 3;
                        pbVar16[iVar10 + 3] = pbVar16[iVar10 + 3] | 3;
                        pbVar16[iVar13 + iVar18 + 1] = pbVar16[iVar13 + iVar18 + 1] | 3;
                      }
                    }
                  }
                }
                *pbVar16 = *pbVar16 | 1;
              }
              pbVar16 = pbVar16 + iVar13;
              local_5c = local_5c + g_pathingGrid.planeStride;
              local_50 = (DArrayTy *)(&local_50->flags + g_worldGrid.planeStride * 2);
              local_38 = local_38 + -1;
            } while (local_38 != 0);
            local_8 = local_8 + 1;
            local_54 = local_54 + 1;
            local_1c = (DArrayTy *)&local_1c->elementSize;
          } while (local_8 < local_c);
        }
        local_18 = (DArrayTy *)((int)&local_18->flags + iVar18);
        local_10 = local_10 + 1;
        iVar15 = local_28;
        pDVar5 = local_18;
      } while (local_10 < local_28);
    }
    if (local_20 == nullptr) {
      local_c = local_c + -1;
      local_20 = (DArrayTy *)0x1;
      local_34 = (DArrayTy *)((int)&local_34->flags + 1);
      local_30 = local_30 + 1;
    }
    if (local_14[2] + 1 < (int)local_20 + local_c) {
      local_c = (local_14[2] - (int)local_20) + 1;
    }
    if (local_2c == nullptr) {
      iVar15 = iVar15 + -1;
      local_34 = (DArrayTy *)((int)&local_34->flags + iVar18);
      local_44 = local_44 + 1;
      local_2c = (dword *)0x1;
      local_28 = iVar15;
    }
    if (local_14[4] + 1 < (int)local_2c + iVar15) {
      local_28 = (local_14[4] - (int)local_2c) + 1;
    }
    local_38 = param_2 - local_30;
    pDVar6_mg1 = st::fn_006AE290
                           (nullptr,(int)(*local_14 + (*local_14 >> 0x1f & 3U)) >> 2,6,10);
    local_8 = 0;
    local_1c = local_34;
    local_24 = pDVar6_mg1;
    do {
      local_10 = 0;
      local_94[local_8 + 5] = pDVar6_mg1->count;
      local_20 = local_1c;
      if (0 < local_28) {
        int scalar_local_18 = (int)local_2c * 8; /* split integer lifetime from pointer-typed SSA storage */
        do {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar15 = *(int *)(scalar_local_18 + 0x10 + (int)local_14) + local_38;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar8 = *(int *)(scalar_local_18 + 0xc + (int)local_14) + local_38;
          local_4c = iVar15;
          if (iVar8 <= iVar15) {
            do {
              if ((((-1 < iVar8) && (iVar8 < local_c)) && (-1 < local_10)) &&
                 ((local_10 < local_28 && (*(char *)((int)&local_20->flags + iVar8) == '\0')))) {
                local_40 = (short)iVar8 + (short)local_30;
                local_3e = (short)local_10 + (short)local_44;
                local_3c = (undefined2)local_8;
                st::fn_006AE1C0(pDVar6_mg1,&local_40);
                local_94[local_8] = local_94[local_8] + 1;
                iVar15 = iVar8 - iVar13;
                pbVar16 = (byte *)((iVar15 - iVar18) + (int)local_20);
                pbVar16[-1] = pbVar16[-1] | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[1] = pbVar16[1] | 2;
                pbVar16 = (byte *)(iVar15 + (int)local_20);
                pbVar16[-1] = *(byte *)(iVar15 + -1 + (int)local_20) | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[1] = pbVar16[1] | 2;
                pbVar16[iVar10 + 1] = pbVar16[iVar10 + 1] | 2;
                pbVar16[iVar18] = pbVar16[iVar18] | 2;
                pbVar16[iVar10 + 3] = pbVar16[iVar10 + 3] | 2;
                pbVar16 = (byte *)((iVar8 - iVar18) + (int)local_20);
                pbVar16[-1] = *(byte *)((iVar8 - iVar18) + -1 + (int)local_20) | 2;
                *pbVar16 = *pbVar16 | 2;
                pbVar16[1] = pbVar16[1] | 2;
                *(byte *)(iVar8 + -1 + (int)local_20) = *(byte *)(iVar8 + -1 + (int)local_20) | 2;
                *(byte *)((int)&local_20->flags + iVar8) =
                     *(byte *)((int)&local_20->flags + iVar8) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + 1) =
                     *(byte *)((int)&local_20->flags + iVar8 + 1) | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar8 + iVar10 + 1);
                *pbVar6 = *pbVar6 | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar8 + iVar18);
                *pbVar6 = *pbVar6 | 2;
                pbVar6 = (byte *)((int)&local_20->flags + iVar8 + iVar10 + 3);
                *pbVar6 = *pbVar6 | 2;
                pbVar16[iVar13 + -1] = pbVar16[iVar13 + -1] | 2;
                pbVar16[iVar13] = pbVar16[iVar13] | 2;
                pbVar16[iVar13 + 1] = pbVar16[iVar13 + 1] | 2;
                *(byte *)((int)local_20 + iVar8 + iVar13 + -1) =
                     *(byte *)((int)local_20 + iVar8 + iVar13 + -1) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar13) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar13) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar13 + 1) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar13 + 1) | 2;
                iVar15 = iVar18 + iVar13;
                *(byte *)((int)&local_20->flags + iVar8 + iVar15 + -1) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar15 + -1) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar15) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar15) | 2;
                *(byte *)((int)&local_20->flags + iVar8 + iVar15 + 1) =
                     *(byte *)((int)&local_20->flags + iVar8 + iVar15 + 1) | 2;
                pDVar6_mg1 = local_24;
                iVar15 = local_4c;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 <= iVar15);
          }
          local_18 = (DArrayTy *)((int)local_18 + 8);
          local_10 = local_10 + 1;
          local_20 = (DArrayTy *)((int)&local_20->flags + iVar18);
        } while (local_10 < local_28);
      }
      local_8 = local_8 + 1;
      local_1c = (DArrayTy *)((int)&local_1c->flags + iVar13);
    } while (local_8 < 5);
    if ((0 < (int)param_7) && ((int)param_7 < (int)pDVar6_mg1->count)) {
      local_1c = st::fn_006AE290(nullptr,param_7,6,10);
      while( true ) {
        iVar10 = 0;
        local_2c = local_94;
        dVar17 = 0xffffffff;
        local_18 = nullptr;
        iVar15 = -(int)local_58;
        do {
          if (((int)dVar17 < (int)*local_2c) ||
             ((dVar17 == *local_2c &&
              (uVar11 = (int)(iVar15 + 3U) >> 0x1f, uVar12 = (int)(iVar10 + 3U) >> 0x1f,
              (int)((iVar10 + 3U ^ uVar12) - uVar12) < (int)((iVar15 + 3U ^ uVar11) - uVar11))))) {
            local_58 = local_18;
            dVar17 = *local_2c;
            iVar15 = iVar10;
          }
          iVar10 = iVar10 + -1;
          local_18 = (DArrayTy *)((int)&local_18->flags + 1);
          local_2c = local_2c + 1;
        } while (-5 < iVar10);
        if ((int)dVar17 < 1) goto cf_common_exit_0056623F;
        dVar3 = local_94[(int)((int)&local_58->iteratorIndex + 1)];
        if ((int)param_7 < (int)dVar17) break;
        iVar15 = 0;
        if (0 < (int)dVar17) {
          do {
            local_EAX_2465 = st::fn_006ACC70(local_24,iVar15 + dVar3,&local_40);
            if (-1 < local_EAX_2465) {
              st::fn_006AE1C0(local_1c,&local_40);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)dVar17);
        }
        param_7 = param_7 - dVar17;
        if ((int)param_7 < 1) goto cf_common_exit_0056623F;
        local_94[(int)((int)&local_58->iteratorIndex + 1)] = 0;
      }
      iVar15 = param_7 + 1;
      iVar10 = dVar3 * 0x10000 + -0x10000;
      if (0 < (int)param_7) {
        do {
          iVar10 = iVar10 + (int)((dVar17 + 1) * 0x10000) / iVar15;
          iVar14 = st::fn_006ACC70(local_24,iVar10 >> 0x10,&local_40);
          if (-1 < iVar14) {
            st::fn_006AE1C0(local_1c,&local_40);
          }
          param_7 = param_7 - 1;
        } while (param_7 != 0);
      }
cf_common_exit_0056623F:
      st::fn_006AE110(local_24);
      local_24 = local_1c;
    }
    g_currentExceptionFrame = local_d8.previous;
    iVar5 = local_60;
  }
  else {
    g_currentExceptionFrame = local_d8.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0xeff,0,iVar5,st::mutable_c_string("%s"),
                                "AiMinesDistribTgts");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  local_60 = iVar5;
  iVar15 = local_60;
  st::fn_006AB060(&local_48);
  st::fn_006AB060(&local_14);
  if (iVar15 == 0) {
    return st::pointer_boundary_cast<uint *>(&local_24->flags);
  }
  st::fn_006AB060(&local_24);
  st::fn_006A5E40
            (iVar15,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0xf0f);
  return nullptr;
}

