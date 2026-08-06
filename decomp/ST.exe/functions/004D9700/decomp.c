#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004D9700 @ 004B9B20; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall FUN_004d9700(TLOBaseTy *param_1)

{
  uint index;
  TLOBaseTy *local_8;

  if (g_array_007FA16C != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)g_array_007FA16C->count) {
      do {
        DArrayGetElement(g_array_007FA16C,index,&local_8);
        if (local_8 == param_1) {
          DArrayRemoveAt(g_array_007FA16C,index);
          break;
        }
        index = index + 1;
      } while ((int)index < (int)g_array_007FA16C->count);
    }
    if (g_array_007FA16C->count == 0) {
      DArrayDestroy(g_array_007FA16C);
      g_array_007FA16C = nullptr;
    }
  }
  return 0;
}

