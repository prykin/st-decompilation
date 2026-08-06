#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_00749a93(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00746ee3(this,param_2,param_3,(LPCRITICAL_SECTION)((int)this + 0x7c),param_1);
  STField<undefined4>(this,0x50) = 0;
  FUN_0074d1ea((void *)((int)this + 0x54),0);
  FUN_0074d1ea((void *)((int)this + 0x58),1);
  FUN_0074d1ea((void *)((int)this + 0x5c),1);
  STField<undefined4>(this,0x60) = 0;
  STField<undefined4>(this,100) = 0;
  STField<undefined4>(this,0x68) = 0;
  STField<undefined4>(this,0x6c) = 0;
  STField<undefined4>(this,0x70) = 0;
  STField<undefined4>(this,0x74) = 0;
  STField<undefined4>(this,0x78) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
  STField<undefined4>(this,0xb8) = 0;
  STField<undefined4>(this,0xac) = 0;
  STField<undefined4>(this,0xb0) = 1;
  STField<undefined4>(this,0xb4) = 0;
  STField<undefined4>(this,0xbc) = 0;
  STField<undefined4>(this,0xc0) = 0;
  *(VTable_007A13D0 **)this = &VTable_007A13D0;
  STField<VTable_007A1390 *>(this,0xc) = &VTable_007A1390;
  STField<VTable_007A1378 *>(this,0x10) = &VTable_007A1378;
  SetEvent(STField<HANDLE>(this,0x5c));
  return this;
}

