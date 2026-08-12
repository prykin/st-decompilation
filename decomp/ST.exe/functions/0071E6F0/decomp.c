#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E298 (store 0071E6FA)
   Evidence: final_vptr=0079E298; returns_this=true; calls_before=1; field_writes_after=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=0071F210->0071E6F0->0071E6F0; allocation_size=504 */

ViewerClassTy * __thiscall ViewerClassTy::ViewerClassTy(ViewerClassTy *this)

{
  FUN_0072b700(&this->vtable);
  this->vtable = &ViewerClassTyVTable;
  this->field_01F0 = 0;
  this->field_01EC = 0;
  this->field_01B8 = 0;
  this->field_01B4 = 0;
  this->field_01C4 = 0;
  return this;
}

