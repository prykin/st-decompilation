
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=7; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate */

void __thiscall
CursorClassTy::sub_0054B630
          (CursorClassTy *this,CursorClassTy_field_04A2State param_1,undefined4 param_2)

{
  sub_0054A8D0(this);
  sub_0054B540(this);
  this->field_04A2 = param_1;
  this->field_04AA = param_2;
  if ((this->field_04B2 <= this->field_00C5) &&
     (this->field_00C5 < this->field_04BA + this->field_04B2)) {
    if ((this->field_04B6 <= this->field_00C9) &&
       (this->field_00C9 < this->field_04BE + this->field_04B6)) {
      this->field_0496 = 1;
      return;
    }
  }
  this->field_0496 = 0;
  return;
}

