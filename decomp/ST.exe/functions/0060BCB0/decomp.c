#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_0060bcb0(void *this,int param_1)

{
  int local_24 [8];

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (STField<undefined4 *>(this,0x221) != nullptr) {
    local_24[2] = STField<undefined4>(this,0x201);
    local_24[3] = 4;
    local_24[4] = 0x123;
    local_24[5] = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*STField<undefined4 *>(this,0x221))(local_24);
  }
  return;
}

