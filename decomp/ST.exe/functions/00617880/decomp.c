#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00617880 returns return of sub_006E60A0 @ 006178A6 */

int __fastcall FUN_00617880(RecoveredRecord_00617880_C53B1B82 *param_1)

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

