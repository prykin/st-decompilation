#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   MMMObjTy::OutEdProc

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005BA8B0 -> 005B99F0 @ 005BA9F1 */

void __thiscall
MMMObjTy::OutEdProc(MMMObjTy *this,AnonShape_GLOBAL_0080759C_9638EF10 *param_1,undefined4 param_2,
                   undefined4 param_3,int param_4,int param_5,int param_6,int param_7,
                   undefined4 *param_8)

{
  uint *puVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    puVar2 = local_8;
    if (errorCode == 0) {
      Library::DKW::DDX::FUN_006c68f0(param_1,param_4,param_5,param_6,param_7,(int)(local_8 + 1));
      FUN_006c6850((int)param_1,param_4,param_5,param_6,param_7,*puVar2);
      Library::DKW::DDX::FUN_006c53b0
                ((int)param_1,param_4,param_5 + 0x16,param_4 + -1 + param_6,param_5 + 0x16,*puVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x47,0,errorCode,
                               "%s","MMMObjTy::OutEdProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x47);
  }
  return;
}

