#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_00609950(STGroupBoatC *param_1)

{
  undefined4 *puVar2;

  STGameObjC::STGameObjC((STGameObjC *)param_1);
  param_1->vtable = (STGroupBoatCVTable *)&VTable_0079CC28;
  if (param_1 == (STGroupBoatC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)&param_1->field_0x1d5;
  }
  memset(puVar2, 0, 0x82); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x80);
  *(undefined1 *)((int)puVar2 + 2) = 0;
  param_1->field_0x225 = 1;
  return &param_1->vtable;
}

