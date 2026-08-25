#include "../../pseudocode_runtime.h"


void __fastcall FUN_0061e770(AnonShape_0061E770_099C0C21 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  iVar1 = param_1->field_00A3;
  if (iVar1 != 0) {
    uVar2 = 0;
    if (0 < STField<int>(iVar1,0xC)) {
      bVar3 = STField<int>(iVar1,0xC) != 0;
      do {
        if (bVar3) {
          iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C);
        }
        else {
          iVar1 = 0;
        }
        uVar2 = uVar2 + 1;
        STField<uint>(iVar1,0x2A) = g_playSystem_00802A38->field_00E4;
        iVar1 = param_1->field_00A3;
        bVar3 = uVar2 < STField<uint>(iVar1,0xC);
      } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
    }
    param_1->field_0046 = 1;
  }
  return;
}

