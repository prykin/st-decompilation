#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/AiPlrClassTy.cpp

// 006788B0 AiPlrClassTy::AiPlrClassTy
#line 4 "decomp/ST.exe/functions/006788B0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D714 (store 006788C5)
   Evidence: final_vptr=0079D714; returns_this=true; calls_before=2; field_writes_after=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiPlrClassTy * __thiscall st::fn_006788B0(AiPlrClassTy *this)

{
  undefined4 *puVar2;

  st::fn_006E60E0(this);
  st::fn_00402C2F(&this->vtable_at_1c);
  this->vtable = &st_global_0079D714;
  this->vtable_at_1c = &st_global_0079D6D4;
  if (this == nullptr) {
    puVar2 = nullptr;
  }
  else {
    puVar2 = &this->field_05D3;
  }
  memset(puVar2, 0, 0x12b); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x128);
  this->field_05D3 = 0x398;
  this->field_0640 = 0xff;
  return this;
}

// 00678930 AiPlrClassTy::FUN_00678930
#line 4 "decomp/ST.exe/functions/00678930/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079D6D4
   Entries: 004022ED
   Slots: 0x18
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00678930(AiPlrClassTy *this)

{
  return this->field_05BB;
}

// 00678FC0 AiPlrClassTy::sub_00678FC0
#line 4 "decomp/ST.exe/functions/00678FC0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00678FC0(AiPlrClassTy *this)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  DArrayTy *pDVar7;
  dword dVar8;
  uint uVar9;

  pDVar7 = this->field_0695;
  dVar8 = pDVar7->count;
  if (1 < (int)dVar8) {
    do {
      bVar2 = false;
      uVar9 = 0;
      if ((int)(dVar8 - 1) < 1) {
        return;
      }
      do {
        if (uVar9 < dVar8) {
          piVar5 = DArrayAt<int>(pDVar7, uVar9);
        }
        else {
          piVar5 = nullptr;
        }
        uVar1 = uVar9 + 1;
        if (uVar1 < dVar8) {
          piVar3 = DArrayAt<int>(pDVar7, uVar1);
        }
        else {
          piVar3 = nullptr;
        }
        if ((*piVar5 != 0) && (*piVar3 != 0)) {
          if ((pDVar7 == nullptr) || (((int)uVar1 < 0 || ((int)dVar8 <= (int)uVar1)))) {
LAB_00679056:
            iVar6 = 0;
          }
          else {
            if (uVar1 < dVar8) {
              piVar5 = DArrayAt<int>(pDVar7, uVar1);
            }
            else {
              piVar5 = nullptr;
            }
            if (piVar5[1] == 0) {
              iVar6 = *piVar5;
            }
            else {
              if (*piVar5 == 0) goto LAB_00679056;
              iVar6 = *piVar5 + 0x20;
            }
          }
          if (((pDVar7 == nullptr) || ((int)uVar9 < 0)) || ((int)dVar8 <= (int)uVar9)) {
LAB_00679087:
            iVar4 = 0;
          }
          else {
            if (uVar9 < dVar8) {
              piVar5 = DArrayAt<int>(pDVar7, uVar9);
            }
            else {
              piVar5 = nullptr;
            }
            iVar4 = *piVar5;
            if (piVar5[1] != 0) {
              if (iVar4 == 0) goto LAB_00679087;
              iVar4 = iVar4 + 0x20;
            }
          }
          if (*(short *)(iVar4 + 0x5c) < *(short *)(iVar6 + 0x5c)) {
            st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)pDVar7,uVar9,uVar1);
            bVar2 = true;
          }
        }
        pDVar7 = this->field_0695;
        dVar8 = pDVar7->count;
        uVar9 = uVar1;
      } while ((int)uVar1 < (int)(dVar8 - 1));
    } while (bVar2);
  }
  return;
}

// 0067A020 AiPlrClassTy::sub_0067A020
#line 4 "decomp/ST.exe/functions/0067A020/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_006799B0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=2; incoming_edx_uses=0; calls=9;
   ecx_pointer_setup=9; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=3; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_0067A020(AiPlrClassTy *this,AnonShape_0068FD00_A5257008 *param_1,int param_2)

{
  AiTactClassTy *this_00;
  uint uVar1;
  undefined4 *puVar2;
  DArrayTy *pDVar3;
  uint uVar4;

  pDVar3 = this->field_0695;
  if (pDVar3 != nullptr) {
    uVar1 = pDVar3->count;
    uVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((pDVar3 != nullptr) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
          if (uVar4 < uVar1) {
            puVar2 = DArrayAt<undefined4>(pDVar3, uVar4);
          }
          else {
            puVar2 = nullptr;
          }
          if (((puVar2[1] != 0) &&
              (this_00 = (AiTactClassTy *)*puVar2, this_00 != nullptr)) &&
             (param_1 != nullptr)) {
            if (param_2 < 0) {
              st::fn_004010E1(this_00,param_1);
            }
            else {
              st::fn_00403C42(this_00,(int)param_1,(short)param_2);
            }
          }
        }
        uVar4 = uVar4 + 1;
        pDVar3 = this->field_0695;
        uVar1 = pDVar3->count;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}

// 0067A240 AiPlrClassTy::sub_0067A240
#line 4 "decomp/ST.exe/functions/0067A240/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0067C180 -> 0067A240 @ 0067C248 | 0067C180 -> 0067A240 @ 0067C4CC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0067A240(AiPlrClassTy *this,undefined *param_1,DArrayTy *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;

  pDVar4 = this->field_0695;
  if (pDVar4 != nullptr) {
    uVar1 = pDVar4->count;
    uVar5 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((pDVar4 != nullptr) && (-1 < (int)uVar5)) && ((int)uVar5 < (int)uVar1)) {
          if (uVar5 < uVar1) {
            puVar2 = DArrayAt<undefined4>(pDVar4, uVar5);
          }
          else {
            puVar2 = nullptr;
          }
          if (((puVar2[1] != 0) && ((void *)*puVar2 != nullptr)) &&
             (iVar3 = st::fn_00404287((void *)*puVar2,param_1,param_2), iVar3 != 0)) {
            return;
          }
        }
        pDVar4 = this->field_0695;
        uVar5 = uVar5 + 1;
        uVar1 = pDVar4->count;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return;
}

