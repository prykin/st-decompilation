#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterMine
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00621B50 @ 00621D64 -> read as EAX on
   every CFG path | 00621B50 @ 00621EB0 -> read as EAX on every CFG path */

int __thiscall STAllPlayersC::RegisterMine(STAllPlayersC *this,ushort param_1,void *param_2)

{
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_2 == nullptr) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2f05);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)g_array_007FA158->count;
    }
    else {

      iVar2 = DArrayGetElement((DArrayTy *)g_array_007FA158,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        RaiseInternalException
                  (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x2f07);
      }
    }

    Library::DKW::TBL::DArrayPut((DArrayTy *)g_array_007FA158,(uint)param_1,&param_2);
    thunk_FUN_00419c50(param_2,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2f0d,0,iVar2,"%s",
                             "STAllPlayersC::RegisterMine");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2f0e);
  return -1;
}

