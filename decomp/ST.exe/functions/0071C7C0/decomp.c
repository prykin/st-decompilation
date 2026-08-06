#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0071c7c0(void *this,int *param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  byte local_68 [100];

  if (STField<int>(this,0x24) != 0) {
    *(undefined4 *)(STField<int>(this,0x24) + 4) = 0;
    iVar1 = DArrayGetNext(STField<DArrayTy *>(this,0x24),local_68);
    if (-1 < iVar1) {
      do {
        iVar1 = 0x13;
        bVar4 = true;
        pbVar2 = local_68;
        piVar3 = param_1;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *(int *)pbVar2 == *piVar3;
          pbVar2 = pbVar2 + 4;
          piVar3 = piVar3 + 1;
        } while (bVar4);
        if (bVar4) {
          return 1;
        }
        iVar1 = DArrayGetNext(STField<DArrayTy *>(this,0x24),local_68);
        if (iVar1 < 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

