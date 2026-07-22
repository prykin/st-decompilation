
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall STManRuinC::sub_00631390(STManRuinC *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;

  if (this == (STManRuinC *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = &this->field_001C;
  }
  puVar5 = param_1;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
  piVar6 = (int *)((int)param_1 + 0x55);
  this->field_003C = (DArrayTy *)0x0;
  this->field_0061 = -1;
  if (this->field_0038 != (DArrayTy *)0x0) {
    pDVar1 = (DArrayTy *)FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x59));
    this->field_0038 = pDVar1;
    piVar6 = (int *)((int)param_1 + 0x59 + *piVar6);
  }
  if (this->field_0034 != 0) {
    iVar2 = Library::DKW::LIB::FUN_006aac70(this->field_0030);
    this->field_0034 = iVar2;
  }
  if ((int *)this->field_0034 != (int *)0x0) {
    uVar4 = this->field_0030;
    piVar8 = (int *)this->field_0034;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  return this->field_0030;
}

