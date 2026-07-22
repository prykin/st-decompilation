#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DFA30 -> 005B66E0 @ 005E0239 */

void __fastcall FUN_005b66e0(MTaskTy *param_1)

{

  memset(&param_1->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
  *(undefined4 *)&param_1->field_0x25 = param_1->field_000C->field_0014;
  *(undefined4 *)&param_1->field_0x29 = 0;
  *(undefined4 *)&param_1->field_0x2d = 10;
  *(undefined4 *)&param_1->field_0x31 = param_1->field_0008;
  sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x1d);
  return;
}

