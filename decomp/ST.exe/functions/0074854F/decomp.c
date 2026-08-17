#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __thiscall FUN_0074854f(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3,
   undefined4 param_4, double param_5) Evidence: x87 double-width accesses or exact split stores
   into an independently typed double field prove physical EBP slot boundaries; merged_slots={4=1};
   sites=00748562 FLD double ptr [EBP + 0x18] */

undefined4 __thiscall
FUN_0074854f(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = STField<int *>(this,0x18);
  if (piVar1 == nullptr) {
    uVar2 = 0x80040209;
  }
  else {
    /* ST_CALLSITE[00748577]: CALL dword ptr [ECX + 0x44] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

