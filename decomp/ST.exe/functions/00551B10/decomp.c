
/* [STMethodOwnerApplier] Structural method owner recovered as TradePanelTy.
   Evidence: this_call_owners=[TradePanelTy]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall TradePanelTy::sub_00551B10(TradePanelTy *this)

{
  if (this->field_01C0 != 0) {
    this->field_0028 = 0x26;
    FUN_006e6080(this,2,this->field_01C0,(undefined4 *)&this->field_0x18);
    if (*(uint *)&this->field_0x2c !=
        (uint)*(ushort *)(&this->field_0x1bc + (uint)(byte)this->field_01D0 * 2)) {
      this->field_0028 = 0x22;
      *(uint *)&this->field_0x2c =
           (uint)*(ushort *)(&this->field_0x1bc + (uint)(byte)this->field_01D0 * 2);
      FUN_006e6080(this,2,this->field_01C0,(undefined4 *)&this->field_0x18);
    }
    thunk_FUN_00551800((AnonShape_00551800_EBA95FA4 *)this);
  }
  return;
}

