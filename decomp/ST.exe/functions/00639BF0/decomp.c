#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __thiscall FUN_00639bf0(void *this,undefined4 *param_1)

{
  byte *puVar2;

  STField<undefined4>(this,0x23d) = 2;
  if (this != nullptr) {
    puVar2 = (byte *)((int)this + 0x231);
    memmove(param_1, puVar2, 0x7a); /* compiler REP MOVS byte copy */
    return;
  }
  puVar2 = nullptr;
  memmove(param_1, puVar2, 0x7a); /* compiler REP MOVS byte copy */
  return;
}

