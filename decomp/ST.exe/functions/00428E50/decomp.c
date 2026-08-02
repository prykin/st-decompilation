#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 589 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl FUN_00428e50(short *param_1)

{
  double dVar1;
  undefined2 uVar2;
  AnonShape_00428E50_DFCBD4F2 *pAVar3;
  DArrayTy *array;
  AnonShape_006DBCA0_EF06575F *pAVar4;
  ST3DSMAPContext *pSVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  void *pvVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  float10 fVar17;
  longlong lVar18;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  uint local_108 [4];
  int local_f8;
  int local_f4;
  uint local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b4;
  uint local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int *local_48;
  DArrayTy *local_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  ST3DSMAPContext *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  AnonShape_00428E50_DFCBD4F2 *local_10;
  byte local_9;
  int *local_8;

  pAVar4 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
  if (pAVar4 == nullptr) {
    local_30 = nullptr;
  }
  else {
    pSVar5 = (ST3DSMAPContext *)FUN_006dbca0(pAVar4);
    local_30 = pSVar5;
    if (pSVar5 != nullptr) goto LAB_00428e95;
  }
  pSVar5 = local_30;
  RaiseInternalException(-2,g_overwriteContext_007ED77C,"E:\\__titans\\tload.cpp",0x24d);
LAB_00428e95:
  dVar1 = ((double)DAT_00807570 * _DAT_00790590) / (double)_DAT_007ac580 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar18 = Library::MSVCRT::__ftol();
  iVar11 = (int)lVar18;
  uVar10 = iVar11 + 3U & 0xfffffffc;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  local_e8 = uVar10;
  local_14 = iVar11;
  fVar17 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_b4 = (double)((float10)_DAT_00790580 / fVar17);
  dVar1 = _DAT_00790570 / local_b4 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar18 = Library::MSVCRT::__ftol();
  local_c4 = (uint)lVar18;
  dVar1 = (double)local_14;
  local_14 = uVar10 - iVar11;
  ST3DSMAPContext::sub_006DC050
            (pSVar5,0,0,0,uVar10,local_c4,-14.14213562373,
             ((double)(int)(uVar10 - iVar11) * (_DAT_00790590 / dVar1) + _DAT_00790590) -
             _DAT_00790560,-10.0,(double)(int)local_c4 * local_b4 - _DAT_00790580,10.0,
             9.965999793052674,0);
  pSVar5->field_0128 = 0xff;
  pSVar5->field_0124 = 6;
  iVar11 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)((int)param_1 + 0x455)) {
    local_40 = (int *)((int)param_1 + 0x459);
    do {
      iVar7 = *local_40;
      if (iVar7 != 0) {
        puVar6 = Library::DKW::LIB::FUN_006aac10(*(uint *)(iVar7 + 0x24));
        *(undefined4 **)(iVar7 + 0x3c) = puVar6;
      }
      iVar11 = iVar11 + 1;
      local_40 = local_40 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar11 < *(int *)((int)param_1 + 0x455));
  }
  ST3DSMAPContext::sub_006DD610(pSVar5,0,10.0,10.0);
  local_d4 = 0x41200000;
  local_d0 = 0x41200000;
  local_cc = 0;
  ST3DSMAPContext::sub_006E25D0(pSVar5,&local_f8);
  ST3DSMAPContext::sub_006E25D0(pSVar5,&local_e4);
  pSVar5 = local_30;
  local_c8 = (local_f8 >> 0x10) - (local_e4 >> 0x10);
  local_48 = (int *)0xfffffffb;
  do {
    piVar12 = local_48;
    ST3DSMAPContext::sub_006E25D0(pSVar5,&local_e4);
    *(int *)(PTR_DAT_007a5250 + (int)piVar12 * 4) = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    local_48 = (int *)((int)piVar12 + 1);
  } while ((int)local_48 < 6);
  local_2c = 2;
  piVar12 = &DAT_007f4db8;
  do {
    local_14 = local_2c + -2;
    local_c0 = (double)((float)local_2c * _DAT_007904f8);
    local_b4 = (double)((float)local_14 * _DAT_007904f8);
    ST3DSMAPContext::sub_006E25D0(pSVar5,&local_e4);
    piVar12[-1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    ST3DSMAPContext::sub_006E25D0(pSVar5,&local_e4);
    *piVar12 = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    ST3DSMAPContext::sub_006E25D0(pSVar5,&local_e4);
    piVar12[1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    piVar12 = piVar12 + 3;
    local_2c = local_2c + 2;
  } while ((int)piVar12 < 0x7f4dc5);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_2c._1_3_ = (undefined3)((uint)local_2c >> 8);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_2c = CONCAT31(local_2c._1_3_,2);
  local_a4 = 0;
  local_9 = 1;
  local_40 = nullptr;
  do {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_50 = CONCAT31(uStack_4f,(byte)local_2c >> 1);
    ST3DSMAPContext::sub_006DD610(pSVar5,(uint)local_40,10.0,10.0);
    local_44 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x1c,10);
    DAT_007f4dd0 = 0;
    local_90 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)((int)param_1 + 0x455)) {
      local_28 = (int *)((int)param_1 + 0x459);
      do {
        puVar6 = (undefined4 *)*local_28;
        if (puVar6 != nullptr) {
          if (g_cLoading_00802A58 != nullptr) {
            local_a4 = local_a4 + 1;
            uVar10 = local_a4 & 0x8000000f;
            bVar16 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar16 = (uVar10 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar16) {
              cLoadingTy::SetState
                        (g_cLoading_00802A58,CASE_1,
                         (int)(local_a4 + ((int)local_a4 >> 0x1f & 0xfU)) >> 4,nullptr);
            }
          }
          uVar10 = 0;
          while( true ) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, uVar10) (runtime stride) */
            if ((local_44->count <= uVar10) ||
               (piVar12 = (int *)(local_44->elementSize * uVar10 + (int)local_44->data),
               piVar12 == nullptr)) goto LAB_004292e2;
            if (puVar6[10] == *piVar12) break;
            uVar10 = uVar10 + 1;
          }
          if (piVar12 != nullptr) {
            puVar6[6] = uVar10;
            iVar11 = 0;
            if (0 < (int)puVar6[9]) {
              do {
                if ((*(byte *)(piVar12[2] + iVar11) & local_50) != 0) {
                  *(byte *)(puVar6[0xf] + iVar11) = *(byte *)(puVar6[0xf] + iVar11) | local_50;
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < (int)puVar6[9]);
            }
            goto LAB_004293c6;
          }
LAB_004292e2:
          local_14 = (int)*(short *)((int)puVar6 + 6);
          uVar2 = *(undefined2 *)(puVar6 + 1);
          local_48 = (int *)(int)*(short *)(puVar6 + 2);
          *(undefined2 *)(puVar6 + 1) = 0;
          *(undefined2 *)((int)puVar6 + 6) = 0;
          *(ushort *)(puVar6 + 2) = (ushort)*(byte *)(puVar6 + 0x12);
          *puVar6 = pSVar5->field_0140;
          pSVar5->field_0140 = puVar6;
          pSVar5->field_013C = pSVar5->field_013C + 1;
          ST3DSMAPContext::sub_006DDBE0(pSVar5);
          ST3DSMAPContext::sub_006DDD50(pSVar5);
          pSVar5->field_0140 = nullptr;
          pSVar5->field_013C = 0;
          *(undefined2 *)((int)puVar6 + 6) = (undefined2)local_14;
          *(undefined2 *)(puVar6 + 2) = local_48._0_2_;
          *(undefined2 *)(puVar6 + 1) = uVar2;
          local_110 = thunk_FUN_00428b20((int *)pSVar5->field_000C,local_e8,local_c4,local_108);
          local_114 = puVar6[10];
          local_10c = puVar6[0xf];
          iVar11 = Library::DKW::TBL::DArrayAppend(local_44,&local_114);
          puVar6[6] = iVar11;
        }
LAB_004293c6:
        local_28 = local_28 + 1;
        local_90 = local_90 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (local_90 < *(int *)((int)param_1 + 0x455));
    }
    local_38 = (int)*param_1 / 2;
    if (local_40 == nullptr) {
      local_7c = 1;
      local_a8 = 1;
      local_6c = 1;
      local_74 = 1;
LAB_00429475:
      local_8c = 0;
      local_84 = 0;
    }
    else if (local_40 == (int *)0x1) {
      local_7c = 0;
      local_8c = -1;
      local_a8 = -1;
      local_6c = 1;
      local_74 = 0;
      local_84 = 1;
    }
    else {
      if (local_40 == (int *)0x2) {
        local_7c = -1;
        local_a8 = -1;
        local_6c = -1;
        local_74 = -1;
        goto LAB_00429475;
      }
      local_8c = 1;
      local_7c = 0;
      local_a8 = 1;
      local_6c = -1;
      local_74 = 0;
      local_84 = -1;
    }
    local_80 = local_38 * local_38;
    local_90 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)((int)param_1 + 0x455)) {
      local_48 = (int *)((int)param_1 + 0x459);
      do {
        pAVar3 = (AnonShape_00428E50_DFCBD4F2 *)*local_48;
        local_10 = pAVar3;
        if (pAVar3 != nullptr) {
          if (g_cLoading_00802A58 != nullptr) {
            local_a4 = local_a4 + 1;
            uVar10 = local_a4 & 0x8000000f;
            bVar16 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar16 = (uVar10 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar16) {
              cLoadingTy::SetState
                        (g_cLoading_00802A58,CASE_1,
                         (int)(local_a4 + ((int)local_a4 >> 0x1f & 0xfU)) >> 4,nullptr);
            }
          }
          if (*(uint *)&pAVar3->field_0x18 < local_44->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, *(uint *)&pAVar3->field_0x18) (runtime stride) */
            pvVar9 = (void *)(local_44->elementSize * *(uint *)&pAVar3->field_0x18 +
                             (int)local_44->data);
          }
          else {
            pvVar9 = nullptr;
          }
          local_64 = (int)*(short *)&pAVar3->field_0x4 / 2;
          uVar10 = (uint)(byte)pAVar3[1].field_0008;
          iVar7 = (int)pAVar3->field_0008;
          local_24 = iVar7 - uVar10;
          iVar11 = (int)*(short *)&pAVar3->field_0x6 / 2;
          if (((*(ushort *)&pAVar3[1].field_0xe & 0x2000) == 0) ||
             (local_ac = 0, (*(ushort *)&pAVar3[1].field_0xe & 0xf) != 0)) {
            local_ac = uVar10;
          }
          local_28 = (int *)(iVar11 * local_38);
          local_b8 = local_80 * 5;
          local_3c = 1;
          local_8 = (int *)((int)param_1 + ((int)local_28 + local_64 + local_b8) * 4 + 0x459);
          local_34 = 0;
          local_1c = 5;
          local_14 = iVar11;
          if (iVar7 < 5) {
LAB_0042958f:
            iVar11 = *local_8;
            if ((iVar11 == 0) ||
               (iVar14 = (int)*(short *)(iVar11 + 8) - (uint)*(byte *)(iVar11 + 0x48),
               iVar7 + 3 < iVar14)) goto cf_continue_loop_004296CF;
            if (*(uint *)(iVar11 + 0x18) < local_44->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              pvVar13 = (void *)(local_44->elementSize * *(uint *)(iVar11 + 0x18) +
                                (int)local_44->data);
            }
            else {
              pvVar13 = nullptr;
            }
            local_60 = *(int *)((int)pvVar13 + 0xc);
            local_5c = *(int *)((int)pvVar13 + 0x10) +
                       *(int *)(PTR_DAT_007a5250 + (iVar14 - local_24) * 4);
            local_58 = *(int *)((int)pvVar13 + 0x14);
            local_54 = *(undefined4 *)((int)pvVar13 + 0x18);
            local_18 = pvVar13;
            iVar11 = FUN_006b0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
            if (iVar11 == 0) goto cf_continue_loop_004296CF;
            if (2 < (int)local_10->field_0024) {
              iVar11 = *(int *)((int)pvVar9 + 0x14);
              local_20 = (undefined4 *)local_30->field_000C;
              iVar7 = *(int *)((int)pvVar9 + 0x10);
              iVar14 = *(int *)((int)pvVar9 + 0xc);
              local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar13 + 4)) - local_60
                         ) + local_a0;
              if (local_3c != 0) {
                uVar8 = *(int *)((int)pvVar9 + 0x18) * iVar11;
                puVar6 = *(undefined4 **)((int)pvVar9 + 4);
                puVar15 = local_20;
                for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar15 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar15 = puVar15 + 1;
                }
                local_3c = 0;
                for (uVar8 = uVar8 & 3; pvVar13 = local_18, uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined1 *)puVar15 = *(undefined1 *)puVar6;
                  puVar6 = (undefined4 *)((int)puVar6 + 1);
                  puVar15 = (undefined4 *)((int)puVar15 + 1);
                }
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                               local_a0 + ((local_9c - iVar7) * iVar11 - iVar14)),
                                          *(int *)((int)pvVar9 + 0x14),local_4c,
                                          *(int *)((int)pvVar13 + 0x14),local_98,local_94,
                                          local_10->field_003C,local_50);
              local_34 = local_34 | uVar10;
              goto cf_continue_loop_004296CF;
            }
            if (local_94 < 3) goto cf_continue_loop_004296CF;
            *(byte *)local_10->field_003C = *(byte *)local_10->field_003C | local_50;
            iVar11 = local_10->field_003C;
