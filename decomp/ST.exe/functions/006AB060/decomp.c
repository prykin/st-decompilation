#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C2050 -> 006AB060 @ 006C212A

   [STUtilityFunctionApplier] free_and_null: treats its argument as the untyped address of a
   caller-owned pointer slot, frees the non-null allocation, and clears that slot; void * is
   intentional because unrelated C++ T ** values do not implicitly convert to void **
   Evidence: body pattern verified */

void FreeAndNull(void *slotStorage)

{
  if (*(int **)slotStorage != nullptr) {
    Library::MSVCRT::thunk_FUN_006a4950(*(int **)slotStorage);
    *(undefined4 *)slotStorage = 0;
  }
  return;
}

