#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d8d40(RecoveredRecord_004D8D40_E38296AE *param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = nullptr;
  if (param_1->field_04F0 != nullptr) {

    iVar1 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,param_1->field_04F0,(int *)&local_8);
    if (iVar1 == 0) {

      thunk_FUN_0058bb50((RecoveredRecord_0058BB50_29AADF52 *)local_8);
      return 0;
    }
    param_1->field_04F0 = nullptr;
  }
  return 0;
}

