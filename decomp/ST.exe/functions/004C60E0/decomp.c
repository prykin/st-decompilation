#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_BldMark.cpp
   TLOBldMark::Create */

int __thiscall TLOBldMark::Create(TLOBldMark *this)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  int iVar3;
  int iVar4;
  int local_48 [16];
  TLOBldMark *local_8;

  pIVar2 = g_currentExceptionFrame;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0);
  if (iVar3 == 0) {
    g_currentExceptionFrame = pIVar2;
    g_tLOBldMark_007FB2AC = (AnonShape_GLOBAL_007FB2AC_70073F41 *)local_8;
    return 0;
  }
  g_currentExceptionFrame = pIVar2;
  iVar4 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_BldMark.cpp",0x2a,0,iVar3,"%s",
                             "TLOBldMark::Create error");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x2b);
  return iVar3;
}

