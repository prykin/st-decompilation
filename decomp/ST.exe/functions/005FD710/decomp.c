#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_005fd710(undefined4 *param_1)

{

  STGameObjC::STGameObjC((STGameObjC *)param_1);
  *param_1 = &VTable_0079C8A0;
  memset((void *)((int)param_1 + 0x206), 0, 0x3d); /* compiler bulk-zero initialization */
  return param_1;
}

