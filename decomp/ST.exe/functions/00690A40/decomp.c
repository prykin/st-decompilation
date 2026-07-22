
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiTactClassTy::sub_00690A40(AiTactClassTy *this)

{
  uint uVar1;

  uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar1;
  this->field_0089 = (uVar1 >> 0x10 & 7) + 8;
  uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar1;
  this->field_0091 = (uVar1 >> 0x10 & 7) + 8;
  return;
}

