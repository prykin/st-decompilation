
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=17;
   incoming_edx_uses=0; incoming_stack_parameter_uses=18; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_0052AFE0(CPanelTy *this,byte param_1,float param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  int local_30 [8];
  float local_10;
  float local_c;
  float local_8;

  local_30[5] = 2;
  local_30[6] = 2;
  iVar8 = 0;
  local_30[0] = 1;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 1;
  local_30[4] = 1;
  local_30[7] = 1;
  if (param_2 < _DAT_0079034c) {
    lVar9 = Library::MSVCRT::__ftol();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = Library::MSVCRT::__ftol();
    iVar5 = (int)(short)lVar9;
  }
  bVar1 = param_3 < _DAT_0079034c;
  this->field_0237 = iVar5;
  if (bVar1) {
    lVar9 = Library::MSVCRT::__ftol();
    iVar5 = (short)lVar9 + -1;
  }
  else {
    lVar9 = Library::MSVCRT::__ftol();
    iVar5 = (int)(short)lVar9;
  }
  this->field_023B = iVar5;
  if (this->field_0DB3 == (void *)0x0) {
    iVar5 = 0;
    piVar7 = local_30;
    local_c = (float)(int)*DAT_00806750 * _DAT_007904f8;
    local_10 = (float)(int)DAT_00806750[1] * _DAT_007904f8;
    fVar2 = _DAT_0079034c;
    do {
      fVar3 = param_3 - (float)piVar7[1] * (float)(int)DAT_00806750[1] * _DAT_007904f8 *
                        _DAT_00790784;
      fVar4 = param_2 - (float)*piVar7 * (float)(int)*DAT_00806750 * _DAT_007904f8 * _DAT_00790784;
      local_8 = fVar4 * fVar4 + fVar3 * fVar3;
      if (fVar2 < local_8) {
        iVar8 = iVar5;
        fVar2 = local_8;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar5 < 4);
    if (fVar2 != _DAT_0079034c) {
      puVar6 = FUN_006e6460(g_sT3DSMAPContext_00807598,this->field_0DBF + (param_1 - 2),1,0x97,0x96,
                            0,1);
      iVar5 = local_30[iVar8 * 2];
      this->field_0DB3 = puVar6;
      this->field_0DCC = param_1;
      this->field_0DC7 = 1;
      this->field_0DC8 = 0;
      this->field_0DCD = 0;
      local_8 = (float)iVar5 * local_c * (float)_DAT_007901c0;
      iVar8 = local_30[iVar8 * 2 + 1];
      this->field_0DD6 = local_8;
      this->field_0DCE = param_2;
      fVar2 = (float)iVar8 * local_10 * (float)_DAT_007901c0;
      this->field_0DDA = fVar2;
      fVar3 = (float)_DAT_0079acd8;
      this->field_0DD2 = param_3;
      fVar3 = (param_2 - local_8) * fVar3 * (float)_DAT_0079acc8;
      this->field_0DDE = fVar3;
      this->field_0DE6 = fVar3 * _DAT_0079acc0;
      fVar3 = (param_3 - fVar2) * _DAT_0079acbc;
      this->field_0DE2 = fVar3;
      this->field_0DEA = fVar3 * _DAT_0079acb8;
      FUN_006e6540((int)puVar6,local_8,fVar2,-1);
      thunk_FUN_005252c0((this->field_0DCC != '\0') + CASE_B8);
      return;
    }
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006e65c0(g_sT3DSMAPContext_00807598,this->field_0DBF[param_1],
                 (char)*(undefined2 *)(this->field_09C0[param_1 + 2] + 0x23),param_2,param_3,5,5,1);
    thunk_FUN_005252c0((param_1 != 0) + CASE_B6);
  }
  return;
}

