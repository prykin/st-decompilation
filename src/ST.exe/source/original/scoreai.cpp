#include "st/generated.hpp"
// Generated translation unit: source/original/scoreai.cpp

// 0055F410 AiCalcDispositionAreas
#line 4 "decomp/ST.exe/functions/0055F410/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol temp_3fb0403402 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 2390 | 2408 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=2,
   pointer_dereferences=6, scalar_uses=0; sites=0055F525 dereference: MOV dword ptr [EAX + -0x4],EDX
   | 0055F528 dereference: MOV dword ptr [EAX],EDX | 0055F52A dereference: MOV dword ptr [EAX +
   0x4],ECX | 0055F52D dereference: MOV dword ptr [EAX + 0x8],ECX | 0055F530 dereference: MOV dword
   ptr [EAX + 0xc],ECX | 0055F739 dereference: MOV EAX,dword ptr [EAX]
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:5: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=2,
   pointer_dereferences=7, scalar_uses=0; sites=005600E1 dereference: MOV EBX,dword ptr [EAX + 0x4]
   | 005600F8 dereference: MOV ECX,dword ptr [EAX + 0x8] | 0056011B dereference: MOV ECX,dword ptr
   [EAX + 0xc] | 0056012B dereference: MOV ECX,dword ptr [EAX + 0x10] | 0056014A dereference: MOV
   EDX,dword ptr [EAX + 0x10] | 00560159 dereference: MOV EDX,dword ptr [EAX + 0x10] | 00560171
   dereference: MOV EAX,dword ptr [EAX] */

void st::fn_0055F410
               (uint param_1,int param_2,int param_3,void *param_4,int param_5,void *param_6,
               int param_7,int param_8,int param_9,uint param_10)

