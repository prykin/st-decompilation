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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  for (; (int)param_3 < (int)dVar1; param_3 = param_3 + 1) {
    if ((param_3 < param_1->count) &&
       (pvVar6 = DArrayAt<void>(param_1, param_3),
       pvVar6 != nullptr)) {
      iVar2 = *(int *)(STField<int>(pvVar6,0xc) + 0xc);
      uVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = STField<int>(pvVar6,0xc);
          if (uVar5 < STField<uint>(iVar3,0xC)) {
            piVar4 = (int *)(STField<int>(iVar3,0x8) * uVar5 + STField<int>(iVar3,0x1C));
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

