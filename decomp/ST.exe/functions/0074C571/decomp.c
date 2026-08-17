#include "../../pseudocode_runtime.h"


int FUN_0074c571(AnonShape_0074C571_537DB7FB *param_1)

{
  int iVar1;
  undefined1 *lpCriticalSection;

  lpCriticalSection = &param_1->field_00CC->field_0x5c;
  /* ST_CALLSITE[0074C588]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1->field_000C == 0) || (*(int *)(param_1->field_00CC->field_0090 + 0x18) == 0)) {
    /* ST_CALLSITE[0074C5C1]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = -0x7ffbfdf7;
  }
  else {
    /* ST_CALLSITE[0074C5A4]: CALL dword ptr [EAX + 0x60] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(param_1->field_00CC->field_0000 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_0074896b((int)param_1);
    }
    /* ST_CALLSITE[0074C5B6]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar1;
}

