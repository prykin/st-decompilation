#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00660a40(void *this,short param_1,short param_2,short param_3)

{
  STGroupBoatC *this_00;
  undefined4 local_8;

  STField<undefined4>(this,0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) && (param_3 < g_worldGrid.sizeZ)) {
    if (STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0] != nullptr) {
      local_8 = *(undefined4 *)
                 &STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0]->field_0x18;
      if ((STField<ushort>(this,0x7d) != 0xfffe) &&
         (g_allPlayers_007FA174 != nullptr)) {
        this_00 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x7d));
        if (this_00 != nullptr) {
          /* ST_CALLSITE[00660AF2]: CALL dword ptr [EDX + 0x8] */
          this_00->sub_00498D20(0xb,(short)&local_8);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

