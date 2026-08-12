#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::SetCtrl

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall MReportTy::SetCtrl(MReportTy *this,int param_1)

{
  ushort **ppuVar1;
  MReportTy *pMVar3;
  int iVar4;
  char *pcVar4;
  ushort *puVar5;
  ccFntTy *pcVar6;
  int iVar7;
  undefined4 local_470 [256];
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  MReportTy *local_c;
  char local_5;

  if (this->field_0066 == '\x01') {
    local_5 = this->field_006A + '\x01';
  }
  else {
    local_5 = DAT_0080874e;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  pMVar3 = local_c;
  if (iVar4 == 0) {
    ppuVar1 = &local_c->field_005D;
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)ppuVar1);
    if (local_5 == '\x01') {
      pcVar4 = &CHAR_W_007ca250;
    }
    else {
      pcVar4 = &CHAR_B_007ca248;
      if (local_5 != '\x02') {
        pcVar4 = &CHAR_S_007ca24c;
      }
    }
    wsprintfA((LPSTR)&DAT_0080f33a,"REPORT_%s_%c",pcVar4,
              (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
    puVar5 = FUN_0070a9f0(g_cMf32_00806780,(char *)&DAT_0080f33a,0,1);
    *ppuVar1 = puVar5;
    FUN_006bc360(puVar5,local_470,nullptr);
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)&g_startSystem_0081176C->field_0x144);
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)&pMVar3->field_00A3);
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_470,0,0x100,0x2e,0x10,(undefined4 *)&pMVar3->field_0x1a3);
    PutDDX(0,0,'\x01',(BITMAPINFO *)*ppuVar1);
    if (pMVar3->field_0083 != nullptr) {
      ccFntTy::operator_delete((uint *)pMVar3->field_0083);
    }
    pcVar6 = (ccFntTy *)thunk_FUN_005defe0((int)*ppuVar1,nullptr,DAT_00807dd9);
    pMVar3->field_0083 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    if (pMVar3->field_0087 != nullptr) {
      ccFntTy::operator_delete((uint *)pMVar3->field_0087);
    }
    pcVar6 = (ccFntTy *)thunk_FUN_005df290((int)*ppuVar1,nullptr,DAT_00807dd9);
    pMVar3->field_0087 = pcVar6;
    g_startSystem_0081176C->field_0038 = (HDC__ *)pcVar6;
    if (param_1 != 0) {
      STPiece<0,2>(local_2c[2]) = pMVar3->field_0008;
      STPiece<2,2>(local_2c[2]) = pMVar3->field_000A;
      memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
      local_2c[3] = 2;
      local_2c[4] = 0x70ff;
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,local_2c);
    }
    g_currentExceptionFrame = local_70.previous;
    return;
  }
  g_currentExceptionFrame = local_70.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x32c,0,iVar4,"%s",
                             "MReportTy::SetCtrl");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x32c);
  return;
}

