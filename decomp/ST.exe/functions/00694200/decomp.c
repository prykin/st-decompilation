#include "../../pseudocode_runtime.h"


int __thiscall FUN_00694200(void *this,uint param_1)

{
  int iVar1;

  STField<undefined4>(this,0x199d) = 0xffffffff;
  while( true ) {
    iVar1 = STField<int>(this,0x199d) + 1;
    STField<int>(this,0x199d) = iVar1;
    while( true ) {
      if (7 < iVar1) {
        return 0;
      }
      iVar1 = thunk_FUN_00693e60(this,iVar1);
      if (iVar1 != 0) break;
      iVar1 = STField<int>(this,0x199d) + 1;
      STField<int>(this,0x199d) = iVar1;
    }
    iVar1 = thunk_FUN_00693e60(this,STField<int>(this,0x199d));
    if (iVar1 == 0) break;
    if (STField<byte>(iVar1,0x23) == param_1) {
      return iVar1;
    }
  }
  return 0;
}

