#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4
FUN_00754390(AnonShape_00753C80_4C8E695D *param_1,ushort *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar2;
  int iVar1;
  int iVar3;

  iVar1 = FUN_00755970((AnonShape_00755970_4FB144E0 *)param_1,param_2,1);
  if (0 < iVar1) {
    iVar3 = *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8) +
            param_1->field_0008->field_0034;
    iVar2 = param_1->field_0010;
    *param_4 = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    *param_3 = *(undefined4 *)(iVar3 + iVar2 + 0x14);
    return 0;
  }
  return 0xfffffffc;
}

