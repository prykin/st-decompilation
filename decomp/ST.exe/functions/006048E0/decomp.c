#include "../../pseudocode_runtime.h"


int __fastcall FUN_006048e0(AnonShape_006048E0_C1705B76 *param_1)

{
  uint index;
  DArrayTy *pDVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  if ((param_1->field_0215 != nullptr) &&
     (index = param_1->field_0215->count, 0 < (int)index)) {
    while (index = index - 1, -1 < (int)index) {
      pDVar1 = param_1->field_0215;
      if (index < pDVar1->count) {
        pvVar2 = DArrayAt<void>(pDVar1, index);
      }
      else {
        pvVar2 = nullptr;
      }
      if ((STField<int>(pvVar2,0x10) == 10) &&

         (iVar3 = thunk_FUN_00604a00(param_1,STField<int>(pvVar2,0x14)), iVar3 != 0)) {
        iVar4 = iVar4 + 1;
      }

      DArrayRemoveAt(param_1->field_0215,index);
    }
  }
  return iVar4;
}

