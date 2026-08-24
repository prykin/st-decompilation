#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DDEC+0x58 */

undefined4 __fastcall FUN_0074c1ca(int param_1)

{
  uint uVar1;
  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int **)(param_1 + 0x90) != nullptr) {
    /* ST_CALLSITE[0074C1D8]: CALL dword ptr [EAX + 0x4c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x4c))();
  }
  return uVar1;
}

