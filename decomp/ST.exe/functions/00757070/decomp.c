#include "../../pseudocode_runtime.h"


void FUN_00757070(undefined4 *param_1)

{
  byte *puVar1;
  int iVar2;
  byte *puVar4;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  puVar1 = (byte *)(**(code **)*param_1)(param_1,1,0x580);
  iVar2 = 0;
  STField<undefined4 *>(param_1,0x132) = puVar1 + 0x40;
  memset(puVar1, 0, 0x100); /* compiler bulk-zero initialization */
  do {
    *(char *)(iVar2 + (int)(puVar1 + 0x40)) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  puVar4 = (byte *)(puVar1 + 0x80);
  for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = (byte *)(puVar4 + 1);
  }
  memset(puVar1 + 0xe0, 0, 0x180); /* compiler bulk-zero initialization */
  iVar2 = 0;
  puVar4 = (byte *)(STField<undefined4 *>(param_1,0x132));
  puVar1 = (byte *)(puVar1 + 0x140);
  memmove(puVar1, puVar4, 0x80); /* compiler REP MOVS byte copy */
  return;
}

