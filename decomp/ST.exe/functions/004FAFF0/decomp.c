
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004FAFF0(CPanelTy *this)

{
  if ((((DAT_00808784 == 0) && (DAT_00808788 == 0)) && (DAT_0080878c == 0)) &&
     (((DAT_00808790 == 0 && (-1 < this->field_0237)) && (-1 < this->field_023B)))) {
    thunk_FUN_004ab530((uint)DAT_00807349,(uint *)this->field_0237,this->field_023B);
  }
  return;
}

