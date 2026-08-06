#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/TLOBldMark.cpp

// 004C60A0 TLOBldMark::TLOBldMark
#line 4 "decomp/ST.exe/functions/004C60A0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790C04 (store 004C60AA)
   Evidence: final_vptr=00790C04; returns_this=true; calls_before=1; field_writes_after=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 004C60A0 returns TLOBldMark::TLOBldMark this @ 004C60CC */

TLOBldMark * __thiscall st::fn_004C60A0(TLOBldMark *this)

{
  st::fn_006E5FB0(this);
  this->vtable = &st_global_00790C04;
  this->field_002C = nullptr;
  this->field_0024 = 0;
  this->field_0018 = 1;
  this->field_0030 = 0xffffffff;
  this->field_0034 = 0xffffffff;
  this->field_0038 = 0xffffffff;
  return this;
}

// 004C61A0 TLOBldMark::sub_004C61A0
#line 4 "decomp/ST.exe/functions/004C61A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C61A0(TLOBldMark *this)

{
  if (this->field_0018 == 0) {
    st::fn_004021D5(this->field_002C);
    st::fn_0072E2B0((HoloTy *)this->field_002C);
  }
  g_tLOBldMark_007FB2AC = nullptr;
  return 0;
}

// 004C61E0 TLOBldMark::sub_004C61E0
#line 4 "decomp/ST.exe/functions/004C61E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C61E0(TLOBldMark *this)

{
  DWORD DVar1;

  if (this->field_0018 == 0) {
    DVar1 = st::fn_006E51B0(this->field_0010);
    st::fn_004033AA(this->field_002C,DVar1);
  }
  return 0;
}

// 004C63F0 TLOBldMark::sub_004C63F0
#line 4 "decomp/ST.exe/functions/004C63F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C63F0(TLOBldMark *this)

{
  this->field_0018 = 1;
  st::fn_00404264(this->field_002C,0);
  st::fn_004021D5(this->field_002C);
  st::fn_0072E2B0((HoloTy *)this->field_002C);
  this->field_0024 = 0;
  this->field_0028 = 0;
  return 0;
}

