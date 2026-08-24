#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CDC5 @ 006D7212 | 0074C96C -> 0074CDC5 @ 0074C99D */

undefined4 * __thiscall
RecoveredClass_0074CDC5::FUN_0074cdc5
          (RecoveredClass_0074CDC5 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  sub_0074C38F(this,param_1,param_2,param_3,text);
  *(undefined4 *)&this->field_0xe4 = 0;
  this->field_00E0 = param_2;
  this->field_0000 = &VTable_007A1950;
  this->field_000C = &VTable_007A1908;
  this->field_0010 = &VTable_007A18F0;
  this->field_0098 = &VTable_007A18C8;
  return &this->field_0000;
}

