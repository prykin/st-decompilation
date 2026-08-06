#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c6070(int *param_1)

{
  if (STField<int>(param_1,0x245) == 5) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x90))(3,0x3fb);
  }
  return 0;
}

