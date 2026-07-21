#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D6BC (store 0065D23B)
   Evidence: final_vptr=0079D6BC; returns_this=true; calls_before=1; field_writes_after=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiFltClassTy * __thiscall AiFltClassTy::AiFltClassTy(AiFltClassTy *this)

{

  sub_006E60E0(this);
  this->vtable = &AiFltClassTyVTable;
  memset(&this->field_0020, 0, 0x260); /* compiler bulk-zero initialization */
  this->field_0284 = (ushort *)0x0;
  this->field_0020 = 900;
  this->field_007D = 0xfffe;
  this->field_0097 = 0xff;
  return this;
}

