#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_005f88d0(void *this,int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  int iVar4;
  undefined4 uVar5;

  sVar1 = STField<short>(this,0x285);
  sVar2 = STField<short>(this,0x281);
  sVar3 = STField<short>(this,0x27d);
  uVar5 = 0;
  if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) && (sVar1 < g_worldGrid.sizeZ)) {
    this_00 = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1];
    if ((this_00 != nullptr) && (this_00->value_20 == 0xbe)) {
      if (param_2 == 0) {
        iVar4 = thunk_FUN_00630340(this_00,param_1,nullptr,nullptr,nullptr);
        if (iVar4 != 0) {
          uVar5 = 1;
        }
      }
      else {
        iVar4 = thunk_FUN_00630340(this_00,param_1,param_3,param_4,param_5);
        if (iVar4 != 0) {
          return 1;
        }
      }
    }
  }
  return uVar5;
}

