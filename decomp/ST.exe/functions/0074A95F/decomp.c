#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_0074a95f(void *this,int param_1,undefined4 param_2,short *param_3)

{
  FUN_0074857e(this,0,param_1,param_1 + 0x7c,param_2,param_3);
  STField<int>(this,0xd8) = param_1;
  *(VTable_007A1510 **)this = &VTable_007A1510;
  STField<VTable_007A14C8 *>(this,0xc) = &VTable_007A14C8;
  STField<VTable_007A14B0 *>(this,0x10) = &VTable_007A14B0;
  STField<VTable_007A1488 *>(this,0x98) = &VTable_007A1488;
  return this;
}

