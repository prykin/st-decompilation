#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __stdcall FUN_007482d8(AnonShape_007482D8_1685BA8E * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: x87 double-width
   accesses or exact split stores into an independently typed double field prove physical EBP slot
   boundaries; merged_slots={5=1}; sites=007482E1 FLD double ptr [EBP + 0x1c]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=undefined4
   __stdcall FUN_007482d8(AnonShape_007482D8_1685BA8E * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: retire script-owned
   dynamic x87 storage; observed_ebp_offsets=[28]; custom_storage=[Stack[0x4]:4, Stack[0x8]:4,
   Stack[0xc]:4, Stack[0x10]:4, Stack[0x14]:4, Stack[0x18]:8]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074C613 -> 007482D8 @ 0074C62F; FUN_0074c613 parameter param_1 */

undefined4
FUN_007482d8(AnonShape_0074C613_A217E84A *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4,undefined4 param_5,double param_6)

{
  param_1->field_0074 = param_2;
  param_1->field_0078 = param_3;
  param_1->field_007C = param_4;
  param_1->field_0080 = param_5;
  param_1->field_0084 = param_6;
  return 0;
}

