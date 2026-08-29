#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004ea530(void *this,short param_1,short param_2,short param_3)

{
  RecoveredRecordView_004EA460_01FB090B *this_00;
  int iVar1;

  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) &&
     ((param_3 < g_worldGrid.sizeZ &&
      (this_00 = (RecoveredRecordView_004EA460_01FB090B *)
                 STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0],
      this_00 != nullptr)))) {
    /* ST_CALLSITE[004EA5A9]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar1 = STStructuralVirtualCall<undefined4>(this_00, 0x2C);
    /* ST_CALLSITE[004EA5B5]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    if ((iVar1 != 0x37) && (iVar1 = STStructuralVirtualCall<undefined4>(this_00, 0x2C), iVar1 != 0x6c)) {
      return 0;
    }

    iVar1 = thunk_FUN_004e8b10(this_00,STField<uint>(this,0x24));
    if (iVar1 != 0) {

      thunk_FUN_004ea460(this,*(int *)&this_00->field_0x18,this_00);
    }
  }
  return 0;
}

