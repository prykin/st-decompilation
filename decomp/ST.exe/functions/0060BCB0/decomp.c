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
    /* ST_CALLSITE[0060BCF9]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*STField<undefined4 *>(this,0x221))(local_24);
  }
  return;
}

