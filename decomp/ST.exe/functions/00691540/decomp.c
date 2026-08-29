#include "../../pseudocode_runtime.h"


void __cdecl FUN_00691540(int *param_1)

{
  if ((RecoveredRecordView_00691480_8BF19534 *)*param_1 !=
      nullptr) {
    thunk_FUN_00691480((RecoveredRecordView_00691480_8BF19534 *)*param_1);
    FreeAndNull(param_1);
  }
  return;
}

