#include "../../pseudocode_runtime.h"


char * __cdecl FUN_0070ce40(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  if ((*param_1 == '\0') || (*param_2 == '\0')) {
    return param_1;
  }
  cVar2 = param_2[1];
  uVar3 = 0xffffffff;
  param_2[1] = '\0';
  pcVar6 = param_2;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = param_1;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  param_2[1] = cVar2;
  return param_1;
}

