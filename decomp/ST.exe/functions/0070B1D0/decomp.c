#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_0070b1d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < STField<short>(iVar1,0x23)) {
      iVar3 = 0x30;
      do {
        cMf32::RecMemFree(*(cMf32 **)(iVar1 + 0x25),(uint *)(iVar3 + iVar1));
        iVar1 = *param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < STField<short>(iVar1,0x23));
    }
    FreeAndNull(param_1);
  }
  return;
}

