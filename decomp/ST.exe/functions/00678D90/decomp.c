#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00678d90(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x695);
  uVar4 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        puVar3 = (undefined4 *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C));
      }
      else {
        puVar3 = nullptr;
      }
      if ((puVar3[1] != 0) && (puVar3[1] == param_1)) {
        return *puVar3;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0;
}

