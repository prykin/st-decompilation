#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074a36e(int param_1)

{
  int *piVar1;
  uint uVar2;
  /* ST_CALLSITE[0074A379]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[0074A389]: CALL dword ptr [ECX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  /* ST_CALLSITE[0074A390]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return uVar2;
}

