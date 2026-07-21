#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTxtBut */

void __thiscall
CPanelTy::PaintTxtBut
          (CPanelTy *this,byte param_1,AnonShape_004F3A30_4968CAC9 *param_2,byte param_3,
          char *param_4,UINT param_5,undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_5c;
  AnonNested_004F3A30_0018_BD4DC0BB *local_18;
  uint local_14;
  CPanelTy *local_10;
  int local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_18 = param_2->field_0018;
  local_8 = (ushort *)0x0;
  iVar4 = local_18->field_0004;
  local_c = local_18->field_0000 - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar7 = this->field_0134;
    goto LAB_004f3aaa;
  default:
    if (this->field_0130 != 0) {
      local_14 = iVar4 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_14 = iVar4 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_14 = iVar4 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 7:
    iVar7 = this->field_0138;
LAB_004f3aaa:
    if (iVar7 != 0) {
      local_14 = iVar4 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    iVar4 = iVar4 - this->field_00C0;
  }
  local_14 = iVar4 - DAT_00806734;
cf_common_join_004F3AC3:
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    if (iVar4 == 0) {
      local_8 = cMf32::RecGet(DAT_00806790,param_3,param_4,(int *)0x0,1);
      pCVar3 = local_10;
      uVar5 = local_14;
      uVar2 = (uint)param_1;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)(&local_10->field_0180)[uVar2],local_c,local_14,param_3,
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(pCVar3->field_01B8,(&pCVar3->field_0180)[uVar2],0,local_c,uVar5,
                       local_18->field_0008,local_18->field_000C);
      iVar9 = -1;
      iVar8 = -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar5 = (*(code *)param_6)(param_2);
      iVar7 = -1;
      iVar4 = -2;
      puVar6 = (uint *)LoadResourceString(param_5,HINSTANCE_00807618);
      ccFntTy::WrTxt(pCVar3->field_01B8,puVar6,iVar4,iVar7,uVar5,iVar8,iVar9);
      if ((param_1 < 0xb) && (-1 < (int)(&pCVar3->field_0148)[uVar2])) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,(&pCVar3->field_0148)[uVar2],0xffffffff,(&pCVar3->field_003C)[uVar2]
                   ,(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x1f8,0,iVar4,"%s",
                               "CPanelTy::PaintTxtBut");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x1f8);
  }
  return;
}

