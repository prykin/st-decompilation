#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00617a20(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  iVar2 = STField<int>(this,0x5e);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = 0;
    if (0 < STField<int>(iVar2,0xC)) {
      bVar4 = STField<int>(iVar2,0xC) != 0;
      do {
        if (bVar4) {
          iVar2 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C);
        }
        else {
          iVar2 = 0;
        }
        if (STField<int>(iVar2,0x20) == param_1) {
          STField<undefined4>(iVar2,0x18) = param_3;
          STField<undefined4>(iVar2,0x1C) = param_2;
          uVar1 = 1;
        }
        iVar2 = STField<int>(this,0x5e);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < STField<uint>(iVar2,0xC);
      } while ((int)uVar3 < (int)STField<uint>(iVar2,0xC));
    }
  }
  return uVar1;
}

