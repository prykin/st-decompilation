#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f8810(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;

  sVar1 = STField<short>(this,0x285);
  sVar2 = STField<short>(this,0x281);
  sVar3 = STField<short>(this,0x27d);
  if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) && (sVar1 < g_worldGrid.sizeZ)) {
    this_00 = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1];
    if ((this_00 != nullptr) && (this_00->value_20 == 0xbe)) {
      thunk_FUN_0062f6c0(this_00,param_1);
    }
  }
  return;
}

