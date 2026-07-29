
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
STManRuinC::sub_006308F0
          (STManRuinC *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6)

{
  byte bVar1;
  byte *pbVar2;
  STManRuinC_field_0038DArray *pSVar3;
  int iVar4;
  int iVar5;
  uint index;
  short *psVar6;
  short local_20;
  short local_1e;
  short local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  uint local_14;
  int local_c;
  int local_8;

  index = 0xffffffff;
  iVar5 = (g_worldGrid.sizeX * param_3 + param_2) * (int)g_worldGrid.sizeY + param_1;
  local_8 = 0;
  if (param_4 == 1) {
    bVar1 = this->field_0034[iVar5];
  }
  else {
    pbVar2 = this->field_0034;
    local_8 = g_worldGrid.sizeY + iVar5;
    if (pbVar2[iVar5] != 0) {
      return 0xffffffff;
    }
    if (pbVar2[iVar5 + 1] != 0) {
      return 0xffffffff;
    }
    if (pbVar2[local_8] != 0) {
      return 0xffffffff;
    }
    bVar1 = pbVar2[local_8 + 1];
  }
  if (bVar1 == 0) {
    if (this->field_0038 == (STManRuinC_field_0038DArray *)0x0) {
      pSVar3 = (STManRuinC_field_0038DArray *)
               Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x75,10);
      this->field_0038 = pSVar3;
    }
    pSVar3 = this->field_0038;
    if ((pSVar3 != (STManRuinC_field_0038DArray *)0x0) && (pSVar3->count < 0xfe)) {
      psVar6 = &local_20;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        psVar6[0] = 0;
        psVar6[1] = 0;
        psVar6 = psVar6 + 2;
      }
      local_1a = (undefined2)param_4;
      local_18 = param_5;
      local_14 = g_playSystem_00802A38->field_00E4;
      local_20 = (short)param_1;
      local_1c = (short)param_3;
      local_1e = (short)param_2;
      local_c = param_6;
      index = Library::DKW::TBL::FUN_006ae1c0(&pSVar3->flags,(undefined4 *)&local_20);
      if (-1 < (int)index) {
        if (param_4 == 1) {
          this->field_0034[iVar5] = 1;
        }
        else {
          this->field_0034[iVar5] = 1;
          this->field_0034[iVar5 + 1] = 1;
          this->field_0034[local_8] = 1;
          this->field_0034[local_8 + 1] = 1;
        }
        iVar5 = thunk_FUN_00631190(this,index,(short)param_1,(short)param_2,(short)param_3,param_4,
                                   param_5,param_6);
        if (iVar5 == 0) {
          DArrayRemoveAt((DArrayTy *)this->field_0038,index);
          index = 0xffffffff;
        }
      }
    }
  }
  return index;
}

