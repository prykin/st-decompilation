#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SaveObjData

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0060EA30 -> 0054D430 @ 0060EB81

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005F5F20 -> 0054D430 @ 005F62C9; /STColl3C+0x18 | 00621B50 -> 0054D430 @ 00622246;
   /STMineSetC+0x18 */

int __thiscall
STPlaySystemC::SaveObjData
          (STPlaySystemC *this,int *param_1,byte *param_2,AnonShape_0060EA30_DCEB68AD *param_3)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_6c;
  CHAR local_28 [32];
  STPlaySystemC *local_8;

  if (this->field_0024 == nullptr) {
    return -4;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar2 == 0) {
    wsprintfA(local_28,"%s%08ld",PTR_DAT_007c83b0,param_1);
    cMf32::RecPut(local_8->field_0024,0xc,local_28,param_2,(uint)param_3,nullptr,'\x02',
                  nullptr);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x218,0,iVar2,"%s",
                             "STPlaySystemC::SaveObjData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x218);
  return iVar2;
}

