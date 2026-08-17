#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0074A844 -> 00747406 @ 0074A881 */

void __thiscall FUN_0074a844(void *this,int *param_1,int *param_2)

{
  int iVar1;

  /* ST_CALLSITE[0074A859]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)*param_1)(param_1,&DAT_007a1ae0,&param_1);
  if (-1 < iVar1) {
    /* ST_CALLSITE[0074A86C]: CALL dword ptr [ECX + 0xc] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0xc))(param_1,0x19,param_2,0);
    /* ST_CALLSITE[0074A875]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_00747406(this,0x19,param_2,0);
  return;
}

