#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_006e6580(void *this,int *param_1)

{
  if (STField<char>(param_1,0xd) != '\0') {
    FUN_006b98c0((int *)((int)this + 0x446),param_1);
    FUN_006a5e90((short *)param_1);
    return;
  }
  FUN_006b98c0((int *)((int)this + 0x44a),param_1);
  FUN_006a5e90((short *)param_1);
  return;
}

