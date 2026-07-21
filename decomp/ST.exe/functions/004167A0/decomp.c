
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0];
   agreed_this_calls=1; incoming_this_accesses=4; incoming_edx_uses=0;
   incoming_stack_parameter_uses=0; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::sub_004167A0
          (AnonReceiver_00417FF0 *this)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_007901d0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (*(int *)&this->field_0x97 != 0) {
    ExceptionList = &local_14;
    FreeAndNull((void **)&this->field_0x97);
    *(undefined4 *)&this->field_0x9b = 0;
    *(undefined4 *)&this->field_0xd3 = 0;
    this->field_0xe3 = 0;
  }
  ExceptionList = local_14;
  return;
}

