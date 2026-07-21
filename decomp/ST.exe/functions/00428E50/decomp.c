
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
  double dVar4;
  DArrayTy *array;
  AnonShape_006DBCA0_EF06575F *pAVar5;
  AnonShape_006DDD50_309FA381 *pAVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  void *pvVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  float10 fVar18;
  longlong lVar19;
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
  AnonShape_006DDD50_309FA381 *local_30;
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

  pAVar5 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
  if (pAVar5 == (AnonShape_006DBCA0_EF06575F *)0x0) {
    local_30 = (AnonShape_006DDD50_309FA381 *)0x0;
  }
  else {
    pAVar6 = (AnonShape_006DDD50_309FA381 *)FUN_006dbca0(pAVar5);
    local_30 = pAVar6;
    if (pAVar6 != (AnonShape_006DDD50_309FA381 *)0x0) goto LAB_00428e95;
  }
  pAVar6 = local_30;
  RaiseInternalException(-2,g_overwriteContext_007ED77C,"E:\\__titans\\tload.cpp",0x24d);
LAB_00428e95:
  dVar1 = ((double)DAT_00807570 * _DAT_00790590) / (double)_DAT_007ac580 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar19 = Library::MSVCRT::__ftol();
  iVar12 = (int)lVar19;
  uVar11 = iVar12 + 3U & 0xfffffffc;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  local_e8 = uVar11;
  local_14 = iVar12;
  fVar18 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_b4 = (double)((float10)_DAT_00790580 / fVar18);
  dVar1 = _DAT_00790570 / local_b4 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar19 = Library::MSVCRT::__ftol();
  local_c4 = (uint)lVar19;
  dVar1 = (double)(int)local_c4 * local_b4 - _DAT_00790580;
  dVar4 = ((double)(int)(uVar11 - iVar12) * (_DAT_00790590 / (double)local_14) + _DAT_00790590) -
          _DAT_00790560;
  local_14 = uVar11 - iVar12;
  FUN_006dc050((AnonShape_006DC050_D52EE3EA *)pAVar6,0,0,0,uVar11,local_c4,0x1f08a9,0xc02c48c6,
               SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),0,0xc0240000,SUB84(dVar1,0),
               (int)((ulonglong)dVar1 >> 0x20),0x4024000000000000,0x4023ee97865e3540,0);
  *(undefined4 *)&pAVar6->field_0x128 = 0xff;
  pAVar6->field_0124 = 6;
  iVar12 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)((int)param_1 + 0x455)) {
    local_40 = (int *)((int)param_1 + 0x459);
    do {
      iVar8 = *local_40;
      if (iVar8 != 0) {
        puVar7 = Library::DKW::LIB::FUN_006aac10(*(uint *)(iVar8 + 0x24));
        *(undefined4 **)(iVar8 + 0x3c) = puVar7;
      }
      iVar12 = iVar12 + 1;
      local_40 = local_40 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar12 < *(int *)((int)param_1 + 0x455));
  }
  FUN_006dd610(pAVar6,0,0,0x40240000,0,0x40240000);
  local_d4 = 0x41200000;
  local_d0 = 0x41200000;
  local_cc = 0;
  FUN_006e25d0(pAVar6,&local_f8);
  FUN_006e25d0(pAVar6,&local_e4);
  pAVar6 = local_30;
  local_c8 = (local_f8 >> 0x10) - (local_e4 >> 0x10);
  local_48 = (int *)0xfffffffb;
  do {
    piVar13 = local_48;
    FUN_006e25d0(pAVar6,&local_e4);
    *(int *)(PTR_DAT_007a5250 + (int)piVar13 * 4) = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    local_48 = (int *)((int)piVar13 + 1);
  } while ((int)local_48 < 6);
  local_2c = 2;
  piVar13 = &DAT_007f4db8;
  do {
    local_14 = local_2c + -2;
    local_c0 = (double)((float)local_2c * _DAT_007904f8);
    local_b4 = (double)((float)local_14 * _DAT_007904f8);
    FUN_006e25d0(pAVar6,&local_e4);
    piVar13[-1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    FUN_006e25d0(pAVar6,&local_e4);
    *piVar13 = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    FUN_006e25d0(pAVar6,&local_e4);
    piVar13[1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    piVar13 = piVar13 + 3;
    local_2c = local_2c + 2;
  } while ((int)piVar13 < 0x7f4dc5);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_2c._1_3_ = (undefined3)((uint)local_2c >> 8);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_2c = CONCAT31(local_2c._1_3_,2);
  local_a4 = 0;
  local_9 = 1;
  local_40 = (int *)0x0;
  do {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_50 = CONCAT31(uStack_4f,(byte)local_2c >> 1);
    FUN_006dd610(pAVar6,(uint)local_40,0,0x40240000,0,0x40240000);
    local_44 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1c,10);
    DAT_007f4dd0 = 0;
    local_90 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)((int)param_1 + 0x455)) {
      local_28 = (int *)((int)param_1 + 0x459);
      do {
        puVar7 = (undefined4 *)*local_28;
        if (puVar7 != (undefined4 *)0x0) {
          if (PTR_00802a58 != (cLoadingTy *)0x0) {
            local_a4 = local_a4 + 1;
            uVar11 = local_a4 & 0x8000000f;
            bVar17 = uVar11 == 0;
            if ((int)uVar11 < 0) {
              bVar17 = (uVar11 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar17) {
              cLoadingTy::SetState
                        (PTR_00802a58,CASE_1,(int)(local_a4 + ((int)local_a4 >> 0x1f & 0xfU)) >> 4,
                         (char *)0x0);
            }
          }
          uVar11 = 0;
          while( true ) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, uVar11) (runtime stride) */
            if ((local_44->count <= uVar11) ||
               (piVar13 = (int *)(local_44->elementSize * uVar11 + (int)local_44->data),
               piVar13 == (int *)0x0)) goto LAB_004292e2;
            if (puVar7[10] == *piVar13) break;
            uVar11 = uVar11 + 1;
          }
          if (piVar13 != (int *)0x0) {
            puVar7[6] = uVar11;
            iVar12 = 0;
            if (0 < (int)puVar7[9]) {
              do {
                if ((*(byte *)(piVar13[2] + iVar12) & local_50) != 0) {
                  *(byte *)(puVar7[0xf] + iVar12) = *(byte *)(puVar7[0xf] + iVar12) | local_50;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < (int)puVar7[9]);
            }
            goto LAB_004293c6;
          }
LAB_004292e2:
          local_14 = (int)*(short *)((int)puVar7 + 6);
          uVar2 = *(undefined2 *)(puVar7 + 1);
          local_48 = (int *)(int)*(short *)(puVar7 + 2);
          *(undefined2 *)(puVar7 + 1) = 0;
          *(undefined2 *)((int)puVar7 + 6) = 0;
          *(ushort *)(puVar7 + 2) = (ushort)*(byte *)(puVar7 + 0x12);
          *puVar7 = pAVar6->field_0140;
          pAVar6->field_0140 = puVar7;
          pAVar6->field_013C = pAVar6->field_013C + 1;
          FUN_006ddbe0((AnonShape_006DDBE0_9835BAB9 *)pAVar6);
          FUN_006ddd50(pAVar6);
          pAVar6->field_0140 = 0;
          pAVar6->field_013C = 0;
          *(undefined2 *)((int)puVar7 + 6) = (undefined2)local_14;
          *(undefined2 *)(puVar7 + 2) = local_48._0_2_;
          *(undefined2 *)(puVar7 + 1) = uVar2;
          local_110 = thunk_FUN_00428b20((int *)pAVar6->field_000C,local_e8,local_c4,local_108);
          local_114 = puVar7[10];
          local_10c = puVar7[0xf];
          uVar11 = Library::DKW::TBL::FUN_006ae1c0(&local_44->flags,&local_114);
          puVar7[6] = uVar11;
        }
LAB_004293c6:
        local_28 = local_28 + 1;
        local_90 = local_90 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (local_90 < *(int *)((int)param_1 + 0x455));
    }
    local_38 = (int)*param_1 / 2;
    if (local_40 == (int *)0x0) {
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
        if (pAVar3 != (AnonShape_00428E50_DFCBD4F2 *)0x0) {
          if (PTR_00802a58 != (cLoadingTy *)0x0) {
            local_a4 = local_a4 + 1;
            uVar11 = local_a4 & 0x8000000f;
            bVar17 = uVar11 == 0;
            if ((int)uVar11 < 0) {
              bVar17 = (uVar11 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar17) {
              cLoadingTy::SetState
                        (PTR_00802a58,CASE_1,(int)(local_a4 + ((int)local_a4 >> 0x1f & 0xfU)) >> 4,
                         (char *)0x0);
            }
          }
          if (*(uint *)&pAVar3->field_0x18 < local_44->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, *(uint *)&pAVar3->field_0x18) (runtime stride) */
            pvVar10 = (void *)(local_44->elementSize * *(uint *)&pAVar3->field_0x18 +
                              (int)local_44->data);
          }
          else {
            pvVar10 = (void *)0x0;
          }
          local_64 = (int)*(short *)&pAVar3->field_0x4 / 2;
          uVar11 = (uint)(byte)pAVar3[1].field_0008;
          iVar8 = (int)pAVar3->field_0008;
          local_24 = iVar8 - uVar11;
          iVar12 = (int)*(short *)&pAVar3->field_0x6 / 2;
          if (((*(ushort *)&pAVar3[1].field_0xe & 0x2000) == 0) ||
             (local_ac = 0, (*(ushort *)&pAVar3[1].field_0xe & 0xf) != 0)) {
            local_ac = uVar11;
          }
          local_28 = (int *)(iVar12 * local_38);
          local_b8 = local_80 * 5;
          local_3c = 1;
          local_8 = (int *)((int)param_1 + ((int)local_28 + local_64 + local_b8) * 4 + 0x459);
          local_34 = 0;
          local_1c = 5;
          local_14 = iVar12;
          if (iVar8 < 5) {
LAB_0042958f:
            iVar12 = *local_8;
            if ((iVar12 == 0) ||
               (iVar15 = (int)*(short *)(iVar12 + 8) - (uint)*(byte *)(iVar12 + 0x48),
               iVar8 + 3 < iVar15)) goto cf_continue_loop_004296CF;
            if (*(uint *)(iVar12 + 0x18) < local_44->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              pvVar14 = (void *)(local_44->elementSize * *(uint *)(iVar12 + 0x18) +
                                (int)local_44->data);
            }
            else {
              pvVar14 = (void *)0x0;
            }
            local_60 = *(int *)((int)pvVar14 + 0xc);
            local_5c = *(int *)((int)pvVar14 + 0x10) +
                       *(int *)(PTR_DAT_007a5250 + (iVar15 - local_24) * 4);
            local_58 = *(int *)((int)pvVar14 + 0x14);
            local_54 = *(undefined4 *)((int)pvVar14 + 0x18);
            local_18 = pvVar14;
            iVar12 = FUN_006b0460(&local_a0,(int *)((int)pvVar10 + 0xc),&local_60);
            if (iVar12 == 0) goto cf_continue_loop_004296CF;
            if (2 < (int)local_10->field_0024) {
              iVar12 = *(int *)((int)pvVar10 + 0x14);
              local_20 = (undefined4 *)local_30->field_000C;
              iVar8 = *(int *)((int)pvVar10 + 0x10);
              iVar15 = *(int *)((int)pvVar10 + 0xc);
              local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar14 + 4)) - local_60
                         ) + local_a0;
              if (local_3c != 0) {
                uVar9 = *(int *)((int)pvVar10 + 0x18) * iVar12;
                puVar7 = *(undefined4 **)((int)pvVar10 + 4);
                puVar16 = local_20;
                for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *puVar16 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar16 = puVar16 + 1;
                }
                local_3c = 0;
                for (uVar9 = uVar9 & 3; pvVar14 = local_18, uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined1 *)puVar16 = *(undefined1 *)puVar7;
                  puVar7 = (undefined4 *)((int)puVar7 + 1);
                  puVar16 = (undefined4 *)((int)puVar16 + 1);
                }
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar11 = thunk_FUN_00428ce0((int)((int)local_20 +
                                               local_a0 + ((local_9c - iVar8) * iVar12 - iVar15)),
                                          *(int *)((int)pvVar10 + 0x14),local_4c,
                                          *(int *)((int)pvVar14 + 0x14),local_98,local_94,
                                          local_10->field_003C,local_50);
              local_34 = local_34 | uVar11;
              goto cf_continue_loop_004296CF;
            }
            if (local_94 < 3) goto cf_continue_loop_004296CF;
            *(byte *)local_10->field_003C = *(byte *)local_10->field_003C | local_50;
            iVar12 = local_10->field_003C;
