#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00660420(void *this,undefined4 param_1)

{
  STGroupBoatC *this_00;
  undefined4 local_1c [6];

  *(undefined4 *)((int)this + 0xa7) = 0;
  memset(local_1c, 0, 0x18); /* compiler bulk-zero initialization */
  local_1c[0] = 0;
  local_1c[2] = param_1;
  if ((*(short *)((int)this + 0x7d) != -2) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this_00 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                 CONCAT22((short)((uint)param_1 >> 0x10),
                                          *(short *)((int)this + 0x7d)));
    if (this_00 != (STGroupBoatC *)0x0) {
      (*this_00->vtable->SetOrderData)(this_00,GROUP_BOAT_ORDER_02,local_1c);
      return 0;
    }
  }
  return 0xffffffff;
}

