#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_005ff3a0(void *this,undefined2 *param_1,undefined2 *param_2,short *param_3)

{
  STGameObjC *this_00;
  int iVar1;

  this_00 = STAllPlayersC::GetObjPtr
                      (g_allPlayers_007FA174,STField<char>(this,0x20a),
                       STField<ushort>(this,0x224),CASE_1);
  if (this_00 != nullptr) {
    iVar1 = this_00->vfunc_F8();
    if (iVar1 != 0) {
      thunk_FUN_00416270(this_00,param_1,(int *)param_2,(int *)param_3);
      *param_3 = *param_3 + -0x1e;
      return 1;
    }
  }
  return 0;
}

