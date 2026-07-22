
/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall SoundManagerTy::sub_00566900(SoundManagerTy *this)

{
  cMf32 *this_00;

  thunk_FUN_00568940(&g_sound,CASE_B);
  if ((cMf32 *)this->field_0018 != (cMf32 *)0x0) {
    cMf32::delete(this_00,(cMf32 *)this->field_0018);
  }
  this->field_0018 = 0;
  this->field_0028 = 0;
  this->field_002C = 0;
  this->field_0030 = 0;
  this->field_0034 = 0;
  this->field_0039 = -1;
  return;
}

