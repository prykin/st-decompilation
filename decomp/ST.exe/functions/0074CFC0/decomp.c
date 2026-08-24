#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CFC0 @ 006D7273 | 0074C96C -> 0074CFC0 @ 0074C9D4

   [STPrototypeApplier] Propagated return.
   Evidence: 0074CFC0 returns RecoveredClass_0074CFC0::FUN_0074cfc0 this @ 0074CFF8 */

RecoveredClass_0074CFC0 * __thiscall
RecoveredClass_0074CFC0::FUN_0074cfc0
          (RecoveredClass_0074CFC0 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  sub_0074C658(this,param_1,param_2,param_3,text);
  this->field_00A8 = param_2;
  this->field_0000 = &VTable_007A19F0;
  this->field_000C = &VTable_007A19A8;
  this->field_0010 = &VTable_007A1990;
  return this;
}

