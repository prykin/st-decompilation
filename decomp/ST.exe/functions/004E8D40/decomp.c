#include "../../pseudocode_runtime.h"


void __fastcall FUN_004e8d40(RecoveredRecordView_004E8D40_4C38236A *param_1)

{
  int iVar1;
  RecoveredRecordView_004E8D40_4C38236A *local_8;

  if (*(int *)&param_1->field_0x5ac == 0x6c) {
    local_8 = param_1;
    if ((*(int *)&param_1->field_0x4f8 == 0) && (param_1->field_05D3 != 0)) {

      thunk_FUN_004e8dc0((RecoveredRecordView_004E8DC0_419C0053 *)param_1);
    }
    if ((*(RecoveredRecordView_005EFAE0_855D930D **)&param_1->field_0x4f8 !=
         nullptr) && (param_1->field_061B == 0)) {

      iVar1 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         *(RecoveredRecordView_005EFAE0_855D930D **)&param_1->field_0x4f8,
                         (int *)&local_8);
      if (iVar1 == 0) {
        param_1->field_061B = local_8;
      }
    }
  }
  return;
}

