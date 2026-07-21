#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEC0 (store 005556D9)
   Evidence: final_vptr=0079AEC0; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005556D0 returns TraksClassTy::TraksClassTy this @ 00555706 */

TraksClassTy * __thiscall TraksClassTy::TraksClassTy(TraksClassTy *this)

{

  sub_006E60E0(this);
  this->vtable = &TraksClassTyVTable;
  g_traksClass_00802A7C = this;
  this->field_0024 = (DArrayTy *)0x0;
  this->field_0828 = -1;
  memset(&this->field_0x28, 0, 0x800); /* compiler bulk-zero initialization */
  return this;
}

