#include "../../pseudocode_runtime.h"


void FUN_006765b0(void)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)&g_playerRuntime[DAT_0080874d].field_0x2eb;
  puVar3 = (byte *)(&DAT_0080e83b);
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)&g_playerRuntime[DAT_0080874d].field_0x2ff;
  puVar3 = (byte *)(&DAT_0080e84f);
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)&g_playerRuntime[DAT_0080874d].field_0x327;
  puVar3 = (byte *)(&DAT_0080e863);
  memmove(puVar3, puVar2, 0x26c); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)&g_playerRuntime[DAT_0080874d].field_0x593;
  puVar3 = (byte *)(&DAT_0080eacf);
  memmove(puVar3, puVar2, 0x1a8); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)&g_playerRuntime[DAT_0080874d].field_0x73b;
  puVar3 = (byte *)(&DAT_0080ec77);
  memmove(puVar3, puVar2, 0x9b); /* compiler REP MOVS byte copy */
  return;
}

