#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0055b9f0(void *this,AnonShape_0055B9F0_F484F6C2 *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x110);
  uVar4 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        pbVar3 = (byte *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
      }
      else {
        pbVar3 = nullptr;
      }
      if ((((*(int *)(pbVar3 + 8) == param_1->field_0008) && (*pbVar3 == param_1->field_0000)) &&
          (pbVar3[1] == param_1->field_0001)) &&
         (((*(short *)(pbVar3 + 2) == param_1->field_0002 &&
           (*(short *)(pbVar3 + 4) == param_1->field_0004)) &&
          ((pbVar3[6] == param_1->field_0006 && (pbVar3[7] == param_1->field_0007)))))) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0xffffffff;
}

