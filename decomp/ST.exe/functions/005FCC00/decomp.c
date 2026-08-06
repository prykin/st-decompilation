#include "../../pseudocode_runtime.h"


int __thiscall FUN_005fcc00(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;

  puVar3 = (byte *)(param_1);
  puVar4 = (byte *)((int)this + 0x326);
  memmove(puVar4, puVar3, 0x155); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  puVar3 = (byte *)((int)param_1 + 0x155);
  puVar4 = (byte *)((int)this + 0x231);
  memmove(puVar4, puVar3, 0xf5); /* compiler REP MOVS byte copy */
  iVar1 = STAllPlayersC::thunk_FUN_005ec850(this,(int *)((int)param_1 + 0x246));
  return iVar1 + 0x24a;
}

