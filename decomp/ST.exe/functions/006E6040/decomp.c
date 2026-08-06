#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E6040 returns return of AppClassTy::PostNextMessage @ 006E605C */

int __thiscall FUN_006e6040(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = AppClassTy::PostNextMessage(STField<AppClassTy *>(this,0x10),param_1);
  return iVar1;
}

