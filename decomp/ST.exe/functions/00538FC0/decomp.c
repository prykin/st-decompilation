#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintLBut */

void __thiscall
PanelTy::PaintLBut(PanelTy *this,AnonShape_00538FC0_B5E96243 *param_1,byte param_2,char *param_3,
                  char *param_4,undefined *param_5,int param_6,int param_7)

{
  AnonNested_00538FC0_0018_DB9172F2 *pAVar1;
  code *pcVar2;
  PanelTy *pPVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR text;
  int iVar6;
  InternalExceptionFrame local_58;
  PanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  pAVar1 = param_1->field_0018;
  local_8 = (ushort *)0x0;
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
  if (param_5 != (undefined *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar4 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar5 = (*(code *)param_5)(param_1);
      text = FUN_006f2c00(param_3,1,uVar5);
      local_8 = cMf32::RecGet(DAT_00806790,param_2,text,(int *)0x0,1);
      iVar4 = local_10;
      pPVar3 = local_14;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_14->field_0068,local_c,local_10,param_2,
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (param_1->field_0014 == 3) {
        local_8 = cMf32::RecGet(DAT_00806790,6,param_4,(int *)0x0,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pPVar3->field_0068,local_c,iVar4,'\x06',
               (byte *)local_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pPVar3->field_0060,0xffffffff,pPVar3->field_003C,pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0x102,0,iVar4,"%s",
                               "PanelTy::PaintLBut");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\panel.cpp",0x102);
  }
  return;
}

