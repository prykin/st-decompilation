
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STMineSetC::sub_0041D2B0(STMineSetC *this)

{
  int iVar1;

  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00559D60::thunk_FUN_00559d60
              ((AnonReceiver_00559D60 *)g_visibleClass_00802A88,(int)this->field_005B,
               (int)this->field_005D,(char)this->field_005F,this->field_0024,
               (undefined *)this->field_010D,this->field_0018);
  }
  iVar1 = (*this->vtable->vfunc_08)();
  if ((iVar1 == 1) && (this->field_0024 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006e6780(PTR_00807598,
                 CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),(short)this->field_0018));
  }
  this->field_010D = 0xffffffff;
  return;
}

