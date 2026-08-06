#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006099A0 returns return of sub_006E60A0 @ 006099C6 */

int __fastcall FUN_006099a0(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = sub_006E60A0(param_1,local_24);
  return iVar1;
}

