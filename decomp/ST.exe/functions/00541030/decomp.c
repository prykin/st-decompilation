#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 253 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void DelAllAccelerators(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 **ppuVar5;
  undefined4 local_b4 [19];
  InternalExceptionFrame local_68;
  undefined4 *local_24 [8];

  memset(local_b4, 0, 0x4c); /* compiler bulk-zero initialization */
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar3 == 0) {
    if (g_dArray_008026F0 != (DArrayTy *)0x0) {
      g_dArray_008026F0->iteratorIndex = 0;
      iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)g_dArray_008026F0,local_b4);
      while (-1 < iVar3) {
        ppuVar5 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppuVar5 = (undefined4 *)0x0;
          ppuVar5 = ppuVar5 + 1;
        }
        local_24[5] = local_b4;
        local_24[2] = (undefined4 *)0x1;
        local_24[3] = (undefined4 *)0x3;
        local_24[4] = (undefined4 *)0x11;
        FUN_006e3db0((int)local_24);
        iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)g_dArray_008026F0,local_b4);
      }
      DArrayDestroy(g_dArray_008026F0);
      g_dArray_008026F0 = (DArrayTy *)0x0;
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

