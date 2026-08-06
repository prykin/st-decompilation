#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006e42c0(void *this,int *param_1)

{
  uint index;
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_14 [16];

  if (STField<int>(this,0x14) != 0) {
    *(undefined4 *)(STField<int>(this,0x14) + 4) = 0;
    index = DArrayGetNext(STField<DArrayTy *>(this,0x14),local_14);
    while (-1 < (int)index) {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = param_1;
      pbVar3 = local_14;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *(int *)pbVar3;
        piVar2 = piVar2 + 1;
        pbVar3 = pbVar3 + 4;
      } while (bVar4);
      if (bVar4) {
        DArrayRemoveAt(STField<DArrayTy *>(this,0x14),index);
      }
      index = DArrayGetNext(STField<DArrayTy *>(this,0x14),local_14);
    }
    if ((STField<DArrayTy *>(this,0x14))->count == 0) {
      DArrayDestroy(STField<DArrayTy *>(this,0x14));
      STField<undefined4>(this,0x14) = 0;
    }
  }
  return 0;
}

