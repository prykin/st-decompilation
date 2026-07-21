#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV */

void STAllPlayersC::PushTV(char param_1,int param_2)

{
  DArrayTy *array;
  code *pcVar1;
  int iVar2;
  STPlayerTempSlot (*paSVar3) [5];
  Global_sub_0043FC50_param_1Enum GVar4;

  if (param_2 == 0) {
    GVar4 = CASE_E;
    paSVar3 = g_playerRuntime[param_1].tempSlots;
  }
  else {
    if (param_2 != 1) {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x3028,0,0,"%s",
                                 "STAllPlayersC::PushTV");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    GVar4 = CASE_F;
    paSVar3 = g_playerRuntime[param_1].tempSlots + 1;
  }
  thunk_FUN_0043fc50(GVar4,0);
  array = (*paSVar3)[4].objectIds;
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
    (*paSVar3)[4].objectIds = (DArrayTy *)0x0;
    (*paSVar3)[4].activityCount = 0;
  }
  (*paSVar3)[4].objectType = 0;
  Library::MSVCRT::FUN_0072da70(&(*paSVar3)[1].objectType,(undefined4 *)paSVar3,0x40);
  (*paSVar3)[0].objectType = 0;
  (*paSVar3)[0].objectIds = (DArrayTy *)0x0;
  (*paSVar3)[0].activityCount = 0;
  return;
}

