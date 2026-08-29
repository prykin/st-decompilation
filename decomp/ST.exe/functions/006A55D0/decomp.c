#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006A55D0 -> EXTERNAL:00000023 @ 006A55E1 | 006A56B0 -> 006A55D0 @ 006A56EA

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __cdecl FUN_006a55d0(void *param_1,UINT_PTR ucb,int param_3)

{
  BOOL BVar1;

  /* ST_CALLSITE[006A55E1]: CALL dword ptr [0x0085bbb8] */
  if ((param_1 == nullptr) || (BVar1 = IsBadReadPtr(param_1,ucb), BVar1 != 0)) {
    return 0;
  }
  /* ST_CALLSITE[006A55F4]: CALL dword ptr [0x0085bba0] */
  if ((param_3 != 0) && (BVar1 = IsBadWritePtr(param_1,ucb), BVar1 != 0)) {
    return 0;
  }
  return 1;
}

