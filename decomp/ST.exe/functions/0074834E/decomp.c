#include "../../pseudocode_runtime.h"


int __thiscall FUN_0074834e(void *this,int *param_1)

{
  int iVar1;

  iVar1 = FUN_00747f68(this,param_1);
  if (-1 < iVar1) {
    /* ST_CALLSITE[0074836F]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)*param_1)(param_1,&DAT_007a1b60,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

