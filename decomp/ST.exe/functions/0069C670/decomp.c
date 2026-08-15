#include "../../pseudocode_runtime.h"


void FUN_0069c670(DArrayTy *param_1,int param_2,uint param_3)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *pvVar6;

  DArrayRemoveAt(param_1,param_3);
  dVar1 = param_1->count;
  for (; (int)param_3 < (int)dVar1; param_3 = param_3 + 1) {
    if ((param_3 < param_1->count) &&
       (pvVar6 = DArrayAt<void>(param_1, param_3),
       pvVar6 != nullptr)) {
      iVar2 = *(int *)(STField<int>(pvVar6,0xc) + 0xc);
      uVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = STField<int>(pvVar6,0xc);
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            piVar4 = (int *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
          }
          else {
            piVar4 = nullptr;
          }
          uVar5 = uVar5 + 1;
          *(uint *)(param_2 + 10 + *piVar4 * 0xe) = param_3;
        } while ((int)uVar5 < iVar2);
      }
    }
  }
  return;
}

