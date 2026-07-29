#include "../../pseudocode_runtime.h"


void __cdecl FUN_00680340(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = &DAT_008489e0;
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  DAT_00848a00 = param_3;
  DAT_00848a04 = param_2;
  DAT_007d3fa0 = param_4;
  return;
}

