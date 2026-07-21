#include "../../pseudocode_runtime.h"


uint __thiscall
FUN_00695c10(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  DArrayTy *pDVar1;
  uint uVar2;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;

  memset(&local_24, 0, 0x1d); /* compiler bulk-zero initialization */
  local_1f = param_2;
  local_24 = param_1;
  if (param_3 < 0) {
    param_3 = 0;
  }
  local_20 = (undefined1)param_3;
  local_1b = param_4;
  local_17 = param_5;
  if (*(int *)((int)this + 0x5853) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1d,10);
    *(DArrayTy **)((int)this + 0x5853) = pDVar1;
  }
  if (*(uint **)((int)this + 0x5853) != (uint *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x5853),&local_24);
    return uVar2;
  }
  return 0xffffffff;
}

