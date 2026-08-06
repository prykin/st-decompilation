#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_00716db0(int *param_1)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)*param_1;
  if (piVar1 != nullptr) {
    if (STField<uint *>(piVar1,0x21) != nullptr) {
      if ((char)piVar1[2] == '\x1d') {
        cMf32::RecMemFree((cMf32 *)piVar1[1],STField<uint *>(piVar1,0x21));
      }
      else {
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            cMf32::RecMemFree((cMf32 *)piVar1[1],(uint *)(STField<int>(piVar1,0x21) + iVar2 * 4));
            piVar1 = (int *)*param_1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar1);
        }
      }
      FreeAndNull((void *)(*param_1 + 0x21));
    }
    piVar1 = (int *)*param_1;
    if (STField<int>(piVar1,0x29) != 0) {
      if ((char)piVar1[2] == '\x1d') {
        cMf32::RecMemFree((cMf32 *)piVar1[1],(uint *)((int)piVar1 + 0x25));
      }
      else {
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            cMf32::RecMemFree((cMf32 *)piVar1[1],(uint *)(STField<int>(piVar1,0x29) + iVar2 * 4));
            piVar1 = (int *)*param_1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar1);
        }
      }
      FreeAndNull((void *)(*param_1 + 0x29));
    }
    FreeAndNull(param_1);
  }
  return;
}

