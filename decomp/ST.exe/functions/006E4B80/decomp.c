#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_006e4b80(void *this,RecoveredRecord_006E4B80_A7B295CE *param_1)

{
  int *piVar1;

  /* ST_CALLSITE[006E4B8F]: CALL 0x006e45a0; direct=006E45A0 FUN_006e45a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/void;/int */
  piVar1 = FUN_006e45a0(this,param_1->field_0014);
  if (piVar1 != nullptr) {
    Library::Ourlib::SAPP::FUN_006e4bb0(piVar1);
  }
  return;
}

