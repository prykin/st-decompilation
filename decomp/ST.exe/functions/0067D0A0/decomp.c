#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl FUN_0067d0a0(AnonShape_0067D0A0_8092D907 *param_1)

{
  DArrayTy *pDVar1;
  int *piVar2;
  DArrayTy **ppDVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  ppDVar3 = &param_1->field_00C2;
  pDVar1 = param_1->field_00C2;
  if (pDVar1 != nullptr) {
    uVar4 = 0;
    if (0 < (int)pDVar1->count) {
      bVar6 = pDVar1->count != 0;
      do {
        if (bVar6) {
          piVar2 = DArrayAt<int>(pDVar1, uVar4);
        }
        else {
          piVar2 = nullptr;
        }
        if (((AnonShape_0067D0A0_8092D907 *)*piVar2 != nullptr) &&
           (piVar2[1] == 0)) {
          param_1 = (AnonShape_0067D0A0_8092D907 *)*piVar2;
          thunk_FUN_00691540((int *)&param_1);
          *piVar2 = 0;
        }
        pDVar1 = *ppDVar3;
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < pDVar1->count;
      } while ((int)uVar4 < (int)pDVar1->count);
    }
  }
  iVar5 = 5;
  do {
    if (*ppDVar3 != nullptr) {
      DArrayDestroy(*ppDVar3);
      *ppDVar3 = nullptr;
    }
    ppDVar3 = ppDVar3 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

