#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::_saveObj */

undefined4 __thiscall CGenerate::_saveObj(CGenerate *this)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  int iVar3;
  undefined4 uVar4;
  int local_48 [16];
  undefined4 local_8;

  pIVar2 = g_currentExceptionFrame;
  local_8 = 1;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0);
  if (iVar3 == 0) {
    g_currentExceptionFrame = pIVar2;
    return local_8;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = ReportDebugMessage(s_E____titans_Maps_generate_cpp_007d864c,0xe0,0,iVar3,&DAT_007a4ccc,
                             s_CGenerate___saveObj_007d86a4);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

