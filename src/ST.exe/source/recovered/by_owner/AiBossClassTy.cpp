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
  st::fn_00402C2F(&this->vtable_at_1c);
  this->vtable = &st_global_0079D658;
  this->vtable_at_1c = &st_global_0079D618;
  if (this != nullptr) {
    memset(&this->field_0x5d3, 0, 0x85); /* compiler bulk-zero initialization */
    return this;
  }
  memset(nullptr, 0, 0x85); /* compiler bulk-zero initialization */
  return nullptr;
}

