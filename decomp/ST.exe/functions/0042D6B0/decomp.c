#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RemoveActiveTV */

void STAllPlayersC::RemoveActiveTV(char param_1)

{
  DArrayTy *array;
  code *pcVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int iVar3;
  STPlayerTempSlot (*paSVar4) [5];

  iVar3 = (int)param_1;
  iVar2 = g_playerRuntime[iVar3].field324_0x203;
  if (iVar2 == 0) {
    paSVar4 = g_playerRuntime[iVar3].tempSlots;
  }
  else {
    if (iVar2 != 1) {
      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x470,0,0,"%s",
                                 "STAllPlayersC::RemoveActiveTV wrong panel number");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    paSVar4 = g_playerRuntime[iVar3].tempSlots + 1;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ResetActivityFromTmp(in_ECX,param_1,iVar2,0,1);
  array = (*paSVar4)[0].objectIds;
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
    (*paSVar4)[0].objectIds = (DArrayTy *)0x0;
  }
  (*paSVar4)[0].objectType = 0;
  return;
}

