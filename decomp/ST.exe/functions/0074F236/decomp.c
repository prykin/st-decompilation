#include "../../pseudocode_runtime.h"


int FUN_0074f236(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = 0x10;
    bVar3 = true;
    pcVar2 = &DAT_007a1dd8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar3 = *param_2 == *pcVar2;
      param_2 = param_2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar3);
    iVar1 = (!bVar3 - 1 & 0x7ff8ffa9) + 0x80070057;
  }
  return iVar1;
}

