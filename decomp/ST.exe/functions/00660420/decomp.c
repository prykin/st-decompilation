#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00660420(void *this,undefined4 param_1)

{
  STGroupBoatC *this_00;
  undefined4 local_1c [6];

  STField<undefined4>(this,0xa7) = 0;
  memset(local_1c, 0, 0x18); /* compiler bulk-zero initialization */
  local_1c[0] = 0;
  local_1c[2] = param_1;
  if ((STField<ushort>(this,0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr))
  {
    this_00 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x7d));
    if (this_00 != nullptr) {
      this_00->sub_00498D20(2,(short)local_1c);
      return 0;
    }
  }
  return 0xffffffff;
}

