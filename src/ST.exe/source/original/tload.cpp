#include "st/generated.hpp"
// Generated translation unit: source/original/tload.cpp

// 00428E50 FUN_00428e50
#line 4 "decomp/ST.exe/functions/00428E50/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 589 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl st::fn_00428E50(RecoveredRecord_00428E50_9DEE1150 *param_1)

{
  int scalar_local_28;
  uint32_t _local_50;

  double dVar1;
  short sVar2;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar3;
  AnonShape_00428E50_DFCBD4F2 *pAVar4;
  uint uVar5;
  RecoveredRecord_00428E50_9DEE1150 *pRVar6;
  DArrayTy *array;
  AnonShape_006DBCA0_EF06575F *pAVar7;
  ST3DSMAPContext *pSVar8;
  void *pvVar9;
  int iVar13;
  int iVar10;
  int uVar13_mg6;
  int uVar13_mg8;
  int uVar13_mgA;
  int uVar13_mgC;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  void *pvVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  bool bVar20;
  float10 fVar21;
  longlong lVar22;
  int local_114;
  int local_110;
  int local_10c;
  uint local_108 [4];
  int local_f8;
  int local_f4;
  uint local_e8;
  int local_e4;
  int local_e0;
  float local_d4 [3];
  int local_c8;
  uint local_c4;
  ulonglong local_c0;
  int local_b8;
  ulonglong local_b4;
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
  uint local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  RecoveredRecord_00428E50_9DEE1150 *local_48;
  DArrayTy *local_44;
  RecoveredRecord_00428E50_9DEE1150 *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  ST3DSMAPContext *local_30;
  int local_2c;
  RecoveredRecord_00428E50_9DEE1150 *local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  AnonShape_00428E50_DFCBD4F2 *local_10;
  byte local_9;
  int *local_8;
  double dVar1_mg1;
  double dVar1_mg3;
  double dVar1_mg2;

  /* ST_CALLSITE[00428E61]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F;/uint */
  pAVar7 = st::pointer_boundary_cast<AnonShape_006DBCA0_EF06575F *>(st::fn_006B04D0(0x4f2));
  if (pAVar7 == nullptr) {
    local_30 = nullptr;
  }
  else {
    pSVar8 = reinterpret_cast<ST3DSMAPContext *>(st::fn_006DBCA0(pAVar7));
    local_30 = pSVar8;
    if (pSVar8 != nullptr) goto LAB_00428e95;
  }
  pSVar8 = local_30;
  st::fn_006A5E40(-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\tload.cpp"),0x24d);
LAB_00428e95:
  dVar1_mg1 = ((double)DAT_00807570 * _DAT_00790590) / (double)_DAT_007ac580 + _DAT_007901c0;
  st::fn_0072E150(SUB84(dVar1_mg1,0),(uint)((ulonglong)dVar1_mg1 >> 0x20));
  lVar22 = st::fn_0072E288();
  iVar14 = (int)lVar22;
  uVar13 = iVar14 + 3U & 0xfffffffc;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  local_e8 = uVar13;
  local_14 = iVar14;
  fVar21 = st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_b4 = (double)((float10)_DAT_00790580 / fVar21);
  dVar1_mg2 = _DAT_00790570 / local_b4 + _DAT_007901c0;
  st::fn_0072E150(SUB84(dVar1_mg2,0),(uint)((ulonglong)dVar1_mg2 >> 0x20));
  lVar22 = st::fn_0072E288();
  local_c4 = (uint)lVar22;
  dVar1_mg3 = (double)local_14;
  local_14 = uVar13 - iVar14;
  st::fn_006DC050
            (pSVar8,nullptr,0,0,uVar13,local_c4,-14.14213562373,
             ((double)(int)(uVar13 - iVar14) * (_DAT_00790590 / dVar1_mg3) + _DAT_00790590) -
             _DAT_00790560,-10.0,(double)(int)local_c4 * local_b4 - _DAT_00790580,10.0,
             9.965999793052674,0);
  pSVar8->field_0128 = 0xff;
  pSVar8->field_0124 = 6;
  iVar14 = 0;
  if (0 < param_1->field_0455) {
    local_40 = param_1 + 1;
    do {
      iVar10 = *(int *)local_40;
      if (iVar10 != 0) {

        pvVar9 = st::fn_006AAC10(STField<uint>(iVar10,0x24));
        *(void **)(iVar10 + 0x3c) = pvVar9;
      }
      iVar14 = iVar14 + 1;
      local_40 = reinterpret_cast<RecoveredRecord_00428E50_9DEE1150 *>(reinterpret_cast<byte *>(local_40) + 0x4);
    } while (iVar14 < param_1->field_0455);
  }
  st::fn_006DD610(pSVar8,CASE_0,10.0,10.0);
  local_d4[0] = 10.0;
  local_d4[1] = 10.0;
  local_d4[2] = 0.0;

  st::fn_006E25D0(pSVar8,&local_f8,local_d4,0.0,0.0,0.0,1);

  st::fn_006E25D0(pSVar8,&local_e4,local_d4,0.0,20.0,0.0,1);
  pSVar8 = local_30;
  local_c8 = (local_f8 >> 0x10) - (local_e4 >> 0x10);
  local_48 = (RecoveredRecord_00428E50_9DEE1150 *)0xfffffffb;
  do {
    pRVar6 = local_48;

    st::fn_006E25D0
              (pSVar8,&local_e4,local_d4,0.0,0.0,(double)((float)(int)local_48 * _DAT_00790504),1);
    *(int *)(PTR_DAT_007a5250 + (int)pRVar6 * 4) = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    local_48 = (RecoveredRecord_00428E50_9DEE1150 *)((int)pRVar6 + 1);
  } while ((int)local_48 < 6);
  local_2c = 2;
  piVar15 = reinterpret_cast<int *>(&DAT_007f4db8);
  do {
    local_14 = local_2c + -2;
    dVar1 = (double)((float)local_2c * _DAT_007904f8);
    STPiece<4,4>(local_c0) = (int)((ulonglong)dVar1 >> 0x20);
    uVar5 = STPiece<4,4>(local_c0);
    local_b4 = (double)((float)local_14 * _DAT_007904f8);
    local_c0 = dVar1;

    st::fn_006E25D0(pSVar8,&local_e4,local_d4,local_b4,dVar1,0.0,1);
    piVar15[-1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);

    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E25D0
              (pSVar8,&local_e4,local_d4,(double)CONCAT44(uVar5,(undefined4)local_c0),
               (double)CONCAT44(uVar5,(undefined4)local_c0),0.0,1);
    *piVar15 = (local_e0 >> 0x10) - (local_f4 >> 0x10);

    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E25D0
              (pSVar8,&local_e4,local_d4,(double)CONCAT44(uVar5,(undefined4)local_c0),local_b4,0.0,1
              );
    piVar15[1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    piVar15 = piVar15 + 3;
    local_2c = local_2c + 2;
  } while ((int)piVar15 < 0x7f4dc5);
  STPiece<1,3>(local_2c) = (undefined3)((uint)local_2c >> 8);
  local_2c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_2c)), (uint8_t)(2));
  local_a4 = 0;
  local_9 = 1;
  local_40 = nullptr;
  do {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_50 = CONCAT31(uStack_4f,(byte)local_2c >> 1);
    st::fn_006DD610(pSVar8,(ST3DSMAPContext_field_00A8State)local_40,10.0,10.0);
    local_44 = st::fn_006AE290(nullptr,10,0x1c,10);
    DAT_007f4dd0 = 0;
    local_90 = 0;
    if (0 < param_1->field_0455) {
      local_28 = param_1 + 1;
      do {
        pRVar3 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)local_28;
        if (pRVar3 != nullptr) {
          if (g_cLoading_00802A58 != nullptr) {
            local_a4 = local_a4 + 1;
            uVar13 = local_a4 & 0x8000000f;
            bVar20 = uVar13 == 0;
            if ((int)uVar13 < 0) {
              bVar20 = (uVar13 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar20) {
              /* ST_CALLSITE[004292AA]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
              st::fn_00403472
                        (g_cLoading_00802A58,CASE_1,
                         st::storage_bit_cast<int>(static_cast<uint32_t>(local_a4 + ((int)local_a4 >> 0x1f & 0xfU))) >> 4,nullptr);
            }
          }
          uVar13 = 0;
          while( true ) {
            if ((local_44->count <= uVar13) ||
               (piVar15 = DArrayAt<int>(local_44, uVar13),
               piVar15 == nullptr)) goto LAB_004292e2;
            if (pRVar3->field_0028 == *piVar15) break;
            uVar13 = uVar13 + 1;
          }
          if (piVar15 != nullptr) {
            *(uint *)&pRVar3->field_0x18 = uVar13;
            iVar14 = 0;
            if (0 < pRVar3->field_0024) {
              do {
                if ((*(byte *)(piVar15[2] + iVar14) & local_50) != 0) {
                  pbVar11 = (byte *)(pRVar3->field_003C + iVar14);
                  *pbVar11 = *pbVar11 | local_50;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < pRVar3->field_0024);
            }
            goto LAB_004293c6;
          }
LAB_004292e2:
          local_14 = (int)pRVar3->field_0006;
          sVar2 = pRVar3->field_0004;
          local_48 = (RecoveredRecord_00428E50_9DEE1150 *)(int)pRVar3->field_0008;
          pRVar3->field_0004 = 0;
          pRVar3->field_0006 = 0;
          pRVar3->field_0008 = (ushort)pRVar3->field_0048;
          pRVar3->next = pSVar8->field_0140;
          pSVar8->field_0140 = pRVar3;
          pSVar8->field_013C = pSVar8->field_013C + 1;
          st::fn_006DDBE0(pSVar8);
          st::fn_006DDD50(pSVar8);
          pSVar8->field_0140 = nullptr;
          pSVar8->field_013C = 0;
          pRVar3->field_0006 = (short)local_14;
          pRVar3->field_0008 = (short)local_48;
          pRVar3->field_0004 = sVar2;

          local_110 = st::fn_00402739((int *)pSVar8->field_000C,local_e8,local_c4,local_108);
          local_114 = pRVar3->field_0028;
          local_10c = pRVar3->field_003C;

          iVar13 = st::fn_006AE1C0(local_44,&local_114);
          *(int *)&pRVar3->field_0x18 = iVar13;
        }
LAB_004293c6:
        local_28 = reinterpret_cast<RecoveredRecord_00428E50_9DEE1150 *>(reinterpret_cast<byte *>(local_28) + 0x4);
        local_90 = local_90 + 1;
      } while (local_90 < param_1->field_0455);
    }
    local_38 = (int)*(short *)param_1 / 2;
    if (local_40 == nullptr) {
      local_7c = 1;
      local_a8 = 1;
      local_6c = 1;
      local_74 = 1;
LAB_00429475:
      local_8c = 0;
      local_84 = 0;
    }
    else if (st::machine_word_boundary_cast<uint>(local_40) == st::machine_word_boundary_cast<uint>((RecoveredRecord_00428E50_9DEE1150 *)0x1)) {
      local_7c = 0;
      local_8c = -1;
      local_a8 = -1;
      local_6c = 1;
      local_74 = 0;
      local_84 = 1;
    }
    else {
      if (st::machine_word_boundary_cast<uint>(local_40) == st::machine_word_boundary_cast<uint>((RecoveredRecord_00428E50_9DEE1150 *)0x2)) {
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
    if (0 < param_1->field_0455) {
      local_48 = param_1 + 1;
      do {
        pAVar4 = *(AnonShape_00428E50_DFCBD4F2 **)local_48;
        local_10 = pAVar4;
        if (pAVar4 != nullptr) {
          if (g_cLoading_00802A58 != nullptr) {
            local_a4 = local_a4 + 1;
            uVar13 = local_a4 & 0x8000000f;
            bVar20 = uVar13 == 0;
            if ((int)uVar13 < 0) {
              bVar20 = (uVar13 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar20) {
              /* ST_CALLSITE[004294E3]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
              st::fn_00403472
                        (g_cLoading_00802A58,CASE_1,
                         st::storage_bit_cast<int>(static_cast<uint32_t>(local_a4 + ((int)local_a4 >> 0x1f & 0xfU))) >> 4,nullptr);
            }
          }
          if (*(uint *)&pAVar4->field_0x18 < local_44->count) {
            pvVar9 = DArrayAt<void>(local_44, *(uint *)&pAVar4->field_0x18);
          }
          else {
            pvVar9 = nullptr;
          }
          local_64 = (int)*(short *)&pAVar4->field_0x4 / 2;
          uVar13 = (uint)(byte)pAVar4[1].field_0008;
          iVar10 = (int)pAVar4->field_0008;
          local_24 = iVar10 - uVar13;
          iVar14 = (int)*(short *)&pAVar4->field_0x6 / 2;
          if (((*(ushort *)&pAVar4[1].field_0xe & 0x2000) == 0) ||
             (local_ac = 0, (*(ushort *)&pAVar4[1].field_0xe & 0xf) != 0)) {
            local_ac = uVar13;
          }
          scalar_local_28 = iVar14 * local_38; /* split integer lifetime from pointer-typed SSA storage */
          local_b8 = local_80 * 5;
          local_3c = 1;
          local_8 = (int *)(&param_1[1].field_0x0 + st::storage_bit_cast<int>(static_cast<uint32_t>(scalar_local_28 + local_64 + local_b8)) * 4);
          local_34 = 0;
          local_1c = 5;
          local_14 = iVar14;
          if (iVar10 < 5) {
LAB_0042958f:
            iVar14 = *local_8;
            if ((iVar14 == 0) ||
               (iVar18 = (int)STField<short>(iVar14,0x8) - (uint)STField<byte>(iVar14,0x48),
               iVar10 + 3 < iVar18)) goto cf_continue_loop_004296CF;
            if (STField<uint>(iVar14,0x18) < local_44->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, STField<uint>(iVar14,0x18)) (runtime stride) */
              pvVar16 = (void *)(local_44->elementSize * STField<uint>(iVar14,0x18) +
                                (int)local_44->data);
            }
            else {
              pvVar16 = nullptr;
            }
            local_60 = STField<int>(pvVar16,0xc);
            local_5c = STField<int>(pvVar16,0x10) +
                       *(int *)(PTR_DAT_007a5250 + (iVar18 - local_24) * 4);
            local_58 = STField<int>(pvVar16,0x14);
            local_54 = STField<undefined4>(pvVar16,0x18);
            local_18 = pvVar16;

            iVar14 = st::fn_006B0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
            if (iVar14 == 0) goto cf_continue_loop_004296CF;
            if (2 < (int)local_10->field_0024) {
              iVar14 = STField<int>(pvVar9,0x14);
              local_20 = (undefined4 *)local_30->field_000C;
              iVar10 = STField<int>(pvVar9,0x10);
              iVar18 = STField<int>(pvVar9,0xc);
              local_4c = (((local_9c - local_5c) * local_58 + STField<int>(pvVar16,4)) - local_60
                         ) + local_a0;
              if (local_3c != 0) {
                uVar12 = STField<int>(pvVar9,0x18) * iVar14;
                puVar17 = STField<undefined4 *>(pvVar9,4);
                puVar19 = local_20;
                for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *puVar19 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar19 = puVar19 + 1;
                }
                local_3c = 0;
                for (uVar12 = uVar12 & 3; pvVar16 = local_18, uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
                  puVar17 = (undefined4 *)((int)puVar17 + 1);
                  puVar19 = (undefined4 *)((int)puVar19 + 1);
                }
              }

              uVar13_mg6 = st::fn_004028DD(st::storage_bit_cast<int>(static_cast<uint32_t>((int)local_20 +
                                                   local_a0 +
                                                   ((local_9c - iVar10) * iVar14 - iVar18))),
                                              STField<int>(pvVar9,0x14),local_4c,
                                              STField<int>(pvVar16,0x14),local_98,local_94,
                                              local_10->field_003C,local_50);
              local_34 = local_34 | uVar13_mg6;
              goto cf_continue_loop_004296CF;
            }
            if (local_94 < 3) goto cf_continue_loop_004296CF;
            *STField<byte *>(local_10,0x3C) = *STField<byte *>(local_10,0x3C) | local_50;
            iVar14 = local_10->field_003C;
LAB_00429d7a:
            ((byte *)iVar14)[1] = STField<byte>(iVar14,0x1) | local_50;
            iVar10 = local_64;
            goto LAB_00429d7d;
          }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00429715:
          local_c0 = (double)CONCAT44(local_84 * local_38,(undefined4)local_c0);
          local_14 = local_6c * local_38;
          local_88 = reinterpret_cast<int *>(&DAT_007a5248);
          iVar10 = (local_7c + iVar14) * local_38 + local_b8;
          local_70 = reinterpret_cast<int *>(&DAT_007f4db8);
          do {
            local_78 = iVar14;
            local_68 = local_64;
            if ((((local_64 < 0) || (local_38 <= local_64)) || (iVar14 < 0)) || (local_38 <= iVar14)
               ) break;
            if (((-1 < local_64 + local_8c) && (local_64 + local_8c < local_38)) &&
               ((-1 < local_7c + iVar14 &&
                ((local_7c + iVar14 < local_38 &&
                 (local_8 = reinterpret_cast<int *>((&param_1[1].field_0x0 + (local_8c + iVar10 + local_64) * 4)),
                 local_24 < 5)))))) {
              local_1c = 5 - local_24;
              local_64 = iVar10;
              do {
                iVar14 = *local_8;
                if ((iVar14 != 0) &&
                   (st::storage_bit_cast<int>(static_cast<uint32_t>(((int)local_10->field_0008 - local_ac) + *local_88)) <
                    (int)STField<short>(iVar14,0x8))) {
                  if (STField<uint>(iVar14,0x18) < local_44->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, STField<uint>(iVar14,0x18)) (runtime stride) */
                    pvVar16 = (void *)(local_44->elementSize * STField<uint>(iVar14,0x18) +
                                      (int)local_44->data);
                  }
                  else {
                    pvVar16 = nullptr;
                  }
                  local_60 = STField<int>(pvVar16,0xc) - local_c8;
                  local_5c = STField<int>(pvVar16,0x10) +
                             *(int *)(PTR_DAT_007a5250 +
                                     (((int)STField<short>(iVar14,0x8) - (uint)STField<byte>(iVar14,0x48))
                                     - local_24) * 4) + local_70[-1];
                  local_58 = STField<int>(pvVar16,0x14);
                  local_54 = STField<undefined4>(pvVar16,0x18);
                  local_18 = pvVar16;

                  iVar14 = st::fn_006B0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
                  if (iVar14 != 0) {
                    iVar14 = STField<int>(pvVar9,0x10);
                    iVar10 = STField<int>(pvVar9,0x14);
                    local_20 = (undefined4 *)local_30->field_000C;
                    iVar18 = STField<int>(pvVar9,0xc);
                    local_4c = (((local_9c - local_5c) * local_58 + STField<int>(pvVar16,4)) -
                               local_60) + local_a0;
                    if (local_3c != 0) {
                      uVar12 = STField<int>(pvVar9,0x18) * iVar10;
                      puVar17 = STField<undefined4 *>(pvVar9,4);
                      puVar19 = local_20;
                      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                        *puVar19 = *puVar17;
                        puVar17 = puVar17 + 1;
                        puVar19 = puVar19 + 1;
                      }
                      local_3c = 0;
                      for (uVar12 = uVar12 & 3; pvVar16 = local_18, uVar12 != 0; uVar12 = uVar12 - 1
                          ) {
                        *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
                        puVar17 = (undefined4 *)((int)puVar17 + 1);
                        puVar19 = (undefined4 *)((int)puVar19 + 1);
                      }
                    }

                    uVar13_mg8 = st::fn_004028DD(st::storage_bit_cast<int>(static_cast<uint32_t>((int)local_20 +
                                                         local_a0 +
                                                         ((local_9c - iVar14) * iVar10 - iVar18))),
                                                    STField<int>(pvVar9,0x14),local_4c,
                                                    STField<int>(pvVar16,0x14),local_98,local_94,
                                                    local_10->field_003C,(byte)_local_50);
                    local_34 = local_34 | uVar13_mg8;
                  }
                }
                local_8 = local_8 + -local_80;
                local_1c = local_1c + -1;
              } while (local_1c != 0);
              local_1c = 0;
              iVar10 = local_64;
            }
            local_64 = iVar10;
            iVar14 = local_a8 + local_68;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_b4 = (double)CONCAT44(iVar14,(undefined4)local_b4);
            if ((((-1 < iVar14) && (iVar14 < local_38)) && (-1 < local_6c + local_78)) &&
               (local_6c + local_78 < local_38)) {
              local_8 = (int *)(&param_1[1].field_0x0 +
                               st::storage_bit_cast<int>(static_cast<uint32_t>(scalar_local_28 + local_b8 + local_a8 + local_68 + local_14)) * 4);
              local_1c = 5;
              if (local_24 < 5) {
                do {
                  iVar14 = *local_8;
                  if ((iVar14 != 0) &&
                     (st::storage_bit_cast<int>(static_cast<uint32_t>(((int)local_10->field_0008 - local_ac) + *local_88)) <
                      (int)STField<short>(iVar14,0x8))) {
                    if (STField<uint>(iVar14,0x18) < local_44->count) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, STField<uint>(iVar14,0x18)) (runtime stride) */
                      pvVar16 = (void *)(local_44->elementSize * STField<uint>(iVar14,0x18) +
                                        (int)local_44->data);
                    }
                    else {
                      pvVar16 = nullptr;
                    }
                    local_60 = STField<int>(pvVar16,0xc);
                    local_5c = STField<int>(pvVar16,0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)STField<short>(iVar14,0x8) -
                                        (uint)STField<byte>(iVar14,0x48)) - local_24) * 4) + *local_70
                    ;
                    local_58 = STField<int>(pvVar16,0x14);
                    local_54 = STField<undefined4>(pvVar16,0x18);
                    local_18 = pvVar16;

                    iVar14 = st::fn_006B0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
                    if (iVar14 != 0) {
                      if ((int)local_10->field_0024 < 3) {
                        if (2 < local_94) {
                          *STField<byte *>(local_10,0x3C) = *STField<byte *>(local_10,0x3C) | local_50;
                          iVar14 = local_10->field_003C;
                          goto LAB_00429d7a;
                        }
                      }
                      else {
                        iVar14 = STField<int>(pvVar9,0x10);
                        iVar10 = STField<int>(pvVar9,0x14);
                        local_20 = (undefined4 *)local_30->field_000C;
                        iVar18 = STField<int>(pvVar9,0xc);
                        local_4c = (((local_9c - local_5c) * local_58 + STField<int>(pvVar16,4))
                                   - local_60) + local_a0;
                        if (local_3c != 0) {
                          uVar12 = STField<int>(pvVar9,0x18) * iVar10;
                          puVar17 = STField<undefined4 *>(pvVar9,4);
                          puVar19 = local_20;
                          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                            *puVar19 = *puVar17;
                            puVar17 = puVar17 + 1;
                            puVar19 = puVar19 + 1;
                          }
                          local_3c = 0;
                          for (uVar12 = uVar12 & 3; pvVar16 = local_18, uVar12 != 0;
                              uVar12 = uVar12 - 1) {
                            *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
                            puVar17 = (undefined4 *)((int)puVar17 + 1);
                            puVar19 = (undefined4 *)((int)puVar19 + 1);
                          }
                        }

                        uVar13_mgA = st::fn_004028DD(st::storage_bit_cast<int>(static_cast<uint32_t>((int)local_20 +
                                                             local_a0 +
                                                             ((local_9c - iVar14) * iVar10 - iVar18))),STField<int>(pvVar9,0x14),local_4c
                                                        ,STField<int>(pvVar16,0x14),local_98,
                                                        local_94,local_10->field_003C,local_50);
                        local_34 = local_34 | uVar13_mgA;
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
              local_8 = (int *)(&param_1[1].field_0x0 +
                               (int)(scalar_local_28 + local_68 + local_74 + local_b8 + STPiece<4,4>(local_c0)
                                    ) * 4);
              if (local_24 < 5) {
                local_1c = 5 - local_24;
                do {
                  iVar14 = *local_8;
                  if ((iVar14 != 0) &&
                     (st::storage_bit_cast<int>(static_cast<uint32_t>(((int)local_10->field_0008 - local_ac) + *local_88)) <
                      (int)STField<short>(iVar14,0x8))) {
                    if (STField<uint>(iVar14,0x18) < local_44->count) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_44, STField<uint>(iVar14,0x18)) (runtime stride) */
                      pvVar16 = (void *)(local_44->elementSize * STField<uint>(iVar14,0x18) +
                                        (int)local_44->data);
                    }
                    else {
                      pvVar16 = nullptr;
                    }
                    local_60 = STField<int>(pvVar16,0xc) + local_c8;
                    local_5c = STField<int>(pvVar16,0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)STField<short>(iVar14,0x8) -
                                        (uint)STField<byte>(iVar14,0x48)) - local_24) * 4) +
                               local_70[1];
                    local_58 = STField<int>(pvVar16,0x14);
                    local_54 = STField<undefined4>(pvVar16,0x18);
                    local_18 = pvVar16;

                    iVar14 = st::fn_006B0460(&local_a0,(int *)((int)pvVar9 + 0xc),&local_60);
                    if (iVar14 != 0) {
                      iVar14 = STField<int>(pvVar9,0x10);
                      iVar10 = STField<int>(pvVar9,0x14);
                      local_20 = (undefined4 *)local_30->field_000C;
                      iVar18 = STField<int>(pvVar9,0xc);
                      local_4c = (((local_9c - local_5c) * local_58 + STField<int>(pvVar16,4)) -
                                 local_60) + local_a0;
                      if (local_3c != 0) {
                        uVar12 = STField<int>(pvVar9,0x18) * iVar10;
                        puVar17 = STField<undefined4 *>(pvVar9,4);
                        puVar19 = local_20;
                        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                          *puVar19 = *puVar17;
                          puVar17 = puVar17 + 1;
                          puVar19 = puVar19 + 1;
                        }
                        local_3c = 0;
                        for (uVar12 = uVar12 & 3; pvVar16 = local_18, uVar12 != 0;
                            uVar12 = uVar12 - 1) {
                          *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
                          puVar17 = (undefined4 *)((int)puVar17 + 1);
                          puVar19 = (undefined4 *)((int)puVar19 + 1);
                        }
                      }

                      uVar13_mgC = st::fn_004028DD(st::storage_bit_cast<int>(static_cast<uint32_t>((int)local_20 +
                                                           local_a0 +
                                                           ((local_9c - iVar14) * iVar10 - iVar18))),
                                                      STField<int>(pvVar9,0x14),local_4c,
                                                      STField<int>(pvVar16,0x14),local_98,
                                                      local_94,local_10->field_003C,(byte)_local_50);
                      local_34 = local_34 | uVar13_mgC;
                    }
                  }
                  local_8 = local_8 + -local_80;
                  local_1c = local_1c + -1;
                } while (local_1c != 0);
              }
            }
            local_68 = STPiece<4,4>(local_b4);
            local_28 = (RecoveredRecord_00428E50_9DEE1150 *)((int)local_28 + local_14);
            iVar10 = local_64 + local_14;
            iVar14 = local_78 + local_6c;
            local_70 = local_70 + 3;
            local_88 = local_88 + 1;
            local_64 = STPiece<4,4>(local_b4);
            local_78 = iVar14;
          } while ((int)local_88 < 0x7a524d);
