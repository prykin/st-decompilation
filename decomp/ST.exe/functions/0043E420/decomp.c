#include "../../pseudocode_runtime.h"


void FUN_0043e420(undefined4 *param_1,char param_2)

{
  int *piVar2;

  piVar2 = &g_packedRecords_A62x8[param_2].field18_0x2b;
  memmove(param_1, piVar2, 0x138); /* compiler REP MOVS byte copy */
  return;
}

