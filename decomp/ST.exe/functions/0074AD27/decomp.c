#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DB78+0x40

   [STVTableApplier] Virtual slot 007A15E8+0x40 */

undefined4 __fastcall FUN_0074ad27(int *param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0xbc))();
  return 0;
}

