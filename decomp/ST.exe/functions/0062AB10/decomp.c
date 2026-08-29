#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_0062ab10(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  local_8 = 0;

  iVar4 = FUN_006c8334(param_4 * param_4 + param_5 * param_5 + param_6 * param_6);
  if (iVar4 == 0) {
    local_8 = 0xffffffff;
  }
  else {
    iVar4 = (param_1 * param_4 + param_2 * param_5 + param_3 * param_6) * 2;
    iVar6 = (int)(iVar4 + (iVar4 >> 0x1f & 0x7fU)) >> 7;
    iVar1 = (param_4 * 10000 + ((iVar6 * param_1) / 10000) * -0x80) / 100;
    iVar3 = (param_5 * 10000 + ((iVar6 * param_2) / 10000) * -0x80) / 100;
    iVar4 = (param_6 * 10000 + ((iVar6 * param_3) / 10000) * -0x80) / 100;

    iVar5 = FUN_006c8334(iVar4 * iVar4 + iVar1 * iVar1 + iVar3 * iVar3);
    if (iVar5 / 100 != 0) {
      if (0 < iVar6) {
        return 2;
      }
      STField<int>(this,0x9a) = iVar5 / 100;
      STField<undefined4>(this,0x7a) = STField<undefined4>(this,0x46);
      STField<undefined4>(this,0x7e) = STField<undefined4>(this,0x4a);
      STField<undefined4>(this,0x82) = STField<undefined4>(this,0x4e);
      STField<undefined4>(this,0x86) = 0;

      iVar5 = FUN_006c8334(iVar1 * iVar1 + iVar3 * iVar3);
      iVar5 = iVar5 / 100;
      if (iVar5 != 0) {
        iVar6 = STField<int>(this,0x9a);
        if (iVar4 < 1) {
          iVar2 = iVar4 * -5;
        }
        else {
          iVar2 = iVar4 * 5;
        }
        STField<int>(this,0x8e) = (iVar2 * 2000) / iVar6;
        if (iVar4 < 1) {
          iVar4 = iVar5 * -5;
        }
        else {
          iVar4 = iVar5 * 5;
        }
        STField<int>(this,0x8a) = (iVar4 * 2000) / iVar6;
        STField<int>(this,0x92) = (iVar3 * 10000) / iVar5;
        STField<int>(this,0x96) = (iVar1 * 10000) / iVar5;
        STField<int>(this,0x9a) = (int)(iVar6 + (iVar6 >> 0x1f & 0x7fU)) >> 7;
        STField<uint>(this,0xae) = g_playSystem_00802A38->field_00E4;
        return 1;
      }
      iVar1 = STField<int>(this,0x9a);
      if (iVar4 < 1) {
        iVar4 = iVar4 * -0x19;
      }
      else {
        iVar4 = iVar4 * 0x19;
      }
      STField<undefined4>(this,0x8a) = 0;
      STField<int>(this,0x96) = param_1;
      STField<int>(this,0x8e) = (iVar4 * 400) / iVar1;
      STField<int>(this,0x92) = param_2;
      STField<int>(this,0x9a) = (int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7;
      return 1;
    }
  }
  return local_8;
}

