#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall FUN_004ad380(void *this,uint param_1,uint param_2)

{
  STField<uint>(this,4) = param_1;
  STField<uint>(this,8) = param_2;
  Library::Ourlib::ST3DSMAP::SprSetHotSpot
            (STField<void *>(this,0x3c),STField<uint>(this,0x18),param_1,param_2);
  return;
}

