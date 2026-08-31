#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_0060aef0(void *param_1)

{
  AnonShape_0060AEF0_F338F36E *pAVar1;
  uint *puVar2;
  AnonShape_0060AEF0_F338F36E *pAVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  icall_0041F330_FUN_0041f330_for_STFishC *piVar7;
  vfunc_00405321_FUN_0057dfb0 *pvVar8;
  icall_0041F370_FUN_0041f370_for_STFishC *piVar9;
  icall_0041C2C0_FUN_0041c2c0_for_STFishC *piVar10;
  void *this;
  VisibleClassTy *pVVar11;
  byte *puVar12;
  byte *puVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  dword dVar17;
  uint uVar18;
  int local_EAX_1165;
  int iVar12;
  int uVar15;
  int iVar19;
  int local_EAX_2543;
  uint uVar19;
  int local_EAX_2593;
  short sVar20;
  short sVar21;
  int iVar22;
  int iVar23;
  byte *puVar24;
  byte *puVar25;
  STFishC *pSVar26;
  bool bVar27;
  int local_d8;
  int local_d4 [3];
  byte local_c8;
  undefined3 uStack_c7;
  byte local_c4;
  undefined3 uStack_c3;
  byte local_b8;
  undefined3 uStack_b7;
  byte local_b4;
  undefined3 uStack_b3;
  byte *local_ac;
  byte *local_a8;
  int local_a4;
  short local_a0 [2];
  short local_9c [2];
  int local_98;
  short local_94 [4];
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  AnonShape_0060AEF0_F338F36E *local_74;
  short local_70 [2];
  int local_6c;
  int local_68;
  short local_60 [4];
  uint local_58;
  short local_50 [2];
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  short local_34 [6];
  short local_28 [2];
  int local_24;
  short local_20 [2];
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079cd38;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffef8;
  local_88 = 0;
  local_4c = 0;
  local_74 = nullptr;
  local_ac = nullptr;
  ExceptionList = &local_14;
  if (STField<int>(param_1,0x1f5) == 0x42) {
    ExceptionList = &local_14;

    iVar15 = thunk_FUN_004e60d0(STField<int>(param_1,0x1d9),0x1c);
    if (iVar15 == 0) {
      iVar15 = DAT_007950ec / 0xc9;
    }
    else {
      iVar15 = DAT_007950ec / 0xc9 + 2;
    }
    STField<int>(param_1,0x24c) = iVar15;
  }
  iVar15 = STField<int>(param_1,0x1e9);
  local_7c = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
  iVar15 = STField<int>(param_1,0x1ed);
  local_8c = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
  iVar15 = STField<int>(param_1,0x24c);
  iVar23 = local_8c - iVar15;
  if (iVar23 < 0) {
    iVar23 = 0;
  }
  local_24 = local_7c - iVar15;
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar22 = iVar15 + 1 + local_8c;
  if (g_worldGrid.sizeY < iVar22) {
    iVar22 = (int)g_worldGrid.sizeY;
  }
  local_68 = iVar15 + 1 + local_7c;
  if (g_worldGrid.sizeX < local_68) {
    local_68 = (int)g_worldGrid.sizeX;
  }
  iVar16 = (local_68 - local_24) * (iVar22 - iVar23);
  iVar15 = -(((uint)(iVar16 * 0x14) >> 2) + 3 & 0xfffffffc);
  puVar24 = &stack0xfffffef8 + iVar15;
  local_1c = &stack0xfffffef8 + iVar15;
  local_a8 = &stack0xfffffef8 + iVar15;
  local_78 = iVar22;
  *(undefined4 *)(&stack0xfffffef8 + iVar15) = 0;
  if (STField<int>(param_1,0x1f5) == 0x43) {
    *(undefined4 *)(&stack0xfffffef4 + iVar15) = 0x60b096;
    iVar16 = iVar16 * -0x3c;
    puVar24 = &stack0xfffffef8 + iVar16 + iVar15;
    local_1c = &stack0xfffffef8 + iVar16 + iVar15;
    local_74 = (AnonShape_0060AEF0_F338F36E *)(&stack0xfffffef8 + iVar16 + iVar15);
  }
  local_8 = 0xffffffff;
  local_a4 = 0;
  local_40 = iVar23;
  if (iVar23 < iVar22) {
    do {
      local_98 = local_24;
      if (local_24 < local_68) {
        do {
          local_3c = 0;
          do {
            sVar21 = (short)local_98;
            if (((((sVar21 < 0) || (g_worldGrid.sizeX <= sVar21)) ||
                 (sVar20 = (short)local_40, sVar20 < 0)) ||
                ((g_worldGrid.sizeY <= sVar20 || (sVar14 = (short)local_3c, sVar14 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar14)) {
              pSVar26 = nullptr;
            }
            else {
              pSVar26 = (STFishC *)
                        STGridAt3D(g_worldGrid, sVar21, sVar20, sVar14).objects[0];
            }
            if (pSVar26 != nullptr) {
              piVar7 = pSVar26->vtable->vfunc_F0;
              *(undefined4 *)(puVar24 + -4) = 0x60b15a;
              /* ST_CALLSITE[0060B154]: CALL dword ptr [EDX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STFishC */
              iVar15 = (*piVar7)(pSVar26);
              if (iVar15 != 0) {
                if (*(int *)&pSVar26->field_0x20 == 1000) {
                  pvVar8 = pSVar26->vtable->vfunc_2C;
                  *(undefined4 *)(puVar24 + -4) = 0x60b172;
                  /* ST_CALLSITE[0060B16F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                  dVar17 = (*pvVar8)(pSVar26);
                  if (*(int *)(&DAT_00791d68 + dVar17 * 4) == 1) {
                    bVar27 = false;
                    iVar15 = 0;
                    if (0 < local_a4) {
                      do {
                        if (*(int *)(local_a8 + iVar15 * 4) == pSVar26->field_0018) {
                          bVar27 = true;
                          break;
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < local_a4);
                    }
                    if (bVar27) goto cf_continue_loop_0060B649;
                    *(undefined4 *)(local_a8 + local_a4 * 4) = pSVar26->field_0018;
                    local_a4 = local_a4 + 1;
                  }
                }
                uVar19 = pSVar26->field_0024;
                if (STField<int>(param_1,0x1f5) == 0x43) {
                  if ((uVar19 < 8) &&
                     ((g_playSystem_00802A38 == nullptr ||
                      (g_bulkInitializedRecords_008087C7[uVar19].field_0022 < 8)))) {
                    bVar4 = (byte)pSVar26->field_0024;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_b8 = CONCAT31(uStack_b7,bVar4);
                    bVar5 = STField<byte>(param_1,0x1d9);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_b4 = CONCAT31(uStack_b3,bVar5);
                    if (DAT_00808a8f == '\0') {
                      if (bVar4 == bVar5) {
LAB_0060b2ce:
                        iVar15 = 0;
                      }
                      else {
                        bVar6 = g_playerRelationMatrix[bVar4][bVar5];
                        if ((bVar6 == 0) && (g_playerRelationMatrix[bVar5][bVar4] == 0)) {
                          iVar15 = -2;
                        }
                        else if ((bVar6 == 1) && (g_playerRelationMatrix[bVar5][bVar4] == 0)) {
                          iVar15 = -1;
                        }
                        else if ((bVar6 == 0) && (g_playerRelationMatrix[bVar5][bVar4] == 1)) {
                          iVar15 = 1;
                        }
                        else {
                          if ((bVar6 != 1) || (g_playerRelationMatrix[bVar5][bVar4] != 1))
                          goto LAB_0060b2ce;
                          iVar15 = 2;
                        }
                      }
                      bVar27 = iVar15 < 0;
                    }
                    else {
                      bVar27 = g_bulkInitializedRecords_008087C7[bVar5].field_0023 !=
                               g_bulkInitializedRecords_008087C7[bVar4].field_0023;
                    }
                    if (bVar27) {
                      piVar9 = pSVar26->vtable->vfunc_F8;
                      *(undefined4 *)(puVar24 + -4) = 0x60b2eb;
                      /* ST_CALLSITE[0060B2E5]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STFishC */
                      iVar15 = (*piVar9)(pSVar26);
                      if (iVar15 != 0) {
                        pAVar1 = local_74 + local_88;
                        pAVar1->field_0000 = pSVar26;
                        piVar10 = pSVar26->vtable->vfunc_78;
                        *(undefined4 *)(puVar24 + -4) = 0x60b30b;
                        /* ST_CALLSITE[0060B308]: CALL dword ptr [EDX + 0x78]; [STIndirectCallsiteApplier] exact slot 0x78; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STFishC */
                        uVar18 = (*piVar10)(pSVar26);
                        *(undefined4 *)&pAVar1->field_0x4 = uVar18;
                        iVar15 = STField<int>(param_1,0x1ed);
                        iVar15 = STBiasedDiv16(iVar15, 0xc9); /* exact signed 16-bit grid-index division */
                        iVar23 = STField<int>(param_1,0x1e9);
                        iVar23 = STBiasedDiv16(iVar23, 0xc9); /* exact signed 16-bit grid-index division */
                        *(int *)(puVar24 + -4) = iVar15;
                        *(int *)(puVar24 + -8) = iVar23;
                        *(int *)(puVar24 + -0xc) = local_40;
                        *(int *)(puVar24 + -0x10) = local_98;
                        *(undefined4 *)(puVar24 + -0x14) = 0x60b382;

                        local_EAX_1165 =
                             FUN_006acf90(*(int *)(puVar24 + -0x10),*(int *)(puVar24 + -0xc),
                                          *(int *)(puVar24 + -8),*(int *)(puVar24 + -4));
                        pAVar1->field_0008 = local_EAX_1165;
                        pvVar8 = pSVar26->vtable->vfunc_2C;
                        *(undefined4 *)(puVar24 + -4) = 0x60b38c;
                        /* ST_CALLSITE[0060B389]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                        dVar17 = (*pvVar8)(pSVar26);
                        if (dVar17 == 0x23) {
                          local_4c = local_4c + 1;
                        }
                        goto LAB_0060b643;
                      }
                    }
                  }
                }
                else {
                  if ((uVar19 < 8) &&
                     ((g_playSystem_00802A38 == nullptr ||
                      (g_bulkInitializedRecords_008087C7[uVar19].field_0022 < 8)))) {
                    bVar4 = (byte)pSVar26->field_0024;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_c8 = CONCAT31(uStack_c7,bVar4);
                    bVar5 = STField<byte>(param_1,0x1d9);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_c4 = CONCAT31(uStack_c3,bVar5);
                    if (DAT_00808a8f == '\0') {
                      if (bVar4 == bVar5) {
LAB_0060b48b:
                        iVar15 = 0;
                      }
                      else {
                        bVar6 = g_playerRelationMatrix[bVar4][bVar5];
                        if ((bVar6 == 0) && (g_playerRelationMatrix[bVar5][bVar4] == 0)) {
                          iVar15 = -2;
                        }
                        else if ((bVar6 == 1) && (g_playerRelationMatrix[bVar5][bVar4] == 0)) {
                          iVar15 = -1;
                        }
                        else if ((bVar6 == 0) && (g_playerRelationMatrix[bVar5][bVar4] == 1)) {
                          iVar15 = 1;
                        }
                        else {
                          if ((bVar6 != 1) || (g_playerRelationMatrix[bVar5][bVar4] != 1))
                          goto LAB_0060b48b;
                          iVar15 = 2;
                        }
                      }
                      bVar27 = iVar15 < 0;
                    }
                    else {
                      bVar27 = g_bulkInitializedRecords_008087C7[bVar5].field_0023 !=
                               g_bulkInitializedRecords_008087C7[bVar4].field_0023;
                    }
                    if (bVar27) {
                      piVar9 = pSVar26->vtable->vfunc_F8;
                      *(undefined4 *)(puVar24 + -4) = 0x60b4a4;
                      /* ST_CALLSITE[0060B49E]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STFishC */
                      iVar15 = (*piVar9)(pSVar26);
                      if ((iVar15 != 0) && (STField<int>(param_1,0x1f5) != 0x4c)) {
                        *(STFishC **)(puVar24 + -4) = pSVar26;
                        *(undefined4 *)(puVar24 + -8) = 0x60b4c1;

                        thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar24 + -4));
                        goto LAB_0060b643;
                      }
                      goto cf_continue_loop_0060B649;
                    }
                  }
                  if (STField<int>(param_1,0x1f5) == 0x4c) {
                    *(STFishC **)(puVar24 + -4) = pSVar26;
                    *(undefined4 *)(puVar24 + -8) = 0x60b4dd;

                    thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar24 + -4));
                    *(int *)(puVar24 + -4) = local_40;
                    *(int *)(puVar24 + -8) = local_98;
                    *(int *)(puVar24 + -0xc) = local_8c;
                    *(int *)(puVar24 + -0x10) = local_7c;
                    *(undefined4 *)(puVar24 + -0x14) = 0x60b4f8;

                    iVar12 = FUN_006acf90(*(int *)(puVar24 + -0x10),*(int *)(puVar24 + -0xc),
                                          *(int *)(puVar24 + -8),*(int *)(puVar24 + -4));
                    uVar19 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
                    STField<uint>(param_1,0x1c) = uVar19;
                    *(short **)(puVar24 + -4) = local_34;
                    *(short **)(puVar24 + -8) = local_a0;
                    *(short **)(puVar24 + -0xc) = local_70;
                    *(undefined4 *)(puVar24 + -0x10) = 0x60b52f;
                    /* ST_CALLSITE[0060B52A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                    STFishC::sub_004162B0
                              (pSVar26,*(short **)(puVar24 + -0xc),*(short **)(puVar24 + -8),
                               *(short **)(puVar24 + -4));
                    pVVar11 = g_visibleClass_00802A88;
                    if (g_visibleClass_00802A88 != nullptr) {
                      iVar22 = (int)local_34[0];
                      iVar15 = (int)local_a0[0];
                      iVar23 = (int)local_70[0];
                      if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
LAB_0060b60e:
                        bVar27 = true;
                      }
                      else {
                        *(int **)(puVar24 + -4) = &local_d8;
                        *(int **)(puVar24 + -8) = local_d4;
                        *(int *)(puVar24 + -0xc) = iVar15;
                        *(int *)(puVar24 + -0x10) = iVar23;
                        *(int *)(puVar24 + -0x14) = g_visibleClass_00802A88->field_010C;
                        *(undefined4 *)(puVar24 + -0x18) = 0x60b58b;
                        /* ST_CALLSITE[0060B586]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
                        VisibleClassTy::sub_00558C00
                                  (g_visibleClass_00802A88,
                                   *(VisibleClassTy_sub_00558C00_param_1Enum *)(puVar24 + -0x14),
                                   *(int *)(puVar24 + -0x10),*(int *)(puVar24 + -0xc),
                                   *(int **)(puVar24 + -8),*(int **)(puVar24 + -4));
                        if ((iVar22 < 0) || (4 < iVar22)) goto LAB_0060b60e;
                        if ((((local_d4[0] < 0) || (pVVar11->field_0030 <= local_d4[0])) ||
                            (local_d8 + g_centeredOffsets5[iVar22] < 0)) ||
                           (pVVar11->field_0034 <= local_d8 + g_centeredOffsets5[iVar22])) {
                          bVar27 = false;
                        }
                        else {
                          bVar27 = true;
                        }
                        if ((bVar27) && (pVVar11->field_004C != nullptr)) {
                          bVar27 = pVVar11->field_004C
                                   [local_d4[0] +
                                    (g_centeredOffsets5[iVar22] + local_d8) * pVVar11->field_0030]
                                   != 0;
                        }
                        else {
                          bVar27 = true;
                        }
                      }
                      if (bVar27) {
                        pvVar8 = pSVar26->vtable->vfunc_2C;
                        *(undefined4 *)(puVar24 + -4) = 0x60b61e;
                        /* ST_CALLSITE[0060B61B]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STFishC */
                        dVar17 = (*pvVar8)(pSVar26);
                        iVar15 = *(int *)(&DAT_00791d68 + dVar17 * 4);
                        *(uint *)(puVar24 + -4) = iVar12 + (uVar19 >> 0x10) % (iVar12 * 3 + 1U);
                        if (iVar15 == 1) {
                          *(undefined4 *)(puVar24 + -8) = 1;
                        }
                        else {
                          *(undefined4 *)(puVar24 + -8) = 0;
                        }
                        *(undefined4 *)(puVar24 + -0xc) = 0x60b63a;

                        uVar15 = thunk_FUN_004ad650((STT3DSprC *)&pSVar26->field_01D5);
                        *(int *)(puVar24 + -0xc) = uVar15;
                        *(undefined4 *)(puVar24 + -0x10) = 0x60b640;
                        thunk_FUN_00637f40(*(uint *)(puVar24 + -0xc),*(uint *)(puVar24 + -8),
                                           *(int *)(puVar24 + -4));
                      }
                    }
LAB_0060b643:
                    local_88 = local_88 + 1;
                  }
                }
              }
            }
cf_continue_loop_0060B649:
            local_3c = local_3c + 1;
          } while (local_3c < 5);
          local_98 = local_98 + 1;
          iVar22 = local_78;
        } while (local_98 < local_68);
      }
      local_40 = local_40 + 1;
    } while (local_40 < iVar22);
  }
  if (STField<int>(param_1,0x1f5) == 0x43) {
    puVar25 = puVar24;
    if (local_4c != 0) {
      *(undefined4 *)(puVar24 + -4) = 0x60b6b6;
      iVar15 = local_4c * -0xc;
      local_1c = puVar24 + iVar15;
      local_ac = puVar24 + iVar15;
      local_8 = 0xffffffff;
      iVar23 = 0;
      local_4c = 0;
      local_6c = 0;
      puVar25 = puVar24 + iVar15;
      puVar12 = puVar24 + iVar15;
      puVar13 = puVar24 + iVar15;
      if (0 < local_88) {
        do {
          local_1c = puVar13;
          local_ac = puVar12;
          pAVar1 = local_74 + local_6c;
          pSVar26 = pAVar1->field_0000;
          pvVar8 = pSVar26->vtable->vfunc_2C;
          *(undefined4 *)(puVar24 + iVar15 + -4) = 0x60b6ed;
          /* ST_CALLSITE[0060B6EA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          dVar17 = (*pvVar8)(pSVar26);
          if (dVar17 == 0x23) {
            pAVar1->field_0008 = 0;
            *(STFishC **)(puVar24 + iVar15 + -4) = pSVar26;
            *(undefined4 *)(puVar24 + iVar15 + -8) = 0x60b705;

            thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar24 + iVar15 + -4));
            puVar2 = (undefined4 *)(local_ac + iVar23 * 0xc);
            *puVar2 = pAVar1->field_0000;
            puVar2[1] = *(undefined4 *)&pAVar1->field_0x4;
            puVar2[2] = pAVar1->field_0008;
            iVar23 = iVar23 + 1;
            local_4c = iVar23;
          }
          local_6c = local_6c + 1;
          puVar25 = puVar24 + iVar15;
          puVar12 = local_ac;
          puVar13 = local_1c;
        } while (local_6c < local_88);
      }
    }
    iVar15 = 0;
    if (0 < local_88) {
      do {
        local_80 = 0;
        if (0 < iVar15) {
          do {
            pAVar1 = local_74 + iVar15;
            pAVar3 = local_74 + local_80;
            iVar23 = pAVar3->field_0008;
            if (pAVar1->field_0008 < iVar23) {
              uVar18 = *(undefined4 *)&pAVar3->field_0x4;
              pSVar26 = pAVar3->field_0000;
              pAVar3->field_0008 = pAVar1->field_0008;
              *(undefined4 *)&pAVar3->field_0x4 = *(undefined4 *)&pAVar1->field_0x4;
              pAVar3->field_0000 = pAVar1->field_0000;
              pAVar1->field_0008 = iVar23;
              *(undefined4 *)&pAVar1->field_0x4 = uVar18;
              pAVar1->field_0000 = pSVar26;
              local_58 = uVar18;
            }
            local_80 = local_80 + 1;
          } while (local_80 < iVar15);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < local_88);
    }
    local_84 = 0;
    local_6c = 0;
    if (0 < local_88) {
      do {
        pSVar26 = local_74[local_6c].field_0000;
        local_48 = 1;
        pvVar8 = pSVar26->vtable->vfunc_2C;
        *(undefined4 *)(puVar25 + -4) = 0x60b7c4;
        /* ST_CALLSITE[0060B7C1]: CALL dword ptr [EDX + 0x2c] */
        dVar17 = (*pvVar8)(pSVar26);
        if (((dVar17 != 0x23) && (local_4c != 0)) && (iVar15 = 0, 0 < local_4c)) {
          do {
            this = *(void **)(local_ac + iVar15 * 0xc);
            if ((STField<int>(this,0x24) == pSVar26->field_0024) &&
               (STField<int>(this,0x72e) != 0)) {
              *(short **)(puVar25 + -4) = local_20;
              *(short **)(puVar25 + -8) = local_94;
              *(short **)(puVar25 + -0xc) = local_50;
              *(undefined4 *)(puVar25 + -0x10) = 0x60b816;
              thunk_FUN_00416270(pSVar26,*(uint **)(puVar25 + -0xc),*(short **)(puVar25 + -8),
                                 *(short **)(puVar25 + -4));
              *(short **)(puVar25 + -4) = local_28;
              *(short **)(puVar25 + -8) = local_9c;
              *(short **)(puVar25 + -0xc) = local_60;
              *(undefined4 *)(puVar25 + -0x10) = 0x60b82c;
              thunk_FUN_00416270(this,*(uint **)(puVar25 + -0xc),*(short **)(puVar25 + -8),
                                 *(short **)(puVar25 + -4));
              *(int *)(puVar25 + -4) = (int)local_28[0];
              *(int *)(puVar25 + -8) = (int)local_9c[0];
              *(int *)(puVar25 + -0xc) = (int)local_60[0];
              *(int *)(puVar25 + -0x10) = (int)local_20[0];
              *(int *)(puVar25 + -0x14) = (int)local_94[0];
              *(int *)(puVar25 + -0x18) = (int)local_50[0];
              *(undefined4 *)(puVar25 + -0x1c) = 0x60b855;

              iVar19 = FUN_006acf0d(*(int *)(puVar25 + -0x18),*(int *)(puVar25 + -0x14),
                                    *(int *)(puVar25 + -0x10),*(int *)(puVar25 + -0xc),
                                    *(int *)(puVar25 + -8),*(int *)(puVar25 + -4));
              if (iVar19 < 0x3ee) {
                local_48 = 0;
                break;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < local_4c);
        }
        if ((local_48 != 0) && (local_74[local_6c].field_0008 != 0)) {
          *(short **)(puVar25 + -4) = local_20;
          *(short **)(puVar25 + -8) = local_94;
          *(short **)(puVar25 + -0xc) = local_50;
          *(undefined4 *)(puVar25 + -0x10) = 0x60b8c7;
          /* ST_CALLSITE[0060B8C2]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0
                    (pSVar26,*(short **)(puVar25 + -0xc),*(short **)(puVar25 + -8),
                     *(short **)(puVar25 + -4));
          *(int *)(puVar25 + -4) = (int)local_94[0];
          *(int *)(puVar25 + -8) = (int)local_50[0];
          *(int *)(puVar25 + -0xc) = local_8c;
          *(int *)(puVar25 + -0x10) = local_7c;
          *(undefined4 *)(puVar25 + -0x14) = 0x60b8e4;

          local_EAX_2543 =
               FUN_006acf90(*(int *)(puVar25 + -0x10),*(int *)(puVar25 + -0xc),
                            *(int *)(puVar25 + -8),*(int *)(puVar25 + -4));
          uVar19 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(param_1,0x1c) = uVar19;
          *(uint *)(puVar25 + -4) = local_EAX_2543 + (uVar19 >> 0x10) % (local_EAX_2543 * 3 + 1U);
          *(undefined4 *)(puVar25 + -8) = 0x60b916;

          local_EAX_2593 = thunk_FUN_004ad650((STT3DSprC *)&pSVar26->field_01D5);
          *(int *)(puVar25 + -8) = local_EAX_2593;
          *(undefined4 *)(puVar25 + -0xc) = 0x60b91c;
          thunk_FUN_00637d80(*(uint *)(puVar25 + -8),*(int *)(puVar25 + -4));
          *(STFishC **)(puVar25 + -4) = pSVar26;
          *(undefined4 *)(puVar25 + -8) = 0x60b927;

          thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar25 + -4));
          if (g_sndUnderAttMeneg_00811798 != nullptr) {
            pvVar8 = pSVar26->vtable->vfunc_2C;
            *(undefined4 *)(puVar25 + -4) = 0x60b937;
            /* ST_CALLSITE[0060B934]: CALL dword ptr [EDX + 0x2c] */
            dVar17 = (*pvVar8)(pSVar26);
            *(dword *)(puVar25 + -4) = dVar17;
            *(undefined4 *)(puVar25 + -8) = pSVar26->field_0024;
            *(int *)(puVar25 + -0xc) = local_8c;
            *(int *)(puVar25 + -0x10) = local_7c;
            *(undefined4 *)(puVar25 + -0x14) = 0x60b952;
            /* ST_CALLSITE[0060B94D]: CALL 0x00401bbd; direct=00401BBD SndUnderAttMenegC::sub_006211E0 */
            SndUnderAttMenegC::sub_006211E0
                      (g_sndUnderAttMeneg_00811798,*(int *)(puVar25 + -0x10),
                       *(int *)(puVar25 + -0xc),*(uint *)(puVar25 + -8));
          }
          local_84 = local_84 + 1;
          if (9 < local_84) {
            ExceptionList = local_14;
            return local_88;
          }
        }
        local_6c = local_6c + 1;
      } while (local_6c < local_88);
    }
  }
  ExceptionList = local_14;
  return local_88;
}

