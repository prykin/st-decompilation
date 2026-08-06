#include "../../pseudocode_runtime.h"


uint __thiscall FUN_00604870(void *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;

  if (STField<int>(this,0x215) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x20,0x14);
    STField<DArrayTy *>(this,0x215) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0x215) != nullptr) {
    uVar2 = Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0x215),param_1);
    return uVar2;
  }
  return 0xffffffff;
}

