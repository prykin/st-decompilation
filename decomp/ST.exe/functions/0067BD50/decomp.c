#include "../../pseudocode_runtime.h"


int __cdecl FUN_0067bd50(DArrayTy *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;

  iVar2 = 0;
  uVar1 = param_1->count;
  uVar4 = 0;
  if (0 < (int)uVar1) {
    bVar5 = uVar1 != 0;
    do {
      if ((bVar5) &&
         (pvVar3 = DArrayAt<void>(param_1, uVar4),
         pvVar3 != nullptr)) {
        iVar2 = iVar2 + *(short *)((int)pvVar3 + 0x1a);
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return iVar2;
}

