
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=8; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOEmbryoTy::sub_004D10A0(TLOEmbryoTy *this,int param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = ((((0x18 - (int)this->field_029C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 6) * 9;
  uVar2 = uVar1;
  if (param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = (*(int *)(this->field_01F5 + 0x18 + this->field_02F0 * 0x24) -
            *(int *)(this->field_01F5 + this->field_02F0 * 0x24 + 0x10)) + uVar1;
  }
  thunk_FUN_004abce0(&this->field_01D5,*(byte *)&this->field_02F0,uVar1,uVar1 + 8,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,*(char *)&this->field_02F0,uVar2);
  thunk_FUN_004abce0(&this->field_01D5,*(char *)&this->field_02F0 - 1,uVar1,uVar1 + 8,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,*(char *)&this->field_02F0 + -1,uVar2);
  return 0;
}

