#include "../../pseudocode_runtime.h"


void __thiscall FUN_00618b40(void *this,undefined4 param_1,ushort param_2)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;

  iVar1 = STField<int>(this,0x5e);
  if (iVar1 == 0) {
    STField<ushort>(this,0x58) = param_2;
    STField<undefined4>(this,0x20) = param_1;
    return;
  }
  uVar2 = 0;
  if (0 < STField<int>(iVar1,0xC)) {
    bVar3 = STField<int>(iVar1,0xC) != 0;
    do {
      if (((bVar3) && (iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C), iVar1 != 0)) &&
         (this_00 = *(void **)(iVar1 + 0x18), this_00 != nullptr)) {
        thunk_FUN_0061d080(this_00,param_1,param_2);
      }
      iVar1 = STField<int>(this,0x5e);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < STField<uint>(iVar1,0xC);
    } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
    STField<ushort>(this,0x58) = param_2;
    STField<undefined4>(this,0x20) = param_1;
    return;
  }
  STField<ushort>(this,0x58) = param_2;
  STField<undefined4>(this,0x20) = param_1;
  return;
}

