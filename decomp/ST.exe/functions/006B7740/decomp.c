#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006b7740(int *param_1)

{
  int *piVar1;

  if (param_1 != nullptr) {
    FUN_006b76d0(param_1);
    if ((((byte *)param_1)[1] & 4) != 0) {
      /* ST_CALLSITE[006B7757]: CALL dword ptr [0x0085c0e0] */
      CoUninitialize();
    }
    piVar1 = (int *)*param_1;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006B7766]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    FUN_006a5e90((short *)param_1);
  }
  return;
}

