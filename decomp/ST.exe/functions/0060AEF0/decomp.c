#include "../../pseudocode_runtime.h"


int __fastcall FUN_0060aef0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  undefined4 uVar7;
  void *this;
  VisibleClassTy *pVVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  short sVar11;
  int iVar13;
  dword dVar14;
  undefined4 uVar16;
  int local_EAX_1165;
  int iVar12;
  int uVar15;
  int iVar19;
  int local_EAX_2543;
  uint uVar17;
  int local_EAX_2593;
  short sVar18;
  short sVar19;
  int iVar20;
  STFishC *pSVar21;
  int iVar22;
  bool bVar23;
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
  undefined1 *local_ac;
  undefined1 *local_a8;
  int local_a4;
  short local_a0 [2];
  short local_9c [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined1 *local_74;
  short local_70 [2];
  int local_6c;
  int local_68;
  short local_60 [4];
  undefined4 local_58;
  uint local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  short local_34 [6];
  short local_28 [2];
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
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
  puVar9 = &stack0xfffffef8;
  if (STField<int>(param_1,0x1f5) == 0x42) {
    ExceptionList = &local_14;
    iVar13 = thunk_FUN_004e60d0(STField<int>(param_1,0x1d9),0x1c);
    if (iVar13 == 0) {
      iVar13 = DAT_007950ec / 0xc9;
    }
    else {
      iVar13 = DAT_007950ec / 0xc9 + 2;
    }
    STField<int>(param_1,0x24c) = iVar13;
    puVar9 = local_1c;
  }
  local_1c = puVar9;
  iVar13 = STField<int>(param_1,0x1e9);
  sVar19 = (short)(iVar13 >> 0x1f);
  if (iVar13 < 0) {
    local_7c = (short)(((short)(iVar13 / 0xc9) + sVar19) -
                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_7c = (int)(short)(((short)(iVar13 / 0xc9) + sVar19) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
  }
  iVar13 = STField<int>(param_1,0x1ed);
  sVar19 = (short)(iVar13 >> 0x1f);
  if (iVar13 < 0) {
    local_8c = (short)(((short)(iVar13 / 0xc9) + sVar19) -
                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8c = (int)(short)(((short)(iVar13 / 0xc9) + sVar19) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
  }
  iVar13 = STField<int>(param_1,0x24c);
  iVar20 = local_8c - iVar13;
  if (iVar20 < 0) {
    iVar20 = 0;
  }
  local_24 = local_7c - iVar13;
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar22 = iVar13 + 1 + local_8c;
  if (g_worldGrid.sizeY < iVar22) {
    iVar22 = (int)g_worldGrid.sizeY;
  }
  local_68 = iVar13 + 1 + local_7c;
  if (g_worldGrid.sizeX < local_68) {
    local_68 = (int)g_worldGrid.sizeX;
  }
  local_8 = 0;
  local_78 = iVar22;
  Library::MSVCRT::FUN_0072da40();
  local_a8 = &stack0xfffffef8;
  if (STField<int>(param_1,0x1f5) == 0x43) {
    local_8 = 1;
    local_a8 = &stack0xfffffef8;
    local_1c = &stack0xfffffef8;
    Library::MSVCRT::FUN_0072da40();
    local_74 = &stack0xfffffef8;
  }
  local_1c = &stack0xfffffef8;
  local_8 = 0xffffffff;
  local_a4 = 0;
  local_40 = iVar20;
  if (iVar20 < iVar22) {
    do {
      local_98 = local_24;
      if (local_24 < local_68) {
        do {
          local_3c = 0;
          do {
            sVar19 = (short)local_98;
            if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) ||
                 (sVar18 = (short)local_40, sVar18 < 0)) ||
                ((g_worldGrid.sizeY <= sVar18 || (sVar11 = (short)local_3c, sVar11 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar11)) {
              pSVar21 = nullptr;
            }
            else {
              pSVar21 = (STFishC *)
                        STGridAt3D(g_worldGrid, sVar19, sVar18, sVar11).objects[0];
            }
            if ((pSVar21 != nullptr) &&
               (iVar13 = pSVar21->vfunc_F0(), iVar13 != 0)) {
              if ((*(int *)&pSVar21->field_0x20 == 1000) &&
                 (dVar14 = pSVar21->slot_2C(),
                 *(int *)(&DAT_00791d68 + dVar14 * 4) == 1)) {
                bVar23 = false;
                iVar13 = 0;
                if (0 < local_a4) {
                  do {
                    if (*(int *)(local_a8 + iVar13 * 4) == pSVar21->field_0018) {
                      bVar23 = true;
                      break;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < local_a4);
                }
                if (bVar23) goto cf_continue_loop_0060B649;
                *(undefined4 *)(local_a8 + local_a4 * 4) = pSVar21->field_0018;
                local_a4 = local_a4 + 1;
              }
              uVar17 = pSVar21->field_0024;
              if (STField<int>(param_1,0x1f5) == 0x43) {
                if ((uVar17 < 8) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[uVar17].field_0022 < 8)))) {
                  bVar3 = *(byte *)&pSVar21->field_0024;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_b8 = CONCAT31(uStack_b7,bVar3);
                  bVar4 = STField<byte>(param_1,0x1d9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_b4 = CONCAT31(uStack_b3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b2ce:
                      iVar13 = 0;
                    }
                    else {
                      bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                      if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -2;
                      }
                      else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -1;
                      }
                      else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                        iVar13 = 1;
                      }
                      else {
                        if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                        goto LAB_0060b2ce;
                        iVar13 = 2;
                      }
                    }
                    bVar23 = iVar13 < 0;
                  }
                  else {
                    bVar23 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  if ((bVar23) && (iVar13 = (*pSVar21->vtable->vfunc_F8)(), iVar13 != 0)) {
                    puVar1 = (undefined4 *)(local_74 + local_88 * 0xc);
                    *puVar1 = pSVar21;
                    uVar16 = (*pSVar21->vtable->vfunc_78)();
                    puVar1[1] = uVar16;
                    iVar13 = STField<int>(param_1,0x1ed);
                    sVar19 = (short)(iVar13 >> 0x1f);
                    if (iVar13 < 0) {
                      iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar19) -
                                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar19) -
                                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
                    }
                    iVar20 = STField<int>(param_1,0x1e9);
                    sVar19 = (short)(iVar20 >> 0x1f);
                    if (iVar20 < 0) {
                      iVar20 = (short)(((short)(iVar20 / 0xc9) + sVar19) -
                                      (short)((longlong)iVar20 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar20 = (int)(short)(((short)(iVar20 / 0xc9) + sVar19) -
                                           (short)((longlong)iVar20 * 0x28c1979 >> 0x3f));
                    }
                    local_EAX_1165 = FUN_006acf90(local_98,local_40,iVar20,iVar13);
                    puVar1[2] = local_EAX_1165;
                    dVar14 = pSVar21->slot_2C();
                    if (dVar14 == 0x23) {
                      local_4c = local_4c + 1;
                    }
                    goto LAB_0060b643;
                  }
                }
              }
              else {
                if ((uVar17 < 8) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[uVar17].field_0022 < 8)))) {
                  bVar3 = *(byte *)&pSVar21->field_0024;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_c8 = CONCAT31(uStack_c7,bVar3);
                  bVar4 = STField<byte>(param_1,0x1d9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_c4 = CONCAT31(uStack_c3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b48b:
                      iVar13 = 0;
                    }
                    else {
                      bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                      if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -2;
                      }
                      else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -1;
                      }
                      else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                        iVar13 = 1;
                      }
                      else {
                        if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                        goto LAB_0060b48b;
                        iVar13 = 2;
                      }
                    }
                    bVar23 = iVar13 < 0;
                  }
                  else {
                    bVar23 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  if (bVar23) {
                    iVar13 = (*pSVar21->vtable->vfunc_F8)();
                    if ((iVar13 != 0) && (STField<int>(param_1,0x1f5) != 0x4c)) {
                      thunk_FUN_0060bdd0(param_1,&pSVar21->vtable);
                      goto LAB_0060b643;
                    }
                    goto cf_continue_loop_0060B649;
                  }
                }
                if (STField<int>(param_1,0x1f5) == 0x4c) {
                  thunk_FUN_0060bdd0(param_1,&pSVar21->vtable);
                  iVar12 = FUN_006acf90(local_7c,local_8c,local_98,local_40);
                  uVar17 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
                  STField<uint>(param_1,0x1c) = uVar17;
                  iVar13 = iVar12 + (uVar17 >> 0x10) % (iVar12 * 3 + 1U);
                  STFishC::sub_004162B0(pSVar21,local_70,local_a0,local_34);
                  pVVar8 = g_visibleClass_00802A88;
                  if (g_visibleClass_00802A88 != nullptr) {
                    iVar20 = (int)local_34[0];
                    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                        (VisibleClassTy::sub_00558C00
                                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                    (int)local_70[0],(int)local_a0[0],local_d4,&local_d8),
                        iVar20 < 0)) || (4 < iVar20)) {
                      bVar23 = true;
                    }
                    else {
                      if (((local_d4[0] < 0) || ((int)pVVar8->field_0030 <= local_d4[0])) ||
                         ((local_d8 + g_centeredOffsets5[iVar20] < 0 ||
                          (pVVar8->field_0034 <= local_d8 + g_centeredOffsets5[iVar20])))) {
                        bVar23 = false;
                      }
                      else {
                        bVar23 = true;
                      }
                      if ((bVar23) && (pVVar8->field_004C != nullptr)) {
                        bVar23 = pVVar8->field_004C
                                 [local_d4[0] +
                                  (g_centeredOffsets5[iVar20] + local_d8) * pVVar8->field_0030] != 0
                        ;
                      }
                      else {
                        bVar23 = true;
                      }
                    }
                    if (bVar23) {
                      dVar14 = pSVar21->slot_2C();
                      uVar17 = (uint)(*(int *)(&DAT_00791d68 + dVar14 * 4) == 1);
                      uVar15 = thunk_FUN_004ad650((STT3DSprC *)&pSVar21->field_01D5);
                      thunk_FUN_00637f40(uVar15,uVar17,iVar13);
                    }
                  }
