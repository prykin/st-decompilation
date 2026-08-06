#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0063ca50(void *this,undefined4 param_1)

{
  int iVar1;

  iVar1 = STField<int>(this,0x29a);
  if (iVar1 == 1) {
    STField<undefined4>(this,0x292) = 10;
    STField<undefined4>(this,0x28e) = param_1;
    STField<undefined4>(this,0x296) = 1;
    STField<undefined4>(this,0x29a) = 2;
    STField<int>(this,0x282) = STField<short>(this,599) + 0x19;
    STField<undefined4>(this,0x27e) = STField<undefined4>(this,0x26e);
  }
  else {
    if (iVar1 == 2) {
      STField<undefined4>(this,0x292) = 6;
      STField<undefined4>(this,0x28e) = param_1;
      STField<undefined4>(this,0x27e) = STField<undefined4>(this,0x26e);
      STField<undefined4>(this,0x296) = 1;
      STField<int>(this,0x282) = (int)STField<short>(this,599);
      STField<undefined4>(this,0x29a) = 3;
      return 0;
    }
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}

