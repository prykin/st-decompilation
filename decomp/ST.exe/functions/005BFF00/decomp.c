#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintObjScore

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005BE5B0 -> 005BFF00 @ 005BE975 | 005BE5B0 -> 005BFF00 @ 005BE9AA | 005BE5B0 ->
   005BFF00 @ 005BE9E0 | 005BE5B0 -> 005BFF00 @ 005BEA15 | 005BE5B0 -> 005BFF00 @ 005BEA4B |
   005BE5B0 -> 005BFF00 @ 005BEA83 | 005BE5B0 -> 005BFF00 @ 005BEABC | 005BE5B0 -> 005BFF00 @
   005BEAF4 */

void __thiscall
MReportTy::PaintObjScore(MReportTy *this,int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  MReportTy *pMVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pMVar3 = local_c;
  if (errorCode == 0) {
    if (param_1 != -1) {
      cVar1 = *(char *)((int)&DAT_0080c83a + (byte)local_c->field_0069 + 3);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,cVar1);
      wsprintfA((LPSTR)&DAT_0080f33a,"%6d",param_1);
      ccFntTy::SetSurf(pMVar3->field_008B,(int)pMVar3->field_0073,0,param_3 + 8,param_4 + 5,0x36,
                       0x14);
      if (cVar1 == -1) {
        uVar4 = 8;
      }
      else {
        uVar4 = local_8 & 0xff;
      }
      ccFntTy::WrStr(pMVar3->field_008B,&DAT_0080f33a,-1,-1,uVar4);
    }
    cVar1 = DAT_0080c846;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT31(local_8._1_3_,DAT_0080c846);
    wsprintfA((LPSTR)&DAT_0080f33a,"%6d",param_2);
    ccFntTy::SetSurf(pMVar3->field_008B,(int)pMVar3->field_0073,0,param_3 + 0x4c,param_4 + 5,0x36,
                     0x14);
    if (cVar1 == -1) {
      uVar4 = 8;
    }
    else {
      uVar4 = local_8 & 0xff;
    }
    ccFntTy::WrStr(pMVar3->field_008B,&DAT_0080f33a,-1,-1,uVar4);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x21c,0,errorCode,
                             "%s","MReportTy::PaintObjScore");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x21c);
  return;
}

