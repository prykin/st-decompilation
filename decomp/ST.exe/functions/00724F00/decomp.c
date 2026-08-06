#include "../../pseudocode_runtime.h"


bool __thiscall FUN_00724f00(void *this,int param_1,int param_2)

{
  int iVar1;

  if (STField<int>(this,0x20) == 1) {
    if ((param_2 < STField<int>(this,0x28) + STField<int>(this,0x198)) ||
       (STField<int>(this,0x13c) + STField<int>(this,0x28) + STField<int>(this,0x198) <
        param_2)) {
      return false;
    }
  }
  else {
    if (param_1 < STField<int>(this,0x24) + STField<int>(this,0x194)) {
      return false;
    }
    if (STField<int>(this,0x13c) + STField<int>(this,0x24) + STField<int>(this,0x194) <
        param_1) {
      return false;
    }
  }
  if (STField<int>(this,0x140) != 0) {
    iVar1 = FUN_006b55c0(STField<int>(this,0x140),STField<int>(this,0x144),
                         (param_1 - STField<int>(this,0x194)) - STField<int>(this,0x24),
                         (param_2 - STField<int>(this,0x198)) - STField<int>(this,0x28));
    return SUB41(iVar1,0);
  }
  return true;
}

