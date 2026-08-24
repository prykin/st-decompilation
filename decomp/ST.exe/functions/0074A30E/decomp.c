#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DB78+0xA8

   [STVTableApplier] Virtual slot 007A13D0+0xA8

   [STVTableApplier] Virtual slot 007A15E8+0xA8 */

undefined4 __thiscall FUN_0074a30e(int *param_1,int param_2)

{
  uint uVar1;
  if ((param_2 == 0) || (param_1[0x19] == 0)) {
    uVar1 = 1;
  }
  else {
    /* ST_CALLSITE[0074A32A]: CALL dword ptr [EAX + 0x38] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x38))(param_2);
    /* ST_CALLSITE[0074A332]: CALL dword ptr [EAX + 0xac] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0xac))(param_2);
    /* ST_CALLSITE[0074A33D]: CALL dword ptr [EAX + 0x3c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x3c))(param_2);
    uVar1 = 0;
  }
  return uVar1;
}

