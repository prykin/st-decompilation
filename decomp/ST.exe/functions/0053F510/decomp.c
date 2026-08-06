#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall FUN_0053f510(void *this,uint param_1,uint param_2)

{
  if (param_1 < 5) {
    STField<undefined4>(this,0x199) = 0;
  }
  if (param_1 - 5 < STField<uint>(this,0x199)) {
    STField<uint>(this,0x199) = ~-(uint)(param_1 < 5) & param_1 - 5;
  }
  if (param_1 < 5) {
    STField<undefined4>(this,0x2c) = 0;
    STField<undefined4>(this,0x28) = 0x20;
    FUN_006e6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
    return;
  }
  if (param_2 < 5) {
    STField<undefined4>(this,0x28) = 0x20;
    STField<undefined4>(this,0x2c) = 1;
    FUN_006e6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
  }
  if (param_2 != param_1) {
    STField<uint>(this,0x2c) = param_1 - 4;
    STField<undefined4>(this,0x28) = 0x28;
    FUN_006e6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
    STField<undefined4>(this,0x28) = 0x22;
    STField<undefined4>(this,0x2c) = STField<undefined4>(this,0x199);
    FUN_006e6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
    return;
  }
  STField<undefined4>(this,0x28) = 5;
  FUN_006e6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
  return;
}

