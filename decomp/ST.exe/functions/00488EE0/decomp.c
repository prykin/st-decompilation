#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00488EE0 returns return of FUN_004e8030 @ 00488F18 */

int __thiscall FUN_00488ee0(void *this,undefined1 *param_1)

{
  int iVar1;

  *param_1 = 1;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = STField<undefined4>(this,0x6f7);
  iVar1 = thunk_FUN_004e8030(STField<int>(this,0x6f7));
  param_1[6] = (char)iVar1;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return iVar1;
}

