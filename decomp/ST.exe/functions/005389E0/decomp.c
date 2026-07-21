#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintBut */

void __thiscall
PanelTy::PaintBut(PanelTy *this,AnonShape_005389E0_C98BD548 *param_1,byte param_2,char *param_3,
                 undefined *param_4,int param_5,int param_6)

{
  AnonNested_005389E0_0018_A8EBF066 *pAVar1;
  code *pcVar2;
  PanelTy *pPVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  PanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  pAVar1 = param_1->field_0018;
  local_8 = (ushort *)0x0;
  if (param_5 == 0) {
    local_10 = pAVar1->field_0000;
  }
  else {
    local_10 = pAVar1->field_0000;
    iVar5 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538a14;
  }
  iVar5 = this->field_003C;
LAB_00538a14:
  local_10 = local_10 - iVar5;
  if (param_6 == 0) {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 - DAT_00806734;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_4 != (undefined *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    errorCode = (int *)Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (errorCode == (int *)0x0) {
      iVar5 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (*(code *)param_4)(param_1);
      text = FUN_006f2c00(param_3,1,uVar4);
      local_8 = cMf32::RecGet(DAT_00806790,param_2,text,errorCode,iVar5);
      pPVar3 = local_14;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_14->field_0068,local_10,local_c,param_2,
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,pPVar3->field_0060,0xffffffff,pPVar3->field_003C,
                 pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0xb2,0,(int)errorCode,
                               "%s","PanelTy::PaintBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\panel.cpp",0xb2);
  }
  return;
}

