#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_0074abc4(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00749a93(this,param_1,param_2,param_3);
  STField<undefined4>(this,0xd4) = 0;
  STField<undefined4>(this,0x108) = 0;
  STField<undefined4>(this,0x10c) = 0;
  *(VTable_007A15E8 **)this = &VTable_007A15E8;
  STField<VTable_007A15A8 *>(this,0xc) = &VTable_007A15A8;
  STField<VTable_007A1590 *>(this,0x10) = &VTable_007A1590;
  STField<VTable_007A1568 *>(this,200) = &VTable_007A1568;
  STField<VTable_007A1550 *>(this,0xcc) = &VTable_007A1550;
  FUN_0074ac6e(this);
  return this;
}

