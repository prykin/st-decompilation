#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0074C81F returns zeroed full register at 0074C83C @ 0074C83F */

uint __thiscall FUN_0074c81f(void *this,undefined4 *param_1)

{
  FUN_00747f57(this,param_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*STField<int *>(this,0xa0) + 0x44))(1,param_1);
  return 0;
}

