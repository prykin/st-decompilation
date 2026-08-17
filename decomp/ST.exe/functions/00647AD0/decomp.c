#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D658 (store 00647AE5)
   Evidence: final_vptr=0079D658; returns_this=true; calls_before=2; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiBossClassTy * __thiscall AiBossClassTy::AiBossClassTy(AiBossClassTy *this)

{

  sub_006E60E0(this);
  /* ST_CALLSITE[00647ADE]: CALL 0x00402c2f; direct=00402C2F AiEventClassTy::AiEventClassTy */
  AiEventClassTy::AiEventClassTy((AiEventClassTy *)&this->vtable_at_1c);
  this->vtable = &AiBossClassTyVTable;
  this->vtable_at_1c = &AiBossClassTyVTable_at_1C;
  if (this != nullptr) {
    memset(&this->field_0x5d3, 0, 0x85); /* compiler bulk-zero initialization */
    return this;
  }
  memset(nullptr, 0, 0x85); /* compiler bulk-zero initialization */
  return nullptr;
}

