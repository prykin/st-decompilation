#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintDblBut */

void __thiscall
OptPanelTy::PaintDblBut
          (OptPanelTy *this,AnonShape_0052EFB0_CC661192 *param_1,char *param_2,UINT param_3,
          undefined *param_4,undefined *param_5,int param_6)

{
  OptPanelTy *pOVar2;
  int iVar3;
  undefined4 uVar3;
  LPSTR pCVar4;
  uint uVar5;
  char *resourceString;
  int iVar7;
  int iVar6;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_60;
  OptPanelTy *local_1c;
  int local_18;
  uint local_14;
  AnonNested_0052EFB0_0018_CB007E0D *local_10;
  AnonShape_0052EFB0_8161B92D *local_c;
  ushort *local_8;

  local_10 = param_1->field_0018;
  local_c = param_1->field_0014;
  local_8 = nullptr;
  if (param_6 == 0) {
    local_18 = local_10->field_0000;
  }
  else {
    local_18 = local_c->field_000C;
  }
  local_18 = local_18 - this->field_003C;
  if (this->field_005C == 0) {
    if (param_6 == 0) {
      local_14 = this->field_0048 + local_10->field_0004;
    }
    else {
      local_14 = this->field_0048 + local_c->field_0010;
    }
  }
  else {
    if (param_6 == 0) {
      iVar6 = local_10->field_0004;
    }
    else {
      iVar6 = local_c->field_0010;
    }
    local_14 = iVar6 - this->field_0044;
  }
  if ((param_4 != nullptr) && (param_5 != nullptr)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_1c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
    if (iVar3 == 0) {
      local_8 = cMf32::RecGet(g_cMf32_00806790,1,param_2,nullptr,1);
      uVar5 = local_14;
      iVar6 = local_18;
      pOVar2 = local_1c;
      DibPut((RecoveredSourceFamily_dibcopy *)local_1c->field_0068,local_18,local_14,'\x01',
             (byte *)local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      iVar10 = 1;
      piVar9 = nullptr;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar3 = (*(code *)param_4)(param_1);
      iVar8 = 1;
      pCVar4 = thunk_FUN_00571240("BUT_SWITCH",0);
      pCVar4 = FUN_006f2c00(pCVar4,iVar8,uVar3);
      local_8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar4,piVar9,iVar10);
      if (param_6 == 0) {
        iVar8 = local_10->field_000C;
      }
      else {
        iVar8 = local_c->field_0018;
      }
      DibPut((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar6 + 5,
             (iVar8 - *(int *)(local_8 + 4)) / 2 + 1 + uVar5,'\x01',(byte *)local_8);
      iVar6 = *(int *)(local_8 + 2);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      if (param_6 == 0) {
        iVar8 = local_10->field_000C;
        iVar10 = local_10->field_0008;
      }
      else {
        iVar8 = local_c->field_0018;
        iVar10 = local_c->field_0014;
      }
      ccFntTy::SetSurf(pOVar2->field_0180,pOVar2->field_0068,0,iVar6 + 10 + local_18,uVar5,
                       (iVar10 - iVar6) + -10,iVar8);
      iVar11 = -1;
      iVar10 = -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar5 = (*(code *)param_5)(param_1);
      iVar8 = -1;
      iVar6 = 0;
      resourceString = LoadResourceString(param_3,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(pOVar2->field_0180,resourceString,iVar6,iVar8,uVar5,iVar10,iVar11);
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,pOVar2->field_0060,0xffffffff,pOVar2->field_003C,
                 pOVar2->field_0044);
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0xca,0,iVar3,"%s"
                               ,"OptPanelTy::PaintDblBut");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\optpanel.cpp",0xca);
  }
  return;
}

