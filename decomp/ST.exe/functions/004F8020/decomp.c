
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=15; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004F8020(CPanelTy *this,char param_1,int param_2)

{
  char *pcVar1;

  pcVar1 = &this->field_0B63;
  if (param_1 == '\0') {
    pcVar1 = &this->field_0C51;
  }
  if ((((*pcVar1 != '\0') && (DAT_00808784 == 0)) && (DAT_00808788 == 0)) &&
     ((DAT_0080878c == 0 && (DAT_00808790 == 0)))) {
    STAllPlayersC::SetActivePanel(g_allPlayers_007FA174,(uint *)(uint)(param_1 == '\0'),0,param_2);
  }
  return;
}

