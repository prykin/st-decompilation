#include "../../pseudocode_runtime.h"


int __thiscall FUN_005fcc00(void *this,undefined4 *param_1)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)(param_1);
  puVar3 = (byte *)((int)this + 0x326);
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = (byte *)(puVar2 + 1);
    puVar3 = (byte *)(puVar3 + 1);
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  puVar2 = (byte *)((int)param_1 + 0x155);
  puVar3 = (byte *)((int)this + 0x231);
  memmove(puVar3, puVar2, 0xf5); /* compiler REP MOVS byte copy */
  iVar1 = STAllPlayersC::thunk_FUN_005ec850(this,(int *)((int)param_1 + 0x246));
  return iVar1 + 0x24a;
}

