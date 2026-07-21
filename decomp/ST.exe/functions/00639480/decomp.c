#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_00639480(AnonShape_00639480_B53D0B0F *param_1)

{
  int iVar1;

  STGameObjC::STGameObjC((STGameObjC *)param_1);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&param_1->field_01D5);
  param_1->field_01D5 = &VTable_0079D338;
  *(VTable_0079D1D8 **)param_1 = &VTable_0079D1D8;
  memset(&param_1->field_0x231, 0, 0x3e); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&param_1->field_0x272, 0, 0x39); /* compiler bulk-zero initialization */
  param_1->field_0x270 = 1;
  param_1->field_026F = 0;
  param_1->field_0271 = 0;
  return (undefined4 *)param_1;
}

