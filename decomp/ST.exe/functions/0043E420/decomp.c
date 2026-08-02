#include "../../pseudocode_runtime.h"


void FUN_0043e420(undefined4 *param_1,char param_2)

{
  byte *puVar2;

  puVar2 = (byte *)&g_packedRecords_A62x8[param_2].field_0x2b;
  memmove(param_1, puVar2, 0x138); /* compiler REP MOVS byte copy */
  return;
}

