
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CursorClassTy::sub_0054A8D0(CursorClassTy *this)

{
  if ((g_tLOBldMark_007FB2AC != (TLOBldMark *)0x0) && (g_tLOBldMark_007FB2AC->field_0018 == 0)) {
    thunk_FUN_004c63f0((AnonShape_004C63F0_0B060A14 *)g_tLOBldMark_007FB2AC);
  }
  if ((this->field_00DE == CASE_5) && (-1 < this->field_010B)) {
    if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
      FUN_006e8ba0(PTR_00807598,this->field_010B);
    }
    this->field_010B = -1;
    if (this->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)this->field_00AD);
    }
    else if (this->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this->field_0060,(uint)this->field_001C,0xfffffffe,this->field_0034,
                 this->field_0038);
    }
    DrawSprite(this,this->field_00C5,this->field_00C9);
    this->field_00DE = CASE_0;
  }
  this->field_04A2 = 0;
  this->field_04AA = 0;
  this->field_04A6 = 0;
  return;
}

