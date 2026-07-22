
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067BFD0 -> 0067BF30 @ 0067C068

   [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall AiPlrClassTy::sub_0067BF30(AiPlrClassTy *this)

{
  uint uVar1;

  uVar1 = this->field_00A4 * 0x41c64e6d + 0x3039;
  this->field_00A4 = uVar1;
  return (uVar1 >> 0x10 & 1) + 1;
}