LAB_00429d7a:
            *(byte *)(iVar12 + 1) = *(byte *)(iVar12 + 1) | local_50;
            iVar8 = local_64;
            goto LAB_00429d7d;
          }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00429715:
          local_c0 = (double)CONCAT44(local_84 * local_38,(undefined4)local_c0);
          local_14 = local_6c * local_38;
          local_88 = &DAT_007a5248;
          iVar8 = (local_7c + iVar12) * local_38 + local_b8;
          local_70 = &DAT_007f4db8;
          do {
            local_78 = iVar12;
            local_68 = local_64;
            if ((((local_64 < 0) || (local_38 <= local_64)) || (iVar12 < 0)) || (local_38 <= iVar12)
               ) break;
            if (((-1 < local_64 + local_8c) && (local_64 + local_8c < local_38)) &&
               ((-1 < local_7c + iVar12 &&
                ((local_7c + iVar12 < local_38 &&
                 (local_8 = (int *)((int)param_1 + (local_8c + iVar8 + local_64) * 4 + 0x459),
                 local_24 < 5)))))) {
              local_1c = 5 - local_24;
              local_64 = iVar8;
              do {
                iVar12 = *local_8;
                if ((iVar12 != 0) &&
                   ((int)(((int)local_10->field_0008 - local_ac) + *local_88) <
                    (int)*(short *)(iVar12 + 8))) {
                  if (*(uint *)(iVar12 + 0x18) < local_44->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    pvVar14 = (void *)(local_44->elementSize * *(uint *)(iVar12 + 0x18) +
                                      (int)local_44->data);
                  }
                  else {
                    pvVar14 = (void *)0x0;
                  }
                  local_60 = *(int *)((int)pvVar14 + 0xc) - local_c8;
                  local_5c = *(int *)((int)pvVar14 + 0x10) +
                             *(int *)(PTR_DAT_007a5250 +
                                     (((int)*(short *)(iVar12 + 8) - (uint)*(byte *)(iVar12 + 0x48))
                                     - local_24) * 4) + local_70[-1];
                  local_58 = *(int *)((int)pvVar14 + 0x14);
                  local_54 = *(undefined4 *)((int)pvVar14 + 0x18);
                  local_18 = pvVar14;
                  iVar12 = FUN_006b0460(&local_a0,(int *)((int)pvVar10 + 0xc),&local_60);
                  if (iVar12 != 0) {
                    iVar12 = *(int *)((int)pvVar10 + 0x10);
                    iVar8 = *(int *)((int)pvVar10 + 0x14);
                    local_20 = (undefined4 *)local_30->field_000C;
                    iVar15 = *(int *)((int)pvVar10 + 0xc);
                    local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar14 + 4)) -
                               local_60) + local_a0;
                    if (local_3c != 0) {
                      uVar9 = *(int *)((int)pvVar10 + 0x18) * iVar8;
                      puVar7 = *(undefined4 **)((int)pvVar10 + 4);
                      puVar16 = local_20;
                      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *puVar16 = *puVar7;
                        puVar7 = puVar7 + 1;
                        puVar16 = puVar16 + 1;
                      }
                      local_3c = 0;
                      for (uVar9 = uVar9 & 3; pvVar14 = local_18, uVar9 != 0; uVar9 = uVar9 - 1) {
                        *(undefined1 *)puVar16 = *(undefined1 *)puVar7;
                        puVar7 = (undefined4 *)((int)puVar7 + 1);
                        puVar16 = (undefined4 *)((int)puVar16 + 1);
                      }
                    }
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    uVar11 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                     local_a0 +
                                                     ((local_9c - iVar12) * iVar8 - iVar15)),
                                                *(int *)((int)pvVar10 + 0x14),local_4c,
                                                *(int *)((int)pvVar14 + 0x14),local_98,local_94,
                                                local_10->field_003C,(byte)_local_50);
                    local_34 = local_34 | uVar11;
                  }
                }
                local_8 = local_8 + -local_80;
                local_1c = local_1c + -1;
              } while (local_1c != 0);
              local_1c = 0;
              iVar8 = local_64;
            }
            local_64 = iVar8;
            iVar12 = local_a8 + local_68;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_b4 = (double)CONCAT44(iVar12,(undefined4)local_b4);
            if ((((-1 < iVar12) && (iVar12 < local_38)) && (-1 < local_6c + local_78)) &&
               (local_6c + local_78 < local_38)) {
              local_8 = (int *)((int)param_1 +
                               ((int)local_28 + local_b8 + local_a8 + local_68 + local_14) * 4 +
                               0x459);
              local_1c = 5;
              if (local_24 < 5) {
                do {
                  iVar12 = *local_8;
                  if ((iVar12 != 0) &&
                     ((int)(((int)local_10->field_0008 - local_ac) + *local_88) <
                      (int)*(short *)(iVar12 + 8))) {
                    if (*(uint *)(iVar12 + 0x18) < local_44->count) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                      pvVar14 = (void *)(local_44->elementSize * *(uint *)(iVar12 + 0x18) +
                                        (int)local_44->data);
                    }
                    else {
                      pvVar14 = (void *)0x0;
                    }
                    local_60 = *(int *)((int)pvVar14 + 0xc);
                    local_5c = *(int *)((int)pvVar14 + 0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)*(short *)(iVar12 + 8) -
                                        (uint)*(byte *)(iVar12 + 0x48)) - local_24) * 4) + *local_70
                    ;
                    local_58 = *(int *)((int)pvVar14 + 0x14);
                    local_54 = *(undefined4 *)((int)pvVar14 + 0x18);
                    local_18 = pvVar14;
                    iVar12 = FUN_006b0460(&local_a0,(int *)((int)pvVar10 + 0xc),&local_60);
                    if (iVar12 != 0) {
                      if ((int)local_10->field_0024 < 3) {
                        if (2 < local_94) {
                          *(byte *)local_10->field_003C = *(byte *)local_10->field_003C | local_50;
                          iVar12 = local_10->field_003C;
                          goto LAB_00429d7a;
                        }
                      }
                      else {
                        iVar12 = *(int *)((int)pvVar10 + 0x10);
                        iVar8 = *(int *)((int)pvVar10 + 0x14);
                        local_20 = (undefined4 *)local_30->field_000C;
                        iVar15 = *(int *)((int)pvVar10 + 0xc);
                        local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar14 + 4))
                                   - local_60) + local_a0;
                        if (local_3c != 0) {
                          uVar9 = *(int *)((int)pvVar10 + 0x18) * iVar8;
                          puVar7 = *(undefined4 **)((int)pvVar10 + 4);
                          puVar16 = local_20;
                          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                            *puVar16 = *puVar7;
                            puVar7 = puVar7 + 1;
                            puVar16 = puVar16 + 1;
                          }
                          local_3c = 0;
                          for (uVar9 = uVar9 & 3; pvVar14 = local_18, uVar9 != 0; uVar9 = uVar9 - 1)
                          {
                            *(undefined1 *)puVar16 = *(undefined1 *)puVar7;
                            puVar7 = (undefined4 *)((int)puVar7 + 1);
                            puVar16 = (undefined4 *)((int)puVar16 + 1);
                          }
                        }
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        uVar11 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                         local_a0 +
                                                         ((local_9c - iVar12) * iVar8 - iVar15)),
                                                    *(int *)((int)pvVar10 + 0x14),local_4c,
                                                    *(int *)((int)pvVar14 + 0x14),local_98,local_94,
                                                    local_10->field_003C,local_50);
                        local_34 = local_34 | uVar11;
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
                  iVar12 = *local_8;
                  if ((iVar12 != 0) &&
                     ((int)(((int)local_10->field_0008 - local_ac) + *local_88) <
                      (int)*(short *)(iVar12 + 8))) {
                    if (*(uint *)(iVar12 + 0x18) < local_44->count) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                      pvVar14 = (void *)(local_44->elementSize * *(uint *)(iVar12 + 0x18) +
                                        (int)local_44->data);
                    }
                    else {
                      pvVar14 = (void *)0x0;
                    }
                    local_60 = *(int *)((int)pvVar14 + 0xc) + local_c8;
                    local_5c = *(int *)((int)pvVar14 + 0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)*(short *)(iVar12 + 8) -
                                        (uint)*(byte *)(iVar12 + 0x48)) - local_24) * 4) +
                               local_70[1];
                    local_58 = *(int *)((int)pvVar14 + 0x14);
                    local_54 = *(undefined4 *)((int)pvVar14 + 0x18);
                    local_18 = pvVar14;
                    iVar12 = FUN_006b0460(&local_a0,(int *)((int)pvVar10 + 0xc),&local_60);
                    if (iVar12 != 0) {
                      iVar12 = *(int *)((int)pvVar10 + 0x10);
                      iVar8 = *(int *)((int)pvVar10 + 0x14);
                      local_20 = (undefined4 *)local_30->field_000C;
                      iVar15 = *(int *)((int)pvVar10 + 0xc);
                      local_4c = (((local_9c - local_5c) * local_58 + *(int *)((int)pvVar14 + 4)) -
                                 local_60) + local_a0;
                      if (local_3c != 0) {
                        uVar9 = *(int *)((int)pvVar10 + 0x18) * iVar8;
                        puVar7 = *(undefined4 **)((int)pvVar10 + 4);
                        puVar16 = local_20;
                        for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                          *puVar16 = *puVar7;
                          puVar7 = puVar7 + 1;
                          puVar16 = puVar16 + 1;
                        }
                        local_3c = 0;
                        for (uVar9 = uVar9 & 3; pvVar14 = local_18, uVar9 != 0; uVar9 = uVar9 - 1) {
                          *(undefined1 *)puVar16 = *(undefined1 *)puVar7;
                          puVar7 = (undefined4 *)((int)puVar7 + 1);
                          puVar16 = (undefined4 *)((int)puVar16 + 1);
                        }
                      }
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      uVar11 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                       local_a0 +
                                                       ((local_9c - iVar12) * iVar8 - iVar15)),
                                                  *(int *)((int)pvVar10 + 0x14),local_4c,
                                                  *(int *)((int)pvVar14 + 0x14),local_98,local_94,
                                                  local_10->field_003C,(byte)_local_50);
                      local_34 = local_34 | uVar11;
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
            iVar8 = local_64 + local_14;
            iVar12 = local_78 + local_6c;
            local_70 = local_70 + 3;
            local_88 = local_88 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_64 = local_b4._4_4_;
            local_78 = iVar12;
          } while ((int)local_88 < 0x7a524d);
