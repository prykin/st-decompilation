#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintLBut */

void __thiscall
PanelTy::PaintLBut(PanelTy *this,AnonShape_00538FC0_B5E96243 *param_1,byte param_2,char *param_3,
                  char *param_4,undefined *param_5,int param_6,int param_7)

{
  AnonNested_00538FC0_0018_DB9172F2 *pAVar1;
  PanelTy *pPVar3;
  int iVar6;
  int local_EAX_145;
  undefined4 uVar7;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  PanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  int iVar4;

  pAVar1 = param_1->field_0018;
  local_8 = nullptr;
  if (param_6 == 0) {
    local_c = pAVar1->field_0000;
  }
  else {
    local_c = pAVar1->field_0000;
    iVar4 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538ff6;
  }
  iVar4 = this->field_003C;
LAB_00538ff6:
  local_c = local_c - iVar4;
  if (param_7 == 0) {
    local_10 = pAVar1->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_10 = pAVar1->field_0004 - DAT_00806734;
  }
  else {
    local_10 = pAVar1->field_0004 - this->field_0044;
  }
  if (param_5 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    local_EAX_145 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (local_EAX_145 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar7 = (*(code *)param_5)(param_1);
      text = FUN_006f2c00(param_3,1,uVar7);
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_2,text,nullptr,1);
      iVar6 = local_10;
      pPVar3 = local_14;
      DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_c,local_10,param_2,
             (byte *)local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      if (param_1->field_0014 == 3) {
        local_8 = cMf32::RecGet(g_cMf32_00806790,6,param_4,nullptr,1);
        DibPut((RecoveredSourceFamily_dibcopy *)pPVar3->field_0068,local_c,iVar6,'\x06',
               (byte *)local_8);
        cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      }
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,pPVar3->field_0060,0xffffffff,pPVar3->field_003C,
                 pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0x102,0,local_EAX_145,
                               "%s","PanelTy::PaintLBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_145,0,"E:\\__titans\\Andrey\\panel.cpp",0x102);
  }
  return;
}

