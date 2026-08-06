#include "../../pseudocode_runtime.h"


int __thiscall FUN_00714dc0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar5_mg1;
  char *pcVar5_mg0;

  if (param_1 == nullptr) {
    return -0x34;
  }
  uVar3 = 0xffffffff;
  pcVar5_mg0 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5_mg0;
    pcVar5_mg0 = pcVar5_mg0 + 1;
  } while (cVar1 != '\0');
  iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00714CE0::FUN_00714ce0(this,~uVar3);
  if (iVar2 == 0) {
    if (*(char **)this != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg1 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg1 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5_mg1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg1 + -uVar3;
      pcVar6 = *(char **)this;
      memmove(pcVar6, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
    iVar2 = 0;
  }
  return iVar2;
}

