#include "../../pseudocode_runtime.h"


undefined4 * __thiscall
RecoveredClass_00747874::FUN_00747874
          (RecoveredClass_00747874 *this,AnonShape_00747874_535F3AAD *param_1)

{
  uint uVar1;
  this->field_0004 = 0;
  this->field_0008 = param_1;
  this->field_0010 = 1;
  this->field_0000 = &VTable_007A1128;
  /* ST_CALLSITE[00747895]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_000C + 4))(&param_1->field_000C);
  if (param_1 == nullptr) {
    /* ST_CALLSITE[007478A5]: CALL dword ptr [EAX + 0x10] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)(*STField<int *>(this,0x8) + 0x10))();
  }
  else {
    this->field_0004 = param_1->field_0004;
    uVar1 = param_1->field_000C;
  }
  this->field_000C = uVar1;
  return &this->field_0000;
}

