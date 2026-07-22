#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D714 (store 006788C5)
   Evidence: final_vptr=0079D714; returns_this=true; calls_before=2; field_writes_after=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiPlrClassTy * __thiscall AiPlrClassTy::AiPlrClassTy(AiPlrClassTy *this)

{
  undefined4 *puVar2;

  sub_006E60E0(this);
  thunk_FUN_0064cc90(&this->vtable_at_1c);
  this->vtable = (AiPlrClassTyVTable_at_1C *)&AiPlrClassTyVTable;
  this->vtable_at_1c = &AiPlrClassTyVTable_at_1C;
  if (this == (AiPlrClassTy *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &this->field_05D3;
  }
  memset(puVar2, 0, 0x12a); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x128);
  *(undefined1 *)((int)puVar2 + 2) = 0;
  this->field_05D3 = 0x398;
  this->field_0640 = 0xff;
  return this;
}

