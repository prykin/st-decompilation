#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E6020 returns return of AppClassTy::PostMessage @ 006E603C */

int __thiscall FUN_006e6020(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = AppClassTy::PostMessage(STField<AppClassTy *>(this,0x10),param_1);
  return iVar1;
}

