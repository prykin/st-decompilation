#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D76C (store 0068DC0B)
   Evidence: final_vptr=0079D76C; returns_this=true; calls_before=1; field_writes_after=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiTactClassTy * __thiscall AiTactClassTy::AiTactClassTy(AiTactClassTy *this)

{

  sub_006E60E0(this);
  this->vtable = &AiTactClassTyVTable;
  memset(&this->field_0020, 0, 0x10c); /* compiler bulk-zero initialization */
  this->field_0020 = 0x38e;
  this->field_009D = 0xff;
  this->field_0130 = 0;
  this->field_0134 = 0;
  this->field_0138 = 0;
  this->field_013C = 0;
  this->field_0140 = 0;
  return this;
}

