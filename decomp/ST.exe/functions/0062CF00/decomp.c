#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D084 (store 0062CF0B)
   Evidence: final_vptr=0079D084; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STManRub3C * __thiscall STManRub3C::STManRub3C(STManRub3C *this)

{

  sub_006E60E0(this);
  this->vtable = &STManRub3CVTable;
  if (this != nullptr) {
    memset(&this->field_001C, 0, 0x98); /* compiler bulk-zero initialization */
    return this;
  }
  memset(nullptr, 0, 0x98); /* compiler bulk-zero initialization */
  return nullptr;
}

