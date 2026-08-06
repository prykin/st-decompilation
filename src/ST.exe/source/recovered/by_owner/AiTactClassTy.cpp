#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/AiTactClassTy.cpp

// 0068DC00 AiTactClassTy::AiTactClassTy
#line 1 "decomp/ST.exe/functions/0068DC00/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D76C (store 0068DC0B)
   Evidence: final_vptr=0079D76C; returns_this=true; calls_before=1; field_writes_after=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiTactClassTy * __thiscall st::fn_0068DC00(AiTactClassTy *this)

{

  st::fn_006E60E0(this);
  this->vtable = &AiTactClassTyVTable;
  memset(&this->field_0020, 0, 0x10c); /* compiler bulk-zero initialization */
  this->field_0020 = 0x38e;
  this->field_009D = 0xff;
  this->field_0130 = nullptr;
  this->field_0134 = 0;
  this->field_0138 = 0;
  this->field_013C = 0;
  this->field_0140 = 0;
  return this;
}

// 0068E010 AiTactClassTy::sub_0068E010
#line 1 "decomp/ST.exe/functions/0068E010/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0068E010(AiTactClassTy *this)

{
  AnonShape_00691480_E757992C *pAVar1;

  if (this == nullptr) {
    pAVar1 = nullptr;
  }
  else {
    pAVar1 = (AnonShape_00691480_E757992C *)&this->field_0020;
  }
  st::fn_00402202(pAVar1);
  if (this->field_0130 != nullptr) {
    st::fn_006AB060(&this->field_0130);
  }
  return;
}

// 0068E290 AiTactClassTy::sub_0068E290
#line 1 "decomp/ST.exe/functions/0068E290/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

int __thiscall st::fn_0068E290(AiTactClassTy *this,short param_1)

{
  AiTactClassTy_field_00A5DArray *pAVar1;
  uint uVar2;
  int iVar3;
  AiTactClassTy_field_00A5Element *element_00a5;
  uint uVar5;
  bool bVar6;

  pAVar1 = this->field_00A5;
  uVar5 = 0;
  uVar2 = pAVar1->count;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (bVar6) {
        element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar1, uVar5);
      }
      else {
        element_00a5 = nullptr;
      }
      iVar3 = element_00a5->field_0004;
      if ((iVar3 != 0) && (*(short *)(iVar3 + 0x7d) == param_1)) {
        return iVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return 0;
}

// 0068E480 AiTactClassTy::sub_0068E480
#line 1 "decomp/ST.exe/functions/0068E480/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall st::fn_0068E480(AiTactClassTy *this,short param_1)

{
  AiTactClassTy_field_00A5DArray *pAVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  AiTactClassTy_field_00A5Element *element_00a5;
  uint uVar6;
  bool bVar7;

  pAVar1 = this->field_00A5;
  uVar4 = 0xffffffff;
  uVar2 = pAVar1->count;
  uVar6 = 0;
  if (0 < (int)uVar2) {
    bVar7 = uVar2 != 0;
    do {
      if (bVar7) {
        element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar1, uVar6);
      }
      else {
        element_00a5 = nullptr;
      }
      iVar3 = element_00a5->field_0004;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((iVar3 != 0) && (*(short *)(iVar3 + 0x7b) == param_1)) && (-1 < *(short *)(iVar3 + 0x7f))
         ) {
        uVar4 = uVar6;
      }
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
  }
  return uVar4;
}

// 0068E610 AiTactClassTy::sub_0068E610
#line 1 "decomp/ST.exe/functions/0068E610/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0068E610(AiTactClassTy *this,int param_1)

{
  AiTactClassTy_field_00A5Element *element_00a5;
  uint uVar2;
  AiTactClassTy_field_00A5DArray *pAVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar4 = 0;
  uVar5 = 0;
  pAVar3 = this->field_00A5;
  if (0 < (int)pAVar3->count) {
    bVar6 = pAVar3->count != 0;
    do {
      if (bVar6) {
        element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar3, uVar5);
      }
      else {
        element_00a5 = nullptr;
      }
      if ((AnonReceiver_0065DA50 *)element_00a5->field_0004 != nullptr) {
        uVar2 = st::fn_00404A20
                          ((AnonReceiver_0065DA50 *)element_00a5->field_0004,param_1,-1);
        iVar4 = iVar4 + uVar2;
      }
      pAVar3 = this->field_00A5;
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < pAVar3->count;
    } while ((int)uVar5 < (int)pAVar3->count);
  }
  return iVar4;
}

