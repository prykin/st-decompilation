#include "../../pseudocode_runtime.h"


void __fastcall FUN_005efc40(RecoveredRecordView_005EFC40_A614F4B4 *param_1)

{
  int iVar1;

  param_1->field_024E = 1;

  iVar1 = thunk_FUN_00495ff0(param_1->field_0242,param_1->field_0244,param_1->field_0246,0,
                             (RecoveredRecordView_00495FF0_A2A90B23 *)param_1);
  if (iVar1 == 0) {
    param_1->field_0252 = param_1->field_0252 + -1;
  }
  param_1->field_023A = 4;
  param_1->field_02E9 = 0;
  param_1->field_0317 = 0;
  thunk_FUN_005f0620((RecoveredRecordView_005F0620_3EDDC37E *)param_1);
  return;
}

