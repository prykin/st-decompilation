#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEEC (store 005577C9)
   Evidence: final_vptr=0079AEEC; returns_this=true; calls_before=1; field_writes_after=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

VisibleClassTy * __thiscall VisibleClassTy::VisibleClassTy(VisibleClassTy *this)

{
  int iVar1;

  sub_006E60E0(this);
  this->vtable = &VisibleClassTyVTable;
  g_visibleClass_00802A88 = this;
  this->field_0024 = 0;
  this->field_0020 = 0;
  this->field_002C = 0;
  this->field_0028 = 0;
  this->field_0034 = 0;
  this->field_0030 = 0;
  this->field_0104 = 1;
  this->field_0038 = (byte *)0x0;
  this->field_004C = (byte *)0x0;
  this->field_0050 = (ushort *)0x0;
  memset(&this->field_0054, 0, 0x20); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0074, 0, 0x20); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0094, 0, 0x20); /* compiler bulk-zero initialization */
  iVar1 = 0;
  this->field_003C = 0;
  this->field_0040 = 0;
  this->field_0044 = 0;
  this->field_0048 = 0;
  this->field_00F4 = (DArrayTy *)0x0;
  this->field_0110 = (DArrayTy *)0x0;
  this->field_0114 = 0;
  this->field_00F8 = 1;
  memset(&this->field_0118, 0, 0xc0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_01D8, 0, 0xc0); /* compiler bulk-zero initialization */
  this->field_00FC = 0;
  this->field_0100 = 0;
  iVar1 = thunk_FUN_004ab050();
  this->field_010C = iVar1;
  return this;
}

