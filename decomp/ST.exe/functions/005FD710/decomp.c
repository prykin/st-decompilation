#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_005fd710(undefined4 *param_1)

{

  /* ST_CALLSITE[005FD714]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  *param_1 = &VTable_0079C8A0;
  memset((void *)((int)param_1 + 0x206), 0, 0x3d); /* compiler bulk-zero initialization */
  return param_1;
}

