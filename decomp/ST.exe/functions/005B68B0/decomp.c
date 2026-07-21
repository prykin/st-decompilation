#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::OutBSlProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005B68B0 parameter used as this of MMMObjTy::OutRGlProc @ 005B690C */

void __thiscall
MMMObjTy::OutBSlProc
          (MMMObjTy *this,int param_1,MMMObjTy *param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;

  if (param_8 != (undefined4 *)0x0) {
    local_8 = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    if (errorCode == 0) {
      OutRGlProc(param_2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      local_c = param_4 + -0x15 + param_6;
      Library::DKW::DDX::FUN_006c6660(param_1,local_c,param_5 + 0x26,7,param_7 - 0x4cU,3,0);
      Library::DKW::DDX::FUN_006c6470
                (param_1,local_c,param_5 + 0x26,(undefined4 *)0x7,param_7 - 0x4cU,3,*local_8);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x147,0,errorCode,
                               "%s","MMMObjTy::OutBSlProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x147);
  }
  return;
}

