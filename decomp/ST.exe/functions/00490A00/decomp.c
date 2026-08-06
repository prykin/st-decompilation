#include "../../pseudocode_runtime.h"


void __thiscall FUN_00490a00(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;

  sVar1 = STField<short>(this,0x554);
  if (((sVar1 != param_1) || (STField<short>(this,0x556) != param_2)) ||
     (STField<short>(this,0x558) != param_3)) {
    sVar2 = STField<short>(this,0x558);
    sVar3 = STField<short>(this,0x556);
    if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
        ((-1 < sVar3 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))))) &&
       (sVar2 < g_worldGrid.sizeZ)) {
      this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      if (this_00 != nullptr) {
        thunk_FUN_004e22a0(this_00,STField<int>(this,0x568),STField<int>(this,0x18));
        thunk_FUN_004e2000(this_00,STField<int>(this,0x568),STField<int>(this,0x18));
      }
    }
    STField<undefined4>(this,0x564) = 1;
    STField<short>(this,0x554) = param_1;
    STField<short>(this,0x556) = param_2;
    STField<short>(this,0x558) = param_3;
  }
  return;
}

