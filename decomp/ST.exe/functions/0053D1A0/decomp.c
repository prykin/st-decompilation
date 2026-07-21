#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::DoneSAMPanel */

void __thiscall SAMPanelTy::DoneSAMPanel(SAMPanelTy *this)

{
  code *pcVar1;
  SAMPanelTy *pSVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 7;
    local_8->field_01B1 = 0;
    puVar5 = &local_8->field_01B5;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(pSVar2->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_008016ec = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_setamine_cpp_007c7798,0x38,0,iVar3,&DAT_007a4ccc,
                             s_SAMPanelTy__DoneSAMPanel_007c77fc);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_setamine_cpp_007c7798,0x38);
  return;
}

