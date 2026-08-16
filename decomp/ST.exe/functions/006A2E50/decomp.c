#include "../../pseudocode_runtime.h"


void __cdecl
FUN_006a2e50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,char *param_6,
            int param_7,int param_8)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;

  pcVar3 = param_6;
  if (0 < param_8) {
    auto param_6_after_write = (char *)param_8; /* compiler stack-slot lifetime split */
    iVar2 = param_3 * param_4 + param_1 + param_2;
    do {
      if (0 < param_7) {
        auto param_8_after_write = param_7; /* compiler stack-slot lifetime split */
        pcVar1 = pcVar3;
        do {
          if (*pcVar1 != '\0') {
            pcVar1[iVar2 - (int)pcVar3] = *pcVar1;
          }
          pcVar1 = pcVar1 + 1;
          param_8_after_write = param_8_after_write + -1;
        } while (param_8_after_write != 0);
      }
      iVar2 = iVar2 + param_4;
      pcVar3 = pcVar3 + param_7;
      param_6_after_write = param_6_after_write + -1;
    } while (param_6_after_write != nullptr);
  }
  return;
}

