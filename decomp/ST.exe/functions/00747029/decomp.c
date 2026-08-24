#include "../../pseudocode_runtime.h"


undefined4 FUN_00747029(AnonShape_00747029_F1EF8B79 *param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  uint uVar2;
  if (param_2 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    lpCriticalSection = param_1->field_002C;
    /* ST_CALLSITE[00747043]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    piVar1 = (int *)param_1->field_000C;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[00747053]: CALL dword ptr [ECX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *param_2 = param_1->field_000C;
    /* ST_CALLSITE[0074705C]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0;
  }
  return uVar2;
}

