#include "../../pseudocode_runtime.h"


int FUN_0074aa87(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  /* ST_CALLSITE[0074AA9F]: CALL EBP */
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  /* ST_CALLSITE[0074AAAE]: CALL EBP */
  EnterCriticalSection(lpCriticalSection_00);
  /* ST_CALLSITE[0074AAB8]: CALL dword ptr [EAX + 0x88] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x88))();
  if (-1 < iVar1) {
    iVar1 = FUN_0074896b(param_1);
  }
  /* ST_CALLSITE[0074AAD3]: CALL EDI */
  LeaveCriticalSection(lpCriticalSection_00);
  /* ST_CALLSITE[0074AAD6]: CALL EDI */
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

