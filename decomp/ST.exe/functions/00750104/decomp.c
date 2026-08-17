#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00750104(void *this,AnonShape_00750104_599B328B *param_1)

{
  int iVar1;
  int *this_00;
  int *local_8;

  local_8 = this;
  /* ST_CALLSITE[00750115]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  /* ST_CALLSITE[00750125]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_000C + 4))(&param_1->field_000C);
  this_00 = (int *)((int)this + 0x38);
  if (param_1->field_0030 == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  local_8 = (int *)*this_00;
  while (local_8 != nullptr) {
    iVar1 = FUN_0074ded7((int)local_8);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((param_1->field_001C < *(int *)(iVar1 + 0x1c)) ||
       ((param_1->field_001C <= *(int *)(iVar1 + 0x1c) &&
        (param_1->field_0018 < *(uint *)(iVar1 + 0x18))))) break;
    FUN_0074dec2((int *)&local_8);
  }
  if (local_8 == nullptr) {
    FUN_0074df72(this_00,param_1);
  }
  else {
    FUN_0074e122(this_00,local_8,(int)param_1);
  }
  FUN_00750287(this);
  /* ST_CALLSITE[00750190]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

