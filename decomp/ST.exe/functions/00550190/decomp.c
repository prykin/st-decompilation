
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STPlaySystemC::sub_00550190(STPlaySystemC *this)

{
  uint uVar1;

  uVar1 = this->field_00E4 + 1;
  this->field_0028 = 1;
  this->field_00E4 = uVar1;
  if ((uVar1 - this->field_0034 == 6000) && (g_optPanel_008016DC != (OptPanelTy *)0x0)) {
    thunk_FUN_00533b80(g_optPanel_008016DC);
    return;
  }
  return;
}

