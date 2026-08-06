#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall FUN_004e1d70(void *this,int param_1,int param_2)

{
  STField<int>(this,0x4dc) = param_1;
  if (param_1 == 0xdc) {
    thunk_FUN_004d87b0(STField<char>(this,0x24),param_2);
  }
  else if (param_1 == 0xdd) {
    thunk_FUN_004d88f0(STField<char>(this,0x24),param_2);
  }
  else if (param_1 == 0xde) {
    thunk_FUN_004d8a30(STField<char>(this,0x24),param_2);
  }
  thunk_FUN_004d78e0(STField<char>(this,0x24));
  if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)STField<uint>(this,0x24));
  }
  return;
}

