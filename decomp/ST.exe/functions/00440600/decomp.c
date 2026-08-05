#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetNInTmp */

uint STAllPlayersC::GetNInTmp(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;

  if (param_1 == 0) {
    return (uint)*(ushort *)(param_2 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x171));
  }
  if (param_1 != 1) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2184,0,0,"%s",
                               "STAllPlayersC::GetNInTmp");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  return (uint)*(ushort *)(param_2 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x1C1));
}

