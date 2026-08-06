#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0067FDF0 -> 0067FD20 @ 0067FE36; FUN_0067fdf0 parameter param_1 | 00683C70 -> 0067FD20
   @ 0068A4D6; data at 00848A14 */

uint __cdecl FUN_0067fd20(AnonShape_00683780_11EA4E23 *param_1,char *param_2)

{
  int uVar1;
  uint uVar2;
  uint uVar3;
  InternalExceptionFrame local_4c;
  AnonShape_00683780_11EA4E23 *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  uVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (uVar1 == 0) {
    local_8 = param_1;
    uVar2 = Library::DKW::TBL::DArrayAppend(g_array_00848A38,&local_8);
    uVar3 = Library::DKW::TBL::FUN_006b5aa0(g_dArray_00848A3C,param_2);
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

