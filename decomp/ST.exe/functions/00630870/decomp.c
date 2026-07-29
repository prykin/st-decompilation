#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D19C (store 0063087B)
   Evidence: final_vptr=0079D19C; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STManRuinC * __thiscall STManRuinC::STManRuinC(STManRuinC *this)

{

  sub_006E60E0(this);
  this->vtable = &STManRuinCVTable;
  memset(&this->field_001C, 0, 0x55); /* compiler bulk-zero initialization */
  this->field_0061 = 0xffffffff;
  return this;
}

