#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E60A0 returns return of SystemClassTy::PostMessage @ 006E60BC */

int __thiscall sub_006E60A0(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = SystemClassTy::PostMessage(STField<SystemClassTy *>(this,0xc),param_1);
  return iVar1;
}

