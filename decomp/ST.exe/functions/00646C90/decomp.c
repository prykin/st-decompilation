#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D610 (store 00646C9B)
   Evidence: final_vptr=0079D610; returns_this=true; calls_before=1; field_writes_after=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STVolcanoC * __thiscall STVolcanoC::STVolcanoC(STVolcanoC *this)

{

  sub_006E60E0(this);
  this->vtable = &STVolcanoCVTable;
  memset(&this->field_0x1c, 0, 0x95); /* compiler bulk-zero initialization */
  this->field_005D = 0xffffffff;
  this->field_007A = -1;
  this->field_0086 = 0xffffffff;
  return this;
}

