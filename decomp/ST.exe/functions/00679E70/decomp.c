#include "../../pseudocode_runtime.h"


int __thiscall FUN_00679e70(void *this,short param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar5 = 0;
  iVar4 = STField<int>(this,0x695);
  uVar1 = *(uint *)(iVar4 + 0xc);
  if (0 < (int)uVar1) {
    do {
      if (((iVar4 != 0) && (-1 < (int)uVar5)) && ((int)uVar5 < (int)uVar1)) {
        if (uVar5 < uVar1) {
          puVar2 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar5 + *(int *)(iVar4 + 0x1c));
        }
        else {
          puVar2 = nullptr;
        }
        if (((puVar2[1] != 0) && ((AiTactClassTy *)*puVar2 != nullptr)) &&
           (iVar3 = AiTactClassTy::sub_0068E290((AiTactClassTy *)*puVar2,param_1), iVar3 != 0)) {
          return iVar3;
        }
      }
      iVar4 = STField<int>(this,0x695);
      uVar5 = uVar5 + 1;
      uVar1 = *(uint *)(iVar4 + 0xc);
    } while ((int)uVar5 < (int)uVar1);
  }
  return 0;
}

