#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00660910(void *this,short param_1,short param_2,short param_3)

{
  STWorldObject *pSVar1;
  undefined4 uVar2;
  STGroupBoatC *this_00;
  undefined1 local_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  undefined2 local_8;
  undefined1 local_6;

  STField<undefined4>(this,0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) && (param_3 < g_worldGrid.sizeZ)) {
    pSVar1 = STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0];
    if (pSVar1 != nullptr) {
      local_c = *(undefined1 *)&pSVar1[1].vtable;
      uStack_b = *(undefined2 *)&pSVar1[1].field_0xe;
      uVar2 = *(undefined4 *)&pSVar1->field_0x18;
      uStack_9 = (undefined1)uVar2;
      local_8 = (undefined2)((uint)uVar2 >> 8);
      local_6 = (undefined1)((uint)uVar2 >> 0x18);
      if ((STField<ushort>(this,0x7d) != 0xfffe) &&
         (g_allPlayers_007FA174 != nullptr)) {
        this_00 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x7d));
        if (this_00 != nullptr) {
          /* ST_CALLSITE[006609E2]: CALL dword ptr [EDX + 0x8] */
          this_00->sub_00498D20(0xf,(short)&local_c);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

