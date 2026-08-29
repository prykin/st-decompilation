#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005fb600(RecoveredRecord_005FB600_0B8C3724 *param_1)

{
  uint uVar1;
  int iVar2;

  uVar1 = 0;
  if (param_1->field_02A0 < 3) {

    iVar2 = thunk_FUN_005f9310(param_1,1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

