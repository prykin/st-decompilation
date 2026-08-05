#include "../../pseudocode_runtime.h"


void __cdecl FUN_00676c40(DArrayTy *param_1,callback_00676C40_p1 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  void *arg_1;
  int iVar4;
  void *arg_2;
  uint uVar5;

  uVar3 = param_1->count;
  if (1 < uVar3) {
    do {
      bVar2 = false;
      uVar5 = 0;
      if ((int)(uVar3 - 1) < 1) {
        return;
      }
      do {
        if (uVar5 < uVar3) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar5) (runtime stride) */
          arg_2 = (void *)(param_1->elementSize * uVar5 + (int)param_1->data);
        }
        else {
          arg_2 = nullptr;
        }
        uVar1 = uVar5 + 1;
        if (uVar1 < uVar3) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar1) (runtime stride) */
          arg_1 = (void *)(param_1->elementSize * uVar1 + (int)param_1->data);
        }
        else {
          arg_1 = nullptr;
        }
        iVar4 = (*param_2)(arg_1,arg_2);
        if (0 < iVar4) {
          FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)param_1,uVar5,uVar1);
          bVar2 = true;
        }
        uVar3 = param_1->count;
        uVar5 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}

