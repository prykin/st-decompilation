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
    if (-1 < local_8->field_0003) {
      FUN_006b3bb0((int *)PTR_008075a8,local_8->field_0003);
    }
    pHVar2->field_0003 = -1;
    if (pHVar2->field_000B != (void *)0x0) {
      FreeAndNull(&pHVar2->field_000B);
    }
    if (pHVar2->field_0007 != 0) {
      FreeAndNull((void **)&pHVar2->field_0007);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\hologram.cpp",0xaa,0,errorCode,
                             "%s","HoloTy::Done");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\hologram.cpp",0xaa);
  return;
}

