#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::DoneMReport */

void __thiscall MReportTy::DoneMReport(MReportTy *this)

{
  undefined2 uVar2;
  MReportTy *pMVar3;
  int iVar3;
  int iVar4;
  int iVar5;
  DArrayTy **ppDVar7;
  InternalExceptionFrame local_4c;
  MReportTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar3 = local_8;
  if (iVar3 == 0) {
    memset(&local_8->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    uVar2 = local_8->field_000A;
    local_8->field_002D = 0x14;
    local_8->field_0031 = local_8->field_0008;
    local_8->field_0033 = uVar2;
    FUN_006e6000(local_8,3,1,(undefined4 *)&local_8->field_0x1d);
    /* ST_CALLSITE[005BE378]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    DarkScreen(g_dDXContext_0080759C,10,2);
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_CALLSITE[005BE38A]: CALL 0x00401055; direct=00401055 CursorClassTy::sub_00544940 */
      CursorClassTy::sub_00544940(g_cursorClass_00802A30);
    }
    ppDVar7 = &pMVar3->field_0347;
    iVar5 = 3;
    do {
      if (*ppDVar7 != nullptr) {
        DArrayDestroy(*ppDVar7);
        *ppDVar7 = nullptr;
      }
      ppDVar7 = ppDVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (pMVar3->field_0453 != nullptr) {
      /* ST_CALLSITE[005BE3BC]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pMVar3->field_0453);
      Library::MSVCRT::FUN_0072e2b0(pMVar3->field_0453);
      pMVar3->field_0453 = nullptr;
    }
    if (pMVar3->field_0457 != nullptr) {
      /* ST_CALLSITE[005BE3E4]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pMVar3->field_0457);
      Library::MSVCRT::FUN_0072e2b0(pMVar3->field_0457);
      pMVar3->field_0457 = nullptr;
    }
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&pMVar3->field_005D);
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&pMVar3->field_006F);
    if (pMVar3->field_0077 != nullptr) {
      FreeAndNull(&pMVar3->field_0077);
    }
    if (pMVar3->field_007B != nullptr) {
      FreeAndNull(&pMVar3->field_007B);
    }
    if (pMVar3->field_0073 != nullptr) {
      FreeAndNull(&pMVar3->field_0073);
    }
    if (pMVar3->field_0083 != nullptr) {
      ccFntTy::operator_delete((uint *)pMVar3->field_0083);
      pMVar3->field_0083 = nullptr;
    }
    if (pMVar3->field_0087 != nullptr) {
      ccFntTy::operator_delete((uint *)pMVar3->field_0087);
      pMVar3->field_0087 = nullptr;
      g_startSystem_0081176C->field_0038 = nullptr;
    }
    if (pMVar3->field_008B != nullptr) {
      ccFntTy::operator_delete((uint *)pMVar3->field_008B);
      pMVar3->field_008B = nullptr;
    }
    pMVar3->field_007F = nullptr;
    if (pMVar3->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar3->field_0x3d);
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

