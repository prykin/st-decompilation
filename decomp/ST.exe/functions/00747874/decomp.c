#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_00747874(void *this,AnonShape_00747874_535F3AAD *param_1)

{
  undefined4 uVar1;

  STField<undefined4>(this,4) = 0;
  STField<AnonShape_00747874_535F3AAD *>(this,8) = param_1;
  STField<undefined4>(this,0x10) = 1;
  *(VTable_007A1128 **)this = &VTable_007A1128;
  /* ST_CALLSITE[00747895]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_000C + 4))(&param_1->field_000C);
  if (param_1 == nullptr) {
    /* ST_CALLSITE[007478A5]: CALL dword ptr [EAX + 0x10] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)(*STField<int *>(this,8) + 0x10))();
  }
  else {
    STField<undefined4>(this,4) = param_1->field_0004;
    uVar1 = param_1->field_000C;
  }
  STField<undefined4>(this,0xc) = uVar1;
  return this;
}

