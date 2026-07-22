
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall TLOBaseTy::sub_0041D590(TLOBaseTy *this)

{
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && ((this->field_01D1 & 1) == 0)) {
    VisibleClassTy::VisHoleCreate
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (undefined *)(int)this->field_005F,this->field_0024,(undefined *)this->field_0101,
               0x19);
  }
  return;
}

