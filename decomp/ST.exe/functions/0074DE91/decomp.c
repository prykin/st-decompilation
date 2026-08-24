#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_0074de91(undefined4 *param_1)

{
  HoloTy *pHVar1;
  HoloTy *pHVar2;

  pHVar2 = (HoloTy *)*param_1;
  while (pHVar2 != nullptr) {
    pHVar1 = *(HoloTy **)&pHVar2->field_0x4;
    Library::MSVCRT::FUN_0072e2b0(pHVar2);
    pHVar2 = pHVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

