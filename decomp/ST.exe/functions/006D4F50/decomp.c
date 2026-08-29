#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void FUN_006d4f50(int *param_1)

{
  if (param_1 != nullptr) {
    /* ST_CALLSITE[006D4F5E]: CALL dword ptr [EAX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    STStructuralVirtualCall<undefined4>(param_1, 0xC, 1);
  }
  return;
}

