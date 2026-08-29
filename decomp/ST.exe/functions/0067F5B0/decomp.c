#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0067F5B0 returns zeroed full register at 0067F5C7 @ 0067F5CA */

uint __cdecl FUN_0067f5b0(byte *param_1)

{
  uint *puVar1;

  /* ST_CALLSITE[0067F5B7]: CALL 0x00404a57; direct=00404A57 thunk_FUN_0067f4f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__cdecl;pointer:/uint;pointer:/byte */
  puVar1 = thunk_FUN_0067f4f0(param_1);
  if (puVar1 != nullptr) {
    return *puVar1;
  }
  return 0;
}

