#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DC3C+0x18

   [STVTableApplier] Virtual slot 007A1488+0x18 */

void FUN_0074aae1(int param_1,undefined4 param_2)

{
  /* ST_CALLSITE[0074AAEE]: CALL dword ptr [EAX + 0x9c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + 0x40) + 0x9c))(param_2);
  return;
}

