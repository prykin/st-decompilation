
/* [STPrototypeApplier] Propagated return.
   Evidence: 00617FB0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006176B2

   [STMethodOwnerApplier] Structural method owner recovered as JumpManagC.
   Evidence: this_call_owners=[JumpManagC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall JumpManagC::sub_00617FB0(JumpManagC *this,int *param_1)

{
  DArrayTy *pDVar1;
  AnonPointee_JumpManagC_0062 *pAVar2;
  AnonPointee_JumpManagC_0066 *pAVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  byte *pbVar12;
  uint *puVar13;
  uint *local_c;
  uint local_8;

  pDVar1 = this->field_005E;
  if (pDVar1 == (DArrayTy *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = pDVar1->count * pDVar1->elementSize + 0x1c;
  }
  pAVar2 = this->field_0062;
  if (pAVar2 == (AnonPointee_JumpManagC_0062 *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = pAVar2->field_000C * pAVar2->field_0008 + 0x1c;
  }
  pAVar3 = this->field_0066;
  if (pAVar3 == (AnonPointee_JumpManagC_0066 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = pAVar3->field_000C * pAVar3->field_0008 + 0x1c;
  }
  iVar8 = iVar4 + iVar6 + 0x5e + iVar8;
  pbVar5 = (byte *)Library::DKW::LIB::FUN_006aac70(iVar8);
  puVar10 = (undefined4 *)&this->field_0x1c;
  pbVar12 = pbVar5;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    pbVar12 = pbVar12 + 4;
  }
  puVar9 = (uint *)(pbVar5 + 0x52);
  *(undefined2 *)pbVar12 = *(undefined2 *)puVar10;
  pbVar5[0xc] = 2;
  pbVar5[0xd] = 0;
  pbVar5[0xe] = 0;
  pbVar5[0xf] = 0;
  if (this->field_005E != (DArrayTy *)0x0) {
    local_c = (uint *)FUN_006b0020(&this->field_005E->flags,(int *)&local_8);
    *puVar9 = local_8;
    puVar9 = local_c;
    puVar11 = (uint *)(pbVar5 + 0x56);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(byte *)puVar11 = (byte)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar11 = (uint *)((int)puVar11 + 1);
    }
    puVar9 = (uint *)((int)(pbVar5 + 0x56) + local_8);
    FreeAndNull(&local_c);
  }
  if (this->field_0062 != (AnonPointee_JumpManagC_0062 *)0x0) {
    local_c = (uint *)FUN_006b0020((uint *)this->field_0062,(int *)&local_8);
    *puVar9 = local_8;
    puVar11 = local_c;
    puVar13 = puVar9 + 1;
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(byte *)puVar13 = (byte)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar13 = (uint *)((int)puVar13 + 1);
    }
    puVar9 = (uint *)((int)(puVar9 + 1) + local_8);
    FreeAndNull(&local_c);
  }
  if (this->field_0066 != (AnonPointee_JumpManagC_0066 *)0x0) {
    local_c = (uint *)FUN_006b0020((uint *)this->field_0066,(int *)&local_8);
    *puVar9 = local_8;
    puVar11 = local_c;
    for (uVar7 = local_8 >> 2; puVar9 = puVar9 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar11;
      puVar11 = puVar11 + 1;
    }
    for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
      *(byte *)puVar9 = (byte)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    FreeAndNull(&local_c);
    *param_1 = iVar8;
    return pbVar5;
  }
  *param_1 = iVar8;
  return pbVar5;
}

