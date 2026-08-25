#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005ede30(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  iVar2 = STField<int>(this,0x263);
  if (STField<int>(this,0x26f) - iVar2 < 1) {
    iVar5 = -(uint)(STField<int>(this,0x26f) != iVar2);
  }
  else {
    iVar5 = 1;
  }
  iVar4 = (short)(STField<short>(this,0x246) * 200 + 100);
  iVar1 = (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28f)) *
          STField<int>(this,0x287) * iVar5;
  iVar2 = ((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4) + iVar2;
  if (iVar5 < 1) {
    if (iVar2 < iVar4 + -0x1e) {
      *param_1 = STField<undefined4>(this,0x277);
      *param_2 = STField<undefined4>(this,0x27b);
      *param_3 = iVar4 + -0x1d;
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar3;
      thunk_FUN_005ecd70(this,STField<int>(this,0x277),STField<int>(this,0x27b),iVar4 + 0x1e,
                         STField<int>(this,0x273),'\0',0x1e - (uVar3 >> 0x10) % 0xb);
      return 1;
    }
  }
  else if (iVar4 + 0x1e < iVar2) {
    *param_1 = STField<undefined4>(this,0x277);
    *param_2 = STField<undefined4>(this,0x27b);
    *param_3 = iVar4 + 0x1d;
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    thunk_FUN_005ecd70(this,STField<int>(this,0x277),STField<int>(this,0x27b),iVar4 + -0x1e,
                       STField<int>(this,0x273),'\0',0x1e - (uVar3 >> 0x10) % 0xb);
    return 1;
  }
  *param_1 = STField<undefined4>(this,0x277);
  *param_2 = STField<undefined4>(this,0x27b);
  *param_3 = iVar2;
  return 1;
}

