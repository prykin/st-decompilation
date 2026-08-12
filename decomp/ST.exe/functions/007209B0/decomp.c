#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E2B4 (store 007209BA)
   Evidence: final_vptr=0079E2B4; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=007233B0->007209B0->007209B0; allocation_size=536 */

EditorClassTy * __thiscall EditorClassTy::EditorClassTy(EditorClassTy *this)

{
  FUN_0072b700(&this->vtable);
  this->vtable = &EditorClassTyVTable;
  this->field_0200 = 0;
  this->field_01FC = 0;
  return this;
}

