#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __thiscall FUN_00639bf0(void *this,undefined4 *param_1)

{
  byte *puVar2;

  *(undefined4 *)((int)this + 0x23d) = 2;
  if (this != (void *)0x0) {
    puVar2 = (byte *)((int)this + 0x231);
    memmove(param_1, puVar2, 0x7a); /* compiler REP MOVS byte copy */
    return;
  }
  puVar2 = (byte *)0x0;
  memmove(param_1, puVar2, 0x7a); /* compiler REP MOVS byte copy */
  return;
}

