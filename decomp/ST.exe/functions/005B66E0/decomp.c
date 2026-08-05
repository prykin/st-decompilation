#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DFA30 -> 005B66E0 @ 005E0239

   [STPrototypeApplier] Propagated return.
   Evidence: 005B66E0 returns return of sub_006E60A0 @ 005B6719 */

int __fastcall FUN_005b66e0(MTaskTy *param_1)

{
  int iVar1;

  memset(&param_1->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
  param_1->field_0025 = param_1->field_000C->field_0014;
  param_1->field_0029 = 0;
  param_1->field_002D = 10;
  param_1->field_0031 = param_1->field_0008;
  iVar1 = sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x1d);
  return iVar1;
}

