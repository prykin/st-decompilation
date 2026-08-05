
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C7460(TLOBaseTy *this)

{
  byte bVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = *(int *)&this->field_0x361;
  if ((iVar4 == 0) && (this->field_03D4 == 0)) {
    if (*(int *)(&DAT_00794d70 + *(int *)&this->field_0x365 * 4) != -1) {
      thunk_FUN_004d7570(*(char *)&this->field_0024,
                         *(int *)(&DAT_00794d70 + *(int *)&this->field_0x365 * 4),this->field_0018);
      return 0;
    }
  }
  else {
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_8 = 0;
    if (iVar4 != 0) {
      if (iVar4 == 5) {
        local_8 = this->field_0398;
        local_14 = this->field_039C;
        local_10 = this->field_03A0;
        local_c = this->field_03A4;
      }
      else {
        iVar4 = 100 - this->field_0394;
        iVar3 = *(int *)&this->field_0x36d + -1;
        local_8 = (iVar4 * this->field_0398) / 100 + iVar3 * this->field_0398;
        local_14 = (iVar4 * this->field_039C) / 100 + iVar3 * this->field_039C;
        local_10 = (iVar4 * this->field_03A0) / 100 + iVar3 * this->field_03A0;
        local_c = (iVar4 * this->field_03A4) / 100 + iVar3 * this->field_03A4;
      }
    }
    if ((this->field_03D4 != 0) && (local_18 = 0, 0 < this->field_03D4)) {
      pAVar2 = this->field_0607;
      iVar4 = 0;
      do {
        thunk_FUN_004c7260(this,*(Global_sub_004C7260_param_1Enum *)
                                 ((int)&pAVar2->field_0000 + iVar4),
                           *(int *)((int)&pAVar2->field_0004 + iVar4),&local_1c,&local_20,&local_24,
                           &local_28);
        pAVar2 = this->field_0607;
        iVar3 = *(int *)((int)&pAVar2->field_0008 + iVar4);
        iVar4 = iVar4 + 0x27;
        local_8 = local_8 + iVar3 * local_1c;
        local_14 = local_14 + iVar3 * local_20;
        local_10 = local_10 + iVar3 * local_24;
        local_c = local_c + iVar3 * local_28;
        local_18 = local_18 + 1;
      } while (local_18 < this->field_03D4);
    }
    iVar4 = *(int *)&this->field_0x361;
    if (iVar4 == 0) {
      iVar4 = this->field_0607->field_0000;
    }
    if (*(int *)(&DAT_00794d70 + iVar4 * 4) != -1) {
      bVar1 = LookupRecordByte(*(char *)&this->field_0024);
      iVar3 = local_8;
      if (bVar1 == 3) {
        iVar3 = 0;
      }
      thunk_FUN_004d76e0(*(char *)&this->field_0024,*(int *)(&DAT_00794d70 + iVar4 * 4),
                         this->field_0018,iVar3,local_14,local_10,local_c);
    }
  }
  return 0;
}