{
  alignas(4) byte st_stack_frame[540];

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
  uint uStackY_f30;
  undefined4 auStackY_f2c [15];
  uint uStackY_ef0;
  undefined4 auStackY_eec [16];
  undefined4 auStackY_eac [15];
  uint uStackY_e70;
  int aiStackY_e6c [639];
  uint uStackY_470;
  byte abStackY_46c [608];
  uint uStackY_20c;
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
  uint local_8;
  RuntimeRecord_008032F8_0014 *temp_3fb0403402;
  RuntimeRecord_008032F4_0014 *temp_203fd2ac8a80;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079afd0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 44);
  local_6c[0] = nullptr;
  local_70 = 0;
  if ((param_4 != nullptr) && (0 < param_5)) {
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
    puVar9 = (undefined4 *)((int)param_4 + 8);
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

    iVar15 = st::fn_0072D7F0(local_1b8.jumpBuffer,2);
    local_1c = (st_stack_frame + 44);
    if (iVar15 == 0) {
      local_1c = (st_stack_frame + 44);

      local_60[0] = st::fn_006AAC10(DAT_008033ac * 2);

      PTR_00803380 = (undefined1 *)st::fn_006AAC10(DAT_008033ac * 2);
      local_a4 = abStackY_46c;
      uStackY_470 = 0x55f648;
      local_84 = aiStackY_e6c;
      uStackY_e70 = 0x55f65a;
      PTR_008032fc = auStackY_eec;
      uStackY_ef0 = 0x55f671;
      PTR_008033b0 = auStackY_f2c;
      uStackY_f30 = 0x55f685;
      local_164 = reinterpret_cast<int *>(aAStackY_10bc);
      iStackY_10c0 = 0x55f6a4;
      iVar18 = param_5 * -4;
      local_80 = (undefined4 *)((int)aAStackY_10bc + iVar18);
      *(undefined4 *)((int)aAStackY_10bc + iVar18 + -4) = 0x55f6b8;
      g_runtimeRecords_008032F8 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_205c + iVar18);
      g_runtimeRecords_00803300 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_205c + iVar18);
      (&uStackY_2060)[-param_5] = 0x55f6d5;
      g_runtimeRecords_00803310 = reinterpret_cast<RuntimeRecord_00803310_0014 *>((st_stack_frame + 44));
      local_1c = (st_stack_frame + 44);
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
      pRVar7 = reinterpret_cast<RuntimeRecord_00803310_0014 *>((st_stack_frame + 44));
      puVar8 = auStackY_f2c;
      if (0 < param_5) {
        do {
          piVar16 = (int *)((int)param_4 + local_78 * 0x18);
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

              st::fn_0072DA70
                        ((RecoveredRecord_006BFE70_3123BCE8 *)
                         ((int)aAStackY_10bc + iVar19 * 4 + iVar18 + 4),
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
      local_48 = st::storage_bit_cast<uint>(static_cast<uint32_t>(*(int *)local_80[uVar23 - 1] < 0x15));
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
                local_d0_mg1 = st::fn_00561240(iVar18,iVar21,piVar16[5]);
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
                            if (st::storage_bit_cast<int>(static_cast<uint32_t>((uint)(bVar2 >> 4) + (iVar18 >> 0x10))) < 0xf) {
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
                st::fn_006AB060(&local_d0_mg1);
                iVar18 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_9);
      }
      iVar13 = 0;
      g_runtimeRecordCount_0080338C = 0;
      if ((param_6 != nullptr) && (0 < param_7)) {
        iVar19 = (*(int *)local_80[uVar23 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar19;
        local_78 = 0;
        if (0 < param_7) {
          do {
            piVar16 = (int *)((int)param_6 + local_78 * 0x18);
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

        local_EAX_3726 = st::fn_006ACF90(iVar18,iVar21,DAT_00803304,DAT_00803308);
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

        local_28_mg1 = st::fn_0055EE70(pbVar5,iVar13,1);
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

      PTR_008033b4 = STPointerBoundaryCast<undefined2 *>(st::fn_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar4,1));
      st::fn_006AB060(local_60);
      st::fn_00402441(pbVar5);
      iVar18 = 0;
      do {
        iVar13 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar18 * 0x168 + (iVar18 * 0x168 >> 0x1f & 0xfU))) >> 4;
        local_EAX_4178 = st::fn_00561240(DAT_008032f0,DAT_008032ec,iVar13);
        PTR_008032fc[iVar18] = st::machine_word_boundary_cast<undefined4>(local_EAX_4178);
        piVar10 = st::fn_00561240(DAT_00803374,DAT_00803378,iVar13);
        PTR_008033b8[iVar18] = st::machine_word_boundary_cast<undefined4>(piVar10);
        local_EAX_4230 = st::fn_00561240(5,DAT_008032ec,iVar13);
        PTR_008033b0[iVar18] = st::machine_word_boundary_cast<undefined4>(local_EAX_4230);
        iVar18 = iVar18 + 1;
        iVar13 = DAT_0080339c;
        piVar16 = local_164;
      } while (iVar18 < 0x10);
      for (; local_164 = piVar16, local_8c = iVar13, iVar13 < 0x14; iVar13 = iVar13 + 2) {

        local_28_mg1 = st::fn_0055EE70(pbVar5,iVar13,1);
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

                  iVar17 = st::fn_006ACF90(pRVar7->field_0000,pRVar7->field_0004,local_94,iVar18);
                  if (iVar17 < iVar19 / 2) {
                    local_148 = 1;
                    break;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < g_runtimeRecordCount_0080338C);
              }
              if (local_148 == 0) {
                iVar13 = 0x10;

                uVar12 = st::fn_006DB910(DAT_00803304,DAT_00803308,local_94,iVar18);

                local_74 = STPointerBoundaryCast<int *>(st::fn_006DB990(uVar12,iVar13));
                iVar13 = (int)local_74 + -3;
                if (iVar13 <= (int)local_74 + 3) {
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

                    iVar20 = st::fn_00561DC0(local_94,iVar18,iVar19);

                    st::fn_005623C0(local_94,iVar18,iVar20,local_74,DAT_0080330c);
                    if (-1 < local_98) {

                      st::fn_005623C0(local_94,iVar18,iVar20,local_74,DAT_008032e8);
                    }
                    iVar13 = iVar13 + 3;
                  } while (iVar13 <= (int)local_74 + 3);
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
        iVar18 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar18 * 0xf + (iVar18 * 0xf >> 0x1f & 0xfU))) >> 4;
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
               reinterpret_cast<RuntimeRecord_008032F4_0014 *>(&g_runtimeRecords_008032F4->field_0004);
          pRVar25 = reinterpret_cast<RuntimeRecord_00803300_0014 *>(&pRVar25->field_0004);
        }
        for (iVar18 = 0; iVar18 != 0; iVar18 = iVar18 + -1) {
          *(char *)&pRVar25->field_0000 = (char)g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)((int)&g_runtimeRecords_008032F4->field_0000 + 1);
          pRVar25 = (RuntimeRecord_00803300_0014 *)((int)&pRVar25->field_0000 + 1);
        }
        g_runtimeRecords_008032F4 =
             reinterpret_cast<RuntimeRecord_008032F4_0014 *>((g_runtimeRecords_00803300 + DAT_0080337c));
        uStackY_20c = 0x56084e;
        local_6c[0] = st::fn_00403044(piVar16,DAT_00803398,uVar23,10,param_10,st::function_address_boundary_cast<STFnType_callback_0055F0C0_p5_7e883f49 *>(st::fn_00562170),
                                         st::function_address_boundary_cast<STFnType_callback_0055F0C0_p6_32c552e1 *>(st::fn_00562E10));
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_1c = (st_stack_frame + 44);
          local_40 = reinterpret_cast<int *>((st_stack_frame + 44));
          piVar16 = reinterpret_cast<int *>((st_stack_frame + 44));
          local_8 = 0xffffffff;
          local_15c = 0;
          local_78 = 0;
          iVar13 = local_54;
          temp_203fd2ac8a80 = g_runtimeRecords_008032F4;
          piVar4 = reinterpret_cast<int *>((st_stack_frame + 44));
          puVar24 = (st_stack_frame + 44);
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
                             st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
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
                           st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
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

      iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0x956,0,iVar15,st::mutable_c_string("%s"));
      if (iVar16 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar15;
    iVar18 = local_70;
    st::fn_006AB060(local_6c);
    st::fn_006AB060(&PTR_008033b4);
    st::fn_006AB060(local_60);
    st::fn_006AB060(&PTR_00803380);
    iVar13 = 0;
    do {
      st::fn_006AB060((void *)(iVar13 + (int)PTR_008032fc));
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x80);
    iVar13 = 0;
    do {
      st::fn_006AB060((void *)(iVar13 + (int)PTR_008033b0));
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x40);
    if (iVar18 != 0) {
      st::fn_006A5E40
                (iVar18,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0x968);
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
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar7_mg0;
  int iVar8;
  short *psVar9;
  int *piVar10;
  int *piVar11;
  uint *puVar12;
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

  puVar5 = static_cast<uint *>(st::fn_006AAC10(param_2 * param_3 * 2));
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
                    ((RecoveredRecord_006BFE70_3123BCE8 *)(local_28 + 0x800 + (int)piVar7_mg0),
                     (AnonPointee_TLOBaseTy_0607 *)(uVar7 + (int)piVar7_mg0),uVar7);
          local_28 = uVar7;
        }
        piVar4 = local_1c;
        sVar3 = (short)local_8;
        piVar10 = piVar11;
        if ((local_8 < param_2 + -1) &&
           ((local_c[1] == 0 ||
            (STField<short>(iVar13,0x2) + DAT_00803320 + iVar8 < (short)local_c[1])))) {
          piVar10 = piVar11 + 2;
          local_c[1] = STField<short>(iVar13,0x2) + (short)DAT_00803320 + sVar2;
          piVar11[1] = (short)local_10;
          *piVar11 = (short)(sVar3 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar11 = piVar10;
        if ((0 < local_10) &&
           ((psVar9 = reinterpret_cast<short *>(local_c + -param_2), *psVar9 == 0 ||
            (*(short *)(iVar13 + param_2 * -2) + DAT_00803320 + iVar8 < (int)*psVar9)))) {
          piVar11 = piVar10 + 2;
          *psVar9 = *(short *)(iVar13 + param_2 * -2) + (short)DAT_00803320 + sVar2;
          *piVar10 = (int)sVar3;
          piVar10[1] = (short)((short)local_10 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar10 = piVar11;
        if ((0 < local_8) &&
           ((local_c[-1] == 0 ||
            (*(short *)(iVar13 + -2) + DAT_00803320 + iVar8 < (short)local_c[-1])))) {
          piVar10 = piVar11 + 2;
          local_c[-1] = *(short *)(iVar13 + -2) + (short)DAT_00803320 + sVar2;
          piVar11[1] = (short)local_10;
          *piVar11 = (short)(sVar3 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar11 = piVar10;
        if ((local_10 < param_3 + -1) &&
           ((local_c[param_2] == 0 ||
            (*(short *)(iVar13 + param_2 * 2) + DAT_00803320 + iVar8 < (short)local_c[param_2])
            ))) {
          piVar11 = piVar10 + 2;
          local_c[param_2] = *(short *)(iVar13 + param_2 * 2) + (short)DAT_00803320 + sVar2;
          *piVar10 = (int)sVar3;
          piVar10[1] = (short)((short)local_10 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        if (0 < local_10) {
          piVar10 = piVar11;
          if ((local_8 < param_2 + -1) &&
             ((psVar9 = reinterpret_cast<short *>(local_c + (1 - param_2)), *psVar9 == 0 ||
              (*(short *)(iVar13 + param_2 * -2 + 2) + DAT_00803324 + iVar8 < (int)*psVar9)))) {
            piVar10 = piVar11 + 2;
            *psVar9 = *(short *)(iVar13 + param_2 * -2 + 2) + (short)DAT_00803324 + sVar2;
            *piVar11 = (short)(sVar3 + 1);
            piVar11[1] = (short)((short)local_10 + -1);
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
              *piVar10 = (short)(sVar3 + -1);
              piVar10[1] = (short)((short)local_10 + -1);
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
               (short)local_c[param_2 + -1])))) {
            piVar10 = piVar11 + 2;
            local_c[param_2 + -1] =
                 *(short *)(iVar13 + -2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar11 = (short)(sVar3 + -1);
            piVar11[1] = (short)((short)local_10 + 1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
          piVar11 = piVar10;
          if ((local_8 < param_2 + -1) &&
             ((local_c[param_2 + 1] == 0 ||
              (*(short *)(iVar13 + 2 + param_2 * 2) + DAT_00803324 + iVar8 <
               (short)local_c[param_2 + 1])))) {
            piVar11 = piVar10 + 2;
            local_c[param_2 + 1] =
                 *(short *)(iVar13 + 2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar10 = (short)(sVar3 + 1);
            piVar10[1] = (short)((short)local_10 + 1);
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
/* WARNING: Unable to use type for symbol temp_3f50488dac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 3522 | 3540 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=2,
   pointer_dereferences=10, scalar_uses=0; sites=00563071 dereference: MOV dword ptr [ECX +
   -0x8],EDI | 00563074 dereference: MOV dword ptr [ECX + -0x4],EDI | 00563077 dereference: MOV
   dword ptr [ECX + 0x8],EBX | 0056307A dereference: CMP dword ptr [ECX + -0xc],EBX | 0056307F
   dereference: MOV EDX,dword ptr [ECX] | 00563085 dereference: MOV EAX,dword ptr [ECX + 0x4] |
   0056309B dereference: MOV dword ptr [ECX + -0xc],EAX | 0056309E dereference: MOV dword ptr
   [ECX],EBX | 005630A0 dereference: MOV dword ptr [ECX + 0x4],EBX | 005632AC dereference: MOV
   EAX,dword ptr [EAX] */

void st::fn_00562F50(uint param_1,int param_2,int param_3,void *param_4,int param_5,int param_6,
                        int param_7,int param_8,int param_9,uint param_10)

{
  alignas(4) byte st_stack_frame[536];

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
  uint uStackY_106c;
  undefined4 auStackY_1068 [15];
  uint uStackY_102c;
  undefined4 auStackY_1028 [16];
  undefined4 auStackY_fe8 [15];
  uint uStackY_fac;
  int aiStackY_fa8 [703];
  uint uStackY_4ac;
  byte abStackY_4a8 [672];
  uint uStackY_208;
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
  uint local_8;
  RuntimeRecord_008032F4_0014 *temp_203f9621b1d8;
  RuntimeRecord_008032F8_0014 *temp_3f50488dac;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079aff0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 44);
  local_6c[0] = nullptr;
  local_70 = 0;
  if ((param_4 != nullptr) && (0 < param_5)) {
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
    piVar12 = (int *)((int)param_4 + 0xc);
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

    iVar14 = st::fn_0072D7F0(local_1b8.jumpBuffer,2);
    local_1c = (st_stack_frame + 44);
    if (iVar14 == 0) {
      local_1c = (st_stack_frame + 44);

      local_60[0] = st::fn_006AAC10(DAT_008033ac * 2);

      PTR_00803380 = (undefined1 *)st::fn_006AAC10(DAT_008033ac * 2);
      local_a0 = abStackY_4a8;
      uStackY_4ac = 0x5631b8;
      local_80 = aiStackY_fa8;
      uStackY_fac = 0x5631ca;
      PTR_008032fc = auStackY_1028;
      uStackY_102c = 0x5631e1;
      PTR_008033b0 = auStackY_1068;
      uStackY_106c = 0x5631f5;
      local_160 = reinterpret_cast<int *>(aAStackY_11f8);
      iStackY_11fc = 0x563214;
      iVar18 = param_5 * -4;
      local_174 = (undefined4 *)((int)aAStackY_11f8 + iVar18);
      *(undefined4 *)((int)aAStackY_11f8 + iVar18 + -4) = 0x56322b;
      g_runtimeRecords_008032F8 = (RuntimeRecord_008032F8_0014 *)((int)aRStackY_2198 + iVar18);
      g_runtimeRecords_00803300 = (RuntimeRecord_00803300_0014 *)((int)aRStackY_2198 + iVar18);
      (&uStackY_219c)[-param_5] = 0x563248;
      g_runtimeRecords_00803310 = reinterpret_cast<RuntimeRecord_00803310_0014 *>((st_stack_frame + 44));
      local_1c = (st_stack_frame + 44);
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
      pRVar7 = reinterpret_cast<RuntimeRecord_00803310_0014 *>((st_stack_frame + 44));
      puVar8 = auStackY_1068;
      if (0 < param_5) {
        do {
          piVar12 = (int *)((int)param_4 + local_78 * 0x18);
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

              st::fn_0072DA70
                        ((RecoveredRecord_006BFE70_3123BCE8 *)
                         ((int)aAStackY_11f8 + iVar20 * 4 + iVar18 + 4),
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
      local_48 = st::storage_bit_cast<uint>(static_cast<uint32_t>(*(int *)local_174[uVar23 - 1] < 0x1f));
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
                local_c8_mg1 = st::fn_00561240(iVar18,iVar9,iVar20);
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
                            if (st::storage_bit_cast<int>(static_cast<uint32_t>((uint)(bVar2 >> 4) + (iVar18 >> 0x10))) < 0xf) {
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
                st::fn_006AB060(&local_c8_mg1);
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

        local_EAX_3741 = st::fn_006ACF90(iVar18,iVar16,DAT_00803304,DAT_00803308);
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

        local_28_mg1 = st::fn_0055EE70(pbVar5,iVar13,1);
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

      PTR_008033b4 = STPointerBoundaryCast<undefined2 *>(st::fn_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar4,1));
      st::fn_006AB060(local_60);
      st::fn_00402441(local_a0);
      iVar18 = 0;
      do {
        iVar13 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar18 * 0x168 + (iVar18 * 0x168 >> 0x1f & 0xfU))) >> 4;
        local_EAX_4198 = st::fn_00561240(DAT_008032f0,DAT_008032ec,iVar13);
        PTR_008032fc[iVar18] = st::machine_word_boundary_cast<undefined4>(local_EAX_4198);
        piVar9 = st::fn_00561240(DAT_00803374,DAT_00803378,iVar13);
        PTR_008033b8[iVar18] = st::machine_word_boundary_cast<undefined4>(piVar9);
        local_EAX_4250 = st::fn_00561240(5,DAT_008032ec,iVar13);
        PTR_008033b0[iVar18] = st::machine_word_boundary_cast<undefined4>(local_EAX_4250);
        iVar18 = iVar18 + 1;
        iVar13 = DAT_0080339c;
      } while (iVar18 < 0x10);
      while (local_88 = iVar13, iVar13 < 0x16) {

        local_28_mg1 = st::fn_0055EE70(local_a0,iVar13,1);
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

                  iVar10 = st::fn_006ACF90(pRVar7->field_0000,pRVar7->field_0004,iVar18,iVar13);
                  if (iVar10 < iVar20 / 2) {
                    local_140 = 1;
                    break;
                  }
                  local_150 = local_150 + 1;
                } while (local_150 < g_runtimeRecordCount_0080338C);
              }
              if (local_140 == 0) {
                iVar20 = 0x10;

                uVar11 = st::fn_006DB910(DAT_00803304,DAT_00803308,iVar18,iVar13);

                local_74 = STPointerBoundaryCast<int *>(st::fn_006DB990(uVar11,iVar20));
                local_b0 = (int)local_74 + -3;
                if (local_b0 <= (int)local_74 + 3) {
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

                    iVar19 = st::fn_00561DC0(iVar18,iVar13,iVar20);

                    st::fn_00564F30(iVar18,iVar13,iVar19,local_74,DAT_0080330c,local_88);
                    if (-1 < local_8c) {

                      st::fn_00564F30(iVar18,iVar13,iVar19,local_74,DAT_008032e8,local_88);
                    }
                    local_b0 = local_b0 + 3;
                  } while (local_b0 <= (int)local_74 + 3);
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
        iVar18 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar18 * 0xf + (iVar18 * 0xf >> 0x1f & 0xfU))) >> 4;
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
               reinterpret_cast<RuntimeRecord_008032F4_0014 *>(&g_runtimeRecords_008032F4->field_0004);
          pRVar25 = reinterpret_cast<RuntimeRecord_00803300_0014 *>(&pRVar25->field_0004);
        }
        for (iVar18 = 0; iVar18 != 0; iVar18 = iVar18 + -1) {
          *(char *)&pRVar25->field_0000 = (char)g_runtimeRecords_008032F4->field_0000;
          g_runtimeRecords_008032F4 =
               (RuntimeRecord_008032F4_0014 *)((int)&g_runtimeRecords_008032F4->field_0000 + 1);
          pRVar25 = (RuntimeRecord_00803300_0014 *)((int)&pRVar25->field_0000 + 1);
        }
        g_runtimeRecords_008032F4 =
             reinterpret_cast<RuntimeRecord_008032F4_0014 *>((g_runtimeRecords_00803300 + DAT_0080337c));
        uStackY_208 = 0x56439f;
        local_6c[0] = st::fn_00403044(local_160,DAT_00803398,uVar23,10,param_10,st::function_address_boundary_cast<STFnType_callback_0055F0C0_p5_7e883f49 *>(st::fn_00562170),
                                         st::function_address_boundary_cast<STFnType_callback_0055F0C0_p6_32c552e1 *>(st::fn_00564DD0));
        local_40 = local_6c[0];
        if (local_6c[0] == nullptr) {
          local_1c = (st_stack_frame + 44);
          local_40 = reinterpret_cast<int *>((st_stack_frame + 44));
          piVar12 = reinterpret_cast<int *>((st_stack_frame + 44));
          local_8 = 0xffffffff;
          local_158 = 0;
          local_78 = 0;
          iVar13 = local_54;
          temp_203f9621b1d8 = g_runtimeRecords_008032F4;
          piVar4 = reinterpret_cast<int *>((st_stack_frame + 44));
          puVar24 = (st_stack_frame + 44);
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
                             st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
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
                           st::fn_006ACF90(g_runtimeRecords_00803300[local_40[iVar13]].field_0000,
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

      iVar15 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0xdc2,0,iVar14,st::mutable_c_string("%s"));
      if (iVar15 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    local_70 = iVar14;
    iVar18 = local_70;
    st::fn_006AB060(local_6c);
    st::fn_006AB060(&PTR_008033b4);
    st::fn_006AB060(local_60);
    st::fn_006AB060(&PTR_00803380);
    iVar13 = 0;
    do {
      st::fn_006AB060((void *)(iVar13 + (int)PTR_008032fc));
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x80);
    iVar13 = 0;
    do {
      st::fn_006AB060((void *)(iVar13 + (int)PTR_008033b0));
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x40);
    if (iVar18 != 0) {
      st::fn_006A5E40
                (iVar18,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0xdd4);
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
  int scalar_local_18;
  uint32_t _local_6c;

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
  ushort local_3c;
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
    iVar15 = local_14[4] + 2;
    iVar18 = iVar10 + 2;
    iVar13 = iVar15 * iVar18;
    local_28 = iVar15;
    local_c = iVar18;
    local_48 = st::fn_006AAC10(iVar13 * 7);
    local_20 = nullptr;
    local_2c = nullptr;
    local_30 = local_14[1] + -1 + param_2;
    if (local_30 < 0) {
      local_20 = (DArrayTy *)-local_30;
      local_c = local_30 + iVar18;
      local_30 = 0;
    }
    iVar8 = local_14[2] + local_14[1] + param_2;
    if (g_pathingGrid.sizeX <= iVar8) {
      local_c = local_c + -1 + (g_pathingGrid.sizeX - iVar8);
    }
    iVar8 = local_14[3] + -1 + param_3;
    local_44 = iVar8;
    if (iVar8 < 0) {
      local_44 = 0;
      local_2c = (dword *)-iVar8;
      iVar15 = iVar15 + iVar8;
      local_28 = iVar15;
    }
    iVar8 = local_14[4] + local_14[3] + param_3;
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
        local_1c = reinterpret_cast<DArrayTy *>((g_worldGrid.cells + (int)g_worldGrid.sizeX * (local_44 + local_10) + local_30));
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
                  _local_6c = CONCAT31(uStack_6b,bVar1);
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
              local_50 = reinterpret_cast<DArrayTy *>((&local_50->flags + g_worldGrid.planeStride * 2));
              local_38 = local_38 + -1;
            } while (local_38 != 0);
            local_8 = local_8 + 1;
            local_54 = local_54 + 1;
            local_1c = reinterpret_cast<DArrayTy *>(&local_1c->elementSize);
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
                           (nullptr,STSignedDiv4(*local_14),6,10);
    local_8 = 0;
    local_1c = local_34;
    local_24 = pDVar6_mg1;
    do {
      local_10 = 0;
      local_94[local_8 + 5] = pDVar6_mg1->count;
      local_20 = local_1c;
      if (0 < local_28) {
        scalar_local_18 = (int)local_2c * 8; /* split integer lifetime from pointer-typed SSA storage */
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
              (uVar11 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar15 + 3U)) >> 0x1f, uVar12 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar10 + 3U)) >> 0x1f,
              st::storage_bit_cast<int>(static_cast<uint32_t>((iVar10 + 3U ^ uVar12) - uVar12)) < st::storage_bit_cast<int>(static_cast<uint32_t>((iVar15 + 3U ^ uVar11) - uVar11)))))) {
            local_58 = local_18;
            dVar17 = *local_2c;
            iVar15 = iVar10;
          }
          iVar10 = iVar10 + -1;
          local_18 = (DArrayTy *)((int)&local_18->flags + 1);
          local_2c = local_2c + 1;
        } while (-5 < iVar10);
        if ((int)dVar17 < 1) goto cf_common_exit_0056623F;
        dVar3 = local_94[st::storage_bit_cast<int>(static_cast<uint32_t>((int)&local_58->iteratorIndex + 1))];
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_7 = param_7 - dVar17;
        if ((int)param_7 < 1) goto cf_common_exit_0056623F;
        local_94[st::storage_bit_cast<int>(static_cast<uint32_t>((int)&local_58->iteratorIndex + 1))] = 0;
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
    return &local_24->flags;
  }
  st::fn_006AB060(&local_24);
  st::fn_006A5E40
            (iVar15,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\scoreai.cpp"),0xf0f);
  return nullptr;
}
