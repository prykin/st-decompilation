
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManRuinC::sub_00631220(STManRuinC *this,int *param_1)

{
  DArrayTy *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;

  pDVar1 = this->field_0038;
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  local_10 = 0x55;
  if (pDVar1 != (DArrayTy *)0x0) {
    local_10 = pDVar1->count * pDVar1->elementSize;
    local_8 = local_10 + 0x20;
    local_10 = local_10 + 0x75;
  }
  if (this->field_0034 != 0) {
    local_10 = local_10 + this->field_0030;
  }
  iVar3 = local_10;
  puVar2 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_10);
  this->field_0065 = this->field_0071;
  if (puVar2 == (undefined4 *)0x0) {
    *param_1 = iVar3;
    return;
  }
  this->field_0028 = 2;
  if (this == (STManRuinC *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = &this->field_001C;
  }
  puVar7 = puVar2;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
  this->field_0061 = -1;
  if (this->field_0038 != (DArrayTy *)0x0) {
    local_14 = (undefined4 *)FUN_006b0020(&this->field_0038->flags,(int *)&local_8);
    *(uint *)((int)puVar2 + 0x55) = local_8;
    local_c = (undefined4 *)((int)puVar2 + 0x59);
    puVar6 = local_14;
    puVar7 = local_c;
    for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    if (local_14 != (undefined4 *)0x0) {
      FreeAndNull(&local_14);
    }
  }
  if ((undefined4 *)this->field_0034 != (undefined4 *)0x0) {
    if (local_8 == 0) {
      local_c = (undefined4 *)((int)puVar2 + 0x55);
    }
    else {
      local_c = (undefined4 *)((int)local_c + local_8);
    }
    uVar4 = this->field_0030;
    puVar2 = (undefined4 *)this->field_0034;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_c = *puVar2;
      puVar2 = puVar2 + 1;
      local_c = local_c + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)local_c = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      local_c = (undefined4 *)((int)local_c + 1);
    }
  }
  *param_1 = local_10;
  return;
}