LAB_00429d7d:
          local_64 = iVar8;
          pAVar6 = local_30;
          if (local_34 == 0) {
            iVar12 = 0;
            if (0 < (int)local_10->field_0024) {
              iVar8 = 0;
              do {
                if ((*(byte *)(local_10->field_0028 + iVar8) & local_9) != 0) {
                  *(byte *)(local_10->field_003C + iVar12) =
                       *(byte *)(local_10->field_003C + iVar12) | (byte)local_2c;
                }
                iVar12 = iVar12 + 1;
                iVar8 = iVar8 + 0x1c;
              } while (iVar12 < (int)local_10->field_0024);
            }
          }
          else {
            thunk_FUN_00428dc0((uint *)local_30->field_000C,*(int *)((int)pvVar10 + 0x14),
                               *(int *)((int)pvVar10 + 0x18),local_10->field_003C,
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
    while (uVar11 = array->iteratorIndex, uVar11 < array->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar11) (runtime stride) */
      pvVar10 = (void *)(array->elementSize * uVar11 + (int)array->data);
      array->iteratorIndex = uVar11 + 1;
      if (pvVar10 == (void *)0x0) break;
      FUN_006a5e90(*(short **)((int)pvVar10 + 4));
    }
    DArrayDestroy(array);
    local_9 = local_9 << 1;
    local_40 = (int *)((int)local_40 + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_2c = CONCAT31(local_2c._1_3_,(byte)local_2c << 2);
    if (3 < (int)local_40) {
      if (pAVar6 != (AnonShape_006DDD50_309FA381 *)0x0) {
        FUN_006dbcf0((int *)pAVar6);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)pAVar6);
      }
      return;
    }
  } while( true );
cf_continue_loop_004296CF:
  local_8 = local_8 + -local_80;
  iVar8 = (int)local_10->field_0008;
  local_1c = local_1c + -1;
  iVar12 = local_14;
  if (local_1c <= iVar8) goto LAB_00429715;
  goto LAB_0042958f;
}

