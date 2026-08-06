#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067FD20 @ 0068A4D6 */

uint __cdecl FUN_0067fd20(int *param_1,char *param_2)

{
  int uVar1;
  uint uVar2;
  uint uVar3;
  InternalExceptionFrame local_4c;
  int *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  uVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (uVar1 == 0) {
    local_8 = param_1;
    uVar2 = Library::DKW::TBL::DArrayAppend(g_array_00848A38,&local_8);
    uVar3 = Library::DKW::TBL::FUN_006b5aa0(DAT_00848a3c,param_2);
    if (uVar2 != uVar3) {
      RaiseInternalException(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x203);
    }
    g_currentExceptionFrame = local_4c.previous;
    return uVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (-1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

