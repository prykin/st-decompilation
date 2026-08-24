#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: the complete machine CFG returns incoming pointer parameter param_1 (ordinal=1);
   restore its exact formal pointer type after the obsolete void-pointer normalization */

uint * __thiscall FUN_0048dcc0(void *this,undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)((int)this + 0x554);
  puVar3 = (byte *)(param_1);
  memmove(puVar3, puVar2, 0x34); /* compiler REP MOVS byte copy */
  return param_1;
}

