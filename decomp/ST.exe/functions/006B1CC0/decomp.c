#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006B1CC0 @ 0056B2EF; data at 008075A8 | 0056ADC0 -> 006B1CC0 @ 0056B32D;
   data at 008075A8 | 0056D740 -> 006B1CC0 @ 0056D9FA; data at 008075A8 | 0056D740 -> 006B1CC0 @
   0056DA39; data at 008075A8 */

void FUN_006b1cc0(DDXContext_008075A8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (param_2 < 0) {
    param_2 = 10;
  }
  param_1->field_01B4 = 1;
  uVar1 = *(undefined4 *)(&param_1->field_0x11c + param_2 * 8);
  uVar2 = *(undefined4 *)(&param_1->field_0x120 + param_2 * 8);
  *(undefined4 *)(&param_1->field_0x11c + param_2 * 8) = param_3;
  *(undefined4 *)(&param_1->field_0x120 + param_2 * 8) = param_4;
  *(undefined4 *)(&param_1->field_0x174 + param_2 * 4) = 1;
  if (param_5 != nullptr) {
    *param_5 = uVar1;
    param_5[1] = uVar2;
  }
  return;
}

