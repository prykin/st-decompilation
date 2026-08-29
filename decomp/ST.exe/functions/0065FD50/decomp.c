#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00664960 @ 006657F4 -> killed on
   every CFG path | 00664960 @ 00666416 -> read as EAX on every CFG path | 00664960 @ 006668F4 ->
   read as EAX on every CFG path | 00664960 @ 00666A5D -> read as EAX on every CFG path */

int __thiscall FUN_0065fd50(void *this,int param_1,int param_2,short param_3,undefined4 param_4)

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
        /* ST_CALLSITE[0065FDC2]: CALL dword ptr [EDX + 0x8] */
        this_00->sub_00498D20(1,(short)local_10);
        return 0;
      }
    }
  }
  return -1;
}