LAB_0060b643:
                  local_88 = local_88 + 1;
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
    if (local_4c != 0) {
      local_8 = 2;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      iVar13 = 0;
      local_4c = 0;
      local_6c = 0;
      local_ac = &stack0xfffffef8;
      puVar9 = &stack0xfffffef8;
      local_1c = &stack0xfffffef8;
      puVar10 = &stack0xfffffef8;
      if (0 < local_88) {
        do {
          local_1c = puVar10;
          local_ac = puVar9;
          puVar1 = (undefined4 *)(local_74 + local_6c * 0xc);
          piVar6 = (int *)*puVar1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar20 = (**(code **)(*piVar6 + 0x2c))();
          if (iVar20 == 0x23) {
            puVar1[2] = 0;
            thunk_FUN_0060bdd0(param_1,piVar6);
            puVar2 = (undefined4 *)(local_ac + iVar13 * 0xc);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
            iVar13 = iVar13 + 1;
            local_4c = iVar13;
          }
          local_6c = local_6c + 1;
          puVar9 = local_ac;
          puVar10 = local_1c;
        } while (local_6c < local_88);
      }
    }
    iVar13 = 0;
    if (0 < local_88) {
      do {
        local_80 = 0;
        if (0 < iVar13) {
          do {
            puVar1 = (undefined4 *)(local_74 + iVar13 * 0xc);
            puVar2 = (undefined4 *)(local_74 + local_80 * 0xc);
            iVar20 = puVar2[2];
            if ((int)puVar1[2] < iVar20) {
              uVar16 = puVar2[1];
              uVar7 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar20;
              puVar1[1] = uVar16;
              *puVar1 = uVar7;
              local_58 = uVar16;
            }
            local_80 = local_80 + 1;
          } while (local_80 < iVar13);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_88);
    }
    local_84 = 0;
    local_6c = 0;
    if (0 < local_88) {
      do {
        pSVar21 = *(STFishC **)(local_74 + local_6c * 0xc);
        local_48 = 1;
        dVar14 = pSVar21->slot_2C();
        if (((dVar14 != 0x23) && (local_4c != 0)) && (iVar13 = 0, 0 < local_4c)) {
          do {
            this = *(void **)(local_ac + iVar13 * 0xc);
            if ((STField<int>(this,0x24) == pSVar21->field_0024) &&
               (STField<int>(this,0x72e) != 0)) {
              thunk_FUN_00416270(pSVar21,&local_50,local_94,local_20);
              thunk_FUN_00416270(this,(uint *)local_60,(int *)local_9c,local_28);
              iVar19 = FUN_006acf0d((int)(short)local_50,(int)(short)local_94[0],(int)local_20[0],
                                    (int)local_60[0],(int)local_9c[0],(int)local_28[0]);
              if (iVar19 < 0x3ee) {
                local_48 = 0;
                break;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < local_4c);
        }
        if ((local_48 != 0) && (*(int *)(local_74 + local_6c * 0xc + 8) != 0)) {
          STFishC::sub_004162B0(pSVar21,(short *)&local_50,(short *)local_94,local_20);
          local_EAX_2543 =
               FUN_006acf90(local_7c,local_8c,(int)(short)local_50,(int)(short)local_94[0]);
          uVar17 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(param_1,0x1c) = uVar17;
          iVar13 = local_EAX_2543 + (uVar17 >> 0x10) % (local_EAX_2543 * 3 + 1U);
          local_EAX_2593 = thunk_FUN_004ad650((STT3DSprC *)&pSVar21->field_01D5);
          thunk_FUN_00637d80(local_EAX_2593,iVar13);
          thunk_FUN_0060bdd0(param_1,&pSVar21->vtable);
          if (DAT_00811798 != nullptr) {
            pSVar21->slot_2C();
            thunk_FUN_006211e0(DAT_00811798,local_7c,local_8c,pSVar21->field_0024);
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

