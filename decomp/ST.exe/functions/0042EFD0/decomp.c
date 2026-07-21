#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterGroup */

undefined4 __thiscall
STAllPlayersC::RegisterGroup(STAllPlayersC *this,char param_1,uint param_2,int param_3)

{
  code *pcVar1;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  local_c = g_playerRuntime[param_1].groups;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 == 0) {
    if (param_3 == 0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x690);
    }
    pDVar2 = local_c;
    iVar3 = DArrayGetElement(local_c,param_2 & 0xffff,&local_8);
    if ((iVar3 != -4) && (local_8 != 0)) {
      RaiseInternalException
                (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x692);
    }
    Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,param_2 & 0xffff,&param_3);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x695,0,iVar3,"%s",
                             "STAllPlayersC::RegisterGroup");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x696);
  return 0xffffffff;
}

