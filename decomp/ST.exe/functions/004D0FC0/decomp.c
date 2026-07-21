#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_004d0fc0(STGroupBoatC *param_1)

{

  STGameObjC::STGameObjC((STGameObjC *)param_1);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&param_1->field_0x1d5);
  param_1->vtable = (STGroupBoatCVTable *)&VTable_00798C70;
  *(VTable_00798C6C **)&param_1->field_0x1d5 = &VTable_00798C6C;
  *(undefined4 *)&param_1->field_0x2a8 = 0;
  *(undefined4 *)&param_1->field_0x2dc = 0;
  param_1->field_0350 = 0;
  param_1->field_0354 = 0;
  param_1->field_0358 = 0;
  memset(&param_1->field_0x308, 0, 0x30); /* compiler bulk-zero initialization */
  param_1->field_035C = 0;
  *(undefined4 *)&param_1->field_0x2c8 = 1;
  *(undefined4 *)&param_1->field_0x2c4 = 1;
  *(undefined4 *)&param_1->field_0x2c0 = 1;
  *(undefined4 *)&param_1->field_0x2bc = 1;
  *(undefined4 *)&param_1->field_0x2b8 = 1;
  *(undefined4 *)&param_1->field_0x2b4 = 1;
  *(undefined4 *)&param_1->field_0x2e0 = 0;
  *(undefined4 *)&param_1->field_0x2a0 = 0;
  *(undefined4 *)&param_1->field_0x2e4 = 0;
  *(undefined4 *)&param_1->field_0x2e8 = 0;
  param_1->field_034C = 0xff;
  *(undefined4 *)&param_1->field_0x2a4 = 0;
  return &param_1->vtable;
}

