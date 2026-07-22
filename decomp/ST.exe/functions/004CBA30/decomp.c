
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004CBA30(TLOBaseTy *this)

{
  uint uVar1;

  uVar1 = GetPlayerRaceId(*(char *)&this->field_023D);
  if (*(int *)(&DAT_00790d30 + ((uVar1 & 0xff) + this->field_0235 * 3) * 4) != 0) {
    if (DAT_0080732c != 0) {
      thunk_FUN_004ad0e0(&this->field_01D5,0xc);
      thunk_FUN_004ad0e0(&this->field_01D5,7);
      return 0;
    }
    STT3DSprC::sub_004AD070((STT3DSprC *)&this->field_01D5,0xc);
    STT3DSprC::sub_004AD070((STT3DSprC *)&this->field_01D5,7);
  }
  return 0;
}

