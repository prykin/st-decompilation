#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::DoneSAMPanel */

void __thiscall SAMPanelTy::DoneSAMPanel(SAMPanelTy *this)

{
  SAMPanelTy *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 7;
    local_8->field_01B1 = nullptr;
    puVar6 = local_8->field_01B5;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pSVar2->field_000C,*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_sAMPanel_008016EC = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\setamine.cpp",0x38,0,iVar3,"%s",
                             "SAMPanelTy::DoneSAMPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\setamine.cpp",0x38);
  return;
}

