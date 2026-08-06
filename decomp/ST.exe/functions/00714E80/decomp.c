#include "../../pseudocode_runtime.h"


int __thiscall FUN_00714e80(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar6_mg2;
  char *pcVar6_mg1;

  if (param_1 == nullptr) {
    return -0x34;
  }
  if (*(char **)this == nullptr) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = *(char **)this;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
  }
  uVar4 = 0xffffffff;
  pcVar6_mg1 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6_mg1;
    pcVar6_mg1 = pcVar6_mg1 + 1;
  } while (cVar1 != '\0');
  iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00714CE0::FUN_00714ce0
                    (this,~uVar4 + uVar3);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
    do {
      pcVar6_mg2 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6_mg2 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6_mg2;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = *(char **)this;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6_mg2 + -uVar3;
    pcVar7 = pcVar7 + -1;
    memmove(pcVar7, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  return iVar2;
}

