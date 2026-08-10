#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=34, ignored=11, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: every reachable RET receives full EAX from the same incoming pointer parameter this
   (ordinal=0); no intervening full or partial accumulator definition changes that value; machine
   CFG audit: used=34, ignored=11, unknown=0 */

void * __thiscall sub_006E5FB0(void *this)

{
  *(VTable_0079E1AC **)this = &VTable_0079E1AC;
  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,8) = 0;
  STField<undefined4>(this,0xc) = 0;
  STField<undefined4>(this,0x10) = 0;
  STField<undefined4>(this,0x14) = 1;
  return this;
}

