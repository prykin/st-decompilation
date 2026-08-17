#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00747429(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_8;

  puVar1 = STField<undefined4 *>(this,0x40);
  if (puVar1 == nullptr) {
    uVar3 = 0x80004002;
  }
  else {
    local_8 = this;
    /* ST_CALLSITE[00747443]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_007a1af0,&local_8);
    if (iVar2 < 0) {
      /* ST_CALLSITE[00747470]: CALL dword ptr [EAX + 0x20] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar3 = (**(code **)(*STField<int *>(this,0x40) + 0x20))
                        (STField<int *>(this,0x40),param_1);
    }
    else {
      /* ST_CALLSITE[00747455]: CALL dword ptr [ECX + 0x4c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar3 = (**(code **)(*local_8 + 0x4c))(local_8,param_1,param_2);
      /* ST_CALLSITE[00747460]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return uVar3;
}

