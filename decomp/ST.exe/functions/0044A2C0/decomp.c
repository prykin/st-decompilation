#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterDeposit */

undefined4 __thiscall
STAllPlayersC::RegisterDeposit(STAllPlayersC *this,ushort param_1,void *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_2 == (void *)0x0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x2f36);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)PTR_007fa15c->count;
    }
    else {
      iVar2 = DArrayGetElement(PTR_007fa15c,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        RaiseInternalException
                  (-0x5001fffa,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x2f38);
      }
    }
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa15c->flags,(uint)param_1,&param_2);
    thunk_FUN_00419c50(param_2,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f3e,0,iVar2,&DAT_007a4ccc,
                             s_STAllPlayersC__RegisterDeposit_007a87a0);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f3f);
  return 0xffffffff;
}

