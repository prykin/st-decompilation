#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __thiscall FUN_00639c40(void *this,undefined4 *param_1)

{
  byte *puVar2;

  if (this != nullptr) {
    puVar2 = (byte *)((int)this + 0x231);
    memmove(puVar2, param_1, 0x7a); /* compiler REP MOVS byte copy */
    return;
  }
  puVar2 = nullptr;
  memmove(puVar2, param_1, 0x7a); /* compiler REP MOVS byte copy */
  return;
}

