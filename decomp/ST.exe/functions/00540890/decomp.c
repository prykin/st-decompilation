#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\support.cpp
   StartServTy::WrTextDDX

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: 00540890 parameter used as this of ccFntTy::EraseSufr @ 005409EC */

void __thiscall
StartServTy::WrTextDDX
          (StartServTy *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          uint *param_6,uint param_7,uint param_8,ccFntTy *param_9,uint param_10)

{
  code *pcVar1;
  int iVar2;
  InternalExceptionFrame local_50;
  BITMAPINFO *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_4 < 1) {
      iVar2 = FUN_00711370(param_9,param_6);
      param_4 = iVar2 + (((int)param_7 < 1) - 1 & param_7);
    }
    local_8 = param_4;
    if (param_5 < 1) {
      iVar2 = FUN_007113e0(param_9,param_6);
      param_5 = iVar2 + (((int)param_8 < 1) - 1 & param_8);
    }
    if (param_1 == 0) {
      local_c = (BITMAPINFO *)ccFntTy::CreateSurf(param_9,0,0,0,0,local_8,param_5,1);
    }
    else {
      local_c = (BITMAPINFO *)
                Library::DKW::WGR::FUN_006b55f0
                          ((AnonShape_006B5B10_E0D06CF1 *)0x0,0,0,0,(byte *)param_1,0,param_2,
                           param_3,local_8,param_5);
      ccFntTy::SetSurf(param_9,(int)local_c,0,0,0,0,0);
    }
    ccFntTy::WrTxt(param_9,param_6,param_7,param_8,param_10,-1,-1);
    FUN_006b5f80(DAT_008075a8,param_2,param_3,local_8,param_5);
    TransPutDDX(param_2,param_3,'\x01',local_c,-(uint)(param_1 != 0));
    ccFntTy::EraseSufr(param_9);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0x75,0,iVar2,&DAT_007a4ccc,
                             s_StartServTy__WrTextDDX_007c7b84);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  ccFntTy::EraseSufr(param_9);
  return;
}

