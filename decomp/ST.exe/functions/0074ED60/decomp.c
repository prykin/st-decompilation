#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int __stdcall
   FUN_0074ed60(int * param_1, double param_2) Evidence: x87 double-width accesses or exact split
   stores into an independently typed double field prove physical EBP slot boundaries;
   merged_slots={1=1}; sites=0074ED7A FLD double ptr [EBP + 0xc]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=int __stdcall
   FUN_0074ed60(int * param_1, double param_2) Evidence: retire script-owned dynamic x87 storage;
   observed_ebp_offsets=[12]; custom_storage=[Stack[0x4]:4, Stack[0x8]:8] */

int FUN_0074ed60(int *param_1,double param_2)

{
  int iVar1;

  iVar1 = FUN_0074e88e(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

