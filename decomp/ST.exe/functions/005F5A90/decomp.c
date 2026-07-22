
/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 005F5A90 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F3098

   [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STBHEShellC::sub_005F5A90(STBHEShellC *this,int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *local_c;
  uint local_8;

  pbVar1 = (byte *)Library::DKW::LIB::FUN_006aac70(0x128);
  this->field_016D = this->field_001C;
  puVar5 = (undefined4 *)&this->field_0x4d;
  pbVar6 = pbVar1;
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    pbVar6 = pbVar6 + 4;
  }
  pbVar1[0xc] = 2;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  if (this->field_0169 != (DArrayTy *)0x0) {
    local_c = (byte *)FUN_006b0020(&this->field_0169->flags,(int *)&local_8);
    pbVar2 = (byte *)Library::DKW::LIB::FUN_006acf50((int)pbVar1,local_8 + 300);
    *(uint *)(pbVar2 + 0x128) = local_8;
    pbVar6 = local_c;
    pbVar1 = pbVar2 + 300;
    for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar1 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar1 = pbVar1 + 4;
    }
    for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar1 = pbVar1 + 1;
    }
    if (local_c != (byte *)0x0) {
      FreeAndNull(&local_c);
    }
    *param_1 = local_8 + 0x128;
    return pbVar2;
  }
  *param_1 = 0x128;
  return pbVar1;
}

