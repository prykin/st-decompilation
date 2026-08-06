#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006BC3E0 -> 006BC360 @ 006BC40C */

undefined2 * FUN_006bc3e0(ushort *param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;

  puVar1 = param_2;
  if (param_2 == nullptr) {
    puVar1 = Library::DKW::LIB::MemAlloc(0x404);
    if (puVar1 == nullptr) {
      return nullptr;
    }
  }
  FUN_006bc360(param_1,(undefined4 *)(puVar1 + 2),(int *)&param_2);
  *puVar1 = 0x300;
  puVar1[1] = STPiece<0,2>(param_2);
  if (param_3 != nullptr) {
    *param_3 = param_2;
  }
  return puVar1;
}

