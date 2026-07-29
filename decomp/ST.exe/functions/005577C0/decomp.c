#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEEC (store 005577C9)
   Evidence: final_vptr=0079AEEC; returns_this=true; calls_before=1; field_writes_after=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

VisibleClassTy * __thiscall VisibleClassTy::VisibleClassTy(VisibleClassTy *this)

{
  int iVar1;
  void **ppvVar2;
  byte **ppbVar3;

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
  ppvVar2 = &this->field_0054;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppvVar2 = (void *)0x0;
    ppvVar2 = ppvVar2 + 1;
  }
  ppbVar3 = this->field_0074;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppbVar3 = (byte *)0x0;
    ppbVar3 = ppbVar3 + 1;
  }
  ppbVar3 = this->field_0094;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppbVar3 = (byte *)0x0;
    ppbVar3 = ppbVar3 + 1;
  }
  this->field_003C[0] = (void *)0x0;
  this->field_003C[1] = (void *)0x0;
  this->field_003C[2] = (void *)0x0;
  this->field_003C[3] = (void *)0x0;
  this->field_00F4 = (VisibleClassTy_field_00F4DArray *)0x0;
  this->field_0110 = (VisibleClassTy_field_0110DArray *)0x0;
  this->field_0114 = 0;
  this->field_00F8 = 1;
  memset(&this->field_0118, 0, 0xc0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_01D8, 0, 0xc0); /* compiler bulk-zero initialization */
  this->field_00FC[0] = 0;
  this->field_00FC[1] = 0;
  this->field_00FC[2] = 0;
  this->field_00FC[3] = 0;
  this->field_00FC[4] = 0;
  this->field_00FC[5] = 0;
  this->field_00FC[6] = 0;
  this->field_00FC[7] = 0;
  iVar1 = thunk_FUN_004ab050();
  this->field_010C = iVar1;
  return this;
}

