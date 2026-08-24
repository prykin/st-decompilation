#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 007A1868+0x34

   [STVTableApplier] Virtual slot 007A19F0+0x34 */

undefined4 __thiscall FUN_0074c858(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x5c);
  /* ST_CALLSITE[0074C86A]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((*(int **)(param_1 + 0xa0))[0x23] + 0x18) == 0) {
    /* ST_CALLSITE[0074C899]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x40103;
  }
  else {
    /* ST_CALLSITE[0074C888]: CALL dword ptr [EAX + 0x34] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x34))(param_2,param_3);
    /* ST_CALLSITE[0074C88E]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

