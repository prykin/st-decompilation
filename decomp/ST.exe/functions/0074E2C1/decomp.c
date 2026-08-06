#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074e2c1(int param_1)

{
  HoloTy *pHVar1;
  HoloTy *pHVar2;

  pHVar2 = *(HoloTy **)(param_1 + 8);
  while (pHVar2 != nullptr) {
    pHVar1 = *(HoloTy **)&pHVar2->field_0x4;
    Library::MSVCRT::FUN_0072e2b0(pHVar2);
    pHVar2 = pHVar1;
  }
  return;
}

