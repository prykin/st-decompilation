#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067FDF0 @ 00689D7E */

uint __cdecl FUN_0067fdf0(int *param_1,byte *param_2)

{
  int local_EAX_31;
  int uVar1;
  uint uVar2;
  undefined4 *puVar3;
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
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_array_00848A38, uVar1) (runtime stride) */
    puVar3 = (undefined4 *)(g_array_00848A38->elementSize * uVar1 + (int)g_array_00848A38->data);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    RaiseInternalException(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x21a);
  }
  thunk_FUN_0064a800(puVar3);
  *puVar3 = param_1;
  g_currentExceptionFrame = local_48.previous;
  return uVar1;
}

