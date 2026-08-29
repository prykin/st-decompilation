#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00664960 -> 00660540 @ 006653F2; MOVSX at 006653E0 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00664960 -> 00660540 @ 006653F2; MOVSX at 006653D7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00664960 -> 00660540 @ 006653F2; MOVSX at 006653D0 establishes signed source width 2 */

undefined4 __thiscall
FUN_00660540(void *this,undefined4 param_1,short param_2,short param_3,short param_4,
            undefined2 param_5,char param_6,char *param_7)

{
  STGroupBoatC *this_00;
  int iVar1;
  short *psVar2;
  short local_24;
  short local_22;
  short local_20;
  uint local_1e;
  int local_1a;
  char local_16 [15];
  ushort local_7;
  psVar2 = &local_24;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    psVar2[0] = 0;
    psVar2[1] = 0;
    psVar2 = psVar2 + 2;
  }
  *psVar2 = 0;
  ((undefined1 *)psVar2)[1] = 0;
  local_22 = param_3;
  local_1a = (int)param_6;
  local_1e = param_1;
  local_20 = param_4;
  local_24 = param_2;
  STField<undefined4>(this,0xa7) = 0;
  local_7 = param_5;
  if (param_7 != nullptr) {
    Library::MSVCRT::_strncpy(local_16,param_7,0xe);
  }
  if ((STField<ushort>(this,0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr))
  {
    this_00 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x7d));
    if (this_00 != nullptr) {
      /* ST_CALLSITE[006605D2]: CALL dword ptr [EDX + 0x8] */
      this_00->sub_00498D20(9,(short)&local_24);
      return 0;
    }
  }
  return 0xffffffff;
}

