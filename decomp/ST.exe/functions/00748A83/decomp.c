#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: every reachable RET receives full EAX from the same incoming pointer parameter this
   (ordinal=0); no intervening full or partial accumulator definition changes that value; machine
   CFG audit: used=1, ignored=1, unknown=0

   [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable this with evidence-backed structure
   /SubmarineTitans/Recovered/Classes/RecoveredClass_00748A83 (current recovered extent=72) */

RecoveredClass_00748A83 * __thiscall
RecoveredClass_00748A83::FUN_00748a83
          (RecoveredClass_00748A83 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  this->field_000C = param_4;
  this->field_0010 = param_5;
  this->field_0014 = param_5;
  this->field_0004 = 0;
  this->field_0008 = 0;
  this->field_0018 = param_2;
  this->field_003C = 0;
  this->field_0040 = 0;
  this->field_0044 = 0;
  this->field_0000 = &VTable_007A1148;
  return this;
}

