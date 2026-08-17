#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_007485c5(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[007485DC]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_00747bb4(param_1);
  return;
}

