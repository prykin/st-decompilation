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
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) +
            *(int *)(param_1->field_0008 + 0x34);
    iVar2 = param_1->field_0010;
    *param_4 = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    *param_3 = *(undefined4 *)(iVar3 + iVar2 + 0x14);
    return 0;
  }
  return 0xfffffffc;
}

