#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/AppClassTy.cpp

// 006E34C0 AppClassTy::AppClassTy
#line 4 "decomp/ST.exe/functions/006E34C0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E16C (store 006E34CC)
   Evidence: final_vptr=0079E16C; returns_this=true; calls_before=0; field_writes_after=12;
   table_confidence=high */

AppClassTy * __thiscall
st::fn_006E34C0(AppClassTy *this,undefined4 param_1,undefined4 param_2)

{
  this->vtable = &st_global_0079E16C;
  DAT_00856d6c = param_1;
  this->field_0008 = param_2;
  this->field_001C = 0;
  this->field_0020 = 0;
  this->field_0014 = 0;
  this->field_0010 = 0;
  this->field_0004 = 1;
  this->field_000C = 0;
  this->field_0030 = 0;
  this->field_0028 = 0;
  this->field_002C = 0;
  this->field_0034 = 0x14;
  this->field_0024 = 1;
  return this;
}

// 006E5150 AppClassTy::sub_006E5150
#line 4 "decomp/ST.exe/functions/006E5150/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056FA60 -> 006E5150 @ 0056FAAB

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1->id == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STAppC_sub_006E5150_006E5150_MessagePayload_Case_4.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage.

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079E16C
   Entries: 006E5150
   Slots: 0x18
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=0079E16C:6 calls=3
   caller_families=2 receiver_extent=40/20222; unique_owner_for_target

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1->id == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/AppClassTy_sub_006E5150_006E5150_MessagePayload_Case_4.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage. */

undefined4 __thiscall st::fn_006E5150(AppClassTy *this,STMessage *param_1)

{
  if (param_1->id == 4) {
    DAT_00856d74 = (param_1->arg0).u32;
    if ((DAT_00856d74 != 0) && (this->field_0024 != 0)) {
      st::fn_006E4290(0xf,5,0xf,0);
      return 0;
    }
    st::fn_006E4340(this,(int *)0xf,5,0xf,0);
  }
  else if (param_1->id == 0xf) {
    this->field_001C = 1;
    return 0;
  }
  return 0;
}

