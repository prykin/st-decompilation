#include "../../pseudocode_runtime.h"


void __cdecl FUN_00726870(int *param_1)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)*param_1;
  if (piVar1 != nullptr) {
    if (STField<int>(piVar1,0x11) != 0) {
      iVar2 = 0;
      if (0 < *piVar1) {
        do {
          cMf32::RecMemFree(STField<cMf32 *>(piVar1,5),
                            (uint *)(STField<int>(piVar1,0x11) + iVar2 * 4));
          piVar1 = (int *)*param_1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *piVar1);
      }
      FreeAndNull((void *)(*param_1 + 0x11));
    }
    FreeAndNull(param_1);
  }
  return;
}

