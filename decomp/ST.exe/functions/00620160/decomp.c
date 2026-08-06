#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0061FE80 -> 00620160 @ 0061FED6; FUN_0061fe80 parameter param_1 */

uint __thiscall
FUN_00620160(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  if (STField<int>(this,0xc5) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
    STField<DArrayTy *>(this,0xc5) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0xc5) != nullptr) {
    uVar2 = Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0xc5),&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

