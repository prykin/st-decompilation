#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterTorpedo */

undefined4 __thiscall
STAllPlayersC::UnRegisterTorpedo(STAllPlayersC *this,short param_1,int param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (PTR_007fa130 != (DArrayTy *)0x0) {
      DArrayGetElement(PTR_007fa130,(int)param_1,&local_8);
      if (local_8 != param_2) {
        RaiseInternalException
                  (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x883);
      }
      local_8 = 0;
      Library::DKW::TBL::FUN_006ae140(&PTR_007fa130->flags,(int)param_1,&local_8);
      DAT_007fa134 = DAT_007fa134 + -1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x888,0,errorCode,
                             "%s","STAllPlayersC::UnRegisterTorpedo");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x889);
  return 0xffffffff;
}

