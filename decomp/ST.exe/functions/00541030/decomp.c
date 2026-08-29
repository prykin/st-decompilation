#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 253 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void DelAllAccelerators(void)

{
  int iVar3;
  int local_EAX_91;
  int iVar2;
  int iVar4;
  byte *pbVar5;
  RecoveredRecord_006E3DB0_0F66DDCF *pRVar6;
  byte local_b4 [76];
  InternalExceptionFrame local_68;
  RecoveredRecord_006E3DB0_0F66DDCF local_24;
  uint local_14;
  byte *local_10;

  pbVar5 = local_b4;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5 = pbVar5 + 4;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;

  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar3 == 0) {
    if (g_array_008026F0 != nullptr) {
      g_array_008026F0->iteratorIndex = 0;

      local_EAX_91 = DArrayGetNext(g_array_008026F0,local_b4);
      while (-1 < local_EAX_91) {
        pRVar6 = &local_24;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pRVar6 = 0;
          pRVar6 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar6->field_0x4;
        }
        local_10 = local_b4;
        local_24.field_0008 = 1;
        local_24.field_000C = 3;
        local_14 = 0x11;

        FUN_006e3db0((AppClassTy *)&DAT_00807620,&local_24);

        local_EAX_91 = DArrayGetNext(g_array_008026F0,local_b4);
      }
      DArrayDestroy(g_array_008026F0);
      g_array_008026F0 = nullptr;
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;

  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\support.cpp",0xfd,0,iVar3,"%s",
                             "DelAllAccelerators");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\support.cpp",0xfd);
  return;
}

