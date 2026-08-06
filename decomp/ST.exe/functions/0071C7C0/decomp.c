#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0071c7c0(void *this,int *param_1)

{
  int local_EAX_29;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  bool bVar5;
  byte local_68 [100];

  if (STField<int>(this,0x24) != 0) {
    *(undefined4 *)(STField<int>(this,0x24) + 4) = 0;
    local_EAX_29 = DArrayGetNext(STField<DArrayTy *>(this,0x24),local_68);
    if (-1 < local_EAX_29) {
      do {
        iVar2 = 0x13;
        bVar5 = true;
        pbVar3 = local_68;
        piVar4 = param_1;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *(int *)pbVar3 == *piVar4;
          pbVar3 = pbVar3 + 4;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
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

