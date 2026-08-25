#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_005ecfe0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;

  if ((param_1 < 0) || (4 < param_1)) {
    if ((param_2 != -1) &&
       (((param_3 != -1 && (param_4 != -1)) &&
        (iVar3 = thunk_FUN_005ecd70(this,param_2,param_3,param_4,param_5,'\0',0x1e), iVar3 != 0))))
    {
      STField<undefined4>(this,0x23a) = 2;
      return 1;
    }
  }
  else {
    iVar3 = (int)STField<short>(this,0x246);
    if ((param_1 == iVar3) && (STField<int>(this,0x2ba) == param_5)) {
      return 0;
    }
    if (param_1 - iVar3 < 1) {
      sVar4 = -(ushort)(param_1 != iVar3);
    }
    else {
      sVar4 = 1;
    }
    sVar1 = STField<short>(this,0x244);
    sVar4 = STField<short>(this,0x246) + sVar4;
    sVar2 = STField<short>(this,0x242);
    if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) ||
        ((sVar1 < 0 ||
         ((((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)) ||
          ((STGridAt3D(g_worldGrid, sVar2, sVar1, sVar4).objects[0] == nullptr ||
           (STGridAt3D(g_worldGrid, sVar2, sVar1, sVar4).objects[0] == this)))))))) &&
       (iVar3 = thunk_FUN_005ecd70(this,(short)(sVar2 * 0xc9 + 100),
                                   (short)(sVar1 * 0xc9 + 100),
                                   (short)((short)param_1 * 200 + 100),param_5,'\0',0x1e),
       iVar3 != 0)) {
      STField<undefined4>(this,0x23a) = 2;
      return 1;
    }
  }
  return 0xffffffff;
}

