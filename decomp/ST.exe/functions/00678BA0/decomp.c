#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00678980 -> 00678BA0 @ 00678AE8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_00678ba0(AiPlrClassTy *param_1)

{
  FUN_00402e14((AiEventClassTy *)&param_1->vtable_at_1c);
  if (param_1 != nullptr) {
    thunk_FUN_0067d0a0((AnonShape_0067D0A0_8092D907 *)&param_1->field_05D3);
    return;
  }
  thunk_FUN_0067d0a0(nullptr);
  return;
}

