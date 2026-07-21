#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::Save

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054D2F0 parameter used as this of cMf32::RecPut @ 0054D347 | 0054D2F0 parameter used
   as this of cMf32::RecPut @ 0054D363 */

int __thiscall STPlaySystemC::Save(STPlaySystemC *this,cMf32 *param_1)

{
  code *pcVar1;
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_74;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  STPlaySystemC *local_10;
  undefined4 local_c;
  uint local_8;

  local_c = this->field_00E4;
  local_8 = this->field_0020;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  if (iVar3 == 0) {
    cMf32::RecPut(param_1,0xc,PTR_DAT_0079ae30,(byte *)&local_c,4,(undefined4 *)0x0,'\0',(uint *)0x0
                 );
    cMf32::RecPut(param_1,0xc,PTR_s_LAST_NAME_0079ae2c,(byte *)&local_8,4,(undefined4 *)0x0,'\0',
                  (uint *)0x0);
    pSVar2 = local_10;
    local_10->field_0024 = param_1;
    local_24 = 0xf;
    local_20 = 0x10f;
    FUN_006e3db0((int)local_30);
    pSVar2->field_0024 = (cMf32 *)0x0;
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x1fb,0,iVar3,"%s",
                             "STPlaySystemC::Save");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x1fb);
  return iVar3;
}