// 0067BEF0 AiPlrClassTy::sub_0067BEF0
#line 4 "decomp/ST.exe/functions/0067BEF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067BFD0 -> 0067BEF0 @ 0067C078

   [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0067BEF0(AiPlrClassTy *this)

{
  int iVar1;

  iVar1 = this->field_068D + 1;
  this->field_068D = iVar1;
  if ((0xff < iVar1) && (iVar1 < 0x401)) {
    return iVar1;
  }
  this->field_068D = 0x100;
  return STReplaceLowWord((uint32_t)(iVar1), (uint16_t)(0x100));
}

// 0067BF30 AiPlrClassTy::sub_0067BF30
#line 4 "decomp/ST.exe/functions/0067BF30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067BFD0 -> 0067BF30 @ 0067C068

   [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0067BF30(AiPlrClassTy *this)

{
  uint uVar1;

  uVar1 = this->field_00A4 * 0x41c64e6d + 0x3039;
  this->field_00A4 = uVar1;
  return (uVar1 >> 0x10 & 1) + 1;
}

// 0067BFD0 AiPlrClassTy::sub_0067BFD0
#line 4 "decomp/ST.exe/functions/0067BFD0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0067BFD0 -> 0067BC10 @ 0067C02E | 0067BFD0 -> 0067BC80 @ 0067C01C */

void __thiscall st::fn_0067BFD0(AiPlrClassTy *this,DArrayTy *param_1,DArrayTy *param_2)

{
  AiPlrClassTy *this_00;
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  AnonShape_0068FD00_A5257008 **ppAVar4;
  uint uVar5;
  bool bVar6;
  AnonShape_0068FD00_A5257008 *local_40;
  uint local_3c;
  undefined1 local_38;
  int local_37;
  undefined4 local_33;
  undefined2 local_2f;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  AiPlrClassTy *local_c;
  uint local_8;

  local_8 = 0;
  if (0 < (int)param_1->count) {
    bVar6 = param_1->count != 0;
    local_c = this;
    do {
      uVar5 = local_8;
      if ((((bVar6) &&
           (puVar3 = DArrayAt<ushort>(param_1, local_8),
           puVar3 != nullptr)) && (*puVar3 != 0)) &&
         ((puVar1 = (ushort *)st::fn_00401B72(param_2,*(uint *)(puVar3 + 4)),
          puVar1 != nullptr ||
          (puVar1 = (ushort *)st::fn_00401956(param_2), puVar1 != nullptr)))) {
        *(uint *)(puVar3 + 6) = (uint)*puVar1;
        ppAVar4 = &local_40;
        for (iVar2 = 0xd; this_00 = local_c, iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppAVar4 = nullptr;
          ppAVar4 = ppAVar4 + 1;
        }
        local_40 = (AnonShape_0068FD00_A5257008 *)0x67;
        local_38 = 0;
        local_3c = local_c->field_06FE;
        local_37 = st::fn_00402A09(local_c);
        local_33 = *(undefined4 *)(puVar3 + 6);
        iVar2 = st::fn_00404228(this_00);
        local_2f = (undefined2)iVar2;
        local_2d = *(undefined4 *)(puVar1 + 2);
        local_29 = *(undefined4 *)(puVar1 + 4);
        local_25 = *(undefined4 *)(puVar1 + 6);
        st::fn_00405DC6(this_00,(AnonShape_0068FD00_A5257008 *)&local_40,(uint)*puVar3);
        uVar5 = local_8;
      }
      local_8 = uVar5 + 1;
      bVar6 = local_8 < param_1->count;
    } while ((int)local_8 < (int)param_1->count);
  }
  return;
}

// 0067C110 AiPlrClassTy::sub_0067C110
#line 4 "decomp/ST.exe/functions/0067C110/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0067C110(AiPlrClassTy *this)

{
  int iVar1;
  AnonShape_0068FD00_A5257008 **ppAVar2;
  AnonShape_0068FD00_A5257008 *local_38;
  uint local_34;
  undefined1 local_30;

  ppAVar2 = &local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppAVar2 = nullptr;
    ppAVar2 = ppAVar2 + 1;
  }
  local_34 = this->field_06FE;
  this->field_0689 = 0;
  local_38 = (AnonShape_0068FD00_A5257008 *)0x67;
  local_30 = 1;
  st::fn_00405DC6(this,(AnonShape_0068FD00_A5257008 *)&local_38,-1);
  return;
}

