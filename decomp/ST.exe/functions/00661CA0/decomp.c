#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=29;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall
AiFltClassTy::sub_00661CA0
          (RecoveredRecordView_00661CA0_FD5CEA6E *param_1,undefined4 param_2,int param_3)

{
  AnonNested_AnonShape_00661CA0_93A030EF_020B_27162EA8 *pAVar1;
  uint uVar2;
  AiTactClassTy *pAVar3;
  STGameObjC *pSVar4;
  STGameObjC *this;
  uint uVar5;
  uint *puVar6;
  Global_sub_006753A0_param_1Enum GVar7;
  int iVar10;
  void *pvVar8;
  IMAGE_DOS_HEADER *pIVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  RecoveredRecordView_0068FD00_630BE91E **ppRVar15;
  bool bVar16;
  RecoveredRecordView_0068FD00_630BE91E *local_64;
  uint local_60;
  byte local_5c;
  byte local_5b;
  short *psStack_5a;
  undefined1 uStack_56;
  short local_30;
  short local_2e [5];
  uint local_24;
  AiPlrClassTy *local_20;
  short local_1c [2];
  short local_18 [2];
  RecoveredRecordView_00661CA0_FD5CEA6E *local_14;
  STGameObjC *local_10;
  uint local_c;
  short local_6;

  if ((g_allPlayers_007FA174 != nullptr) &&
     (local_14 = param_1,
     /* ST_CALLSITE[00661CCA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
     this = STAllPlayersC::GetObjPtr
                      (g_allPlayers_007FA174,param_1->field_0024,*(ushort *)(param_3 + 0x16),CASE_1)
     , this != nullptr)) {
    local_10 = this;
    local_20 = thunk_FUN_004357f0(param_1->field_0024);
    /* ST_CALLSITE[00661CF2]: CALL dword ptr [EDX + 0x2c] */
    uVar5 = this->vfunc_2C();
    pSVar4 = local_10;
    local_c = uVar5;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_3 + 0x14) == 0) {
      /* ST_CALLSITE[00661D11]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0((STFishC *)this,local_18,local_1c,&local_6);
      if ((0x31 < (int)local_c) && ((int)local_c < 0x74)) {
        uVar5 = 0;
        local_24 = param_1->field_020B->field_000C;
        if (0 < (int)local_24) {
          bVar16 = local_24 != 0;
          do {
            if (bVar16) {
              puVar6 = (uint *)(param_1->field_020B->field_0008 * uVar5 +
                               param_1->field_020B->field_001C);
            }
            else {
              puVar6 = nullptr;
            }
            if (puVar6[10] == 0) {
              iVar11 = 0;
              puVar14 = puVar6;
              do {
                if (*puVar14 == local_c) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  puVar6[10] = *(uint *)(param_3 + 0x18);
                  STField<short>(puVar6,0xe) = local_18[0];
                  *(short *)(puVar6 + 4) = local_1c[0];
                  STField<short>(puVar6,0x12) = local_6;
                  puVar6[9] = 0;
                  goto LAB_00661e5f;
                }
                iVar11 = iVar11 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar11 < 3);
            }
            uVar5 = uVar5 + 1;
            bVar16 = uVar5 < local_24;
          } while ((int)uVar5 < (int)local_24);
        }
      }
      if ((0 < (int)local_c) && ((int)local_c < 0x29)) {
        if (local_10->field_081E != 0) {
          pAVar1 = param_1->field_020B;
          uVar12 = 0;
          uVar5 = pAVar1->field_000C;
          if (0 < (int)uVar5) {
            bVar16 = uVar5 != 0;
            do {
              if (bVar16) {
                iVar11 = pAVar1->field_0008 * uVar12 + pAVar1->field_001C;
              }
              else {
                iVar11 = 0;
              }
              if ((STField<int>(iVar11,0x28) == 0) &&
                 (STField<int>(iVar11,0x24) == local_10->field_081E)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                uVar2 = *(undefined4 *)(param_3 + 0x18);
                STField<undefined4>(iVar11,0x24) = 0;
                STField<undefined4>(iVar11,0x28) = uVar2;
                goto LAB_00661e5f;
              }
              uVar12 = uVar12 + 1;
              bVar16 = uVar12 < uVar5;
            } while ((int)uVar12 < (int)uVar5);
          }
        }
        pAVar1 = param_1->field_020B;
        uVar5 = 0;
        if (0 < (int)pAVar1->field_000C) {
          bVar16 = pAVar1->field_000C != 0;
          do {
            if (bVar16) {
              puVar6 = (uint *)(pAVar1->field_0008 * uVar5 + pAVar1->field_001C);
            }
            else {
              puVar6 = nullptr;
            }
            if (puVar6[10] == 0) {
              iVar11 = 0;
              puVar14 = puVar6;
              do {
                param_1 = local_14;
                if (*puVar14 == local_c) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  uVar5 = *(uint *)(param_3 + 0x18);
                  puVar6[9] = 0;
                  puVar6[10] = uVar5;
                  goto LAB_00661e5f;
                }
                iVar11 = iVar11 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar11 < 3);
            }
            uVar5 = uVar5 + 1;
            bVar16 = uVar5 < (uint)pAVar1->field_000C;
          } while ((int)uVar5 < (int)pAVar1->field_000C);
        }
      }
LAB_00661e5f:
      if (((0x31 < (int)local_c) && ((int)local_c < 0x74)) &&
         (param_1->field_0284 != nullptr)) {
        local_30 = local_18[0] + -4;
        local_2e[0] = local_1c[0] + -4;
        local_2e[2] = 9;
        local_2e[3] = 9;
        local_2e[1] = 0;
        local_2e[4] = 5;
        thunk_FUN_006756d0(&local_30,local_2e,local_2e + 2,local_2e + 3);
        ppRVar15 = &local_64;
        for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
          *ppRVar15 = nullptr;
          ppRVar15 = ppRVar15 + 1;
        }
        local_60 = param_1->field_0280;
        local_64 = (RecoveredRecordView_0068FD00_630BE91E *)0x6c;
        local_5c = 0;
        /* ST_CALLSITE[00661EEC]: CALL dword ptr [EDX + 0x2c] */
        GVar7 = local_10->vfunc_2C();

        iVar10 = thunk_FUN_006753a0(GVar7);
        local_5b = (undefined1)iVar10;
        psStack_5a = &local_30;
        /* ST_CALLSITE[00661F0B]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
        AiTactClassTy::GetAiMess
                  (param_1->field_0284,(RecoveredRecordView_0068FD00_630BE91E *)&local_64);
      }
      if (((0 < (int)local_c) && ((int)local_c < 0x29)) && (param_1->field_007B == -0x8000)) {
        if (param_1->field_009B == 0x78) {
          param_1->field_009B = 0x33;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_00A7 = 0;
        }
        uVar5 = 0;
        if (param_1->field_0284 != nullptr) {
          /* ST_CALLSITE[00661F75]: CALL 0x00405b23; direct=00405B23 AiTactClassTy::sub_0068E290 */
          pvVar8 = STPointerBoundaryCast<void *>(AiTactClassTy::sub_0068E290(param_1->field_0284,local_10->field_081C));
          if (local_20 != nullptr) {
            uVar5 = local_20->field_065C;
            local_20->field_065C = uVar5 + 1;
          }
          if (pvVar8 != nullptr) {
            thunk_FUN_006616b0(pvVar8,local_c,uVar5);
          }
          local_10->field_081E = uVar5;
        }
      }
    }
    else {
      pAVar1 = param_1->field_020B;
      uVar13 = 0;
      uVar12 = pAVar1->field_000C;
      if (0 < (int)uVar12) {
        bVar16 = uVar12 != 0;
        do {
          if (bVar16) {
            iVar11 = pAVar1->field_0008 * uVar13 + pAVar1->field_001C;
          }
          else {
            iVar11 = 0;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (STField<int>(iVar11,0x28) == *(int *)(param_3 + 0x18)) {
            STField<undefined4>(iVar11,0x28) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
          bVar16 = uVar13 < uVar12;
        } while ((int)uVar13 < (int)uVar12);
      }
      if ((((0 < (int)uVar5) && ((int)uVar5 < 0x29)) && (param_1->field_007B == -0x8000)) &&
         ((param_1->field_0284 != nullptr &&
          /* ST_CALLSITE[0066200E]: CALL 0x00405b23; direct=00405B23 AiTactClassTy::sub_0068E290 */
          (pvVar8 = STPointerBoundaryCast<void *>(AiTactClassTy::sub_0068E290(param_1->field_0284,local_10->field_081C)),
          pvVar8 != nullptr)))) {
        thunk_FUN_00661790(pvVar8,uVar5,pSVar4->field_081E);
      }
    }
    pIVar9 = thunk_FUN_00674fb0(local_c);
    if ((((uint)pIVar9 & 0x60) != 0) &&
       (pAVar3 = param_1->field_0284, pAVar3 != nullptr)) {
      ppRVar15 = &local_64;
      for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
        *ppRVar15 = nullptr;
        ppRVar15 = ppRVar15 + 1;
      }
      local_60 = param_1->field_0280;
      local_5c = ((undefined1 *)param_3)[0x14];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STPiece<0,1>(psStack_5a) = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      STPiece<1,3>(psStack_5a) = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64 = (RecoveredRecordView_0068FD00_630BE91E *)0x6e;
      /* ST_CALLSITE[00662079]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
      AiTactClassTy::GetAiMess(pAVar3,(RecoveredRecordView_0068FD00_630BE91E *)&local_64);
    }
    pIVar9 = thunk_FUN_00674fb0(local_c);
    if ((((uint)pIVar9 & 0x10) != 0) &&
       (pAVar3 = param_1->field_0284, pAVar3 != nullptr)) {
      ppRVar15 = &local_64;
      for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
        *ppRVar15 = nullptr;
        ppRVar15 = ppRVar15 + 1;
      }
      local_60 = param_1->field_0280;
      local_5c = ((undefined1 *)param_3)[0x14];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STPiece<0,1>(psStack_5a) = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      STPiece<1,3>(psStack_5a) = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64 = (RecoveredRecordView_0068FD00_630BE91E *)0x74;
      /* ST_CALLSITE[006620D1]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
      AiTactClassTy::GetAiMess(pAVar3,(RecoveredRecordView_0068FD00_630BE91E *)&local_64);
    }
    if ((((0 < (int)local_c) && ((int)local_c < 0x29)) && (param_1->field_007B != 1)) &&
       (param_1->field_009B == 0x41)) {
      param_1->field_009B = 0x3c;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
  }
  return;
}

