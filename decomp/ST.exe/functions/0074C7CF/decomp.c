#include "../../pseudocode_runtime.h"


void __thiscall FUN_0074c7cf(void *this,undefined4 param_1)

{
  int iVar1;

  /* ST_CALLSITE[0074C7E0]: CALL dword ptr [EAX + 0x50] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*STField<int *>(this,0xa0) + 0x50))(1,param_1);
  if (-1 < iVar1) {
    FUN_00748339(this);
  }
  return;
}

