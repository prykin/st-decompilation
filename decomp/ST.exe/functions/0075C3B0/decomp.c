#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4 FUN_0075c3b0(AnonShape_0075BE40_B9FD5FDF *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  iVar1 = param_1->field_01AA;
  param_1->field_01A6->field_005C =
       param_1->field_01A6->field_005C +
       ((int)(STField<int>(iVar1,0xC) + (STField<int>(iVar1,0xC) >> 0x1f & 7U)) >> 3);
  STField<undefined4>(iVar1,0xC) = 0;
  /* ST_CALLSITE[0075C3E6]: CALL dword ptr [EAX + 0x8] */
  iVar2 = (*STField<code *>(param_1->field_01A6,0x0008))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < param_1->field_0136) {
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    do {
      *puVar3 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < param_1->field_0136);
  }
  STField<undefined4>(iVar1,0x14) = 0;
  STField<undefined4>(iVar1,0x28) = param_1->field_010C;
  STField<undefined4>(iVar1,0x10) = 0;
  return 1;
}

