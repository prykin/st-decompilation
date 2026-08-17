#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DCBC+0x24

   [STVTableApplier] Virtual slot 007A1510+0x24 */

void __thiscall FUN_0074ab9e(void *param_1,undefined4 *param_2)

{
  uint uVar1;

  uVar1 = FUN_00747f57(param_1,param_2);
  if (-1 < (int)uVar1) {
    /* ST_CALLSITE[0074ABBA]: CALL dword ptr [EAX + 0x90] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*STField<int *>(param_1,0xd8) + 0x90))(param_2);
  }
  return;
}

