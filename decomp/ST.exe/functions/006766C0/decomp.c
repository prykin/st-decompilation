#include "../../pseudocode_runtime.h"


void FUN_006766c0(void)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)(&DAT_0080e83b);
  puVar3 = (byte *)(&g_playerRuntime[DAT_0080874d].field480_0x2eb);
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080e84f);
  puVar3 = (byte *)(&g_playerRuntime[DAT_0080874d].field494_0x2ff);
  memmove(puVar3, puVar2, 0x14); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080e863);
  puVar3 = (byte *)(&g_playerRuntime[DAT_0080874d].field522_0x327);
  memmove(puVar3, puVar2, 0x26c); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080eacf);
  puVar3 = (byte *)(&g_playerRuntime[DAT_0080874d].field1136_0x593);
  memmove(puVar3, puVar2, 0x1a8); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)(&DAT_0080ec77);
  puVar3 = (byte *)(&g_playerRuntime[DAT_0080874d].field1554_0x73b);
  memmove(puVar3, puVar2, 0x9b); /* compiler REP MOVS byte copy */
  return;
}

