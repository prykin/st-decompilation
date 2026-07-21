#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::NoneMTest */

void __thiscall MTestTy::NoneMTest(MTestTy *this)

{
  code *pcVar1;
  MTestTy *pMVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_00B3 == '\x01') {
      if (g_holo_00811778 != (HoloTy *)0x0) {
        iVar3 = HoloTy::NextFas(g_holo_00811778);
        if (iVar3 == 0) {
          pMVar2->field_00B3 = 4;
        }
      }
    }
    else if ((local_8->field_00B3 == '\x05') && (g_holo_00811778 != (HoloTy *)0x0)) {
      iVar3 = HoloTy::NextFas(g_holo_00811778);
      if (iVar3 == 0) {
        pMVar2->field_00B3 = 0;
        if (-1 < g_holo_00811778->field_0003) {
          FUN_006b3af0(DAT_008075a8,g_holo_00811778->field_0003);
        }
      }
    }
    _DAT_00811774 = pMVar2->field_00A1;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\test_obj.cpp",0x6c,0,iVar3,"%s",
                             "MTestTy::NoneMTest");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\test_obj.cpp",0x6c);
  return;
}

