#include "../../pseudocode_runtime.h"


undefined4 FUN_006728f0(undefined4 *param_1)

{
  uint uVar1;
  byte *puVar3;

  uVar1 = DAT_00811910;
  DAT_00811910 = param_1;
  puVar3 = (byte *)(&DAT_00811918);
  memmove(puVar3, param_1, 0x28); /* compiler REP MOVS byte copy */
  return uVar1;
}

