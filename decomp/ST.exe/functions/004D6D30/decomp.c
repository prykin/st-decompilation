#include "../../pseudocode_runtime.h"


void __fastcall FUN_004d6d30(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004d6d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0xf8))();
  return;
}

