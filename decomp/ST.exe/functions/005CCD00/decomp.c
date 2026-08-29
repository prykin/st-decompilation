#include "../../pseudocode_runtime.h"


void __fastcall FUN_005ccd00(RecoveredRecordView_005CCD00_42E0A333 *param_1)

{
  if (param_1->field_21FC != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    FUN_006e6080(param_1,2,param_1->field_21FC,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_054C != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    FUN_006e6080(param_1,2,g_startSystem_0081176C->field_054C,(undefined4 *)&param_1->field_0x1d);
    param_1->field_002D = 0x29;
    param_1->field_0031 = 0x19;
    FUN_006e6080(param_1,2,g_startSystem_0081176C->field_054C,(undefined4 *)&param_1->field_0x1d);
  }
  if (g_startSystem_0081176C->field_0550 != 0) {
    param_1->field_002D = 0x20;
    param_1->field_0031 = 0;
    FUN_006e6080(param_1,2,g_startSystem_0081176C->field_0550,(undefined4 *)&param_1->field_0x1d);
  }
  thunk_FUN_005c5eb0((RecoveredRecordView_005C5EB0_6F980905 *)param_1);
  return;
}

