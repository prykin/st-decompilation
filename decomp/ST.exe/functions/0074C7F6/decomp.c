#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1868+0x20 */

undefined4 __thiscall FUN_0074c7f6(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = (*(int **)(param_1 + 0xa0))[0x23];
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = 0x80070057;
  }
  else {
    /* ST_CALLSITE[0074C819]: CALL dword ptr [EDX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x2c))(iVar1 + 0x1c,param_2);
  }
  return uVar2;
}

