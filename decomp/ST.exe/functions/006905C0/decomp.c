#include "../../pseudocode_runtime.h"


uint __thiscall FUN_006905c0(void *this,short param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xc9);
  uVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (((bVar5) &&
          (psVar4 = (short *)(STField<int>(iVar1,0x8) * uVar3 + STField<int>(iVar1,0x1C)),
          psVar4 != nullptr)) && (param_1 == *psVar4)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

