#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/ViewerClassTy.cpp

// 0071E6F0 ViewerClassTy::ViewerClassTy
#line 4 "decomp/ST.exe/functions/0071E6F0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E298 (store 0071E6FA)
   Evidence: final_vptr=0079E298; returns_this=true; calls_before=1; field_writes_after=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=0071F210->0071E6F0->0071E6F0; allocation_size=504 */

ViewerClassTy * __thiscall st::fn_0071E6F0(ViewerClassTy *this)

{
  st::fn_0072B700(st::pointer_boundary_cast<undefined4 *>(&this->vtable));
  this->vtable = &st_global_0079E298;
  this->field_01F0 = 0;
  this->field_01EC = 0;
  this->field_01B8 = 0;
  this->field_01B4 = 0;
  this->field_01C4 = 0;
  return this;
}

