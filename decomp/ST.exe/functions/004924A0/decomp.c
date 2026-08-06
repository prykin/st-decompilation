#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_004924a0(void *param_1)

{
  int iVar1;
  STBoatC *local_8;

  if (((STField<int>(param_1,0x45d) == 0x14) &&
      (STField<AnonShape_005EFAE0_B406B78B *>(param_1,0x5a2) != nullptr
      )) && (STField<int>(param_1,0x5c0) != 3)) {
    local_8 = param_1;
    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(param_1,0x5a2)
                       ,(int *)&local_8);
    if (iVar1 != -4) {
      STBoatC::CancelLoading(local_8,STField<int>(param_1,0x18));
    }
  }
  return;
}

