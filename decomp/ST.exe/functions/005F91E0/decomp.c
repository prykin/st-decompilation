#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f91e0(void *this,int param_1,int param_2)

{
  STWorldObject *this_00;
  int iVar1;
  short local_c [2];
  short local_8;
  short local_6;

  STFishC::sub_004162B0(this,&local_6,&local_8,local_c);
  local_c[0] = local_c[0] + -1;
  if (((((-1 < local_6) && (local_6 < g_worldGrid.sizeX)) && (-1 < local_8)) &&
      ((local_8 < g_worldGrid.sizeY && (-1 < local_c[0])))) && (local_c[0] < g_worldGrid.sizeZ)) {
    this_00 = STGridAt3D(g_worldGrid, local_6, local_8, local_c[0]).objects[0];
    if ((this_00 != nullptr) && (this_00->value_20 == 1000)) {
      iVar1 = this_00->GetObjectTypeId();
      if ((iVar1 == 0x6e) && (*(int *)&this_00->field_0x18 == STField<int>(this,0x255))) {
        thunk_FUN_004dd7c0(this_00,STField<int>(this,0x18),param_1);
        if (param_2 < 1) {
          thunk_FUN_004dd800(this_00,STField<int>(this,0x18));
          thunk_FUN_004dd700(this_00,STField<int>(this,0x18));
        }
      }
    }
  }
  return;
}

