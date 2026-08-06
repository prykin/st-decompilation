#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005f9050(void *this,int *param_1,undefined4 *param_2)

{
  STWorldObject *this_00;
  short sVar1;
  int iVar2;
  int local_c;
  short local_8;
  short local_6;

  STFishC::sub_004162B0(this,&local_8,&local_6,(undefined2 *)&local_c);
  sVar1 = (short)local_c + -1;
  if (((((-1 < local_8) && (local_8 < g_worldGrid.sizeX)) && (-1 < local_6)) &&
      ((((local_6 < g_worldGrid.sizeY && (-1 < sVar1)) &&
        ((sVar1 < g_worldGrid.sizeZ &&
         ((this_00 = STGridAt3D(g_worldGrid, local_8, local_6, sVar1).objects[0],
          this_00 != nullptr && (this_00->value_20 == 1000)))))) &&
       (iVar2 = this_00->GetObjectTypeId(), iVar2 == 0x6e)))) &&
     (((*(int *)&this_00->field_0x18 == STField<int>(this,0x255) &&
       (iVar2 = thunk_FUN_004dd740((int)this_00), iVar2 == 0)) &&
      (iVar2 = thunk_FUN_004dd6c0(this_00,STField<undefined4>(this,0x18)), iVar2 != 0)))) {
    thunk_FUN_004dd770(this_00,STField<int>(this,0x18));
    thunk_FUN_00416270(this_00,&local_8,(int *)&local_6,&local_c);
    iVar2 = thunk_FUN_004ad650((STT3DSprC *)((int)&this_00[0xd].vtable + 1));
    *param_2 = iVar2;
    *param_1 = (short)local_c + -0x5a;
    return 1;
  }
  return 0;
}