// 0068E730 AiTactClassTy::FUN_0068e730
#line 1 "decomp/ST.exe/functions/0068E730/decomp.c"
undefined4 __thiscall st::fn_0068E730(AiTactClassTy *this,int param_1)

{
  AiTactClassTy_field_00A5DArray *pAVar1;
  uint uVar2;
  AiTactClassTy_field_00A5Element *element_00a5;

  if (param_1 == 0) {
    return 0xfffffffc;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = st::fn_00402BEE(this,*(int *)(param_1 + 0x18));
  if ((int)uVar2 < 0) {
    return 0xfffffffc;
  }
  pAVar1 = this->field_00A5;
  if (uVar2 < pAVar1->count) {
    element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar1, uVar2);
  }
  else {
    element_00a5 = nullptr;
  }
  element_00a5->field_0004 = 0;
  element_00a5->field_0000 = nullptr;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_00405957(this,*(short *)(param_1 + 0x7d));
  st::fn_00404F2A(param_1);
  return 0;
}

// 00690230 AiTactClassTy::sub_00690230
#line 1 "decomp/ST.exe/functions/00690230/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00690230(AiTactClassTy *this,uint *param_1)

{
  AiFltClassTy *this_00;
  undefined1 *puVar1;
  AiTactClassTy_field_00A5DArray *pAVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  pAVar2 = this->field_00A5;
  if (0 < (int)pAVar2->count) {
    bVar4 = pAVar2->count != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if (((bVar4) &&
          (puVar1 = (undefined1 *)((int)&pAVar2->data->field_0000 + pAVar2->elementSize * uVar3),
          (undefined4 *)puVar1 != nullptr)) &&
         (this_00 = *(AiFltClassTy **)(puVar1 + 4), this_00 != nullptr)) {
        st::fn_00401555(this_00,param_1);
      }
      pAVar2 = this->field_00A5;
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < pAVar2->count;
    } while ((int)uVar3 < (int)pAVar2->count);
  }
  return;
}

// 006902B0 AiTactClassTy::sub_006902B0
#line 1 "decomp/ST.exe/functions/006902B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_006902B0(AiTactClassTy *this,short param_1,uint *param_2)

{
  AiFltClassTy *this_00;
  undefined1 *puVar1;
  AiTactClassTy_field_00A5DArray *pAVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  pAVar2 = this->field_00A5;
  if (0 < (int)pAVar2->count) {
    bVar4 = pAVar2->count != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((((bVar4) &&
           (puVar1 = (undefined1 *)((int)&pAVar2->data->field_0000 + pAVar2->elementSize * uVar3),
           (undefined4 *)puVar1 != nullptr)) &&
          (this_00 = *(AiFltClassTy **)(puVar1 + 4), this_00 != nullptr)) &&
         (this_00->field_007B == param_1)) {
        st::fn_00401555(this_00,param_2);
      }
      pAVar2 = this->field_00A5;
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < pAVar2->count;
    } while ((int)uVar3 < (int)pAVar2->count);
  }
  return;
}

// 00690A40 AiTactClassTy::sub_00690A40
#line 1 "decomp/ST.exe/functions/00690A40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00690A40(AiTactClassTy *this)

{
  uint uVar1;

  uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar1;
  this->field_0089 = (uVar1 >> 0x10 & 7) + 8;
  uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar1;
  this->field_0091 = (uVar1 >> 0x10 & 7) + 8;
  return;
}

// 00690AB0 AiTactClassTy::sub_00690AB0
#line 1 "decomp/ST.exe/functions/00690AB0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00690AB0(AiTactClassTy *this)

{
  int iVar1;

  if ((this->field_0089 == 0) || (this->field_008D + this->field_0089 <= this->field_012C)) {
    this->field_008D = this->field_012C;
    iVar1 = st::fn_00403440(CASE_DE,0,0,0,-1,-1);
    this->field_0134 = iVar1;
    iVar1 = st::fn_00403440(CASE_DD,0,0,0,-1,-1);
    this->field_0138 = iVar1;
    iVar1 = st::fn_00403440(CASE_E1,0,0,0,-1,-1);
    this->field_013C = iVar1;
    iVar1 = st::fn_00403440(CASE_E2,0,0,0,-1,-1);
    this->field_0140 = iVar1;
  }
  return;
}

