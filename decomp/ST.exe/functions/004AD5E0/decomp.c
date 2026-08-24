#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C6210 -> 004AD5E0 @ 004C62EC; /TLOBldMark+0x2c

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=50, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_004ad5e0(STT3DSprC *param_1)

{
  param_1->field_0011 = 1;
  Library::Ourlib::ST3DSMAP::SprSetShadow(param_1->field_003C,param_1->field_0018,0,0,0);
  return;
}

