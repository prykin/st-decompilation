#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00748B48 returns return of KERNEL32.DLL::InterlockedDecrement @ 00748B95 */

LONG FUN_00748b48(int *param_1)

{
  LONG LVar1;

  if (param_1[0x11] == 1) {
    LVar1 = 0;
    param_1[0x11] = 0;
  }
  else {
    /* ST_CALLSITE[00748B61]: CALL dword ptr [0x0085bc70] */
    LVar1 = InterlockedDecrement(param_1 + 0x11);
  }
  if (LVar1 == 0) {
    if ((((byte *)param_1)[1] & 8) != 0) {
      /* ST_CALLSITE[00748B77]: CALL dword ptr [EAX + 0x38] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 0x38))(param_1,0);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[0x10] = 0;
    /* ST_CALLSITE[00748B8D]: CALL dword ptr [ECX + 0x20] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0x20))((int *)(param_1[6] + 0xc),param_1);
  }
  return LVar1;
}

