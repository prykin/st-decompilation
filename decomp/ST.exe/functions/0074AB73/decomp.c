#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DCBC+0x20

   [STVTableApplier] Virtual slot 007A1510+0x20 */

void __thiscall FUN_0074ab73(int param_1,undefined4 param_2)

{
  /* ST_CALLSITE[0074AB7F]: CALL dword ptr [EAX + 0xb0] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(**(int **)(param_1 + 0xd8) + 0xb0))(param_2);
  return;
}

