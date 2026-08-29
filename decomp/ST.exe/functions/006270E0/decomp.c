#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_006270e0(void *this,int param_1,RecoveredRecord_006270E0_AA70B55C *param_2)

{
  if (param_2 != nullptr) {
    if (param_1 == 0x15) {
      STField<undefined1>(this,0x35e) = *(undefined1 *)param_2;
      STField<undefined1>(this,0x359) = 1;
      STField<undefined4>(this,0x35a) = 0x15;
    }
    else if ((param_1 == 0x2a) && (STField<char>(this,0x2ad) == '\x02')) {
      if (*param_2->field_0017 == 0xff) {
        STField<undefined4>(this,0x342) = 0;
        return;
      }
      STField<uint>(this,0x342) =
           STField<uint>(this,0x342) ^ 1 << (*param_2->field_0017 & 0x1f);
      return;
    }
  }
  return;
}

