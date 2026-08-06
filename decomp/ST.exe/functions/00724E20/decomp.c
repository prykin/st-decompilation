#include "../../pseudocode_runtime.h"


void __thiscall FUN_00724e20(void *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;

  iVar1 = STField<int>(this,0x13c);
  if (STField<int>(this,0x20) != 1) {
    if (param_1 <= iVar1 / 2) {
      STField<undefined4>(this,400) = 0;
      return;
    }
    if ((STField<int>(this,0x2c) - iVar1) + iVar1 / 2 <= param_1) {
      STField<int>(this,400) = STField<int>(this,0x18c) + -1;
      return;
    }
    lVar2 = Library::MSVCRT::__ftol();
    STField<int>(this,400) = (int)lVar2;
    return;
  }
  if (param_2 <= iVar1 / 2) {
    STField<undefined4>(this,400) = 0;
    return;
  }
  if ((STField<int>(this,0x30) - iVar1) + iVar1 / 2 <= param_2) {
    STField<int>(this,400) = STField<int>(this,0x18c) + -1;
    return;
  }
  lVar2 = Library::MSVCRT::__ftol();
  STField<int>(this,400) = (int)lVar2;
  return;
}

