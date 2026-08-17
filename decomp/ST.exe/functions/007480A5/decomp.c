#include "../../pseudocode_runtime.h"


undefined4 FUN_007480a5(AnonShape_007480A5_22FE1AF9 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  lpCriticalSection = param_1->field_005C;
  /* ST_CALLSITE[007480AF]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1->field_0064 + 0x14) == 0) {
    if (param_1->field_000C == 0) {
      /* ST_CALLSITE[007480F4]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 1;
    }
    else {
      /* ST_CALLSITE[007480D8]: CALL dword ptr [EAX + 0x2c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)param_1[-1].field_005C[1].SpinCount)();
      /* ST_CALLSITE[007480E1]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1->field_000C + 8))((int *)param_1->field_000C);
      param_1->field_000C = 0;
      /* ST_CALLSITE[007480E9]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0;
    }
  }
  else {
    /* ST_CALLSITE[007480BF]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x80040224;
  }
  return uVar1;
}

