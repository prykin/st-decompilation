#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E294 (store 0071E048)
   Evidence: final_vptr=0079E294; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=0071E6D0->0071E040->0071E040; allocation_size=104 */

RadioClassTy * __thiscall RadioClassTy::RadioClassTy(RadioClassTy *this)

{
  sub_006E5FB0(this);
  this->vtable = &RadioClassTyVTable;
  this->field_0020 = 0;
  this->field_0024 = 0xffffffff;
  return this;
}

