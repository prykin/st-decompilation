
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=4; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate */

undefined4 __thiscall
VisibleClassTy::sub_005F1D80(VisibleClassTy *this,int param_1,int param_2,int param_3)

{
  int iVar1;

  if ((DAT_0080874d != -1) && (this->field_00F8 != 0)) {
    sub_00558C00(this,this->field_010C,param_1,param_2,&param_2,&param_1);
    if ((((-1 < param_3) && (((param_3 < 5 && (-1 < param_2)) && (param_2 < this->field_0030)))) &&
        (((iVar1 = g_centeredOffsets5[param_3] + param_1, -1 < iVar1 && (iVar1 < this->field_0034))
         && (this->field_004C != nullptr)))) &&
       (this->field_004C[param_2 + iVar1 * this->field_0030] == 0)) {
      return 0;
    }
  }
  return 1;
}

