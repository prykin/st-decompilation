#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C584 (store 005F3453)
   Evidence: final_vptr=0079C584; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005F3440 returns STBHEShellC::STBHEShellC this @ 005F345F */

STBHEShellC * __thiscall STBHEShellC::STBHEShellC(STBHEShellC *this)

{

  sub_006E60E0(this);
  this->vtable = &STBHEShellCVTable;
  memset(&this->field_0x4d, 0, 0x128); /* compiler bulk-zero initialization */
  return this;
}

