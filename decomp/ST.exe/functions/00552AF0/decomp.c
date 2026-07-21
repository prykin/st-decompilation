#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::ShiftControls */

void __thiscall UpgPanelTy::ShiftControls(UpgPanelTy *this,int param_1)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  short sVar3;
  int errorCode;
  int iVar4;
  int local_44 [16];

  if (param_1 != this->field_005C) {
    SpecPanelTy::ShiftControls((SpecPanelTy *)this,param_1);
    sVar3 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar3 = -sVar3;
    }
    this->field_002E = sVar3;
    pIVar2 = g_currentExceptionFrame;
    errorCode = Library::MSVCRT::__setjmp3(local_44,0);
    if (errorCode == 0) {
      g_currentExceptionFrame = pIVar2;
      return;
    }
    g_currentExceptionFrame = pIVar2;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x36,0,errorCode,
                               &DAT_007a4ccc,s_UpgPanelTy__ShiftControls_007c8830);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_upginfo_cpp_007c87b8,0x36);
  }
  return;
}

