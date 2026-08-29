#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c5e60(RecoveredRecord_004C5E60_EA3D928C *param_1)

{
  int iVar1;
  RecoveredRecord_004C5E60_EA3D928C *local_8;

  if (param_1->field_04D0 != nullptr) {
    local_8 = param_1;

    iVar1 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,param_1->field_04D0,(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_00581b80((RecoveredRecord_00581B80_E3538055 *)local_8);
    }
    param_1->field_04D0 = nullptr;
  }
  return 0;
}

