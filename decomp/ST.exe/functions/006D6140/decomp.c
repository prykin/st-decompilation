#include "../../pseudocode_runtime.h"


void FUN_006d6140(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x5c) + 0xc);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}

