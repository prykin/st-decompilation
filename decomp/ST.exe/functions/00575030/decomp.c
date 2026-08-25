#include "../../pseudocode_runtime.h"


void __cdecl FUN_00575030(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  piVar3 = param_1;
  iVar4 = (int)STField<short>(param_1,2) * (short)*param_1;
  iVar5 = (short)*param_1 * param_3;
  iVar4 = STSignedDiv4(iVar4);
  auto param_3_after_write = 6; /* compiler stack-slot lifetime split */
  param_1 = (int *)((int)param_1 + (iVar4 * 5 + param_2 + iVar5 / 2) * 4 + 0x459);
  do {
    iVar5 = *param_1;
    if ((iVar5 != 0) && (STField<int>(iVar5,0xC) != 0)) {
      *(undefined4 *)(STField<int>(piVar3,0x451) + 4) = 0;
      do {
        iVar1 = STField<int>(piVar3,0x451);
        uVar2 = STField<uint>(iVar1,0x4);
        if (STField<uint>(iVar1,0xC) <= uVar2) goto LAB_005750c2;
        iVar6 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C);
        STField<uint>(iVar1,0x4) = uVar2 + 1;
        if (iVar6 == 0) goto LAB_005750c2;
      } while (STField<int>(iVar5,0xC) != STField<int>(iVar6,0x8));
      if (iVar6 == 0) {
LAB_005750c2:
        FreeAndNull((int *)(iVar5 + 0xc));
      }
    }
    param_1 = param_1 + -iVar4;
    param_3_after_write = param_3_after_write + -1;
    if (param_3_after_write == 0) {
      return;
    }
  } while( true );
}

