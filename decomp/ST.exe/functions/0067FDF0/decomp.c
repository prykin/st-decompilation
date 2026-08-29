#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0067FDF0 -> 0067FD20 @ 0067FE36 | 00683C70 -> 0067FDF0 @ 00689D7E; data at 00848A14 */

uint __cdecl FUN_0067fdf0(RecoveredGlobalRecordView_00848A14 *param_1,byte *param_2)

{
  int local_EAX_31;
  int uVar1;
  uint uVar2;
  uint *puVar3;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;

  local_EAX_31 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (local_EAX_31 != 0) {
    g_currentExceptionFrame = local_48.previous;
    if (-1 < local_EAX_31) {
      local_EAX_31 = 0xffffffff;
    }
    return local_EAX_31;
  }

  uVar1 = thunk_FUN_0067fc10(param_2);
  if (uVar1 < 0) {

    uVar2 = thunk_FUN_0067fd20(param_1,(char *)param_2);
    g_currentExceptionFrame = local_48.previous;
    return uVar2;
  }
  if ((uint)uVar1 < g_array_00848A38->count) {
    puVar3 = DArrayAt<undefined4>(g_array_00848A38, uVar1);
  }
  else {
    puVar3 = nullptr;
  }
  if (puVar3 == nullptr) {
    RaiseInternalException(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x21a);
  }
  thunk_FUN_0064a800(puVar3);
  *puVar3 = param_1;
  g_currentExceptionFrame = local_48.previous;
  return uVar1;
}

