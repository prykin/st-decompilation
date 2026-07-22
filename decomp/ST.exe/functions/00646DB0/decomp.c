
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STVolcanoC::sub_00646DB0(STVolcanoC *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  if (this == (STVolcanoC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)&this->field_0x1c;
  }
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = *(undefined1 *)param_1;
  this->field_0061 = (ushort *)0x0;
  this->field_005D = -1;
  this->field_007A = -1;
  this->field_0086 = -1;
  return 0x95;
}

