#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=17, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006c7570(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 undefined4 *param_5,int param_6,int param_7,byte param_8)

{
  uint uVar1;

  if (((param_7 != 0) && (param_7 * 2 <= (int)param_5)) && (param_7 * 2 <= param_6)) {
    if (param_2 == 0) {
      param_2 = FUN_006b4fa0((int *)param_1);
    }
    uVar1 = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
    FUN_006d7830((undefined1 *)(((param_1->field_0008 - param_4) + -1) * uVar1 + param_2 + param_3),
                 -uVar1,param_5,param_6,param_7,param_8);
    return;
  }
  FUN_006b5ee0(param_1,param_2,param_3,param_4,(int)param_5,param_6,param_8,0xd);
  return;
}

