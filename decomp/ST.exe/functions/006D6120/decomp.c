#include "../../pseudocode_runtime.h"


void FUN_006d6120(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x5c) + 0xc);
  /* ST_CALLSITE[006D612F]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}

