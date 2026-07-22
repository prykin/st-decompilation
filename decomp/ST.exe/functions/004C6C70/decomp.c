
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
TLOBaseTy::sub_004C6C70(TLOBaseTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  if (this->field_03DC == 0) {
    thunk_FUN_004c6bb0(this,param_1,param_2,param_3);
  }
  else {
    iVar1 = sub_004EA620(this);
    if (iVar1 != 0) {
      this->field_0400 = 0;
      this->field_03FC = 1;
      this->field_03EC = 1;
      this->field_03F4 = param_2;
      this->field_03F0 = param_1;
      this->field_03F8 = param_3;
      return 0;
    }
  }
  return 0;
}

