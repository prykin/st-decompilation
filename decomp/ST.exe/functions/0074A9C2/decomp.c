#include "../../pseudocode_runtime.h"


int FUN_0074a9c2(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  /* ST_CALLSITE[0074A9DA]: CALL EBP */
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  /* ST_CALLSITE[0074A9E9]: CALL EBP */
  EnterCriticalSection(lpCriticalSection_00);
  /* ST_CALLSITE[0074A9F1]: CALL dword ptr [EAX + 0x38] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x38))();
  if (iVar1 == 0) {
    /* ST_CALLSITE[0074AA02]: CALL dword ptr [EAX + 0x68] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x68))();
    if (-1 < iVar1) {
      iVar1 = FUN_007482a5();
    }
  }
  /* ST_CALLSITE[0074AA1A]: CALL EDI */
  LeaveCriticalSection(lpCriticalSection_00);
  /* ST_CALLSITE[0074AA1D]: CALL EDI */
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

