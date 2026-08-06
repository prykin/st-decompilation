#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C260 -> 0055BEB0 @ 0055C272 */

void __thiscall FUN_0055c260(void *this,DWORD param_1)

{
  if (STField<char>(this,8) != '\0') {
    STField<undefined1>(this,8) = 0;
    thunk_FUN_0055beb0(this,param_1);
  }
  return;
}

