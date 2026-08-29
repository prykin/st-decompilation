#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 005FD6A0 returns return of sub_006E60A0 @ 005FD6C6 */

int __fastcall FUN_005fd6a0(RecoveredRecord_005FD6A0_EC193285 *param_1)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;

  iVar1 = sub_006E60A0(param_1,local_24);
  return iVar1;
}