LAB_00429d7a:
            *(byte *)(iVar11 + 1) = *(byte *)(iVar11 + 1) | local_50;
            iVar7 = local_64;
            goto LAB_00429d7d;
          }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00429715:
          local_c0 = (double)CONCAT44(local_84 * local_38,(undefined4)local_c0);
          local_14 = local_6c * local_38;
          local_88 = &DAT_007a5248;
          iVar7 = (local_7c + iVar11) * local_38 + local_b8;
          local_70 = &DAT_007f4db8;
          do {
            local_78 = iVar11;
            local_68 = local_64;
            if ((((local_64 < 0) || (local_38 <= local_64)) || (iVar11 < 0)) || (local_38 <= iVar11)
               ) break;
            if (((-1 < local_64 + local_8c) && (local_64 + local_8c < local_38)) &&
               ((-1 < local_7c + iVar11 &&
                ((local_7c + iVar11 < local_38 &&
                 (local_8 = (int *)((int)param_1 + (local_8c + iVar7 + local_64) * 4 + 0x459),
                 local_24 < 5)))))) {
              local_1c = 5 - local_24;
              local_64 = iVar7;
              do {
                iVar11 = *local_8;
                if ((iVar11 != 0) &&
                   ((int)(((int)local_10->field_0008 - local_ac) + *local_88) <
                    (int)*(short *)(iVar11 + 8))) {
                  if (*(uint *)(iVar11 + 0x18) < local_44->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    pvVar13 = (void *)(local_44->elementSize * *(uint *)(iVar11 + 0x18) +
                                      (int)local_44->data);
                  }
                  else {
                    pvVar13 = nullptr;
                  }
                  local_60 = *(int *)((int)pvVar13 + 0xc) - local_c8;
                  local_5c = *(int *)((int)pvVar13 + 0x10) +
                             *(int *)(PTR_DAT_007a5250 +
                                     (((int)*(short *)(iVar11 + 8) - (uint)*(byte *)(iVar11 + 0x48))
                                     - local_24) * 4) + local_70[-1];
                  local_58 = *(int *)((int)pvVar13 + 0x14);
                  local_54 = *(undefined4 *)((int)pvVar13 + 0x18);
                  local_18 = pvVar13;
                  iVar11 = FUN_006b0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
                  if (iVar11 != 0) {
                    iVar11 = *(int *)((int)pvVar9 + 0x10);
                    iVar7 = *(int *)((int)pvVar9 + 0x14);
                    local_20 = (undefined4 *)local_30->field_000C;
                    iVar14 = *(int *)((int)pvVar9 + 0xc);
                    local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar13 + 4)) -
                               local_60) + local_a0;
                    if (local_3c != 0) {
                      uVar8 = *(int *)((int)pvVar9 + 0x18) * iVar7;
                      puVar6 = *(undefined4 **)((int)pvVar9 + 4);
                      puVar15 = local_20;
                      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                        *puVar15 = *puVar6;
                        puVar6 = puVar6 + 1;
                        puVar15 = puVar15 + 1;
                      }
                      local_3c = 0;
                      for (uVar8 = uVar8 & 3; pvVar13 = local_18, uVar8 != 0; uVar8 = uVar8 - 1) {
                        *(undefined1 *)puVar15 = *(undefined1 *)puVar6;
                        puVar6 = (undefined4 *)((int)puVar6 + 1);
                        puVar15 = (undefined4 *)((int)puVar15 + 1);
                      }
                    }
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                     local_a0 +
                                                     ((local_9c - iVar11) * iVar7 - iVar14)),
                                                *(int *)((int)pvVar9 + 0x14),local_4c,
                                                *(int *)((int)pvVar13 + 0x14),local_98,local_94,
                                                local_10->field_003C,(byte)_local_50);
                    local_34 = local_34 | uVar10;
                  }
                }
                local_8 = local_8 + -local_80;
                local_1c = local_1c + -1;
              } while (local_1c != 0);
              local_1c = 0;
              iVar7 = local_64;
            }
            local_64 = iVar7;
            iVar11 = local_a8 + local_68;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_b4 = (double)CONCAT44(iVar11,(undefined4)local_b4);
            if ((((-1 < iVar11) && (iVar11 < local_38)) && (-1 < local_6c + local_78)) &&
               (local_6c + local_78 < local_38)) {
              local_8 = (int *)((int)param_1 +
                               ((int)local_28 + local_b8 + local_a8 + local_68 + local_14) * 4 +
                               0x459);
              local_1c = 5;
              if (local_24 < 5) {
                do {
                  iVar11 = *local_8;
                  if ((iVar11 != 0) &&
                     ((int)(((int)local_10->field_0008 - local_ac) + *local_88) <
                      (int)*(short *)(iVar11 + 8))) {
                    if (*(uint *)(iVar11 + 0x18) < local_44->count) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                      pvVar13 = (void *)(local_44->elementSize * *(uint *)(iVar11 + 0x18) +
                                        (int)local_44->data);
                    }
                    else {
                      pvVar13 = nullptr;
                    }
                    local_60 = *(int *)((int)pvVar13 + 0xc);
                    local_5c = *(int *)((int)pvVar13 + 0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)*(short *)(iVar11 + 8) -
                                        (uint)*(byte *)(iVar11 + 0x48)) - local_24) * 4) + *local_70
                    ;
                    local_58 = *(int *)((int)pvVar13 + 0x14);
                    local_54 = *(undefined4 *)((int)pvVar13 + 0x18);
                    local_18 = pvVar13;
                    iVar11 = FUN_006b0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
                    if (iVar11 != 0) {
                      if ((int)local_10->field_0024 < 3) {
                        if (2 < local_94) {
                          *(byte *)local_10->field_003C = *(byte *)local_10->field_003C | local_50;
                          iVar11 = local_10->field_003C;
                          goto LAB_00429d7a;
                        }
                      }
                      else {
                        iVar11 = *(int *)((int)pvVar9 + 0x10);
                        iVar7 = *(int *)((int)pvVar9 + 0x14);
                        local_20 = (undefined4 *)local_30->field_000C;
                        iVar14 = *(int *)((int)pvVar9 + 0xc);
                        local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar13 + 4))
                                   - local_60) + local_a0;
                        if (local_3c != 0) {
                          uVar8 = *(int *)((int)pvVar9 + 0x18) * iVar7;
                          puVar6 = *(undefined4 **)((int)pvVar9 + 4);
                          puVar15 = local_20;
                          for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                            *puVar15 = *puVar6;
                            puVar6 = puVar6 + 1;
                            puVar15 = puVar15 + 1;
                          }
                          local_3c = 0;
                          for (uVar8 = uVar8 & 3; pvVar13 = local_18, uVar8 != 0; uVar8 = uVar8 - 1)
                          {
                            *(undefined1 *)puVar15 = *(undefined1 *)puVar6;
                            puVar6 = (undefined4 *)((int)puVar6 + 1);
                            puVar15 = (undefined4 *)((int)puVar15 + 1);
                          }
                        }
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                         local_a0 +
                                                         ((local_9c - iVar11) * iVar7 - iVar14)),
                                                    *(int *)((int)pvVar9 + 0x14),local_4c,
                                                    *(int *)((int)pvVar13 + 0x14),local_98,local_94,
                                                    local_10->field_003C,local_50);
                        local_34 = local_34 | uVar10;
                      }
                    }
                  }
                  local_8 = local_8 + -local_80;
                  local_1c = local_1c + -1;
                } while (local_24 < local_1c);
              }
            }
            if (((-1 < local_74 + local_68) && (local_74 + local_68 < local_38)) &&
               ((-1 < local_84 + local_78 && (local_84 + local_78 < local_38)))) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_8 = (int *)((int)param_1 +
                               ((int)local_28 + local_68 + local_74 + local_b8 + local_c0._4_4_) * 4
                               + 0x459);
              if (local_24 < 5) {
                local_1c = 5 - local_24;
                do {
                  iVar11 = *local_8;
                  if ((iVar11 != 0) &&
                     ((int)(((int)local_10->field_0008 - local_ac) + *local_88) <
                      (int)*(short *)(iVar11 + 8))) {
                    if (*(uint *)(iVar11 + 0x18) < local_44->count) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                      pvVar13 = (void *)(local_44->elementSize * *(uint *)(iVar11 + 0x18) +
                                        (int)local_44->data);
                    }
                    else {
                      pvVar13 = nullptr;
                    }
                    local_60 = *(int *)((int)pvVar13 + 0xc) + local_c8;
                    local_5c = *(int *)((int)pvVar13 + 0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)*(short *)(iVar11 + 8) -
                                        (uint)*(byte *)(iVar11 + 0x48)) - local_24) * 4) +
                               local_70[1];
                    local_58 = *(int *)((int)pvVar13 + 0x14);
                    local_54 = *(undefined4 *)((int)pvVar13 + 0x18);
                    local_18 = pvVar13;
                    iVar11 = FUN_006b0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
                    if (iVar11 != 0) {
                      iVar11 = *(int *)((int)pvVar9 + 0x10);
                      iVar7 = *(int *)((int)pvVar9 + 0x14);
                      local_20 = (undefined4 *)local_30->field_000C;
                      iVar14 = *(int *)((int)pvVar9 + 0xc);
                      local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar13 + 4)) -
                                 local_60) + local_a0;
                      if (local_3c != 0) {
                        uVar8 = *(int *)((int)pvVar9 + 0x18) * iVar7;
                        puVar6 = *(undefined4 **)((int)pvVar9 + 4);
                        puVar15 = local_20;
                        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                          *puVar15 = *puVar6;
                          puVar6 = puVar6 + 1;
                          puVar15 = puVar15 + 1;
                        }
                        local_3c = 0;
                        for (uVar8 = uVar8 & 3; pvVar13 = local_18, uVar8 != 0; uVar8 = uVar8 - 1) {
                          *(undefined1 *)puVar15 = *(undefined1 *)puVar6;
                          puVar6 = (undefined4 *)((int)puVar6 + 1);
                          puVar15 = (undefined4 *)((int)puVar15 + 1);
                        }
                      }
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                       local_a0 +
                                                       ((local_9c - iVar11) * iVar7 - iVar14)),
                                                  *(int *)((int)pvVar9 + 0x14),local_4c,
                                                  *(int *)((int)pvVar13 + 0x14),local_98,local_94,
                                                  local_10->field_003C,(byte)_local_50);
                      local_34 = local_34 | uVar10;
                    }
                  }
                  local_8 = local_8 + -local_80;
                  local_1c = local_1c + -1;
                } while (local_1c != 0);
              }
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_68 = local_b4._4_4_;
            local_28 = (int *)((int)local_28 + local_14);
            iVar7 = local_64 + local_14;
            iVar11 = local_78 + local_6c;
            local_70 = local_70 + 3;
            local_88 = local_88 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64 = local_b4._4_4_;
            local_78 = iVar11;
          } while ((int)local_88 < 0x7a524d);
