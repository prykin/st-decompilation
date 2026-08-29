#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c2d40(RecoveredRecordView_004C2D40_151343D1 *param_1)

{
  int iVar1;
  RecoveredRecordView_004C2D40_151343D1 *local_8;

  if (param_1->field_0408 != 0) {
    local_8 = param_1;

    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,
                       (RecoveredRecordView_005EFAE0_855D930D *)param_1->field_040C,(int *)&local_8);
    if (iVar1 == 0) {
      /* ST_CALLSITE[004C2D78]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
      STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,*(uint *)&local_8->field_0x8);
      param_1->field_040C = 0;
      param_1->field_0408 = 0;
    }
    param_1->field_0408 = 0;
  }
  return 0;
}

