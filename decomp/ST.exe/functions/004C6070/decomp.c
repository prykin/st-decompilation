#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c6070(int *param_1)

{
  if (STField<int>(param_1,0x245) == 5) {
    /* ST_CALLSITE[004C6082]: CALL dword ptr [EAX + 0x90] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x90))(3,0x3fb);
  }
  return 0;
}

