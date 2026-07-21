#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_0060ec70(undefined4 *param_1)

{

  STGameObjC::STGameObjC((STGameObjC *)param_1);
  *param_1 = &VTable_0079CD94;
  if (param_1 != (undefined4 *)0x0) {
    memset((void *)((int)param_1 + 0x1d5), 0, 0x116); /* compiler bulk-zero initialization */
    return param_1;
  }
  memset((void *)0x0, 0, 0x116); /* compiler bulk-zero initialization */
  return (undefined4 *)0x0;
}

