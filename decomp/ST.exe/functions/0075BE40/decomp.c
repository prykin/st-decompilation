#include "../../pseudocode_runtime.h"


undefined4 FUN_0075be40(AnonShape_0075BE40_B9FD5FDF *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;

  iVar1 = param_1->field_01AA;
  param_1->field_01A6->field_005C =
       param_1->field_01A6->field_005C +
       ((int)(*(int *)(iVar1 + 0xc) + (*(int *)(iVar1 + 0xc) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (*(code *)param_1->field_01A6->field_0008)(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < param_1->field_0136) {
    puVar4 = (undefined4 *)(iVar1 + 0x14);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < param_1->field_0136);
  }
  uVar2 = param_1->field_010C;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  return 1;
}

