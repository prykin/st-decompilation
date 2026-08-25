#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074ca21(void *this,int param_1)

{
  int iVar2;
  int iVar1;
  uint uVar3;
  int iVar4;

  if (STField<int>(this,0x40) == 0) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar2 = STField<int>(this,0x8c);
    if (STField<int>(iVar2,0x18) != 0) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 0xc;
      }
      iVar4 = STField<int>(this,0x90);
LAB_0074ca90:
      uVar3 = FUN_00747429(this,iVar2,iVar4 + 0x1c);
      return uVar3;
    }
  }
  else if ((*(int *)(STField<int>(this,0x90) + 0x18) != 0) &&
          (iVar1 = FUN_0074b9f5((void *)(STField<int>(this,0x8c) + 0x1c),
                                (char *)(STField<int>(this,0x90) + 0x1c)), iVar1 != 0)) {
    if (STField<int>(this,0x90) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = STField<int>(this,0x90) + 0xc;
    }
    iVar4 = STField<int>(this,0x8c);
    goto LAB_0074ca90;
  }
  return 0;
}

