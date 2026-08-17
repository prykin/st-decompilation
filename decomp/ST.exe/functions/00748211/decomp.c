#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DC74+0x2C

   [STVTableApplier] Virtual slot 0079DE90+0x2C

   [STVTableApplier] Virtual slot 007A14C8+0x2C

   [STVTableApplier] Virtual slot 007A1780+0x2C

   [STVTableApplier] Virtual slot 007A1820+0x2C

   [STVTableApplier] Virtual slot 007A1908+0x2C

   [STVTableApplier] Virtual slot 007A19A8+0x2C */

int FUN_00748211(int param_1,int param_2)

{
  int iVar1;

  if (param_2 == 0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    /* ST_CALLSITE[0074822D]: CALL dword ptr [EAX + 0x20] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x20))(param_2);
    if (iVar1 < 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

