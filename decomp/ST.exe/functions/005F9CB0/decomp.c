#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005f9cb0(void *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = STField<int>(this,0x2e6);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (STField<short>(iVar2,0x32) == -1) {
    iVar4 = STField<int>(iVar2,0x60) - (param_1 - STField<int>(iVar2,0x68)) * STField<int>(iVar2,0x64);
    if (iVar4 < 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 3;
      iVar4 = 0;
      goto LAB_005f9d2f;
    }
  }
  else {
    if (STField<short>(iVar2,0x32) != 1) {
      return 0;
    }
    iVar4 = (param_1 - STField<int>(iVar2,0x68)) * STField<int>(iVar2,0x64) + STField<int>(iVar2,0x60);
    if (STField<int>(iVar2,0x5C) <= iVar4) {
      param_1 = 3;
      iVar4 = STField<int>(iVar2,0x5C) + -1;
      goto LAB_005f9d2f;
    }
  }
  param_1 = 1;
LAB_005f9d2f:
  iVar3 = (int)*(short *)(STField<int>(iVar2,0x58) + 2 + iVar4 * 4);
  sVar1 = *(short *)(STField<int>(iVar2,0x58) + iVar4 * 4);
  *param_2 = (STField<int>(iVar2,0x50) * iVar3) / 10000 + STField<int>(iVar2,0x34);
  *param_3 = (*(int *)(STField<int>(this,0x2e6) + 0x54) * iVar3) / 10000 +
             *(int *)(STField<int>(this,0x2e6) + 0x38);
  iVar2 = STField<int>(this,0x2e6);
  if (STField<int>(iVar2,0x14) != STField<int>(iVar2,0x34)) {
    *param_2 = *param_2 +
               ((STField<int>(iVar2,0x40) - STField<int>(iVar2,0x34)) * iVar4) / STField<int>(iVar2,0x5C);
  }
  iVar2 = STField<int>(this,0x2e6);
  if (STField<int>(iVar2,0x18) != STField<int>(iVar2,0x38)) {
    *param_3 = *param_3 +
               ((STField<int>(iVar2,0x44) - STField<int>(iVar2,0x38)) * iVar4) / STField<int>(iVar2,0x5C);
  }
  *param_4 = *(int *)(STField<int>(this,0x2e6) + 0x3c) - (int)sVar1;
  return param_1;
}

