#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMainScore */

void __thiscall MReportTy::PaintMainScore(MReportTy *this,int param_1,uint param_2,int param_3)

{
  MReportTy *pMVar2;
  int iVar3;
  uint uVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_54;
  int local_10;
  MReportTy *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pMVar2 = local_c;
  if (iVar3 == 0) {
    if ((param_2 != 0) && (uVar3 = (uint)(param_1 * 0x28) / param_2, uVar3 != 0)) {
      iVar5 = 0x177;
      local_10 = param_3 * 0x26 + 0x38;
      local_8 = uVar3;
      do {
        DibPut((RecoveredSourceFamily_dibcopy *)pMVar2->field_0073,iVar5,local_10,'\x06',
               (byte *)pMVar2->field_006F);
        iVar5 = iVar5 + 6;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    wsprintfA((LPSTR)&DAT_0080f33a,"%8d",param_1);
    uVar3 = param_3 * 0x26 + 0x30;
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)pMVar2->field_0073,0,0x280,uVar3,0x50,0x1c,0);
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)pMVar2->field_0073,0,0x280,uVar3,0x50,0x1c,0x18,
                 0xd);
    ccFntTy::SetSurf(pMVar2->field_008B,(int)pMVar2->field_0073,0,0x280,uVar3,0x50,0x1c);
    ccFntTy::WrStr(pMVar2->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x208,0,iVar3,"%s",
                             "MReportTy::PaintMainScore");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x208);
  return;
}

