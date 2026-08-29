#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/AiBossClassTy.cpp

// 00647AD0 AiBossClassTy::AiBossClassTy
#line 4 "decomp/ST.exe/functions/00647AD0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D658 (store 00647AE5)
   Evidence: final_vptr=0079D658; returns_this=true; calls_before=2; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiBossClassTy * __thiscall st::fn_00647AD0(AiBossClassTy *this)

{

  st::fn_006E60E0(this);
  /* ST_CALLSITE[00647ADE]: CALL 0x00402c2f; direct=00402C2F AiEventClassTy::AiEventClassTy */
  st::fn_00402C2F(reinterpret_cast<AiEventClassTy *>(&this->vtable_at_1c));
  this->vtable = &st_global_0079D658;
  this->vtable_at_1c = &st_global_0079D618;
  if (this != nullptr) {
    memset(&this->field_0x5d3, 0, 0x85); /* compiler bulk-zero initialization */
    return this;
  }
  memset(nullptr, 0, 0x85); /* compiler bulk-zero initialization */
  return nullptr;
}

// 00647D90 AiBossClassTy::vfunc_30
#line 4 "decomp/ST.exe/functions/00647D90/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00647D90 returns return of FUN_006e6000 @ 00647DA8

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079D618
   Entries: 0040489F
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/1628; unique_owner_for_target */

int __thiscall
st::fn_00647D90
          (AiBossClassTy *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = st::fn_006E6000(&this[-1].field_0x640,param_1,param_2,param_3);
  return iVar1;
}

// 00647ED0 AiBossClassTy::sub_00647ED0
#line 4 "decomp/ST.exe/functions/00647ED0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00647DC0 -> 00647ED0 @ 00647E49

   [STMethodOwnerApplier] Structural method owner recovered as AiBossClassTy.
   Evidence: this_call_owners=[AiBossClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_00647ED0(AiBossClassTy *this)

{
  st::fn_00402E14(reinterpret_cast<AiEventClassTy *>(&this->vtable_at_1c));
  return;
}
