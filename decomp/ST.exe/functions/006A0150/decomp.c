
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall CGenerate::sub_006A0150(CGenerate *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;

  pbVar1 = (byte *)Library::Ourlib::MFSTMAP::mfTMapCreate
                             (this->field_0228,this->field_022C,(int)this->field_0234,
                              this->field_0239,0x20);
  this->field_000C = pbVar1;
  piVar2 = Library::Ourlib::MFSTMAP::FUN_006f0620((short *)pbVar1);
  this->field_0008 = piVar2;
  thunk_FUN_006a2d80(1,piVar2);
  iVar3 = Library::Ourlib::MFSTMAP::AuxTMapRefreshAll((short *)this->field_000C,this->field_0008);
  if (iVar3 != 0) {
    return 0;
  }
  return 1;
}

