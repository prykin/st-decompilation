#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_006e3680(DArrayTy *param_1)

{
  uint uVar1;
  void *pvVar2;

  param_1->iteratorIndex = 0;
  while( true ) {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return;
    }
    pvVar2 = DArrayAt<void>(param_1, uVar1);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar2 == nullptr) break;
    if (STField<DArrayTy *>(pvVar2,8) != nullptr) {
      FUN_006e3680(STField<DArrayTy *>(pvVar2,8));
      DArrayDestroy(STField<DArrayTy *>(pvVar2,8));
      STField<undefined4>(pvVar2,8) = 0;
    }
  }
  return;
}

