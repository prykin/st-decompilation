#include "../../pseudocode_runtime.h"


char * FUN_006b60b0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar5;
  char *pcVar6;
  char *pcVar4;

  if (param_2 == nullptr) {
    return nullptr;
  }
  cVar1 = *param_2;
  while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
    pcVar5 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar5;
  }
  if (param_1 == nullptr) {
    return param_2;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar4 + -uVar2;
  pcVar6 = param_1;
  memmove(pcVar6, pcVar5, uVar2); /* compiler REP MOVS byte copy */
  return param_1;
}

