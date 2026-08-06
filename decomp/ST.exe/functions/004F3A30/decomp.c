#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F3A30 @ 004FCADA */

void __thiscall
CPanelTy::PaintTxtBut
          (CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *param_4,UINT param_5,
          undefined *param_6)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar4;
  char *resourceString;
  int iVar6;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_5c;
  int *local_18;
  uint local_14;
  CPanelTy *local_10;
  int local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_18 = (param_2->arg1).ptr;
  local_8 = nullptr;
  iVar5 = local_18[1];
  local_c = *local_18 - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar7 = this->field_0134;
    goto LAB_004f3aaa;
  default:
    if (this->field_0130 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 7:
    iVar7 = this->field_0138;
LAB_004f3aaa:
    if (iVar7 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    iVar5 = iVar5 - this->field_00C0;
  }
  local_14 = iVar5 - DAT_00806734;
cf_common_join_004F3AC3:
  if (param_6 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    if (iVar4 == 0) {
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_3,param_4,nullptr,1);
      pCVar3 = local_10;
      uVar4 = local_14;
      uVar2 = (uint)param_1;
      DibPut((RecoveredSourceFamily_dibcopy *)local_10->field_0148[uVar2 + 0xe],local_c,local_14,
             param_3,(byte *)local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(pCVar3->field_01B8,(int)pCVar3->field_0148[uVar2 + 0xe],0,local_c,uVar4,
                       local_18[2],local_18[3]);
      iVar9 = -1;
      iVar8 = -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (*(code *)param_6)(param_2);
      iVar7 = -1;
      iVar5 = -2;
      resourceString = LoadResourceString(param_5,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(pCVar3->field_01B8,resourceString,iVar5,iVar7,uVar4,iVar8,iVar9);
      if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
                   (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x1f8,0,iVar4,"%s",
                               "CPanelTy::PaintTxtBut");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x1f8);
  }
  return;
}

