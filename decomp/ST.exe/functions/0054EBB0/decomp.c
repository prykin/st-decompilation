
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STPlaySystemC::sub_0054EBB0(STPlaySystemC *this,char *param_1,uint param_2)

{
  DWORD DVar1;

  *(uint *)param_1 = this->field_0041;
  this->field_0041 = this->field_0041 + 1;
  AddToRep(this,(undefined4 *)param_1,param_2);
  DVar1 = timeGetTime();
  this->field_007F = DVar1;
  FUN_00715360(g_int_00811764,0,'1',param_1,param_2,1,*(undefined4 *)param_1);
  return;
}

