#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0069C8B0 -> 0069C790 @ 0069C9FA */

int FUN_0069c790(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  RecoveredRecord_0069C710_92A26D6D *local_8;

  local_c = 0;
  if (param_3 < param_1[3]) {
    local_8 = (RecoveredRecord_0069C710_92A26D6D *)(param_1[2] * param_3 + param_1[7]);
  }
  else {
    local_8 = nullptr;
  }
  if (param_4 < param_1[3]) {
    iVar5 = param_1[2] * param_4 + param_1[7];
  }
  else {
    iVar5 = 0;
  }
  iVar3 = 0;
  if ((local_8 != nullptr) && (iVar5 != 0)) {
    iVar3 = STField<int>(iVar5,0xC);
    uVar4 = 0;
    uVar2 = STField<uint>(iVar3,0xC);
    if (0 < (int)uVar2) {
      do {
        if (uVar4 < uVar2) {
          piVar1 = (int *)(STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C));
        }
        else {
          piVar1 = nullptr;
        }
        iVar3 = *piVar1;

        uVar2 = thunk_FUN_0069c710(param_2,iVar3,local_8);
        if (-1 < (int)uVar2) {
          *(uint *)(param_2 + 10 + iVar3 * 0xe) = param_3;
          local_c = local_c + 1;
        }
        iVar3 = STField<int>(iVar5,0xC);
        uVar4 = uVar4 + 1;
        uVar2 = STField<uint>(iVar3,0xC);
      } while ((int)uVar4 < (int)uVar2);
    }
    DArrayDestroy(*(DArrayTy **)(iVar5 + 0xc));
    thunk_FUN_0069c670((DArrayTy *)param_1,param_2,param_4);
    iVar3 = local_c;
  }
  return iVar3;
}

