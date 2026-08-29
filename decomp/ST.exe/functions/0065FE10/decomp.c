#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00664960 @ 006652CB -> read as EAX on
   every CFG path | 00664960 @ 00666B64 -> read as EAX on every CFG path */

int __fastcall FUN_0065fe10(AiFltClassTy *param_1,undefined4 param_2,int param_3,short *param_4)

{
  short sVar1;
  ushort uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar3;
  DArrayTy *array;
  STGroupBoatC *this;
  int iVar4;
  DArrayTy **ppDVar5;
  DArrayTy *local_38 [5];
  uint local_24;
  uint local_20;
  DArrayTy *local_1c;
  DArrayTy *local_c;
  int local_8;

  ppDVar5 = local_38;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppDVar5 = nullptr;
    ppDVar5 = ppDVar5 + 1;
  }
  local_c = nullptr;
  local_8 = 0;
  param_1->field_00A7 = 0;
  /* ST_CALLSITE[0065FE37]: CALL 0x0040343b; direct=0040343B AiFltClassTy::sub_0065D9C0 */
  uVar2 = AiFltClassTy::sub_0065D9C0(param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT22(extraout_var,uVar2) == 0) {
    return -1;
  }
  sVar1 = param_1->field_0039;
  if (param_3 == 0xdd) {
    uVar3 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
  }
  else if (param_3 == 0xde) {
    uVar3 = -(uint)(sVar1 != 3) & 0x4f;
  }
  else if (param_3 == 0xe0) {
    uVar3 = (sVar1 != 3) - 1 & 0x61;
  }
  else {
    uVar3 = 0;
  }
  /* ST_CALLSITE[0065FE9A]: CALL 0x004038e1; direct=004038E1 AiFltClassTy::sub_0065FA60 */
  array = (DArrayTy *)AiFltClassTy::sub_0065FA60(param_1,uVar3,1,param_4);
  if (array != nullptr) {
    sVar1 = param_1->field_0039;
    if (sVar1 < 1) {
LAB_0065fec9:
      iVar4 = 0;
    }
    else if (sVar1 < 3) {
      iVar4 = 0x3b;
    }
    else {
      if (sVar1 != 3) goto LAB_0065fec9;
      iVar4 = 0x60;
    }
    /* ST_CALLSITE[0065FED2]: CALL 0x004038e1; direct=004038E1 AiFltClassTy::sub_0065FA60 */
    local_c = (DArrayTy *)AiFltClassTy::sub_0065FA60(param_1,iVar4,1,nullptr);
    if (local_c != nullptr) {
      sVar1 = param_1->field_0039;
      local_38[0] = nullptr;
      if (param_3 == 0xdd) {
        local_24 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (param_3 == 0xde) {
        local_24 = -(uint)(sVar1 != 3) & 0x4f;
      }
      else if (param_3 == 0xe0) {
        local_24 = (sVar1 != 3) - 1 & 0x61;
      }
      else {
        local_24 = 0;
      }
      local_20 = 0;
      local_38[1] = array;
      local_1c = local_c;
      if (((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) &&
         (this = thunk_FUN_0042b760((char)param_1->field_0024,param_1->field_007D),
         this != nullptr)) {
        /* ST_CALLSITE[0065FF66]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STGroupBoatC;/undefined2;/undefined2 */
        this->sub_00498D20(8,(short)local_38);
        goto LAB_0065ff72;
      }
    }
  }
  local_8 = -1;
LAB_0065ff72:
  if (array != nullptr) {
    DArrayDestroy(array);
  }
  if (local_c != nullptr) {
    DArrayDestroy(local_c);
  }
  return local_8;
}

