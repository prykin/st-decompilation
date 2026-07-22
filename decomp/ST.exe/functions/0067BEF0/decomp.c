
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067BFD0 -> 0067BEF0 @ 0067C078

   [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall AiPlrClassTy::sub_0067BEF0(AiPlrClassTy *this)

{
  int iVar1;

  iVar1 = this->field_068D + 1;
  this->field_068D = iVar1;
  if ((0xff < iVar1) && (iVar1 < 0x401)) {
    return iVar1;
  }
  this->field_068D = 0x100;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT22((short)((uint)iVar1 >> 0x10),0x100);
}

