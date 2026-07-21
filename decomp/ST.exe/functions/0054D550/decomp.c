#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SaveObjData

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00430A90 -> 0054D550 @ 00431261 | 004A8920 -> 0054D550 @ 004A8B9F */

int __thiscall
STPlaySystemC::SaveObjData(STPlaySystemC *this,char *text,byte *param_2,uint param_3,byte param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  STPlaySystemC *local_8;

  if (this->field_0024 == (cMf32 *)0x0) {
    return -4;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    cMf32::RecPut(local_8->field_0024,param_4,text,param_2,param_3,(undefined4 *)0x0,'\x02',
                  (uint *)0x0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x232,0,iVar2,"%s",
                             "STPlaySystemC::SaveObjData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x232);
  return iVar2;
}

