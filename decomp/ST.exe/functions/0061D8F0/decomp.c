
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STLightC::sub_0061D8F0(STLightC *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  DArrayTy *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_10;
  int local_c;
  int *local_8;

  if (this == (STLightC *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)&this->field_0x1c;
  }
  puVar5 = param_1;
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  local_c = sub_0061D9C0(this,(ushort *)(param_1 + 0x24),&local_10,1);
  piVar1 = (int *)(local_c + (int)(param_1 + 0x24));
  piVar6 = piVar1 + 1;
  local_8 = piVar6;
  piVar2 = (int *)Library::DKW::LIB::FUN_006aac70(this->field_0093 << 4);
  this->field_0057 = piVar2;
  for (iVar4 = (this->field_0093 & 0xfffffffU) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar2 = piVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar2 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar2 = (int *)((int)piVar2 + 1);
  }
  pDVar3 = (DArrayTy *)FUN_006b0060((uint *)0x0,(uint *)((int)local_8 + *piVar1 + 4));
  this->field_00A3 = pDVar3;
  return local_c;
}

