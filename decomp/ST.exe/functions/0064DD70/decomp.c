#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_0064dd70(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  /* ST_CALLSITE[0064DD7C]: CALL dword ptr [EAX + 0x140] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_3 + 0x140))(param_4);
  return 0xffffffff;
}

