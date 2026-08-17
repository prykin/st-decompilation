#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_0060ec70(undefined4 *param_1)

{

  /* ST_CALLSITE[0060EC74]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  *param_1 = &VTable_0079CD94;
  if (param_1 != nullptr) {
    memset((void *)((int)param_1 + 0x1d5), 0, 0x116); /* compiler bulk-zero initialization */
    return param_1;
  }
  memset(nullptr, 0, 0x116); /* compiler bulk-zero initialization */
  return nullptr;
}

