#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1868+0x50

   [STVTableApplier] Virtual slot 007A19F0+0x50 */

undefined4 __fastcall FUN_00748527(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == nullptr) {
    return 0x80040209;
  }
  /* ST_CALLSITE[00748537]: CALL dword ptr [ECX + 0x3c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
  return uVar2;
}

