#include "../../pseudocode_runtime.h"


int __thiscall
FUN_00631aa0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  DArrayTy *pDVar1;
  int iVar2;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  memset(local_30, 0, 0x29); /* compiler bulk-zero initialization */
  local_30[1] = param_2;
  local_30[0] = param_1;
  local_30[2] = param_3;
  local_30[3] = param_4;
  local_20 = param_5;
  local_18 = param_7;
  local_1c = param_6;
  local_14 = param_8;
  if (STField<int>(this,0x6d) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x29,10);
    STField<DArrayTy *>(this,0x6d) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0x6d) != nullptr) {
    iVar2 = Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0x6d),local_30);
    return iVar2 + 1;
  }
  return 1;
}

