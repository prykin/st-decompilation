#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0067FDF0 -> 0067FD20 @ 0067FE36; FUN_0067fdf0 parameter param_1 | 00683C70 -> 0067FD20
   @ 0068A4D6; data at 00848A14
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0067FDF0 @ 0067FE36 -> read as EAX on
   every CFG path | 00683C70 @ 0068A4D6 -> read as EAX on every CFG path */

int __cdecl FUN_0067fd20(RecoveredGlobalRecordView_00848A14 *param_1,char *param_2)

{
  int uVar1;
  int iVar1;
  int iVar2;
  InternalExceptionFrame local_4c;
  RecoveredGlobalRecordView_00848A14 *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  uVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (uVar1 == 0) {
    local_8 = param_1;

    iVar1 = Library::DKW::TBL::DArrayAppend(g_array_00848A38,&local_8);

    iVar2 = Library::DKW::TBL::FUN_006b5aa0(g_dArray_00848A3C,param_2);
    if (iVar1 != iVar2) {
      RaiseInternalException(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x203);
    }
    g_currentExceptionFrame = local_4c.previous;
    return iVar1;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (-1 < uVar1) {
    uVar1 = -1;
  }
  return uVar1;
}

