
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
STManRuinC::sub_006308F0
          (STManRuinC *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6)

{
  char cVar1;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  short local_20;
  short local_1e;
  short local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  uint local_14;
  int local_c;
  int local_8;

  uVar5 = 0xffffffff;
  iVar4 = (g_worldGrid.sizeX * param_3 + param_2) * (int)g_worldGrid.sizeY + param_1;
  local_8 = 0;
  if (param_4 == 1) {
    cVar1 = *(char *)(this->field_0034 + iVar4);
  }
  else {
    iVar3 = this->field_0034;
    local_8 = g_worldGrid.sizeY + iVar4;
    if (*(char *)(iVar3 + iVar4) != '\0') {
      return 0xffffffff;
    }
    if (*(char *)(iVar3 + 1 + iVar4) != '\0') {
      return 0xffffffff;
    }
    if (*(char *)(iVar3 + local_8) != '\0') {
      return 0xffffffff;
    }
    cVar1 = *(char *)(iVar3 + 1 + local_8);
  }
  if (cVar1 == '\0') {
    if (this->field_0038 == (DArrayTy *)0x0) {
      pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x75,10);
      this->field_0038 = pDVar2;
    }
    pDVar2 = this->field_0038;
    if ((pDVar2 != (DArrayTy *)0x0) && (pDVar2->count < 0xfe)) {
      psVar6 = &local_20;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
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
      uVar5 = Library::DKW::TBL::FUN_006ae1c0(&pDVar2->flags,(undefined4 *)&local_20);
      if (-1 < (int)uVar5) {
        if (param_4 == 1) {
          *(undefined1 *)(this->field_0034 + iVar4) = 1;
        }
        else {
          *(undefined1 *)(this->field_0034 + iVar4) = 1;
          *(undefined1 *)(this->field_0034 + 1 + iVar4) = 1;
          *(undefined1 *)(this->field_0034 + local_8) = 1;
          *(undefined1 *)(this->field_0034 + 1 + local_8) = 1;
        }
        iVar4 = thunk_FUN_00631190(this,uVar5,(short)param_1,(short)param_2,(short)param_3,param_4,
                                   param_5,param_6);
        if (iVar4 == 0) {
          FUN_006b0c70(this->field_0038,uVar5);
          uVar5 = 0xffffffff;
        }
      }
    }
  }
  return uVar5;
}

