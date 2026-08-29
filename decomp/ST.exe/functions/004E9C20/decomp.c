#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e9c20(RecoveredRecordView_004E9C20_2DA6BDD3 *param_1)

{
  int iVar1;
  RecoveredRecordView_004E9C20_2DA6BDD3 *local_8;

  if (param_1->field_046C != 0) {
    local_8 = param_1;
    if (param_1->field_048C != 0) {

      iVar1 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         (RecoveredRecordView_005EFAE0_855D930D *)param_1->field_0470,
                         (int *)&local_8);
      if (iVar1 == 0) {

        thunk_FUN_004e95c0(local_8,(STBoatC *)param_1);
        param_1->field_048C = 0;
      }
    }
    if (param_1->field_0494 != 0) {
      /* ST_CALLSITE[004E9C8D]: CALL 0x00401dd4; direct=00401DD4 TLOFakeTy::sub_004D0A80 */
      TLOFakeTy::sub_004D0A80
                (g_tLOFake_00800BCC,param_1->field_0480,param_1->field_0484,param_1->field_0488);
      param_1->field_0494 = 0;
    }
  }
  return 0;
}

