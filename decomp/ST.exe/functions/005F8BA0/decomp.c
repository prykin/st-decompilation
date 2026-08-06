#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005f8ba0(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;

  iVar4 = STField<int>(this,0x285);
  do {
    if (4 < iVar4) {
      return 0;
    }
    sVar5 = (short)iVar4;
    iVar3 = thunk_FUN_004961b0(STField<short>(this,0x27d),STField<short>(this,0x281),sVar5);
    if (iVar3 != 0) {
      sVar1 = STField<short>(this,0x27d);
      sVar2 = STField<short>(this,0x281);
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         (((g_worldGrid.sizeY <= sVar2 || (sVar5 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar5 ||
           (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar5).objects[0] == nullptr)))))) {
        *param_1 = STField<undefined4>(this,0x27d);
        *param_2 = STField<undefined4>(this,0x281);
        *param_3 = iVar4;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

