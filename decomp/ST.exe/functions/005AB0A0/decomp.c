#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::NextFas */

undefined4 __thiscall HoloTy::NextFas(HoloTy *this)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  InternalExceptionFrame local_50;
  HoloTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\hologram.cpp",0xc1,0,iVar3,"%s",
                               "HoloTy::NextFas");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\hologram.cpp",0xc1);
    return local_8;
  }
  uVar1 = local_c->field_0003;
  if (-1 < (int)uVar1) {
    iVar3 = local_c->field_0017;
    if (local_c->field_0002 == '\0') {
      if (iVar3 < local_c->field_0013 + -2) {
        local_c->field_0017 = iVar3 + 1;
        local_8 = 1;
        FUN_006b35d0(DAT_008075a8,uVar1);
      }
    }
    else if (0 < iVar3) {
      local_c->field_0017 = iVar3 + -1;
      local_8 = 1;
      FUN_006b35d0(DAT_008075a8,uVar1);
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

