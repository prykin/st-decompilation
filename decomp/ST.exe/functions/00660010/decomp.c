#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00660010(AiFltClassTy *param_1)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  DArrayTy *array;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGroupBoatC *this;
  undefined4 local_14;
  DArrayTy *local_10;
  undefined2 local_c;
  undefined4 local_8;

  local_8 = 0;
  sVar1 = param_1->field_0039;
  param_1->field_00A7 = 0;
  if (0 < sVar1) {
    if (sVar1 < 3) {
      iVar4 = 0x33;
      goto LAB_00660050;
    }
    if (sVar1 == 3) {
      iVar4 = 0x62;
      goto LAB_00660050;
    }
  }
  iVar4 = 0;
LAB_00660050:
  /* ST_CALLSITE[00660063]: CALL 0x004038e1; direct=004038E1 AiFltClassTy::sub_0065FA60 */
  array = (DArrayTy *)AiFltClassTy::sub_0065FA60(param_1,iVar4,(sVar1 != 3) - 1 & 2,nullptr);
  if (array == nullptr) {
    return 0xfffffffe;
  }
  /* ST_CALLSITE[0066007B]: CALL 0x0040343b; direct=0040343B AiFltClassTy::sub_0065D9C0 */
  uVar3 = AiFltClassTy::sub_0065D9C0(param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT22(extraout_var,uVar3) == 0) {
    DArrayDestroy(array);
    return 0xffffffff;
  }
  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = thunk_FUN_0042b760((char)param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      if (param_1->field_0039 == 3) {
        local_14 = 1;
        local_10 = nullptr;
        local_c = 0;
        /* ST_CALLSITE[006600EE]: CALL dword ptr [EAX + 0x8] */
        this->sub_00498D20(0x11,(short)&local_14);
        uVar2 = local_8;
        DArrayDestroy(array);
        return uVar2;
      }
      local_14 = 0;
      local_10 = array;
      /* ST_CALLSITE[00660118]: CALL dword ptr [EDX + 0x8] */
      this->sub_00498D20(4,(short)&local_14);
      uVar2 = local_8;
      DArrayDestroy(array);
      return uVar2;
    }
  }
  DArrayDestroy(array);
  return 0xfffffffd;
}

