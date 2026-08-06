#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int FUN_006e4540(DArrayTy *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;

  iVar2 = 0;
  param_1->iteratorIndex = 0;
  do {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return iVar2;
    }
    pvVar3 = DArrayAt<void>(param_1, uVar1);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar3 == nullptr) {
      return iVar2;
    }
    if (*(int *)(STField<int>(pvVar3,4) + 0x14) == param_2) {
      return (int)pvVar3;
    }
  } while ((STField<DArrayTy *>(pvVar3,8) == nullptr) ||
          (iVar2 = FUN_006e4540(STField<DArrayTy *>(pvVar3,8),param_2), iVar2 == 0));
  return iVar2;
}

