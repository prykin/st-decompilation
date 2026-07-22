
/* [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall JumpManagC::sub_00618170(JumpManagC *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  AnonPointee_JumpManagC_0062 *pAVar2;
  AnonPointee_JumpManagC_0066 *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_8;

  puVar5 = param_1;
  puVar7 = (undefined4 *)&this->field_0x1c;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
  piVar6 = (int *)((int)param_1 + 0x52);
  local_8 = 0x52;
  if (this->field_005E != (DArrayTy *)0x0) {
    pDVar1 = (DArrayTy *)FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x56));
    this->field_005E = pDVar1;
    local_8 = *piVar6;
    piVar6 = (int *)((int)param_1 + 0x56 + local_8);
    local_8 = local_8 + 0x52;
  }
  if (this->field_0062 != (AnonPointee_JumpManagC_0062 *)0x0) {
    pAVar2 = (AnonPointee_JumpManagC_0062 *)FUN_006b0060((uint *)0x0,(uint *)(piVar6 + 1));
    this->field_0062 = pAVar2;
    iVar4 = *piVar6;
    piVar6 = (int *)((int)(piVar6 + 1) + iVar4);
    local_8 = local_8 + iVar4;
  }
  if (this->field_0066 != (AnonPointee_JumpManagC_0066 *)0x0) {
    pAVar3 = (AnonPointee_JumpManagC_0066 *)FUN_006b0060((uint *)0x0,(uint *)(piVar6 + 1));
    this->field_0066 = pAVar3;
    return local_8 + *piVar6;
  }
  return local_8;
}

