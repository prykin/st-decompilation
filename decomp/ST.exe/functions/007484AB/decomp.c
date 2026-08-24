#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1868+0x44

   [STVTableApplier] Virtual slot 007A19F0+0x44 */

undefined4 __thiscall FUN_007484ab(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == nullptr) {
    uVar2 = 0x80040209;
  }
  else {
    /* ST_CALLSITE[007484C3]: CALL dword ptr [ECX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2);
  }
  return uVar2;
}

