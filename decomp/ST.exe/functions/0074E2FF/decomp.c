#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=4, ignored=0, unknown=0 */

int __fastcall FUN_0074e2ff(AnonShape_0074E2FF_47CF731F *param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = param_1->field_0008;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
    param_1->field_0004 = param_1->field_0004 + -1;
    param_1->field_0008 = uVar2;
  }
  return iVar1;
}

