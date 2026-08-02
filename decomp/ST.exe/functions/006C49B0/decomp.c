#include "../../pseudocode_runtime.h"


char * FUN_006c49b0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;

  pcVar2 = nullptr;
  if (param_1 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = Library::DKW::LIB::MemAlloc(~uVar3);
    if (pcVar2 != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = pcVar2;
      memmove(pcVar6, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
  }
  return pcVar2;
}

