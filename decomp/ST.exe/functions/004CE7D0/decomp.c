#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall TLOBaseTy::sub_004CE7D0(TLOBaseTy *this)

{
  TLOBaseTy_field_04D0State TVar1;
  int iVar2;

  iVar2 = 1;
  TVar1 = this->field_04D0;
  if (TVar1 != CASE_0) {
    if ((TVar1 != CASE_1) && (TVar1 != CASE_2)) {
      iVar2 = 0;
    }
    if ((this->field_05AC == CASE_40) || (this->field_05AC == CASE_49)) {
      return 0;
    }
    if ((iVar2 != 0) && (this->field_04DC != 0)) {
      thunk_FUN_004d0a80(DAT_00800bcc,this->field_04E0[0],this->field_04E0[1],this->field_04E0[2]);
      this->field_04DC = 0;
    }
  }
  return iVar2;
}

