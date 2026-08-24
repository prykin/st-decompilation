#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755DA0 -> 00755D40 @ 00755DDA; FUN_00755da0 parameter param_1 */

void FUN_00755d40(AnonShape_00753C80_4C8E695D *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;

  sVar1 = param_1->field_000C->field_0034;
  if (sVar1 == 0) {
    /* ST_CALLSITE[00755D65]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)&param_1->field_000C->field_0x8)(param_2 + 0x18 + param_3);
  }
  else {
    iVar2 = (int)sVar1;
  }
  iVar2 = iVar2 + 8;
  Library::MSVCRT::FUN_0072da70
            ((undefined4 *)(param_2 + 0x10 + param_3),
             (AnonPointee_TLOBaseTy_0607 *)(iVar2 + param_2 + 0x10 + param_3),
             (*(short *)(param_2 + 8) - iVar2) - param_3);
  *(short *)(param_2 + 8) = *(short *)(param_2 + 8) - (short)iVar2;
  return;
}

