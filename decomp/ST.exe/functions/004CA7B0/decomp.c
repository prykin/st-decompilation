
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=8; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004CA7B0(TLOBaseTy *this,uint param_1,int param_2)

{
  undefined4 *this_00;
  AnonPointee_TLOBaseTy_01F5 *pAVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  uint local_10;
  int local_c;
  TLOBaseTy_field_0245State local_8;

  uVar8 = param_1;
  local_c = 0;
  this_00 = &this->field_01D5;
  bVar6 = (byte)param_1;
  iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,bVar6);
  if (iVar2 == 0) {
    return 0;
  }
  local_8 = this->field_0245;
  puVar7 = &local_10;
  puVar5 = &param_1;
  uVar3 = thunk_FUN_004ab050();
  sub_004CAFC0(this,uVar8,uVar3,puVar5,puVar7);
  if (((int)param_1 < 0) || ((int)local_10 < 0)) {
    STT3DSprC::StopShow((STT3DSprC *)this_00,bVar6);
    return 0;
  }
  if (this->field_0255 == 0) goto LAB_004ca835;
  if (local_8 == CASE_0) {
cf_common_exit_004CA871:
    iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,bVar6);
    if (iVar2 != 1) {
      iVar4 = ((0x18 - this->field_0259 / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
      iVar2 = param_1 * iVar4;
      thunk_FUN_004abce0(this_00,bVar6,iVar2,iVar2,'\0');
      uVar8 = param_1 * iVar4;
      goto cf_common_exit_004CAAA4;
    }
  }
  else {
    if (local_8 == CASE_1) {
      if (this->field_024D != 4) goto cf_common_exit_004CA871;
    }
    else if (local_8 == CASE_6) goto cf_common_exit_004CA871;
LAB_004ca835:
    if ((this->field_0255 == 0) || (local_8 != (CASE_4|CASE_1))) {
      iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,bVar6);
      if (iVar2 < (int)((local_10 - param_1) + 1)) {
        iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,bVar6);
        local_10 = iVar2 + -1 + param_1;
      }
      pAVar1 = this->field_01F5;
      iVar2 = *(int *)(&pAVar1->field_0x10 + uVar8 * 0x24);
      if (iVar2 < *(int *)(&pAVar1->field_0x14 + uVar8 * 0x24)) {
        iVar2 = *(int *)(&pAVar1->field_0x18 + uVar8 * 0x24) - iVar2;
      }
      else {
        iVar2 = iVar2 - *(int *)(&pAVar1->field_0x18 + uVar8 * 0x24);
      }
      thunk_FUN_004abce0(this_00,bVar6,param_1,local_10,'\0');
      uVar8 = param_1;
      if (param_2 != 0) {
        if ((int)param_1 < (int)local_10) {
          if ((int)local_10 < (int)(iVar2 + param_1)) {
            iVar2 = 0;
          }
          uVar8 = param_1 + iVar2;
        }
        else {
          if ((int)(param_1 - iVar2) < (int)local_10) {
            iVar2 = 0;
          }
          uVar8 = param_1 - iVar2;
        }
      }
      goto cf_common_exit_004CAAA4;
    }
    iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,bVar6);
    if (iVar2 != 1) {
      if (this->field_027D == 0x18) {
        local_c = ((0x18 - this->field_0259 / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
      }
      else if (this->field_027D == 8) {
        local_c = (((0x18 - this->field_0259 / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 3;
      }
      pAVar1 = this->field_01F5;
      iVar2 = *(int *)(&pAVar1->field_0x10 + uVar8 * 0x24);
      if (iVar2 < *(int *)(&pAVar1->field_0x14 + uVar8 * 0x24)) {
        local_8 = *(int *)(&pAVar1->field_0x18 + uVar8 * 0x24) - iVar2;
      }
      else {
        local_8 = iVar2 - *(int *)(&pAVar1->field_0x18 + uVar8 * 0x24);
      }
      iVar2 = local_c + 1;
      thunk_FUN_004abce0(this_00,bVar6,param_1 * local_c,iVar2 * param_1 + -1,'\0');
      if (param_2 == 0) {
        uVar8 = param_1 * local_c;
      }
      else {
        iVar4 = param_1 * local_c;
        iVar2 = iVar2 * param_1 + -1;
        if (iVar4 < iVar2) {
          if (iVar2 < (int)(iVar4 + local_8)) {
            local_8 = CASE_0;
          }
          uVar8 = iVar4 + local_8;
        }
        else {
          if ((int)(iVar4 - local_8) < iVar2) {
            local_8 = CASE_0;
          }
          uVar8 = iVar4 - local_8;
        }
      }
      goto cf_common_exit_004CAAA4;
    }
  }
  thunk_FUN_004abce0(this_00,bVar6,0,0,'\0');
  uVar8 = 0;
cf_common_exit_004CAAA4:
  STT3DSprC::SetCurFase((STT3DSprC *)this_00,bVar6,uVar8);
  STT3DSprC::StartShow((STT3DSprC *)this_00,bVar6,g_playSystem_00802A38->field_00E4);
  return 0;
}

