#include "../../pseudocode_runtime.h"


void FUN_0067fb40(void)

{
  int *piVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;

  if (g_array_00848A38 != nullptr) {
    uVar2 = 0;
    array = g_array_00848A38;
    if (0 < (int)g_array_00848A38->count) {
      bVar3 = g_array_00848A38->count != 0;
      do {
        if (((bVar3) &&
            (piVar1 = DArrayAt<int>(array, uVar2), piVar1 != nullptr))
           && (*piVar1 != 0)) {
          thunk_FUN_0064a800(piVar1);
          array = g_array_00848A38;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < array->count;
      } while ((int)uVar2 < (int)array->count);
    }
    DArrayDestroy(array);
    g_array_00848A38 = nullptr;
  }
  if (DAT_00848a3c != nullptr) {
    FUN_006b5570(DAT_00848a3c);
  }
  DAT_00848a3c = nullptr;
  return;
}

