#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D67C (store 0064CCA4)
   Evidence: final_vptr=0079D67C; returns_this=true; calls_before=0; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   unique_exact_object_extent=1463; extent_write_count=3 */

AiEventClassTy * __thiscall AiEventClassTy::AiEventClassTy(AiEventClassTy *this)

{
  int iVar1;
  undefined4 *puVar2;

  this->field_0004 = '\0';
  this->field_0084 = 0;
  this->vtable = &AiEventClassTyVTable;
  if (this == nullptr) {
    puVar2 = nullptr;
  }
  else {
    puVar2 = (undefined4 *)&this->field_008C;
  }
  memset(puVar2, 0, 0x49f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x49c);
  iVar1 = 0;
  thunk_FUN_006728f0((undefined4 *)&DAT_007d3f78);
  this->field_05B3 = nullptr;
  memset(this->field_052F, 0, 0x84); /* compiler bulk-zero initialization */
  return this;
}

