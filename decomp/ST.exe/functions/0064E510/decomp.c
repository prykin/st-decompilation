#include "../../pseudocode_runtime.h"


int __thiscall FUN_0064e510(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x4ee);
  if (iVar1 != 0) {
    uVar2 = STField<uint>(iVar1,0xC);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if (((bVar5) && (iVar3 = STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C), iVar3 != 0))
           && (STField<int>(iVar3,0x1) == param_1)) {
          return iVar3;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return 0;
}

