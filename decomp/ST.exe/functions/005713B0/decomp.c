#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __fastcall FUN_005713b0(int param_1)

{
  uint uVar1;

  uVar1 = DAT_00807300 & 0xff;
  if (uVar1 == 2) {
    thunk_FUN_00566ff0((AnonShape_00566FF0_D4E50B19 *)(param_1 + 0x38));
    return;
  }
  if (((uVar1 == 4) || (uVar1 == 8)) && (g_soundManager_008033F0 != nullptr)) {
    SoundManagerTy::sub_00566900(g_soundManager_008033F0);
    return;
  }
  return;
}

