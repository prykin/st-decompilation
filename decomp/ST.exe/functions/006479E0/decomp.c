
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STVolcanoC::sub_006479E0(STVolcanoC *this)

{
  if (-1 < this->field_005D) {
    FUN_006e8ba0(PTR_00807598,this->field_005D);
    this->field_005D = -1;
  }
  if (-1 < this->field_007A) {
    FUN_006e8ba0(PTR_00807598,this->field_007A);
    this->field_007A = -1;
  }
  if (-1 < this->field_0086) {
    FUN_006e8ba0(PTR_00807598,this->field_0086);
    this->field_0086 = -1;
  }
  return;
}

