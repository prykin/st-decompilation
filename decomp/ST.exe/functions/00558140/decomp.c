#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall VisibleClassTy::sub_00558140(VisibleClassTy *this)

{
  int iVar1;
  byte **ppbVar2;
  void **ppvVar3;

  if (this->field_0038 != nullptr) {
    FreeAndNull(&this->field_0038);
  }
  if (this->field_004C != nullptr) {
    FreeAndNull(&this->field_004C);
  }
  if (this->field_0050 != nullptr) {
    FreeAndNull(&this->field_0050);
  }
  ppvVar3 = &this->field_0054;
  iVar1 = 8;
  do {
    if (*ppvVar3 != nullptr) {
      FreeAndNull(ppvVar3);
    }
    ppvVar3 = ppvVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_0074;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      FreeAndNull(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_0094;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      FreeAndNull(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_00B4;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      FreeAndNull(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppbVar2 = this->field_00D4;
  iVar1 = 8;
  do {
    if (*ppbVar2 != nullptr) {
      FreeAndNull(ppbVar2);
    }
    ppbVar2 = ppbVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar3 = this->field_003C;
  iVar1 = 4;
  do {
    if (*ppvVar3 != nullptr) {
      FreeAndNull(ppvVar3);
    }
    ppvVar3 = ppvVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (this->field_00F4 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_00F4);
    this->field_00F4 = nullptr;
  }
  if (this->field_0110 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_0110);
    this->field_0110 = nullptr;
  }
  return;
}

