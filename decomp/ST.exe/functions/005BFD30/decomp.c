#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMainScore */

void __thiscall MReportTy::PaintMainScore(MReportTy *this,int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  MReportTy *pMVar2;
  int iVar3;
  uint uVar4;
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
    if ((param_2 != 0) && (uVar4 = (uint)(param_1 * 0x28) / param_2, uVar4 != 0)) {
      iVar3 = 0x177;
      local_10 = param_3 * 0x26 + 0x38;
      local_8 = uVar4;
      do {
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pMVar2->field_0073,iVar3,local_10,'\x06',
               (byte *)pMVar2->field_006F);
        iVar3 = iVar3 + 6;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd004,param_1);
    uVar4 = param_3 * 0x26 + 0x30;
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pMVar2->field_0073,0,0x280,uVar4,0x50,0x1c,0);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pMVar2->field_0073,0,0x280,uVar4,0x50,0x1c,0x18,0xd)
    ;
    ccFntTy::SetSurf(pMVar2->field_008B,(int)pMVar2->field_0073,0,0x280,uVar4,0x50,0x1c);
    ccFntTy::WrStr(pMVar2->field_008B,&DAT_0080f33a,-1,-1,8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x208,0,iVar3,&DAT_007a4ccc,
                             s_MReportTy__PaintMainScore_007ccfe4);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x208);
  return;
}

