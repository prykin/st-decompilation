#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=1, ignored=0, unknown=0 */

int FUN_006d7770(AnonShape_006D7770_4ECBDE32 *param_1)

{
  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = (int *)param_1->field_0020;
  if ((short)piVar1[1] == -0x50ee) {
    param_1->field_0008 = (uint)*(ushort *)(piVar1 + 2);
    param_1->field_000C = (uint)STField<ushort>(piVar1,10);
    param_1->field_0010 = (uint)*(ushort *)(piVar1 + 4);
    param_1->field_0014 = (uint)STField<ushort>(piVar1,6);
    param_1->field_0018 = 0xffffffff;
    param_1->field_0028 = piVar1[0x14] + (int)piVar1;
    param_1->field_002C = piVar1[0x15] + (int)piVar1;
    param_1->field_0024 = *piVar1 + (int)piVar1;
    param_1->field_0020 = param_1->field_0028;
  }
  else {
    iVar2 = -5;
  }
  return iVar2;
}

