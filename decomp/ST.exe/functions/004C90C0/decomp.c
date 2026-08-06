#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall TLOBaseTy::sub_004C90C0(TLOBaseTy *this)

{
  TLOBaseTy_field_05ACState TVar1;
  int iVar2;

  iVar2 = *(int *)&this->field_0x361;
  if (iVar2 == 0) {
    return 1;
  }
  if (iVar2 == 1) {
    iVar2 = sub_004CE7D0(this);
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 5) {
        sub_004CC900(this);
      }
      iVar2 = 1;
      goto LAB_004c9106;
    }
    iVar2 = sub_004E3120(this);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_004c9106:
  *(undefined4 *)&this->field_0x361 = 0;
  if ((((*(int *)(&DAT_00792778 + this->field_0235 * 4) != 0) &&
       ((TVar1 = this->field_05AC, TVar1 != CASE_45 || (this->field_04D0 == CASE_1)))) &&
      ((TVar1 != CASE_4E || (this->field_04D0 == CASE_1)))) &&
     ((TVar1 != CASE_72 || (this->field_04D0 == CASE_1)))) {
    this->field_0261 = 1;
    *(undefined4 *)&this->field_0x2e1 = 1;
  }
  RotateSpr(this,1);
  return iVar2;
}

