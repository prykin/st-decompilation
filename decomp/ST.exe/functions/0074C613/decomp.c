#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined1
   __stdcall FUN_0074c613(AnonShape_0074C613_A217E84A * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: x87 double-width
   accesses or exact split stores into an owner field independently typed or consumed as double
   prove physical EBP slot boundaries; merged_slots={5=1}; sites=0074C616 FLD double ptr [EBP +
   0x1c] | 0074C63A FLD double ptr [EBP + 0x1c]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=undefined1
   __stdcall FUN_0074c613(AnonShape_0074C613_A217E84A * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: retire script-owned
   dynamic x87 storage; observed_ebp_offsets=[28]; custom_storage=[Stack[0x4]:4, Stack[0x8]:4,
   Stack[0xc]:4, Stack[0x10]:4, Stack[0x14]:4, Stack[0x18]:8] */

undefined1
FUN_0074c613(AnonShape_0074C613_A217E84A *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4,undefined4 param_5,double param_6)

{
  undefined1 uVar1;

  FUN_007482d8((AnonShape_007482D8_1685BA8E *)param_1,param_2,param_3,param_4,param_5,param_6);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*param_1->field_00CC + 100))(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

