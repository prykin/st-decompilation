#include "../../pseudocode_runtime.h"


int __thiscall FUN_0063c8f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1 - STField<int>(this,0x28e);
  STField<int>(this,0x266) = (int)STField<short>(this,0x24d);
  STField<int>(this,0x26a) = (int)STField<short>(this,0x24f);
  iVar2 = ((STField<int>(this,0x292) * iVar2 - (STField<int>(this,0x296) * iVar2 * iVar2) / 2)
          * 3) / 10;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar1 = STField<int>(this,0x29a);
  if (iVar1 == 1) {
    iVar2 = STField<short>(this,0x251) - iVar2;
    STField<int>(this,0x26e) = iVar2;
    if (iVar2 < STField<int>(this,0x282)) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
  }
  else if (iVar1 == 2) {
    iVar2 = STField<int>(this,0x26e) + iVar2;
    STField<int>(this,0x26e) = iVar2;
    if (STField<int>(this,0x282) < iVar2) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
  }
  else if (iVar1 == 3) {
    iVar2 = STField<int>(this,0x26e) - iVar2;
    STField<int>(this,0x26e) = iVar2;
    if (iVar2 < STField<int>(this,0x282)) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
  }

  iVar2 = thunk_FUN_0063cb30(this);
  if (((iVar2 == 0) && (STField<int>(this,0x26e) < (int)STField<short>(this,599))) &&
     (STField<char>(this,0x29e) == '\x01')) {
    iVar2 = 4;
  }
  return iVar2;
}

