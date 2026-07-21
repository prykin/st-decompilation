#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::CreateGameObject */

int __thiscall
STPlaySystemC::CreateGameObject
          (STPlaySystemC *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  undefined4 local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    iVar3 = thunk_FUN_0054cbb0(param_1,&local_8);
    if (iVar3 != 0) {
      RaiseInternalException
                (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\tplaysys.cpp",0xef);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (*(code *)pSVar2->vtable->field_0008)(local_8,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Andrey\\tplaysys.cpp",0xf0);
    }
    g_currentExceptionFrame = local_50.previous;
    return iVar3;
  }
  g_currentExceptionFrame = local_50.previous;
  if (iVar3 == -4) {
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0xf3,0,0,
                               "Not found system type for game type %d",param_1);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0xf5,0,0,"%s",
                               "STPlaySystemC::CreateGameObject error !");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0xf7);
  return iVar3;
}

