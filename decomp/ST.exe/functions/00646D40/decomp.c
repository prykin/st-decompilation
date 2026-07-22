
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STVolcanoC::sub_00646D40(STVolcanoC *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;

  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x95);
  this->field_0028 = 2;
  this->field_00AD = this->field_00B1;
  if (this == (STVolcanoC *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)&this->field_0x1c;
  }
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 *)puVar1 = *(undefined1 *)puVar3;
  *param_1 = 0x95;
  return;
}

