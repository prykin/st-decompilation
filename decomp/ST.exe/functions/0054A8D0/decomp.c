
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __thiscall CursorClassTy::sub_0054A8D0(CursorClassTy *this)

{
  if ((g_tLOBldMark_007FB2AC != (TLOBldMark *)0x0) && (g_tLOBldMark_007FB2AC->field_0018 == 0)) {
    TLOBldMark::sub_004C63F0(g_tLOBldMark_007FB2AC);
  }
  if ((this->field_00DE == CASE_5) && (-1 < this->field_010B)) {
    if (g_sT3DSMAPContext_00807598 != (ST3DSMAPContext *)0x0) {
      Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this->field_010B);
    }
    this->field_010B = -1;
    if (this->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)this->field_00AD);
    }
    else if (this->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this->field_0060,this->field_001C,0xfffffffe,this->field_0034,
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

