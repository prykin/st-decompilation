#include "../../pseudocode_runtime.h"


int __thiscall
FUN_00631910(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  DArrayTy *pDVar1;
  uint uVar3;
  undefined4 local_28 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_28, 0, 0x24); /* compiler bulk-zero initialization */
  local_28[1] = param_2;
  uVar3 = 0;
  local_18 = param_5;
  local_c = param_8;
  local_28[2] = param_3;
  local_28[3] = param_4;
  local_28[0] = param_1;
  local_14 = param_6;
  local_10 = param_7;
  local_8 = 0;
  if (*(int *)((int)this + 0x69) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x24,10);
    *(DArrayTy **)((int)this + 0x69) = pDVar1;
  }
  if (*(uint **)((int)this + 0x69) != (uint *)0x0) {
    uVar3 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x69),local_28);
    if ((int)uVar3 < 0) goto LAB_006319a2;
  }
  thunk_FUN_00631c20(this,param_5,param_6,(byte)param_2,param_1,param_3,uVar3);
LAB_006319a2:
  return uVar3 + 1;
}

