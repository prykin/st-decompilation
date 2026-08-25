#include "../../pseudocode_runtime.h"


void __fastcall FUN_00636750(AnonShape_00636750_9523C2A1 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_002C != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1->field_002C + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = param_1->field_002C;
        if (((uVar4 < STField<uint>(iVar3,0xC)) &&
            (iVar3 = STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C), iVar3 != 0)) &&
           (STField<int>(iVar3,0x4) < 0)) {
          uVar2 = thunk_FUN_006364b0(param_1->field_0004);
          STField<uint>(iVar3,0x4) = uVar2;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}

