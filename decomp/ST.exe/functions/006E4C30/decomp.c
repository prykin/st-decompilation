#include "../../pseudocode_runtime.h"


void __thiscall FUN_006e4c30(void *this,RecoveredRecord_006E4C30_151FBAE9 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;


  iVar3 = FUN_006e45a0(this,param_1->field_0014);
  if ((iVar3 != 0) && (STField<int>(iVar3,0x8) != 0)) {
    *(undefined4 *)(STField<int>(iVar3,0x8) + 4) = 0;
    while( true ) {
      iVar1 = STField<int>(iVar3,0x8);
      uVar2 = STField<uint>(iVar1,0x4);
      if (STField<uint>(iVar1,0xC) <= uVar2) break;
      piVar4 = (int *)(STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C));
      STField<uint>(iVar1,0x4) = uVar2 + 1;
      if (piVar4 == nullptr) {
        return;
      }
      Library::Ourlib::SAPP::FUN_006e4bb0(piVar4);
    }
  }
  return;
}

