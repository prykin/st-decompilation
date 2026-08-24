#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_00609950(STGroupBoatC *param_1)

{
  uint *puVar2;
  /* ST_CALLSITE[00609954]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  param_1->vtable = (STGroupBoatCVTable *)&VTable_0079CC28;
  if (param_1 == nullptr) {
    puVar2 = nullptr;
  }
  else {
    puVar2 = (undefined4 *)((int)&param_1->field_01D2 + 3);
  }
  memset(puVar2, 0, 0x83); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x80);
  param_1->field_0x225 = 1;
  return &param_1->vtable;
}

