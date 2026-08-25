#include "../../pseudocode_runtime.h"


void __thiscall FUN_00696050(void *this,uint param_1)

{
  int iVar1;

  iVar1 = STField<int>(this,0x5853);
  if (((iVar1 != 0) && (param_1 < STField<uint>(iVar1,0xC))) &&
     (iVar1 = STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C), iVar1 != 0)) {
    if (*(DArrayTy **)(iVar1 + 0x15) != nullptr) {
      DArrayDestroy(*(DArrayTy **)(iVar1 + 0x15));
      STField<undefined4>(iVar1,0x15) = 0;
    }
    if (*(DArrayTy **)(iVar1 + 0x19) != nullptr) {
      DArrayDestroy(*(DArrayTy **)(iVar1 + 0x19));
      STField<undefined4>(iVar1,0x19) = 0;
    }
  }
  return;
}

