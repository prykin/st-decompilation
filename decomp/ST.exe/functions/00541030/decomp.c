#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 253 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void DelAllAccelerators(void)

{
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte **ppbVar5;
  byte local_b4 [76];
  InternalExceptionFrame local_68;
  byte *local_24 [8];

  pbVar4 = local_b4;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar3 == 0) {
    if (g_array_008026F0 != nullptr) {
      g_array_008026F0->iteratorIndex = 0;
      iVar3 = DArrayGetNext(g_array_008026F0,local_b4);
      while (-1 < iVar3) {
        ppbVar5 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppbVar5 = nullptr;
          ppbVar5 = ppbVar5 + 1;
        }
        local_24[5] = local_b4;
        local_24[2] = (byte *)0x1;
        local_24[3] = (byte *)0x3;
        local_24[4] = (byte *)0x11;
        FUN_006e3db0((int)local_24);
        iVar3 = DArrayGetNext(g_array_008026F0,local_b4);
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

