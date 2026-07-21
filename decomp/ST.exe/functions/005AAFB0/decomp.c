#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::Done */

void __thiscall HoloTy::Done(HoloTy *this)

{
  code *pcVar1;
  HoloTy *pHVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  HoloTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pHVar2 = local_8;
  if (errorCode == 0) {
    if (-1 < (int)local_8->field_0003) {
      FUN_006b3bb0(DAT_008075a8,local_8->field_0003);
    }
    pHVar2->field_0003 = 0xffffffff;
    if (pHVar2->field_000B != 0) {
      FreeAndNull((void **)&pHVar2->field_000B);
    }
    if (pHVar2->field_0007 != 0) {
      FreeAndNull((void **)&pHVar2->field_0007);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_hologram_cpp_007cc674,0xaa,0,errorCode,
                             &DAT_007a4ccc,s_HoloTy__Done_007cc6e0);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_hologram_cpp_007cc674,0xaa);
  return;
}