LAB_00429d7d:
          local_64 = iVar7;
          pSVar5 = local_30;
          if (local_34 == 0) {
            iVar11 = 0;
            if (0 < (int)local_10->field_0024) {
              iVar7 = 0;
              do {
                if ((*(byte *)(local_10->field_0028 + iVar7) & local_9) != 0) {
                  *(byte *)(local_10->field_003C + iVar11) =
                       *(byte *)(local_10->field_003C + iVar11) | (byte)local_2c;
                }
                iVar11 = iVar11 + 1;
                iVar7 = iVar7 + 0x1c;
              } while (iVar11 < (int)local_10->field_0024);
            }
          }
          else {
            thunk_FUN_00428dc0((uint *)local_30->field_000C,*(int *)((int)pvVar9 + 0x14),
                               *(int *)((int)pvVar9 + 0x18),local_10->field_003C,
                               local_10->field_0024,(byte)local_2c);
          }
        }
        local_90 = local_90 + 1;
        local_48 = local_48 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (local_90 < *(int *)((int)param_1 + 0x455));
    }
    array = local_44;
    local_44->iteratorIndex = 0;
    while (uVar10 = array->iteratorIndex, uVar10 < array->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar10) (runtime stride) */
      pvVar9 = (void *)(array->elementSize * uVar10 + (int)array->data);
      array->iteratorIndex = uVar10 + 1;
      if (pvVar9 == nullptr) break;
      FUN_006a5e90(*(short **)((int)pvVar9 + 4));
    }
    DArrayDestroy(array);
    local_9 = local_9 << 1;
    local_40 = (int *)((int)local_40 + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_2c = CONCAT31(local_2c._1_3_,(byte)local_2c << 2);
    if (3 < (int)local_40) {
      if (pSVar5 != nullptr) {
        ST3DSMAPContext::sub_006DBCF0(pSVar5);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar5);
      }
      return;
    }
  } while( true );
cf_continue_loop_004296CF:
  local_8 = local_8 + -local_80;
  iVar7 = (int)local_10->field_0008;
  local_1c = local_1c + -1;
  iVar11 = local_14;
  if (local_1c <= iVar7) goto LAB_00429715;
  goto LAB_0042958f;
}

