#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::DoneMReport */

void __thiscall MReportTy::DoneMReport(MReportTy *this)

{
  code *pcVar1;
  MReportTy *pMVar2;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  DArrayTy **ppDVar6;
  InternalExceptionFrame local_4c;
  MReportTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    memset(&local_8->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    local_8->field_002D = 0x14;
    *(undefined4 *)&local_8->field_0x31 = local_8->field_0008;
    FUN_006e6000(local_8,3,1,(undefined4 *)&local_8->field_0x1d);
    DarkScreen(DAT_0080759c,10,2);
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      thunk_FUN_00544940((AnonShape_00544940_E504B2A8 *)PTR_00802a30);
    }
    ppDVar6 = &pMVar2->field_0347;
    iVar3 = 3;
    do {
      if (*ppDVar6 != (DArrayTy *)0x0) {
        DArrayDestroy(*ppDVar6);
        *ppDVar6 = (DArrayTy *)0x0;
      }
      ppDVar6 = ppDVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pMVar2->field_0453 != (HoloTy *)0x0) {
      HoloTy::Done(pMVar2->field_0453);
      Library::MSVCRT::FUN_0072e2b0(pMVar2->field_0453);
      pMVar2->field_0453 = (HoloTy *)0x0;
    }
    if (pMVar2->field_0457 != (HoloTy *)0x0) {
      HoloTy::Done(pMVar2->field_0457);
      Library::MSVCRT::FUN_0072e2b0(pMVar2->field_0457);
      pMVar2->field_0457 = (HoloTy *)0x0;
    }
    cMf32::RecMemFree(g_cMf32_00806780,&pMVar2->field_005D);
    cMf32::RecMemFree(g_cMf32_00806780,&pMVar2->field_006F);
    if (pMVar2->field_0077 != (AnonPointee_MReportTy_0077 *)0x0) {
      FreeAndNull(&pMVar2->field_0077);
    }
    if (pMVar2->field_007B != 0) {
      FreeAndNull((void **)&pMVar2->field_007B);
    }
    this_00 = (ccFntTy *)0x0;
    if (pMVar2->field_0073 != (AnonPointee_MReportTy_0073 *)0x0) {
      FreeAndNull(&pMVar2->field_0073);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX;
    }
    if (pMVar2->field_0083 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pMVar2->field_0083);
      pMVar2->field_0083 = (ccFntTy *)0x0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    if (pMVar2->field_0087 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pMVar2->field_0087);
      pMVar2->field_0087 = (ccFntTy *)0x0;
      PTR_0081176c->field_0038 = (ccFntTy *)0x0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_01;
    }
    if (pMVar2->field_008B != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pMVar2->field_008B);
      pMVar2->field_008B = (ccFntTy *)0x0;
    }
    pMVar2->field_007F = (ushort *)0x0;
    if (pMVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0xe5,0,iVar3,"%s",
                             "MReportTy::DoneMReport");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\rpt_obj.cpp",0xe5);
  return;
}

