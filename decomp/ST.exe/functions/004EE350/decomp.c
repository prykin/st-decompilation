#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::PaintBBut */

void __thiscall
BehPanelTy::PaintBBut
          (BehPanelTy *this,AnonShape_004EE350_18D491EA *param_1,char *param_2,uint param_3)

{
  AnonNested_004EE350_0018_78690378 *pAVar1;
  code *pcVar2;
  BehPanelTy *pBVar3;
  int *errorCode;
  LPSTR text;
  int iVar4;
  InternalExceptionFrame local_58;
  BehPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  pAVar1 = param_1->field_0018;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 - DAT_00806734;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = (int *)Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (errorCode == (int *)0x0) {
    iVar4 = 1;
    text = FUN_006f2c00(param_2,1,param_3 & 0xff);
    local_8 = cMf32::RecGet(DAT_00806790,1,text,errorCode,iVar4);
    pBVar3 = local_14;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_14->field_0068,local_10,local_c,'\x01',
           (byte *)local_8);
    cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,pBVar3->field_0060,0xffffffff,pBVar3->field_003C,
               pBVar3->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\behpanel.cpp",0xc5,0,(int)errorCode,
                             "%s","BehPanelTy::PaintBBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\behpanel.cpp",0xc5);
  return;
}

