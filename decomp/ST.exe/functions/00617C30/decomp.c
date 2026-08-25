#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00617c30(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x5e);
  if (iVar1 != 0) {
    uVar2 = STField<uint>(iVar1,0xC);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if (bVar5) {
          iVar3 = STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C);
        }
        else {
          iVar3 = 0;
        }
        if ((STField<short>(iVar3,0xA) == param_1) && (STField<short>(iVar3,0xC) == param_2)) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return 1;
}

