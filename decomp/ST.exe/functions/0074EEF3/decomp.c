#include "../../pseudocode_runtime.h"


undefined4 * __thiscall
FUN_0074eef3(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  FUN_0074e7b1(this,param_1,param_2,param_3,param_4);
  /* ST_CALLSITE[0074EF0F]: CALL dword ptr [0x0085bb88] */
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  STField<undefined4>(this,0x48) = 1;
  STField<undefined4>(this,0x38) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x44) = 0;
  *(VTable_007A1D10 **)this = &VTable_007A1D10;
  STField<VTable_007A1CC8 *>(this,4) = &VTable_007A1CC8;
  STField<VTable_007A1CB8 *>(this,8) = &VTable_007A1CB8;
  return this;
}

