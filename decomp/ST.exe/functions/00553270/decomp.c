#include "../../pseudocode_runtime.h"


void FUN_00553270(void)

{
  void *pvVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;

  if (g_array_00802A4C != nullptr) {
    uVar2 = 0;
    array = g_array_00802A4C;
    if (0 < (int)g_array_00802A4C->count) {
      bVar3 = g_array_00802A4C->count != 0;
      do {
        if (((bVar3) &&
            (pvVar1 = DArrayAt<void>(array, uVar2), pvVar1 != nullptr
            )) && (STField<int>(pvVar1,2) != 0)) {
          FreeAndNull((void *)((int)pvVar1 + 2));
          array = g_array_00802A4C;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < array->count;
      } while ((int)uVar2 < (int)array->count);
    }
    DArrayDestroy(array);
    g_array_00802A4C = nullptr;
  }
  return;
}

