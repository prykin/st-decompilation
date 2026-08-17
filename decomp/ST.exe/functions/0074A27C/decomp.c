#include "../../pseudocode_runtime.h"


bool __fastcall FUN_0074a27c(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    /* ST_CALLSITE[0074A28E]: CALL dword ptr [ECX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(*(int **)(param_1 + 0x18),iVar1);
    FUN_0074a277(param_1);
  }
  /* ST_CALLSITE[0074A29B]: CALL dword ptr [0x0085bc98] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  ResetEvent(*(HANDLE *)(param_1 + 0x54));
  return iVar1 == 0;
}

