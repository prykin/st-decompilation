
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004F1950(CPanelTy *this)

{
  byte *pbVar1;

  pbVar1 = FUN_0070b650(this->field_025B,(uint)(byte)this->field_025F);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this->field_01B4,0xb,9,'\x06',pbVar1);
  Library::DKW::DDX::FUN_006b3640
            ((int *)PTR_008075a8,this->field_017C,0xffffffff,this->field_010C,this->field_0110);
  return;
}

