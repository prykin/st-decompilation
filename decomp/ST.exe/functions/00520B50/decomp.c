#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfocObj */

void __thiscall
InfocPanelTy::PaintInfocObj(InfocPanelTy *this,ushort param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  InfocPanelTy *pIVar2;
  char cVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_03D4 == -1) && (param_1 == 0xffff)) {
      wsprintfA(&local_8->field_0x18d,"----/%d",param_2 & 0xffff);
    }
    else {
      wsprintfA(&local_8->field_0x18d,"%d/%d",param_1,param_2 & 0xffff);
    }
    if (DAT_0080874e == '\x03') {
      cVar3 = 's';
    }
    else {
      cVar3 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
    }
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pIVar2->field_0068,0,param_3,param_4,0x2d,0xc,cVar3)
    ;
    ccFntTy::SetSurf(pIVar2->field_0189,pIVar2->field_0068,0,param_3,param_4,0x2d,0xc);
    ccFntTy::WrStr(pIVar2->field_0189,(uint *)&pIVar2->field_0x18d,-1,-1,
                   (DAT_0080874e != '\x03') - 1 & 5);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0xa9,0,errorCode,
                             "%s","InfocPanelTy::PaintInfocObj");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\infocen.cpp",0xa9);
  return;
}

