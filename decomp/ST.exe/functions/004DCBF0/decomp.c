#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dcbf0(RecoveredRecordView_004DCBF0_FF5B50F1 *param_1)

{
  int iVar1;
  uint uVar2;
  RecoveredRecord_00617EB0_1C326A6E *local_8;

  local_8 = nullptr;
  if ((uint)param_1->field_04F0 <= g_playSystem_00802A38->field_00E4) {

    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,
                       (RecoveredRecordView_005EFAE0_855D930D *)param_1->field_04EC,(int *)&local_8);
    if (iVar1 == 0) {

      uVar2 = thunk_FUN_00617eb0(local_8);
      param_1->field_02CD = uVar2;
    }
    param_1->field_04F0 = g_playSystem_00802A38->field_00E4 + 0x19;
  }
  return 0;
}

