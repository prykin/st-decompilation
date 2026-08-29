#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::IsTorpLive

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00483F10 -> 00430620 @ 00483F2F; /STBoatC+0x471 */

undefined4 __thiscall
STAllPlayersC::IsTorpLive
          (STAllPlayersC *this,short param_1,RecoveredRecordView_005EFAE0_855D930D *param_2)

{
  int iVar2;
  int iVar3;
  uint uVar4;
  InternalExceptionFrame local_50;
  uint local_c;
  STTorpC *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar2 != -0x5001fff7) {

      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x80b,0,iVar2,
                                 "%s","STAllPlayersC::IsTorpLive");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x80c);
    }
    return local_c;
  }

  iVar2 = DArrayGetElement((DArrayTy *)g_array_007FA130,(int)param_1,&local_8);
  if (iVar2 != -4) {
    if (local_8 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x806);
    }
    if ((RecoveredRecordView_005EFAE0_855D930D *)local_8->field_0018 == param_2) {
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_c;
}

