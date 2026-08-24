#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=2, ignored=0, unknown=0 */

int FUN_00754390(AnonShape_00753C80_4C8E695D *param_1,ushort *param_2,undefined4 *param_3,
                undefined4 *param_4)

{
  int iVar2;
  int iVar1;
  int iVar3;

  iVar1 = FUN_00755970(param_1,param_2,1);
  if (0 < iVar1) {
    iVar3 = *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8) +
            param_1->field_0008->field_0034;
    iVar2 = param_1->field_0010;
    *param_4 = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    *param_3 = *(undefined4 *)(iVar3 + iVar2 + 0x14);
    return 0;
  }
  return -4;
}

