#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEEC (store 005577C9)
   Evidence: final_vptr=0079AEEC; returns_this=true; calls_before=1; field_writes_after=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

VisibleClassTy * __thiscall VisibleClassTy::VisibleClassTy(VisibleClassTy *this)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  byte **ppbVar4;

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
  this->field_0038 = nullptr;
  this->field_004C = nullptr;
  this->field_0050 = nullptr;
  ppvVar3 = &this->field_0054;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar3 = nullptr;
    ppvVar3 = ppvVar3 + 1;
  }
  ppbVar4 = this->field_0074;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppbVar4 = nullptr;
    ppbVar4 = ppbVar4 + 1;
  }
  ppbVar4 = this->field_0094;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppbVar4 = nullptr;
    ppbVar4 = ppbVar4 + 1;
  }
  this->field_003C[0] = nullptr;
  this->field_003C[1] = nullptr;
  this->field_003C[2] = nullptr;
  this->field_003C[3] = nullptr;
  this->field_00F4 = nullptr;
  this->field_0110 = nullptr;
  this->field_0114 = 0;
  this->field_00F8 = 1;
  memset(&this->field_0118, 0, 0xc0); /* compiler bulk-zero initialization */
  iVar2 = 0;
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

