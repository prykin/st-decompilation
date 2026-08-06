#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::CreateGameObject */

int __thiscall
STPlaySystemC::CreateGameObject
          (STPlaySystemC *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  STPlaySystemC *this_00;
  int iVar2;
  int iVar4;
  int local_EAX_203;
  int iVar3;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  undefined2 local_8 [2];

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 == 0) {
    iVar4 = thunk_FUN_0054cbb0(param_1,(undefined4 *)local_8);
    if (iVar4 != 0) {
      RaiseInternalException
                (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\tplaysys.cpp",0xef);
    }
    iVar4 = this_00->vfunc_08(local_8[0],(undefined2)param_2,(undefined2)param_3,
                       (undefined2)param_4,(undefined2)param_5);
    if (iVar4 != 0) {
      RaiseInternalException
                (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\tplaysys.cpp",0xf0);
    }
    g_currentExceptionFrame = local_50.previous;
    return iVar4;
  }
  g_currentExceptionFrame = local_50.previous;
  if (iVar2 == -4) {
    local_EAX_203 =
         ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0xf3,0,0,
                            "Not found system type for game type %d",param_1);
    if (local_EAX_203 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0xf5,0,0,"%s",
                               "STPlaySystemC::CreateGameObject error !");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0xf7);
  return iVar2;
}

