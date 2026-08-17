#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DE90+0x3C

   [STVTableApplier] Virtual slot 007A1780+0x3C

   [STVTableApplier] Virtual slot 007A1908+0x3C */

int FUN_0074c501(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x5c);
  /* ST_CALLSITE[0074C512]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (*(int *)(*(int *)(*(int *)(param_1 + 0xcc) + 0x90) + 0x18) == 0)) {
    /* ST_CALLSITE[0074C560]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = -0x7ffbfdf7;
  }
  else {
    iVar1 = FUN_00748946(param_1);
    if (iVar1 < 0) {
      /* ST_CALLSITE[0074C53D]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      /* ST_CALLSITE[0074C54F]: CALL dword ptr [EAX + 0x5c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x5c))();
      /* ST_CALLSITE[0074C555]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return iVar1;
}

