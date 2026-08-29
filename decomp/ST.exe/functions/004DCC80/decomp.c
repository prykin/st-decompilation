#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dcc80(RecoveredRecord_004DCC80_51520547 *param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = nullptr;
  if (param_1->field_04EC != nullptr) {

    iVar1 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,param_1->field_04EC,(int *)&local_8);
    if (iVar1 == 0) {

      thunk_FUN_00617880((RecoveredRecord_00617880_C53B1B82 *)local_8);
    }
    param_1->field_04EC = nullptr;
  }
  return 0;
}

