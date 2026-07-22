
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=4; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STDestC::sub_00602440(STDestC *this)

{
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_18 = 0;
  local_10 = this->field_0008;
  local_14 = 10;
  sub_006E60A0(this,local_24);
  this->field_036E = 6;
  return;
}

