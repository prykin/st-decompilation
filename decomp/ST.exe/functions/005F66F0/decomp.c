
/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 005F66F0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F62C9

   [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STColl3C::sub_005F66F0(STColl3C *this,uint *param_1)

{
  uint uVar1;
  STAllPlayersC *pSVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  uint *local_1c;
  byte *local_18;
  STAllPlayersC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_14 = (STAllPlayersC *)this;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0xc2);
  pSVar2 = local_14;
  if (this == (STColl3C *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = (undefined4 *)&this->field_0x231;
  }
  puVar13 = puVar3;
  for (iVar6 = 0x30; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = *(undefined2 *)puVar10;
  puVar3[3] = 2;
  local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&local_14->field_0x1d5,&local_c);
  local_1c = STAllPlayersC::SaveGObjData(pSVar2,(int *)&local_10);
  local_8 = local_10 + 0xca + local_c;
  pbVar4 = (byte *)Library::DKW::LIB::FUN_006acf50((int)puVar3,local_8);
  *(uint *)(pbVar4 + 0xc2) = local_c;
  pbVar12 = local_18;
  pbVar5 = pbVar4 + 0xc6;
  for (uVar7 = local_c >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar12;
    pbVar12 = pbVar12 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar7 = local_c & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar5 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    pbVar5 = pbVar5 + 1;
  }
  FreeAndNull(&local_18);
  puVar9 = (uint *)(pbVar4 + 0xc6 + local_c);
  *puVar9 = local_10;
  puVar11 = local_1c;
  for (uVar7 = local_10 >> 2; puVar9 = puVar9 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = *puVar11;
    puVar11 = puVar11 + 1;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *(byte *)puVar9 = (byte)*puVar11;
    puVar11 = (uint *)((int)puVar11 + 1);
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  FreeAndNull(&local_1c);
  pSVar2 = local_14;
  iVar6 = *(int *)&local_14->field_0x2e6;
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0x58) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)(iVar6 + 0x5c) << 2;
    }
    uVar1 = local_8 + 0x6c + uVar7;
    local_8 = uVar1;
    pbVar5 = (byte *)Library::DKW::LIB::FUN_006acf50((int)pbVar4,uVar1);
    puVar3 = *(undefined4 **)&pSVar2->field_0x2e6;
    pbVar12 = pbVar5 + (uVar1 - uVar7) + -0x6c;
    for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pbVar12 = *puVar3;
      puVar3 = puVar3 + 1;
      pbVar12 = pbVar12 + 4;
    }
    if (uVar7 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar12 = *(byte **)(*(int *)&local_14->field_0x2e6 + 0x58);
      pbVar4 = pbVar5 + (uVar1 - uVar7) + -0x6c + 0x6c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar4 = pbVar4 + 4;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pbVar4 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar4 = pbVar4 + 1;
      }
    }
    *param_1 = local_8;
    return pbVar5;
  }
  *param_1 = local_8;
  return pbVar4;
}

