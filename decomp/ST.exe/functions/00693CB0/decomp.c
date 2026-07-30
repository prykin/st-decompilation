#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_00693cb0(void *this,int param_1)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)(&DAT_007d6268);
  puVar3 = (byte *)((int)this + param_1 * 0x51 + 0x11);
  memmove(puVar3, puVar2, 0x51); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)((int)this + param_1 * 0x51 + 0x4a);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = (byte *)(puVar2 + 1);
  }
  return;
}

