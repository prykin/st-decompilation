
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STColl3C::sub_005F68B0(STColl3C *this,undefined4 *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;

  if (this == (STColl3C *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)&this->field_0x231;
  }
  puVar5 = param_1;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
  this->field_02B7 = -1;
  local_28 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + (int)local_28) = DAT_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0x10;
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)&this->vtable_at_1d5,(int *)&local_28,
             (AnonShape_004AD790_77673787 *)((int)param_1 + 0xc6));
  sub_00416240(this,*(undefined2 *)&this->field_02C1,*(undefined2 *)&this->field_02C5,
               *(undefined2 *)&this->field_02C9);
  FreeAndNull(&local_28);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)((int)param_1 + 0xc2);
  piVar6 = (int *)(&((AnonShape_004AD790_77673787 *)((int)param_1 + 0xc6))->field_0x0 + iVar2);
  STAllPlayersC::RestoreGObjData((STAllPlayersC *)this,piVar6 + 1);
  puVar7 = (undefined4 *)((int)(piVar6 + 1) + *piVar6);
  iVar2 = iVar2 + 0xca + *piVar6;
  if (this->field_02E6 == (ushort *)0x0) {
    return iVar2;
  }
  local_8 = puVar7;
  puVar1 = (ushort *)Library::DKW::LIB::FUN_006aac70(0x6c);
  this->field_02E6 = puVar1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)puVar1 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar1 + 2;
  }
  puVar1 = this->field_02E6;
  iVar2 = iVar2 + 0x6c;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1 = this->field_02E6;
  puVar1[2] = 0xffff;
  puVar1[3] = 0xffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(this->field_02E6 + 0x2c) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = *(uint *)(this->field_02E6 + 0x2e);
    iVar8 = uVar4 * 4;
    local_c = iVar8;
    iVar3 = Library::DKW::LIB::FUN_006aac70(iVar8);
    *(int *)(this->field_02E6 + 0x2c) = iVar3;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar7 = *(undefined4 **)(this->field_02E6 + 0x2c);
    for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *local_8;
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)local_8;
      local_8 = (undefined4 *)((int)local_8 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    return iVar2 + iVar8;
  }
  return iVar2;
}

