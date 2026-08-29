#include "../../pseudocode_runtime.h"


void __fastcall FUN_005672e0(RecoveredRecordView_005672E0_6B6F72F8 *param_1)

{
  thunk_FUN_00567490((RecoveredRecordView_00567490_37C489F0 *)param_1);
  if ((AnonShape_006C2390_A203A467 *)param_1->field_0DF7 != nullptr) {
    FUN_006c2390((AnonShape_006C2390_A203A467 *)param_1->field_0DF7);
    param_1->field_0DF7 = 0;
  }
  if (param_1->field_0F8B != 0) {
    FUN_006c2050();
  }
  param_1->field_0F8B = 0;
  return;
}

