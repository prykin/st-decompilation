#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_006604b0(AiFltClassTy *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGroupBoatC *this;
  uint local_c;
  uint local_8;
  local_c = 0;
  local_8 = 0;
  param_1->field_00A7 = 0;
  /* ST_CALLSITE[006604CA]: CALL 0x0040343b; direct=0040343B AiFltClassTy::sub_0065D9C0 */
  uVar1 = AiFltClassTy::sub_0065D9C0(param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT22(extraout_var,uVar1) != 0) {
    local_c = param_3;
    if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
      this = thunk_FUN_0042b760((char)param_1->field_0024,param_1->field_007D);
      if (this != nullptr) {
        /* ST_CALLSITE[00660505]: CALL dword ptr [EDX + 0x8] */
        this->sub_00498D20(6,(short)&local_c);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

