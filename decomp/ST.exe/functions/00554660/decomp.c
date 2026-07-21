#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::ShowScr */

void __thiscall cLoadingTy::ShowScr(cLoadingTy *this,int param_1,int param_2)

{
  code *pcVar1;
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  puVar5 = local_44c;
  local_8 = this;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    FUN_006b0a20(DAT_0080759c,(int)local_44c,0,0x100,0);
    FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    pcVar2 = local_8;
    FUN_006b4640((uint)DAT_0080759c,0,0,(BITMAPINFO *)local_8->field_0000,(uint *)0x0);
    Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,(int)pcVar2->field_0000,param_1,param_2);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0x7b,0,iVar4,"%s",
                             "cLoadingTy::ShowScr");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\grig\\loading.cpp",0x7c);
  return;
}

