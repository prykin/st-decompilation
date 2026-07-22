
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STParticleC::sub_0062AEF0(STParticleC *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  STParticleC *pSVar3;

  uVar1 = this->field_00CE;
  pSVar3 = this;
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar3 = *param_1;
    param_1 = param_1 + 1;
    pSVar3 = (STParticleC *)&pSVar3->field_0x4;
  }
  *(undefined2 *)pSVar3 = *(undefined2 *)param_1;
  pSVar3->field_0x2 = *(undefined1 *)((int)param_1 + 2);
  this->field_00CE = uVar1;
  this->field_00CA = (ushort *)0x0;
  this->field_00C6 = -1;
  return;
}

