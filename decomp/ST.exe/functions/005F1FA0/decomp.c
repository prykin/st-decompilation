
/* [STPrototypeApplier] Propagated return.
   Evidence: 005F1FA0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F1236

   [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STManBasisC::sub_005F1FA0(STManBasisC *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ushort **ppuVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  uint *local_14;
  byte *local_10;
  uint local_c;
  uint local_8;

  local_10 = (byte *)0x0;
  local_14 = (uint *)0x0;
  local_8 = 0;
  local_c = 0;
  if (this->field_0038 != (DArrayTy *)0x0) {
    local_10 = (byte *)FUN_006b0020(&this->field_0038->flags,(int *)&local_8);
    if (local_8 == 0) {
      DArrayDestroy(this->field_0038);
      this->field_0038 = (DArrayTy *)0x0;
    }
  }
  if (this->field_003C != (DArrayTy *)0x0) {
    local_14 = (uint *)FUN_006b0020(&this->field_003C->flags,(int *)&local_c);
    if (local_c == 0) {
      DArrayDestroy(this->field_003C);
      this->field_003C = (DArrayTy *)0x0;
    }
  }
  iVar1 = local_c + 0x30 + local_8;
  pbVar3 = (byte *)Library::DKW::LIB::FUN_006aac70(iVar1);
  uVar2 = DAT_00811788;
  this->field_002C = 2;
  this->field_0034 = uVar2;
  ppuVar7 = &this->field_0020;
  pbVar8 = pbVar3;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(ushort **)pbVar8 = *ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    pbVar8 = pbVar8 + 4;
  }
  puVar6 = (uint *)(pbVar3 + 0x28);
  if (local_8 != 0) {
    *puVar6 = local_8;
    pbVar8 = local_10;
    pbVar10 = pbVar3 + 0x2c;
    for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar10 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    }
    FreeAndNull(&local_10);
    puVar6 = (uint *)(pbVar3 + 0x2c + local_8);
  }
  if (local_c != 0) {
    *puVar6 = local_c;
    puVar9 = local_14;
    for (uVar5 = local_c >> 2; puVar6 = puVar6 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(byte *)puVar6 = (byte)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    FreeAndNull(&local_14);
    *param_1 = iVar1;
    return pbVar3;
  }
  *param_1 = iVar1;
  return pbVar3;
}

