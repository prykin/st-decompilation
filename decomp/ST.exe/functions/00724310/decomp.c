#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E2C8 (store 0072431A)
   Evidence: final_vptr=0079E2C8; returns_this=true; calls_before=1; field_writes_after=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=00724D00->00724310->00724310; allocation_size=100 */

SliderClassTy * __thiscall SliderClassTy::SliderClassTy(SliderClassTy *this)

{
  sub_006E5FB0(this);
  this->vtable = &SliderClassTyVTable;
  this->field_001C = 0;
  this->field_0020 = 0;
  this->field_0024 = 0;
  this->field_0050 = 0;
  return this;
}

