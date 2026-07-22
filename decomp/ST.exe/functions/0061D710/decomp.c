
/* [STPrototypeApplier] Propagated return.
   Evidence: 0061D710 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0061D499

   [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STLightC::sub_0061D710(STLightC *this,int *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *local_14;
  uint local_10;
  byte *local_c;
  int local_8;

  iVar4 = 0;
  this->field_00A8 = this->field_00AC;
  iVar8 = this->field_0093;
  iVar11 = 0x90;
  this->field_0028 = 2;
  if (iVar8 != 0) {
    iVar11 = iVar8 * 0x14;
    if (0 < iVar8) {
      piVar7 = (int *)this->field_009B;
      do {
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
        iVar8 = iVar8 + -1;
        iVar4 = iVar4 + iVar1 * 0x14;
      } while (iVar8 != 0);
    }
    iVar11 = iVar11 + 0x94 + iVar4;
  }
  iVar4 = iVar11 + 0x20 + this->field_00A3->count * this->field_00A3->elementSize;
  pbVar2 = (byte *)Library::DKW::LIB::FUN_006aac70(iVar4);
  if (this == (STLightC *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)&this->field_0x1c;
  }
  pbVar12 = pbVar2;
  for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pbVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    pbVar12 = pbVar12 + 4;
  }
  uVar6 = this->field_0093;
  pbVar12 = (byte *)this->field_009B;
  pbVar10 = pbVar2 + 0x90;
  for (uVar5 = uVar6 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar10 = pbVar10 + 4;
  }
  pbVar3 = pbVar2 + 0x90 + uVar6 * 4;
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pbVar10 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  }
  local_c = (byte *)0x0;
  if (0 < this->field_0093) {
    do {
      iVar8 = *(int *)(this->field_009B + (int)local_c * 4);
      pbVar12 = *(byte **)(this->field_009F + (int)local_c * 4);
      pbVar10 = pbVar3;
      for (uVar6 = iVar8 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar10 = pbVar10 + 4;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pbVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar10 = pbVar10 + 1;
      }
      pbVar3 = pbVar3 + iVar8 * 0x14;
      local_c = (byte *)((int)local_c + 1);
    } while ((int)local_c < this->field_0093);
  }
  uVar6 = this->field_0093;
  local_8 = uVar6 * 0x10;
  *(int *)pbVar3 = local_8;
  local_c = pbVar3 + 4 + local_8;
  pbVar12 = (byte *)this->field_0057;
  pbVar10 = pbVar3 + 4;
  for (iVar8 = (uVar6 & 0xfffffff) << 2; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pbVar10 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar10 + 1;
  }
  local_14 = (byte *)FUN_006b0020(&this->field_00A3->flags,(int *)&local_10);
  *(uint *)local_c = local_10 + 4;
  pbVar10 = local_14;
  pbVar12 = local_c;
  for (uVar6 = local_10 >> 2; pbVar12 = pbVar12 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *pbVar12 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  }
  FreeAndNull(&local_14);
  *param_1 = iVar4;
  return pbVar2;
}

