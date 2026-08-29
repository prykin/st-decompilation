#include "../../pseudocode_runtime.h"


void __cdecl FUN_0065d0f0(int *param_1)

{
  if ((RecoveredRecordView_0065D030_884B498B *)*param_1 !=
      nullptr) {
    thunk_FUN_0065d030((RecoveredRecordView_0065D030_884B498B *)*param_1);
    FreeAndNull(param_1);
  }
  return;
}

