#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/EditorClassTy.cpp

// 007209B0 EditorClassTy::EditorClassTy
#line 4 "decomp/ST.exe/functions/007209B0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E2B4 (store 007209BA)
   Evidence: final_vptr=0079E2B4; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=007233B0->007209B0->007209B0; allocation_size=536 */

EditorClassTy * __thiscall st::fn_007209B0(EditorClassTy *this)

{
  st::fn_0072B700(st::pointer_boundary_cast<undefined4 *>(&this->vtable));
  this->vtable = &st_global_0079E2B4;
  this->field_0200 = 0;
  this->field_01FC = 0;
  return this;
}

