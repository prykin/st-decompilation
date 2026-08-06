#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_0065fd50(void *this,int param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  STGroupBoatC *this_00;
  short local_10 [3];
  undefined4 uStack_a;

  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  STPiece<0,2>(uStack_a) = 0;
  STPiece<2,2>(uStack_a) = 0;
  STField<undefined4>(this,0xa7) = 0;
  iVar1 = thunk_FUN_00675950(param_1,param_2,param_3,local_10,local_10 + 1,local_10 + 2,0);
  if (iVar1 != 0) {
    if ((STField<ushort>(this,0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr)
       ) {
      uStack_a = param_4;
      this_00 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x7d));
      if (this_00 != nullptr) {
        this_00->sub_00498D20(1,(short)local_10);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

