#include "../../pseudocode_runtime.h"


void FUN_00753050(int param_1,int param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  AnonPointee_TLOBaseTy_0607 *pAVar3;
  AnonPointee_TLOBaseTy_0607 *pAVar4;

  if (param_1 != 0) {
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)(param_1 + param_2);
    uVar2 = 0xffffffff;
    pAVar4 = pAVar3;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      puVar1 = &pAVar4->field_0000;
      pAVar4 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar4->field_0000 + 1);
    } while (*(char *)puVar1 != '\0');
    Library::MSVCRT::FUN_0072da70((undefined4 *)((int)&pAVar3->field_0000 + 1),pAVar3,~uVar2);
    *(char *)&pAVar3->field_0000 = param_3;
  }
  return;
}

