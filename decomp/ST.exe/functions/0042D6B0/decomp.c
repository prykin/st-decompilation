#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RemoveActiveTV */

void STAllPlayersC::RemoveActiveTV(char param_1)

{
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int iVar3;
  undefined4 *puVar4;

  iVar3 = (int)param_1;
  iVar2 = g_packedRecords_A62x8[iVar3].field200_0x203;
  if (iVar2 == 0) {
    puVar4 = &g_packedRecords_A62x8[iVar3].field96_0x163;
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
    puVar4 = &g_packedRecords_A62x8[iVar3].field149_0x1b3;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ResetActivityFromTmp(in_ECX,param_1,iVar2,0,1);
  if (STField<DArrayTy *>(puVar4,10) != nullptr) {
    DArrayDestroy(STField<DArrayTy *>(puVar4,10));
    STField<undefined4>(puVar4,10) = 0;
  }
  *puVar4 = 0;
  return;
}

