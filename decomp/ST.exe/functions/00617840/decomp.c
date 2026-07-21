#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CEBC (store 00617853)
   Evidence: final_vptr=0079CEBC; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00617840 returns JumpManagC::JumpManagC this @ 00617861 */

JumpManagC * __thiscall JumpManagC::JumpManagC(JumpManagC *this)

{

  sub_006E60E0(this);
  this->vtable = &JumpManagCVTable;
  memset(&this->field_0x1c, 0, 0x52); /* compiler bulk-zero initialization */
  return this;
}

