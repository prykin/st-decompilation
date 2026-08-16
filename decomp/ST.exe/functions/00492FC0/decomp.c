#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_00492fc0(AnonShape_00492FC0_E6F586EF *param_1)

{
  STGameObjC *this;
  int iVar1;

  if ((param_1->field_045D == 9) && (param_1->field_0611 == 3)) {
    this = STAllPlayersC::GetObjPtr
                     (g_allPlayers_007FA174,param_1->field_05FC,param_1->field_05FD,CASE_1);
    if ((this != nullptr) && (this->field_0018 == param_1->field_05FF)) {
      iVar1 = (*this->vtable[1].vfunc_34)(this,param_1->field_0024);
      if (iVar1 != 0) {
        thunk_FUN_004cd450((AnonShape_004CC900_31EE9CAA *)this);
      }
    }
  }
  return;
}

