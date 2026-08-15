#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1868+0x54

   [STVTableApplier] Virtual slot 007A19F0+0x54 */

undefined4 __fastcall FUN_0074853b(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == nullptr) {
    return 0x80040209;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*piVar1 + 0x40))(piVar1);
  return uVar2;
}

