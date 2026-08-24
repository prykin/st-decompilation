#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0040cdb0(void *this,uint param_1)

{
  STGameObjC *pSVar1;

  pSVar1 = thunk_FUN_00423e70(this,(ushort)param_1);
  if (pSVar1 != nullptr) {
    FreeAndNull(&pSVar1->field_009F);
    pSVar1->field_00A3 = 0;
    pSVar1->field_00A7 = 0;
    pSVar1->field_00AB = nullptr;
  }
  return;
}

