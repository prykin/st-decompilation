#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_0060aef0(void *param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  icall_0041F330_FUN_0041f330_for_STFishC *piVar6;
  vfunc_00405321_FUN_0057dfb0 *pvVar7;
  icall_0041F370_FUN_0041f370_for_STFishC *piVar8;
  icall_0041C2C0_FUN_0041c2c0_for_STFishC *piVar9;
  int *piVar10;
  code *pcVar11;
  uint uVar12;
  void *this;
  VisibleClassTy *pVVar13;
  byte *puVar14;
  byte *puVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  dword dVar19;
  uint uVar20;
  int local_EAX_1165;
  int iVar12;
  int uVar15;
  int iVar19;
  int local_EAX_2543;
  uint uVar21;
  int local_EAX_2593;
  short sVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  byte *puVar26;
  byte *puVar27;
  byte *puVar28;
  STFishC *pSVar29;
  bool bVar30;
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
  byte *local_74;
  short local_70 [2];
  int local_6c;
  int local_68;
  short local_60 [4];
  undefined4 local_58;
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
  undefined4 local_8;

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
    iVar17 = thunk_FUN_004e60d0(STField<int>(param_1,0x1d9),0x1c);
    if (iVar17 == 0) {
      iVar17 = DAT_007950ec / 0xc9;
    }
    else {
      iVar17 = DAT_007950ec / 0xc9 + 2;
    }
    STField<int>(param_1,0x24c) = iVar17;
  }
  iVar17 = STField<int>(param_1,0x1e9);
  local_7c = STBiasedDiv16(iVar17, 0xc9); /* exact signed 16-bit grid-index division */
  iVar17 = STField<int>(param_1,0x1ed);
  local_8c = STBiasedDiv16(iVar17, 0xc9); /* exact signed 16-bit grid-index division */
  iVar17 = STField<int>(param_1,0x24c);
  iVar25 = local_8c - iVar17;
  if (iVar25 < 0) {
    iVar25 = 0;
  }
  local_24 = local_7c - iVar17;
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar24 = iVar17 + 1 + local_8c;
  if (g_worldGrid.sizeY < iVar24) {
    iVar24 = (int)g_worldGrid.sizeY;
  }
  local_68 = iVar17 + 1 + local_7c;
  if (g_worldGrid.sizeX < local_68) {
    local_68 = (int)g_worldGrid.sizeX;
  }
  iVar18 = (local_68 - local_24) * (iVar24 - iVar25);
  iVar17 = -(((uint)(iVar18 * 0x14) >> 2) + 3 & 0xfffffffc);
  puVar26 = &stack0xfffffef8 + iVar17;
  local_1c = &stack0xfffffef8 + iVar17;
  local_a8 = &stack0xfffffef8 + iVar17;
  local_78 = iVar24;
  *(undefined4 *)(&stack0xfffffef8 + iVar17) = 0;
  if (STField<int>(param_1,0x1f5) == 0x43) {
    *(undefined4 *)(&stack0xfffffef4 + iVar17) = 0x60b096;
    iVar18 = iVar18 * -0x3c;
    puVar26 = &stack0xfffffef8 + iVar18 + iVar17;
    local_1c = &stack0xfffffef8 + iVar18 + iVar17;
    local_74 = &stack0xfffffef8 + iVar18 + iVar17;
  }
  local_8 = 0xffffffff;
  local_a4 = 0;
  local_40 = iVar25;
  if (iVar25 < iVar24) {
    do {
      local_98 = local_24;
      if (local_24 < local_68) {
        do {
          local_3c = 0;
          do {
            sVar23 = (short)local_98;
            if (((((sVar23 < 0) || (g_worldGrid.sizeX <= sVar23)) ||
                 (sVar22 = (short)local_40, sVar22 < 0)) ||
                ((g_worldGrid.sizeY <= sVar22 || (sVar16 = (short)local_3c, sVar16 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar16)) {
              pSVar29 = nullptr;
            }
            else {
              pSVar29 = (STFishC *)
                        STGridAt3D(g_worldGrid, sVar23, sVar22, sVar16).objects[0];
            }
            if (pSVar29 != nullptr) {
              piVar6 = pSVar29->vtable->vfunc_F0;
              *(undefined4 *)(puVar26 + -4) = 0x60b15a;
              /* ST_CALLSITE[0060B154]: CALL dword ptr [EDX + 0xf0] */
              iVar17 = (*piVar6)(pSVar29);
              if (iVar17 != 0) {
                if (*(int *)&pSVar29->field_0x20 == 1000) {
                  pvVar7 = pSVar29->vtable->slot_2C;
                  *(undefined4 *)(puVar26 + -4) = 0x60b172;
                  /* ST_CALLSITE[0060B16F]: CALL dword ptr [EAX + 0x2c] */
                  dVar19 = (*pvVar7)(pSVar29);
                  if (*(int *)(&DAT_00791d68 + dVar19 * 4) == 1) {
                    bVar30 = false;
                    iVar17 = 0;
                    if (0 < local_a4) {
                      do {
                        if (*(int *)(local_a8 + iVar17 * 4) == pSVar29->field_0018) {
                          bVar30 = true;
                          break;
                        }
                        iVar17 = iVar17 + 1;
                      } while (iVar17 < local_a4);
                    }
                    if (bVar30) goto cf_continue_loop_0060B649;
                    *(undefined4 *)(local_a8 + local_a4 * 4) = pSVar29->field_0018;
                    local_a4 = local_a4 + 1;
                  }
                }
                uVar21 = pSVar29->field_0024;
                if (STField<int>(param_1,0x1f5) == 0x43) {
                  if ((uVar21 < 8) &&
                     ((g_playSystem_00802A38 == nullptr ||
                      (g_bulkInitializedRecords_008087C7[uVar21].field_0022 < 8)))) {
                    bVar3 = (byte)pSVar29->field_0024;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_b8 = CONCAT31(uStack_b7,bVar3);
                    bVar4 = STField<byte>(param_1,0x1d9);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_b4 = CONCAT31(uStack_b3,bVar4);
                    if (DAT_00808a8f == '\0') {
                      if (bVar3 == bVar4) {
LAB_0060b2ce:
                        iVar17 = 0;
                      }
                      else {
                        bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                        if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                          iVar17 = -2;
                        }
                        else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                          iVar17 = -1;
                        }
                        else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                          iVar17 = 1;
                        }
                        else {
                          if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                          goto LAB_0060b2ce;
                          iVar17 = 2;
                        }
                      }
                      bVar30 = iVar17 < 0;
                    }
                    else {
                      bVar30 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                               g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                    }
                    if (bVar30) {
                      piVar8 = pSVar29->vtable->vfunc_F8;
                      *(undefined4 *)(puVar26 + -4) = 0x60b2eb;
                      /* ST_CALLSITE[0060B2E5]: CALL dword ptr [EDX + 0xf8] */
                      iVar17 = (*piVar8)(pSVar29);
                      if (iVar17 != 0) {
                        puVar1 = (undefined4 *)(local_74 + local_88 * 0xc);
                        *puVar1 = pSVar29;
                        piVar9 = pSVar29->vtable->vfunc_78;
                        *(undefined4 *)(puVar26 + -4) = 0x60b30b;
                        /* ST_CALLSITE[0060B308]: CALL dword ptr [EDX + 0x78] */
                        uVar20 = (*piVar9)(pSVar29);
                        puVar1[1] = uVar20;
                        iVar17 = STField<int>(param_1,0x1ed);
                        iVar17 = STBiasedDiv16(iVar17, 0xc9); /* exact signed 16-bit grid-index division */
                        iVar25 = STField<int>(param_1,0x1e9);
                        iVar25 = STBiasedDiv16(iVar25, 0xc9); /* exact signed 16-bit grid-index division */
                        *(int *)(puVar26 + -4) = iVar17;
                        *(int *)(puVar26 + -8) = iVar25;
                        *(int *)(puVar26 + -0xc) = local_40;
                        *(int *)(puVar26 + -0x10) = local_98;
                        *(undefined4 *)(puVar26 + -0x14) = 0x60b382;
                        local_EAX_1165 =
                             FUN_006acf90(*(int *)(puVar26 + -0x10),*(int *)(puVar26 + -0xc),
                                          *(int *)(puVar26 + -8),*(int *)(puVar26 + -4));
                        puVar1[2] = local_EAX_1165;
                        pvVar7 = pSVar29->vtable->slot_2C;
                        *(undefined4 *)(puVar26 + -4) = 0x60b38c;
                        /* ST_CALLSITE[0060B389]: CALL dword ptr [EAX + 0x2c] */
                        dVar19 = (*pvVar7)(pSVar29);
                        if (dVar19 == 0x23) {
                          local_4c = local_4c + 1;
                        }
                        goto LAB_0060b643;
                      }
                    }
                  }
                }
                else {
                  if ((uVar21 < 8) &&
                     ((g_playSystem_00802A38 == nullptr ||
                      (g_bulkInitializedRecords_008087C7[uVar21].field_0022 < 8)))) {
                    bVar3 = (byte)pSVar29->field_0024;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_c8 = CONCAT31(uStack_c7,bVar3);
                    bVar4 = STField<byte>(param_1,0x1d9);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_c4 = CONCAT31(uStack_c3,bVar4);
                    if (DAT_00808a8f == '\0') {
                      if (bVar3 == bVar4) {
LAB_0060b48b:
                        iVar17 = 0;
                      }
                      else {
                        bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                        if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                          iVar17 = -2;
                        }
                        else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                          iVar17 = -1;
                        }
                        else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                          iVar17 = 1;
                        }
                        else {
                          if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                          goto LAB_0060b48b;
                          iVar17 = 2;
                        }
                      }
                      bVar30 = iVar17 < 0;
                    }
                    else {
                      bVar30 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                               g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                    }
                    if (bVar30) {
                      piVar8 = pSVar29->vtable->vfunc_F8;
                      *(undefined4 *)(puVar26 + -4) = 0x60b4a4;
                      /* ST_CALLSITE[0060B49E]: CALL dword ptr [EDX + 0xf8] */
                      iVar17 = (*piVar8)(pSVar29);
                      if ((iVar17 != 0) && (STField<int>(param_1,0x1f5) != 0x4c)) {
                        *(STFishC **)(puVar26 + -4) = pSVar29;
                        *(undefined4 *)(puVar26 + -8) = 0x60b4c1;
                        thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar26 + -4));
                        goto LAB_0060b643;
                      }
                      goto cf_continue_loop_0060B649;
                    }
                  }
                  if (STField<int>(param_1,0x1f5) == 0x4c) {
                    *(STFishC **)(puVar26 + -4) = pSVar29;
                    *(undefined4 *)(puVar26 + -8) = 0x60b4dd;
                    thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar26 + -4));
                    *(int *)(puVar26 + -4) = local_40;
                    *(int *)(puVar26 + -8) = local_98;
                    *(int *)(puVar26 + -0xc) = local_8c;
                    *(int *)(puVar26 + -0x10) = local_7c;
                    *(undefined4 *)(puVar26 + -0x14) = 0x60b4f8;
                    iVar12 = FUN_006acf90(*(int *)(puVar26 + -0x10),*(int *)(puVar26 + -0xc),
                                          *(int *)(puVar26 + -8),*(int *)(puVar26 + -4));
                    uVar21 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
                    STField<uint>(param_1,0x1c) = uVar21;
                    *(short **)(puVar26 + -4) = local_34;
                    *(short **)(puVar26 + -8) = local_a0;
                    *(short **)(puVar26 + -0xc) = local_70;
                    *(undefined4 *)(puVar26 + -0x10) = 0x60b52f;
                    /* ST_CALLSITE[0060B52A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                    STFishC::sub_004162B0
                              (pSVar29,*(short **)(puVar26 + -0xc),*(short **)(puVar26 + -8),
                               *(short **)(puVar26 + -4));
                    pVVar13 = g_visibleClass_00802A88;
                    if (g_visibleClass_00802A88 != nullptr) {
                      iVar24 = (int)local_34[0];
                      iVar17 = (int)local_a0[0];
                      iVar25 = (int)local_70[0];
                      if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
LAB_0060b60e:
                        bVar30 = true;
                      }
                      else {
                        *(int **)(puVar26 + -4) = &local_d8;
                        *(int **)(puVar26 + -8) = local_d4;
                        *(int *)(puVar26 + -0xc) = iVar17;
                        *(int *)(puVar26 + -0x10) = iVar25;
                        *(int *)(puVar26 + -0x14) = g_visibleClass_00802A88->field_010C;
                        *(undefined4 *)(puVar26 + -0x18) = 0x60b58b;
                        /* ST_CALLSITE[0060B586]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
                        VisibleClassTy::sub_00558C00
                                  (g_visibleClass_00802A88,
                                   *(VisibleClassTy_sub_00558C00_param_1Enum *)(puVar26 + -0x14),
                                   *(int *)(puVar26 + -0x10),*(int *)(puVar26 + -0xc),
                                   *(int **)(puVar26 + -8),*(int **)(puVar26 + -4));
                        if ((iVar24 < 0) || (4 < iVar24)) goto LAB_0060b60e;
                        if ((((local_d4[0] < 0) || (pVVar13->field_0030 <= local_d4[0])) ||
                            (local_d8 + g_centeredOffsets5[iVar24] < 0)) ||
                           (pVVar13->field_0034 <= local_d8 + g_centeredOffsets5[iVar24])) {
                          bVar30 = false;
                        }
                        else {
                          bVar30 = true;
                        }
                        if ((bVar30) && (pVVar13->field_004C != nullptr)) {
                          bVar30 = pVVar13->field_004C
                                   [local_d4[0] +
                                    (g_centeredOffsets5[iVar24] + local_d8) * pVVar13->field_0030]
                                   != 0;
                        }
                        else {
                          bVar30 = true;
                        }
                      }
                      if (bVar30) {
                        pvVar7 = pSVar29->vtable->slot_2C;
                        *(undefined4 *)(puVar26 + -4) = 0x60b61e;
                        /* ST_CALLSITE[0060B61B]: CALL dword ptr [EDX + 0x2c] */
                        dVar19 = (*pvVar7)(pSVar29);
                        iVar17 = *(int *)(&DAT_00791d68 + dVar19 * 4);
                        *(uint *)(puVar26 + -4) = iVar12 + (uVar21 >> 0x10) % (iVar12 * 3 + 1U);
                        if (iVar17 == 1) {
                          *(undefined4 *)(puVar26 + -8) = 1;
                        }
                        else {
                          *(undefined4 *)(puVar26 + -8) = 0;
                        }
                        *(undefined4 *)(puVar26 + -0xc) = 0x60b63a;
                        uVar15 = thunk_FUN_004ad650((STT3DSprC *)&pSVar29->field_01D5);
                        *(int *)(puVar26 + -0xc) = uVar15;
                        *(undefined4 *)(puVar26 + -0x10) = 0x60b640;
                        thunk_FUN_00637f40(*(uint *)(puVar26 + -0xc),*(uint *)(puVar26 + -8),
                                           *(int *)(puVar26 + -4));
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
          iVar24 = local_78;
        } while (local_98 < local_68);
      }
      local_40 = local_40 + 1;
    } while (local_40 < iVar24);
  }
  if (STField<int>(param_1,0x1f5) == 0x43) {
    puVar28 = puVar26;
    if (local_4c != 0) {
      *(undefined4 *)(puVar26 + -4) = 0x60b6b6;
      iVar17 = local_4c * -0xc;
      puVar28 = puVar26 + iVar17;
      local_1c = puVar26 + iVar17;
      local_ac = puVar26 + iVar17;
      local_8 = 0xffffffff;
      iVar25 = 0;
      local_4c = 0;
      local_6c = 0;
      puVar27 = puVar26 + iVar17;
      puVar14 = puVar26 + iVar17;
      puVar15 = puVar26 + iVar17;
      if (0 < local_88) {
        do {
          local_1c = puVar15;
          local_ac = puVar14;
          puVar1 = (undefined4 *)(local_74 + local_6c * 0xc);
          piVar10 = (int *)*puVar1;
          pcVar11 = *(code **)(*piVar10 + 0x2c);
          puVar28 = puVar27 + -4;
          *(undefined4 *)(puVar27 + -4) = 0x60b6ed;
          /* ST_CALLSITE[0060B6EA]: CALL dword ptr [EAX + 0x2c] */
          iVar17 = (*pcVar11)();
          if (iVar17 == 0x23) {
            puVar1[2] = 0;
            *(int **)(puVar28 + -4) = piVar10;
            *(undefined4 *)(puVar28 + -8) = 0x60b705;
            thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar28 + -4));
            puVar2 = (undefined4 *)(local_ac + iVar25 * 0xc);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
            iVar25 = iVar25 + 1;
            local_4c = iVar25;
          }
          local_6c = local_6c + 1;
          puVar27 = puVar28;
          puVar14 = local_ac;
          puVar15 = local_1c;
        } while (local_6c < local_88);
      }
    }
    iVar17 = 0;
    if (0 < local_88) {
      do {
        local_80 = 0;
        if (0 < iVar17) {
          do {
            puVar1 = (undefined4 *)(local_74 + iVar17 * 0xc);
            puVar2 = (undefined4 *)(local_74 + local_80 * 0xc);
            iVar25 = puVar2[2];
            if ((int)puVar1[2] < iVar25) {
              uVar20 = puVar2[1];
              uVar12 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar25;
              puVar1[1] = uVar20;
              *puVar1 = uVar12;
              local_58 = uVar20;
            }
            local_80 = local_80 + 1;
          } while (local_80 < iVar17);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < local_88);
    }
    local_84 = 0;
    local_6c = 0;
    if (0 < local_88) {
      do {
        pSVar29 = *(STFishC **)(local_74 + local_6c * 0xc);
        local_48 = 1;
        pvVar7 = pSVar29->vtable->slot_2C;
        *(undefined4 *)(puVar28 + -4) = 0x60b7c4;
        /* ST_CALLSITE[0060B7C1]: CALL dword ptr [EDX + 0x2c] */
        dVar19 = (*pvVar7)(pSVar29);
        if (((dVar19 != 0x23) && (local_4c != 0)) && (iVar17 = 0, 0 < local_4c)) {
          do {
            this = *(void **)(local_ac + iVar17 * 0xc);
            if ((STField<int>(this,0x24) == pSVar29->field_0024) &&
               (STField<int>(this,0x72e) != 0)) {
              *(short **)(puVar28 + -4) = local_20;
              *(short **)(puVar28 + -8) = local_94;
              *(short **)(puVar28 + -0xc) = local_50;
              *(undefined4 *)(puVar28 + -0x10) = 0x60b816;
              thunk_FUN_00416270(pSVar29,*(uint **)(puVar28 + -0xc),*(short **)(puVar28 + -8),
                                 *(short **)(puVar28 + -4));
              *(short **)(puVar28 + -4) = local_28;
              *(short **)(puVar28 + -8) = local_9c;
              *(short **)(puVar28 + -0xc) = local_60;
              *(undefined4 *)(puVar28 + -0x10) = 0x60b82c;
              thunk_FUN_00416270(this,*(uint **)(puVar28 + -0xc),*(short **)(puVar28 + -8),
                                 *(short **)(puVar28 + -4));
              *(int *)(puVar28 + -4) = (int)local_28[0];
              *(int *)(puVar28 + -8) = (int)local_9c[0];
              *(int *)(puVar28 + -0xc) = (int)local_60[0];
              *(int *)(puVar28 + -0x10) = (int)local_20[0];
              *(int *)(puVar28 + -0x14) = (int)local_94[0];
              *(int *)(puVar28 + -0x18) = (int)local_50[0];
              *(undefined4 *)(puVar28 + -0x1c) = 0x60b855;
              iVar19 = FUN_006acf0d(*(int *)(puVar28 + -0x18),*(int *)(puVar28 + -0x14),
                                    *(int *)(puVar28 + -0x10),*(int *)(puVar28 + -0xc),
                                    *(int *)(puVar28 + -8),*(int *)(puVar28 + -4));
              if (iVar19 < 0x3ee) {
                local_48 = 0;
                break;
              }
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < local_4c);
        }
        if ((local_48 != 0) && (*(int *)(local_74 + local_6c * 0xc + 8) != 0)) {
          *(short **)(puVar28 + -4) = local_20;
          *(short **)(puVar28 + -8) = local_94;
          *(short **)(puVar28 + -0xc) = local_50;
          *(undefined4 *)(puVar28 + -0x10) = 0x60b8c7;
          /* ST_CALLSITE[0060B8C2]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0
                    (pSVar29,*(short **)(puVar28 + -0xc),*(short **)(puVar28 + -8),
                     *(short **)(puVar28 + -4));
          *(int *)(puVar28 + -4) = (int)local_94[0];
          *(int *)(puVar28 + -8) = (int)local_50[0];
          *(int *)(puVar28 + -0xc) = local_8c;
          *(int *)(puVar28 + -0x10) = local_7c;
          *(undefined4 *)(puVar28 + -0x14) = 0x60b8e4;
          local_EAX_2543 =
               FUN_006acf90(*(int *)(puVar28 + -0x10),*(int *)(puVar28 + -0xc),
                            *(int *)(puVar28 + -8),*(int *)(puVar28 + -4));
          uVar21 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(param_1,0x1c) = uVar21;
          *(uint *)(puVar28 + -4) = local_EAX_2543 + (uVar21 >> 0x10) % (local_EAX_2543 * 3 + 1U);
          *(undefined4 *)(puVar28 + -8) = 0x60b916;
          local_EAX_2593 = thunk_FUN_004ad650((STT3DSprC *)&pSVar29->field_01D5);
          *(int *)(puVar28 + -8) = local_EAX_2593;
          *(undefined4 *)(puVar28 + -0xc) = 0x60b91c;
          thunk_FUN_00637d80(*(uint *)(puVar28 + -8),*(int *)(puVar28 + -4));
          *(STFishC **)(puVar28 + -4) = pSVar29;
          *(undefined4 *)(puVar28 + -8) = 0x60b927;
          thunk_FUN_0060bdd0(param_1,*(undefined4 **)(puVar28 + -4));
          if (g_sndUnderAttMeneg_00811798 != nullptr) {
            pvVar7 = pSVar29->vtable->slot_2C;
            *(undefined4 *)(puVar28 + -4) = 0x60b937;
            /* ST_CALLSITE[0060B934]: CALL dword ptr [EDX + 0x2c] */
            dVar19 = (*pvVar7)(pSVar29);
            *(dword *)(puVar28 + -4) = dVar19;
            *(undefined4 *)(puVar28 + -8) = pSVar29->field_0024;
            *(int *)(puVar28 + -0xc) = local_8c;
            *(int *)(puVar28 + -0x10) = local_7c;
            *(undefined4 *)(puVar28 + -0x14) = 0x60b952;
            /* ST_CALLSITE[0060B94D]: CALL 0x00401bbd; direct=00401BBD SndUnderAttMenegC::sub_006211E0 */
            SndUnderAttMenegC::sub_006211E0
                      (g_sndUnderAttMeneg_00811798,*(int *)(puVar28 + -0x10),
                       *(int *)(puVar28 + -0xc),*(uint *)(puVar28 + -8));
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

