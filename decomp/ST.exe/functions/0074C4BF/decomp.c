#include "../../pseudocode_runtime.h"


int FUN_0074c4bf(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x74);
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x38))();
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x58))();
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

