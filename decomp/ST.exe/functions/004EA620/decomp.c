
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004EA620(TLOBaseTy *this)

{
  uint uVar1;

  if (this->field_0245 == CASE_4) {
    uVar1 = this->field_046C;
    if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) {
      return 0;
    }
    this->field_046C = 0;
    this->field_0470 = 0;
    if (this->field_0494 != 0) {
      thunk_FUN_004d0a80(DAT_00800bcc,this->field_0480,this->field_0484,this->field_0488);
      this->field_0494 = 0;
    }
  }
  return 1;
}

