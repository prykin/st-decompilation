#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004ce670(RecoveredRecordView_004CE670_E8CA8BFA *param_1)

{
  int iVar1;
  void *local_8;

  local_8 = nullptr;
  if ((param_1->field_04D4 != 0) &&
     ((RecoveredRecordView_005EFAE0_855D930D *)param_1->field_05D3 !=
      nullptr)) {

    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,
                       (RecoveredRecordView_005EFAE0_855D930D *)param_1->field_05D3,(int *)&local_8);
    if (iVar1 == 0) {

      thunk_FUN_004cdef0(local_8,param_1->field_0018);
    }
  }
  param_1->field_04D4 = 0;
  return 0;
}

