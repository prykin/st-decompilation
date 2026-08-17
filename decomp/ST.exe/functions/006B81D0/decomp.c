#include "../../pseudocode_runtime.h"


void FUN_006b81d0(undefined4 *param_1)

{
  if ((HMIXER)param_1[0xc] != (HMIXER)0x0) {
    /* ST_CALLSITE[006B81DF]: CALL dword ptr [0x0085bed8] */
    mixerClose((HMIXER)param_1[0xc]);
    param_1[0xc] = 0;
  }
  FUN_006a5e90((short *)param_1);
  return;
}

