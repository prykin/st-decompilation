#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004d8e70(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_8;

  local_8 = nullptr;
  if (99 < STField<int>(this,0x4ec)) {
    if (STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x4f0) ==
        nullptr) {
      STField<undefined4>(this,0x4d0) = 1;
      STField<undefined4>(this,0x261) = 1;
      STField<uint>(this,0x265) = STField<uint>(this,0x265) | 2;
      STField<int>(this,0x2a5) = param_1;
      STField<int>(this,0x2a9) = param_2;
      STField<undefined4>(this,0x2ad) = param_3;
      return 0;
    }

    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,
                       STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x4f0),
                       (int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_0058c560(local_8,param_1,param_2);
      STField<undefined4>(this,0x4ec) = 0;
      STField<uint>(this,0x4d8) = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(this,0x261) = 0;
      return 0;
    }
    STField<undefined4>(this,0x4f0) = 0;
    STField<undefined4>(this,0x261) = 0;
  }
  return 0;
}

