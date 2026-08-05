#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00553060(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;

  if (g_array_00802A4C != nullptr) {
    uVar1 = g_array_00802A4C->count;
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar4 = uVar1 != 0;
      do {
        if ((((bVar4) &&
             (psVar2 = DArrayAt<short>(g_array_00802A4C, uVar3), psVar2 != nullptr)) && (*(int *)(psVar2 + 1) != 0)) &&
           (*psVar2 == param_1)) {
          return *(undefined4 *)(psVar2 + 1);
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar1;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return 0;
}

