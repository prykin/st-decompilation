#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c5eb0(RecoveredRecordView_004C5EB0_23829C22 *param_1)

{
  int iVar1;
  RecoveredRecordView_004C5EB0_23829C22 *local_8;

  if ((uint)param_1->field_04D4 <= g_playSystem_00802A38->field_00E4) {
    local_8 = param_1;

    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,
                       (RecoveredRecordView_005EFAE0_855D930D *)param_1->field_04D0,(int *)&local_8);
    if (iVar1 == 0) {
      param_1->field_02CD = *(undefined4 *)&local_8->field_0x20f;
    }
    param_1->field_04D4 = g_playSystem_00802A38->field_00E4 + 0x7d;
  }
  return 0;
}