LAB_00429d7d:
          local_64 = iVar10;
          pSVar8 = local_30;
          if (local_34 == 0) {
            iVar14 = 0;
            if (0 < (int)local_10->field_0024) {
              iVar10 = 0;
              do {
                if ((*(byte *)(local_10->field_0028 + iVar10) & local_9) != 0) {
                  *(byte *)(local_10->field_003C + iVar14) =
                       *(byte *)(local_10->field_003C + iVar14) | (byte)local_2c;
                }
                iVar14 = iVar14 + 1;
                iVar10 = iVar10 + 0x1c;
              } while (iVar14 < (int)local_10->field_0024);
            }
          }
          else {
            st::fn_004048C2((uint *)local_30->field_000C,STField<int>(pvVar9,0x14),
                               STField<int>(pvVar9,0x18),(void *)local_10->field_003C,
                               local_10->field_0024,(byte)local_2c);
          }
        }
        local_90 = local_90 + 1;
        local_48 = reinterpret_cast<RecoveredRecord_00428E50_9DEE1150 *>(reinterpret_cast<byte *>(local_48) + 0x4);
      } while (local_90 < param_1->field_0455);
    }
    array = local_44;
    local_44->iteratorIndex = 0;
    while (uVar13 = array->iteratorIndex, uVar13 < array->count) {
      pvVar9 = DArrayAt<void>(array, uVar13);
      array->iteratorIndex = uVar13 + 1;
      if (pvVar9 == nullptr) break;
      st::fn_006A5E90(STField<short *>(pvVar9,4));
    }
    st::fn_006AE110(array);
    local_9 = local_9 << 1;
    local_40 = (RecoveredRecord_00428E50_9DEE1150 *)((int)local_40 + CASE_1);
    local_2c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_2c)), (uint8_t)((byte)local_2c << 2));
    if (3 < (int)local_40) {
      if (pSVar8 != nullptr) {
        st::fn_006DBCF0(pSVar8);
        st::fn_0072E2B0(reinterpret_cast<HoloTy *>(pSVar8));
      }
      return;
    }
  } while( true );
