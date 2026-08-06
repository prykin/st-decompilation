#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006202B0 -> 00620520 @ 0062032F; FUN_006202b0 parameter param_1 */

uint __thiscall
FUN_00620520(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DArrayTy *pDVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (STField<int>(this,0xd1) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
    STField<DArrayTy *>(this,0xd1) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0xd1) != nullptr) {
    uVar2 = Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0xd1),&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

