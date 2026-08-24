#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::ShowScr */

void __thiscall cLoadingTy::ShowScr(cLoadingTy *this,int param_1,int param_2)

{
  cLoadingTy *pcVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  uint *puVar6;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  puVar6 = local_44c;
  local_8 = this;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    FUN_006b0a20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,(int)local_44c,0,0x100,
                 0);
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pcVar2 = local_8;
    FUN_006b4640(g_dDXContext_0080759C,0,0,local_8->field_0000,nullptr);
    Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
    thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                       (ushort *)pcVar2->field_0000,param_1,param_2);
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