cf_continue_loop_004296CF:
  local_8 = local_8 + -local_80;
  iVar10 = (int)local_10->field_0008;
  local_1c = local_1c + -1;
  iVar14 = local_14;
  if (local_1c <= iVar10) goto LAB_00429715;
  goto LAB_0042958f;
}

// 0042A290 LoadLand
#line 4 "decomp/ST.exe/functions/0042A290/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 1166 | 1282 | 1283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00576EF0 -> 0042A290 @ 00576F31

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00576EF0 -> 0042A290 @ 00576F31 */

short * __cdecl st::fn_0042A290(cMf32 *param_1,char *text)

{
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar1;
  int iVar3;
  RecoveredRecordView_005751F0_4081B804 *pRVar3;
  char *pcVar4;
  int iVar6;
  byte *puVar7;
  AnonShape_006DBCA0_EF06575F *pAVar8;
  int *piVar9;
  int iVar5;
  short *psVar10;
  byte *puVar11;
  uint uVar12;
  byte *puVar13;
  ST3DSMAPContext *this;
  uint uVar14;
  byte *puVar15;
  longlong lVar16;
  CHAR local_f4 [128];
  InternalExceptionFrame local_74;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  RecoveredRecordView_005751F0_4081B804 *local_1c;
  int local_18;
  RecoveredRecordView_005751F0_4081B804 *local_14;
  ST3DSMAPContext *local_10;
  DArrayTy *local_c;
  uint local_8;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;

  iVar3 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  if (iVar3 == 0) {
    pRVar3 = reinterpret_cast<RecoveredRecordView_005751F0_4081B804 *>(st::fn_006EF640
                       (st::machine_word_boundary_cast<int>(param_1),text,g_cMf32_00806760,g_cMf32_00806760,st::function_address_boundary_cast<undefined *>(st::fn_00428A10)));
    local_1c = pRVar3;
    if (g_cLoading_00802A58 != nullptr) {
      iVar6 = DAT_007f4e00;
      pcVar4 = st::fn_006B0140(0x2685,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0042A30E]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(reinterpret_cast<LPSTR>(local_f4),pcVar4,iVar6);
      /* ST_CALLSITE[0042A327]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
      st::fn_00403472(g_cLoading_00802A58,CASE_2,0,reinterpret_cast<char *>(local_f4));
      if (g_cLoading_00802A58 != nullptr) {
        iVar6 = DAT_007f4e00 / 2;
        pcVar4 = st::fn_006B0140(0x268c,g_hINSTANCE_00807618);
        /* ST_CALLSITE[0042A358]: CALL 0x00404d8b; direct=00404D8B cLoadingTy::SetProcess */
        st::fn_00404D8B(g_cLoading_00802A58,0,pcVar4,iVar6);
        /* ST_CALLSITE[0042A366]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
        st::fn_00403472(g_cLoading_00802A58,CASE_0,0,nullptr);
      }
    }
    puVar11 = &pRVar3->field_0xe;
    iVar6 = 0x100;
    puVar7 = (undefined1 *)((int)PTR_0080679c + 0x29);
    do {
      puVar11[-1] = puVar7[1];
      *puVar11 = *puVar7;
      puVar11[1] = puVar7[-1];
      puVar11 = puVar11 + 4;
      iVar6 = iVar6 + -1;
      puVar7 = puVar7 + 4;
    } while (iVar6 != 0);
    pRVar3->field_0x409 = 0xff;
    pRVar3->field_0x40a = 0xff;
    pRVar3->field_0x40b = 0xff;
    /* ST_CALLSITE[0042A3AE]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F;/uint */
    pAVar8 = st::pointer_boundary_cast<AnonShape_006DBCA0_EF06575F *>(st::fn_006B04D0(0x4f2));
    if (pAVar8 == nullptr) {
      local_10 = nullptr;
    }
    else {
      local_10 = reinterpret_cast<ST3DSMAPContext *>(st::fn_006DBCA0(pAVar8));
    }
    this = local_10;
    if (local_10 == nullptr) {
      st::fn_006A5E40(-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\tload.cpp"),0x48e);
    }
    st::fn_0072E150(0xc0000000,0x403ccccc);
    lVar16 = st::fn_0072E288();
    iVar6 = (int)lVar16;
    local_30 = iVar6;
    st::fn_006DC050
              (this,nullptr,0,0,iVar6,iVar6,-10.0,10.0,-10.0,10.0,10.0,9.965999793052674,0
              );
    this->field_0128 = 0;
    st::fn_006DD790(this,140.204);
    st::fn_006DD800(this,219.932);
    this->field_0124 = 5;
    st::fn_006DD610(this,4,10.0,10.0);
    local_c = st::fn_006AE290(nullptr,100,8,100);
    local_18 = 0;
    if (0 < pRVar3->field_0455) {
      local_14 = pRVar3 + 1;
      do {
        pRVar1 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)local_14;
        if (pRVar1 != nullptr) {
          local_8 = local_c->count;
          local_c->iteratorIndex = 0;
          do {
            uVar12 = local_c->iteratorIndex;
            if (uVar12 < local_8) {
              piVar9 = DArrayAt<int>(local_c, uVar12);
              local_c->iteratorIndex = uVar12 + 1;
            }
            else {
              piVar9 = nullptr;
            }
          } while ((piVar9 != nullptr) && (pRVar1->field_0028 != *piVar9));
          if (piVar9 == nullptr) {
            local_8 = (uint)pRVar1->field_0004;
            local_28 = (int)pRVar1->field_0006;
            pRVar1->field_0004 = 0;
            pRVar1->field_0006 = 0;
            local_2c = (int)pRVar1->field_0008;
            pRVar1->field_0008 = (ushort)pRVar1->field_0048;
            pRVar1->next = this->field_0140;
            this->field_0140 = pRVar1;
            this->field_013C = this->field_013C + 1;
            st::fn_006DDBE0(this);
            st::fn_006DDD50(this);
            uVar14 = iVar6 * iVar6;
            this->field_0140 = nullptr;
            this->field_013C = 0;
            pRVar1->field_0006 = (short)local_28;
            pRVar1->field_0004 = (short)local_8;
            local_24 = pRVar1->field_0028;
            pRVar1->field_0008 = (short)local_2c;

            local_20 = (undefined4 *)st::fn_006AAC70(uVar14);
            puVar13 = (byte *)this->field_000C;
            puVar15 = reinterpret_cast<byte *>((local_20));
            memmove(puVar15, puVar13, uVar14); /* compiler REP MOVS byte copy */
            pRVar1->field_0040 = (int)local_20;

            st::fn_006AE1C0(local_c,&local_24);
            this = local_10;
            iVar6 = local_30;
          }
          else {
            pRVar1->field_0040 = piVar9[1];
          }
        }
        local_18 = local_18 + 1;
        local_14 = reinterpret_cast<RecoveredRecordView_005751F0_4081B804 *>(&local_14->field_0004);
        pRVar3 = local_1c;
      } while (local_18 < local_1c->field_0455);
    }
    if (this != nullptr) {
      st::fn_006DBCF0(this);
      st::fn_0072E2B0(reinterpret_cast<HoloTy *>(this));
    }
    st::fn_006AE110(local_c);
    st::fn_004045ED(reinterpret_cast<RecoveredRecord_00428E50_9DEE1150 *>(pRVar3));
    /* ST_CALLSITE[0042A605]: CALL 0x004010d7; direct=004010D7 LandInit */
    st::fn_004010D7(pRVar3);
    if (g_cLoading_00802A58 != nullptr) {
      /* ST_CALLSITE[0042A61D]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
      st::fn_00403472(g_cLoading_00802A58,CASE_2,0,nullptr);
    }
    g_currentExceptionFrame = local_74.previous;
    return &pRVar3->field_0000;
  }
  g_currentExceptionFrame = local_74.previous;

  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tload.cpp"),0x502,0,iVar3,st::mutable_c_string("%s"),
                             "LoadLand");
  if (iVar5 == 0) {
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\tload.cpp"),0x503);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0042A860 FUN_0042a860
#line 4 "decomp/ST.exe/functions/0042A860/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 1334 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_0042A860(void)

{
  int iVar1;
  byte *puVar1;
  short *psVar2;
  int iVar3;
  byte local_448 [1024];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;

  iVar1 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    puVar1 = local_448 + 1;
    iVar3 = 0x100;
    psVar2 = PTR_00806750 + 7;
    do {
      puVar1[-1] = *(undefined1 *)((int)psVar2 + -1);
      *puVar1 = (char)*psVar2;
      puVar1[1] = STField<undefined1>(psVar2,1);
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 + -1;
      psVar2 = psVar2 + 2;
    } while (iVar3 != 0);

    st::fn_006B08F0(reinterpret_cast<RecoveredGlobalRecordView_00854EB8 *>(g_dDXContext_0080759C),(int)local_448,0,0x100);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  st::fn_006A5E40(iVar1,0,st::mutable_c_string("E:\\__titans\\tload.cpp"),0x536);
  return;
}
