#include "../../pseudocode_runtime.h"


void __fastcall FUN_0041d8e0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041d8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0x2c))();
  return;
}

