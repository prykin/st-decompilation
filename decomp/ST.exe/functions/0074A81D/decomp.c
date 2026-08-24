#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0074a81d(void *this,undefined4 param_1)

{
  /* ST_CALLSITE[0074A828]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  STField<undefined4>(this,0xb0) = param_1;
  /* ST_CALLSITE[0074A839]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  return;
}

